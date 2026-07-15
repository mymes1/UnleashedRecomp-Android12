#include <api/SWA.h>
#include <user/config.h>
#include <user/paths.h>
#include <os/logger.h>
#include "first_person_patches.h"

#include <cmath>
#include <cstring>
#include <cstdio>
#include <filesystem>
#include <fmt/format.h>

// ---------------------------------------------------------------------------
// First-person / head camera — EXPERIMENTAL, best-effort implementation.
//
// This project is a *static recompilation* of the Xbox 360 binary: native C++
// structs like SWA::CCamera (api/SWA/Camera/Camera.h) only describe the fields
// someone has actually needed so far. Everything else is opaque
// SWA_INSERT_PADDING. As of writing this, nobody has mapped where the
// camera's actual world position/rotation lives inside that struct.
//
// Guessing at an offset and writing 3 floats into what might be unrelated
// engine state (a timer, a pointer, a state flag...) is a great way to
// corrupt memory and crash the game in ways that are hard to debug. So this
// file does NOT do that by default. Instead it does two things, both gated
// behind hidden config options (see user/config_def.h, section "Debug"):
//
// 1. FirstPersonLogCameraOffsets — a read-only scanner that watches the
//    CCamera object's memory every frame, looks for float triplets that move
//    like a position vector (smooth, bounded, non-zero deltas), and also
//    looks for pointers inside the camera object that resolve to something
//    shaped like SWA::CCharacterProxy (a struct we DO have fully mapped —
//    see api/SWA/CharacterUtility/CharacterProxy.h). Candidates get written
//    to a dedicated log123.txt (next to the engine's own log.txt/save data,
//    see GetUserPath() in user/paths.h) so a human, watching the actual
//    running game, can correlate "offset 0x1A4 moved from (12.3, 4.0, -8.1)
//    to (12.4, 4.0, -8.3) while I walked forward" with what they saw on
//    screen and confirm the real offset. This part is safe: it only reads
//    memory, never writes it. Unlike the engine's own logger, this file is
//    written directly on every platform (including release builds and
//    desktop, where the main logger only prints to a console).
//
// 2. FirstPersonCamera + FirstPersonCameraPositionOffset — once a real offset
//    has been confirmed (via option 1, or via IDA/Ghidra against the actual
//    game binary) and set in config.toml, this overwrites those 3 floats
//    with the tracked character's position (plus a configurable height
//    offset to approximate eye/head height) every frame. This part DOES
//    write into game memory and is only as safe as the offset you give it —
//    it is off by default (offset -1) for that reason.
//
// What's still missing for a "real" head-locked camera (tracked as a
// follow-up): actually reading the head *bone* world matrix from the
// character's skeleton (Hedgehog::Mirage::CMatrixNode /
// SWA::CMatrixNodeTransform, see api/SWA/System/MatrixNodeTransform.h) rather
// than approximating head position as "character root position + a fixed
// height offset". Bone-by-name lookup on the skeleton hasn't been mapped
// either, so this is a reasonable middle ground for a first playable version.
// ---------------------------------------------------------------------------

namespace
{
    // Dedicated log file for this feature, separate from the engine's main
    // log.txt (which, on desktop builds, only prints to a console anyway and
    // isn't written to disk at all). This one is a plain file on every
    // platform via GetUserPath(), so "where's the offset?" always has the
    // same answer regardless of OS.
    constexpr const char* kLogFileName = "log123.txt";

    FILE* GetLog123FileLocked()
    {
        static FILE* file = nullptr;
        static bool openAttempted = false;

        if (file != nullptr || openAttempted)
            return file;

        openAttempted = true;

        std::error_code ec;
        std::filesystem::create_directories(GetUserPath(), ec);

        std::filesystem::path path = GetUserPath() / kLogFileName;
        file = fopen(path.c_str(), "w");

        return file;
    }

    template<typename... Args>
    void Log123(fmt::format_string<Args...> fmt, Args&&... args)
    {
        FILE* file = GetLog123FileLocked();
        if (file == nullptr)
            return;

        std::string line = fmt::format(fmt, std::forward<Args>(args)...);
        fprintf(file, "%s\n", line.c_str());
        fflush(file);
    }

    constexpr uint32_t kScanWindowBytes = 0x400;
    constexpr uint32_t kScanWindowFloats = kScanWindowBytes / 4;

    // Only consider a triplet a "moving position-like vector" if its frame to
    // frame delta falls in this range: too small and it's just noise/a static
    // field, too large and it's almost certainly garbage or an unrelated
    // field that happened to change (e.g. a timer or a hash).
    constexpr float kMinPlausibleDelta = 0.0008f;
    constexpr float kMaxPlausibleDelta = 6.0f;
    constexpr float kMaxPlausibleMagnitude = 200000.0f;

    // How often (in frames) to flush scan results to the log. Every frame
    // would flood log123.txt uselessly since the same handful of offsets tend
    // to qualify every frame once the character is moving.
    constexpr uint32_t kLogIntervalFrames = 60;

    struct ScanState
    {
        bool hasPrev = false;
        float prev[kScanWindowFloats]{};
        uint32_t frameCounter = 0;

        // Sticky "last known good" character proxy pointer found via the scan,
        // so the override path (2) doesn't have to re-scan every frame once a
        // plausible target has been located.
        uint32_t lastCharacterProxyGuestAddr = 0;
    };

    ScanState g_scanState;

    bool IsFinitePlausible(float v)
    {
        return std::isfinite(v) && std::fabs(v) < kMaxPlausibleMagnitude;
    }

    float ReadFloatAt(const uint8_t* base, uint32_t byteOffset)
    {
        // Camera memory is stored in guest (big-endian) byte order; reuse the
        // project's be<float> wrapper so the swap is handled the same way it
        // is everywhere else in this codebase.
        return *reinterpret_cast<const be<float>*>(base + byteOffset);
    }

    // Treats `guestAddr` as a candidate pointer to an SWA::CCharacterProxy
    // (api/SWA/CharacterUtility/CharacterProxy.h — fully mapped: position at
    // +0x120, velocity at +0x130) and sanity-checks the values found there.
    bool TryReadAsCharacterProxy(uint32_t guestAddr, Hedgehog::Math::CVector& outPos, Hedgehog::Math::CVector& outVel)
    {
        // Reject null/low addresses and anything that would read past the
        // guest address space; the struct itself is 0x140 bytes.
        if (guestAddr < 0x10000 || guestAddr >= (PPC_MEMORY_SIZE - 0x140))
            return false;

        // Engine objects are always word-aligned.
        if ((guestAddr & 0x3) != 0)
            return false;

        auto* proxy = reinterpret_cast<const SWA::CCharacterProxy*>(g_memory.Translate(guestAddr));

        outPos = { proxy->m_Position.X, proxy->m_Position.Y, proxy->m_Position.Z, 0.0f };
        outVel = { proxy->m_Velocity.X, proxy->m_Velocity.Y, proxy->m_Velocity.Z, 0.0f };

        if (!IsFinitePlausible(outPos.X) || !IsFinitePlausible(outPos.Y) || !IsFinitePlausible(outPos.Z))
            return false;

        if (!IsFinitePlausible(outVel.X) || !IsFinitePlausible(outVel.Y) || !IsFinitePlausible(outVel.Z))
            return false;

        return true;
    }

    // Read-only scan of the camera object's memory. Logs position-like float
    // triplets and pointer-like values that resolve to a plausible character
    // proxy, so a human can confirm the real offsets while playing.
    void ScanCameraMemoryForOffsets(const uint8_t* cameraBase)
    {
        ScanState& state = g_scanState;
        const bool shouldLog = (state.frameCounter % kLogIntervalFrames) == 0;

        float current[kScanWindowFloats];

        for (uint32_t i = 0; i < kScanWindowFloats; i++)
            current[i] = ReadFloatAt(cameraBase, i * 4);

        if (state.hasPrev && shouldLog)
        {
            for (uint32_t i = 0; i + 2 < kScanWindowFloats; i++)
            {
                const float x = current[i];
                const float y = current[i + 1];
                const float z = current[i + 2];

                if (!IsFinitePlausible(x) || !IsFinitePlausible(y) || !IsFinitePlausible(z))
                    continue;

                const float dx = x - state.prev[i];
                const float dy = y - state.prev[i + 1];
                const float dz = z - state.prev[i + 2];
                const float delta = std::sqrt(dx * dx + dy * dy + dz * dz);

                if (delta >= kMinPlausibleDelta && delta <= kMaxPlausibleDelta)
                {
                    Log123(
                        "candidate position offset 0x{:03X}: "
                        "({:.3f}, {:.3f}, {:.3f}) delta={:.4f}",
                        i * 4, x, y, z, delta);
                }
            }

            // Pointer scan: any 4-byte-aligned value in the window that
            // resolves to a plausible SWA::CCharacterProxy is worth logging so
            // the "who is the camera following" side of the puzzle can also be
            // confirmed, not just "where does the camera write its position".
            for (uint32_t i = 0; i + 1 <= kScanWindowFloats; i++)
            {
                uint32_t asAddr = 0;
                std::memcpy(&asAddr, &current[i], sizeof(uint32_t));

                Hedgehog::Math::CVector pos{};
                Hedgehog::Math::CVector vel{};

                if (TryReadAsCharacterProxy(asAddr, pos, vel))
                {
                    Log123(
                        "candidate character-proxy pointer at camera+0x{:03X} -> "
                        "0x{:08X}, pos=({:.3f}, {:.3f}, {:.3f}) vel=({:.3f}, {:.3f}, {:.3f})",
                        i * 4, asAddr, (float)pos.X, (float)pos.Y, (float)pos.Z,
                        (float)vel.X, (float)vel.Y, (float)vel.Z);

                    state.lastCharacterProxyGuestAddr = asAddr;
                }
            }
        }

        std::memcpy(state.prev, current, sizeof(current));
        state.hasPrev = true;
        state.frameCounter++;
    }

    // Applies the actual first-person override once a position offset has
    // been confirmed and configured. Uses whatever character proxy the scan
    // has most recently located as the tracking target; if none has been
    // found yet, does nothing (rather than writing a stale/garbage position).
    void ApplyFirstPersonOverride(uint8_t* cameraBase)
    {
        const int32_t offset = Config::FirstPersonCameraPositionOffset;

        if (offset < 0 || static_cast<uint32_t>(offset) + 12 > kScanWindowBytes)
            return;

        uint32_t targetAddr = g_scanState.lastCharacterProxyGuestAddr;

        Hedgehog::Math::CVector pos{};
        Hedgehog::Math::CVector vel{};

        if (targetAddr == 0 || !TryReadAsCharacterProxy(targetAddr, pos, vel))
            return;

        auto* dest = reinterpret_cast<be<float>*>(cameraBase + offset);
        dest[0] = static_cast<float>(pos.X);
        dest[1] = static_cast<float>(pos.Y) + Config::FirstPersonHeightOffset;
        dest[2] = static_cast<float>(pos.Z);
    }
}

void FirstPersonCameraFrameUpdate(uint32_t guestCameraAddr)
{
    if (!Config::FirstPersonLogCameraOffsets && !Config::FirstPersonCamera)
        return;

    auto* cameraBase = reinterpret_cast<uint8_t*>(g_memory.Translate(guestCameraAddr));

    if (Config::FirstPersonLogCameraOffsets)
        ScanCameraMemoryForOffsets(cameraBase);

    if (Config::FirstPersonCamera)
        ApplyFirstPersonOverride(cameraBase);
}

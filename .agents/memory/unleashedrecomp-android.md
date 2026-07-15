---
name: UnleashedRecomp-Android build/RE constraints
description: Why this project can't be built/run in Replit and how to safely extend recompiled engine structs (e.g. camera) without guessing memory offsets.
---

## Environment constraints
- This repo (unofficial Android port of *Unleashed Recompiled* / Sonic Unleashed static recompilation) cannot be built or run inside a standard Replit workspace:
  - No CMake/Ninja/Clang toolchain and no Android NDK/SDK are installed here.
  - The build needs proprietary Xbox 360 game files (`default.xex`, `default.xexp`, `shader.ar`) that aren't and shouldn't be present in the repo.
  - There's no dev-server/web-preview model for this project at all — it's a native APK/desktop build the user must compile and test on their own machine per `docs/BUILDING.md`.
- Any code changes here can only be reviewed for correctness/consistency with existing patterns, never compiled or runtime-verified in this workspace.

## Working with the recompiled engine structs
- Wrapper structs under `UnleashedRecomp/api/SWA/...` (e.g. `SWA::CCamera`) only map the specific fields someone has needed so far; everything else is `SWA_INSERT_PADDING`. There is no camera position/rotation offset mapped anywhere in the repo as of writing.
- **Why:** writing into unmapped padding to "guess" a field is effectively writing into unknown/unrelated engine state (timers, pointers, flags) and risks memory corruption/crashes that are very hard to debug without a live disassembler session.
- **How to apply:** don't add speculative offsets for camera/character transform data. Prefer: (a) ask the user for a confirmed offset from their own IDA/Ghidra work against the real binary, or (b) build a read-only runtime scanner (logs candidate values/pointers without writing) so the user can confirm the right offset while playing, then gate any actual memory-write behind a config value that defaults to "off"/"unknown" (e.g. `-1`). This pattern was used for an experimental first-person camera feature (`UnleashedRecomp/patches/first_person_patches.cpp`, config keys under the "Debug" section in `UnleashedRecomp/user/config_def.h`).
- The full 4GB guest address space (`PPC_MEMORY_SIZE` in `tools/XenonRecomp/XenonUtils/ppc_context.h`) is committed as one large anonymous mapping (`UnleashedRecomp/kernel/memory.cpp`), so reading/dereferencing arbitrary in-range guest addresses during a scan is memory-safe (won't segfault) even if the data turns out to be garbage — only *writing* to a wrong offset is the actual risk.

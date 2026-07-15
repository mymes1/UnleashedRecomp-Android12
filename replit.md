# UnleashedRecomp-Android

## Overview
This is an imported GitHub project: an unofficial Android port of *Unleashed Recompiled*, a static recompilation of the Xbox 360 game *Sonic Unleashed*. It's a native C++ codebase (CMake + Android NDK) that turns the original Xbox 360 executable into native ARM64/x86 code, plus a custom Android app shell, touch controls, a mod manager, and a bundled Vulkan driver for Adreno GPUs.

This is **not** a web app / service and has no dev-server workflow. It produces an Android APK (and desktop Windows/Linux/macOS builds) via CMake + Ninja + Clang, following `docs/BUILDING.md`.

## Why this project cannot be built or run in this Replit workspace
- The build requires proprietary Sonic Unleashed game files (`default.xex`, `default.xexp`, `shader.ar`) that must be supplied by someone with a legal copy of the game. They are intentionally not part of the repo (see `UnleashedRecompLib/private/PLACE_GAME_FILES_HERE.txt`).
- For the Android target it also requires the Android NDK/SDK; none of the required native build toolchain (cmake/ninja/clang for this project, Android NDK) is installed in this workspace.
- There is no way to preview or test this project through Replit's usual web-preview workflow model — it must be built and run on the user's own machine/device.

## Working in this codebase
- Recompiled Xbox 360 game logic lives under `UnleashedRecompLib` (PPC recompiler config/symbols in `UnleashedRecompLib/config/SWA.toml`) and is exposed to native C++ patches via typed wrapper structs in `UnleashedRecomp/api/SWA/...`.
- Many of these wrapper structs (e.g. `SWA::CCamera`) only map the specific fields someone has needed so far — the rest of the struct is `SWA_INSERT_PADDING`. Do not guess offsets for unmapped fields; writing into padding can corrupt unrelated game state. New fields need to be found via decompilation (IDA/Ghidra) against the real `default.xex`, which isn't available in this workspace.
- Engine behavior patches (gameplay/camera/graphics fixes) live in `UnleashedRecomp/patches/*.cpp`, typically as `PPC_FUNC` hooks or `midasm_hook` entries declared in `UnleashedRecompLib/config/SWA.toml`.

## User preferences
(none recorded yet)

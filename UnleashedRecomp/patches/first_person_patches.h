#pragma once

#include <cstdint>

// EXPERIMENTAL / best-effort first-person camera support.
//
// See first_person_patches.cpp for the full explanation of what this does and,
// importantly, what it does NOT know for certain (the real camera position
// offset inside SWA::CCamera is unmapped reverse-engineering work that has to
// be confirmed by a human looking at the running game).
//
// Called once per frame from the SWA::CCamera::UpdateSerial hook in
// camera_patches.cpp, after the game's own camera logic has already run for
// the frame. `guestCameraAddr` is the guest address (not a host pointer) of
// the SWA::CCamera instance being updated this frame.
void FirstPersonCameraFrameUpdate(uint32_t guestCameraAddr);

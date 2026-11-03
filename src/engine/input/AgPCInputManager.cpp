#include "engine/input/AgPCInputManager.gen.h"

// STUB: 0x523750 AgPCInputManager::vfn_0 (157 bytes)
void AgPCInputManager::vfn_0()
{
}

// STUB: 0x524890 AgPCInputManager::vfn_4 (174 bytes)
void AgPCInputManager::vfn_4()
{
}

// STUB: 0x524940 AgPCInputManager::vfn_5 (77 bytes)
void AgPCInputManager::vfn_5()
{
}

// STUB: 0x524C50 AgPCInputManager::vfn_2 (5 bytes)
void AgPCInputManager::vfn_2()
{
}

// STUB: 0x524C60 AgPCInputManager::vfn_1 (5 bytes)
void AgPCInputManager::vfn_1()
{
}

// STUB: 0x524C70 AgPCInputManager::fn_524C70 (127 bytes)
void AgPCInputManager::fn_524C70()
{
}

// STUB: 0x524CF0 AgPCInputManager::fn_524CF0 (198 bytes)
void AgPCInputManager::fn_524CF0()
{
}

// STUB: 0x524DC0 AgPCInputManager::fn_524DC0 (496 bytes)
void AgPCInputManager::fn_524DC0()
{
}

// STUB: 0x525430 AgPCInputManager::vfn_3 (160 bytes)
void AgPCInputManager::vfn_3()
{
}

// FUNCTION: 0x524A90 AgPCInputManager::pressMouseButton
void AgPCInputManager::pressMouseButton(int index)
{
    mouse->buttons[index] = true;
}

// FUNCTION: 0x524AF0 AgPCInputManager::releaseMouseButton
void AgPCInputManager::releaseMouseButton(int index)
{
    mouse->buttons[index] = false;
}

// FUNCTION: 0x524B50 AgPCInputManager::addMouseDelta
void AgPCInputManager::addMouseDelta(const float* delta)
{
    AgMouseState* state = mouse;
    state->x += delta[0];
    state->y = delta[1] + state->y;
}

// FUNCTION: 0x524B90 AgPCInputManager::pressKey
void AgPCInputManager::pressKey(int index)
{
    keyboard->keys[index] = true;
}

// FUNCTION: 0x524BF0 AgPCInputManager::releaseKey
void AgPCInputManager::releaseKey(int index)
{
    keyboard->keys[index] = false;
}

// FUNCTION: 0x524990 AgPCInputManager::onKeyDown
void AgPCInputManager::onKeyDown(SDL_Keysym key)
{
    int index = translateScancode(key);
    g_pcInputManager->keyboard->keys[index] = true;
}

// FUNCTION: 0x524A10 AgPCInputManager::onKeyUp
void AgPCInputManager::onKeyUp(SDL_Keysym key)
{
    int index = translateScancode(key);
    g_pcInputManager->keyboard->keys[index] = false;
}

// FUNCTION: 0x524FB0 AgPCInputManager::onMouseMotion
void AgPCInputManager::onMouseMotion(const SDL_MouseMotionEvent* motion)
{
    if (cursor) {
        cursor->x = (float)motion->xrel + cursor->x;
        cursor->y = (float)motion->yrel + cursor->y;
        mouse->cursor = *cursor;
    }
}

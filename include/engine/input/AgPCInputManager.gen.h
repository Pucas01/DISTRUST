#pragma once

#include "engine/input/AgInputState.h"

// Generated from RTTI by tools/scaffold.py. Slot signatures are not known yet.
// bases: AgSDLInputManager, AgInputManager, AgSingleton<AgInputManager>
class AgPCInputManager
{
public:
    // vtable 0x632744, offset 0
    virtual void vfn_0(); // 0x523750
    virtual void vfn_1(); // 0x524C60
    virtual void vfn_2(); // 0x524C50
    virtual void vfn_3(); // 0x525430
    virtual void vfn_4(); // 0x524890
    virtual void vfn_5(); // 0x524940
    virtual void vfn_6(); // 0x55C280
    virtual void vfn_7(); // 0x55C280
    void pressMouseButton(int index); // 0x524A90
    void releaseMouseButton(int index); // 0x524AF0
    void addMouseDelta(const float* delta); // 0x524B50
    void pressKey(int index); // 0x524B90
    void releaseKey(int index); // 0x524BF0
    void onKeyDown(SDL_Keysym key); // 0x524990
    void onKeyUp(SDL_Keysym key); // 0x524A10
    void fn_524C70(); // 0x524C70
    void fn_524CF0(); // 0x524CF0
    void fn_524DC0(); // 0x524DC0
    void onMouseMotion(const SDL_MouseMotionEvent* motion); // 0x524FB0
    int translateScancode(SDL_Keysym key); // 0x525010

    char pad04[0x684];
    AgCursor* cursor;
    int pad68C;
    AgKeyboardState* keyboard;
    int pad694;
    AgMouseState* mouse;
};

extern AgPCInputManager* g_pcInputManager;

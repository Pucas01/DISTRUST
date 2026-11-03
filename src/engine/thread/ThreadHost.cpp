#include "shim/windows.h"
#include "engine/thread/ThreadHost.h"

struct SystemWindowState {
    char pad0[0x2A4];
    char active;
    char pad1[0x2D4 - 0x2A5];
    HWND window;
};

class EventHandler {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

extern SystemWindowState* g_systemManager;
extern int g_69FB1C;

void __fastcall sub_4E80A0(ThreadHost* self);
int __cdecl sub_4F4780();

// FUNCTION: 0x518200 ThreadHost::vfn_1
void ThreadHost::vfn_1()
{
    sub_4E80A0(this);
    running = 0;
    SystemWindowState* state = g_systemManager;
    if (state) {
        if (g_69FB1C) {
            state->active = 0;
            PostMessageW(state->window, 0, 0, 0);
        } else {
            state->active = 0;
        }
    }
}

// FUNCTION: 0x518240 ThreadHost::vfn_2
void ThreadHost::vfn_2()
{
    if (sub_4F4780())
        ((EventHandler*)sub_4F4780())->slot2();
}

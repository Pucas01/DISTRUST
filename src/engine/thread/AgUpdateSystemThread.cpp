#include "engine/thread/AgUpdateSystemThread.h"

class AgSystemManagerView
{
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void update(double delta);
};

extern AgSystemManagerView* g_systemManager;

void __cdecl sub_519390(unsigned milliseconds);

// FUNCTION: 0x500840 AgUpdateSystemThread::vfn_1
void AgUpdateSystemThread::vfn_1()
{
    while (running) {
        g_systemManager->update(0.0);
        sub_519390(10);
    }
}

// FUNCTION: 0x500830 AgUpdateSystemThread::vfn_2
void AgUpdateSystemThread::vfn_2()
{
    running = 0;
}

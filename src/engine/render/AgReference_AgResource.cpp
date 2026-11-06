#include "engine/core/AgReference.h"

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

struct W_532800 {
    W_532800();
    virtual ~W_532800()
    {
        AgControlBlock* block = control;
        object = 0;
        if (block) {
            control = 0;
            if (atomicDecrement(&block->weak) != 0)
                block->weak;
            else
                freeControlBlock(block);
        }
    }
    AgControlBlock* control;
    void* object;
};

W_532800::W_532800()
{
}

// FUNCTION: 0x532800 ??_GW_532800@@UAEPAXI@Z


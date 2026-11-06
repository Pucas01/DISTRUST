#include "engine/core/AgReference.h"

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

struct W_51F450 {
    W_51F450();
    virtual ~W_51F450()
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

W_51F450::W_51F450()
{
}

// FUNCTION: 0x51F450 ??_GW_51F450@@UAEPAXI@Z


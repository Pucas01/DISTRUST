#include "engine/core/AgReference.h"

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

struct W_50F0D0 {
    W_50F0D0();
    virtual ~W_50F0D0()
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

W_50F0D0::W_50F0D0()
{
}

// FUNCTION: 0x50F0D0 ??_GW_50F0D0@@UAEPAXI@Z

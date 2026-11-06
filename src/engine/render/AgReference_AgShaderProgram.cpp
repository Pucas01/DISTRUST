#include "engine/core/AgReference.h"

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

struct W_51E650 {
    W_51E650();
    virtual ~W_51E650()
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

W_51E650::W_51E650()
{
}

// FUNCTION: 0x51E650 ??_GW_51E650@@UAEPAXI@Z


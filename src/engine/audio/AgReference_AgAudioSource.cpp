#include "engine/core/AgReference.h"

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

struct W_51B320 {
    W_51B320();
    virtual ~W_51B320()
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

W_51B320::W_51B320()
{
}

// FUNCTION: 0x51B320 ??_GW_51B320@@UAEPAXI@Z


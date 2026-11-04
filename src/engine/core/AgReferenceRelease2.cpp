#include "engine/core/AgReference.h"

struct R_4B18F0 {
    ~R_4B18F0();
};

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

// STUB: 0x4B1770 sub_4B1770 (83 bytes)
void sub_4B1770()
{
}

// STUB: 0x4B17D0 sub_4B17D0 (288 bytes)
void sub_4B17D0()
{
}

// FUNCTION: 0x4B18F0 ?releaseInPlace@?$AgReference@UR_4B18F0@@@@QAEXXZ
template <class T>
void AgReference<T>::releaseInPlace()
{
    AgControlBlock* block = control;
    T* raw = object;
    object = 0;
    if (block) {
        control = 0;
        int lastWeak = 0;
        int remaining;
        if (atomicDecrement(&block->uses) == 0) {
            remaining = atomicDecrement(&block->weak);
            if (remaining == 0)
                lastWeak = remaining + 1;
            else
                block->weak;
            block->object = 0;
            delete raw;
            if (lastWeak)
                freeControlBlock(block);
        } else {
            block->uses;
        }
    }
}

template void AgReference<R_4B18F0>::releaseInPlace();

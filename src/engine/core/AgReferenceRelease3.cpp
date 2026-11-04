#include "engine/core/AgReference.h"

struct R_4F6400 {
    ~R_4F6400();
};

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

// STUB: 0x4F58A0 sub_4F58A0 (88 bytes)
void sub_4F58A0()
{
}

// STUB: 0x4F5900 sub_4F5900 (171 bytes)
void sub_4F5900()
{
}

// STUB: 0x4F59B0 sub_4F59B0 (171 bytes)
void sub_4F59B0()
{
}

// STUB: 0x4F5A60 sub_4F5A60 (65 bytes)
void sub_4F5A60()
{
}

// STUB: 0x4F5AB0 sub_4F5AB0 (207 bytes)
void sub_4F5AB0()
{
}

// STUB: 0x4F5B80 sub_4F5B80 (688 bytes)
void sub_4F5B80()
{
}

// STUB: 0x4F5E30 sub_4F5E30 (1065 bytes)
void sub_4F5E30()
{
}

// STUB: 0x4F6260 sub_4F6260 (199 bytes)
void sub_4F6260()
{
}

// STUB: 0x4F6330 sub_4F6330 (199 bytes)
void sub_4F6330()
{
}

// FUNCTION: 0x4F6400 ?releaseInPlace@?$AgReference@UR_4F6400@@@@QAEXXZ
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

template void AgReference<R_4F6400>::releaseInPlace();

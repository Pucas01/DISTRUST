#include "engine/core/AgReference.inl"

struct Q_50E1A0 {
    ~Q_50E1A0();
};

#include "engine/core/AgReference.inl"

struct V_50E240 {
    virtual void pad0();
    virtual ~V_50E240();
};

#include "engine/core/AgReference.h"

struct V_50E9E0 {
    virtual void pad0();
    virtual ~V_50E9E0();
};
int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

// STUB: 0x50DFF0 sub_50DFF0 (430 bytes)
void sub_50DFF0()
{
}

// FUNCTION: 0x50E1A0 destroyRange_50E1A0
void __cdecl destroyRange_50E1A0(AgReference<Q_50E1A0>* first, AgReference<Q_50E1A0>* last)
{
    for (; first != last; ++first)
        first->~AgReference<Q_50E1A0>();
}

// FUNCTION: 0x50E240 destroyRange_50E240
void __cdecl destroyRange_50E240(AgReference<V_50E240>* first, AgReference<V_50E240>* last)
{
    for (; first != last; ++first)
        first->~AgReference<V_50E240>();
}

// STUB: 0x50E2D0 sub_50E2D0 (46 bytes)
void sub_50E2D0()
{
}

// STUB: 0x50E3C0 sub_50E3C0 (122 bytes)
void sub_50E3C0()
{
}

// STUB: 0x50E6A0 sub_50E6A0 (30 bytes)
void sub_50E6A0()
{
}

// STUB: 0x50E6C0 sub_50E6C0 (97 bytes)
void sub_50E6C0()
{
}

// STUB: 0x50E730 sub_50E730 (275 bytes)
void sub_50E730()
{
}

// STUB: 0x50E850 sub_50E850 (395 bytes)
void sub_50E850()
{
}

// FUNCTION: 0x50E9E0 ?releaseInPlace@?$AgReference@UV_50E9E0@@@@QAEXXZ
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

template void AgReference<V_50E9E0>::releaseInPlace();

// STUB: 0x50EAD0 sub_50EAD0 (97 bytes)
void sub_50EAD0()
{
}

// STUB: 0x50EBF0 sub_50EBF0 (663 bytes)
void sub_50EBF0()
{
}

// STUB: 0x50EE90 sub_50EE90 (287 bytes)
void sub_50EE90()
{
}

// STUB: 0x50EFB0 sub_50EFB0 (287 bytes)
void sub_50EFB0()
{
}

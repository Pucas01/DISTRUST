extern "C" int __cdecl abs(int);
#pragma intrinsic(abs)
struct Pair2 {
    int a;
    int b;
    Pair2* clear();
};

#include "engine/core/AgReference.h"

struct R_4BBD40 {
    ~R_4BBD40();
};

int __cdecl atomicDecrement(volatile int* p);
void __cdecl freeControlBlock(AgControlBlock* b);

// STUB: 0x4B9CE0 sub_4B9CE0 (656 bytes)
void sub_4B9CE0()
{
}

// STUB: 0x4B9F70 sub_4B9F70 (227 bytes)
void sub_4B9F70()
{
}

// STUB: 0x4BA060 sub_4BA060 (8 bytes)
void sub_4BA060()
{
}

// STUB: 0x4BA070 sub_4BA070 (300 bytes)
void sub_4BA070()
{
}

// STUB: 0x4BA1A0 sub_4BA1A0 (4690 bytes)
void sub_4BA1A0()
{
}

// STUB: 0x4BB400 sub_4BB400 (315 bytes)
void sub_4BB400()
{
}

// STUB: 0x4BB550 sub_4BB550 (350 bytes)
void sub_4BB550()
{
}

// STUB: 0x4BB6B0 sub_4BB6B0 (280 bytes)
void sub_4BB6B0()
{
}

// STUB: 0x4BB7D0 sub_4BB7D0 (388 bytes)
void sub_4BB7D0()
{
}

// STUB: 0x4BB960 sub_4BB960 (831 bytes)
void sub_4BB960()
{
}

// STUB: 0x4BBCA0 sub_4BBCA0 (16 bytes)
void sub_4BBCA0()
{
}

// FUNCTION: 0x4BBCB0 Pair2::clear
Pair2* Pair2::clear()
{
    a = 0;
    b = 0;
    return this;
}

// FUNCTION: 0x4BBD40 ?releaseInPlace@?$AgReference@UR_4BBD40@@@@QAEXXZ
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

template void AgReference<R_4BBD40>::releaseInPlace();

// STUB: 0x4BBDC0 sub_4BBDC0 (569 bytes)
void sub_4BBDC0()
{
}

// STUB: 0x4BC000 sub_4BC000 (709 bytes)
void sub_4BC000()
{
}

// FUNCTION: 0x4BC2D0 wrapIndex38
int __cdecl wrapIndex38(int a, int b)
{
    int c;
    if (a < 0)
        c = 0x25;
    else if (a >= 0x26)
        c = 0;
    else
        c = a;
    if (b < 0) {
        if (c < abs(b))
            return b + 0x26 + c;
        return b + c;
    }
    return (b + c) % 0x26;
}

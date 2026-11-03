#include <intrin.h>

// FUNCTION: 0x501170 atomicDecrement
int __cdecl atomicDecrement(volatile int* value)
{
    return _InterlockedDecrement((volatile long*)value);
}

// FUNCTION: 0x501150 atomicCompareExchange
int __cdecl atomicCompareExchange(volatile int* target, int expected, int value)
{
    return _InterlockedCompareExchange((volatile long*)target, value, expected);
}

// FUNCTION: 0x501180 atomicIncrement
int __cdecl atomicIncrement(volatile int* value)
{
    return _InterlockedIncrement((volatile long*)value);
}

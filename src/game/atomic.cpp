// FUNCTION: 0x501170 atomicDecrement
#include <intrin.h>

int __cdecl atomicDecrement(int* value)
{
    return _InterlockedDecrement((long*)value);
}

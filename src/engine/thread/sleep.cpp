#include "shim/windows.h"

// FUNCTION: 0x519390 sub_519390
void __cdecl sub_519390(unsigned milliseconds)
{
    Sleep(milliseconds);
}

#include <string.h>
#include <new>
#include "engine/core/AgString.h"

// STUB: 0x4FDD50 sub_4FDD50 (207 bytes)
void sub_4FDD50()
{
}

// STUB: 0x4FDE80 sub_4FDE80 (92 bytes)
void sub_4FDE80()
{
}

// STUB: 0x4FDEE0 sub_4FDEE0 (211 bytes)
void sub_4FDEE0()
{
}

// STUB: 0x4FDFC0 sub_4FDFC0 (88 bytes)
void sub_4FDFC0()
{
}

// FUNCTION: 0x4FE020 sub_4FE020
void __fastcall sub_4FE020(AgString* self, int, int n)
{
    char* old = self->data;
    self->data = (char*)operator new[](n + 1);
    if (old) {
        memcpy(self->data, old, self->length < n ? self->length : n);
        delete[] old;
    }
    self->length = n;
    self->data[n] = 0;
}

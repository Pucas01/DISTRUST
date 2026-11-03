#include "game/texture_slots.h"

// FUNCTION: 0x4B2500 AgControlBlock::addRef
int AgControlBlock::addRef()
{
    int count = uses;
    while (count != 0) {
        if (atomicCompareExchange(&uses, count, count + 1) == count)
            return count + 1;
        count = uses;
    }
    return 0;
}

#include "engine/core/AgReference.inl"
#include "engine/core/AgBuffer.h"

// FUNCTION: 0x516B40 ??1?$AgReference@VTextureObject@@@@QAE@XZ
template AgReference<TextureObject>::~AgReference();

static int tryAddRef(AgControlBlock* block)
{
    int count = block->uses;
    while (count)
    {
        if (atomicCompareExchange(&block->uses, count, count + 1) == count)
            return count + 1;
        count = block->uses;
    }
    return 0;
}

template <class T>
AgReference<T>::AgReference(const AgReference& other)
{
    control = 0;
    object = 0;
    if (other.control && tryAddRef(other.control))
    {
        control = other.control;
        object = other.object;
    }
}

// FUNCTION: 0x54C6E0 ??0?$AgReference@VAgBuffer@@@@QAE@ABV0@@Z
template AgReference<AgBuffer>::AgReference(const AgReference&);

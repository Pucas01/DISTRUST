#include <string.h>
#include "engine/core/AgBuffer.h"

// FUNCTION: 0x562910 AgBuffer::resize
void AgBuffer::resize(unsigned newSize)
{
    unsigned char* old = data;
    unsigned char* block;
    if (newSize)
    {
        if (alignment)
            block = allocator.allocAligned(newSize, alignment);
        else
            block = allocator.alloc(newSize);
    }
    else
        block = 0;
    data = block;
    if (old)
    {
        unsigned keep = newSize < size ? newSize : size;
        memcpy(block, old, keep);
        allocator.free(old);
    }
    size = newSize;
}

// FUNCTION: 0x52DC50 ??_GAgBuffer@@UAEPAXI@Z
AgBuffer::~AgBuffer()
{
    if (data)
    {
        allocator.free(data);
        data = 0;
        size = 0;
    }
}

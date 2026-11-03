#include <malloc.h>
#include "engine/core/AgBuffer.h"

// FUNCTION: 0x51A030 AgHeapAllocator::alloc
unsigned char* AgHeapAllocator::alloc(unsigned size)
{
    return (unsigned char*)malloc(size);
}

// FUNCTION: 0x51A050 AgHeapAllocator::allocAligned
unsigned char* AgHeapAllocator::allocAligned(unsigned size, unsigned alignment)
{
    return (unsigned char*)_aligned_malloc(size, alignment);
}

// FUNCTION: 0x51A070 AgHeapAllocator::free
void AgHeapAllocator::free(unsigned char* block)
{
    ::free(block);
}

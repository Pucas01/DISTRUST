#include "engine/core/AgBuffer.h"

extern int g_unmanagedAllocs;

// FUNCTION: 0x4D64A0 freeUnmanaged
void __cdecl freeUnmanaged(void* block)
{
    if (block)
    {
        --g_unmanagedAllocs;
        AgHeapAllocator allocator = {};
        allocator.free((unsigned char*)block);
    }
}

// FUNCTION: 0x4D64C0 allocUnmanaged
void* __cdecl allocUnmanaged(unsigned size)
{
    AgHeapAllocator allocator = {};
    void* block = allocator.alloc((size + 15) & ~15u);
    ++g_unmanagedAllocs;
    return block;
}

// FUNCTION: 0x4D64F0 allocUnmanagedRounded
void* __cdecl allocUnmanagedRounded(unsigned size, unsigned multiple)
{
    AgHeapAllocator allocator = {};
    void* block = allocator.alloc((size - 1 + multiple) / multiple * multiple);
    ++g_unmanagedAllocs;
    return block;
}

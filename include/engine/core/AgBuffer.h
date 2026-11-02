#pragma once

#include "engine/core/AgReference.h"

enum { AG_BUFFER_GROWABLE = 4 };

class AgHeapAllocator
{
public:
    unsigned char* alloc(unsigned size);
    unsigned char* allocAligned(unsigned size, unsigned alignment);
    void free(unsigned char* block);
};

class AgBuffer : public AgReferencedObject
{
public:
    virtual ~AgBuffer();
    void resize(unsigned size);

    unsigned char* data;
    unsigned size;
    unsigned alignment;
    unsigned flags;
    AgHeapAllocator allocator;
};

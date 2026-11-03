#pragma once

#include "engine/core/AgBuffer.h"
#include "engine/core/AgObjectPool.h"
#include "engine/io/AgStream.h"

extern AgObjectPool g_bufferStreamPool;

class AgBufferStream : public AgStream
{
public:
    AgBufferStream(const AgBufferStream& other)
        : buffer(other.buffer), offset(other.offset), length(other.length), position(other.position)
    {
    }

    virtual StringRef getName();
    virtual unsigned read(void* dst, unsigned count);
    virtual unsigned write(const void* src, unsigned count);
    virtual __int64 getSize();
    virtual void setPosition(unsigned __int64 position);
    virtual __int64 getPosition();
    virtual bool vfn_8() { return true; }
    virtual void* getData();
    virtual bool hasBuffer();
    virtual AgReference<AgStream> clone();

    AgReference<AgBuffer> getBuffer();

    static void* operator new(unsigned) { return g_bufferStreamPool.alloc(); }
    static void operator delete(void* block) { g_bufferStreamPool.free(block); }

    AgReference<AgBuffer> buffer;
    unsigned offset;
    unsigned length;
    unsigned position;
};

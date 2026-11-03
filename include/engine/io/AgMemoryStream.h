#pragma once

#include "engine/core/AgObjectPool.h"
#include "engine/io/AgStream.h"

class AgMemoryStream : public AgStream
{
public:
    virtual ~AgMemoryStream();
    virtual unsigned read(void* dst, unsigned count);
    virtual unsigned write(const void* src, unsigned count);
    virtual __int64 getSize();
    virtual void setPosition(unsigned __int64 value);
    virtual __int64 getPosition();
    virtual void* getData();

    void setSize(unsigned __int64 value);
    unsigned load(AgReference<AgStream> source);

    static void operator delete(void* block) { g_objectPool.free(block); }

    char* data;
    int unused0C;
    unsigned __int64 size;
    unsigned __int64 position;
    unsigned __int64 capacity;
    int unused28;
    int ownsData;
};

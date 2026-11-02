#pragma once

#include "engine/core/AgReference.h"
#include "engine/core/StringRef.h"

class AgStream : public AgReferencedObject
{
public:
    virtual ~AgStream() {}
    virtual StringRef getName();
    virtual unsigned read(void* dst, unsigned count) = 0;
    virtual unsigned write(const void* src, unsigned count) = 0;
    virtual __int64 getSize() = 0;
    virtual void setPosition(unsigned __int64 position) = 0;
    virtual __int64 getPosition() = 0;
    virtual bool vfn_7() { return true; }
    virtual bool vfn_8() { return false; }
    virtual void* getData() { return 0; }
    virtual bool hasBuffer() { return false; }
    virtual AgReference<AgStream> clone();
};

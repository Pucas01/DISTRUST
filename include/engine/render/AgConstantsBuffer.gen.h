#pragma once
#include "engine/render/AgResource.gen.h"

// Generated from RTTI by tools/scaffold.py. Slot signatures are not known yet.
// bases: AgResource, AgReferencedObject
class AgConstantsBuffer : public AgResource
{
public:
    AgConstantsBuffer();
    char pad4_[0x48];
    // vtable 0x632638, offset 0
    virtual void vfn_0(); // 0x51DA20
    virtual void vfn_1(); // 0x501D60
    virtual void vfn_2(); // 0x519590
};

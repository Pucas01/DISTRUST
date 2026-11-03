#pragma once

#include "engine/core/AgReference.h"

// Generated from RTTI by tools/scaffold.py. Slot signatures are not known yet.
// bases: AgResource, AgReferencedObject
class AgRenderList
{
public:
    class CaptureCallback : public AgReferencedObject
    {
    public:
        CaptureCallback();
        virtual void vfn_0() = 0;
        virtual ~CaptureCallback() {}
    };

    // vtable 0x6321B8, offset 0
    virtual void vfn_0(); // 0x50F190
    virtual void vfn_1(); // 0x501D60
    virtual void vfn_2(); // 0x519590
    virtual void vfn_3(); // 0x55C270
};

#pragma once

#include "engine/thread/AgPriorityThreadPool.gen.h"

// Generated from RTTI by tools/scaffold.py. Slot signatures are not known yet.
// bases: AgPriorityThreadPool::PriorityJob, AgThreadPool::Job
class AudioStreamJob : public AgPriorityThreadPool::PriorityJob
{
public:
    // vtable 0x633334, offset 0
    virtual void vfn_1(); // 0x53F5D0
    virtual void vfn_2(); // 0x4135B0
    virtual void vfn_3(); // 0x507050
};

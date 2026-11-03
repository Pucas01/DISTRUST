#pragma once

#include "engine/thread/AgSimpleThreadHost.h"

class AgThreadPool
{
public:
    class Job
    {
    public:
        Job();
        virtual ~Job() {}
        virtual void vfn_1() = 0;
        virtual void vfn_2(); // 0x4135B0
        virtual void vfn_3(); // 0x507050
    };

    class ThreadHost : public AgSimpleThreadHost
    {
    public:
        virtual void vfn_1();

        class AgThreadPool* pool;
    };

    void fn_529EF0(ThreadHost* host);

    // vtable 0x6327FC, offset 0
    virtual void vfn_0(); // 0x5296D0
    virtual ~AgThreadPool(); // 0x528E00
};

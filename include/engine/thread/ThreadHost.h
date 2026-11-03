#pragma once

#include "engine/thread/AgIThreadHost.gen.h"

class ThreadHost : public AgIThreadHost
{
public:
    virtual void vfn_1();
    virtual void vfn_2();

    int running;
};

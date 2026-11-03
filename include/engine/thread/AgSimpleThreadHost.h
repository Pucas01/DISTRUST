#pragma once

#include "engine/thread/AgIThreadHost.gen.h"

class AgSimpleThreadHost : public AgIThreadHost
{
public:
    virtual void vfn_2();
    virtual void vfn_4() {}

    int flag;
    int handle;
};

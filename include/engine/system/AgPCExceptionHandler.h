#pragma once

#include "engine/system/AgExceptionHandler.h"

struct CrashFilterGuard;

class AgPCExceptionHandler : public AgExceptionHandler
{
public:
    virtual int vfn_1();
    virtual int vfn_2();

    struct CrashFilterGuard* guard;
};

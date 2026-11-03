#pragma once

#include "engine/core/AgLockedList.h"
#include "engine/core/AgSingleton.h"

class AgLockedLog
{
public:
    ~AgLockedLog() {}

    AgLockedList list;
};

class AgExceptionHandler : public AgSingleton<AgExceptionHandler>
{
public:
    virtual int vfn_1() { return 0; }
    virtual int vfn_2() { return 0; }

    AgLockedLog log;
};

#pragma once

#include "engine/core/AgSingleton.h"

class AgHttp : public AgSingleton<AgHttp>
{
public:
    virtual ~AgHttp();
    virtual int vfn_1();
    virtual void vfn_2() = 0;

    int unused4;
};

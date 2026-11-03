#pragma once

#include "engine/core/AgSingleton.h"

class AgSteamworks : public AgSingleton<AgSteamworks>
{
public:
    virtual int init();
    virtual int shutdown();
};

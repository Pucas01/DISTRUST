#pragma once

#include "engine/core/AgReference.h"

class AgAudioEffect : public AgReferencedObject
{
public:
    AgAudioEffect();
    virtual ~AgAudioEffect() {}
    virtual void vfn_1() = 0;
    virtual void vfn_2() = 0;
    virtual void vfn_3() = 0;
};

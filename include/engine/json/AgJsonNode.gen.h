#pragma once

#include "engine/core/AgReference.h"
#include "engine/json/AgJsonMeta.h"

class AgJsonNode
{
public:
    AgJsonNode();
#ifdef AG_JSON_NODE_OUT_OF_LINE_DTOR
    virtual ~AgJsonNode();
#else
    virtual ~AgJsonNode() {}
#endif

    AgReference<AgJsonMeta> meta;
};

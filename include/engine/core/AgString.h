#pragma once

#include "engine/core/StringRef.h"

class AgString
{
public:
    AgString(const char* text, int count);
    AgString(const AgString& other);
    AgString(StringRef& ref);
    ~AgString();

    int length;
    char* data;
};

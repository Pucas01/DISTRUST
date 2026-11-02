#pragma once

class StringRef
{
public:
    StringRef(const char* text);

    const char* text;
    int length;
};

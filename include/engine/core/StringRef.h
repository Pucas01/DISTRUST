#pragma once

class StringRef
{
public:
    StringRef(const char* text);
    int size();
    const char* c_str();

    const char* text;
    int length;
};

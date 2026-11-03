#pragma once

class AgString
{
public:
    AgString(const char* text, int count);
    AgString(const AgString& other);
    ~AgString();

    int length;
    char* data;
};

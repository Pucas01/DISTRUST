#pragma once

#include "engine/core/StringRef.h"

class AgString
{
public:
    AgString();
    AgString(const char* text, int count);
    AgString(const AgString& other);
    AgString(StringRef& ref);
    AgString(int value);
    AgString(double value);
    AgString(__int64 value);
    AgString(const wchar_t* wide, int wideLength);
    ~AgString();
    void operator=(const AgString& other);
    void operator=(StringRef& ref);
    void operator=(const char* text);
        char* at(int index);
    int size() const { return length; }
    const char* c_str() const { return data; }
    unsigned find(StringRef pattern, unsigned start);

    int length;
    char* data;
};

bool __cdecl agStringEqual(const AgString& a, const AgString& b);
bool __cdecl agStringNotEqualText(const AgString& a, const char* text);
bool __cdecl agStringLess(const AgString& a, const AgString& b);
int __cdecl stringRefCompareNoCase(StringRef& a, StringRef& b);
AgString __cdecl concatText(const char* a, unsigned aLength, const char* b, unsigned bLength);
AgString __cdecl operator+(const AgString& a, const AgString& b);
AgString __cdecl operator+(const AgString& a, StringRef& b);
AgString __cdecl operator+(const AgString& a, const char* b);

#pragma once

class AgString;

class StringRef
{
public:
    StringRef(const char* text);
    StringRef(const char* text, int length);
    StringRef();
    const char* offset(int index);
    unsigned find(const StringRef& pattern, unsigned start);
    StringRef substr(unsigned pos, unsigned count);
    AgString replace(unsigned pos, unsigned count, const char* with, unsigned withLength);
    AgString replaceFirst(const char* pattern, unsigned patternLength, const char* with, unsigned withLength);
    int size();
    const char* c_str();

    const char* text;
    int length;
};

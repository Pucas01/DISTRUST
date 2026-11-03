#pragma once

int __cdecl compareNoCase(const char* a, unsigned aLength, const char* b, unsigned bLength);
int __cdecl compareText(const char* a, unsigned aLength, const char* b, unsigned bLength);
int __cdecl equalText(const char* a, unsigned aLength, const char* b, unsigned bLength);
unsigned __cdecl findText(const char* text, unsigned length, const char* pattern, unsigned patternLength, unsigned start);
unsigned __cdecl findChar(const char* text, unsigned length, char ch, unsigned start);
unsigned __cdecl findLastChar(const char* text, unsigned length, char ch, unsigned start);

#include "engine/core/StringRef.h"

struct TextSpan
{
    TextSpan(const char* text, int length) : text(text), length(length) {}

    const char* text;
    int length;
};

static __forceinline StringRef makeSubstring(const char* text, unsigned length, unsigned pos, unsigned count)
{
    if (count == (unsigned)-1)
        count = length - pos;
    if (count && length)
        return StringRef(text + pos, count);
    return StringRef("", 0);
}

StringRef __cdecl substringRef(const char* text, unsigned length, unsigned pos, unsigned count);

AgString __cdecl replaceText(const char* text, unsigned length, unsigned pos, unsigned count, const char* with, unsigned withLength);

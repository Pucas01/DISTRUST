#include <string.h>
#include "engine/core/string_algo.h"

// FUNCTION: 0x525990 compareNoCase
int __cdecl compareNoCase(const char* a, unsigned aLength, const char* b, unsigned bLength)
{
    int result = _strnicmp(a, b, aLength < bLength ? aLength : bLength);
    if (result == 0 && aLength != bLength)
        result = bLength < aLength ? 1 : -1;
    return result;
}

// FUNCTION: 0x5259D0 compareText
int __cdecl compareText(const char* a, unsigned aLength, const char* b, unsigned bLength)
{
    int result = strncmp(a, b, aLength < bLength ? aLength : bLength);
    if (result == 0 && aLength != bLength)
        result = bLength < aLength ? 1 : -1;
    return result;
}

// FUNCTION: 0x525A10 equalText
int __cdecl equalText(const char* a, unsigned aLength, const char* b, unsigned bLength)
{
    if (aLength != bLength)
        return 0;
    return strncmp(a, b, aLength) == 0;
}

// FUNCTION: 0x525A40 findText
unsigned __cdecl findText(const char* text, unsigned length, const char* pattern, unsigned patternLength, unsigned start)
{
    if (patternLength == 0)
        return (unsigned)-1;
    for (; start < length; start++) {
        if (text[start] != pattern[0])
            continue;
        unsigned i = 1;
        while (i < patternLength && start + i < length && text[start + i] == pattern[i])
            i++;
        if (i >= patternLength)
            return start;
    }
    return (unsigned)-1;
}

// FUNCTION: 0x525AD0 findChar
unsigned __cdecl findChar(const char* text, unsigned length, char ch, unsigned start)
{
    for (unsigned i = start; i < length; i++) {
        if (text[i] == ch)
            return i;
    }
    return (unsigned)-1;
}

// FUNCTION: 0x525B00 findLastChar
unsigned __cdecl findLastChar(const char* text, unsigned length, char ch, unsigned start)
{
    if (start >= length)
        start = length - 1;
    for (int i = (int)start; i >= 0; i--) {
        if (text[i] == ch)
            return i;
    }
    return (unsigned)-1;
}

// FUNCTION: 0x525B90 substringRef
StringRef __cdecl substringRef(const char* text, unsigned length, unsigned pos, unsigned count)
{
    return makeSubstring(text, length, pos, count);
}

// STUB: 0x525B30 sub_525B30 (91 bytes)
void sub_525B30()
{
}

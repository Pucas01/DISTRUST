// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include <string.h>
#include <new>
#include "engine/core/AgString.h"
#include "engine/core/string_algo.h"

// FUNCTION: 0x525BE0 replaceText
AgString __cdecl replaceText(const char* text, unsigned length, unsigned pos, unsigned count, const char* with, unsigned withLength)
{
    if (count == (unsigned)-1)
        count = length - pos;
    StringRef head = makeSubstring(text, length, 0, pos);
    StringRef tail = makeSubstring(text, length, pos + count, (unsigned)-1);
    char* buffer = (char*)operator new[](head.size() + (tail.size() + withLength));
    memcpy(buffer, head.c_str(), head.size());
    memcpy(buffer + head.size(), with, withLength);
    memcpy(buffer + head.size() + withLength, tail.c_str(), tail.size());
    AgString result(buffer, head.size() + (withLength + tail.size()));
    operator delete[](buffer);
    return result;
}

// FUNCTION: 0x4FD440 StringRef::replace
AgString StringRef::replace(unsigned pos, unsigned count, const char* with, unsigned withLength)
{
    return replaceText(text, length, pos, count, with, withLength);
}

// FUNCTION: 0x4FD4B0 StringRef::replaceFirst
AgString StringRef::replaceFirst(const char* pattern, unsigned patternLength, const char* with, unsigned withLength)
{
    unsigned pos = findText(text, length, pattern, patternLength, 0);
    return replace(pos, patternLength, with, withLength);
}

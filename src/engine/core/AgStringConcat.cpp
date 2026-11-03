// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include <string.h>
#include <new>
#include "engine/core/AgString.h"
#include "engine/core/string_algo.h"

// FUNCTION: 0x5258F0 ?concatText@@YA?AVAgString@@PBDI0I@Z
AgString __cdecl concatText(const char* a, unsigned aLength, const char* b, unsigned bLength)
{
    unsigned total = aLength + bLength;
    char* buffer = (char*)operator new[](total);
    memcpy(buffer, a, aLength);
    memcpy(buffer + aLength, b, bLength);
    AgString result(buffer, total);
    operator delete[](buffer);
    return result;
}

// FUNCTION: 0x4FDA80 ??H@YA?AVAgString@@ABV0@0@Z
AgString __cdecl operator+(const AgString& a, const AgString& b)
{
    return concatText(a.c_str(), a.size(), b.c_str(), b.size());
}

// FUNCTION: 0x4FDAF0 ??H@YA?AVAgString@@ABV0@AAVStringRef@@@Z
AgString __cdecl operator+(const AgString& a, StringRef& b)
{
    return concatText(a.c_str(), a.size(), b.c_str(), b.size());
}

// FUNCTION: 0x4FDB70 ??H@YA?AVAgString@@ABV0@PBD@Z
AgString __cdecl operator+(const AgString& a, const char* b)
{
    return concatText(a.c_str(), a.size(), b, (int)strlen(b));
}

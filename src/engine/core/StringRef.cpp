#include "engine/core/StringRef.h"
#include "engine/core/string_algo.h"

// FUNCTION: 0x515910 StringRef::size
int StringRef::size()
{
    return length;
}

// FUNCTION: 0x516660 StringRef::c_str
const char* StringRef::c_str()
{
    return text;
}

// FUNCTION: 0x4FD360 ??0StringRef@@QAE@PBDH@Z
StringRef::StringRef(const char* data, int count)
{
    text = data;
    length = count;
}

static __forceinline int compareRefs(StringRef a, StringRef b)
{
    return compareText(a.text, a.length, b.text, b.length);
}

static __forceinline int equalRefs(StringRef a, StringRef b)
{
    return equalText(a.text, a.length, b.text, b.length);
}

// FUNCTION: 0x4FD390 stringRefEqual
bool __cdecl stringRefEqual(const StringRef& a, const StringRef& b)
{
    return equalRefs(a, b) == 1;
}

// FUNCTION: 0x4FD3D0 stringRefLess
bool __cdecl stringRefLess(const StringRef& a, const StringRef& b)
{
    return compareRefs(a, b) < 0;
}

// FUNCTION: 0x4FD380 ??0StringRef@@QAE@XZ
StringRef::StringRef()
{
    text = "";
    length = 0;
}

// FUNCTION: 0x4FD3C0 StringRef::offset
const char* StringRef::offset(int index)
{
    return text + index;
}

// FUNCTION: 0x4FD400 StringRef::find
unsigned StringRef::find(const StringRef& pattern, unsigned start)
{
    return findText(text, length, pattern.text, pattern.length, start);
}

// FUNCTION: 0x4FD420 StringRef::substr
StringRef StringRef::substr(unsigned pos, unsigned count)
{
    return substringRef(text, length, pos, count);
}

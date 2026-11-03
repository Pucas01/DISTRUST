#include "engine/core/StringRef.h"

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

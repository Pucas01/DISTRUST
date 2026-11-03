#include <string.h>
#include <new>
#include "engine/core/AgString.h"

// FUNCTION: 0x4FD6A0 ??0AgString@@QAE@PBDH@Z
AgString::AgString(const char* text, int count)
{
    length = count;
    data = 0;
    if (count < 0) {
        count = (int)strlen(text);
    }
    data = (char*)operator new[](count + 1);
    length = count;
    memcpy(data, text, count);
    data[length] = 0;
}

// FUNCTION: 0x4FD530 ??0AgString@@QAE@ABV0@@Z
AgString::AgString(const AgString& other)
{
    length = 0;
    data = 0;
    int count = other.length;
    data = (char*)operator new[](count + 1);
    length = count;
    memcpy(data, other.data, count);
    data[length] = 0;
}

// FUNCTION: 0x4FD580 ??0AgString@@QAE@AAVStringRef@@@Z
AgString::AgString(StringRef& ref)
{
    length = 0;
    data = 0;
    int count = ref.size();
    const char* text = ref.c_str();
    if (count < 0)
        count = (int)strlen(text);
    data = (char*)operator new[](count + 1);
    length = count;
    memcpy(data, text, count);
    data[length] = 0;
}

// FUNCTION: 0x4FD890 ??1AgString@@QAE@XZ
AgString::~AgString()
{
    length = 0;
    operator delete[](data);
    data = 0;
}

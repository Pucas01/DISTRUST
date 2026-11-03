#include "shim/windows.h"
#include <string.h>
#include <stdio.h>
#include <new>
#include "engine/core/AgString.h"
#include "engine/core/string_algo.h"

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

// FUNCTION: 0x4FD5F0 ??0AgString@@QAE@H@Z
AgString::AgString(int value)
{
    length = 0;
    data = 0;
    data = (char*)operator new[](0x21);
    _snprintf_s(data, 12, _TRUNCATE, "%d", value);
    length = (int)strlen(data);
}

// FUNCTION: 0x4FD640 ??0AgString@@QAE@N@Z
AgString::AgString(double value)
{
    length = 0;
    data = 0;
    data = (char*)operator new[](0x21);
    _snprintf_s(data, 16, _TRUNCATE, "%.15g", value);
    length = (int)strlen(data);
}

// FUNCTION: 0x4FD830 ??0AgString@@QAE@_J@Z
AgString::AgString(__int64 value)
{
    length = 0;
    data = 0;
    data = (char*)operator new[](0x21);
    _snprintf_s(data, 12, _TRUNCATE, "%I64d", value);
    length = (int)strlen(data);
}

// FUNCTION: 0x4FD700 ??0AgString@@QAE@PB_WH@Z
AgString::AgString(const wchar_t* wide, int wideLength)
{
    length = 0;
    data = 0;
    if (wideLength < 0)
        wideLength = (int)wcslen(wide);
    if (wideLength > 0) {
        int bytes = WideCharToMultiByte(CP_UTF8, 0, wide, wideLength, 0, 0, 0, 0);
        char* buffer = (char*)operator new[](bytes);
        if (WideCharToMultiByte(CP_UTF8, 0, wide, wideLength, buffer, bytes, 0, 0)) {
            if (bytes < 0)
                bytes = (int)strlen(buffer);
            data = (char*)operator new[](bytes + 1);
            length = bytes;
            memcpy(data, buffer, bytes);
            data[length] = 0;
        }
        operator delete[](buffer);
    } else
        length = 0;
}

// FUNCTION: 0x4FD8B0 ??4AgString@@QAEXABV0@@Z
void AgString::operator=(const AgString& other)
{
    if (other.data != data) {
        length = 0;
        operator delete[](data);
        data = 0;
        int count = other.length;
        data = (char*)operator new[](count + 1);
        length = count;
        memcpy(data, other.data, count);
        data[length] = 0;
    }
}

// FUNCTION: 0x4FD910 ??4AgString@@QAEXAAVStringRef@@@Z
void AgString::operator=(StringRef& ref)
{
    if (ref.c_str() != data || ref.size() != length) {
        char* old = data;
        int count = ref.size();
        const char* text = ref.c_str();
        if (count < 0)
            count = (int)strlen(text);
        data = (char*)operator new[](count + 1);
        length = count;
        memcpy(data, text, count);
        data[length] = 0;
        operator delete[](old);
    }
}

// FUNCTION: 0x4FD990 ??4AgString@@QAEXPBD@Z
void AgString::operator=(const char* text)
{
    if (text != data) {
        length = 0;
        operator delete[](data);
        data = 0;
        int count = (int)strlen(text);
        data = (char*)operator new[](count + 1);
        length = count;
        memcpy(data, text, count);
        data[length] = 0;
    }
}

static __forceinline int equalSpans(TextSpan a, TextSpan b)
{
    return equalText(a.text, a.length, b.text, b.length);
}

static __forceinline int compareSpans(TextSpan a, TextSpan b)
{
    return compareText(a.text, a.length, b.text, b.length);
}

// FUNCTION: 0x4FDA00 agStringEqual
bool __cdecl agStringEqual(const AgString& a, const AgString& b)
{
    return equalSpans(TextSpan(a.data, a.length), TextSpan(b.data, b.length)) == 1;
}

// FUNCTION: 0x4FDA30 agStringNotEqualText
bool __cdecl agStringNotEqualText(const AgString& a, const char* text)
{
    return equalSpans(TextSpan(a.data, a.length), TextSpan(text, (int)strlen(text))) == 0;
}

// FUNCTION: 0x4FDA70 AgString::at
char* AgString::at(int index)
{
    return data + index;
}

// FUNCTION: 0x4FDBF0 agStringLess
bool __cdecl agStringLess(const AgString& a, const AgString& b)
{
    return compareSpans(TextSpan(a.data, a.length), TextSpan(b.data, b.length)) < 0;
}

// FUNCTION: 0x4FDCE0 stringRefCompareNoCase
int __cdecl stringRefCompareNoCase(StringRef& a, StringRef& b)
{
    return compareNoCase(a.c_str(), a.size(), b.c_str(), b.size());
}

// FUNCTION: 0x4FDD20 AgString::find
unsigned AgString::find(StringRef pattern, unsigned start)
{
    return findText(data, length, pattern.c_str(), pattern.size(), start);
}

// FUNCTION: 0x4FD800 ??0AgString@@QAE@XZ
AgString::AgString()
{
    length = 0;
    data = 0;
    data = (char*)operator new[](1);
    *data = 0;
}

// STUB: 0x4FDC20 AgString::operator+= (184 bytes)
void AgString_operator_plus_eq()
{
}

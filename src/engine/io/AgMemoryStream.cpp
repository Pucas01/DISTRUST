// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include <string.h>
#include "engine/io/AgMemoryStream.h"

void* __cdecl operator new[](unsigned size);
void __cdecl operator delete[](void* block);

// FUNCTION: 0x519B50 ??_GAgMemoryStream@@UAEPAXI@Z
AgMemoryStream::~AgMemoryStream()
{
    if (data && ownsData) {
        operator delete[](data);
        data = 0;
    }
}

// FUNCTION: 0x519DF0 AgMemoryStream::read
unsigned AgMemoryStream::read(void* dst, unsigned count)
{
    if ((unsigned __int64)count + position > size)
        count = (unsigned)size - (unsigned)position;
    memcpy(dst, data + (unsigned)position, count);
    position += count;
    return count;
}

// FUNCTION: 0x519F80 AgMemoryStream::write
unsigned AgMemoryStream::write(const void* src, unsigned count)
{
    if ((unsigned __int64)count + position > capacity) {
        unsigned end = (unsigned)position + count;
        if (end > capacity) {
            char* old = data;
            data = (char*)operator new[](end);
            memcpy(data, old, (unsigned)size);
            operator delete[](old);
            capacity = end;
        }
    }
    memcpy(data + (unsigned)position, src, count);
    position += count;
    if (position > size)
        size = position;
    return count;
}

// FUNCTION: 0x519D00 AgMemoryStream::getSize
__int64 AgMemoryStream::getSize()
{
    return size;
}

// FUNCTION: 0x519E40 AgMemoryStream::setPosition
void AgMemoryStream::setPosition(unsigned __int64 value)
{
    position = value;
}

// FUNCTION: 0x519CE0 AgMemoryStream::getPosition
__int64 AgMemoryStream::getPosition()
{
    return position;
}

// FUNCTION: 0x519CF0 AgMemoryStream::getData
void* AgMemoryStream::getData()
{
    return data;
}

// FUNCTION: 0x519E60 AgMemoryStream::setSize
void AgMemoryStream::setSize(unsigned __int64 value)
{
    if (capacity < value) {
        if (data)
            operator delete[](data);
        data = (char*)operator new[]((unsigned)value);
        capacity = value;
    }
    size = value;
}

// FUNCTION: 0x519EB0 AgMemoryStream::load
unsigned AgMemoryStream::load(AgReference<AgStream> source)
{
    unsigned __int64 count = source.object->getSize();
    unsigned __int64 end = position + count;
    if (end > capacity) {
        char* old = data;
        data = (char*)operator new[]((unsigned)end);
        memcpy(data, old, (unsigned)size);
        operator delete[](old);
        capacity = end;
    }
    source.object->read(data + (unsigned)position, (unsigned)count);
    size = count;
    return (unsigned)count;
}

// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include <string.h>
#include "engine/core/AgBufferStream.h"

static inline unsigned bufferSize(const AgReference<AgBuffer>& ref)
{
    return ref.object ? ref.object->size : 0;
}

// FUNCTION: 0x562190 AgBufferStream::getBuffer
AgReference<AgBuffer> AgBufferStream::getBuffer()
{
    return buffer;
}

// FUNCTION: 0x5621F0 AgBufferStream::getName
StringRef AgBufferStream::getName()
{
    return StringRef("Memory");
}

// FUNCTION: 0x562210 AgBufferStream::getPosition
__int64 AgBufferStream::getPosition()
{
    return position;
}

// FUNCTION: 0x562220 AgBufferStream::getData
void* AgBufferStream::getData()
{
    return buffer.object ? buffer.object->data + offset : 0;
}

// FUNCTION: 0x562240 AgBufferStream::hasBuffer
bool AgBufferStream::hasBuffer()
{
    return buffer.object != 0;
}

// FUNCTION: 0x562250 AgBufferStream::getSize
__int64 AgBufferStream::getSize()
{
    int size = (int)bufferSize(buffer) - (int)offset;
    if (size < 0)
        return 0;
    if (length != 0xFFFFFFFF && length >= (unsigned)size)
        return length;
    return size;
}

// FUNCTION: 0x562A10 AgBufferStream::setPosition
void AgBufferStream::setPosition(unsigned __int64 value)
{
    unsigned size = bufferSize(buffer);
    unsigned pos = (unsigned)value;
    position = size < pos ? size : pos;
}

// FUNCTION: 0x5625B0 AgBufferStream::read
unsigned AgBufferStream::read(void* dst, unsigned count)
{
    if (!dst || !buffer.object)
        return 0;
    unsigned pos = position;
    unsigned size = (unsigned)getSize();
    if (pos + count >= size)
        count = size - pos;
    memcpy(dst, buffer.object->data + offset + pos, count);
    position += count;
    return count;
}

// FUNCTION: 0x562C90 AgBufferStream::write
unsigned AgBufferStream::write(const void* src, unsigned count)
{
    if (!buffer.object)
        return 0;
    unsigned pos = position;
    unsigned end = pos + count;
    unsigned size = (unsigned)getSize();
    if (pos + count >= size)
    {
        if ((buffer.object->flags & AG_BUFFER_GROWABLE) && offset + end >= (buffer.object ? buffer.object->size : 0))
            buffer.object->resize(offset + end);
        else
            count = size - pos;
    }
    memcpy(buffer.object->data + offset + pos, src, count);
    position += count;
    return count;
}

// FUNCTION: 0x5620A0 AgBufferStream::clone
AgReference<AgStream> AgBufferStream::clone()
{
    return AgReference<AgStream>(new AgBufferStream(*this));
}

// FUNCTION: 0x561E50 ??_GAgBufferStream@@UAEPAXI@Z

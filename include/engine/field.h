#pragma once

template <class T>
inline T& fieldAt(void* self, int offset)
{
    return *(T*)((char*)self + offset);
}

#include "engine/core/AgReference.inl"

struct Q_4FE070 {
    ~Q_4FE070();
};

// FUNCTION: 0x4FE070 destroyRange_4FE070
void __cdecl destroyRange_4FE070(AgReference<Q_4FE070>* first, AgReference<Q_4FE070>* last)
{
    for (; first != last; ++first)
        first->~AgReference<Q_4FE070>();
}

// STUB: 0x4FE110 sub_4FE110 (580 bytes)
void sub_4FE110()
{
}

// STUB: 0x4FE360 sub_4FE360 (286 bytes)
void sub_4FE360()
{
}

// STUB: 0x4FE480 sub_4FE480 (270 bytes)
void sub_4FE480()
{
}

// STUB: 0x4FE590 sub_4FE590 (36 bytes)
void sub_4FE590()
{
}

// STUB: 0x4FE5C0 sub_4FE5C0 (152 bytes)
void sub_4FE5C0()
{
}

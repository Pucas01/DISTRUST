#include "game/map_state.h"

extern unsigned char g_6A5DD9;
extern unsigned char g_6A84B0;
extern unsigned char g_6A84E0;
extern unsigned char g_6A8D40;
extern unsigned char g_73C4EC;
extern unsigned char g_73C53A;
extern unsigned char g_73E480;
extern unsigned char g_73E48B;
extern unsigned char g_73E506;
extern unsigned char g_73E648;
extern int g_73F4D0;
extern int g_7481C8;

// FUNCTION: 0x41E690 sub_41E690
int __cdecl sub_41E690()
{
    return g_6A5DD9 == 0;
}

// FUNCTION: 0x42C390 sub_42C390
int __cdecl sub_42C390()
{
    return g_6A84B0 == 0;
}

// FUNCTION: 0x4305D0 sub_4305D0
int __cdecl sub_4305D0()
{
    return g_6A84E0 == 0;
}

// FUNCTION: 0x432E80 sub_432E80
bool __cdecl sub_432E80()
{
    return g_6A8D40 ? true : false;
}

// FUNCTION: 0x441540 sub_441540
int __cdecl sub_441540()
{
    return g_73C53A == 0;
}

// FUNCTION: 0x441BF0 sub_441BF0
int __cdecl sub_441BF0()
{
    return g_73C4EC == 0;
}

// FUNCTION: 0x474300 sub_474300
int __cdecl sub_474300()
{
    return g_mapState.unk_CA == 0;
}

// FUNCTION: 0x48DCD0 sub_48DCD0
int __cdecl sub_48DCD0()
{
    return g_73E480 != 0;
}

// FUNCTION: 0x4945C0 sub_4945C0
int __cdecl sub_4945C0()
{
    return g_73E48B == 0;
}

// FUNCTION: 0x497770 sub_497770
int __cdecl sub_497770()
{
    return g_73E506 == 0;
}

// FUNCTION: 0x49B620 sub_49B620
int __cdecl sub_49B620()
{
    return g_73E648 == 0;
}

// FUNCTION: 0x4B94B0 sub_4B94B0
int __cdecl sub_4B94B0()
{
    return g_73F4D0 != 0;
}

// FUNCTION: 0x4D65B0 sub_4D65B0
bool __cdecl sub_4D65B0()
{
    return g_7481C8 ? false : true;
}

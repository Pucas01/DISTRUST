#include "game/game_mode.h"

extern unsigned char g_pending;
extern unsigned char g_73E38D;
extern unsigned char g_73E38E;
extern unsigned char g_73E39C;
extern unsigned char g_73E35A;
void __cdecl sub_486AF0(int);
void __cdecl sub_49C510(int);
void __cdecl sub_49F6C0(int);
void __cdecl sub_4966E0(int);
void __cdecl sub_499350();
void __cdecl sub_499380();

// FUNCTION: 0x48D870 enterMode1C
void __cdecl enterMode1C(short a, char b)
{
    g_73E394 = a;
    g_modeTimer.frame = 0;
    g_modeTimer.sub = 0;
    g_73E414 = b;
    g_gameMode = 0x1C;
    g_73E418 = -1;
}

// FUNCTION: 0x48D940 enterMode0D
void __cdecl enterMode0D(int a, int b)
{
    if ((unsigned)(a + 1) <= 6 && (unsigned)(b + 1) <= 0x114)
    {
        g_gameMode = 0x0D;
        g_modeTimer.frame = 0;
        g_modeTimer.sub = 0;
        g_73E38A = a;
        if (b >= 0)
        {
            short id = g_73E386 = b;
            sub_48D110(g_73E386 = b, 1.0f);
        }
    }
}

// FUNCTION: 0x48DA00 advanceMode13
void __cdecl advanceMode13()
{
    if (g_gameMode == 0x13 && g_modeTimer.frame == 0)
    {
        g_gameMode = 0x13;
        g_modeTimer.frame = 1;
        g_modeTimer.sub = 0;
    }
}

// FUNCTION: 0x48DB90 advanceMode12
void __cdecl advanceMode12()
{
    if (g_gameMode == 0x12 && g_modeTimer.frame == 0)
    {
        g_gameMode = 0x12;
        g_modeTimer.frame = 1;
        g_modeTimer.sub = 0;
    }
}

// FUNCTION: 0x48DA50 enterMode0B
void __cdecl enterMode0B(int value)
{
    if (value)
    {
        if (g_gameMode != 0x0B)
        {
            sub_496F40();
            g_gameMode = ModeNonstop;
        }
        g_73E382.a = 1;
        g_73E3E8 = value;
    }
}

// FUNCTION: 0x48DA80 enterMode0BUnlessMenu
void __cdecl enterMode0BUnlessMenu(int value)
{
    if (value)
    {
        unsigned char mode = g_gameMode;
        if (mode == 0x0E || mode == 0x0F || mode == 0x12 || mode == 0x13)
            return;
        if (mode != 0x0B)
        {
            sub_496F40();
            g_gameMode = ModeNonstop;
        }
        g_73E382.a = 1;
        g_73E3E4 = value;
    }
}

// FUNCTION: 0x48DAF0 enterMode0AIntro
void __cdecl enterMode0AIntro()
{
    g_gameMode = ModeNonstopStart;
    g_modeTimer.frame = 0x1E;
    g_modeTimer.sub = 0;
    g_73E381 = 1;
    g_73E39D = 0;
}

// FUNCTION: 0x48DB10 enterMode0A
void __cdecl enterMode0A(unsigned id, int variant)
{
    if (id <= 0x113 && (unsigned)(variant + 1) <= 5)
    {
        g_gameMode = ModeNonstopStart;
        g_modeTimer.frame = 0x64;
        g_modeTimer.sub = 0;
        g_73E381 = 0;
        g_73E386 = id;
        g_73E391 = variant;
        sub_48E160();
    }
}

// FUNCTION: 0x48DB60 enterMode14
void __cdecl enterMode14()
{
    g_gameMode = 0x14;
    g_modeTimer.frame = 0;
    g_modeTimer.sub = 0;
}

// FUNCTION: 0x48DE80 enterMode09
void __cdecl enterMode09()
{
    g_gameMode = 9;
    g_modeTimer.frame = 0;
    g_modeTimer.sub = 0;
}

// FUNCTION: 0x48DEB0 enterMode04
void __cdecl enterMode04(unsigned id)
{
    if (id <= 0x113)
    {
        g_gameMode = 4;
        g_modeTimer.frame = 0;
        g_modeTimer.sub = 0;
        g_73E386 = id;
    }
}

// FUNCTION: 0x48DF40 enterMode02
void __cdecl enterMode02(unsigned a, unsigned b, unsigned c)
{
    if (a <= 0x10 && b <= 0x113 && c <= 2)
    {
        g_modeTimer.frame = 0;
        g_modeTimer.sub = 0;
        g_gameMode = 2;
        g_73E382.b = a;
        g_73E386 = b;
        g_73E388 = c;
        g_73E389 = 0;
    }
}

// FUNCTION: 0x48DDE0 enterMode07Or08
void __cdecl enterMode07Or08(unsigned which)
{
    if (which <= 1)
    {
        g_gameMode = (which != 0) + 7;
        g_modeTimer.frame = 0;
        g_modeTimer.sub = 0;
    }
}

// FUNCTION: 0x48DF00 enterMode05Or06
void __cdecl enterMode05Or06(unsigned which)
{
    if (which <= 1)
    {
        if (g_73E389 == which && sub_4A3CF0() == which)
            return;
        g_gameMode = (which != 1) + 5;
        g_modeTimer.frame = 0;
        g_modeTimer.sub = 0;
    }
}

// FUNCTION: 0x48DE90 pollMode03
void __cdecl pollMode03(int value)
{
    if (g_gameMode == 3)
        sub_4A3D00(value);
}

// FUNCTION: 0x48DD00 isModeBlocking
int __cdecl isModeBlocking()
{
    unsigned char mode = g_gameMode;
    if (mode == 0 || mode == 3 || mode == ModeNonstop || mode == 0x15)
        return true;
    if (g_modeTimer.frame == 10)
    {
        if (mode == 0x0E || mode == 0x0F || mode == 0x10 || mode == 0x11 || mode == 0x12 || mode == 0x13)
            return true;
    }
    return false;
}

// FUNCTION: 0x48E080 getMenuModeIndex
int __cdecl getMenuModeIndex()
{
    unsigned char mode = g_gameMode;
    if (mode == 0x0E)
        return 1;
    if (mode == 0x0F)
        return 2;
    if (mode == 0x10)
        return 3;
    if (mode == 0x11)
        return 4;
    if (mode == 0x12)
        return 5;
    return mode == 0x13 ? 6 : 0;
}

// FUNCTION: 0x48E0D0 getMenuModeValue
int __cdecl getMenuModeValue()
{
    unsigned char mode = g_gameMode;
    if (mode == 0x0E)
        return g_73E3BC;
    if (mode == 0x0F)
        return g_73E3BC;
    return -1;
}

// FUNCTION: 0x48D8A0 resetGame
void __cdecl resetGame()
{
    g_gameMode = ModeIdle;
    sub_42F240();
    sub_42E060();
    sub_497780();
    sub_4A3DC0();
    sub_49A660();
    sub_48B4A0();
    sub_497F20();
    sub_4A09C0();
    sub_4A6130();
    sub_495D20();
    sub_4993B0();
    sub_496E00();
    sub_4945D0();
    sub_4A5B20();
    sub_4867D0();
    sub_4848D0();
    sub_496580();
    sub_49F390();
    sub_49C3D0();
    sub_49B760();
    sub_41A950();
    sub_422130();
    sub_434720();
    sub_4CE7C0();
    sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
}

// FUNCTION: 0x48DD50 enterMode20Or21
void __cdecl enterMode20Or21(int value)
{
    g_modeTimer.frame = 0;
    g_modeTimer.sub = 0;
    unsigned char mode = 0x20;
    if (value < 0)
    {
        value = -value;
        g_73E421 = 1;
    }
    else
        g_73E421 = 0;
    g_73E430 = value;
    g_73E432 = 0;
    if (g_73E350 == 0)
        mode = 0x21;
    g_gameMode = mode;
    g_73E3D4 = g_73E3D8;
    g_6FDB90.a = g_73E3D8;
    g_6FDB98 = g_6FDB88;
    g_6FDB9C.a = 0;
    g_6FDB9C.b = 0;
    g_6FDBA0.a = 0;
    g_6FDBA0.b = 0;
    g_73E391 = 3;
    g_gameState[0x85E0] = 0xFF;
}

// FUNCTION: 0x48D990 sub_48D990
void __cdecl sub_48D990(unsigned int a, unsigned int b)
{
    if (a <= 0x10 && b <= 0x113) {
        g_73E382.a = 1;
        g_73E382.b = a;
        g_73E386 = b;
    }
}

// FUNCTION: 0x48D9C0 sub_48D9C0
void __cdecl sub_48D9C0(unsigned int a, int b, unsigned int c)
{
    if (a <= 0x10 && b >= 0 && c <= 1) {
        g_73E382.a = 1;
        g_pending = a;
        g_73E38D = b;
        g_73E38E = c;
    }
}

// FUNCTION: 0x48DA30 sub_48DA30
void __cdecl sub_48DA30(unsigned int v)
{
    if (v <= 0x13)
        g_73E39C = v;
}

// FUNCTION: 0x48DAC0 sub_48DAC0
void __cdecl sub_48DAC0(int v)
{
    if (v >= 0 && v <= (signed char)g_73E39C)
        g_73E39D = v;
}

// FUNCTION: 0x48DB70 sub_48DB70
void __cdecl sub_48DB70(int v)
{
    if (v > 0)
        g_73E394 = v;
}

// FUNCTION: 0x48DEE0 sub_48DEE0
void __cdecl sub_48DEE0(int v)
{
    if (v == 1)
        sub_499350();
    else
        sub_499380();
}

// FUNCTION: 0x48DF90 sub_48DF90
void __cdecl sub_48DF90(int v)
{
    g_73E35A = (char)v;
    sub_486AF0(v);
    sub_49C510(v);
    sub_49F6C0(v);
    sub_4966E0(v);
}

// FUNCTION: 0x48DFC0 sub_48DFC0
void sub_48DFC0()
{
    g_gameState[0x85E0] = 0xFF;
}

// FUNCTION: 0x48DFD0 sub_48DFD0
unsigned char* sub_48DFD0()
{
    return g_gameState + 0x85E2;
}

// FUNCTION: 0x48DFE0 sub_48DFE0
int sub_48DFE0()
{
    return g_gameState[0x85E0];
}

// STUB: 0x48DFF0 sub_48DFF0 (134 bytes)
void sub_48DFF0()
{
}

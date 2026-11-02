#include "game/game_mode.h"

void __cdecl sub_457880(int value);
void __cdecl sub_4A3D40();
void __cdecl sub_4A3D80();
void __cdecl sub_4A4010();
void __cdecl sub_4A3940();
int __cdecl sub_4A37C0();
struct PendingAction
{
    unsigned char a;
    signed char b;
    signed char c;
    unsigned char d;
    signed char e;
};
extern PendingAction g_pending;
extern unsigned char g_73E390;


void __cdecl sub_4A37E0(int a, int b, int c, int d, int e);
void __cdecl sub_4A3F50(int value);
void __cdecl sub_48CF50(int a, int b, float c, int d);
void __cdecl sub_48D110(int id, float value);
void __cdecl sub_4C5350(int a, int b, int c);
int __cdecl sub_4C4F70();
void __cdecl sub_4A3DC0();
void __cdecl sub_4993B0();
void __cdecl sub_497B80(int a, int b);
int __cdecl sub_497770();
void __cdecl sub_497780();
void __cdecl sub_4A3B50();
void __cdecl sub_4992B0(int value);
void __cdecl sub_4994C0(int value);
void __cdecl sub_4994B0(int value);
extern short g_73E358;

void __cdecl sub_49A720(int value);
void __cdecl sub_48B600(int value);
void __cdecl sub_4A0D30(int value);
void __cdecl sub_463190(int a, int b);
void __cdecl sub_4A0490();
int __cdecl sub_4A0D70();
void __cdecl sub_4A17F0(int value);
void __cdecl sub_48B770();
void __cdecl sub_48B020();
void __cdecl sub_4946F0(int value);
int __cdecl sub_4945C0();
extern short g_73E3B2;
extern short g_73E3A8;

static void leaveToMode03()
{
    g_gameMode = 3;
    g_modeTimer.frame = 0;
    g_73E382.a = 0;
    g_73E382.b = 0xFF;
    g_pending.a = 0xFF;
    g_pending.d = 0xFF;
    g_73E390 = 0xFF;
}

// BLOCK: 0x493CB0 updateMode07 101
void updateMode07()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4A3D40();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A37C0() == 1)
    {
        g_73E389 = 1;
        leaveToMode03();
    }
}

// BLOCK: 0x493D20 updateMode08 101
void updateMode08()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4A3D80();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A37C0() == 1)
    {
        g_73E389 = 1;
        leaveToMode03();
    }
}

// BLOCK: 0x494120 updateMode05 101
void updateMode05()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4A4010();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A37C0() == 1)
    {
        g_73E389 = 1;
        leaveToMode03();
    }
}

// BLOCK: 0x494190 updateMode06 103
void updateMode06()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4A3940();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A37C0() == 1)
    {
        g_73E389 = 0;
        leaveToMode03();
    }
}

// BLOCK: 0x494050 updateMode03 202
void updateMode03()
{
    sub_457880(1);
    if (g_73E382.a == 1)
    {
        int a = g_pending.e;
        signed char b = g_pending.b;
        unsigned char c = g_pending.a;
        if (a == 2)
            a = -1;
        g_73E382.a = 0;
        int bs = b;
        if (c != 0xFF)
        {
            sub_4A37E0(a, (signed char)c, g_pending.c, bs, (signed char)g_pending.d);
            g_pending.d = 0xFF;
            g_pending.e = 0xFF;
            g_pending.a = 0xFF;
            g_pending.b = 0xFF;
            g_pending.c = 0xFF;
        }
        else if (b != -1)
        {
            sub_4A3F50(bs);
            g_pending.b = 0xFF;
        }
        unsigned char d = g_73E382.b;
        if (d != 0xFF)
        {
            sub_48CF50((signed char)d, g_73E386, 1.0f, 0);
            g_73E382.b = 0xFF;
            g_73E386 = -1;
        }
    }
}

// BLOCK: 0x493FA0 updateMode04 167
void updateMode04()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_48D110(g_73E386, 1.0f);
        if (g_73E388 == 0)
        {
            sub_4A3940();
            g_modeTimer.frame++;
            return;
        }
        g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4A37C0() == 1)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4C5350(1, 1, 60);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11)
    {
        if (sub_4C4F70() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 12)
    {
        sub_4A3DC0();
        sub_4993B0();
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x493EF0 updateMode09 161
void updateMode09()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_497B80(0, g_73E358);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_497770() == 1)
        {
            sub_4A3B50();
            sub_4992B0(1);
            sub_4994C0(1);
            sub_4994B0(0x23F0);
            sub_497780();
            g_modeTimer.frame = 10;
        }
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        short zero = 0;
        g_gameMode = 3;
        g_73E382.a = 0;
        g_73E382.b = 0xFF;
        g_pending.a = 0xFF;
        g_pending.d = 0xFF;
        g_73E390 = 0xFF;
        g_modeTimer.frame = zero;
    }
}

// BLOCK: 0x4907B0 updateMode0F 105
void updateMode0F()
{
    if (g_modeTimer.frame == 0)
    {
        g_6FDB9C.b++;
        sub_457880(0);
        sub_49A720(0);
        sub_48B600(0);
        sub_4A0D30(g_73E3B2);
        sub_463190(0x75, 0x64);
        sub_4A0490();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A0D70() == 1)
        g_modeTimer.frame = 10;
}

// BLOCK: 0x491390 updateMode10 111
void updateMode10()
{
    if (g_modeTimer.frame == 0)
    {
        sub_4A17F0(g_73E3A8);
        sub_48B600(0);
        sub_48B770();
        g_modeTimer.frame++;
        g_modeTimer.sub = 0;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        g_modeTimer.sub = (int)((float)g_modeTimer.sub + 1.0f);
        if (g_modeTimer.sub >= 120)
            g_modeTimer.frame = 10;
    }
}

// BLOCK: 0x491400 updateMode11 83
void updateMode11()
{
    if (g_modeTimer.frame == 0)
    {
        sub_48B600(0);
        sub_48B770();
        sub_4A0D30(g_73E3B2);
        g_modeTimer.frame++;
        g_modeTimer.sub = 0;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_4A0D70() == 1)
        g_modeTimer.frame = 10;
}

void __cdecl sub_49A900(int value);
void __cdecl sub_48D3A0();
void __cdecl sub_4CE9D0(int value);
void __cdecl sub_49A950();
int __cdecl sub_49A2E0();
void __cdecl sub_49A8A0(int value);
void __cdecl sub_49A620(int a, int b, int c);
void __cdecl sub_4C4B10(int value);
extern float g_69813C;

void __cdecl sub_4966C0(int value);
int __cdecl sub_4966A0();
void __cdecl sub_4967E0();
void __cdecl sub_4946C0(int value);
int __cdecl sub_4232B0(int value);
void __cdecl sub_496580();
extern short g_73E416;

void __cdecl sub_49F480(int value);
void __cdecl sub_49F350();
void __cdecl sub_49F6A0();
void __cdecl sub_49BD90();
void __cdecl sub_49F110();
int __cdecl sub_49F680();
void __cdecl sub_49F390();
void __cdecl sub_49C3D0();
void __cdecl sub_41A940(int value);
void __cdecl sub_422870(int a, int b);
extern unsigned char g_73E41D;
extern unsigned char g_73E41E;

static __forceinline void updateMenuMode(int arg)
{
    if (g_modeTimer.frame == 0)
        return;
    if (g_modeTimer.frame == 1)
    {
        sub_457880(0);
        sub_49A720(0);
        sub_48B020();
        g_73C6B0[0x85E0] = 0xFF;
        sub_4946F0(arg);
        g_modeTimer.frame++;
        g_modeTimer.sub = 0;
        return;
    }
    if (g_modeTimer.frame == 2 && sub_4945C0() == 1)
    {
        sub_42F240();
        sub_42E060();
        sub_48B4A0();
        sub_496E00();
        sub_49A660();
        sub_497F20();
        sub_495D20();
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_modeTimer.frame = 10;
    }
}

// BLOCK: 0x4912E0 updateMode12 163
void updateMode12()
{
    updateMenuMode(4);
}

// BLOCK: 0x490160 updateMode13 163
void updateMode13()
{
    updateMenuMode(5);
}

// BLOCK: 0x491160 updateMode14 163
void updateMode14()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49A720(0);
        g_69813C = 1.0f;
        sub_49A900(0);
        sub_48D3A0();
        sub_42F240();
        sub_48B020();
        sub_4A0490();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4A0D70() == 1)
        {
            sub_4CE9D0(g_73E3B2);
            sub_49A950();
            g_modeTimer.frame++;
            g_modeTimer.sub = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 2 && sub_49A2E0() == 1)
    {
        short zero = 0;
        g_gameMode = 0x15;
        g_modeTimer.frame = zero;
        g_73E382.a = zero;
    }
}

// BLOCK: 0x491210 updateMode15 197
void updateMode15()
{
    sub_457880(1);
    if (g_73E382.a == 1)
    {
        unsigned char b = g_pending.b;
        g_73E382.a = 0;
        if (b != 0xFF)
        {
            sub_49A8A0((signed char)b);
            g_pending.b = 0xFF;
        }
        unsigned char a = g_pending.a;
        if (a != 0xFF)
        {
            sub_49A620((signed char)a, g_pending.c, (signed char)g_pending.d);
            g_pending.a = 0xFF;
            g_pending.c = 0xFF;
            g_pending.d = 0xFF;
        }
        if (g_73E382.b != 0xFF)
        {
            sub_4C4B10(0x220);
            sub_4C5350(0, 4, 30);
            sub_48CF50((signed char)g_73E382.b, g_73E386, 1.0f, 0);
            g_73E382.b = 0xFF;
            g_73E386 = -1;
        }
    }
}

// BLOCK: 0x4900C0 updateMode0D 157
void updateMode0D()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49A720(0);
        sub_4A0490();
        sub_4946F0(g_73E38A);
        g_modeTimer.frame++;
        g_modeTimer.sub = 0;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4945C0() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        sub_42F240();
        sub_42E060();
        sub_48B4A0();
        sub_496E00();
        sub_49A660();
        sub_497F20();
        sub_495D20();
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x48FDD0 updateMode1E 169
void updateMode1E()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4967E0();
        sub_4946C0(4);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4966A0() == 1)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4946F0(4);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11)
    {
        if (sub_4945C0() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 12)
    {
        g_73E418 = -2;
        sub_496580();
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x48FD10 updateMode1F 185
void updateMode1F()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4966C0(g_73E416);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4966A0() == 1)
            g_modeTimer.frame = 12;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4C5350(1, 1, 60);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11)
    {
        if (sub_4C4F70() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 12)
    {
        g_73E418 = sub_4232B0(g_73E416);
        sub_496580();
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x4939D0 updateMode24 293
void updateMode24()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49F480(0);
        sub_49F350();
        g_73E41D = 0;
        sub_49F6A0();
        g_73E41E = 0;
        sub_49BD90();
        sub_4A0490();
        sub_49F110();
        sub_48B020();
        sub_4946C0(4);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_49F680() == 1)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4946F0(4);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11)
    {
        if (sub_4945C0() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 12)
    {
        sub_48B4A0();
        sub_49F390();
        sub_49C3D0();
        sub_41A940(1);
        for (int i = 0; i <= 16; i++)
            sub_422870(i, 1);
        g_73E432 = 1;
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

extern unsigned char g_6879EC;
extern short g_73E35C;
extern unsigned char g_73E481;
extern unsigned char g_73E482;
extern unsigned char g_7016AC;
void __cdecl sub_41AC10(int value);
void __cdecl sub_422B30(int a, int b);
void __cdecl sub_430EF0();
void __cdecl sub_433040(int value);
int __cdecl sub_444930();
int __cdecl sub_41ADF0();
int __cdecl sub_423000(int value);
void __cdecl sub_422840(int a, int b);
void __cdecl sub_423200(int a, float b, float c, float d);
void __cdecl sub_48CDD0(int a, int b);
int __cdecl sub_41AAF0();
void __cdecl sub_434FB0(int a, int b, int c);
void __cdecl sub_434E60(int a, int b);
void __cdecl sub_4350B0(int value);
void __cdecl sub_432E90();
void __cdecl sub_4D06C0(int value);

// BLOCK: 0x491460 updateMode27 364
void updateMode27()
{
    if (g_modeTimer.frame == 0)
    {
        g_6879EC = 0;
        sub_4C5350(1, 1, 1);
        sub_41AC10(g_73E35C);
        sub_422B30(g_73E481, 0);
        sub_430EF0();
        sub_433040(0);
        g_modeTimer.frame++;
        g_7016AC = 1;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_444930() == 1 && sub_41ADF0() == 1 && sub_423000(g_73E481) == 1)
    {
        sub_422840(g_73E481, g_73E482);
        if (g_73E35C != 22)
            sub_423200(g_73E481, 0.0f, 0.0f, 0.0f);
        sub_422870(g_73E481, 1);
        sub_48CDD0(g_73E481, 0);
        g_73E386 = 0;
        int count = sub_41AAF0();
        for (int i = 0; i < count; i++)
        {
            sub_434FB0(i, 0, 0);
            sub_434E60(i, i + 20);
        }
        sub_4350B0(g_73E35C);
        sub_432E90();
        sub_4D06C0(10000);
        g_gameMode = ModeIdle;
        g_modeTimer.frame = 0;
        g_6879EC = 1;
    }
}

void __cdecl sub_4CE7C0();
bool __cdecl sub_432E80();
void __cdecl sub_4A4070();
void __cdecl sub_4A4040();
void __cdecl sub_4A3FE0();
void __cdecl sub_4992B0(int value);
void __cdecl sub_4994C0(int value);
void __cdecl sub_4994B0(int value);
extern signed char g_73E383;

// BLOCK: 0x493D90 updateMode02 351
void updateMode02()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_4CE7C0();
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        sub_4C5350(0, 1, 60);
        sub_48CF50(g_73E383, g_73E386, 1.0f, 0);
        sub_497B80(0, g_73E358);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_497770() == 1)
        {
            sub_4A3B50();
            sub_4992B0(1);
            sub_4994C0(1);
            sub_4994B0(9200);
            sub_497780();
            g_modeTimer.frame++;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        if (g_73E388 == 0)
        {
            if (!sub_432E80())
                sub_4A4070();
            else
                sub_4A4040();
            g_modeTimer.frame++;
            return;
        }
        if (g_73E388 == 1)
        {
            if (!sub_432E80())
                sub_4A4010();
            else
                sub_4A3FE0();
            g_modeTimer.frame++;
            return;
        }
        g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 3)
    {
        if (sub_4A37C0() == 1)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        g_gameMode = 3;
        g_modeTimer.frame = 0;
        g_73E382.a = 0;
        g_73E382.b = 0xFF;
        g_pending.a = 0xFF;
        g_pending.d = 0xFF;
        g_73E390 = 0xFF;
    }
}

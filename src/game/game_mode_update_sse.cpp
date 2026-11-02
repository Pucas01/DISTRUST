// FLAGS: /nologo /c /O2 /Oy- /Gy /GS- /Zc:wchar_t /arch:SSE2
#include <xmmintrin.h>
#include "game/game_mode.h"

void __cdecl sub_457880(int value);
void __cdecl sub_49F480(int value);
void __cdecl sub_49F350();
void __cdecl sub_49F6A0();
void __cdecl sub_49F110();
void __cdecl sub_49BD90();
void __cdecl sub_4A0490();
void __cdecl sub_4946C0(int value);
void __cdecl sub_4946F0(int value);
int __cdecl sub_4945C0();
int __cdecl sub_49F680();
void __cdecl sub_48B4A0();
void __cdecl sub_49F390();
void __cdecl sub_49C3D0();
void __cdecl sub_41A940(int value);
void __cdecl sub_422870(int a, int b);
void __cdecl sub_41AF90(int a, int b, int c, int d, int e, int f, int g, int h, int i);
extern unsigned char g_73E41D;
extern unsigned char g_73E41E;
void __cdecl sub_49F640(int value);
extern short g_73E354;

// BLOCK: 0x493860 updateMode26 359
void updateMode26()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49F480(0);
        sub_49F350();
        g_73E41D = 0;
        sub_49F6A0();
        g_73E41E = 0;
        sub_49F110();
        sub_4946C0(5);
        g_modeTimer.frame++;
        g_73E354 = 0;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 30)
        {
            sub_49F640(1);
            sub_49BD90();
            sub_4A0490();
            g_modeTimer.frame++;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        if (sub_49F680() == 1)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4946F0(5);
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
        g_73E432 = 3;
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

struct SceneEntry
{
    char pad[0x1A];
    short s1A;
    short s1C;
};
extern SceneEntry *g_73E658;
extern unsigned char g_73E41A;
extern unsigned char g_73E383;
extern unsigned char g_6E4697[][5];
void __cdecl sub_462E40(int a, int b, int c, int d);
void __cdecl sub_48CF50(int a, int b, float c, bool d);
void __cdecl sub_422B30(int a, int b);

// BLOCK: 0x493B00 updateMode25 421
void updateMode25()
{
    if (g_modeTimer.frame == 0)
    {
        sub_462E40(0, 100, 0, 0);
        sub_457880(0);
        sub_49F480(0);
        g_73E383 = g_73E41A;
        g_73E386 = g_73E658->s1C;
        sub_48CF50((signed char)g_73E383, g_73E386, 1.0f, 0);
        sub_422B30(g_73E41A, g_73E658->s1A);
        g_6E4697[g_73E41A][0] = (unsigned char)g_73E658->s1A;
        sub_49F640(0);
        sub_49BD90();
        sub_4946C0(2);
        g_modeTimer.frame++;
        g_73E354 = 0;
    }
    else if (g_modeTimer.frame == 1)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 120)
            g_modeTimer.frame = 10;
        return;
    }
    else if (g_modeTimer.frame == 10)
    {
        sub_4946F0(2);
        g_modeTimer.frame++;
    }
    else if (g_modeTimer.frame == 11)
    {
        if (sub_4945C0() == 1)
            g_modeTimer.frame++;
    }
    if (g_modeTimer.frame == 12)
    {
        sub_49BD90();
        sub_48B4A0();
        sub_49F390();
        sub_49C3D0();
        sub_41A940(1);
        for (int i = 0; i <= 16; i++)
            sub_422870(i, 1);
        g_73E432 = 2;
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

extern unsigned char g_73E35E;
extern unsigned char g_623650[];
extern short g_73E35C;
extern unsigned char g_6879EC;
void __cdecl sub_4C5350(int a, int b, int c);
void __cdecl sub_4A61E0(int value);
int __cdecl sub_4A61C0();
void __cdecl sub_4A61B0();
void __cdecl sub_41AC10(int value);
void __cdecl sub_422240(int value);
void __cdecl sub_48CDD0(int a, int b);
void __cdecl sub_430EF0();
void __cdecl sub_433040(int value);
void __cdecl sub_432E90();
int __cdecl sub_444930();

extern short g_73E3B2;
extern int g_73E3B4;
extern int g_73E3B8;
extern short g_73E3DE;
extern unsigned char g_73E480;
extern int g_6A5C10;
void __cdecl sub_49A720(int value);
void __cdecl sub_48B600(int value);
int __cdecl sub_4D18F0(int a, int b);
short __cdecl sub_42EBB0(int a, int b, float c, float d);
void __cdecl sub_4980E0(int a, int b, int c);
void __cdecl sub_4A0A00(int value);
int __cdecl sub_4A04E0(int value);
void __cdecl sub_48CDF0(int a, int b, float c);
void __cdecl sub_463190(int a, int b);
int __cdecl sub_42EB00(int value);
void __cdecl sub_4CE9D0(int value);

// BLOCK: 0x490670 updateMode0E 305
void updateMode0E()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49A720(0);
        g_6FDB9C.b++;
        sub_48B600(0);
        int found = sub_4D18F0(g_73E3B2, 9);
        if (found == 1)
            g_73E3DE = sub_42EBB0(g_73E3B2, 9, (float)g_73E3B4, (float)g_73E3B8);
        else
            g_73E3DE = sub_42EBB0(g_73E3B2, 10, (float)g_73E3B4, (float)g_73E3B8);
        sub_4980E0(2, g_73E3B4, g_73E3B8);
        sub_4A0A00(g_73E3B2);
        int slot = sub_4A04E0(g_73E3B2);
        int icon = 0x102;
        if (g_73E480 && g_6A5C10 == 0x16)
            icon = 0x10D;
        sub_48CDF0(slot, icon, 1.0f);
        sub_463190(0xB1, 100);
        sub_4A0490();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1 && sub_42EB00(g_73E3DE) == 1)
    {
        sub_4CE9D0(g_73E3B2);
        g_modeTimer.frame = 10;
    }
}

void __cdecl sub_48B020();
void __cdecl sub_4C5350(int a, int b, int c);
void __cdecl sub_42F240();
int __cdecl sub_4A0D70();
void __cdecl sub_49A300();
int __cdecl sub_4C4F70();
void __cdecl sub_42E060();
void __cdecl sub_496E00();
void __cdecl sub_49A660();
void __cdecl sub_497F20();
void __cdecl sub_495D20();

// BLOCK: 0x490820 updateMode0C 339
void updateMode0C()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_49A720(0);
        sub_42F240();
        sub_4A0490();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4A0D70() == 1)
        {
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        sub_48B020();
        g_modeTimer.frame++;
        g_73E354 = 0;
        return;
    }
    if (g_modeTimer.frame == 3)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 15)
        {
            sub_49A300();
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 4)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 30)
        {
            sub_4C5350(1, 1, 60);
            g_modeTimer.frame++;
        }
        return;
    }
    if (g_modeTimer.frame == 5)
    {
        if (sub_4C4F70() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 6)
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

extern short g_73E394;
extern float g_73E398;
extern float g_623408;
extern float g_69813C;
extern short g_73E416;
void __cdecl sub_4CE7C0();
void __cdecl sub_497B80(int a, int b);
int __cdecl sub_497770();
void __cdecl sub_497780();
void __cdecl sub_496550();
void __cdecl sub_486B90(unsigned a, unsigned b, unsigned c);
void __cdecl sub_4967D0();
int __cdecl sub_4966A0();


extern unsigned char g_73E400;
extern unsigned char g_6879ED;
void __cdecl sub_486890(int value);
void __cdecl sub_4848C0();
void __cdecl sub_496C00();
int __cdecl sub_486A90();
void __cdecl sub_486750();
void __cdecl sub_4867D0();
void __cdecl sub_4848D0();

// BLOCK: 0x48E620 updateAnagramCleared 330
void updateAnagramCleared()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_486890(0);
        sub_4848C0();
        sub_496C00();
        sub_4946C0(3);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_486A90() == 1)
        {
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 60)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_486750();
        g_modeTimer.frame++;
        return;
    }
    int ready;
    if (g_modeTimer.frame == 11)
    {
        ready = sub_486A90();
        goto check;
    }
    if (g_modeTimer.frame == 12)
    {
        sub_4946F0(3);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 13)
    {
        ready = sub_4945C0();
    check:
        if (ready == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 14)
    {
        sub_4867D0();
        sub_4848D0();
        sub_495D20();
        sub_496E00();
        sub_497F20();
        g_73E400 = 1;
        g_6879ED = 1;
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x48E770 updateAnagramFailed 291
void updateAnagramFailed()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_486890(0);
        sub_4848C0();
        sub_496C00();
        sub_4946C0(5);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_486A90() == 1)
        {
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 60)
            g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        sub_4946F0(5);
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
        sub_4867D0();
        sub_4848D0();
        sub_495D20();
        sub_496E00();
        sub_497F20();
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E400 = 3;
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

// BLOCK: 0x48F600 updateAnagramTimeUp 291
void updateAnagramTimeUp()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_486890(0);
        sub_4848C0();
        sub_496C00();
        sub_4946C0(4);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_486A90() == 1)
        {
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 60)
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
        sub_4867D0();
        sub_4848D0();
        sub_495D20();
        sub_496E00();
        sub_497F20();
        g_73E400 = 2;
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E3D4 = g_73E3D8;
        g_6FDB90.a = g_73E3D8;
        g_6FDB90.b = g_73E3D8;
        g_gameMode = ModeIdle;
    }
}

extern short g_73E3F0;
extern short g_73E3F2;
extern short g_73E3F4;
extern int g_73E3F8;
extern int g_73E3FC;
extern unsigned char g_73E3EE;
extern unsigned char g_73E401[];
extern short g_6E47BE;
void __cdecl sub_4867C0();
void __cdecl sub_484840();
void __cdecl sub_496D00(int value);
void __cdecl sub_497D20(int value);
void __cdecl sub_495C50(int value);
void __cdecl sub_484630(int value);
void __cdecl sub_484A90(int value);
short __cdecl sub_484620();
void __cdecl sub_486B80(int value);
void __cdecl sub_486B60();

struct SceneLoad
{
    unsigned short id;
    unsigned char arg[8];
};
extern SceneLoad g_697C88[];
extern unsigned char g_73E481;
extern unsigned char g_73E39C;
extern unsigned char g_73E3B0;
extern unsigned char g_73E381;
extern unsigned char g_73E39D;
extern unsigned char g_73E391;
void __cdecl sub_48B5A0();
void __cdecl sub_48B750(int value);
void __cdecl sub_48B1C0(int a, int b, int c, int d);
void __cdecl sub_49A460();
int __cdecl sub_4BC7F0();
void __cdecl sub_48B710();
void __cdecl sub_48B670();
int __cdecl sub_48B480();
void __cdecl sub_49A970(unsigned a, unsigned b, unsigned c);
void __cdecl sub_49A840(int value);
void __cdecl sub_49A8C0(int value);
void __cdecl sub_49A8E0(int a, int b);
void __cdecl sub_49A930();
void __cdecl sub_49A700();
int __cdecl sub_49A2E0();
void __cdecl sub_48B6F0();

// BLOCK: 0x490210 updateNonstopStart 1120
void updateNonstopStart()
{
    if (g_modeTimer.frame == 100)
    {
        g_modeTimer.frame = 0;
        return;
    }
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        sub_432E90();
        g_69813C = 1.0f;
        sub_4CE7C0();
        if ((signed char)g_73E391 == -1)
            sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        else
        {
            const SceneLoad &s = g_697C88[(signed char)g_73E391];
            sub_41AF90(s.id, s.arg[0], s.arg[1], s.arg[2], s.arg[3], s.arg[4], s.arg[5], s.arg[6], s.arg[7]);
        }
        sub_4C5350(0, 1, 60);
        bool hasVoice = false;
        int voice = 0;
        if (g_73E480 == 1)
        {
            hasVoice = true;
            voice = g_73E481;
        }
        sub_48CF50(voice, g_73E386, 1.0f, hasVoice);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_4C4F70() == 1)
        {
            if (g_73E480 == 0)
                sub_4A61E0(0);
            else
                sub_4A61E0(6);
            g_modeTimer.frame++;
        }
        return;
    }
    if (g_modeTimer.frame == 2)
    {
        sub_497B80(1, 0);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 3)
    {
        if (sub_4A61C0() == 1 && sub_497770() == 1)
            g_modeTimer.frame = 5;
        return;
    }
    if (g_modeTimer.frame == 4)
    {
        if (sub_4C4F70() == 1)
            g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 5)
    {
        sub_48B5A0();
        sub_48B750(0);
        sub_48B1C0(2, -1, 6, 15);
        sub_496D00(0);
        sub_497D20(0);
        sub_49A460();
        sub_495C50(9);
        sub_497780();
        g_modeTimer.frame = 10;
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        if (g_73E480 == 0)
            sub_48CF50(sub_4BC7F0() & 0xF, 0x88, 1.0f, false);
        sub_48B710();
        sub_48B670();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11)
    {
        if (sub_48B480() == 1)
            g_modeTimer.frame = 20;
        return;
    }
    if (g_modeTimer.frame == 20)
    {
        g_73E398 = (float)(g_73E394 * 60);
        if (g_73E480 == 0)
        {
            unsigned seconds = (unsigned)g_73E398;
            unsigned ticks = (unsigned)((float)(g_73E394 * 60) * g_623408);
            sub_49A970(seconds / 3600 % 60, seconds / 60 % 60, ticks % 600 * 1000 / 600);
        }
        else
            sub_49A970(59, 59, 999);
        g_modeTimer.frame = 30;
        return;
    }
    if (g_modeTimer.frame == 30)
    {
        sub_49A840((signed char)g_73E39C);
        sub_49A8C0((signed char)g_73E39D);
        for (int i = 0; i < (signed char)g_73E39C; i++)
            sub_49A8E0(i, 0);
        if (g_73E381 == 0)
            sub_49A930();
        else
            sub_49A700();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 31)
    {
        if (sub_49A2E0() == 1)
        {
            sub_48B6F0();
            g_modeTimer.frame++;
            g_73E354 = 0;
        }
        return;
    }
    if (g_modeTimer.frame == 32)
    {
        g_73E354 = g_73E354 + 1.0f;
        if (g_73E354 >= 60)
        {
            g_modeTimer.frame = 0;
            g_gameMode = ModeNonstop;
            g_73E3B0 = 0;
        }
    }
}

// BLOCK: 0x48FB50 updateMode1C 433
void updateMode1C()
{
    if (g_modeTimer.frame == 0)
    {
        sub_457880(0);
        g_69813C = 1.0f;
        sub_4CE7C0();
        sub_41AF90(-1, 0, 0, 0, 0, 0, 0, 0, 0);
        g_73E383 = 0;
        g_73E386 = 0x10A;
        sub_48CF50(0, g_73E386, 1.0f, 0);
        sub_497B80(3, 0);
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 1)
    {
        if (sub_497770() == 1)
        {
            sub_496550();
            sub_497780();
            g_modeTimer.frame = 10;
        }
        return;
    }
    if (g_modeTimer.frame == 10)
    {
        g_73E398 = (float)(g_73E394 * 60);
        unsigned seconds = (unsigned)g_73E398;
        unsigned ticks = (unsigned)((float)(g_73E394 * 60) * g_623408);
        sub_486B90(seconds / 3600 % 60, seconds / 60 % 60, ticks % 600 * 1000 / 600);
        sub_4967D0();
        g_modeTimer.frame++;
        return;
    }
    if (g_modeTimer.frame == 11 && sub_4966A0() == 1)
    {
        g_73E416 = 8;
        g_gameMode = 0x1D;
        g_modeTimer.frame = 0;
    }
}

#pragma once

struct ShortPair
{
    short a;
    short b;
};

enum GameModeId
{
    ModeIdle = 0x00,
    ModeNonstopStart = 0x0A,
    ModeNonstop = 0x0B,
    ModeAnagramReveal = 0x16,
    ModeAnagramInit = 0x17,
    ModeAnagram = 0x18,
    ModeAnagramTimeUp = 0x19,
    ModeAnagramFailed = 0x1A,
    ModeAnagramCleared = 0x1B
};

extern unsigned char g_gameMode;
struct ModeTimer
{
    short frame;
    short sub;
};

extern ModeTimer g_modeTimer;
extern unsigned char g_73E381;
struct BytePair
{
    unsigned char a;
    unsigned char b;
};

extern BytePair g_73E382;
extern short g_73E386;
extern unsigned char g_73E388;
extern unsigned char g_73E389;
extern unsigned char g_73E38A;
extern unsigned char g_73E391;
extern short g_73E394;
extern unsigned char g_73E39D;
extern short g_73E3BC;
extern int g_73E3E4;
extern int g_73E3E8;
extern unsigned char g_73E414;
extern short g_73E418;

void __cdecl sub_48D110(int id, float value);
void __cdecl sub_48E160();
void __cdecl sub_496F40();
int __cdecl sub_4A3CF0();
void __cdecl sub_4A3D00(int value);

void __cdecl enterMode1C(short a, char b);
void __cdecl enterMode0D(int a, int b);
void __cdecl advanceMode13();
void __cdecl advanceMode12();
void __cdecl enterMode0B(int value);
void __cdecl enterMode0BUnlessMenu(int value);
void __cdecl enterMode0AIntro();
void __cdecl enterMode0A(unsigned id, int variant);
void __cdecl enterMode14();
void __cdecl enterMode09();
void __cdecl enterMode04(unsigned id);
void __cdecl enterMode02(unsigned a, unsigned b, unsigned c);
void __cdecl enterMode07Or08(unsigned which);
void __cdecl enterMode05Or06(unsigned which);
void __cdecl pollMode03(int value);
int __cdecl isModeBlocking();
int __cdecl getMenuModeIndex();
int __cdecl getMenuModeValue();

void __cdecl sub_42F240();
void __cdecl sub_42E060();
void __cdecl sub_497780();
void __cdecl sub_4A3DC0();
void __cdecl sub_49A660();
void __cdecl sub_48B4A0();
void __cdecl sub_497F20();
void __cdecl sub_4A09C0();
void __cdecl sub_4A6130();
void __cdecl sub_495D20();
void __cdecl sub_4993B0();
void __cdecl sub_496E00();
void __cdecl sub_4945D0();
void __cdecl sub_4A5B20();
void __cdecl sub_4867D0();
void __cdecl sub_4848D0();
void __cdecl sub_496580();
void __cdecl sub_49F390();
void __cdecl sub_49C3D0();
void __cdecl sub_49B760();
void __cdecl sub_41A950();
void __cdecl sub_422130();
void __cdecl sub_434720();
void __cdecl sub_4CE7C0();
void __cdecl sub_41AF90(int a, int b, int c, int d, int e, int f, int g, int h, int i);

extern unsigned char g_73E350;
extern unsigned char g_73E421;
extern unsigned short g_73E430;
extern unsigned short g_73E432;
extern int g_73E3D4;
extern int g_73E3D8;
extern ShortPair g_6FDB90;
extern int g_6FDB88;
extern int g_6FDB98;
extern ShortPair g_6FDB9C;
extern ShortPair g_6FDBA0;
extern unsigned char* g_gameState;

void __cdecl resetGame();
void __cdecl enterMode20Or21(int value);

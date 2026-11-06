extern signed char g_6E45B8;
extern short g_6E47DA;

extern unsigned char* g_gameState;

int __cdecl testButtonA(unsigned int bit);
void __cdecl startFade(int mode, int type, int duration);
void __cdecl sub_4C8D00(unsigned int i, float v);
extern float g_611888;
extern float g_6239D0;

// FUNCTION: 0x470F00 sub_470F00
bool sub_470F00()
{
    return (g_6E45B8 - 1) % g_6E47DA == 6;
}

// STUB: 0x470F20 sub_470F20 (478 bytes)
void sub_470F20()
{
}

// STUB: 0x471100 sub_471100 (1134 bytes)
void sub_471100()
{
}

// STUB: 0x471570 sub_471570 (137 bytes)
void sub_471570()
{
}

// STUB: 0x471600 sub_471600 (597 bytes)
void sub_471600()
{
}

// FUNCTION: 0x471860 handlePeriodInput
void __cdecl handlePeriodInput()
{
    if (testButtonA(0x18)) {
        *(unsigned short*)(g_gameState + 0x8DB0) = 0x21C;
        startFade(1, 1, 10);
        return;
    }
    float v = g_611888;
    if (testButtonA(0x16) || testButtonA(0x17))
        v = g_6239D0;
    sub_4C8D00(*(short*)(g_gameState + 0x8DB4), v);
}

// STUB: 0x4718E0 sub_4718E0 (108 bytes)
void sub_4718E0()
{
}

// FUNCTION: 0x471950 isSpecialPeriod
bool __cdecl isSpecialPeriod(char flag)
{
    int p = *(unsigned short*)(g_gameState + 0x8DB0);
    if (p == 0x12D || p == 0x12E || p == 0x12F || p == 0x133 || p == 0x130 || p == 0x131)
        return true;
    if (flag == 1 && p == 0x132)
        return true;
    return false;
}

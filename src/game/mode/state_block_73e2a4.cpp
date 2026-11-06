struct P2_48B {
    short a;
    short b;
};
extern char* g_73E2A4;

// STUB: 0x48B080 sub_48B080 (314 bytes)
void sub_48B080()
{
}

// STUB: 0x48B1C0 sub_48B1C0 (693 bytes)
void sub_48B1C0()
{
}

// FUNCTION: 0x48B480 sub_48B480
int sub_48B480()
{
    char* p = g_73E2A4;
    if (!p)
        return 1;
    return p[1] == 0;
}

// STUB: 0x48B4A0 sub_48B4A0 (255 bytes)
void sub_48B4A0()
{
}

// STUB: 0x48B5A0 sub_48B5A0 (86 bytes)
void sub_48B5A0()
{
}

// FUNCTION: 0x48B600 sub_48B600
void __cdecl sub_48B600(char v)
{
    char* p = g_73E2A4;
    if (p)
        p[4] = v;
}

// FUNCTION: 0x48B620 sub_48B620
int sub_48B620()
{
    char* p = g_73E2A4;
    if (!p)
        return (int)p;
    return (unsigned char)p[7];
}

// STUB: 0x48B630 sub_48B630 (49 bytes)
void sub_48B630()
{
}

// FUNCTION: 0x48B670 sub_48B670
void sub_48B670()
{
    char* p = g_73E2A4;
    if (p) {
        p[1] = 13;
        ((P2_48B*)(p + 0xc))->a = 0;
        ((P2_48B*)(p + 0xc))->b = 0;
        p[4] = 1;
    }
}

// STUB: 0x48B690 sub_48B690 (83 bytes)
void sub_48B690()
{
}

// FUNCTION: 0x48B6F0 sub_48B6F0
void sub_48B6F0()
{
    char* p = g_73E2A4;
    if (p) {
        p[1] = 1;
        ((P2_48B*)(p + 0xc))->a = 0;
        ((P2_48B*)(p + 0xc))->b = 0;
        p[4] = 1;
        *(short*)(p + 0x176c) = 0;
    }
}

// STUB: 0x48B710 sub_48B710 (59 bytes)
void sub_48B710()
{
}

// FUNCTION: 0x48B750 sub_48B750
void __cdecl sub_48B750(char v)
{
    char* p = g_73E2A4;
    if (p)
        p[0] = v;
}

// FUNCTION: 0x48B770 sub_48B770
void sub_48B770()
{
    char* p = g_73E2A4;
    if (p) {
        p[4] = 0;
        p[1] = 5;
        *(short*)(p + 0xc) = 10;
    }
}

// STUB: 0x48B790 sub_48B790 (826 bytes)
void sub_48B790()
{
}

// STUB: 0x48BAD0 sub_48BAD0 (137 bytes)
void sub_48BAD0()
{
}

// STUB: 0x48BB60 sub_48BB60 (225 bytes)
void sub_48BB60()
{
}

// STUB: 0x48BC50 sub_48BC50 (119 bytes)
void sub_48BC50()
{
}

// STUB: 0x48BCD0 sub_48BCD0 (119 bytes)
void sub_48BCD0()
{
}

// STUB: 0x48BD50 sub_48BD50 (82 bytes)
void sub_48BD50()
{
}

// STUB: 0x48BDB0 sub_48BDB0 (119 bytes)
void sub_48BDB0()
{
}

// STUB: 0x48BE30 sub_48BE30 (85 bytes)
void sub_48BE30()
{
}

// STUB: 0x48BE90 sub_48BE90 (284 bytes)
void sub_48BE90()
{
}

// STUB: 0x48BFB0 sub_48BFB0 (270 bytes)
void sub_48BFB0()
{
}

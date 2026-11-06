extern int g_697B40;

extern unsigned short g_6E4694;
extern unsigned char g_73D9E0;
extern int g_73DA10;
extern short g_73DA08;
extern unsigned char g_6979F0[];
extern short g_7016B6;
extern signed char g_6E4890[];
void __cdecl sub_476440(int a, int b, int c);
void __cdecl sub_476A30(int a);
short __cdecl sub_4C5D30(int a, int b, int c);
int __cdecl sub_4C2100();
bool __cdecl sub_474D00(int);
void __cdecl sub_4740F0(int);

// FUNCTION: 0x476380 sub_476380
void* __cdecl sub_476380(unsigned int i)
{
    if (i <= 0x16)
        return (char*)0x628428 + i * 14;
    return 0;
}

// STUB: 0x4763B0 sub_4763B0 (54 bytes)
void sub_4763B0()
{
}

// FUNCTION: 0x4763F0 sub_4763F0
void* __cdecl sub_4763F0(unsigned int i)
{
    if (i <= 0xa)
        return (char*)0x628388 + i * 14;
    return 0;
}

// FUNCTION: 0x476420 sub_476420
void __cdecl sub_476420(int a)
{
    sub_476440(a, 0x3c, 0x1e);
}

// STUB: 0x476440 sub_476440 (246 bytes)
void sub_476440()
{
}

// STUB: 0x476540 sub_476540 (126 bytes)
void sub_476540()
{
}

// STUB: 0x4765C0 sub_4765C0 (85 bytes)
void sub_4765C0()
{
}

// STUB: 0x476660 sub_476660 (156 bytes)
void sub_476660()
{
}

// FUNCTION: 0x476700 isNotSixteen
bool isNotSixteen()
{
    return g_697B40 != 16;
}

// STUB: 0x476710 sub_476710 (113 bytes)
void sub_476710()
{
}

// STUB: 0x476790 sub_476790 (146 bytes)
void sub_476790()
{
}

// STUB: 0x476830 sub_476830 (237 bytes)
void sub_476830()
{
}

// STUB: 0x476920 sub_476920 (161 bytes)
void sub_476920()
{
}

// FUNCTION: 0x4769D0 sub_4769D0
char sub_4769D0()
{
    char r = sub_474D00(g_697B40);
    sub_4740F0(g_697B40);
    return r;
}

// FUNCTION: 0x4769F0 sub_4769F0
void __cdecl sub_4769F0(int a)
{
    sub_476A30(a);
    if (g_6E4694 & 1) {
        int m = 0xFFFE;
        g_6E4694 &= m;
        g_73D9E0 = 1;
    } else {
        g_73D9E0 = 0;
    }
}

// STUB: 0x476A30 sub_476A30 (391 bytes)
void sub_476A30()
{
}

// FUNCTION: 0x476BF0 sub_476BF0
void __cdecl sub_476BF0(int a)
{
    sub_476A30(a);
    g_73D9E0 = 0;
}

// STUB: 0x476C10 sub_476C10 (144 bytes)
void sub_476C10()
{
}

// FUNCTION: 0x476CA0 sub_476CA0
void sub_476CA0()
{
    g_73DA10 = -1;
    g_73DA08 = sub_4C5D30(0x627414, 12, 0);
}

// STUB: 0x476CD0 sub_476CD0 (207 bytes)
void sub_476CD0()
{
}

// STUB: 0x476DA0 sub_476DA0 (83 bytes)
void sub_476DA0()
{
}

// STUB: 0x476E00 sub_476E00 (78 bytes)
void sub_476E00()
{
}

// FUNCTION: 0x476E50 sub_476E50
short* sub_476E50()
{
    return &g_73DA08;
}

// STUB: 0x476E60 sub_476E60 (77 bytes)
void sub_476E60()
{
}

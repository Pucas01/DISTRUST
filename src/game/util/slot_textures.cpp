extern short g_73E558;
extern short g_73E556;
extern unsigned char g_73E5C8;
extern int g_73E5CA;

extern short g_73E550;
extern short g_73E5B4[];
extern short g_73E5BC[];
bool __cdecl touchTexture(int id, int generation);

extern int g_73E5AC;
extern int g_73E5B0;
extern char g_73E566[];

// STUB: 0x4984C0 sub_4984C0 (3492 bytes)
void sub_4984C0()
{
}

// STUB: 0x499270 sub_499270 (60 bytes)
void sub_499270()
{
}

// STUB: 0x4992B0 sub_4992B0 (148 bytes)
void sub_4992B0()
{
}

// STUB: 0x499350 sub_499350 (37 bytes)
void sub_499350()
{
}

// STUB: 0x499380 sub_499380 (36 bytes)
void sub_499380()
{
}

// FUNCTION: 0x4993B0 releaseSlotTextures
void releaseSlotTextures()
{
    g_73E550 = 0;
    short* p = g_73E5B4;
    do {
        if (*p != -1) {
            touchTexture(*p, 0);
            *p = -1;
        }
        p++;
    } while ((int)p < (int)g_73E5BC);
}

// STUB: 0x4993F0 sub_4993F0 (83 bytes)
void sub_4993F0()
{
}

// FUNCTION: 0x499450 sub_499450
void __cdecl sub_499450(int i, short v)
{
    *(short*)(g_73E566 + i * 20) = v;
}

// FUNCTION: 0x499470 sub_499470
void __cdecl sub_499470(int i, int v)
{
    *(short*)(g_73E566 + i * 20) = (short)v;
    *(short*)(g_73E566 + i * 20 + 2) = (short)v;
}

// FUNCTION: 0x499490 sub_499490
void __cdecl sub_499490(int a, int b)
{
    g_73E5AC = a;
    g_73E5B0 = b;
}

// FUNCTION: 0x4994B0 setWord73E558
void __cdecl setWord73E558(short v)
{
    g_73E558 = v;
}

// FUNCTION: 0x4994C0 setWord73E556
void __cdecl setWord73E556(short v)
{
    g_73E556 = v;
}

// STUB: 0x4994D0 sub_4994D0 (828 bytes)
void sub_4994D0()
{
}

// STUB: 0x499810 sub_499810 (294 bytes)
void sub_499810()
{
}

// STUB: 0x499940 sub_499940 (115 bytes)
void sub_499940()
{
}

// STUB: 0x4999C0 sub_4999C0 (1137 bytes)
void sub_4999C0()
{
}

// STUB: 0x499E40 sub_499E40 (107 bytes)
void sub_499E40()
{
}

// STUB: 0x499EB0 sub_499EB0 (79 bytes)
void sub_499EB0()
{
}

// STUB: 0x499F00 sub_499F00 (230 bytes)
void sub_499F00()
{
}

// STUB: 0x49A000 sub_49A000 (198 bytes)
void sub_49A000()
{
}

// STUB: 0x49A0D0 sub_49A0D0 (145 bytes)
void sub_49A0D0()
{
}

// STUB: 0x49A170 sub_49A170 (131 bytes)
void sub_49A170()
{
}

// FUNCTION: 0x49A2E0 sub_49A2E0
int sub_49A2E0()
{
    unsigned char c = g_73E5C8;
    if (c == 2)
        return 1;
    if (c == 4)
        return 1;
    return c == 0;
}

// FUNCTION: 0x49A300 setState73E5C8
int setState73E5C8()
{
    g_73E5C8 = 6;
    g_73E5CA = 0;
    return 0;
}

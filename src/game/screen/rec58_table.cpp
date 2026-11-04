struct Rec58 {
    short w0;
    char pad2[10];
    int a;
    char pad10[4];
    int b;
    int c;
    char pad1c[0x3C];
};
extern Rec58 g_6A8D78[];
extern int g_68DDB0;
void* __cdecl memset(void* dst, int value, unsigned int n);

// STUB: 0x433B60 sub_433B60 (566 bytes)
void sub_433B60()
{
}

// STUB: 0x433DA0 sub_433DA0 (607 bytes)
void sub_433DA0()
{
}

// STUB: 0x434000 sub_434000 (715 bytes)
void sub_434000()
{
}

// STUB: 0x4342D0 sub_4342D0 (607 bytes)
void sub_4342D0()
{
}

// STUB: 0x434530 sub_434530 (393 bytes)
void sub_434530()
{
}

// STUB: 0x4346C0 sub_4346C0 (95 bytes)
void sub_4346C0()
{
}

// STUB: 0x434720 sub_434720 (198 bytes)
void sub_434720()
{
}

// STUB: 0x4347F0 sub_4347F0 (44 bytes)
void sub_4347F0()
{
}

// STUB: 0x434820 sub_434820 (34 bytes)
void sub_434820()
{
}

// STUB: 0x434850 sub_434850 (155 bytes)
void sub_434850()
{
}

// STUB: 0x4348F0 sub_4348F0 (215 bytes)
void sub_4348F0()
{
}

// STUB: 0x4349D0 sub_4349D0 (215 bytes)
void sub_4349D0()
{
}

// STUB: 0x434AB0 sub_434AB0 (215 bytes)
void sub_434AB0()
{
}

// STUB: 0x434B90 sub_434B90 (50 bytes)
void sub_434B90()
{
}

// STUB: 0x434BD0 sub_434BD0 (156 bytes)
void sub_434BD0()
{
}

// STUB: 0x434C70 sub_434C70 (483 bytes)
void sub_434C70()
{
}

// STUB: 0x434E60 sub_434E60 (36 bytes)
void sub_434E60()
{
}

// STUB: 0x434E90 sub_434E90 (25 bytes)
void sub_434E90()
{
}

// STUB: 0x434EB0 sub_434EB0 (174 bytes)
void sub_434EB0()
{
}

// FUNCTION: 0x434F60 resetRec58Table
void resetRec58Table()
{
    memset(g_6A8D78, 0, 0xDC0);
    char* p = (char*)&g_6A8D78[0] + 0xC;
    do {
        *(short*)(p - 0xC) = -1;
        *(int*)(p + 8) = -1;
        *(int*)p = -1;
        *(int*)(p + 0xC) = -1;
        p += 0x58;
    } while ((int)p < (int)((char*)&g_6A8D78[40] + 0xC));
    g_68DDB0 = -1;
}

// STUB: 0x434FB0 sub_434FB0 (142 bytes)
void sub_434FB0()
{
}

// STUB: 0x435040 sub_435040 (43 bytes)
void sub_435040()
{
}

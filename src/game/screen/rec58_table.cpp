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

void __cdecl sub_434C70(int index);

extern float g_6118AC;

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

// FUNCTION: 0x4347F0 sub_4347F0
bool sub_4347F0()
{
    for (int i = 0; i < 40; i++) {
        Rec58* r = (unsigned int)i <= 0x27 ? &g_6A8D78[i] : 0;
        if (r && r->w0 != -1 && r->a != -1)
            return false;
    }
    return true;
}

// FUNCTION: 0x434820 sub_434820
void __cdecl sub_434820(unsigned int i, int v, char c)
{
    if (i <= 0x27) {
        Rec58* r = &g_6A8D78[i];
        *(int*)((char*)r + 0x1c) = v;
        *((char*)r + 5) = c;
    }
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

// FUNCTION: 0x434B90 sub_434B90
float __cdecl sub_434B90(unsigned int i)
{
    if (i <= 0x27) {
        Rec58* r = &g_6A8D78[i];
        if (*((char*)r + 2) && r->a == -1 && *((char*)r + 3))
            return *(float*)((char*)r + 0x54);
    }
    return g_6118AC;
}

// STUB: 0x434BD0 sub_434BD0 (156 bytes)
void sub_434BD0()
{
}

// STUB: 0x434C70 sub_434C70 (483 bytes)
void sub_434C70()
{
}

// FUNCTION: 0x434E60 sub_434E60
void __cdecl sub_434E60(unsigned int i, char c)
{
    if (i <= 0x27) {
        *((char*)&g_6A8D78[i] + 8) = c;
        sub_434C70(i);
    }
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

// FUNCTION: 0x435040 sub_435040
void __cdecl sub_435040(unsigned int i, int v)
{
    if (i <= 0x27) {
        Rec58* r = &g_6A8D78[i];
        if (*((unsigned char*)r + 6) != v) {
            *((char*)r + 6) = (char)v;
            *(int*)((char*)r + 0x4c) = 0;
        }
    }
}

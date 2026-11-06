extern unsigned char g_73DF5C[];

extern unsigned char g_73DCD5;
struct Ent5 {
    int a;
    int b;
    int c;
    int d;
    int e;
};
extern Ent5 g_73DCDC[];

// STUB: 0x484C00 sub_484C00 (147 bytes)
void sub_484C00()
{
}

// STUB: 0x484CA0 sub_484CA0 (168 bytes)
void sub_484CA0()
{
}

// STUB: 0x484D50 sub_484D50 (118 bytes)
void sub_484D50()
{
}

// FUNCTION: 0x484DD0 sub_484DD0
int __cdecl sub_484DD0(int i)
{
    if (i != -1)
        return g_73DF5C[i * 60];
    return -1;
}

// FUNCTION: 0x484E00 sub_484E00
int __cdecl sub_484E00(int i, int* a, int* b)
{
    if (i != -1) {
        *a = *(int*)((char*)0x73df84 + i * 60);
        *b = *(int*)((char*)0x73df88 + i * 60);
        return 0;
    }
    return -1;
}

// FUNCTION: 0x484E40 getEntry73DCDC
void __cdecl getEntry73DCDC(int i, int* a, int* b, int* c, int* d)
{
    if (i >= 0 && i < g_73DCD5) {
        *a = g_73DCDC[i].a;
        *b = g_73DCDC[i].b;
        *c = g_73DCDC[i].c;
        *d = g_73DCDC[i].d;
    }
}

// STUB: 0x484E90 sub_484E90 (117 bytes)
void sub_484E90()
{
}

// STUB: 0x484F10 sub_484F10 (164 bytes)
void sub_484F10()
{
}

// STUB: 0x484FC0 sub_484FC0 (200 bytes)
void sub_484FC0()
{
}

// STUB: 0x485090 sub_485090 (110 bytes)
void sub_485090()
{
}

// STUB: 0x485100 sub_485100 (193 bytes)
void sub_485100()
{
}

// STUB: 0x4851D0 sub_4851D0 (1581 bytes)
void sub_4851D0()
{
}

// STUB: 0x485800 sub_485800 (362 bytes)
void sub_485800()
{
}

// STUB: 0x485970 sub_485970 (2135 bytes)
void sub_485970()
{
}

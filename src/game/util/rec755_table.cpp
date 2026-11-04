struct Rec_g_755AE8 {
    char b[32];
};
extern Rec_g_755AE8 g_755AE8[];

extern int g_755AE0;
extern float g_755AE4;
extern int g_755B6C;
extern int g_755B68;
void* __cdecl memset(void* dst, int value, unsigned int n);

// FUNCTION: 0x4F2760 getRec755AE8
Rec_g_755AE8* __cdecl getRec755AE8(int i)
{
    return &g_755AE8[i];
}

// FUNCTION: 0x4F2770 resetTable755AE8
void resetTable755AE8()
{
    g_755AE0 = -1;
    g_755AE4 = 50.0f;
    memset(g_755AE8, 0, 0x80);
    g_755B6C = 0;
    g_755B68 = 0;
}

// STUB: 0x4F27B0 sub_4F27B0 (24 bytes)
void sub_4F27B0()
{
}

// STUB: 0x4F27D0 sub_4F27D0 (46 bytes)
void sub_4F27D0()
{
}

// STUB: 0x4F2800 sub_4F2800 (53 bytes)
void sub_4F2800()
{
}

// STUB: 0x4F2840 sub_4F2840 (18 bytes)
void sub_4F2840()
{
}

// STUB: 0x4F2860 sub_4F2860 (77 bytes)
void sub_4F2860()
{
}

// STUB: 0x4F28B0 sub_4F28B0 (890 bytes)
void sub_4F28B0()
{
}

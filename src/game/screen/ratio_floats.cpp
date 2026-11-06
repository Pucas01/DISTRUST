struct W24_7007DC {
    int pad0;
    unsigned short a;
    unsigned short b;
    int pad1[3];
};
extern W24_7007DC g_7007D4[][20];
struct W24_7005F8 {
    int pad0;
    unsigned short a;
    unsigned short b;
    int pad1[3];
};
extern W24_7005F8 g_7005F4[];

// STUB: 0x4350B0 sub_4350B0 (85 bytes)
void sub_4350B0()
{
}

// FUNCTION: 0x435110 sub_435110
float __cdecl sub_435110(int i, int j)
{
    W24_7007DC* e = &g_7007D4[i][j];
    unsigned short d = *(unsigned short*)((char*)e + 8);
    if (d == 0)
        return 0.0f;
    return (float)*(unsigned short*)((char*)e + 10) / (float)d;
}

// STUB: 0x435170 sub_435170 (91 bytes)
void sub_435170()
{
}

// FUNCTION: 0x4351D0 sub_4351D0
float __cdecl sub_4351D0(int i)
{
    W24_7005F8* e = &g_7005F4[i];
    unsigned short d = *(unsigned short*)((char*)e + 8);
    if (d == 0)
        return 0.0f;
    return (float)*(unsigned short*)((char*)e + 10) / (float)d;
}

// STUB: 0x435220 sub_435220 (82 bytes)
void sub_435220()
{
}

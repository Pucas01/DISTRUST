struct Rec_g_695F18 {
    char b[16];
};
extern Rec_g_695F18 g_695F18[];

extern float g_sinTable[4096];

// STUB: 0x46EAA0 sub_46EAA0 (280 bytes)
void sub_46EAA0()
{
}

// FUNCTION: 0x46EBC0 sinFromRatio
float __cdecl sinFromRatio(float a, float b, float c)
{
    float v = a / (c - b) * 180.0f * 3.14f * 0.0055555557f * 3.1415927f * 0.0055555557f;
    return g_sinTable[(int)(v * 651.8986469044033) & 0xFFF];
}

// STUB: 0x46EC20 sub_46EC20 (88 bytes)
void sub_46EC20()
{
}

// STUB: 0x46ECB0 sub_46ECB0 (7546 bytes)
void sub_46ECB0()
{
}

// FUNCTION: 0x470C30 remapIndex
int __cdecl remapIndex(int a)
{
    if (a >= 0x38)
        a = a - 0x24;
    return a;
}

// FUNCTION: 0x470C40 getRec695F18
Rec_g_695F18* __cdecl getRec695F18(int i)
{
    return &g_695F18[i];
}

// FUNCTION: 0x46DEA0 unpackColor
void __cdecl unpackColor(int* c0, int* c1, int* c2, int* c3, int packed)
{
    if (c0)
        *c0 = (unsigned char)packed;
    if (c1)
        *c1 = (packed >> 8) & 0xFF;
    if (c2)
        *c2 = (packed >> 16) & 0xFF;
    if (c3)
        *c3 = (packed >> 24) & 0xFF;
}

// FUNCTION: 0x46DEF0 scaleColor
void __cdecl scaleColor(unsigned char* out, int reserved, const unsigned char* in, float scale)
{
    out[0] = (unsigned char)(in[0] * scale);
    out[1] = (unsigned char)(in[1] * scale);
    out[2] = (unsigned char)(in[2] * scale);
}

// FUNCTION: 0x46DDF0 addColors
void __cdecl addColors(int* out, int a, int b)
{
    int a0, a1, a2, a3;
    int b0, b1, b2, b3;
    unpackColor(&a0, &a1, &a2, &a3, a);
    unpackColor(&b0, &b1, &b2, &b3, b);
    int c0 = a0 + b0;
    if (c0 > 0xFF)
        c0 = 0xFF;
    int c1 = a1 + b1;
    if (c1 > 0xFF)
        c1 = 0xFF;
    int c2 = a2 + b2;
    if (c2 > 0xFF)
        c2 = 0xFF;
    int c3 = (a3 + b3) / 2;
    *out = (((c3 << 8 | c2) << 8 | c1) << 8) | c0;
}

void __cdecl sub_4DCB90(float x, float y, float w, float h, float z, int r0, int g0, int b0, int a0, int r1, int g1, int b1, int a1, int r2, int g2, int b2, int a2, int r3, int g3, int b3, int a3, int p0, int p1, int p2, int p3);

// FUNCTION: 0x4DC980 drawRectFlat
void __cdecl drawRectFlat(float x, float y, float w, float h, float z, int r, int g, int b, int p0, int p1, int p2, int p3)
{
    sub_4DCB90(x, y, w, h, z, r, g, b, 255, r, g, b, 255, r, g, b, 255, r, g, b, 255, p0, p1, p2, p3);
}

// FUNCTION: 0x494C40 drawFadeBlack
void drawFadeBlack()
{
    sub_4DCB90(0.0f, 0.0f, 960.0f, 544.0f, 0.0f, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0x5207, 2, 1, 255);
}

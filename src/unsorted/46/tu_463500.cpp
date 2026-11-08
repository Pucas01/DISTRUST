void __cdecl sub_4DB1F0(int v);
void __cdecl sub_4DB740(float v);

// FUNCTION: 0x463500 sub_463500
void __cdecl sub_463500(int v)
{
    if (v < 0)
        v = 0;
    else if (v > 100)
        v = 100;
    sub_4DB1F0(v);
}

// FUNCTION: 0x463530 sub_463530
void __cdecl sub_463530(int v)
{
    float f = 0.0f;
    if (v < 4096)
        f = -750.0f;
    else if (v > 4096)
        f = 750.0f;
    sub_4DB740(f);
}

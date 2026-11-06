extern int g_73E3CC;
extern int g_73E3D0;
void __cdecl sub_46D230(int a, int b);

// STUB: 0x48E0F0 sub_48E0F0 (384 bytes)
void sub_48E0F0()
{
}

// FUNCTION: 0x48E270 sub_48E270
void __cdecl sub_48E270(int a)
{
    int cur = g_73E3CC;
    int v = cur + a;
    if (v >= 0) {
        if (v > g_73E3D0)
            v = g_73E3D0;
        g_73E3CC = v;
    } else {
        g_73E3CC = 0;
    }
    if (a < 0)
        sub_46D230(8, 1);
}

// STUB: 0x48E2C0 sub_48E2C0 (157 bytes)
void sub_48E2C0()
{
}

// STUB: 0x48E360 sub_48E360 (125 bytes)
void sub_48E360()
{
}

// STUB: 0x48E3E0 sub_48E3E0 (90 bytes)
void sub_48E3E0()
{
}

// STUB: 0x48E440 sub_48E440 (474 bytes)
void sub_48E440()
{
}

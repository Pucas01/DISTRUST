extern unsigned char g_73DC25;
extern unsigned char g_73DC24;
extern unsigned char g_73DC32;
extern unsigned char g_73DC2B;
extern int g_73D9D0;
extern unsigned char g_73DC2A;

// FUNCTION: 0x47ED50 sub_47ED50
void __cdecl sub_47ED50(unsigned char v)
{
    g_73DC25 = v;
    g_73DC24 = v;
}

// STUB: 0x47ED70 sub_47ED70 (124 bytes)
void sub_47ED70()
{
}

// STUB: 0x47EDF0 sub_47EDF0 (345 bytes)
void sub_47EDF0()
{
}

// STUB: 0x47F0D0 sub_47F0D0 (182 bytes)
void sub_47F0D0()
{
}

// FUNCTION: 0x47F190 sub_47F190
void __cdecl sub_47F190(unsigned char v)
{
    g_73DC32 = v;
    g_73DC2B = v;
}

// STUB: 0x47F1B0 sub_47F1B0 (313 bytes)
void sub_47F1B0()
{
}

// STUB: 0x47F2F0 sub_47F2F0 (220 bytes)
void sub_47F2F0()
{
}

// FUNCTION: 0x47F3D0 sub_47F3D0
int sub_47F3D0()
{
    if (g_73D9D0 == 0) {
        g_73D9D0 = 10;
        g_73DC2A = 2;
        return 1;
    }
    g_73D9D0--;
    return 1;
}

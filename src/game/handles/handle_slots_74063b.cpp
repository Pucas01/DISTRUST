extern unsigned char g_74063B[];
extern unsigned char g_74063C[];
extern int g_740648[];

// STUB: 0x4D06D0 sub_4D06D0 (756 bytes)
void sub_4D06D0()
{
}

// STUB: 0x4D09D0 sub_4D09D0 (60 bytes)
void sub_4D09D0()
{
}

// STUB: 0x4D0A10 sub_4D0A10 (2455 bytes)
void sub_4D0A10()
{
}

// FUNCTION: 0x4D13B0 sub_4D13B0
void __cdecl sub_4D13B0(unsigned int i, unsigned char v)
{
    if (i <= 0xff)
        g_74063B[i * 60] = v;
}

// FUNCTION: 0x4D13D0 sub_4D13D0
void __cdecl sub_4D13D0(unsigned int i, unsigned char v)
{
    if (i <= 0xff)
        g_74063C[i * 60] = v;
}

// FUNCTION: 0x4D13F0 sub_4D13F0
void __cdecl sub_4D13F0(unsigned int i, int v)
{
    if (i <= 0xff)
        *(int*)((char*)g_740648 + i * 60) = v;
}

// STUB: 0x4D1410 sub_4D1410 (235 bytes)
void sub_4D1410()
{
}

// STUB: 0x4D1500 sub_4D1500 (129 bytes)
void sub_4D1500()
{
}

// STUB: 0x4D1590 sub_4D1590 (491 bytes)
void sub_4D1590()
{
}

// STUB: 0x4D1780 sub_4D1780 (279 bytes)
void sub_4D1780()
{
}

// STUB: 0x4D18A0 sub_4D18A0 (79 bytes)
void sub_4D18A0()
{
}

// STUB: 0x4D18F0 sub_4D18F0 (110 bytes)
void sub_4D18F0()
{
}

// STUB: 0x4D1960 sub_4D1960 (397 bytes)
void sub_4D1960()
{
}

int __cdecl sub_4C93E0(int a, int b, int bits);

// FUNCTION: 0x4C93A0 readSignedBits
int __cdecl readSignedBits(int a, int b, int bits)
{
    if (!bits)
        return 0;
    int v = sub_4C93E0(a, b, bits);
    int m = 1 << (bits - 1);
    if (v & m)
        v |= -1 << bits;
    return v;
}

// STUB: 0x4C93E0 sub_4C93E0 (96 bytes)
void sub_4C93E0()
{
}

// STUB: 0x4C9440 sub_4C9440 (84 bytes)
void sub_4C9440()
{
}

// STUB: 0x4C94A0 sub_4C94A0 (3301 bytes)
void sub_4C94A0()
{
}

// STUB: 0x4CA190 sub_4CA190 (90 bytes)
void sub_4CA190()
{
}

// STUB: 0x4CA1F0 sub_4CA1F0 (800 bytes)
void sub_4CA1F0()
{
}

// STUB: 0x4CA510 sub_4CA510 (92 bytes)
void sub_4CA510()
{
}

// STUB: 0x4CA570 sub_4CA570 (94 bytes)
void sub_4CA570()
{
}

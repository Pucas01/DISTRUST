extern unsigned char g_623650[];

// FUNCTION: 0x4232B0 sub_4232B0
int __cdecl sub_4232B0(int v)
{
    for (int i = 0; i <= 16; i++) {
        if (g_623650[i] == v)
            return i;
    }
    return -1;
}

// STUB: 0x4232E0 sub_4232E0 (615 bytes)
void sub_4232E0()
{
}

// STUB: 0x423550 sub_423550 (1260 bytes)
void sub_423550()
{
}

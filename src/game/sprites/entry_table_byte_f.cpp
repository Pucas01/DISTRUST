extern char* g_entryTable;

// FUNCTION: 0x4C8C70 sub_4C8C70
void __cdecl sub_4C8C70(unsigned int i, char v)
{
    if (i <= 0x6d)
        g_entryTable[(i << 8) + 0xf] = v;
}

// FUNCTION: 0x4C8C90 sub_4C8C90
void __cdecl sub_4C8C90(unsigned int i, char v)
{
    if (i <= 0x6d)
        g_entryTable[(i << 8) + 0xb] = v;
}

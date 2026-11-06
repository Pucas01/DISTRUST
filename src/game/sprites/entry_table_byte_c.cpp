extern char* g_entryTable;

// FUNCTION: 0x4C8C10 sub_4C8C10
void __cdecl sub_4C8C10(unsigned int i, char v)
{
    if (i <= 0x6d)
        g_entryTable[(i << 8) + 0xc] = v;
}

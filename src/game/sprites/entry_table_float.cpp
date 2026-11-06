extern char* g_entryTable;

// FUNCTION: 0x4C8D00 sub_4C8D00
void __cdecl sub_4C8D00(unsigned int i, float v)
{
    if (i <= 0x6d)
        *(float*)(g_entryTable + (i << 8) + 0x80) = v;
}

// STUB: 0x4C8D30 sub_4C8D30 (82 bytes)
void sub_4C8D30()
{
}

// STUB: 0x4C8D90 sub_4C8D90 (82 bytes)
void sub_4C8D90()
{
}

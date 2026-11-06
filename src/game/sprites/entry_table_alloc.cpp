extern char* g_entryTable;
void* __cdecl allocUnmanaged(unsigned int n);
void* __cdecl memset(void* dst, int value, unsigned int n);

// FUNCTION: 0x4C8620 sub_4C8620
void sub_4C8620()
{
    g_entryTable = (char*)allocUnmanaged(0x6e00);
    memset(g_entryTable, 0, 0x6e00);
}

// STUB: 0x4C8640 sub_4C8640 (333 bytes)
void sub_4C8640()
{
}

// STUB: 0x4C8790 sub_4C8790 (223 bytes)
void sub_4C8790()
{
}

// STUB: 0x4C8870 sub_4C8870 (100 bytes)
void sub_4C8870()
{
}

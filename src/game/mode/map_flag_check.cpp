extern unsigned char g_73D110;
extern unsigned int g_6E4758;

// STUB: 0x483CC0 sub_483CC0 (105 bytes)
void sub_483CC0()
{
}

// STUB: 0x483D30 sub_483D30 (236 bytes)
void sub_483D30()
{
}

// STUB: 0x483E20 sub_483E20 (32 bytes)
void sub_483E20()
{
}

// FUNCTION: 0x483E40 sub_483E40
bool sub_483E40()
{
    if (g_73D110 == 0xff)
        return false;
    if (!((g_6E4758 >> 6) & 1))
        return false;
    return true;
}

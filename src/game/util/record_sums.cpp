extern unsigned int g_6E4900[];
extern unsigned char g_7005F0;
bool __cdecl testBit(const unsigned int* flags, int bit);
short* __cdecl getRecord626E28(unsigned int index);

// STUB: 0x41AF90 sub_41AF90 (291 bytes)
void sub_41AF90()
{
}

// STUB: 0x41B0C0 sub_41B0C0 (68 bytes)
void sub_41B0C0()
{
}

// STUB: 0x41B110 sub_41B110 (43 bytes)
void sub_41B110()
{
}

// STUB: 0x41B140 sub_41B140 (78 bytes)
void sub_41B140()
{
}

// STUB: 0x41B190 sub_41B190 (113 bytes)
void sub_41B190()
{
}

// STUB: 0x41B210 sub_41B210 (20 bytes)
void sub_41B210()
{
}

// STUB: 0x41B260 sub_41B260 (540 bytes)
void sub_41B260()
{
}

// STUB: 0x41B510 sub_41B510 (4017 bytes)
void sub_41B510()
{
}

// STUB: 0x41C4F0 sub_41C4F0 (1785 bytes)
void sub_41C4F0()
{
}

// STUB: 0x41CBF0 sub_41CBF0 (81 bytes)
void sub_41CBF0()
{
}

// STUB: 0x41CC50 sub_41CC50 (139 bytes)
void sub_41CC50()
{
}

// STUB: 0x41CCE0 sub_41CCE0 (323 bytes)
void sub_41CCE0()
{
}

// STUB: 0x41CE30 sub_41CE30 (94 bytes)
void sub_41CE30()
{
}

// STUB: 0x41CF30 sub_41CF30 (82 bytes)
void sub_41CF30()
{
}

// STUB: 0x41D110 sub_41D110 (311 bytes)
void sub_41D110()
{
}

// FUNCTION: 0x41D2C0 sumRecordBytes
void sumRecordBytes()
{
    unsigned char sum = 0;
    for (int i = 0; i < 0x2D; i++) {
        if (testBit(g_6E4900, i))
            sum += *((unsigned char*)getRecord626E28(i) + 3);
    }
    g_7005F0 = sum;
}

// STUB: 0x41D300 sub_41D300 (100 bytes)
void sub_41D300()
{
}

// STUB: 0x41D370 sub_41D370 (37 bytes)
void sub_41D370()
{
}

// STUB: 0x41D3A0 sub_41D3A0 (70 bytes)
void sub_41D3A0()
{
}

// STUB: 0x41D3F0 sub_41D3F0 (43 bytes)
void sub_41D3F0()
{
}

// STUB: 0x41D8F0 sub_41D8F0 (187 bytes)
void sub_41D8F0()
{
}

// STUB: 0x41D9B0 sub_41D9B0 (200 bytes)
void sub_41D9B0()
{
}

// STUB: 0x41DAE0 sub_41DAE0 (2982 bytes)
void sub_41DAE0()
{
}

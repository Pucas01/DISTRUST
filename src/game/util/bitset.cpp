// FUNCTION: 0x46DD80 testBit
bool __cdecl testBit(const unsigned int* bits, int index)
{
    int word = index / 32;
    int mask = 1 << (index - word * 32);
    return (bits[word] & mask) != 0;
}

// FUNCTION: 0x46DDB0 setBit
void __cdecl setBit(unsigned int* bits, int index, char value)
{
    int word = index / 32;
    int mask = 1 << (index - word * 32);
    if (value)
        bits[word] |= mask;
    else
        bits[word] &= ~mask;
}

extern unsigned int g_6A9C88;
void __cdecl sub_46D370(int a);

// FUNCTION: 0x46D910 markBit
void __cdecl markBit(int a, int bit)
{
    if (a == 0)
        g_6A9C88 |= 1 << (bit & 0x1F);
    sub_46D370(a);
}

struct Bits8 {
    char pad[8];
    unsigned char flags;
};

struct BitsOwner {
    int pad0[2];
    Bits8* b;
    int bit0();
    int notBit0();
    int bit1();
};

// STUB: 0x51B940 sub_51B940 (41 bytes)
void sub_51B940()
{
}

// STUB: 0x51B970 sub_51B970 (88 bytes)
void sub_51B970()
{
}

// STUB: 0x51B9D0 sub_51B9D0 (194 bytes)
void sub_51B9D0()
{
}

// FUNCTION: 0x51BAA0 BitsOwner::notBit0
int BitsOwner::notBit0()
{
    return ~b->flags & 1;
}

// FUNCTION: 0x51BAB0 BitsOwner::bit1
int BitsOwner::bit1()
{
    return (b->flags >> 1) & 1;
}

// FUNCTION: 0x51BAC0 BitsOwner::bit0
int BitsOwner::bit0()
{
    return b->flags & 1;
}

// STUB: 0x51BAD0 sub_51BAD0 (7 bytes)
void sub_51BAD0()
{
}

// STUB: 0x51BAE0 sub_51BAE0 (229 bytes)
void sub_51BAE0()
{
}

// STUB: 0x51BBD0 sub_51BBD0 (239 bytes)
void sub_51BBD0()
{
}

// STUB: 0x51BCC0 sub_51BCC0 (169 bytes)
void sub_51BCC0()
{
}

// STUB: 0x51BD70 sub_51BD70 (41 bytes)
void sub_51BD70()
{
}

// STUB: 0x51BDA0 sub_51BDA0 (229 bytes)
void sub_51BDA0()
{
}

// STUB: 0x51BE90 sub_51BE90 (237 bytes)
void sub_51BE90()
{
}

// STUB: 0x51BF80 sub_51BF80 (214 bytes)
void sub_51BF80()
{
}

// STUB: 0x51C060 sub_51C060 (214 bytes)
void sub_51C060()
{
}

// STUB: 0x51C140 sub_51C140 (229 bytes)
void sub_51C140()
{
}

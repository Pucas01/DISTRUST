

struct MaskObj {
    char pad[0x48];
    unsigned int f48;
    unsigned int f4c;
    unsigned int f50;
    unsigned int f54;
};

// STUB: 0x4EE5D0 sub_4EE5D0 (62 bytes)
void sub_4EE5D0()
{
}

// STUB: 0x4EE610 sub_4EE610 (1049 bytes)
void sub_4EE610()
{
}

// STUB: 0x4EEA70 sub_4EEA70 (91 bytes)
void sub_4EEA70()
{
}

// STUB: 0x4EEAD0 sub_4EEAD0 (36 bytes)
void sub_4EEAD0()
{
}

// STUB: 0x4EEB00 sub_4EEB00 (79 bytes)
void sub_4EEB00()
{
}

// FUNCTION: 0x4EEB50 setMasked_f48
void __cdecl setMasked_f48(MaskObj* o, unsigned int mask, unsigned int value)
{
    if (o)
        o->f48 = (o->f48 & ~mask) | (mask & value);
}

// FUNCTION: 0x4EEB70 setMasked_f4c
void __cdecl setMasked_f4c(MaskObj* o, unsigned int mask, unsigned int value)
{
    if (o)
        o->f4c = (o->f4c & ~mask) | (mask & value);
}

// STUB: 0x4EEB90 sub_4EEB90 (28 bytes)
void sub_4EEB90()
{
}

// FUNCTION: 0x4EEBB0 setMasked_f54
void __cdecl setMasked_f54(MaskObj* o, unsigned int mask, unsigned int value)
{
    if (o)
        o->f54 = (o->f54 & ~mask) | (mask & value);
}

// FUNCTION: 0x4EEBD0 setMasked_f50
void __cdecl setMasked_f50(MaskObj* o, unsigned int mask, unsigned int value)
{
    if (o)
        o->f50 = (o->f50 & ~mask) | (mask & value);
}

// STUB: 0x4EEBF0 sub_4EEBF0 (39 bytes)
void sub_4EEBF0()
{
}

// STUB: 0x4EEC20 sub_4EEC20 (381 bytes)
void sub_4EEC20()
{
}

// STUB: 0x4EEDA0 sub_4EEDA0 (21 bytes)
void sub_4EEDA0()
{
}

// STUB: 0x4EEDC0 sub_4EEDC0 (79 bytes)
void sub_4EEDC0()
{
}

// STUB: 0x4EEE10 sub_4EEE10 (503 bytes)
void sub_4EEE10()
{
}

// STUB: 0x4EF010 sub_4EF010 (181 bytes)
void sub_4EF010()
{
}

// STUB: 0x4EF0D0 sub_4EF0D0 (40 bytes)
void sub_4EF0D0()
{
}

// STUB: 0x4EF100 sub_4EF100 (324 bytes)
void sub_4EF100()
{
}

// FUNCTION: 0x4EF250 getField2CAddr
char* __cdecl getField2CAddr(char* o)
{
    if (!o)
        return o;
    return o + 0x2C;
}

// STUB: 0x4EF270 sub_4EF270 (282 bytes)
void sub_4EF270()
{
}

// STUB: 0x4EF450 sub_4EF450 (22 bytes)
void sub_4EF450()
{
}

// STUB: 0x4EF470 sub_4EF470 (32 bytes)
void sub_4EF470()
{
}

// STUB: 0x4EF490 sub_4EF490 (18 bytes)
void sub_4EF490()
{
}

// STUB: 0x4EF4B0 sub_4EF4B0 (33 bytes)
void sub_4EF4B0()
{
}

// STUB: 0x4EF4E0 sub_4EF4E0 (94 bytes)
void sub_4EF4E0()
{
}

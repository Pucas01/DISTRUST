struct Rec_g_695F18 {
    char b[16];
};
extern Rec_g_695F18 g_695F18[];

// STUB: 0x46EAA0 sub_46EAA0 (280 bytes)
void sub_46EAA0()
{
}

// STUB: 0x46EBC0 sub_46EBC0 (91 bytes)
void sub_46EBC0()
{
}

// STUB: 0x46EC20 sub_46EC20 (88 bytes)
void sub_46EC20()
{
}

// STUB: 0x46ECB0 sub_46ECB0 (7546 bytes)
void sub_46ECB0()
{
}

// FUNCTION: 0x470C30 remapIndex
int __cdecl remapIndex(int a)
{
    if (a >= 0x38)
        a = a - 0x24;
    return a;
}

// FUNCTION: 0x470C40 getRec695F18
Rec_g_695F18* __cdecl getRec695F18(int i)
{
    return &g_695F18[i];
}

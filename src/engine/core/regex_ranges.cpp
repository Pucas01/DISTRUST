struct TempTag {
    char c;
    TempTag() {}
};

struct RangeSet {
    int pad0;
    int count;
    signed char* data;
};

void __cdecl sub_5A4730(int a, int b, int c, int d, int e);
void __cdecl sub_5A48B0(int a, int b, int c, char* tmp, int d);
void __cdecl sub_5A48B0(int a, int b, int c, char* tmp, int d, int e);

// STUB: 0x5A38A0 ??$_Insert@PAE@?$vector@EV?$allocator@E@std@@@std@@QAEXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PAE1Uforward_iterator_tag@1@@Z (363 bytes)
void Insert_PAE_vector_EV_allocator_E_std_std_QAEXV__Vector_const_iterator_V__Vector_val_U__Simple_types_E_std_std_1_PAE1Uforward_iterator_tag_1_Z()
{
}

// STUB: 0x5A3A10 sub_5A3A10 (85 bytes)
void sub_5A3A10()
{
}

// STUB: 0x5A3A70 sub_5A3A70 (375 bytes)
void sub_5A3A70()
{
}

// STUB: 0x5A3BF0 sub_5A3BF0 (135 bytes)
void sub_5A3BF0()
{
}

// STUB: 0x5A3C80 sub_5A3C80 (843 bytes)
void sub_5A3C80()
{
}

// FUNCTION: 0x5A3FD0 inRanges
bool __cdecl inRanges(signed char ch, RangeSet* rs)
{
    for (int i = 0; i < rs->count; i += 2) {
        if (rs->data[i] <= ch && ch <= rs->data[i + 1])
            return true;
    }
    return false;
}

// STUB: 0x5A4010 sub_5A4010 (365 bytes)
void sub_5A4010()
{
}

// STUB: 0x5A4180 sub_5A4180 (53 bytes)
void sub_5A4180()
{
}

// STUB: 0x5A41C0 sub_5A41C0 (414 bytes)
void sub_5A41C0()
{
}

// STUB: 0x5A4360 sub_5A4360 (201 bytes)
void sub_5A4360()
{
}

// STUB: 0x5A4430 sub_5A4430 (208 bytes)
void sub_5A4430()
{
}

// FUNCTION: 0x5A4500 callWithTemp
void __stdcall callWithTemp(int a, int b, int c)
{
    char tmp;
    sub_5A48B0(a, b, c, &tmp, c);
}

// STUB: 0x5A4530 sub_5A4530 (34 bytes)
void sub_5A4530()
{
}

// STUB: 0x5A4560 sub_5A4560 (34 bytes)
void sub_5A4560()
{
}

// STUB: 0x5A4590 sub_5A4590 (34 bytes)
void sub_5A4590()
{
}

// FUNCTION: 0x5A45C0 callWithTempZero
void __stdcall callWithTempZero(int a, int b, int c)
{
    char tmp;
    sub_5A48B0(a, b, c, &tmp, 0, c);
}

// STUB: 0x5A4620 sub_5A4620 (128 bytes)
void sub_5A4620()
{
}

// STUB: 0x5A46A0 sub_5A46A0 (131 bytes)
void sub_5A46A0()
{
}

// STUB: 0x5A4730 sub_5A4730 (122 bytes)
void sub_5A4730()
{
}

// STUB: 0x5A47B0 sub_5A47B0 (115 bytes)
void sub_5A47B0()
{
}

// STUB: 0x5A4830 sub_5A4830 (122 bytes)
void sub_5A4830()
{
}

// FUNCTION: 0x5A49D0 callUninit
void __cdecl callUninit(int a, int b, int c)
{
    int unused;
    sub_5A4730(a, b, c, 0, unused);
}

// STUB: 0x5A49F0 sub_5A49F0 (30 bytes)
void sub_5A49F0()
{
}

// STUB: 0x5A4A10 sub_5A4A10 (30 bytes)
void sub_5A4A10()
{
}

// STUB: 0x5A4A30 sub_5A4A30 (83 bytes)
void sub_5A4A30()
{
}

// FUNCTION: 0x5A4A90 copyPair
void __stdcall copyPair(int* dst, const int* src)
{
    if (dst) {
        dst[0] = src[0];
        dst[1] = src[1];
    }
}

// STUB: 0x5A4AB0 sub_5A4AB0 (93 bytes)
void sub_5A4AB0()
{
}

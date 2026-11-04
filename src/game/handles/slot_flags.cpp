extern char* g_6A84A4;
void __cdecl setEntryFlag(unsigned int index, int value);
void __cdecl setEntryKind(unsigned int index, int value);

// FUNCTION: 0x423A70 setSlotFlags6A84
void __cdecl setSlotFlags6A84(int v)
{
    for (int off = 0x1C2; off < 0x1E2; off += 2) {
        short h = *(short*)(off + g_6A84A4);
        if (h != -1) {
            setEntryFlag(h, v);
            setEntryKind(*(short*)(off + g_6A84A4), v ^ 1);
        }
    }
}

// STUB: 0x423AC0 sub_423AC0 (264 bytes)
void sub_423AC0()
{
}

// STUB: 0x423BD0 sub_423BD0 (361 bytes)
void sub_423BD0()
{
}

// STUB: 0x423D40 sub_423D40 (859 bytes)
void sub_423D40()
{
}

// STUB: 0x4240A0 sub_4240A0 (15087 bytes)
void sub_4240A0()
{
}

// STUB: 0x427D00 sub_427D00 (642 bytes)
void sub_427D00()
{
}

// STUB: 0x427FB0 sub_427FB0 (138 bytes)
void sub_427FB0()
{
}

// STUB: 0x428040 sub_428040 (2846 bytes)
void sub_428040()
{
}

// STUB: 0x428BA0 sub_428BA0 (2195 bytes)
void sub_428BA0()
{
}

// STUB: 0x429440 sub_429440 (6637 bytes)
void sub_429440()
{
}

// STUB: 0x42AE30 sub_42AE30 (2883 bytes)
void sub_42AE30()
{
}

// STUB: 0x42B980 sub_42B980 (1967 bytes)
void sub_42B980()
{
}

// STUB: 0x42C130 sub_42C130 (517 bytes)
void sub_42C130()
{
}

// STUB: 0x42C340 sub_42C340 (78 bytes)
void sub_42C340()
{
}

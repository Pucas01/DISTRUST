extern short g_73E142;
extern unsigned char g_73E140;
void __cdecl setEntryFlag(unsigned int index, int value);
void __cdecl setEntryKind(unsigned int index, int value);

// STUB: 0x486A50 sub_486A50 (59 bytes)
void sub_486A50()
{
}

// STUB: 0x486A90 sub_486A90 (81 bytes)
void sub_486A90()
{
}

// FUNCTION: 0x486AF0 sub_486AF0
void __cdecl sub_486AF0(int a)
{
    short s = g_73E142;
    if (s != -1) {
        if (g_73E140 != a) {
            g_73E140 = (unsigned char)a;
            if ((unsigned char)a == 0) {
                setEntryFlag(s, 1);
                setEntryKind(g_73E142, 0);
            } else {
                setEntryFlag(s, 0);
                setEntryKind(g_73E142, 1);
            }
        }
    }
}

// STUB: 0x486B60 sub_486B60 (30 bytes)
void sub_486B60()
{
}

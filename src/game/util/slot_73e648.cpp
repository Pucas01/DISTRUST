extern short g_73E64A;
extern short g_73E64C;

extern unsigned char g_73E648;
void __cdecl resetSlotEntry(int i);

// STUB: 0x49B530 sub_49B530 (107 bytes)
void sub_49B530()
{
}

// FUNCTION: 0x49B5A0 sub_49B5A0
void sub_49B5A0()
{
    if (g_73E648) {
        resetSlotEntry(0);
        g_73E648 = 0;
    }
}

// STUB: 0x49B5C0 sub_49B5C0 (27 bytes)
void sub_49B5C0()
{
}

// FUNCTION: 0x49B5E0 sub_49B5E0
int sub_49B5E0()
{
    if (g_73E64A == 2 && g_73E64C <= 8)
        return 1;
    return 0;
}

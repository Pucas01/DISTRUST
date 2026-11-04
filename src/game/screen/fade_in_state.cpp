extern short g_6A8D54;

extern unsigned char g_6A8D41;
extern unsigned char g_6A8D43;
extern short g_6A8D52;
void __cdecl resetEntry(unsigned int index, const char* name);
void __cdecl setEntryFlag(unsigned int index, int value);

// STUB: 0x432E90 sub_432E90 (71 bytes)
void sub_432E90()
{
}

// FUNCTION: 0x432EE0 isWord6A8D54Max
bool isWord6A8D54Max()
{
    return g_6A8D54 == -1;
}

// STUB: 0x432EF0 sub_432EF0 (323 bytes)
void sub_432EF0()
{
}

// STUB: 0x433040 sub_433040 (118 bytes)
void sub_433040()
{
}

// STUB: 0x4330C0 sub_4330C0 (744 bytes)
void sub_4330C0()
{
}

// FUNCTION: 0x4333B0 startFadeIn6A8D
void startFadeIn6A8D()
{
    if (g_6A8D41 && !g_6A8D43) {
        g_6A8D43 = 1;
        resetEntry(g_6A8D52, "fl_in");
        setEntryFlag(g_6A8D52, 1);
    }
}

// STUB: 0x4333F0 sub_4333F0 (174 bytes)
void sub_4333F0()
{
}

// STUB: 0x4334A0 sub_4334A0 (535 bytes)
void sub_4334A0()
{
}

// STUB: 0x4336C0 sub_4336C0 (1077 bytes)
void sub_4336C0()
{
}

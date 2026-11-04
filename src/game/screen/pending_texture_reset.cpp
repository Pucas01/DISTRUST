extern int g_6A4CD0;
extern short g_6A4CC8;
extern unsigned char g_6A4CCA;
void releasePendingTexture();
bool __cdecl touchTexture(int id, int generation);

// STUB: 0x417C80 sub_417C80 (153 bytes)
void sub_417C80()
{
}

// STUB: 0x417D20 sub_417D20 (1226 bytes)
void sub_417D20()
{
}

// FUNCTION: 0x4181F0 resetPending6A4C
void resetPending6A4C()
{
    if (g_6A4CD0) {
        releasePendingTexture();
        g_6A4CD0 = 0;
    }
    if (g_6A4CC8 != -1) {
        touchTexture(g_6A4CC8, 0);
        g_6A4CC8 = -1;
        g_6A4CCA = 0;
    }
}

// STUB: 0x418240 sub_418240 (32 bytes)
void sub_418240()
{
}

// STUB: 0x418260 sub_418260 (329 bytes)
void sub_418260()
{
}

// STUB: 0x4183B0 sub_4183B0 (542 bytes)
void sub_4183B0()
{
}

// STUB: 0x4185D0 sub_4185D0 (66 bytes)
void sub_4185D0()
{
}

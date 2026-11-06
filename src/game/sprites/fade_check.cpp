extern unsigned char g_fadeActive;
extern unsigned char g_fadeMode;

// FUNCTION: 0x4C5330 sub_4C5330
int sub_4C5330()
{
    if (g_fadeActive == 1)
        return 0;
    return g_fadeMode != 0;
}

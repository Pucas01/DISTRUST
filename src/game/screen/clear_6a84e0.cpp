void* __cdecl memset(void* dst, int value, unsigned int n);
extern unsigned char g_6A84E1;
extern char g_6A84E0[];

// FUNCTION: 0x4305E0 sub_4305E0
int sub_4305E0()
{
    if (g_6A84E1 == 1) {
        g_6A84E1 = 0;
        return 1;
    }
    return 0;
}

// FUNCTION: 0x430600 sub_430600
void sub_430600()
{
    memset(g_6A84E0, 0, 0x6bc);
}

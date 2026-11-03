extern int g_table[];

// FUNCTION: 0x4AFDD0 sub_4AFDD0
int __cdecl sub_4AFDD0(int a, int b)
{
    return g_table[a * 27 + b];
}

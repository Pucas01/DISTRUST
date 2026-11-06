extern char* g_744238;

extern int g_74423C;

// FUNCTION: 0x4D1AF0 setObjectList
void __cdecl setObjectList(char* p)
{
    g_744238 = p;
    int n = 0;
    g_74423C = 0;
    char* q = p + 1;
    while (*q != 5) {
        n++;
        q += 16;
        g_74423C = n;
    }
}

// FUNCTION: 0x4D1B30 sub_4D1B30
int __cdecl sub_4D1B30(int i)
{
    return (unsigned char)g_744238[i * 16 + 3];
}

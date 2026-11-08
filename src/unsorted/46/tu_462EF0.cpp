// FUNCTION: 0x462EF0 sub_462EF0
extern int g_695DA0;
extern unsigned char g_695DA4;
extern unsigned char g_701608[];
void __cdecl sub_4DA450(int a);
int __cdecl sub_461AF0(int a);
char __cdecl sub_462EF0(int a, unsigned int b, int c)
{
    sub_4DA450(b);
    g_695DA0 = b;
    g_695DA4 = c == -1;
    if (b <= 0x24) {
        int i = sub_461AF0(b);
        if (i != -1 && g_701608[i] < 1)
            g_701608[i] = 1;
    }
    return 1;
}

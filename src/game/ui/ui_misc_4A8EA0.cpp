extern signed char g_73EAFC;
extern char g_62E850[];
int __cdecl sub_4AFDD0(int a, int b);
int __cdecl sub_4C85E0(int h, int v);
void __cdecl sub_4C91C0(int h, const char* s, int v);

// FUNCTION: 0x4A8EA0 showLabel4A8EA0
void showLabel4A8EA0()
{
    int h = sub_4AFDD0(2, 5);
    sub_4C91C0(h, g_62E850, sub_4C85E0(h, g_73EAFC + 4));
}

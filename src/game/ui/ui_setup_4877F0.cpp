extern short g_73E170;
int __cdecl sub_4977D0(int a);
int __cdecl sub_497940(int a);
int __cdecl sub_4C6640(int a, int b);
int __cdecl sub_4C6710(int a, int b, int c);
int __cdecl sub_4DC4A0(int a, int b, int c, int d, int e, int f);
void __cdecl sub_4992B0(int a);
void __cdecl sub_4994C0(int a);
void __cdecl sub_4994B0(int a);

// FUNCTION: 0x4877F0 setupUiTexture
void setupUiTexture()
{
    int a = sub_4977D0(6);
    int b = sub_497940(6);
    int h = sub_4C6640(a, 0);
    int c = sub_4C6710(a, 0, b);
    g_73E170 = sub_4DC4A0(h, c, 0, 0, 1, 0);
    sub_4992B0(7);
    sub_4994C0(1);
    sub_4994B0(0x23A0);
}

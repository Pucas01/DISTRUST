extern int g_73ED50;
extern unsigned short g_73EC74;
extern int g_73EADC;
extern unsigned char g_73EC65;
int __cdecl sub_4D6EE0(int k);
int __cdecl sub_4D6E20(int k);
void __cdecl sub_4C5350(int a, int b, int c);
void __cdecl sub_463190(int a, int b);
void __cdecl sub_462F40(int a, int b);
void sub_4A9E70();

// FUNCTION: 0x4AB200 updateScroll4AB200
void updateScroll4AB200()
{
    if (sub_4D6EE0(0x16)) {
        g_73ED50 = 9;
        sub_4C5350(1, 1, 0x1E);
        sub_463190(1, 0x64);
        sub_462F40(0, 0x1E);
        return;
    }
    if (g_73EC74 <= 0xC) {
        return;
    }
    int cur = g_73EADC;
    int max = g_73EC74 - 0xC;
    if (sub_4D6EE0(0x12) && cur == 0) {
        cur = max;
    } else if (sub_4D6E20(0x12) && cur > 0) {
        cur--;
    } else if (sub_4D6EE0(0x13) && cur == max) {
        cur = 0;
    } else if (sub_4D6E20(0x13) && cur < max) {
        cur++;
    } else if (sub_4D6E20(0x15)) {
        cur += 0xC;
        if (cur > max) {
            cur = max;
        }
    } else if (sub_4D6E20(0x14)) {
        cur -= 0xC;
        if (cur < 0) {
            cur = 0;
        }
    }
    if (g_73EADC != cur) {
        g_73EADC = cur;
        g_73EC65 = 0;
        sub_463190(5, 0x64);
        sub_4A9E70();
    }
}

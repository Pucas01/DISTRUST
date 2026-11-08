#include "game/map_state.h"

void __cdecl sub_474C90(int a, int b);
extern unsigned char g_73DC2A;

// STUB: 0x47CFD0 sub_47CFD0 (182 bytes)
void sub_47CFD0()
{
}

// STUB: 0x47D0E0 sub_47D0E0 (89 bytes)
void sub_47D0E0()
{
}

// STUB: 0x47D140 sub_47D140 (3199 bytes)
void sub_47D140()
{
}

// STUB: 0x47DDC0 sub_47DDC0 (993 bytes)
void sub_47DDC0()
{
}

// STUB: 0x47E1B0 sub_47E1B0 (90 bytes)
void sub_47E1B0()
{
}

// FUNCTION: 0x47E210 sub_47E210
int __cdecl sub_46DBE0(int id);
void __cdecl sub_46DB50(int id);
int __cdecl sub_46DC10(int id);
void __cdecl sub_4CE9B0(int h, int v);
void __cdecl sub_4F3C90(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void __cdecl sub_47E210(int a, int id, int c, int d, int e, int f)
{
    if (sub_46DBE0(id) != -2)
        sub_46DB50(id);
    int h = sub_46DC10(id);
    if (h != -2) {
        sub_4F3C90(0, h, c, d + 0x110, 0, a, 0, f, 1);
        sub_4CE9B0(h, e);
    }
}

// FUNCTION: 0x47E270 stepMapCounter
int stepMapCounter()
{
    sub_474C90(g_mapState.unk_D0, 10);
    if (g_mapState.unk_D0 >= 10) {
        g_73DC2A = 1;
        g_mapState.unk_D0 = 14;
        return 1;
    }
    g_mapState.unk_D0++;
    return 1;
}

// STUB: 0x47E2B0 sub_47E2B0 (102 bytes)
void sub_47E2B0()
{
}

// STUB: 0x47E320 sub_47E320 (109 bytes)
__declspec(noinline) void sub_47E320()
{
    __asm nop
}

// STUB: 0x47E390 sub_47E390 (36 bytes)
void sub_47E390()
{
}

// STUB: 0x47E3C0 sub_47E3C0 (813 bytes)
void sub_47E3C0()
{
}

// STUB: 0x47E6F0 sub_47E6F0 (164 bytes)
void sub_47E6F0()
{
}

// STUB: 0x47E7A0 sub_47E7A0 (54 bytes)
void sub_47E7A0()
{
}

// STUB: 0x47E7E0 sub_47E7E0 (546 bytes)
void sub_47E7E0()
{
}

// STUB: 0x47EA10 sub_47EA10 (462 bytes)
void sub_47EA10()
{
}

// STUB: 0x47EBE0 sub_47EBE0 (346 bytes)
void sub_47EBE0()
{
}

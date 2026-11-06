extern short g_mapState;
extern short g_73D9B6;
extern int g_73D9BC;
int* __cdecl sub_473D00();
void __cdecl sub_4833E0(int a);
void __cdecl sub_4832D0(int a, int b);
void __cdecl sub_483370(int a);

// FUNCTION: 0x483120 selectEntry483120
void __cdecl selectEntry483120(int x)
{
    if (x) {
        g_73D9B6 = g_mapState = x - 7;
        int* p = sub_473D00();
        g_73D9BC = p[g_mapState];
    }
}

// FUNCTION: 0x4834B0 refresh4834B0
void __cdecl refresh4834B0(int a)
{
    sub_4833E0(a);
    sub_4832D0(g_mapState, a);
    sub_483370(a);
}

extern short g_73E85A;

extern unsigned char g_73E840;
extern short g_73E842;
extern unsigned char g_73E848;

// STUB: 0x49F6C0 sub_49F6C0 (108 bytes)
void sub_49F6C0()
{
}

// FUNCTION: 0x49F730 setWord73E85A
void __cdecl setWord73E85A(short v)
{
    g_73E85A = v;
}

// FUNCTION: 0x49F740 setState73E840
void __cdecl setState73E840(unsigned char v)
{
    g_73E842 = 0;
    g_73E840 = 1;
    g_73E848 = v;
}

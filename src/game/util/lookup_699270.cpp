extern int g_699270[];
extern int g_6992AC[];

extern void __cdecl setActiveId(int id);
void __cdecl sub_4CEB20(int i);
int __cdecl sub_4C5C80(int a, int b);
int __cdecl sub_4C6640(int a, int b);

// STUB: 0x4AFDF0 sub_4AFDF0 (42 bytes)
void sub_4AFDF0()
{
}

// FUNCTION: 0x4AFE20 sub_4AFE20
void sub_4AFE20()
{
    setActiveId(0x4e1f);
    for (int i = 0x32; i < 0xff; i++)
        sub_4CEB20(i);
}

// FUNCTION: 0x4AFE50 getTable699270
int __cdecl getTable699270(int i)
{
    return g_699270[i];
}

// FUNCTION: 0x4AFE60 getTable6992AC
int __cdecl getTable6992AC(int i)
{
    return g_6992AC[i];
}

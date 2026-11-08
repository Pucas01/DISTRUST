// FUNCTION: 0x462F60 sub_462F60
void __cdecl sub_4DA4B0(int v);
void __cdecl sub_462F60(int a, int v)
{
    if (v < 0)
        v = 0;
    else if (v > 100)
        v = 100;
    sub_4DA4B0(v);
}

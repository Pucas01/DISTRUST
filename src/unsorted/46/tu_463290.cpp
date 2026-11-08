// FUNCTION: 0x463290 sub_463290
unsigned char sub_4C5720();
void __cdecl sub_4DABC0(int a, int b);
void sub_4C3670();
void sub_432D60();
void sub_4C3510();
int __cdecl sub_4F4780();
int __fastcall sub_4B23D0(int self);
char sub_4DABA0();
void sub_463290()
{
    sub_4DABC0(0, sub_4C5720() ? 10 : 0);
    sub_4C3670();
    sub_432D60();
    sub_4C3510();
    while (sub_4F4780() && !sub_4B23D0(sub_4F4780()) && !sub_4DABA0()) {
        sub_4C3670();
        sub_432D60();
        sub_4C3510();
    }
}

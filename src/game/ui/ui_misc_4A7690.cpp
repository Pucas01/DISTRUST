extern signed char g_73EAE8;
void __cdecl sub_4AFC30(int a);
void __cdecl sub_4AF640(int a);

// FUNCTION: 0x4A7690 applyUiMode4A7690
void applyUiMode4A7690()
{
    sub_4AFC30(2);
    sub_4AFC30(3);
    sub_4AFC30(4);
    sub_4AFC30(5);
    switch (g_73EAE8) {
    case 0:
        sub_4AF640(2);
        sub_4AF640(3);
        break;
    case 1:
        sub_4AF640(4);
        break;
    case 2:
        sub_4AF640(5);
        break;
    }
}

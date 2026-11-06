extern int g_74C19C;
void __cdecl sub_519390(int a);

// FUNCTION: 0x4DD9E0 waitFlag74C19C
void waitFlag74C19C()
{
    while (g_74C19C == 0) {
        sub_519390(1);
    }
}

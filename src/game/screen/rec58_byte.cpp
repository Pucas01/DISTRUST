// FUNCTION: 0x435080 sub_435080
void __cdecl sub_435080(unsigned int i, char c)
{
    if (i <= 0x27)
        *((char*)0x6a8d7c + i * 0x58) = c;
}

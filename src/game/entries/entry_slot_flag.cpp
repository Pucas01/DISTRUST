// FUNCTION: 0x423260 sub_423260
void __cdecl sub_423260(unsigned int i, char c)
{
    if (i <= 0x11)
        *((char*)0x6a5f35 + i * 0x214) = c;
}

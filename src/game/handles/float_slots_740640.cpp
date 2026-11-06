// FUNCTION: 0x4D0670 sub_4D0670
void __cdecl sub_4D0670(unsigned int i, float a, float b)
{
    if (i <= 0xff) {
        int k = i * 15;
        *(float*)((char*)0x740640 + k * 4) = a;
        *(float*)((char*)0x740644 + k * 4) = b;
    }
}

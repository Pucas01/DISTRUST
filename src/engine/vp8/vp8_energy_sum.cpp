// STUB: 0x40C130 sub_40C130 (90 bytes)
void sub_40C130()
{
}

// FUNCTION: 0x40C190 sub_40C190
int __cdecl sub_40C190(const short* p)
{
    int sum = 0;
    for (unsigned int i = 0; i < 256; i++)
        sum += p[i] * p[i];
    return sum;
}

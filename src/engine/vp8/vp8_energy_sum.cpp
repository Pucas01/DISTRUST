// STUB: 0x40C130 sub_40C130 (90 bytes)
void sub_40C130()
{
}

// FUNCTION: 0x40C190 sub_40C190
int __cdecl sub_40C190(const short* p)
{
    unsigned int i = 0;
    int sum = 0;
    do {
        int v = p[i];
        sum += v * v;
        i++;
    } while (i < 256);
    return sum;
}

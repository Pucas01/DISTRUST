unsigned int __cdecl vp8_sub_pixel_variance16x16_mmx(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse);

// FUNCTION: 0x40F830 sub_40F830
unsigned int __cdecl sub_40F830(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse)
{
    vp8_sub_pixel_variance16x16_mmx(a, b, c, d, e, f, sse);
    return *sse;
}

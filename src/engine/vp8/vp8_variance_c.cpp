unsigned int __cdecl vp8_sub_pixel_variance16x16_c(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse);

// FUNCTION: 0x40CBF0 sub_40CBF0
unsigned int __cdecl sub_40CBF0(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse)
{
    vp8_sub_pixel_variance16x16_c(a, b, c, d, e, f, sse);
    return *sse;
}

unsigned int __cdecl vp8_sub_pixel_variance16x16_wmt(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse);

// FUNCTION: 0x412E50 sub_412E50
unsigned int __cdecl sub_412E50(const unsigned char* a, int b, int c, int d, const unsigned char* e, int f, unsigned int* sse)
{
    vp8_sub_pixel_variance16x16_wmt(a, b, c, d, e, f, sse);
    return *sse;
}

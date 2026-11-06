void __cdecl vp8_loop_filter_simple_horizontal_edge_c(unsigned char* y, int stride, const unsigned char* limit);

// FUNCTION: 0x414750 sub_414750
void __cdecl sub_414750(unsigned char* y, int stride, const unsigned char* limit)
{
    vp8_loop_filter_simple_horizontal_edge_c(y + 4 * stride, stride, limit);
    vp8_loop_filter_simple_horizontal_edge_c(y + 8 * stride, stride, limit);
    vp8_loop_filter_simple_horizontal_edge_c(y + 12 * stride, stride, limit);
}

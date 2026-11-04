void __cdecl vp8_loop_filter_simple_vertical_edge_c(unsigned char* y, int pitch, const unsigned char* blimit);

// FUNCTION: 0x414830 vp8_loop_filter_bvs_c
void __cdecl vp8_loop_filter_bvs_c(unsigned char* y, int pitch, const unsigned char* blimit)
{
    vp8_loop_filter_simple_vertical_edge_c(y + 4, pitch, blimit);
    vp8_loop_filter_simple_vertical_edge_c(y + 8, pitch, blimit);
    vp8_loop_filter_simple_vertical_edge_c(y + 12, pitch, blimit);
}

void __cdecl sub_5C2DBC(unsigned char* y, int stride, const unsigned char* limit);

// FUNCTION: 0x40D3B0 sub_40D3B0
void __cdecl sub_40D3B0(unsigned char* y, int stride, const unsigned char* limit)
{
    sub_5C2DBC(y + 4 * stride, stride, limit);
    sub_5C2DBC(y + 8 * stride, stride, limit);
    sub_5C2DBC(y + 12 * stride, stride, limit);
}

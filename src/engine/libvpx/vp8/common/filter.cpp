// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x411F70 filter_block2d_first_pass
// FUNCTION: 0x412050 filter_block2d_second_pass
// FUNCTION: 0x412160 vp8_sixtap_predict4x4_c
// FUNCTION: 0x4121E0 vp8_sixtap_predict8x8_c
// FUNCTION: 0x412260 vp8_sixtap_predict8x4_c
// FUNCTION: 0x4122E0 vp8_sixtap_predict16x16_c
// FUNCTION: 0x412360 filter_block2d_bil_first_pass
// FUNCTION: 0x4123D0 filter_block2d_bil_second_pass
// FUNCTION: 0x412440 vp8_bilinear_predict4x4_c
// FUNCTION: 0x4124B0 vp8_bilinear_predict8x8_c
// FUNCTION: 0x412520 vp8_bilinear_predict8x4_c
// FUNCTION: 0x412590 vp8_bilinear_predict16x16_c
#include "../../../../../external/libvpx/vp8/common/filter.c"

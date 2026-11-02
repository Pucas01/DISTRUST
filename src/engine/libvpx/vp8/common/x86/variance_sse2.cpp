// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x412AE0 vp8_variance4x4_wmt
// FUNCTION: 0x412B20 vp8_variance8x8_wmt
// FUNCTION: 0x412B90 vp8_variance16x8_wmt
// FUNCTION: 0x412BF0 vp8_variance8x16_wmt
// FUNCTION: 0x412C60 vp8_sub_pixel_variance8x8_wmt
// FUNCTION: 0x412D20 vp8_sub_pixel_variance16x16_wmt
// FUNCTION: 0x412E80 vp8_sub_pixel_variance16x8_wmt
// FUNCTION: 0x412FB0 vp8_sub_pixel_variance8x16_wmt
// FUNCTION: 0x413070 vp8_variance_halfpixvar16x16_h_wmt
// FUNCTION: 0x4130B0 vp8_variance_halfpixvar16x16_v_wmt
// FUNCTION: 0x4130F0 vp8_variance_halfpixvar16x16_hv_wmt
#include "../../../../../../external/libvpx/vp8/common/x86/variance_sse2.c"

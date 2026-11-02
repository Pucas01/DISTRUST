// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x411DF0 vp8_sub_pixel_variance16x16_ssse3
// FUNCTION: 0x411EB0 vp8_sub_pixel_variance16x8_ssse3
#include "../../../../../../external/libvpx/vp8/common/x86/variance_ssse3.c"

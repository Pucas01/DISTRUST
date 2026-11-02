// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x40D250 vp8_loop_filter_mbv_mmx
// FUNCTION: 0x40D2B0 vp8_loop_filter_mbh_mmx
// FUNCTION: 0x40D310 vp8_loop_filter_bh_mmx
// FUNCTION: 0x40D3F0 vp8_loop_filter_bv_mmx
// FUNCTION: 0x40D490 vp8_loop_filter_bvs_sse2
// FUNCTION: 0x40D4D0 vp8_loop_filter_mbv_sse2
// FUNCTION: 0x40D510 vp8_loop_filter_mbh_sse2
// FUNCTION: 0x40D550 vp8_loop_filter_bh_sse2
// FUNCTION: 0x40D610 vp8_loop_filter_bv_sse2
#include "../../../../../../external/libvpx/vp8/common/x86/loopfilter_x86.c"

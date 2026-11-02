// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x405A90 lf_init_lut
// FUNCTION: 0x405B00 vp8_loop_filter_update_sharpness
// FUNCTION: 0x405BD0 vp8_loop_filter_init
// FUNCTION: 0x405C30 vp8_loop_filter_frame_init
// FUNCTION: 0x405DC0 vp8_loop_filter_row_normal
// FUNCTION: 0x405F30 vp8_loop_filter_row_simple
#include "../../../../../external/libvpx/vp8/common/loopfilter.c"

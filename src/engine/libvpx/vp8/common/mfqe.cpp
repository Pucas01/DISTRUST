// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x411640 int_sqrt
// FUNCTION: 0x411690 multiframe_quality_enhance_block
// FUNCTION: 0x411940 qualify_inter_mb
// FUNCTION: 0x411A40 vp8_multiframe_quality_enhance
#include "../../../../../external/libvpx/vp8/common/mfqe.c"

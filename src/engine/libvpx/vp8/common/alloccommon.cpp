// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x405370 vp8_de_alloc_frame_buffers
// FUNCTION: 0x4054B0 vp8_alloc_frame_buffers
// FUNCTION: 0x405790 vp8_setup_version
// FUNCTION: 0x405850 vp8_create_common
#include "../../../../../external/libvpx/vp8/common/alloccommon.c"

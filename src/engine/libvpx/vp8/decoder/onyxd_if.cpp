// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x401E50 create_decompressor
// FUNCTION: 0x401F50 vp8dx_get_reference
// FUNCTION: 0x401FF0 vp8dx_set_reference
// FUNCTION: 0x4020E0 get_free_fb
// FUNCTION: 0x402110 swap_frame_buffers
// FUNCTION: 0x4022B0 check_fragments_for_errors
// FUNCTION: 0x402340 vp8dx_receive_compressed_data
// FUNCTION: 0x4024F0 vp8dx_get_raw_frame
// FUNCTION: 0x402560 vp8dx_references_buffer
#include "../../../../../external/libvpx/vp8/decoder/onyxd_if.c"

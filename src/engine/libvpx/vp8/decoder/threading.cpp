// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /GL /Zc:wchar_t /TC /DWIN32 /DNDEBUG /Iinclude/shim /Iinclude/libvpx /Iexternal/libvpx /Iexternal/libvpx/vp8 /Iexternal/libvpx/vp8/common /Iexternal/libvpx/vp8/decoder /Iexternal/libvpx/vpx_ports /Iexternal/libvpx/vpx_scale /Iexternal/libvpx/vpx_mem
// LTCG: libvpx
// FUNCTION: 0x4025C0 setup_decoding_thread_data
// FUNCTION: 0x402820 mt_decode_macroblock
// FUNCTION: 0x402C00 mt_decode_mb_rows
// FUNCTION: 0x403910 thread_decoding_proc
// FUNCTION: 0x4039A0 vp8_decoder_create_threads
// FUNCTION: 0x403C20 vp8mt_de_alloc_temp_buffers
// FUNCTION: 0x403E90 vp8mt_alloc_temp_buffers
// FUNCTION: 0x4043F0 vp8_decoder_remove_threads
// FUNCTION: 0x404520 vp8mt_decode_mb_rows
#include "../../../../../external/libvpx/vp8/decoder/threading.c"

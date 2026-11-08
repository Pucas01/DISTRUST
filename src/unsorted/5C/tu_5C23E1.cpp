extern char g_75E860[];
extern char g_75E870[];
extern char g_75E880[];
extern char g_75E890[];
extern char g_75E8A0[];
extern char g_75E8B0[];
extern char g_75E8C0[];
extern char g_75E8D0[];
extern char g_75E8E0[];
extern char g_75E8F0[];
extern char g_75E900[];

// FUNCTION: 0x5C23E1 vp8_loop_filter_vertical_edge_mmx
__declspec(naked) void vp8_loop_filter_vertical_edge_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x40
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi + eax*4 - 4]
        mov ecx, dword ptr [ebp + 0x1c]
        L5C2400:
        _emit 0x89
        _emit 0xf7
        _emit 0x1
        _emit 0xc7
        movq mm6, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xfe
        punpckhbw mm7, qword ptr [edi + eax*2]
        punpcklbw mm6, dword ptr [edi + eax*2]
        movq mm4, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        punpckhbw mm5, qword ptr [esi + eax]
        punpcklbw mm4, dword ptr [esi + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        punpckhwd mm5, mm7
        punpcklwd mm3, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xd4
        punpckhwd mm4, mm6
        punpcklwd mm2, mm6
        neg eax
        movq mm6, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xce
        punpckhbw mm6, qword ptr [esi + eax]
        punpcklbw mm1, dword ptr [esi + eax]
        movq mm7, qword ptr [esi + eax*4]
        punpckhbw mm7, qword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpckhwd mm7, mm6
        punpcklwd mm0, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xf7
        punpckhdq mm7, mm5
        punpckldq mm6, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xee
        psubusb mm5, mm7
        psubusb mm7, mm6
        por mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        punpckhdq mm5, mm3
        punpckldq mm0, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        psubusb mm3, mm6
        psubusb mm6, mm5
        por mm6, mm3
        lea edx, [esp + 0x20]
        movq qword ptr [edx + 0x18], mm5
        movq qword ptr [edx + 0x10], mm0
        movq mm3, qword ptr [esi + eax*4]
        punpcklbw mm3, dword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc3
        punpcklwd mm0, mm1
        punpckhwd mm3, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpckldq mm0, mm2
        punpckhdq mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        psubusb mm2, mm0
        psubusb mm0, mm1
        por mm0, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        punpckldq mm2, mm4
        punpckhdq mm3, mm4
        movq qword ptr [edx + 8], mm3
        movq qword ptr [edx], mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm2, mm1
        psubusb mm1, mm5
        por mm1, mm2
        mov edx, dword ptr [ebp + 0x14]
        movq mm4, qword ptr [edx]
        psubusb mm7, mm4
        psubusb mm0, mm4
        psubusb mm1, mm4
        psubusb mm6, mm4
        por mm7, mm6
        por mm0, mm1
        por mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        psubusb mm7, mm5
        psubusb mm5, mm3
        por mm5, mm7
        movq qword ptr [esp], mm5
        lea edx, [esp + 0x20]
        psubusb mm5, mm4
        por mm0, mm5
        movq mm5, qword ptr [edx + 0x10]
        movq mm7, qword ptr [edx + 0x18]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        _emit 0x0f
        _emit 0x6f
        _emit 0xd7
        psubusb mm5, mm7
        psubusb mm7, mm6
        por mm7, mm5
        movq qword ptr [esp + 0x10], mm7
        psubusb mm7, mm4
        por mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm5, mm1
        psubusb mm1, mm2
        por mm5, mm1
        pand mm5, qword ptr [g_75E860]
        psrlw mm5, 1
        mov edx, dword ptr [ebp + 0x10]
        movq mm4, qword ptr [edx]
        _emit 0x0f
        _emit 0x6f
        _emit 0xcb
        _emit 0x0f
        _emit 0x6f
        _emit 0xfe
        psubusb mm1, mm7
        psubusb mm7, mm3
        por mm1, mm7
        paddusb mm1, mm1
        paddusb mm1, mm5
        psubusb mm1, mm4
        por mm1, mm0
        pxor mm0, mm0
        pcmpeqb mm1, mm0
        mov edx, dword ptr [ebp + 0x18]
        movq mm7, qword ptr [edx]
        movq mm4, qword ptr [esp]
        psubusb mm4, mm7
        movq mm3, qword ptr [esp + 0x10]
        psubusb mm3, mm7
        por mm4, mm3
        pcmpeqb mm4, mm0
        pcmpeqb mm0, mm0
        pxor mm4, mm0
        lea edx, [esp + 0x20]
        movq mm2, qword ptr [edx]
        movq mm7, qword ptr [edx + 0x18]
        movq mm6, qword ptr [edx + 8]
        movq mm0, qword ptr [edx + 0x10]
        pxor mm2, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        psubsb mm2, mm7
        pand mm2, mm4
        pxor mm6, qword ptr [g_75E870]
        pxor mm0, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubsb mm0, mm6
        paddsb mm2, mm0
        paddsb mm2, mm0
        paddsb mm2, mm0
        pand mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        paddsb mm1, qword ptr [g_75E8A0]
        paddsb mm2, qword ptr [g_75E890]
        pxor mm0, mm0
        pxor mm5, mm5
        punpcklbw mm0, mm2
        punpckhbw mm5, mm2
        psraw mm0, 0xb
        psraw mm5, 0xb
        packsswb mm0, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        pxor mm0, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        punpcklbw mm0, mm1
        psraw mm0, 0xb
        pxor mm1, mm1
        punpckhbw mm1, mm5
        psraw mm1, 0xb
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        packsswb mm0, mm1
        paddsw mm5, qword ptr [g_75E8B0]
        paddsw mm1, qword ptr [g_75E8B0]
        psraw mm5, 1
        psraw mm1, 1
        packsswb mm5, mm1
        pandn mm4, mm5
        paddsb mm6, mm2
        pxor mm6, qword ptr [g_75E870]
        movq mm1, qword ptr [edx]
        pxor mm1, qword ptr [g_75E870]
        paddsb mm1, mm4
        pxor mm1, qword ptr [g_75E870]
        psubsb mm3, mm0
        pxor mm3, qword ptr [g_75E870]
        psubsb mm7, mm4
        pxor mm7, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        punpcklbw mm2, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpckhbw mm1, mm6
        punpcklbw mm4, mm7
        punpckhbw mm3, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        punpcklwd mm2, mm4
        punpckhwd mm6, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        punpcklwd mm1, mm3
        punpckhwd mm5, mm3
        movd dword ptr [esi + eax*4 + 2], mm2
        psrlq mm2, 0x20
        movd dword ptr [edi + eax*4 + 2], mm2
        movd dword ptr [esi + eax*2 + 2], mm6
        psrlq mm6, 0x20
        movd dword ptr [esi + eax + 2], mm6
        movd dword ptr [esi + 2], mm1
        psrlq mm1, 0x20
        movd dword ptr [edi + 2], mm1
        neg eax
        movd dword ptr [edi + eax + 2], mm5
        psrlq mm5, 0x20
        movd dword ptr [edi + eax*2 + 2], mm5
        lea esi, [esi + eax*8]
        dec ecx
        jne L5C2400
        add esp, 0x40
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C26D1 vp8_mbloop_filter_vertical_edge_mmx
__declspec(naked) void vp8_mbloop_filter_vertical_edge_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x20
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x1c]
        L5C26EC:
        mov edx, dword ptr [ebp + 0x14]
        movq mm7, qword ptr [edx]
        _emit 0x89
        _emit 0xf7
        _emit 0x1
        _emit 0xc7
        movq mm2, qword ptr [edi + eax*2]
        movq mm1, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf1
        psubusb mm1, mm2
        psubusb mm2, mm6
        por mm1, mm2
        psubusb mm1, mm7
        movq mm4, qword ptr [esi + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        psubusb mm4, mm6
        psubusb mm6, mm3
        por mm4, mm6
        psubusb mm4, mm7
        por mm1, mm4
        movq mm4, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc4
        psubusb mm4, mm3
        psubusb mm3, mm0
        por mm4, mm3
        movq qword ptr [esp], mm4
        psubusb mm4, mm7
        por mm1, mm4
        neg eax
        movq mm2, qword ptr [esi + eax*4]
        movq mm4, qword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        psubusb mm4, mm2
        psubusb mm2, mm5
        por mm4, mm2
        psubusb mm4, mm7
        por mm1, mm4
        movq mm4, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        psubusb mm4, mm5
        psubusb mm5, mm3
        por mm4, mm5
        psubusb mm4, mm7
        por mm1, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        movq mm4, qword ptr [esi + eax]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        psubusb mm4, mm3
        psubusb mm3, mm5
        por mm4, mm3
        movq qword ptr [esp + 0x10], mm4
        psubusb mm4, mm7
        por mm1, mm4
        movq mm3, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        psubusb mm3, mm2
        psubusb mm2, mm4
        por mm2, mm3
        pand mm2, qword ptr [g_75E860]
        psrlw mm2, 1
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubusb mm5, mm3
        psubusb mm3, mm6
        por mm5, mm3
        paddusb mm5, mm5
        paddusb mm5, mm2
        mov edx, dword ptr [ebp + 0x10]
        movq mm7, qword ptr [edx]
        psubusb mm5, mm7
        por mm1, mm5
        pxor mm5, mm5
        pcmpeqb mm1, mm5
        mov edx, dword ptr [ebp + 0x18]
        movq mm7, qword ptr [edx]
        movq mm4, qword ptr [esp]
        psubusb mm4, mm7
        movq mm3, qword ptr [esp + 0x10]
        psubusb mm3, mm7
        paddb mm4, mm3
        pcmpeqb mm4, mm5
        pcmpeqb mm5, mm5
        pxor mm4, mm5
        movq mm2, qword ptr [esi + eax*2]
        movq mm7, qword ptr [edi]
        pxor mm2, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        psubsb mm2, mm7
        pxor mm6, qword ptr [g_75E870]
        pxor mm0, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubsb mm0, mm6
        paddsb mm2, mm0
        paddsb mm2, mm0
        paddsb mm2, mm0
        pand mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        pand mm2, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        paddsb mm5, qword ptr [g_75E890]
        pxor mm0, mm0
        pxor mm7, mm7
        punpcklbw mm0, mm5
        psraw mm0, 0xb
        punpckhbw mm7, mm5
        psraw mm7, 0xb
        packsswb mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        paddsb mm2, qword ptr [g_75E8A0]
        pxor mm0, mm0
        pxor mm7, mm7
        punpcklbw mm0, mm2
        psraw mm0, 0xb
        punpckhbw mm7, mm2
        psraw mm7, 0xb
        packsswb mm0, mm7
        psubsb mm3, mm0
        paddsb mm6, mm5
        pandn mm4, mm1
        pxor mm0, mm0
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8C0]
        pmulhw mm2, qword ptr [g_75E8C0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        psubsb mm3, mm1
        paddsb mm6, mm1
        pxor mm3, qword ptr [g_75E870]
        pxor mm6, qword ptr [g_75E870]
        movq qword ptr [esi + eax], mm6
        movq qword ptr [esi], mm3
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8D0]
        pmulhw mm2, qword ptr [g_75E8D0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        movq mm3, qword ptr [edi]
        movq mm6, qword ptr [esi + eax*2]
        pxor mm3, qword ptr [g_75E870]
        pxor mm6, qword ptr [g_75E870]
        paddsb mm6, mm1
        psubsb mm3, mm1
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        movq qword ptr [edi], mm3
        movq qword ptr [esi + eax*2], mm6
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8E0]
        pmulhw mm2, qword ptr [g_75E8E0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        movq mm6, qword ptr [edi + eax*4]
        neg eax
        movq mm3, qword ptr [edi + eax]
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        paddsb mm6, mm1
        psubsb mm3, mm1
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        movq qword ptr [edi + eax], mm3
        neg eax
        movq qword ptr [edi + eax*4], mm6
        neg eax
        add esi, 8
        dec ecx
        jne L5C26EC
        add esp, 0x20
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C29A8 vp8_mbloop_filter_horizontal_edge_mmx
__declspec(naked) void vp8_mbloop_filter_horizontal_edge_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x60
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi + eax*4 - 4]
        mov ecx, dword ptr [ebp + 0x1c]
        L5C29C7:
        lea edi, [esi + eax]
        movq mm0, qword ptr [edi + eax*2]
        movq mm6, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xfe
        punpckhbw mm7, mm0
        punpcklbw mm6, mm0
        movq mm0, qword ptr [esi + eax]
        movq mm4, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        punpckhbw mm5, mm0
        punpcklbw mm4, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        punpckhwd mm5, mm7
        punpcklwd mm3, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xd4
        punpckhwd mm4, mm6
        punpcklwd mm2, mm6
        neg eax
        movq mm7, qword ptr [esi + eax]
        movq mm6, qword ptr [esi + eax*2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xce
        punpckhbw mm6, mm7
        punpcklbw mm1, mm7
        movq mm7, qword ptr [esi + eax*4]
        punpckhbw mm7, qword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpckhwd mm7, mm6
        punpcklwd mm0, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xf7
        punpckhdq mm7, mm5
        punpckldq mm6, mm5
        lea edx, [esp + 0x20]
        _emit 0x0f
        _emit 0x6f
        _emit 0xee
        movq qword ptr [edx + 0x38], mm7
        psubusb mm5, mm7
        movq qword ptr [edx + 0x30], mm6
        psubusb mm7, mm6
        por mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        punpckhdq mm5, mm3
        punpckldq mm0, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        psubusb mm3, mm6
        psubusb mm6, mm5
        por mm6, mm3
        movq qword ptr [edx + 0x28], mm5
        movq qword ptr [edx + 0x20], mm0
        movq mm3, qword ptr [esi + eax*4]
        punpcklbw mm3, dword ptr [edi + eax*4]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc3
        punpcklwd mm0, mm1
        punpckhwd mm3, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpckldq mm0, mm2
        punpckhdq mm1, mm2
        movq qword ptr [edx], mm0
        movq qword ptr [edx + 8], mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        psubusb mm2, mm0
        psubusb mm0, mm1
        por mm0, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        punpckldq mm2, mm4
        punpckhdq mm3, mm4
        movq qword ptr [edx + 0x18], mm3
        movq qword ptr [edx + 0x10], mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm2, mm1
        psubusb mm1, mm5
        por mm1, mm2
        mov edx, dword ptr [ebp + 0x14]
        movq mm4, qword ptr [edx]
        psubusb mm7, mm4
        psubusb mm0, mm4
        psubusb mm1, mm4
        psubusb mm6, mm4
        por mm7, mm6
        por mm0, mm1
        por mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        psubusb mm7, mm5
        psubusb mm5, mm3
        por mm5, mm7
        movq qword ptr [esp], mm5
        lea edx, [esp + 0x20]
        psubusb mm5, mm4
        por mm0, mm5
        movq mm5, qword ptr [edx + 0x20]
        movq mm7, qword ptr [edx + 0x28]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        _emit 0x0f
        _emit 0x6f
        _emit 0xd7
        psubusb mm5, mm7
        psubusb mm7, mm6
        por mm7, mm5
        movq qword ptr [esp + 0x10], mm7
        psubusb mm7, mm4
        por mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm5, mm1
        psubusb mm1, mm2
        por mm5, mm1
        pand mm5, qword ptr [g_75E860]
        psrlw mm5, 1
        mov edx, dword ptr [ebp + 0x10]
        movq mm4, qword ptr [edx]
        _emit 0x0f
        _emit 0x6f
        _emit 0xcb
        _emit 0x0f
        _emit 0x6f
        _emit 0xfe
        psubusb mm1, mm7
        psubusb mm7, mm3
        por mm1, mm7
        paddusb mm1, mm1
        paddusb mm1, mm5
        psubusb mm1, mm4
        por mm1, mm0
        pxor mm0, mm0
        pcmpeqb mm1, mm0
        mov edx, dword ptr [ebp + 0x18]
        movq mm7, qword ptr [edx]
        movq mm4, qword ptr [esp]
        psubusb mm4, mm7
        movq mm3, qword ptr [esp + 0x10]
        psubusb mm3, mm7
        por mm4, mm3
        pcmpeqb mm4, mm0
        pcmpeqb mm0, mm0
        pxor mm4, mm0
        lea edx, [esp + 0x20]
        movq mm2, qword ptr [edx + 0x10]
        movq mm7, qword ptr [edx + 0x28]
        pxor mm2, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        psubsb mm2, mm7
        movq mm6, qword ptr [edx + 0x18]
        movq mm0, qword ptr [edx + 0x20]
        pxor mm6, qword ptr [g_75E870]
        pxor mm0, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubsb mm0, mm6
        paddsb mm2, mm0
        paddsb mm2, mm0
        paddsb mm2, mm0
        pand mm1, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        pand mm2, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        paddsb mm5, qword ptr [g_75E890]
        pxor mm0, mm0
        pxor mm7, mm7
        punpcklbw mm0, mm5
        psraw mm0, 0xb
        punpckhbw mm7, mm5
        psraw mm7, 0xb
        packsswb mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        paddsb mm2, qword ptr [g_75E8A0]
        pxor mm0, mm0
        pxor mm7, mm7
        punpcklbw mm0, mm2
        psraw mm0, 0xb
        punpckhbw mm7, mm2
        psraw mm7, 0xb
        packsswb mm0, mm7
        psubsb mm3, mm0
        paddsb mm6, mm5
        pandn mm4, mm1
        pxor mm0, mm0
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8C0]
        pmulhw mm2, qword ptr [g_75E8C0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        psubsb mm3, mm1
        paddsb mm6, mm1
        pxor mm3, qword ptr [g_75E870]
        pxor mm6, qword ptr [g_75E870]
        movq qword ptr [edx + 0x18], mm6
        movq qword ptr [edx + 0x20], mm3
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8D0]
        pmulhw mm2, qword ptr [g_75E8D0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        movq mm3, qword ptr [edx + 0x28]
        movq mm6, qword ptr [edx + 0x10]
        pxor mm3, qword ptr [g_75E870]
        pxor mm6, qword ptr [g_75E870]
        paddsb mm6, mm1
        psubsb mm3, mm1
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        movq qword ptr [edx + 0x28], mm3
        movq qword ptr [edx + 0x10], mm6
        pxor mm1, mm1
        pxor mm2, mm2
        punpcklbw mm1, mm4
        punpckhbw mm2, mm4
        pmulhw mm1, qword ptr [g_75E8E0]
        pmulhw mm2, qword ptr [g_75E8E0]
        paddw mm1, qword ptr [g_75E8F0]
        paddw mm2, qword ptr [g_75E8F0]
        psraw mm1, 7
        psraw mm2, 7
        packsswb mm1, mm2
        movq mm6, qword ptr [edx + 8]
        movq mm3, qword ptr [edx + 0x30]
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        paddsb mm6, mm1
        psubsb mm3, mm1
        pxor mm6, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        movq mm0, qword ptr [edx]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpcklbw mm0, mm6
        punpckhbw mm1, mm6
        movq mm2, qword ptr [edx + 0x10]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        punpcklbw mm2, dword ptr [edx + 0x18]
        punpckhbw mm6, qword ptr [edx + 0x18]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe8
        punpcklwd mm0, mm2
        punpckhwd mm5, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe1
        punpcklwd mm1, mm6
        punpckhwd mm4, mm6
        movq mm2, qword ptr [edx + 0x20]
        punpcklbw mm2, dword ptr [edx + 0x28]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf3
        punpcklbw mm6, dword ptr [edx + 0x38]
        _emit 0x0f
        _emit 0x6f
        _emit 0xfa
        punpcklwd mm2, mm6
        punpckhwd mm7, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xf0
        punpckldq mm0, mm2
        punpckhdq mm6, mm2
        movq qword ptr [esi + eax*4], mm0
        movq qword ptr [edi + eax*4], mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc5
        punpckldq mm0, mm7
        punpckhdq mm5, mm7
        movq qword ptr [esi + eax*2], mm0
        movq qword ptr [edi + eax*2], mm5
        movq mm2, qword ptr [edx + 0x20]
        punpckhbw mm2, qword ptr [edx + 0x28]
        punpckhbw mm3, qword ptr [edx + 0x38]
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpcklwd mm2, mm3
        punpckhwd mm5, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpckldq mm0, mm2
        punpckhdq mm1, mm2
        movq qword ptr [esi], mm0
        movq qword ptr [edi], mm1
        neg eax
        punpckldq mm3, mm5
        punpckhdq mm4, mm5
        movq qword ptr [esi + eax*2], mm3
        movq qword ptr [edi + eax*2], mm4
        lea esi, [esi + eax*8]
        dec ecx
        jne L5C29C7
        add esp, 0x60
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C2DBC sub_5C2DBC
__declspec(naked) void sub_5C2DBC()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, 2
        L5C2DCC:
        mov edx, dword ptr [ebp + 0x10]
        movq mm3, qword ptr [edx]
        _emit 0x89
        _emit 0xf7
        _emit 0x1
        _emit 0xc7
        neg eax
        movq mm1, qword ptr [esi + eax*2]
        movq mm0, qword ptr [edi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd1
        _emit 0x0f
        _emit 0x6f
        _emit 0xf8
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        psubusb mm0, mm1
        psubusb mm1, mm4
        por mm1, mm0
        pand mm1, qword ptr [g_75E860]
        psrlw mm1, 1
        movq mm5, qword ptr [esi + eax]
        movq mm4, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc4
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        psubusb mm5, mm4
        psubusb mm4, mm6
        por mm5, mm4
        paddusb mm5, mm5
        paddusb mm5, mm1
        psubusb mm5, mm3
        pxor mm3, mm3
        pcmpeqb mm5, mm3
        pxor mm2, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        psubsb mm2, mm7
        pxor mm6, qword ptr [g_75E870]
        pxor mm0, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xd8
        psubsb mm0, mm6
        paddsb mm2, mm0
        paddsb mm2, mm0
        paddsb mm2, mm0
        pand mm5, mm2
        paddsb mm5, qword ptr [g_75E8A0]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc5
        psllw mm0, 8
        psraw mm0, 3
        psrlw mm0, 8
        _emit 0x0f
        _emit 0x6f
        _emit 0xcd
        psraw mm1, 0xb
        psllw mm1, 8
        por mm0, mm1
        psubsb mm3, mm0
        pxor mm3, qword ptr [g_75E870]
        movq qword ptr [esi], mm3
        psubsb mm5, qword ptr [g_75E880]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc5
        psllw mm0, 8
        psraw mm0, 3
        psrlw mm0, 8
        psraw mm5, 0xb
        psllw mm5, 8
        por mm0, mm5
        paddsb mm6, mm0
        pxor mm6, qword ptr [g_75E870]
        movq qword ptr [esi + eax], mm6
        add esi, 8
        neg eax
        dec ecx
        jne L5C2DCC
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C2EC2 vp8_loop_filter_simple_vertical_edge_sse2
__declspec(naked) void vp8_loop_filter_simple_vertical_edge_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x20
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi + eax*4 - 2]
        mov ecx, 2
        L5C2EE3:
        lea edi, [esi + eax]
        movd mm0, dword ptr [edi + eax*2]
        movd mm6, dword ptr [esi + eax*2]
        punpcklbw mm6, mm0
        movd mm0, dword ptr [esi + eax]
        movd mm4, dword ptr [esi]
        punpcklbw mm4, mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        punpcklwd mm4, mm6
        punpckhwd mm5, mm6
        neg eax
        movd mm7, dword ptr [esi + eax]
        movd mm6, dword ptr [esi + eax*2]
        punpcklbw mm6, mm7
        movd mm1, dword ptr [edi + eax*4]
        movd mm0, dword ptr [esi + eax*4]
        punpcklbw mm0, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd0
        punpcklwd mm0, mm6
        punpckhwd mm2, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpckldq mm0, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xda
        punpckhdq mm1, mm4
        punpckldq mm2, mm5
        punpckhdq mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xf0
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        psubusb mm7, mm6
        psubusb mm6, mm3
        por mm6, mm7
        pand mm6, qword ptr [g_75E860]
        psrlw mm6, 1
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe2
        psubusb mm5, mm2
        psubusb mm4, mm1
        por mm5, mm4
        paddusb mm5, mm5
        paddusb mm5, mm6
        mov edx, dword ptr [ebp + 0x10]
        movq mm7, qword ptr [edx]
        psubusb mm5, mm7
        pxor mm7, mm7
        pcmpeqb mm5, mm7
        movq qword ptr [esp], mm0
        movq qword ptr [esp + 0x10], mm3
        pxor mm0, qword ptr [g_75E870]
        pxor mm3, qword ptr [g_75E870]
        psubsb mm0, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xf1
        _emit 0x0f
        _emit 0x6f
        _emit 0xfa
        pxor mm6, qword ptr [g_75E870]
        pxor mm7, qword ptr [g_75E870]
        _emit 0x0f
        _emit 0x6f
        _emit 0xdf
        psubsb mm7, mm6
        paddsb mm0, mm7
        paddsb mm0, mm7
        paddsb mm0, mm7
        pand mm5, mm0
        paddsb mm5, qword ptr [g_75E8A0]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc5
        psllw mm0, 8
        psraw mm0, 3
        psrlw mm0, 8
        _emit 0x0f
        _emit 0x6f
        _emit 0xfd
        psraw mm7, 0xb
        psllw mm7, 8
        por mm0, mm7
        psubsb mm3, mm0
        pxor mm3, qword ptr [g_75E870]
        psubsb mm5, qword ptr [g_75E880]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc5
        psllw mm0, 8
        psraw mm0, 3
        psrlw mm0, 8
        psraw mm5, 0xb
        psllw mm5, 8
        por mm0, mm5
        paddsb mm6, mm0
        pxor mm6, qword ptr [g_75E870]
        movq mm0, qword ptr [esp]
        movq mm4, qword ptr [esp + 0x10]
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        punpcklbw mm0, mm6
        punpckhbw mm1, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xd3
        punpcklbw mm2, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        punpckhbw mm3, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xf0
        punpcklwd mm0, mm2
        punpckhwd mm6, mm2
        movd dword ptr [esi + eax*4], mm0
        punpcklwd mm1, mm3
        psrlq mm0, 0x20
        punpckhwd mm5, mm3
        movd dword ptr [edi + eax*4], mm0
        movd dword ptr [esi + eax*2], mm6
        psrlq mm6, 0x20
        movd dword ptr [esi], mm1
        movd dword ptr [esi + eax], mm6
        neg eax
        movd dword ptr [esi + eax*2], mm5
        psrlq mm1, 0x20
        movd dword ptr [edi], mm1
        psrlq mm5, 0x20
        movd dword ptr [edi + eax*2], mm5
        lea esi, [esi + eax*8]
        dec ecx
        jne L5C2EE3
        add esp, 0x20
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C3080 sub_5C3080
__declspec(naked) void sub_5C3080()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        pxor mm7, mm7
        movd mm0, dword ptr [esi]
        movd mm1, dword ptr [eax]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi], mm0
        movd mm0, dword ptr [esi + edx]
        movd mm1, dword ptr [eax + ecx]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*2], mm0
        movd mm0, dword ptr [esi + edx*2]
        movd mm1, dword ptr [eax + ecx*2]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*4], mm0
        lea esi, [esi + edx*2]
        lea ecx, [ecx + ecx*2]
        movd mm0, dword ptr [esi + edx]
        movd mm1, dword ptr [eax + ecx]
        punpcklbw mm0, mm7
        punpcklbw mm1, mm7
        psubw mm0, mm1
        movq qword ptr [edi + ecx*2], mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C30F2 sub_5C30F2
__declspec(naked) void sub_5C30F2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        movdqa xmm4, xmmword ptr [g_75E900]
        push ebx
        mov ecx, 8
        mov ebx, dword ptr [ebp + 0x18]
        L5C3114:
        movdqa xmm0, xmmword ptr [esi]
        movdqa xmm1, xmmword ptr [eax]
        movdqa xmm2, xmm0
        psubb xmm0, xmm1
        pxor xmm1, xmm4
        pxor xmm2, xmm4
        pcmpgtb xmm1, xmm2
        movdqa xmm2, xmm0
        punpcklbw xmm0, xmm1
        punpckhbw xmm2, xmm1
        movdqa xmm3, xmmword ptr [esi + edx]
        movdqa xmm5, xmmword ptr [eax + ebx]
        lea esi, [esi + edx*2]
        lea eax, [eax + ebx*2]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm2
        movdqa xmm1, xmm3
        psubb xmm3, xmm5
        pxor xmm5, xmm4
        pxor xmm1, xmm4
        pcmpgtb xmm5, xmm1
        movdqa xmm1, xmm3
        punpcklbw xmm3, xmm5
        punpckhbw xmm1, xmm5
        movdqa xmmword ptr [edi + 0x20], xmm3
        movdqa xmmword ptr [edi + 0x30], xmm1
        add edi, 0x40
        dec ecx
        jne L5C3114
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5C318A sub_5C318A
__declspec(naked) void sub_5C318A()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        movdqa xmm4, xmmword ptr [g_75E900]
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x18]
        add edi, 0x200
        mov ecx, 4
        push ebx
        mov ebx, dword ptr [ebp + 0x20]
        L5C31B2:
        movq xmm0, qword ptr [esi]
        movq xmm2, qword ptr [esi + edx]
        movq xmm1, qword ptr [eax]
        movq xmm3, qword ptr [eax + ebx]
        lea esi, [esi + edx*2]
        lea eax, [eax + ebx*2]
        punpcklqdq xmm0, xmm2
        punpcklqdq xmm1, xmm3
        movdqa xmm2, xmm0
        psubb xmm0, xmm1
        pxor xmm1, xmm4
        pxor xmm2, xmm4
        pcmpgtb xmm1, xmm2
        movdqa xmm2, xmm0
        movdqa xmm3, xmm1
        punpcklbw xmm0, xmm1
        punpckhbw xmm2, xmm3
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm2
        add edi, 0x20
        sub ecx, 1
        jne L5C31B2
        mov esi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0x1c]
        mov ecx, 4
        L5C3212:
        movq xmm0, qword ptr [esi]
        movq xmm2, qword ptr [esi + edx]
        movq xmm1, qword ptr [eax]
        movq xmm3, qword ptr [eax + ebx]
        lea esi, [esi + edx*2]
        lea eax, [eax + ebx*2]
        punpcklqdq xmm0, xmm2
        punpcklqdq xmm1, xmm3
        movdqa xmm2, xmm0
        psubb xmm0, xmm1
        pxor xmm1, xmm4
        pxor xmm2, xmm4
        pcmpgtb xmm1, xmm2
        movdqa xmm2, xmm0
        movdqa xmm3, xmm1
        punpcklbw xmm0, xmm1
        punpckhbw xmm2, xmm3
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm2
        add edi, 0x20
        sub ecx, 1
        jne L5C3212
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

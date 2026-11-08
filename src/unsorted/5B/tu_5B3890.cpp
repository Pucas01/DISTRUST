extern char g_75E000[];
extern char g_75E010[];
extern char g_75E030[];
extern char g_75E040[];
extern char g_75E050[];
extern char g_75E060[];
extern char g_75E070[];

// FUNCTION: 0x5B3890 vp8_loop_filter_horizontal_edge_sse2
__declspec(naked) void vp8_loop_filter_horizontal_edge_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea edi, [esi + eax]
        movdqa xmm2, xmmword ptr [edi + eax*2]
        movdqa xmm1, xmmword ptr [esi + eax*2]
        movdqa xmm4, xmmword ptr [esi + eax]
        movdqa xmm5, xmmword ptr [esi]
        neg eax
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm6, xmm1
        movdqa xmm3, xmm4
        psubusb xmm1, xmm2
        psubusb xmm2, xmm6
        psubusb xmm4, xmm6
        psubusb xmm6, xmm3
        por xmm4, xmm6
        por xmm1, xmm2
        movdqa xmm0, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm3
        psubusb xmm3, xmm0
        por xmm5, xmm3
        movdqa xmmword ptr [esp], xmm5
        pmaxub xmm1, xmm5
        movdqa xmm2, xmmword ptr [esi + eax*4]
        movdqa xmm4, xmmword ptr [edi + eax*4]
        movdqa xmm6, xmmword ptr [esi + eax*2]
        movdqa xmm5, xmm4
        movdqa xmm3, xmm6
        psubusb xmm4, xmm2
        psubusb xmm2, xmm5
        psubusb xmm3, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm6
        pmaxub xmm1, xmm2
        pmaxub xmm1, xmm5
        movdqa xmm2, xmm6
        pmaxub xmm1, xmm3
        movdqa xmm4, xmmword ptr [esi + eax]
        movdqa xmm3, xmmword ptr [edi]
        movdqa xmm5, xmm4
        psubusb xmm4, xmm6
        psubusb xmm6, xmm5
        por xmm6, xmm4
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmmword ptr [esp + 0x10], xmm6
        movdqa xmm4, xmm3
        pmaxub xmm1, xmm6
        psubusb xmm3, xmm2
        psubusb xmm2, xmm4
        psubusb xmm1, xmm7
        por xmm2, xmm3
        movdqa xmm7, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        movdqa xmm3, xmm0
        pand xmm2, xmmword ptr [g_75E000]
        movdqa xmm6, xmm5
        psrlw xmm2, 1
        psubusb xmm5, xmm3
        psubusb xmm3, xmm6
        por xmm5, xmm3
        paddusb xmm5, xmm5
        movdqa xmm4, xmmword ptr [esp]
        movdqa xmm3, xmmword ptr [esp + 0x10]
        paddusb xmm5, xmm2
        movdqa xmm2, xmmword ptr [edx]
        psubusb xmm5, xmm7
        psubusb xmm4, xmm2
        psubusb xmm3, xmm2
        por xmm1, xmm5
        pxor xmm7, xmm7
        paddb xmm4, xmm3
        pcmpeqb xmm4, xmm5
        pcmpeqb xmm3, xmm3
        pcmpeqb xmm1, xmm7
        pxor xmm4, xmm3
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esi + eax*2]
        movdqa xmm7, xmmword ptr [edi]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        psubsb xmm2, xmm7
        pxor xmm6, xmm3
        pand xmm2, xmm4
        pxor xmm0, xmm3
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        paddsb xmm1, xmmword ptr [g_75E040]
        paddsb xmm2, xmmword ptr [g_75E030]
        punpckhbw xmm5, xmm2
        punpcklbw xmm2, xmm2
        punpcklbw xmm0, xmm1
        psraw xmm5, 0xb
        punpckhbw xmm1, xmm1
        psraw xmm2, 0xb
        packsswb xmm2, xmm5
        psraw xmm0, 0xb
        psraw xmm1, 0xb
        movdqa xmm5, xmm0
        packsswb xmm0, xmm1
        paddsb xmm6, xmm2
        movdqa xmm2, xmmword ptr [g_75E050]
        paddsw xmm5, xmm2
        paddsw xmm1, xmm2
        psraw xmm5, 1
        psraw xmm1, 1
        packsswb xmm5, xmm1
        movdqa xmm2, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [esi + eax*2]
        pandn xmm4, xmm5
        pxor xmm6, xmm2
        pxor xmm1, xmm2
        psubsb xmm3, xmm0
        paddsb xmm1, xmm4
        pxor xmm3, xmm2
        pxor xmm1, xmm2
        psubsb xmm7, xmm4
        pxor xmm7, xmm2
        movdqa xmmword ptr [esi + eax], xmm6
        movdqa xmmword ptr [esi + eax*2], xmm1
        movdqa xmmword ptr [esi], xmm3
        movdqa xmmword ptr [edi], xmm7
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B3AD8 vp8_loop_filter_horizontal_edge_uv_sse2
__declspec(naked) void vp8_loop_filter_horizontal_edge_uv_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x1c]
        mov eax, dword ptr [ebp + 0xc]
        _emit 0x89
        _emit 0xc1
        neg eax
        mov edx, dword ptr [ebp + 0x14]
        lea esi, [esi + ecx]
        lea edi, [edi + ecx]
        movlps xmm2, qword ptr [esi + ecx*2]
        movlps xmm1, qword ptr [esi + ecx]
        movlps xmm4, qword ptr [esi]
        movlps xmm5, qword ptr [esi + eax]
        movhps xmm2, qword ptr [edi + ecx*2]
        movhps xmm1, qword ptr [edi + ecx]
        movhps xmm4, qword ptr [edi]
        movhps xmm5, qword ptr [edi + eax]
        lea esi, [esi + eax*4]
        lea edi, [edi + eax*4]
        movdqa xmmword ptr [esp + 0x80], xmm1
        movdqa xmmword ptr [esp + 0x70], xmm4
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm6, xmm1
        movdqa xmm3, xmm4
        psubusb xmm1, xmm2
        psubusb xmm2, xmm6
        psubusb xmm4, xmm6
        psubusb xmm6, xmm3
        por xmm4, xmm6
        por xmm1, xmm2
        movdqa xmm0, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm3
        psubusb xmm3, xmm0
        por xmm5, xmm3
        movdqa xmmword ptr [esp], xmm5
        pmaxub xmm1, xmm5
        movlps xmm2, qword ptr [esi + eax]
        movlps xmm4, qword ptr [esi]
        movlps xmm6, qword ptr [esi + ecx]
        movhps xmm2, qword ptr [edi + eax]
        movhps xmm4, qword ptr [edi]
        movhps xmm6, qword ptr [edi + ecx]
        movdqa xmmword ptr [esp + 0x30], xmm4
        movdqa xmmword ptr [esp + 0x40], xmm6
        movdqa xmm5, xmm4
        movdqa xmm3, xmm6
        psubusb xmm4, xmm2
        psubusb xmm2, xmm5
        psubusb xmm3, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm6
        pmaxub xmm1, xmm2
        pmaxub xmm1, xmm5
        movdqa xmm2, xmm6
        pmaxub xmm1, xmm3
        movlps xmm4, qword ptr [esi + ecx*2]
        movhps xmm4, qword ptr [edi + ecx*2]
        movdqa xmm3, xmmword ptr [esp + 0x70]
        movdqa xmm5, xmm4
        psubusb xmm4, xmm6
        psubusb xmm6, xmm5
        por xmm6, xmm4
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmmword ptr [esp + 0x10], xmm6
        movdqa xmm4, xmm3
        pmaxub xmm1, xmm6
        psubusb xmm3, xmm2
        psubusb xmm2, xmm4
        psubusb xmm1, xmm7
        por xmm2, xmm3
        movdqa xmm7, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        movdqa xmm3, xmm0
        pand xmm2, xmmword ptr [g_75E000]
        movdqa xmm6, xmm5
        psrlw xmm2, 1
        psubusb xmm5, xmm3
        psubusb xmm3, xmm6
        por xmm5, xmm3
        paddusb xmm5, xmm5
        movdqa xmm4, xmmword ptr [esp]
        movdqa xmm3, xmmword ptr [esp + 0x10]
        paddusb xmm5, xmm2
        movdqa xmm2, xmmword ptr [edx]
        psubusb xmm5, xmm7
        psubusb xmm4, xmm2
        psubusb xmm3, xmm2
        por xmm1, xmm5
        pxor xmm7, xmm7
        paddb xmm4, xmm3
        pcmpeqb xmm4, xmm5
        pcmpeqb xmm3, xmm3
        pcmpeqb xmm1, xmm7
        pxor xmm4, xmm3
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        psubsb xmm2, xmm7
        pxor xmm6, xmm3
        pand xmm2, xmm4
        pxor xmm0, xmm3
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        paddsb xmm1, xmmword ptr [g_75E040]
        paddsb xmm2, xmmword ptr [g_75E030]
        punpckhbw xmm5, xmm2
        punpcklbw xmm2, xmm2
        punpcklbw xmm0, xmm1
        psraw xmm5, 0xb
        punpckhbw xmm1, xmm1
        psraw xmm2, 0xb
        packsswb xmm2, xmm5
        psraw xmm0, 0xb
        psraw xmm1, 0xb
        movdqa xmm5, xmm0
        packsswb xmm0, xmm1
        paddsb xmm6, xmm2
        movdqa xmm2, xmmword ptr [g_75E050]
        paddsw xmm5, xmm2
        paddsw xmm1, xmm2
        psraw xmm5, 1
        psraw xmm1, 1
        packsswb xmm5, xmm1
        movdqa xmm2, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [esp + 0x40]
        lea esi, [esi + ecx*2]
        lea edi, [edi + ecx*2]
        pandn xmm4, xmm5
        pxor xmm6, xmm2
        pxor xmm1, xmm2
        psubsb xmm3, xmm0
        paddsb xmm1, xmm4
        pxor xmm3, xmm2
        pxor xmm1, xmm2
        psubsb xmm7, xmm4
        pxor xmm7, xmm2
        movq qword ptr [esi], xmm6
        movhps qword ptr [edi], xmm6
        movq qword ptr [esi + eax], xmm1
        movhps qword ptr [edi + eax], xmm1
        movq qword ptr [esi + ecx], xmm3
        movhps qword ptr [edi + ecx], xmm3
        movq qword ptr [esi + ecx*2], xmm7
        movhps qword ptr [edi + ecx*2], xmm7
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B3D7A vp8_mbloop_filter_vertical_edge_sse2
__declspec(naked) void vp8_mbloop_filter_vertical_edge_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea edi, [esi + eax]
        movdqa xmm2, xmmword ptr [edi + eax*2]
        movdqa xmm1, xmmword ptr [esi + eax*2]
        movdqa xmm4, xmmword ptr [esi + eax]
        movdqa xmm5, xmmword ptr [esi]
        neg eax
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm6, xmm1
        movdqa xmm3, xmm4
        psubusb xmm1, xmm2
        psubusb xmm2, xmm6
        psubusb xmm4, xmm6
        psubusb xmm6, xmm3
        por xmm4, xmm6
        por xmm1, xmm2
        movdqa xmm0, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm3
        psubusb xmm3, xmm0
        por xmm5, xmm3
        movdqa xmmword ptr [esp], xmm5
        pmaxub xmm1, xmm5
        movdqa xmm2, xmmword ptr [esi + eax*4]
        movdqa xmm4, xmmword ptr [edi + eax*4]
        movdqa xmm6, xmmword ptr [esi + eax*2]
        movdqa xmm5, xmm4
        movdqa xmm3, xmm6
        psubusb xmm4, xmm2
        psubusb xmm2, xmm5
        psubusb xmm3, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm6
        pmaxub xmm1, xmm2
        pmaxub xmm1, xmm5
        movdqa xmm2, xmm6
        pmaxub xmm1, xmm3
        movdqa xmm4, xmmword ptr [esi + eax]
        movdqa xmm3, xmmword ptr [edi]
        movdqa xmm5, xmm4
        psubusb xmm4, xmm6
        psubusb xmm6, xmm5
        por xmm6, xmm4
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmmword ptr [esp + 0x10], xmm6
        movdqa xmm4, xmm3
        pmaxub xmm1, xmm6
        psubusb xmm3, xmm2
        psubusb xmm2, xmm4
        psubusb xmm1, xmm7
        por xmm2, xmm3
        movdqa xmm7, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        movdqa xmm3, xmm0
        pand xmm2, xmmword ptr [g_75E000]
        movdqa xmm6, xmm5
        psrlw xmm2, 1
        psubusb xmm5, xmm3
        psubusb xmm3, xmm6
        por xmm5, xmm3
        paddusb xmm5, xmm5
        movdqa xmm4, xmmword ptr [esp]
        movdqa xmm3, xmmword ptr [esp + 0x10]
        paddusb xmm5, xmm2
        movdqa xmm2, xmmword ptr [edx]
        psubusb xmm5, xmm7
        psubusb xmm4, xmm2
        psubusb xmm3, xmm2
        por xmm1, xmm5
        pxor xmm7, xmm7
        paddb xmm4, xmm3
        pcmpeqb xmm4, xmm5
        pcmpeqb xmm3, xmm3
        pcmpeqb xmm1, xmm7
        pxor xmm4, xmm3
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esi + eax*2]
        movdqa xmm7, xmmword ptr [edi]
        _emit 0x89
        _emit 0xc1
        neg ecx
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        pxor xmm6, xmm3
        pxor xmm0, xmm3
        psubsb xmm2, xmm7
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        pand xmm2, xmm4
        pxor xmm0, xmm0
        pandn xmm4, xmm1
        pxor xmm1, xmm1
        punpcklbw xmm0, xmm4
        punpckhbw xmm1, xmm4
        movdqa xmm5, xmm2
        movdqa xmm4, xmmword ptr [g_75E060]
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm2, xmmword ptr [g_75E040]
        pmulhw xmm1, xmm4
        pmulhw xmm0, xmm4
        punpckhbw xmm7, xmm5
        punpcklbw xmm5, xmm5
        psraw xmm7, 0xb
        psraw xmm5, 0xb
        punpckhbw xmm4, xmm2
        punpcklbw xmm2, xmm2
        psraw xmm4, 0xb
        packsswb xmm5, xmm7
        psraw xmm2, 0xb
        packsswb xmm2, xmm4
        paddsb xmm6, xmm5
        psubsb xmm3, xmm2
        movdqa xmm7, xmm1
        movdqa xmm4, xmmword ptr [g_75E070]
        movdqa xmm5, xmm0
        movdqa xmm2, xmm5
        paddw xmm0, xmm4
        paddw xmm1, xmm4
        movdqa xmm4, xmm7
        paddw xmm5, xmm5
        paddw xmm7, xmm7
        paddw xmm5, xmm0
        paddw xmm7, xmm1
        paddw xmm2, xmm0
        psraw xmm0, 7
        paddw xmm4, xmm1
        psraw xmm1, 7
        psraw xmm2, 7
        packsswb xmm0, xmm1
        psraw xmm4, 7
        psraw xmm5, 7
        psraw xmm7, 7
        packsswb xmm5, xmm7
        packsswb xmm2, xmm4
        movdqa xmm7, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [edi]
        movdqa xmm4, xmmword ptr [esi + eax*2]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        psubsb xmm3, xmm5
        paddsb xmm6, xmm5
        psubsb xmm1, xmm2
        paddsb xmm4, xmm2
        movdqa xmm2, xmmword ptr [edi + eax*4]
        movdqa xmm5, xmmword ptr [edi + ecx]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        paddsb xmm2, xmm0
        psubsb xmm5, xmm0
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        pxor xmm3, xmm7
        pxor xmm6, xmm7
        movdqa xmmword ptr [edi + ecx], xmm5
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [esi], xmm3
        movdqa xmmword ptr [esi + eax], xmm6
        movdqa xmmword ptr [esi + eax*2], xmm4
        movdqa xmmword ptr [edi + eax*4], xmm2
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B4066 vp8_mbloop_filter_vertical_edge_uv_sse2
__declspec(naked) void vp8_mbloop_filter_vertical_edge_uv_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x1c]
        mov eax, dword ptr [ebp + 0xc]
        _emit 0x89
        _emit 0xc1
        neg eax
        mov edx, dword ptr [ebp + 0x14]
        lea esi, [esi + ecx]
        lea edi, [edi + ecx]
        movlps xmm2, qword ptr [esi + ecx*2]
        movlps xmm1, qword ptr [esi + ecx]
        movlps xmm4, qword ptr [esi]
        movlps xmm5, qword ptr [esi + eax]
        movhps xmm2, qword ptr [edi + ecx*2]
        movhps xmm1, qword ptr [edi + ecx]
        movhps xmm4, qword ptr [edi]
        movhps xmm5, qword ptr [edi + eax]
        lea esi, [esi + eax*4]
        lea edi, [edi + eax*4]
        movdqa xmmword ptr [esp + 0x80], xmm1
        movdqa xmmword ptr [esp + 0x70], xmm4
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm6, xmm1
        movdqa xmm3, xmm4
        psubusb xmm1, xmm2
        psubusb xmm2, xmm6
        psubusb xmm4, xmm6
        psubusb xmm6, xmm3
        por xmm4, xmm6
        por xmm1, xmm2
        movdqa xmm0, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm3
        psubusb xmm3, xmm0
        por xmm5, xmm3
        movdqa xmmword ptr [esp], xmm5
        pmaxub xmm1, xmm5
        movlps xmm2, qword ptr [esi + eax]
        movlps xmm4, qword ptr [esi]
        movlps xmm6, qword ptr [esi + ecx]
        movhps xmm2, qword ptr [edi + eax]
        movhps xmm4, qword ptr [edi]
        movhps xmm6, qword ptr [edi + ecx]
        movdqa xmmword ptr [esp + 0x30], xmm4
        movdqa xmmword ptr [esp + 0x40], xmm6
        movdqa xmm5, xmm4
        movdqa xmm3, xmm6
        psubusb xmm4, xmm2
        psubusb xmm2, xmm5
        psubusb xmm3, xmm5
        pmaxub xmm1, xmm4
        psubusb xmm5, xmm6
        pmaxub xmm1, xmm2
        pmaxub xmm1, xmm5
        movdqa xmm2, xmm6
        pmaxub xmm1, xmm3
        movlps xmm4, qword ptr [esi + ecx*2]
        movhps xmm4, qword ptr [edi + ecx*2]
        movdqa xmm3, xmmword ptr [esp + 0x70]
        movdqa xmm5, xmm4
        psubusb xmm4, xmm6
        psubusb xmm6, xmm5
        por xmm6, xmm4
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmmword ptr [esp + 0x10], xmm6
        movdqa xmm4, xmm3
        pmaxub xmm1, xmm6
        psubusb xmm3, xmm2
        psubusb xmm2, xmm4
        psubusb xmm1, xmm7
        por xmm2, xmm3
        movdqa xmm7, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        movdqa xmm3, xmm0
        pand xmm2, xmmword ptr [g_75E000]
        movdqa xmm6, xmm5
        psrlw xmm2, 1
        psubusb xmm5, xmm3
        psubusb xmm3, xmm6
        por xmm5, xmm3
        paddusb xmm5, xmm5
        movdqa xmm4, xmmword ptr [esp]
        movdqa xmm3, xmmword ptr [esp + 0x10]
        paddusb xmm5, xmm2
        movdqa xmm2, xmmword ptr [edx]
        psubusb xmm5, xmm7
        psubusb xmm4, xmm2
        psubusb xmm3, xmm2
        por xmm1, xmm5
        pxor xmm7, xmm7
        paddb xmm4, xmm3
        pcmpeqb xmm4, xmm5
        pcmpeqb xmm3, xmm3
        pcmpeqb xmm1, xmm7
        pxor xmm4, xmm3
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        pxor xmm6, xmm3
        pxor xmm0, xmm3
        psubsb xmm2, xmm7
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        pand xmm2, xmm4
        pxor xmm0, xmm0
        pandn xmm4, xmm1
        pxor xmm1, xmm1
        punpcklbw xmm0, xmm4
        punpckhbw xmm1, xmm4
        movdqa xmm5, xmm2
        movdqa xmm4, xmmword ptr [g_75E060]
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm2, xmmword ptr [g_75E040]
        pmulhw xmm1, xmm4
        pmulhw xmm0, xmm4
        punpckhbw xmm7, xmm5
        punpcklbw xmm5, xmm5
        psraw xmm7, 0xb
        psraw xmm5, 0xb
        punpckhbw xmm4, xmm2
        punpcklbw xmm2, xmm2
        psraw xmm4, 0xb
        packsswb xmm5, xmm7
        psraw xmm2, 0xb
        packsswb xmm2, xmm4
        paddsb xmm6, xmm5
        psubsb xmm3, xmm2
        movdqa xmm7, xmm1
        movdqa xmm4, xmmword ptr [g_75E070]
        movdqa xmm5, xmm0
        movdqa xmm2, xmm5
        paddw xmm0, xmm4
        paddw xmm1, xmm4
        movdqa xmm4, xmm7
        paddw xmm5, xmm5
        paddw xmm7, xmm7
        paddw xmm5, xmm0
        paddw xmm7, xmm1
        paddw xmm2, xmm0
        psraw xmm0, 7
        paddw xmm4, xmm1
        psraw xmm1, 7
        psraw xmm2, 7
        packsswb xmm0, xmm1
        psraw xmm4, 7
        psraw xmm5, 7
        psraw xmm7, 7
        packsswb xmm5, xmm7
        packsswb xmm2, xmm4
        movdqa xmm7, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [esp + 0x70]
        movdqa xmm4, xmmword ptr [esp + 0x40]
        lea esi, [esi + ecx*2]
        lea edi, [edi + ecx*2]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        psubsb xmm3, xmm5
        paddsb xmm6, xmm5
        psubsb xmm1, xmm2
        paddsb xmm4, xmm2
        movdqa xmm2, xmmword ptr [esp + 0x30]
        movdqa xmm5, xmmword ptr [esp + 0x80]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        paddsb xmm2, xmm0
        psubsb xmm5, xmm0
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        pxor xmm3, xmm7
        pxor xmm6, xmm7
        movq qword ptr [esi], xmm6
        movhps qword ptr [edi], xmm6
        movq qword ptr [esi + ecx], xmm3
        movhps qword ptr [edi + ecx], xmm3
        lea edx, [ecx + ecx*2]
        movq qword ptr [esi + ecx*2], xmm1
        movhps qword ptr [edi + ecx*2], xmm1
        movq qword ptr [esi + eax], xmm4
        movhps qword ptr [edi + eax], xmm4
        movq qword ptr [esi + eax*2], xmm2
        movhps qword ptr [edi + eax*2], xmm2
        movq qword ptr [esi + edx], xmm5
        movhps qword ptr [edi + edx], xmm5
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B43BA vp8_loop_filter_vertical_edge_sse2
__declspec(naked) void vp8_loop_filter_vertical_edge_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        lea ecx, [eax + eax*2]
        movq xmm4, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm7, qword ptr [edi + eax*2]
        movq xmm5, qword ptr [esi + eax*4]
        movq xmm2, qword ptr [edi + eax*4]
        punpcklbw xmm4, xmm1
        movq xmm1, qword ptr [edi + ecx*2]
        movdqa xmm3, xmm4
        punpcklbw xmm0, xmm7
        movq xmm7, qword ptr [esi + ecx*2]
        punpcklbw xmm5, xmm2
        lea esi, [esi + eax*8]
        lea edi, [edi + eax*8]
        movdqa xmm6, xmm5
        punpcklbw xmm7, xmm1
        punpcklwd xmm5, xmm7
        punpckhwd xmm6, xmm7
        punpcklwd xmm3, xmm0
        movdqa xmm2, xmm3
        punpckhwd xmm4, xmm0
        movdqa xmm7, xmm4
        punpckhdq xmm3, xmm5
        punpckhdq xmm7, xmm6
        punpckldq xmm4, xmm6
        punpckldq xmm2, xmm5
        movdqa xmmword ptr [esp], xmm2
        movq xmm2, qword ptr [esi]
        movq xmm6, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm5, qword ptr [edi + eax*2]
        movq xmm1, qword ptr [esi + eax*4]
        punpcklbw xmm2, xmm6
        movq xmm6, qword ptr [edi + eax*4]
        punpcklbw xmm0, xmm5
        movq xmm5, qword ptr [esi + ecx*2]
        punpcklbw xmm1, xmm6
        movq xmm6, qword ptr [edi + ecx*2]
        punpcklbw xmm5, xmm6
        movdqa xmm6, xmm1
        punpckhwd xmm6, xmm5
        punpcklwd xmm1, xmm5
        movdqa xmm5, xmm2
        punpcklwd xmm5, xmm0
        punpckhwd xmm2, xmm0
        movdqa xmm0, xmm5
        punpckldq xmm0, xmm1
        punpckhdq xmm5, xmm1
        movdqa xmm1, xmm2
        punpckldq xmm1, xmm6
        punpckhdq xmm2, xmm6
        movdqa xmm6, xmm7
        punpcklqdq xmm6, xmm2
        punpckhqdq xmm7, xmm2
        movdqa xmm2, xmm3
        punpckhqdq xmm3, xmm5
        punpcklqdq xmm2, xmm5
        movdqa xmmword ptr [esp + 0x40], xmm2
        movdqa xmm5, xmm4
        punpcklqdq xmm4, xmm1
        movdqa xmmword ptr [esp + 0x50], xmm3
        punpckhqdq xmm5, xmm1
        movdqa xmmword ptr [esp + 0x60], xmm4
        movdqa xmmword ptr [esp + 0x70], xmm5
        movdqa xmm1, xmmword ptr [esp]
        movdqa xmm2, xmm1
        punpckhqdq xmm1, xmm0
        punpcklqdq xmm2, xmm0
        movdqa xmm0, xmm6
        psubusb xmm0, xmm7
        psubusb xmm7, xmm6
        movdqa xmm4, xmm5
        por xmm7, xmm0
        psubusb xmm4, xmm6
        movdqa xmm0, xmm1
        psubusb xmm6, xmm5
        por xmm6, xmm4
        psubusb xmm0, xmm2
        psubusb xmm2, xmm1
        por xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x40]
        pmaxub xmm0, xmm7
        movdqa xmm2, xmm5
        psubusb xmm5, xmm1
        psubusb xmm1, xmm2
        movdqa xmm7, xmm3
        psubusb xmm7, xmm2
        por xmm1, xmm5
        pmaxub xmm0, xmm6
        pmaxub xmm0, xmm1
        movdqa xmm1, xmm2
        psubusb xmm2, xmm3
        por xmm2, xmm7
        pmaxub xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm6, xmm5
        movdqa xmm4, xmm7
        psubusb xmm5, xmm7
        psubusb xmm7, xmm6
        por xmm7, xmm5
        pmaxub xmm0, xmm7
        psubusb xmm0, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm5, xmm4
        psubusb xmm5, xmm1
        psubusb xmm1, xmm4
        por xmm5, xmm1
        movdqa xmm1, xmm3
        pand xmm5, xmmword ptr [g_75E000]
        psubusb xmm1, xmm6
        movdqa xmm4, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        psrlw xmm5, 1
        psubusb xmm6, xmm3
        por xmm1, xmm6
        paddusb xmm1, xmm1
        movdqa xmm3, xmmword ptr [edx]
        paddusb xmm1, xmm5
        psubusb xmm2, xmm3
        psubusb xmm7, xmm3
        psubusb xmm1, xmm4
        por xmm2, xmm7
        por xmm1, xmm0
        pcmpeqb xmm2, xmm0
        pxor xmm0, xmm0
        pcmpeqb xmm4, xmm4
        pcmpeqb xmm1, xmm0
        pxor xmm4, xmm2
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm0, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        psubsb xmm2, xmm7
        pxor xmm6, xmm3
        pand xmm2, xmm4
        pxor xmm0, xmm3
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        paddsb xmm1, xmmword ptr [g_75E040]
        paddsb xmm2, xmmword ptr [g_75E030]
        punpckhbw xmm5, xmm2
        punpcklbw xmm2, xmm2
        punpcklbw xmm0, xmm1
        psraw xmm5, 0xb
        punpckhbw xmm1, xmm1
        psraw xmm2, 0xb
        packsswb xmm2, xmm5
        psraw xmm0, 0xb
        psraw xmm1, 0xb
        movdqa xmm5, xmm0
        packsswb xmm0, xmm1
        paddsb xmm6, xmm2
        movdqa xmm2, xmmword ptr [g_75E050]
        paddsw xmm5, xmm2
        paddsw xmm1, xmm2
        psraw xmm5, 1
        psraw xmm1, 1
        packsswb xmm5, xmm1
        movdqa xmm2, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [esp + 0x40]
        pandn xmm4, xmm5
        pxor xmm6, xmm2
        pxor xmm1, xmm2
        psubsb xmm3, xmm0
        paddsb xmm1, xmm4
        pxor xmm3, xmm2
        pxor xmm1, xmm2
        psubsb xmm7, xmm4
        pxor xmm7, xmm2
        movdqa xmm2, xmm1
        punpcklbw xmm2, xmm6
        movdqa xmm4, xmm3
        punpckhbw xmm1, xmm6
        punpcklbw xmm4, xmm7
        punpckhbw xmm3, xmm7
        movdqa xmm6, xmm2
        punpcklwd xmm2, xmm4
        punpckhwd xmm6, xmm4
        movdqa xmm5, xmm1
        punpcklwd xmm1, xmm3
        punpckhwd xmm5, xmm3
        lea edx, [eax]
        neg edx
        movd dword ptr [esi + 2], xmm1
        movd dword ptr [esi + eax*4 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [edi + 2], xmm1
        movd dword ptr [edi + eax*4 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [esi + eax*2 + 2], xmm1
        movd dword ptr [esi + ecx*2 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [edi + eax*2 + 2], xmm1
        movd dword ptr [edi + ecx*2 + 2], xmm5
        lea esi, [esi + edx*8]
        lea edi, [edi + edx*8]
        movd dword ptr [esi + 2], xmm2
        movd dword ptr [esi + eax*4 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [edi + 2], xmm2
        movd dword ptr [edi + eax*4 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [esi + eax*2 + 2], xmm2
        movd dword ptr [esi + ecx*2 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [edi + eax*2 + 2], xmm2
        movd dword ptr [edi + ecx*2 + 2], xmm6
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B47C7 vp8_loop_filter_vertical_edge_uv_sse2
__declspec(naked) void vp8_loop_filter_vertical_edge_uv_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        lea ecx, [eax + eax*2]
        movq xmm4, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm7, qword ptr [edi + eax*2]
        movq xmm5, qword ptr [esi + eax*4]
        movq xmm2, qword ptr [edi + eax*4]
        punpcklbw xmm4, xmm1
        movq xmm1, qword ptr [edi + ecx*2]
        movdqa xmm3, xmm4
        punpcklbw xmm0, xmm7
        movq xmm7, qword ptr [esi + ecx*2]
        punpcklbw xmm5, xmm2
        mov esi, dword ptr [ebp + 0x1c]
        movdqa xmm6, xmm5
        punpcklbw xmm7, xmm1
        punpcklwd xmm5, xmm7
        punpckhwd xmm6, xmm7
        punpcklwd xmm3, xmm0
        lea edi, [esi + eax - 4]
        lea esi, [esi - 4]
        movdqa xmm2, xmm3
        punpckhwd xmm4, xmm0
        movdqa xmm7, xmm4
        punpckhdq xmm3, xmm5
        punpckhdq xmm7, xmm6
        punpckldq xmm4, xmm6
        punpckldq xmm2, xmm5
        movdqa xmmword ptr [esp], xmm2
        movq xmm2, qword ptr [esi]
        movq xmm6, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm5, qword ptr [edi + eax*2]
        movq xmm1, qword ptr [esi + eax*4]
        punpcklbw xmm2, xmm6
        movq xmm6, qword ptr [edi + eax*4]
        punpcklbw xmm0, xmm5
        movq xmm5, qword ptr [esi + ecx*2]
        punpcklbw xmm1, xmm6
        movq xmm6, qword ptr [edi + ecx*2]
        punpcklbw xmm5, xmm6
        movdqa xmm6, xmm1
        punpckhwd xmm6, xmm5
        punpcklwd xmm1, xmm5
        movdqa xmm5, xmm2
        punpcklwd xmm5, xmm0
        punpckhwd xmm2, xmm0
        movdqa xmm0, xmm5
        punpckldq xmm0, xmm1
        punpckhdq xmm5, xmm1
        movdqa xmm1, xmm2
        punpckldq xmm1, xmm6
        punpckhdq xmm2, xmm6
        movdqa xmm6, xmm7
        punpcklqdq xmm6, xmm2
        punpckhqdq xmm7, xmm2
        movdqa xmm2, xmm3
        punpckhqdq xmm3, xmm5
        punpcklqdq xmm2, xmm5
        movdqa xmmword ptr [esp + 0x40], xmm2
        movdqa xmm5, xmm4
        punpcklqdq xmm4, xmm1
        movdqa xmmword ptr [esp + 0x50], xmm3
        punpckhqdq xmm5, xmm1
        movdqa xmmword ptr [esp + 0x60], xmm4
        movdqa xmmword ptr [esp + 0x70], xmm5
        movdqa xmm1, xmmword ptr [esp]
        movdqa xmm2, xmm1
        punpckhqdq xmm1, xmm0
        punpcklqdq xmm2, xmm0
        movdqa xmm0, xmm6
        psubusb xmm0, xmm7
        psubusb xmm7, xmm6
        movdqa xmm4, xmm5
        por xmm7, xmm0
        psubusb xmm4, xmm6
        movdqa xmm0, xmm1
        psubusb xmm6, xmm5
        por xmm6, xmm4
        psubusb xmm0, xmm2
        psubusb xmm2, xmm1
        por xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x40]
        pmaxub xmm0, xmm7
        movdqa xmm2, xmm5
        psubusb xmm5, xmm1
        psubusb xmm1, xmm2
        movdqa xmm7, xmm3
        psubusb xmm7, xmm2
        por xmm1, xmm5
        pmaxub xmm0, xmm6
        pmaxub xmm0, xmm1
        movdqa xmm1, xmm2
        psubusb xmm2, xmm3
        por xmm2, xmm7
        pmaxub xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm6, xmm5
        movdqa xmm4, xmm7
        psubusb xmm5, xmm7
        psubusb xmm7, xmm6
        por xmm7, xmm5
        pmaxub xmm0, xmm7
        psubusb xmm0, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm5, xmm4
        psubusb xmm5, xmm1
        psubusb xmm1, xmm4
        por xmm5, xmm1
        movdqa xmm1, xmm3
        pand xmm5, xmmword ptr [g_75E000]
        psubusb xmm1, xmm6
        movdqa xmm4, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        psrlw xmm5, 1
        psubusb xmm6, xmm3
        por xmm1, xmm6
        paddusb xmm1, xmm1
        movdqa xmm3, xmmword ptr [edx]
        paddusb xmm1, xmm5
        psubusb xmm2, xmm3
        psubusb xmm7, xmm3
        psubusb xmm1, xmm4
        por xmm2, xmm7
        por xmm1, xmm0
        pcmpeqb xmm2, xmm0
        pxor xmm0, xmm0
        pcmpeqb xmm4, xmm4
        pcmpeqb xmm1, xmm0
        pxor xmm4, xmm2
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm0, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        psubsb xmm2, xmm7
        pxor xmm6, xmm3
        pand xmm2, xmm4
        pxor xmm0, xmm3
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        paddsb xmm1, xmmword ptr [g_75E040]
        paddsb xmm2, xmmword ptr [g_75E030]
        punpckhbw xmm5, xmm2
        punpcklbw xmm2, xmm2
        punpcklbw xmm0, xmm1
        psraw xmm5, 0xb
        punpckhbw xmm1, xmm1
        psraw xmm2, 0xb
        packsswb xmm2, xmm5
        psraw xmm0, 0xb
        psraw xmm1, 0xb
        movdqa xmm5, xmm0
        packsswb xmm0, xmm1
        paddsb xmm6, xmm2
        movdqa xmm2, xmmword ptr [g_75E050]
        paddsw xmm5, xmm2
        paddsw xmm1, xmm2
        psraw xmm5, 1
        psraw xmm1, 1
        packsswb xmm5, xmm1
        movdqa xmm2, xmmword ptr [g_75E010]
        movdqa xmm1, xmmword ptr [esp + 0x40]
        pandn xmm4, xmm5
        pxor xmm6, xmm2
        pxor xmm1, xmm2
        psubsb xmm3, xmm0
        paddsb xmm1, xmm4
        pxor xmm3, xmm2
        pxor xmm1, xmm2
        psubsb xmm7, xmm4
        pxor xmm7, xmm2
        movdqa xmm2, xmm1
        punpcklbw xmm2, xmm6
        movdqa xmm4, xmm3
        punpckhbw xmm1, xmm6
        punpcklbw xmm4, xmm7
        punpckhbw xmm3, xmm7
        movdqa xmm6, xmm2
        punpcklwd xmm2, xmm4
        punpckhwd xmm6, xmm4
        movdqa xmm5, xmm1
        punpcklwd xmm1, xmm3
        punpckhwd xmm5, xmm3
        lea edi, [esi + eax]
        movd dword ptr [esi + 2], xmm1
        movd dword ptr [esi + eax*4 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [edi + 2], xmm1
        movd dword ptr [edi + eax*4 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [esi + eax*2 + 2], xmm1
        movd dword ptr [esi + ecx*2 + 2], xmm5
        psrldq xmm1, 4
        psrldq xmm5, 4
        movd dword ptr [edi + eax*2 + 2], xmm1
        movd dword ptr [edi + ecx*2 + 2], xmm5
        mov esi, dword ptr [ebp + 8]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        movd dword ptr [esi + 2], xmm2
        movd dword ptr [esi + eax*4 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [edi + 2], xmm2
        movd dword ptr [edi + eax*4 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [esi + eax*2 + 2], xmm2
        movd dword ptr [esi + ecx*2 + 2], xmm6
        psrldq xmm2, 4
        psrldq xmm6, 4
        movd dword ptr [edi + eax*2 + 2], xmm2
        movd dword ptr [edi + ecx*2 + 2], xmm6
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B4BDA vp8_mbloop_filter_horizontal_edge_sse2
__declspec(naked) void vp8_mbloop_filter_horizontal_edge_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        lea ecx, [eax + eax*2]
        movq xmm4, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm7, qword ptr [edi + eax*2]
        movq xmm5, qword ptr [esi + eax*4]
        movq xmm2, qword ptr [edi + eax*4]
        punpcklbw xmm4, xmm1
        movq xmm1, qword ptr [edi + ecx*2]
        movdqa xmm3, xmm4
        punpcklbw xmm0, xmm7
        movq xmm7, qword ptr [esi + ecx*2]
        punpcklbw xmm5, xmm2
        lea esi, [esi + eax*8]
        lea edi, [edi + eax*8]
        movdqa xmm6, xmm5
        punpcklbw xmm7, xmm1
        punpcklwd xmm5, xmm7
        punpckhwd xmm6, xmm7
        punpcklwd xmm3, xmm0
        movdqa xmm2, xmm3
        punpckhwd xmm4, xmm0
        movdqa xmm7, xmm4
        punpckhdq xmm3, xmm5
        punpckhdq xmm7, xmm6
        punpckldq xmm4, xmm6
        punpckldq xmm2, xmm5
        movdqa xmmword ptr [esp], xmm2
        movq xmm2, qword ptr [esi]
        movq xmm6, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm5, qword ptr [edi + eax*2]
        movq xmm1, qword ptr [esi + eax*4]
        punpcklbw xmm2, xmm6
        movq xmm6, qword ptr [edi + eax*4]
        punpcklbw xmm0, xmm5
        movq xmm5, qword ptr [esi + ecx*2]
        punpcklbw xmm1, xmm6
        movq xmm6, qword ptr [edi + ecx*2]
        punpcklbw xmm5, xmm6
        movdqa xmm6, xmm1
        punpckhwd xmm6, xmm5
        punpcklwd xmm1, xmm5
        movdqa xmm5, xmm2
        punpcklwd xmm5, xmm0
        punpckhwd xmm2, xmm0
        movdqa xmm0, xmm5
        punpckldq xmm0, xmm1
        punpckhdq xmm5, xmm1
        movdqa xmm1, xmm2
        punpckldq xmm1, xmm6
        punpckhdq xmm2, xmm6
        movdqa xmm6, xmm7
        punpcklqdq xmm6, xmm2
        punpckhqdq xmm7, xmm2
        movdqa xmmword ptr [esp + 0x90], xmm7
        movdqa xmmword ptr [esp + 0x80], xmm6
        movdqa xmm2, xmm3
        punpckhqdq xmm3, xmm5
        punpcklqdq xmm2, xmm5
        movdqa xmmword ptr [esp + 0x40], xmm2
        movdqa xmm5, xmm4
        punpcklqdq xmm4, xmm1
        movdqa xmmword ptr [esp + 0x50], xmm3
        punpckhqdq xmm5, xmm1
        movdqa xmmword ptr [esp + 0x60], xmm4
        movdqa xmmword ptr [esp + 0x70], xmm5
        movdqa xmm1, xmmword ptr [esp]
        movdqa xmm2, xmm1
        punpckhqdq xmm1, xmm0
        punpcklqdq xmm2, xmm0
        movdqa xmmword ptr [esp + 0x30], xmm1
        movdqa xmmword ptr [esp + 0x20], xmm2
        movdqa xmm0, xmm6
        psubusb xmm0, xmm7
        psubusb xmm7, xmm6
        movdqa xmm4, xmm5
        por xmm7, xmm0
        psubusb xmm4, xmm6
        movdqa xmm0, xmm1
        psubusb xmm6, xmm5
        por xmm6, xmm4
        psubusb xmm0, xmm2
        psubusb xmm2, xmm1
        por xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x40]
        pmaxub xmm0, xmm7
        movdqa xmm2, xmm5
        psubusb xmm5, xmm1
        psubusb xmm1, xmm2
        movdqa xmm7, xmm3
        psubusb xmm7, xmm2
        por xmm1, xmm5
        pmaxub xmm0, xmm6
        pmaxub xmm0, xmm1
        movdqa xmm1, xmm2
        psubusb xmm2, xmm3
        por xmm2, xmm7
        pmaxub xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm6, xmm5
        movdqa xmm4, xmm7
        psubusb xmm5, xmm7
        psubusb xmm7, xmm6
        por xmm7, xmm5
        pmaxub xmm0, xmm7
        psubusb xmm0, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm5, xmm4
        psubusb xmm5, xmm1
        psubusb xmm1, xmm4
        por xmm5, xmm1
        movdqa xmm1, xmm3
        pand xmm5, xmmword ptr [g_75E000]
        psubusb xmm1, xmm6
        movdqa xmm4, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        psrlw xmm5, 1
        psubusb xmm6, xmm3
        por xmm1, xmm6
        paddusb xmm1, xmm1
        movdqa xmm3, xmmword ptr [edx]
        paddusb xmm1, xmm5
        psubusb xmm2, xmm3
        psubusb xmm7, xmm3
        psubusb xmm1, xmm4
        por xmm2, xmm7
        por xmm1, xmm0
        pcmpeqb xmm2, xmm0
        pxor xmm0, xmm0
        pcmpeqb xmm4, xmm4
        pcmpeqb xmm1, xmm0
        pxor xmm4, xmm2
        neg eax
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm0, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        pxor xmm6, xmm3
        pxor xmm0, xmm3
        psubsb xmm2, xmm7
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        pand xmm2, xmm4
        pxor xmm0, xmm0
        pandn xmm4, xmm1
        pxor xmm1, xmm1
        punpcklbw xmm0, xmm4
        punpckhbw xmm1, xmm4
        movdqa xmm5, xmm2
        movdqa xmm4, xmmword ptr [g_75E060]
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm2, xmmword ptr [g_75E040]
        pmulhw xmm1, xmm4
        pmulhw xmm0, xmm4
        punpckhbw xmm7, xmm5
        punpcklbw xmm5, xmm5
        psraw xmm7, 0xb
        psraw xmm5, 0xb
        punpckhbw xmm4, xmm2
        punpcklbw xmm2, xmm2
        psraw xmm4, 0xb
        packsswb xmm5, xmm7
        psraw xmm2, 0xb
        packsswb xmm2, xmm4
        paddsb xmm6, xmm5
        psubsb xmm3, xmm2
        movdqa xmm7, xmm1
        movdqa xmm4, xmmword ptr [g_75E070]
        movdqa xmm5, xmm0
        movdqa xmm2, xmm5
        paddw xmm0, xmm4
        paddw xmm1, xmm4
        movdqa xmm4, xmm7
        paddw xmm5, xmm5
        paddw xmm7, xmm7
        paddw xmm5, xmm0
        paddw xmm7, xmm1
        paddw xmm2, xmm0
        psraw xmm0, 7
        paddw xmm4, xmm1
        psraw xmm1, 7
        psraw xmm2, 7
        packsswb xmm0, xmm1
        psraw xmm4, 7
        psraw xmm5, 7
        psraw xmm7, 7
        packsswb xmm5, xmm7
        packsswb xmm2, xmm4
        movdqa xmm7, xmmword ptr [g_75E010]
        movdqa xmm4, xmmword ptr [esp + 0x40]
        movdqa xmm1, xmmword ptr [esp + 0x70]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        psubsb xmm3, xmm5
        paddsb xmm6, xmm5
        psubsb xmm1, xmm2
        paddsb xmm4, xmm2
        movdqa xmm2, xmmword ptr [esp + 0x30]
        movdqa xmm5, xmmword ptr [esp + 0x80]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        paddsb xmm2, xmm0
        psubsb xmm5, xmm0
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        pxor xmm3, xmm7
        pxor xmm6, xmm7
        movdqa xmmword ptr [esp + 0x40], xmm4
        movdqa xmmword ptr [esp + 0x50], xmm6
        movdqa xmmword ptr [esp + 0x60], xmm3
        movdqa xmmword ptr [esp + 0x70], xmm1
        lea esi, [esi + eax*8]
        lea edi, [edi + eax*8]
        movdqa xmm0, xmmword ptr [esp + 0x20]
        movdqa xmm1, xmm0
        punpcklbw xmm0, xmm2
        punpckhbw xmm1, xmm2
        movdqa xmm7, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmm7
        punpcklbw xmm7, xmmword ptr [esp + 0x50]
        punpckhbw xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm3, xmm0
        punpcklwd xmm0, xmm7
        punpckhwd xmm3, xmm7
        movdqa xmm4, xmm1
        punpcklwd xmm1, xmm6
        punpckhwd xmm4, xmm6
        movdqa xmm7, xmmword ptr [esp + 0x60]
        punpcklbw xmm7, xmmword ptr [esp + 0x70]
        movdqa xmm6, xmm5
        punpcklbw xmm6, xmmword ptr [esp + 0x90]
        movdqa xmm2, xmm7
        punpcklwd xmm7, xmm6
        punpckhwd xmm2, xmm6
        movdqa xmm6, xmm0
        punpckldq xmm0, xmm7
        punpckhdq xmm6, xmm7
        neg eax
        movq qword ptr [esi], xmm0
        movhps qword ptr [edi], xmm0
        movq qword ptr [esi + eax*2], xmm6
        movhps qword ptr [edi + eax*2], xmm6
        movdqa xmm0, xmm3
        punpckldq xmm0, xmm2
        punpckhdq xmm3, xmm2
        movq qword ptr [esi + eax*4], xmm0
        movhps qword ptr [edi + eax*4], xmm0
        movq qword ptr [esi + ecx*2], xmm3
        movhps qword ptr [edi + ecx*2], xmm3
        movdqa xmm7, xmmword ptr [esp + 0x60]
        punpckhbw xmm7, xmmword ptr [esp + 0x70]
        punpckhbw xmm5, xmmword ptr [esp + 0x90]
        movdqa xmm0, xmm7
        punpcklwd xmm0, xmm5
        punpckhwd xmm7, xmm5
        movdqa xmm5, xmm1
        punpckldq xmm1, xmm0
        punpckhdq xmm5, xmm0
        lea esi, [esi + eax*8]
        lea edi, [edi + eax*8]
        movq qword ptr [esi], xmm1
        movhps qword ptr [edi], xmm1
        movq qword ptr [esi + eax*2], xmm5
        movhps qword ptr [edi + eax*2], xmm5
        movdqa xmm1, xmm4
        punpckldq xmm1, xmm7
        punpckhdq xmm4, xmm7
        movq qword ptr [esi + eax*4], xmm1
        movhps qword ptr [edi + eax*4], xmm1
        movq qword ptr [esi + ecx*2], xmm4
        movhps qword ptr [edi + ecx*2], xmm4
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B50F2 vp8_mbloop_filter_horizontal_edge_uv_sse2
__declspec(naked) void vp8_mbloop_filter_horizontal_edge_uv_sse2()
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
        sub esp, 0xa0
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        lea ecx, [eax + eax*2]
        movq xmm4, qword ptr [esi]
        movq xmm1, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm7, qword ptr [edi + eax*2]
        movq xmm5, qword ptr [esi + eax*4]
        movq xmm2, qword ptr [edi + eax*4]
        punpcklbw xmm4, xmm1
        movq xmm1, qword ptr [edi + ecx*2]
        movdqa xmm3, xmm4
        punpcklbw xmm0, xmm7
        movq xmm7, qword ptr [esi + ecx*2]
        punpcklbw xmm5, xmm2
        mov esi, dword ptr [ebp + 0x1c]
        movdqa xmm6, xmm5
        punpcklbw xmm7, xmm1
        punpcklwd xmm5, xmm7
        punpckhwd xmm6, xmm7
        punpcklwd xmm3, xmm0
        lea edi, [esi + eax - 4]
        lea esi, [esi - 4]
        movdqa xmm2, xmm3
        punpckhwd xmm4, xmm0
        movdqa xmm7, xmm4
        punpckhdq xmm3, xmm5
        punpckhdq xmm7, xmm6
        punpckldq xmm4, xmm6
        punpckldq xmm2, xmm5
        movdqa xmmword ptr [esp], xmm2
        movq xmm2, qword ptr [esi]
        movq xmm6, qword ptr [edi]
        movq xmm0, qword ptr [esi + eax*2]
        movq xmm5, qword ptr [edi + eax*2]
        movq xmm1, qword ptr [esi + eax*4]
        punpcklbw xmm2, xmm6
        movq xmm6, qword ptr [edi + eax*4]
        punpcklbw xmm0, xmm5
        movq xmm5, qword ptr [esi + ecx*2]
        punpcklbw xmm1, xmm6
        movq xmm6, qword ptr [edi + ecx*2]
        punpcklbw xmm5, xmm6
        movdqa xmm6, xmm1
        punpckhwd xmm6, xmm5
        punpcklwd xmm1, xmm5
        movdqa xmm5, xmm2
        punpcklwd xmm5, xmm0
        punpckhwd xmm2, xmm0
        movdqa xmm0, xmm5
        punpckldq xmm0, xmm1
        punpckhdq xmm5, xmm1
        movdqa xmm1, xmm2
        punpckldq xmm1, xmm6
        punpckhdq xmm2, xmm6
        movdqa xmm6, xmm7
        punpcklqdq xmm6, xmm2
        punpckhqdq xmm7, xmm2
        movdqa xmmword ptr [esp + 0x90], xmm7
        movdqa xmmword ptr [esp + 0x80], xmm6
        movdqa xmm2, xmm3
        punpckhqdq xmm3, xmm5
        punpcklqdq xmm2, xmm5
        movdqa xmmword ptr [esp + 0x40], xmm2
        movdqa xmm5, xmm4
        punpcklqdq xmm4, xmm1
        movdqa xmmword ptr [esp + 0x50], xmm3
        punpckhqdq xmm5, xmm1
        movdqa xmmword ptr [esp + 0x60], xmm4
        movdqa xmmword ptr [esp + 0x70], xmm5
        movdqa xmm1, xmmword ptr [esp]
        movdqa xmm2, xmm1
        punpckhqdq xmm1, xmm0
        punpcklqdq xmm2, xmm0
        movdqa xmmword ptr [esp + 0x30], xmm1
        movdqa xmmword ptr [esp + 0x20], xmm2
        movdqa xmm0, xmm6
        psubusb xmm0, xmm7
        psubusb xmm7, xmm6
        movdqa xmm4, xmm5
        por xmm7, xmm0
        psubusb xmm4, xmm6
        movdqa xmm0, xmm1
        psubusb xmm6, xmm5
        por xmm6, xmm4
        psubusb xmm0, xmm2
        psubusb xmm2, xmm1
        por xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x40]
        pmaxub xmm0, xmm7
        movdqa xmm2, xmm5
        psubusb xmm5, xmm1
        psubusb xmm1, xmm2
        movdqa xmm7, xmm3
        psubusb xmm7, xmm2
        por xmm1, xmm5
        pmaxub xmm0, xmm6
        pmaxub xmm0, xmm1
        movdqa xmm1, xmm2
        psubusb xmm2, xmm3
        por xmm2, xmm7
        pmaxub xmm0, xmm2
        movdqa xmm5, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm6, xmm5
        movdqa xmm4, xmm7
        psubusb xmm5, xmm7
        psubusb xmm7, xmm6
        por xmm7, xmm5
        pmaxub xmm0, xmm7
        psubusb xmm0, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm5, xmm4
        psubusb xmm5, xmm1
        psubusb xmm1, xmm4
        por xmm5, xmm1
        movdqa xmm1, xmm3
        pand xmm5, xmmword ptr [g_75E000]
        psubusb xmm1, xmm6
        movdqa xmm4, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x18]
        psrlw xmm5, 1
        psubusb xmm6, xmm3
        por xmm1, xmm6
        paddusb xmm1, xmm1
        movdqa xmm3, xmmword ptr [edx]
        paddusb xmm1, xmm5
        psubusb xmm2, xmm3
        psubusb xmm7, xmm3
        psubusb xmm1, xmm4
        por xmm2, xmm7
        por xmm1, xmm0
        pcmpeqb xmm2, xmm0
        pxor xmm0, xmm0
        pcmpeqb xmm4, xmm4
        pcmpeqb xmm1, xmm0
        pxor xmm4, xmm2
        movdqa xmm3, xmmword ptr [g_75E010]
        movdqa xmm2, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm0, xmmword ptr [esp + 0x60]
        movdqa xmm7, xmmword ptr [esp + 0x70]
        pxor xmm2, xmm3
        pxor xmm7, xmm3
        pxor xmm6, xmm3
        pxor xmm0, xmm3
        psubsb xmm2, xmm7
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm1, xmm2
        movdqa xmm2, xmm1
        pand xmm2, xmm4
        pxor xmm0, xmm0
        pandn xmm4, xmm1
        pxor xmm1, xmm1
        punpcklbw xmm0, xmm4
        punpckhbw xmm1, xmm4
        movdqa xmm5, xmm2
        movdqa xmm4, xmmword ptr [g_75E060]
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm2, xmmword ptr [g_75E040]
        pmulhw xmm1, xmm4
        pmulhw xmm0, xmm4
        punpckhbw xmm7, xmm5
        punpcklbw xmm5, xmm5
        psraw xmm7, 0xb
        psraw xmm5, 0xb
        punpckhbw xmm4, xmm2
        punpcklbw xmm2, xmm2
        psraw xmm4, 0xb
        packsswb xmm5, xmm7
        psraw xmm2, 0xb
        packsswb xmm2, xmm4
        paddsb xmm6, xmm5
        psubsb xmm3, xmm2
        movdqa xmm7, xmm1
        movdqa xmm4, xmmword ptr [g_75E070]
        movdqa xmm5, xmm0
        movdqa xmm2, xmm5
        paddw xmm0, xmm4
        paddw xmm1, xmm4
        movdqa xmm4, xmm7
        paddw xmm5, xmm5
        paddw xmm7, xmm7
        paddw xmm5, xmm0
        paddw xmm7, xmm1
        paddw xmm2, xmm0
        psraw xmm0, 7
        paddw xmm4, xmm1
        psraw xmm1, 7
        psraw xmm2, 7
        packsswb xmm0, xmm1
        psraw xmm4, 7
        psraw xmm5, 7
        psraw xmm7, 7
        packsswb xmm5, xmm7
        packsswb xmm2, xmm4
        movdqa xmm7, xmmword ptr [g_75E010]
        movdqa xmm4, xmmword ptr [esp + 0x40]
        movdqa xmm1, xmmword ptr [esp + 0x70]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        psubsb xmm3, xmm5
        paddsb xmm6, xmm5
        psubsb xmm1, xmm2
        paddsb xmm4, xmm2
        movdqa xmm2, xmmword ptr [esp + 0x30]
        movdqa xmm5, xmmword ptr [esp + 0x80]
        pxor xmm1, xmm7
        pxor xmm4, xmm7
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        paddsb xmm2, xmm0
        psubsb xmm5, xmm0
        pxor xmm2, xmm7
        pxor xmm5, xmm7
        pxor xmm3, xmm7
        pxor xmm6, xmm7
        movdqa xmmword ptr [esp + 0x40], xmm4
        movdqa xmmword ptr [esp + 0x50], xmm6
        movdqa xmmword ptr [esp + 0x60], xmm3
        movdqa xmmword ptr [esp + 0x70], xmm1
        movdqa xmm0, xmmword ptr [esp + 0x20]
        movdqa xmm1, xmm0
        punpcklbw xmm0, xmm2
        punpckhbw xmm1, xmm2
        movdqa xmm7, xmmword ptr [esp + 0x40]
        movdqa xmm6, xmm7
        punpcklbw xmm7, xmmword ptr [esp + 0x50]
        punpckhbw xmm6, xmmword ptr [esp + 0x50]
        movdqa xmm3, xmm0
        punpcklwd xmm0, xmm7
        punpckhwd xmm3, xmm7
        movdqa xmm4, xmm1
        punpcklwd xmm1, xmm6
        punpckhwd xmm4, xmm6
        movdqa xmm7, xmmword ptr [esp + 0x60]
        punpcklbw xmm7, xmmword ptr [esp + 0x70]
        movdqa xmm6, xmm5
        punpcklbw xmm6, xmmword ptr [esp + 0x90]
        movdqa xmm2, xmm7
        punpcklwd xmm7, xmm6
        punpckhwd xmm2, xmm6
        movdqa xmm6, xmm0
        punpckldq xmm0, xmm7
        punpckhdq xmm6, xmm7
        mov esi, dword ptr [ebp + 8]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        movq qword ptr [esi], xmm0
        movhps qword ptr [edi], xmm0
        movq qword ptr [esi + eax*2], xmm6
        movhps qword ptr [edi + eax*2], xmm6
        movdqa xmm0, xmm3
        punpckldq xmm0, xmm2
        punpckhdq xmm3, xmm2
        movq qword ptr [esi + eax*4], xmm0
        movhps qword ptr [edi + eax*4], xmm0
        movq qword ptr [esi + ecx*2], xmm3
        movhps qword ptr [edi + ecx*2], xmm3
        movdqa xmm7, xmmword ptr [esp + 0x60]
        punpckhbw xmm7, xmmword ptr [esp + 0x70]
        punpckhbw xmm5, xmmword ptr [esp + 0x90]
        movdqa xmm0, xmm7
        punpcklwd xmm0, xmm5
        punpckhwd xmm7, xmm5
        movdqa xmm5, xmm1
        punpckldq xmm1, xmm0
        punpckhdq xmm5, xmm0
        mov esi, dword ptr [ebp + 0x1c]
        lea esi, [esi - 4]
        lea edi, [esi + eax]
        movq qword ptr [esi], xmm1
        movhps qword ptr [edi], xmm1
        movq qword ptr [esi + eax*2], xmm5
        movhps qword ptr [edi + eax*2], xmm5
        movdqa xmm1, xmm4
        punpckldq xmm1, xmm7
        punpckhdq xmm4, xmm7
        movq qword ptr [esi + eax*4], xmm1
        movhps qword ptr [edi + eax*4], xmm1
        movq qword ptr [esi + ecx*2], xmm4
        movhps qword ptr [edi + ecx*2], xmm4
        add esp, 0xa0
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

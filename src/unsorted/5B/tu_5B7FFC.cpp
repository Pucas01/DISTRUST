extern char g_65C490[];
extern char g_75E3F0[];

// FUNCTION: 0x5B7FFC vp8_filter_block1d16_h6_sse2
__declspec(naked) void vp8_filter_block1d16_h6_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x20]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0x10]
        pxor xmm0, xmm0
        L5B8014:
        movq xmm3, qword ptr [esi - 2]
        movq xmm1, qword ptr [esi + 6]
        movq xmm2, qword ptr [esi + 0xe]
        pslldq xmm2, 8
        por xmm2, xmm1
        prefetcht2 byte ptr [esi + eax - 2]
        pslldq xmm1, 8
        por xmm1, xmm3
        movdqa xmm4, xmm1
        movdqa xmm5, xmm1
        movdqa xmm6, xmm1
        movdqa xmm7, xmm1
        punpcklbw xmm3, xmm0
        psrldq xmm4, 1
        pmullw xmm3, xmmword ptr [edx]
        punpcklbw xmm4, xmm0
        psrldq xmm5, 2
        pmullw xmm4, xmmword ptr [edx + 0x10]
        punpcklbw xmm5, xmm0
        psrldq xmm6, 3
        pmullw xmm5, xmmword ptr [edx + 0x20]
        punpcklbw xmm6, xmm0
        psrldq xmm7, 4
        pmullw xmm6, xmmword ptr [edx + 0x30]
        punpcklbw xmm7, xmm0
        psrldq xmm1, 5
        pmullw xmm7, xmmword ptr [edx + 0x40]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [edx + 0x50]
        paddsw xmm4, xmm7
        paddsw xmm4, xmm5
        paddsw xmm4, xmm3
        paddsw xmm4, xmm6
        paddsw xmm4, xmm1
        paddsw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm4, xmm0
        punpcklbw xmm4, xmm0
        movdqa xmmword ptr [edi], xmm4
        movdqa xmm3, xmm2
        movdqa xmm4, xmm2
        movdqa xmm5, xmm2
        movdqa xmm6, xmm2
        movdqa xmm7, xmm2
        punpcklbw xmm3, xmm0
        psrldq xmm4, 1
        pmullw xmm3, xmmword ptr [edx]
        punpcklbw xmm4, xmm0
        psrldq xmm5, 2
        pmullw xmm4, xmmword ptr [edx + 0x10]
        punpcklbw xmm5, xmm0
        psrldq xmm6, 3
        pmullw xmm5, xmmword ptr [edx + 0x20]
        punpcklbw xmm6, xmm0
        psrldq xmm7, 4
        pmullw xmm6, xmmword ptr [edx + 0x30]
        punpcklbw xmm7, xmm0
        psrldq xmm2, 5
        pmullw xmm7, xmmword ptr [edx + 0x40]
        punpcklbw xmm2, xmm0
        pmullw xmm2, xmmword ptr [edx + 0x50]
        paddsw xmm4, xmm7
        paddsw xmm4, xmm5
        paddsw xmm4, xmm3
        paddsw xmm4, xmm6
        paddsw xmm4, xmm2
        paddsw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm4, xmm0
        punpcklbw xmm4, xmm0
        movdqa xmmword ptr [edi + 0x10], xmm4
        lea esi, [esi + eax]
        add edi, dword ptr [ebp + 0x1c]
        dec ecx
        jne L5B8014
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8166 vp8_filter_block1d8_v6_sse2
__declspec(naked) void vp8_filter_block1d8_v6_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x24]
        mov edx, dword ptr [ebp + 0x14]
        mov edi, dword ptr [ebp + 0xc]
        mov esi, dword ptr [ebp + 8]
        _emit 0x29
        _emit 0xd6
        _emit 0x29
        _emit 0xd6
        mov ecx, dword ptr [ebp + 0x1c]
        pxor xmm0, xmm0
        movdqa xmm7, xmmword ptr [g_75E3F0]
        L5B818A:
        movdqa xmm1, xmmword ptr [esi]
        pmullw xmm1, xmmword ptr [eax]
        movdqa xmm2, xmmword ptr [esi + edx]
        pmullw xmm2, xmmword ptr [eax + 0x10]
        movdqa xmm3, xmmword ptr [esi + edx*2]
        pmullw xmm3, xmmword ptr [eax + 0x20]
        movdqa xmm5, xmmword ptr [esi + edx*4]
        pmullw xmm5, xmmword ptr [eax + 0x40]
        _emit 0x1
        _emit 0xd6
        movdqa xmm4, xmmword ptr [esi + edx*2]
        pmullw xmm4, xmmword ptr [eax + 0x30]
        movdqa xmm6, xmmword ptr [esi + edx*4]
        pmullw xmm6, xmmword ptr [eax + 0x50]
        paddsw xmm2, xmm5
        paddsw xmm2, xmm3
        paddsw xmm2, xmm1
        paddsw xmm2, xmm4
        paddsw xmm2, xmm6
        paddsw xmm2, xmm7
        psraw xmm2, 7
        packuswb xmm2, xmm0
        movq qword ptr [edi], xmm2
        add edi, dword ptr [ebp + 0x10]
        dec ecx
        jne L5B818A
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B81F5 vp8_filter_block1d16_v6_sse2
__declspec(naked) void vp8_filter_block1d16_v6_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x24]
        mov edx, dword ptr [ebp + 0x14]
        mov edi, dword ptr [ebp + 0xc]
        mov esi, dword ptr [ebp + 8]
        _emit 0x29
        _emit 0xd6
        _emit 0x29
        _emit 0xd6
        mov ecx, dword ptr [ebp + 0x1c]
        L5B820D:
        movdqa xmm1, xmmword ptr [esi + edx]
        movdqa xmm2, xmmword ptr [esi + edx + 0x10]
        pmullw xmm1, xmmword ptr [eax + 0x10]
        pmullw xmm2, xmmword ptr [eax + 0x10]
        movdqa xmm3, xmmword ptr [esi + edx*4]
        movdqa xmm4, xmmword ptr [esi + edx*4 + 0x10]
        pmullw xmm3, xmmword ptr [eax + 0x40]
        pmullw xmm4, xmmword ptr [eax + 0x40]
        movdqa xmm5, xmmword ptr [esi + edx*2]
        movdqa xmm6, xmmword ptr [esi + edx*2 + 0x10]
        pmullw xmm5, xmmword ptr [eax + 0x20]
        pmullw xmm6, xmmword ptr [eax + 0x20]
        movdqa xmm7, xmmword ptr [esi]
        movdqa xmm0, xmmword ptr [esi + 0x10]
        pmullw xmm7, xmmword ptr [eax]
        pmullw xmm0, xmmword ptr [eax]
        paddsw xmm1, xmm3
        paddsw xmm2, xmm4
        paddsw xmm1, xmm5
        paddsw xmm2, xmm6
        paddsw xmm1, xmm7
        paddsw xmm2, xmm0
        _emit 0x1
        _emit 0xd6
        movdqa xmm3, xmmword ptr [esi + edx*2]
        movdqa xmm4, xmmword ptr [esi + edx*2 + 0x10]
        pmullw xmm3, xmmword ptr [eax + 0x30]
        pmullw xmm4, xmmword ptr [eax + 0x30]
        movdqa xmm5, xmmword ptr [esi + edx*4]
        movdqa xmm6, xmmword ptr [esi + edx*4 + 0x10]
        pmullw xmm5, xmmword ptr [eax + 0x50]
        pmullw xmm6, xmmword ptr [eax + 0x50]
        movdqa xmm7, xmmword ptr [g_75E3F0]
        pxor xmm0, xmm0
        paddsw xmm1, xmm3
        paddsw xmm2, xmm4
        paddsw xmm1, xmm5
        paddsw xmm2, xmm6
        paddsw xmm1, xmm7
        paddsw xmm2, xmm7
        psraw xmm1, 7
        psraw xmm2, 7
        packuswb xmm1, xmm2
        movdqa xmmword ptr [edi], xmm1
        add edi, dword ptr [ebp + 0x10]
        dec ecx
        jne L5B820D
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B82E5 vp8_filter_block1d8_h6_only_sse2
__declspec(naked) void vp8_filter_block1d8_h6_only_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        L5B82FD:
        movq xmm3, qword ptr [esi - 2]
        movq xmm1, qword ptr [esi + 6]
        prefetcht2 byte ptr [esi + eax - 2]
        pslldq xmm1, 8
        por xmm1, xmm3
        movdqa xmm4, xmm1
        movdqa xmm5, xmm1
        movdqa xmm6, xmm1
        movdqa xmm7, xmm1
        punpcklbw xmm3, xmm0
        psrldq xmm4, 1
        pmullw xmm3, xmmword ptr [edx]
        punpcklbw xmm4, xmm0
        psrldq xmm5, 2
        pmullw xmm4, xmmword ptr [edx + 0x10]
        punpcklbw xmm5, xmm0
        psrldq xmm6, 3
        pmullw xmm5, xmmword ptr [edx + 0x20]
        punpcklbw xmm6, xmm0
        psrldq xmm7, 4
        pmullw xmm6, xmmword ptr [edx + 0x30]
        punpcklbw xmm7, xmm0
        psrldq xmm1, 5
        pmullw xmm7, xmmword ptr [edx + 0x40]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [edx + 0x50]
        paddsw xmm4, xmm7
        paddsw xmm4, xmm5
        paddsw xmm4, xmm3
        paddsw xmm4, xmm6
        paddsw xmm4, xmm1
        paddsw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm4, xmm0
        movq qword ptr [edi], xmm4
        lea esi, [esi + eax]
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B82FD
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B83AD vp8_filter_block1d16_h6_only_sse2
__declspec(naked) void vp8_filter_block1d16_h6_only_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        L5B83C5:
        movq xmm3, qword ptr [esi - 2]
        movq xmm1, qword ptr [esi + 6]
        movq xmm2, qword ptr [esi + 0xe]
        pslldq xmm2, 8
        por xmm2, xmm1
        prefetcht2 byte ptr [esi + eax - 2]
        pslldq xmm1, 8
        por xmm1, xmm3
        movdqa xmm4, xmm1
        movdqa xmm5, xmm1
        movdqa xmm6, xmm1
        movdqa xmm7, xmm1
        punpcklbw xmm3, xmm0
        psrldq xmm4, 1
        pmullw xmm3, xmmword ptr [edx]
        punpcklbw xmm4, xmm0
        psrldq xmm5, 2
        pmullw xmm4, xmmword ptr [edx + 0x10]
        punpcklbw xmm5, xmm0
        psrldq xmm6, 3
        pmullw xmm5, xmmword ptr [edx + 0x20]
        punpcklbw xmm6, xmm0
        psrldq xmm7, 4
        pmullw xmm6, xmmword ptr [edx + 0x30]
        punpcklbw xmm7, xmm0
        psrldq xmm1, 5
        pmullw xmm7, xmmword ptr [edx + 0x40]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [edx + 0x50]
        paddsw xmm4, xmm7
        paddsw xmm4, xmm5
        paddsw xmm4, xmm3
        paddsw xmm4, xmm6
        paddsw xmm4, xmm1
        paddsw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm4, xmm0
        movq qword ptr [edi], xmm4
        movdqa xmm3, xmm2
        movdqa xmm4, xmm2
        movdqa xmm5, xmm2
        movdqa xmm6, xmm2
        movdqa xmm7, xmm2
        punpcklbw xmm3, xmm0
        psrldq xmm4, 1
        pmullw xmm3, xmmword ptr [edx]
        punpcklbw xmm4, xmm0
        psrldq xmm5, 2
        pmullw xmm4, xmmword ptr [edx + 0x10]
        punpcklbw xmm5, xmm0
        psrldq xmm6, 3
        pmullw xmm5, xmmword ptr [edx + 0x20]
        punpcklbw xmm6, xmm0
        psrldq xmm7, 4
        pmullw xmm6, xmmword ptr [edx + 0x30]
        punpcklbw xmm7, xmm0
        psrldq xmm2, 5
        pmullw xmm7, xmmword ptr [edx + 0x40]
        punpcklbw xmm2, xmm0
        pmullw xmm2, xmmword ptr [edx + 0x50]
        paddsw xmm4, xmm7
        paddsw xmm4, xmm5
        paddsw xmm4, xmm3
        paddsw xmm4, xmm6
        paddsw xmm4, xmm2
        paddsw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm4, xmm0
        movq qword ptr [edi + 8], xmm4
        lea esi, [esi + eax]
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B83C5
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B850F vp8_filter_block1d8_v6_only_sse2
__declspec(naked) void vp8_filter_block1d8_v6_only_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ebp + 0x1c]
        pxor xmm0, xmm0
        movdqa xmm7, xmmword ptr [g_75E3F0]
        L5B852F:
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [esi + edx]
        movq xmm3, qword ptr [esi + edx*2]
        movq xmm5, qword ptr [esi + edx*4]
        _emit 0x1
        _emit 0xd6
        movq xmm4, qword ptr [esi + edx*2]
        movq xmm6, qword ptr [esi + edx*4]
        punpcklbw xmm1, xmm0
        pmullw xmm1, xmmword ptr [eax]
        punpcklbw xmm2, xmm0
        pmullw xmm2, xmmword ptr [eax + 0x10]
        punpcklbw xmm3, xmm0
        pmullw xmm3, xmmword ptr [eax + 0x20]
        punpcklbw xmm5, xmm0
        pmullw xmm5, xmmword ptr [eax + 0x40]
        punpcklbw xmm4, xmm0
        pmullw xmm4, xmmword ptr [eax + 0x30]
        punpcklbw xmm6, xmm0
        pmullw xmm6, xmmword ptr [eax + 0x50]
        paddsw xmm2, xmm5
        paddsw xmm2, xmm3
        paddsw xmm2, xmm1
        paddsw xmm2, xmm4
        paddsw xmm2, xmm6
        paddsw xmm2, xmm7
        psraw xmm2, 7
        packuswb xmm2, xmm0
        movq qword ptr [edi], xmm2
        add edi, dword ptr [ebp + 0x14]
        dec ecx
        jne L5B852F
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B85B2 vp8_unpack_block1d16_h6_sse2
__declspec(naked) void vp8_unpack_block1d16_h6_sse2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x10]
        pxor xmm0, xmm0
        L5B85C7:
        movq xmm1, qword ptr [esi]
        movq xmm3, qword ptr [esi + 8]
        punpcklbw xmm3, xmm0
        punpcklbw xmm1, xmm0
        movdqa xmmword ptr [edi], xmm1
        movdqa xmmword ptr [edi + 0x10], xmm3
        lea esi, [esi + eax]
        add edi, dword ptr [ebp + 0x18]
        dec ecx
        jne L5B85C7
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B85EE sub_5B85EE
__declspec(naked) void sub_5B85EE()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        lea ecx, [g_65C490]
        mov eax, dword ptr [ebp + 0x10]
        cmp eax, 0
        je L5B8750
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        mov edi, dword ptr [ebp + 0x18]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm1, xmmword ptr [eax]
        movdqa xmm2, xmmword ptr [eax + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        cmp eax, 0
        je L5B87E5
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov edx, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        movdqu xmm3, xmmword ptr [esi]
        movdqa xmm4, xmm3
        punpcklbw xmm3, xmm0
        punpckhbw xmm4, xmm0
        pmullw xmm3, xmm1
        pmullw xmm4, xmm1
        movdqu xmm5, xmmword ptr [esi + 1]
        movdqa xmm6, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm6, xmm0
        pmullw xmm5, xmm2
        pmullw xmm6, xmm2
        paddw xmm3, xmm5
        paddw xmm4, xmm6
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        movdqa xmm7, xmm3
        packuswb xmm7, xmm4
        _emit 0x1
        _emit 0xd6
        L5B8697:
        movdqu xmm3, xmmword ptr [esi]
        movdqa xmm4, xmm3
        punpcklbw xmm3, xmm0
        punpckhbw xmm4, xmm0
        pmullw xmm3, xmm1
        pmullw xmm4, xmm1
        movdqu xmm5, xmmword ptr [esi + 1]
        movdqa xmm6, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm6, xmm0
        pmullw xmm5, xmm2
        pmullw xmm6, xmm2
        paddw xmm3, xmm5
        paddw xmm4, xmm6
        movdqa xmm5, xmm7
        movdqa xmm6, xmm7
        punpcklbw xmm5, xmm0
        punpckhbw xmm6, xmm0
        pmullw xmm5, xmmword ptr [eax]
        pmullw xmm6, xmmword ptr [eax]
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        movdqa xmm7, xmm3
        packuswb xmm7, xmm4
        pmullw xmm3, xmmword ptr [eax + 0x10]
        pmullw xmm4, xmmword ptr [eax + 0x10]
        paddw xmm3, xmm5
        paddw xmm4, xmm6
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm3, xmm4
        movdqa xmmword ptr [edi], xmm3
        _emit 0x1
        _emit 0xd6
        add edi, dword ptr [ebp + 0x1c]
        _emit 0x39
        _emit 0xcf
        jne L5B8697
        jmp L5B8855
        L5B8750:
        mov eax, dword ptr [ebp + 0x14]
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        mov edi, dword ptr [ebp + 0x18]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm1, xmmword ptr [eax]
        movdqa xmm2, xmmword ptr [eax + 0x10]
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        movdqu xmm7, xmmword ptr [esi]
        _emit 0x1
        _emit 0xc6
        L5B877D:
        movdqu xmm3, xmmword ptr [esi]
        movdqa xmm5, xmm7
        movdqa xmm6, xmm7
        movdqa xmm4, xmm3
        movdqa xmm7, xmm3
        punpcklbw xmm5, xmm0
        punpckhbw xmm6, xmm0
        punpcklbw xmm3, xmm0
        punpckhbw xmm4, xmm0
        pmullw xmm5, xmm1
        pmullw xmm6, xmm1
        pmullw xmm3, xmm2
        pmullw xmm4, xmm2
        paddw xmm3, xmm5
        paddw xmm4, xmm6
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm3, xmm4
        movdqa xmmword ptr [edi], xmm3
        _emit 0x1
        _emit 0xc6
        _emit 0x1
        _emit 0xd7
        _emit 0x39
        _emit 0xcf
        jne L5B877D
        jmp L5B8855
        L5B87E5:
        lea ecx, [edi + edx*8]
        lea ecx, [ecx + edx*8]
        mov eax, dword ptr [ebp + 0xc]
        pxor xmm0, xmm0
        L5B87F2:
        movdqu xmm3, xmmword ptr [esi]
        movdqa xmm4, xmm3
        punpcklbw xmm3, xmm0
        punpckhbw xmm4, xmm0
        pmullw xmm3, xmm1
        pmullw xmm4, xmm1
        movdqu xmm5, xmmword ptr [esi + 1]
        movdqa xmm6, xmm5
        punpcklbw xmm5, xmm0
        punpckhbw xmm6, xmm0
        pmullw xmm5, xmm2
        pmullw xmm6, xmm2
        paddw xmm3, xmm5
        paddw xmm4, xmm6
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        paddw xmm4, xmmword ptr [g_75E3F0]
        psraw xmm4, 7
        packuswb xmm3, xmm4
        movdqa xmmword ptr [edi], xmm3
        _emit 0x1
        _emit 0xc6
        _emit 0x1
        _emit 0xd7
        _emit 0x39
        _emit 0xcf
        jne L5B87F2
        L5B8855:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B8859 sub_5B8859
__declspec(naked) void sub_5B8859()
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
        sub esp, 0x90
        lea ecx, [g_65C490]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        movdqu xmm0, xmmword ptr [esi]
        lea eax, [edx + edx*2]
        movdqu xmm1, xmmword ptr [esi + edx]
        movdqu xmm2, xmmword ptr [esi + edx*2]
        _emit 0x1
        _emit 0xc6
        movdqu xmm3, xmmword ptr [esi]
        movdqu xmm4, xmmword ptr [esi + edx]
        movdqu xmm5, xmmword ptr [esi + edx*2]
        _emit 0x1
        _emit 0xc6
        movdqu xmm6, xmmword ptr [esi]
        movdqu xmm7, xmmword ptr [esi + edx]
        movdqa xmmword ptr [esp], xmm0
        movdqu xmm0, xmmword ptr [esi + edx*2]
        movdqa xmmword ptr [esp + 0x10], xmm1
        movdqa xmmword ptr [esp + 0x20], xmm2
        movdqa xmmword ptr [esp + 0x30], xmm3
        movdqa xmmword ptr [esp + 0x40], xmm4
        movdqa xmmword ptr [esp + 0x50], xmm5
        movdqa xmmword ptr [esp + 0x60], xmm6
        movdqa xmmword ptr [esp + 0x70], xmm7
        movdqa xmmword ptr [esp + 0x80], xmm0
        mov eax, dword ptr [ebp + 0x10]
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        mov edi, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x1c]
        movdqa xmm1, xmmword ptr [eax]
        movdqa xmm2, xmmword ptr [eax + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        lea ecx, [edi + edx*8]
        movdqa xmm5, xmmword ptr [eax]
        movdqa xmm6, xmmword ptr [eax + 0x10]
        pxor xmm0, xmm0
        movdqa xmm3, xmmword ptr [esp]
        movdqa xmm4, xmm3
        psrldq xmm4, 1
        punpcklbw xmm3, xmm0
        punpcklbw xmm4, xmm0
        pmullw xmm3, xmm1
        pmullw xmm4, xmm2
        paddw xmm3, xmm4
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        movdqa xmm7, xmm3
        add esp, 0x10
        L5B8948:
        movdqa xmm3, xmmword ptr [esp]
        movdqa xmm4, xmm3
        psrldq xmm4, 1
        punpcklbw xmm3, xmm0
        punpcklbw xmm4, xmm0
        pmullw xmm3, xmm1
        pmullw xmm4, xmm2
        paddw xmm3, xmm4
        pmullw xmm7, xmm5
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        movdqa xmm4, xmm3
        pmullw xmm3, xmm6
        paddw xmm3, xmm7
        movdqa xmm7, xmm4
        paddw xmm3, xmmword ptr [g_75E3F0]
        psraw xmm3, 7
        packuswb xmm3, xmm0
        movq qword ptr [edi], xmm3
        add esp, 0x10
        _emit 0x1
        _emit 0xd7
        _emit 0x39
        _emit 0xcf
        jne L5B8948
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

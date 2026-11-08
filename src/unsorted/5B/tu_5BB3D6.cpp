
// FUNCTION: 0x5BB3D6 sub_5BB3D6
__declspec(naked) void sub_5BB3D6()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [esi + eax*8]
        pxor mm7, mm7
        pxor mm6, mm6
        L5BB3F0:
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [esi + 8]
        movq mm3, qword ptr [edi + 8]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        psubusb mm0, mm1
        psubusb mm1, mm4
        psubusb mm2, mm3
        psubusb mm3, mm5
        por mm0, mm1
        por mm2, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xc8
        _emit 0x0f
        _emit 0x6f
        _emit 0xda
        punpcklbw mm0, mm6
        punpckhbw mm1, mm6
        punpcklbw mm2, mm6
        punpckhbw mm3, mm6
        paddw mm0, mm2
        paddw mm1, mm3
        paddw mm0, mm1
        lea esi, [esi + eax]
        _emit 0x1
        _emit 0xd7
        paddw mm7, mm0
        _emit 0x39
        _emit 0xce
        jne L5BB3F0
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        punpcklwd mm0, mm6
        punpckhwd mm7, mm6
        paddw mm0, mm7
        _emit 0x0f
        _emit 0x6f
        _emit 0xf8
        psrlq mm0, 0x20
        paddw mm7, mm0
        movd eax, mm7
        pop edi
        pop esi
        _emit 0x89
        _emit 0xec
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB460 sub_5BB460
__declspec(naked) void sub_5BB460()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0xc]
        mov eax, 0x30003
        movdqa xmm0, xmmword ptr [ecx]
        movdqa xmm1, xmmword ptr [ecx + 0x10]
        pshufd xmm2, xmm1, 0x4e
        movdqa xmm3, xmm0
        paddw xmm0, xmm2
        psubw xmm3, xmm2
        movdqa xmm4, xmm0
        punpcklqdq xmm0, xmm3
        punpckhqdq xmm4, xmm3
        movdqa xmm1, xmm4
        paddw xmm4, xmm0
        psubw xmm0, xmm1
        movdqa xmm3, xmm4
        punpcklwd xmm4, xmm0
        punpckhwd xmm3, xmm0
        movdqa xmm1, xmm4
        punpcklwd xmm4, xmm3
        punpckhwd xmm1, xmm3
        movd xmm0, eax
        pshufd xmm2, xmm1, 0x4e
        movdqa xmm3, xmm4
        pshufd xmm0, xmm0, 0
        paddw xmm4, xmm2
        psubw xmm3, xmm2
        movdqa xmm5, xmm4
        punpcklqdq xmm4, xmm3
        punpckhqdq xmm5, xmm3
        movdqa xmm1, xmm5
        paddw xmm5, xmm4
        psubw xmm4, xmm1
        paddw xmm5, xmm0
        paddw xmm4, xmm0
        psraw xmm5, 3
        psraw xmm4, 3
        movd eax, xmm5
        movd ecx, xmm4
        psrldq xmm5, 4
        psrldq xmm4, 4
        mov word ptr [edx], ax
        mov word ptr [edx + 0x40], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x80], ax
        mov word ptr [edx + 0xc0], cx
        movd eax, xmm5
        movd ecx, xmm4
        psrldq xmm5, 4
        psrldq xmm4, 4
        mov word ptr [edx + 0x100], ax
        mov word ptr [edx + 0x140], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x180], ax
        mov word ptr [edx + 0x1c0], cx
        movd eax, xmm5
        movd ecx, xmm4
        psrldq xmm5, 4
        psrldq xmm4, 4
        mov word ptr [edx + 0x20], ax
        mov word ptr [edx + 0x60], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0xa0], ax
        mov word ptr [edx + 0xe0], cx
        movd eax, xmm5
        movd ecx, xmm4
        mov word ptr [edx + 0x120], ax
        mov word ptr [edx + 0x160], cx
        shr eax, 0x10
        shr ecx, 0x10
        mov word ptr [edx + 0x1a0], ax
        mov word ptr [edx + 0x1e0], cx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB5C0 sub_5BB5C0
__declspec(naked) void sub_5BB5C0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        movdqa xmm0, xmmword ptr [esi]
        movdqa xmm1, xmmword ptr [edi]
        movdqa xmm2, xmmword ptr [esi + 0x10]
        movdqa xmm3, xmmword ptr [edi + 0x10]
        psubw xmm0, xmm1
        psubw xmm2, xmm3
        pmaddwd xmm0, xmm0
        pmaddwd xmm2, xmm2
        paddd xmm0, xmm2
        pxor xmm5, xmm5
        movdqa xmm1, xmm0
        punpckldq xmm0, xmm5
        punpckhdq xmm1, xmm5
        paddd xmm0, xmm1
        movdqa xmm1, xmm0
        psrldq xmm0, 8
        paddd xmm0, xmm1
        movd eax, xmm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB61A sub_5BB61A
__declspec(naked) void sub_5BB61A()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        pxor mm7, mm7
        mov edi, dword ptr [ebp + 0xc]
        movq mm3, qword ptr [esi]
        movq mm4, qword ptr [edi]
        movq mm5, qword ptr [esi + 8]
        movq mm6, qword ptr [edi + 8]
        pxor mm1, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xd7
        psubw mm5, mm6
        por mm1, mm2
        pmaddwd mm5, mm5
        pcmpeqw mm1, mm7
        psubw mm3, mm4
        pand mm1, mm3
        pmaddwd mm1, mm1
        paddd mm1, mm5
        movq mm3, qword ptr [esi + 0x10]
        movq mm4, qword ptr [edi + 0x10]
        movq mm5, qword ptr [esi + 0x18]
        movq mm6, qword ptr [edi + 0x18]
        psubw mm5, mm6
        pmaddwd mm5, mm5
        psubw mm3, mm4
        pmaddwd mm3, mm3
        paddd mm3, mm5
        paddd mm1, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        psrlq mm1, 0x20
        paddd mm0, mm1
        movd eax, mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB687 sub_5BB687
__declspec(naked) void sub_5BB687()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        pxor mm7, mm7
        mov edi, dword ptr [ebp + 0xc]
        pxor mm2, mm2
        movd mm1, dword ptr [ebp + 0x10]
        por mm1, mm2
        pcmpeqw mm1, mm7
        mov ecx, 0x10
        L5BB6A7:
        movq mm3, qword ptr [esi]
        movq mm4, qword ptr [edi]
        movq mm5, qword ptr [esi + 8]
        movq mm6, qword ptr [edi + 8]
        psubw mm5, mm6
        pmaddwd mm5, mm5
        psubw mm3, mm4
        pand mm3, mm1
        pmaddwd mm3, mm3
        paddd mm2, mm5
        paddd mm2, mm3
        movq mm3, qword ptr [esi + 0x10]
        movq mm4, qword ptr [edi + 0x10]
        movq mm5, qword ptr [esi + 0x18]
        movq mm6, qword ptr [edi + 0x18]
        psubw mm5, mm6
        pmaddwd mm5, mm5
        psubw mm3, mm4
        pmaddwd mm3, mm3
        paddd mm2, mm5
        paddd mm2, mm3
        add esi, 0x20
        add edi, 0x20
        sub ecx, 1
        jne L5BB6A7
        _emit 0x0f
        _emit 0x6f
        _emit 0xc2
        psrlq mm2, 0x20
        paddd mm0, mm2
        movd eax, mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB708 sub_5BB708
__declspec(naked) void sub_5BB708()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        pxor xmm6, xmm6
        mov edi, dword ptr [ebp + 0xc]
        pxor xmm4, xmm4
        movd xmm5, dword ptr [ebp + 0x10]
        por xmm5, xmm4
        pcmpeqw xmm5, xmm6
        mov ecx, 0x10
        L5BB72D:
        movdqa xmm0, xmmword ptr [esi]
        movdqa xmm1, xmmword ptr [edi]
        movdqa xmm2, xmmword ptr [esi + 0x10]
        movdqa xmm3, xmmword ptr [edi + 0x10]
        psubw xmm2, xmm3
        pmaddwd xmm2, xmm2
        psubw xmm0, xmm1
        pand xmm0, xmm5
        pmaddwd xmm0, xmm0
        add esi, 0x20
        add edi, 0x20
        sub ecx, 1
        paddd xmm4, xmm2
        paddd xmm4, xmm0
        jne L5BB72D
        movdqa xmm0, xmm4
        punpckldq xmm0, xmm6
        punpckhdq xmm4, xmm6
        paddd xmm0, xmm4
        movdqa xmm1, xmm0
        psrldq xmm0, 8
        paddd xmm0, xmm1
        movd eax, xmm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB78B sub_5BB78B
__declspec(naked) void sub_5BB78B()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov ecx, 0x10
        pxor mm7, mm7
        L5BB79E:
        movq mm1, qword ptr [esi]
        movq mm2, qword ptr [edi]
        psubw mm1, mm2
        pmaddwd mm1, mm1
        movq mm3, qword ptr [esi + 8]
        movq mm4, qword ptr [edi + 8]
        psubw mm3, mm4
        pmaddwd mm3, mm3
        paddd mm7, mm1
        paddd mm7, mm3
        add esi, 0x10
        add edi, 0x10
        dec ecx
        jne L5BB79E
        _emit 0x0f
        _emit 0x6f
        _emit 0xc7
        psrlq mm7, 0x20
        paddd mm0, mm7
        movd eax, mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5BB7D8 sub_5BB7D8
__declspec(naked) void sub_5BB7D8()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov ecx, 0x10
        pxor xmm3, xmm3
        L5BB7EC:
        movdqa xmm1, xmmword ptr [esi]
        movdqa xmm2, xmmword ptr [edi]
        psubw xmm1, xmm2
        pmaddwd xmm1, xmm1
        paddd xmm3, xmm1
        add esi, 0x10
        add edi, 0x10
        dec ecx
        jne L5BB7EC
        pxor xmm0, xmm0
        movdqa xmm1, xmm3
        movdqa xmm2, xmm1
        punpckldq xmm1, xmm0
        punpckhdq xmm2, xmm0
        paddd xmm1, xmm2
        movdqa xmm2, xmm1
        psrldq xmm1, 8
        paddd xmm1, xmm2
        movd eax, xmm1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

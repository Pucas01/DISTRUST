extern char g_65C490[];
extern char g_75E0A0[];
extern char g_75E3B0[];

// FUNCTION: 0x5B5C50 vp8_filter_block1d_h6_mmx
__declspec(naked) void vp8_filter_block1d_h6_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x20]
        movq mm1, qword ptr [edx + 0x10]
        movq mm2, qword ptr [edx + 0x20]
        movq mm6, qword ptr [edx + 0x30]
        movq mm7, qword ptr [edx + 0x40]
        mov edi, dword ptr [ebp + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0x1c]
        pxor mm0, mm0
        L5B5C77:
        movq mm3, qword ptr [esi - 2]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        psrlq mm3, 8
        punpcklbw mm3, mm0
        pmullw mm3, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        punpckhbw mm4, mm0
        pmullw mm4, mm7
        paddsw mm3, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xe5
        psrlq mm5, 0x10
        punpcklbw mm5, mm0
        pmullw mm5, mm2
        paddsw mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xec
        psrlq mm4, 0x18
        punpcklbw mm4, mm0
        pmullw mm4, mm6
        paddsw mm3, mm4
        movd mm4, dword ptr [esi + 3]
        punpcklbw mm4, mm0
        pmullw mm4, qword ptr [edx + 0x50]
        paddsw mm3, mm4
        punpcklbw mm5, mm0
        pmullw mm5, qword ptr [edx]
        paddsw mm3, mm5
        paddsw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        packuswb mm3, mm0
        punpcklbw mm3, mm0
        movq qword ptr [edi], mm3
        add esi, dword ptr [ebp + 0x10]
        _emit 0x1
        _emit 0xc7
        dec ecx
        jne L5B5C77
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5CEB vp8_filter_block1dc_v6_mmx
__declspec(naked) void vp8_filter_block1dc_v6_mmx()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        movq mm5, qword ptr [g_75E0A0]
        push ebx
        mov ebx, dword ptr [ebp + 0x24]
        movq mm1, qword ptr [ebx + 0x10]
        movq mm2, qword ptr [ebx + 0x20]
        movq mm6, qword ptr [ebx + 0x30]
        movq mm7, qword ptr [ebx + 0x40]
        mov edx, dword ptr [ebp + 0x14]
        mov edi, dword ptr [ebp + 0xc]
        mov esi, dword ptr [ebp + 8]
        _emit 0x29
        _emit 0xd6
        _emit 0x29
        _emit 0xd6
        mov ecx, dword ptr [ebp + 0x1c]
        mov eax, dword ptr [ebp + 0x10]
        pxor mm0, mm0
        L5B5D21:
        movq mm3, qword ptr [esi + edx]
        pmullw mm3, mm1
        movq mm4, qword ptr [esi + edx*4]
        pmullw mm4, mm7
        paddsw mm3, mm4
        movq mm4, qword ptr [esi + edx*2]
        pmullw mm4, mm2
        paddsw mm3, mm4
        movq mm4, qword ptr [esi]
        pmullw mm4, qword ptr [ebx]
        paddsw mm3, mm4
        _emit 0x1
        _emit 0xd6
        movq mm4, qword ptr [esi + edx*2]
        pmullw mm4, mm6
        paddsw mm3, mm4
        movq mm4, qword ptr [esi + edx*4]
        pmullw mm4, qword ptr [ebx + 0x50]
        paddsw mm3, mm4
        paddsw mm3, mm5
        psraw mm3, 7
        packuswb mm3, mm0
        movd dword ptr [edi], mm3
        lea edi, [edi + eax]
        dec ecx
        jne L5B5D21
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5D74 sub_5B5D74
__declspec(naked) void sub_5B5D74()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x18]
        shl eax, 5
        lea ecx, [g_65C490]
        _emit 0x1
        _emit 0xc8
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movq mm1, qword ptr [eax]
        movq mm2, qword ptr [eax + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        pxor mm0, mm0
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        lea ecx, [edi + edx*8]
        mov edx, dword ptr [ebp + 0xc]
        movq mm3, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, mm1
        pmullw mm4, mm1
        movq mm5, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, mm2
        pmullw mm6, mm2
        paddw mm3, mm5
        paddw mm4, mm6
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm4
        _emit 0x1
        _emit 0xd6
        L5B5DF1:
        movq mm3, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, mm1
        pmullw mm4, mm1
        movq mm5, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, mm2
        pmullw mm6, mm2
        paddw mm3, mm5
        paddw mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xef
        _emit 0x0f
        _emit 0x6f
        _emit 0xf7
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, qword ptr [eax]
        pmullw mm6, qword ptr [eax]
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm4
        pmullw mm3, qword ptr [eax + 0x10]
        pmullw mm4, qword ptr [eax + 0x10]
        paddw mm3, mm5
        paddw mm4, mm6
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        packuswb mm3, mm4
        movq qword ptr [edi], mm3
        _emit 0x1
        _emit 0xd6
        add edi, dword ptr [ebp + 0x1c]
        _emit 0x39
        _emit 0xcf
        jne L5B5DF1
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5E85 sub_5B5E85
__declspec(naked) void sub_5B5E85()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x18]
        lea ecx, [g_65C490]
        shl eax, 5
        mov esi, dword ptr [ebp + 8]
        _emit 0x1
        _emit 0xc8
        mov edx, dword ptr [ebp + 0x1c]
        movq mm1, qword ptr [eax]
        movq mm2, qword ptr [eax + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        pxor mm0, mm0
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        lea ecx, [edi + edx*4]
        mov edx, dword ptr [ebp + 0xc]
        movq mm3, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, mm1
        pmullw mm4, mm1
        movq mm5, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, mm2
        pmullw mm6, mm2
        paddw mm3, mm5
        paddw mm4, mm6
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm4
        _emit 0x1
        _emit 0xd6
        L5B5F02:
        movq mm3, qword ptr [esi]
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        punpcklbw mm3, mm0
        punpckhbw mm4, mm0
        pmullw mm3, mm1
        pmullw mm4, mm1
        movq mm5, qword ptr [esi + 1]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf5
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, mm2
        pmullw mm6, mm2
        paddw mm3, mm5
        paddw mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xef
        _emit 0x0f
        _emit 0x6f
        _emit 0xf7
        punpcklbw mm5, mm0
        punpckhbw mm6, mm0
        pmullw mm5, qword ptr [eax]
        pmullw mm6, qword ptr [eax]
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm4
        pmullw mm3, qword ptr [eax + 0x10]
        pmullw mm4, qword ptr [eax + 0x10]
        paddw mm3, mm5
        paddw mm4, mm6
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        paddw mm4, qword ptr [g_75E0A0]
        psraw mm4, 7
        packuswb mm3, mm4
        movq qword ptr [edi], mm3
        _emit 0x1
        _emit 0xd6
        add edi, dword ptr [ebp + 0x1c]
        _emit 0x39
        _emit 0xcf
        jne L5B5F02
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5F96 sub_5B5F96
__declspec(naked) void sub_5B5F96()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x10]
        mov edi, dword ptr [ebp + 0x18]
        lea ecx, [g_65C490]
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0x1c]
        movq mm1, qword ptr [eax]
        movq mm2, qword ptr [eax + 0x10]
        mov eax, dword ptr [ebp + 0x14]
        pxor mm0, mm0
        shl eax, 5
        _emit 0x1
        _emit 0xc8
        lea ecx, [edi + edx*4]
        mov edx, dword ptr [ebp + 0xc]
        movd mm3, dword ptr [esi]
        punpcklbw mm3, mm0
        pmullw mm3, mm1
        movd mm5, dword ptr [esi + 1]
        punpcklbw mm5, mm0
        pmullw mm5, mm2
        paddw mm3, mm5
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm0
        _emit 0x1
        _emit 0xd6
        L5B5FF3:
        movd mm3, dword ptr [esi]
        punpcklbw mm3, mm0
        pmullw mm3, mm1
        movd mm5, dword ptr [esi + 1]
        punpcklbw mm5, mm0
        pmullw mm5, mm2
        paddw mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xef
        punpcklbw mm5, mm0
        pmullw mm5, qword ptr [eax]
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        packuswb mm7, mm0
        pmullw mm3, qword ptr [eax + 0x10]
        paddw mm3, mm5
        paddw mm3, qword ptr [g_75E0A0]
        psraw mm3, 7
        packuswb mm3, mm0
        movd dword ptr [edi], mm3
        _emit 0x1
        _emit 0xd6
        add edi, dword ptr [ebp + 0x1c]
        _emit 0x39
        _emit 0xcf
        jne L5B5FF3
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B6050 sub_5B6050
__declspec(naked) void sub_5B6050()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push ebx
        push esi
        push edi
        _emit 0x89
        _emit 0xe0
        and esp, 0xfffffff0
        lea esp, [esp - 0xc]
        push eax
        sub esp, 0x10
        mov ebx, dword ptr [ebp + 0x1c]
        movdqa xmm2, xmmword ptr [ebx]
        movdqa xmmword ptr [esp], xmm2
        add ebx, 0x10
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0xc]
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x20]
        L5B607E:
        _emit 0x31
        _emit 0xd2
        L5B6080:
        movdqu xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [esi + eax]
        movdqu xmm3, xmmword ptr [esi + eax*2]
        movdqa xmm4, xmm0
        movdqa xmm6, xmm0
        movdqa xmm5, xmm1
        pavgb xmm5, xmm3
        psubusb xmm4, xmm1
        psubusb xmm1, xmm0
        psubusb xmm6, xmm3
        psubusb xmm3, xmm0
        paddusb xmm4, xmm1
        paddusb xmm6, xmm3
        movdqa xmm2, xmmword ptr [esp]
        pxor xmm1, xmm1
        movdqa xmm7, xmm2
        psubusb xmm2, xmm4
        psubusb xmm7, xmm6
        pcmpeqb xmm2, xmm1
        pcmpeqb xmm7, xmm1
        por xmm7, xmm2
        neg eax
        movdqu xmm1, xmmword ptr [esi + eax*2]
        movdqu xmm3, xmmword ptr [esi + eax]
        movdqa xmm6, xmm0
        movdqa xmm4, xmm0
        movdqa xmm2, xmm1
        pavgb xmm1, xmm3
        psubusb xmm6, xmm2
        psubusb xmm2, xmm0
        psubusb xmm4, xmm3
        psubusb xmm3, xmm0
        paddusb xmm6, xmm2
        paddusb xmm4, xmm3
        pavgb xmm5, xmm1
        movdqa xmm2, xmmword ptr [esp]
        pxor xmm1, xmm1
        movdqa xmm3, xmm2
        psubusb xmm2, xmm6
        psubusb xmm3, xmm4
        pcmpeqb xmm2, xmm1
        pcmpeqb xmm3, xmm1
        por xmm7, xmm2
        por xmm7, xmm3
        pavgb xmm5, xmm0
        pand xmm0, xmm7
        pandn xmm7, xmm5
        paddusb xmm0, xmm7
        movdqu xmmword ptr [edi], xmm0
        neg eax
        add esi, 0x10
        add edi, 0x10
        add edx, 0x10
        cmp edx, dword ptr [ebp + 0x18]
        jge L5B6169
        movdqa xmm2, xmmword ptr [ebx]
        movdqa xmmword ptr [esp], xmm2
        add ebx, 0x10
        jmp L5B6080
        L5B6169:
        _emit 0x29
        _emit 0xd6
        _emit 0x29
        _emit 0xd7
        mov ebx, dword ptr [ebp + 0x1c]
        movdqa xmm2, xmmword ptr [ebx]
        movdqa xmmword ptr [esp], xmm2
        add ebx, 0x10
        movq mm1, qword ptr [edi]
        punpcklbw mm1, mm1
        punpcklwd mm1, mm1
        punpckldq mm1, mm1
        mov edx, 0xfffffff8
        movq qword ptr [edi + edx], mm1
        mov edx, dword ptr [ebp + 0x18]
        movq mm1, qword ptr [edi + edx - 1]
        punpcklbw mm1, mm1
        punpcklwd mm1, mm1
        punpckldq mm1, mm1
        movq qword ptr [edi + edx], mm1
        _emit 0x31
        _emit 0xd2
        movq mm0, qword ptr [edi - 0x10]
        movq mm1, qword ptr [edi - 8]
        L5B61B0:
        movdqu xmm0, xmmword ptr [edi + edx]
        movdqu xmm1, xmmword ptr [edi + edx - 2]
        movdqu xmm3, xmmword ptr [edi + edx - 1]
        movdqa xmm4, xmm0
        movdqa xmm6, xmm0
        movdqa xmm5, xmm1
        pavgb xmm5, xmm3
        psubusb xmm4, xmm1
        psubusb xmm1, xmm0
        psubusb xmm6, xmm3
        psubusb xmm3, xmm0
        paddusb xmm4, xmm1
        paddusb xmm6, xmm3
        movdqa xmm2, xmmword ptr [esp]
        pxor xmm1, xmm1
        movdqa xmm7, xmm2
        psubusb xmm2, xmm4
        psubusb xmm7, xmm6
        pcmpeqb xmm2, xmm1
        pcmpeqb xmm7, xmm1
        por xmm7, xmm2
        movdqu xmm1, xmmword ptr [edi + edx + 1]
        movdqu xmm3, xmmword ptr [edi + edx + 2]
        movdqa xmm6, xmm0
        movdqa xmm4, xmm0
        movdqa xmm2, xmm1
        pavgb xmm1, xmm3
        psubusb xmm6, xmm2
        psubusb xmm2, xmm0
        psubusb xmm4, xmm3
        psubusb xmm3, xmm0
        paddusb xmm6, xmm2
        paddusb xmm4, xmm3
        pavgb xmm5, xmm1
        movdqa xmm2, xmmword ptr [esp]
        pxor xmm1, xmm1
        movdqa xmm3, xmm2
        psubusb xmm2, xmm6
        psubusb xmm3, xmm4
        pcmpeqb xmm2, xmm1
        pcmpeqb xmm3, xmm1
        por xmm7, xmm2
        por xmm7, xmm3
        pavgb xmm5, xmm0
        pand xmm0, xmm7
        pandn xmm7, xmm5
        paddusb xmm0, xmm7
        movq qword ptr [edi + edx - 0x10], mm0
        movq qword ptr [edi + edx - 8], mm1
        movdq2q mm0, xmm0
        psrldq xmm0, 8
        movdq2q mm1, xmm0
        add edx, 0x10
        cmp edx, dword ptr [ebp + 0x18]
        jge L5B62A7
        movdqa xmm2, xmmword ptr [ebx]
        movdqa xmmword ptr [esp], xmm2
        add ebx, 0x10
        jmp L5B61B0
        L5B62A7:
        movq qword ptr [edi + edx - 0x10], mm0
        cmp edx, dword ptr [ebp + 0x18]
        jne L5B62B6
        movq qword ptr [edi + edx - 8], mm1
        L5B62B6:
        _emit 0x1
        _emit 0xc6
        mov eax, dword ptr [ebp + 0x14]
        _emit 0x1
        _emit 0xc7
        mov eax, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ebp + 0x1c]
        movdqa xmm2, xmmword ptr [ebx]
        movdqa xmmword ptr [esp], xmm2
        add ebx, 0x10
        dec ecx
        jne L5B607E
        add esp, 0x10
        pop esp
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B62DF sub_5B62DF
__declspec(naked) void sub_5B62DF()
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
        mov eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x80], eax
        mov dword ptr [esp + 0x84], eax
        mov dword ptr [esp + 0x88], eax
        mov dword ptr [esp + 0x8c], eax
        add dword ptr [ebp + 0x10], 8
        L5B6317:
        mov esi, dword ptr [ebp + 8]
        pxor xmm0, xmm0
        mov eax, dword ptr [ebp + 0xc]
        _emit 0x89
        _emit 0xf7
        mov edx, dword ptr [ebp + 0x10]
        sub edx, 9
        imul edx, eax
        lea edi, [edi + edx]
        movq xmm1, qword ptr [edi]
        mov ecx, 8
        L5B6338:
        lea edi, [edi + eax]
        movq qword ptr [edi], xmm1
        dec ecx
        jne L5B6338
        neg eax
        _emit 0x89
        _emit 0xf7
        movq xmm1, qword ptr [edi]
        mov ecx, 8
        L5B634F:
        lea edi, [edi + eax]
        movq qword ptr [edi], xmm1
        dec ecx
        jne L5B634F
        lea esi, [esi + eax*8]
        neg eax
        pxor xmm5, xmm5
        pxor xmm6, xmm6
        pxor xmm7, xmm7
        _emit 0x89
        _emit 0xf7
        mov ecx, 0xf
        L5B6371:
        movq xmm1, qword ptr [edi]
        punpcklbw xmm1, xmm0
        paddw xmm5, xmm1
        pmullw xmm1, xmm1
        movdqa xmm2, xmm1
        punpcklwd xmm1, xmm0
        punpckhwd xmm2, xmm0
        paddd xmm6, xmm1
        paddd xmm7, xmm2
        lea edi, [edi + eax]
        dec ecx
        jne L5B6371
        _emit 0x31
        _emit 0xd2
        L5B639D:
        movq xmm1, qword ptr [esi]
        movq xmm2, qword ptr [edi]
        punpcklbw xmm1, xmm0
        punpcklbw xmm2, xmm0
        paddw xmm5, xmm2
        psubw xmm5, xmm1
        pmullw xmm2, xmm2
        movdqa xmm4, xmm2
        punpcklwd xmm2, xmm0
        punpckhwd xmm4, xmm0
        paddd xmm6, xmm2
        paddd xmm7, xmm4
        pmullw xmm1, xmm1
        movdqa xmm2, xmm1
        punpcklwd xmm1, xmm0
        psubd xmm6, xmm1
        punpckhwd xmm2, xmm0
        psubd xmm7, xmm2
        movdqa xmm3, xmm6
        pslld xmm3, 4
        psubd xmm3, xmm6
        movdqa xmm1, xmm5
        movdqa xmm4, xmm5
        pmullw xmm1, xmm1
        pmulhw xmm4, xmm4
        movdqa xmm2, xmm1
        punpcklwd xmm1, xmm4
        punpckhwd xmm2, xmm4
        movdqa xmm4, xmm7
        pslld xmm4, 4
        psubd xmm4, xmm7
        psubd xmm3, xmm1
        psubd xmm4, xmm2
        psubd xmm3, xmmword ptr [esp + 0x80]
        psubd xmm4, xmmword ptr [esp + 0x80]
        psrad xmm3, 0x1f
        psrad xmm4, 0x1f
        packssdw xmm3, xmm4
        packsswb xmm3, xmm0
        movq xmm1, qword ptr [esi + eax*8]
        movq xmm2, xmm1
        punpcklbw xmm1, xmm0
        paddw xmm1, xmm5
        _emit 0x89
        _emit 0xd1
        and ecx, 0x7f
        movdqu xmm4, xmmword ptr [ecx + ecx + 0x659b00]
        paddw xmm1, xmm4
        psraw xmm1, 4
        packuswb xmm1, xmm0
        pand xmm1, xmm3
        pandn xmm3, xmm2
        por xmm1, xmm3
        and ecx, 0xf
        movq qword ptr [esp + ecx*8], xmm1
        cmp edx, 8
        jl L5B649B
        _emit 0x89
        _emit 0xd1
        sub ecx, 8
        and ecx, 0xf
        movq mm0, qword ptr [esp + ecx*8]
        movq qword ptr [esi], mm0
        L5B649B:
        lea esi, [esi + eax]
        lea edi, [edi + eax]
        add edx, 1
        cmp edx, dword ptr [ebp + 0x10]
        jl L5B639D
        add dword ptr [ebp + 8], 8
        sub dword ptr [ebp + 0x14], 8
        cmp dword ptr [ebp + 0x14], 0
        jg L5B6317
        add esp, 0x90
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B64CA sub_5B64CA
__declspec(naked) void sub_5B64CA()
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
        sub esp, 0x10
        mov eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp], eax
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0xc], eax
        L5B64EE:
        _emit 0x31
        _emit 0xd2
        _emit 0x31
        _emit 0xc9
        mov esi, dword ptr [ebp + 8]
        movq mm1, qword ptr [esi]
        punpcklbw mm1, mm1
        punpcklwd mm1, mm1
        punpckldq mm1, mm1
        mov edi, 0xfffffff8
        movq qword ptr [esi + edi], mm1
        mov edx, dword ptr [ebp + 0x14]
        movq mm1, qword ptr [esi + edx - 1]
        punpcklbw mm1, mm1
        punpcklwd mm1, mm1
        punpckldq mm1, mm1
        movq qword ptr [esi + edx], mm1
        L5B651F:
        movzx eax, byte ptr [esi + edi]
        _emit 0x1
        _emit 0xc1
        mul al
        _emit 0x1
        _emit 0xc2
        add edi, 1
        cmp edi, 6
        jle L5B651F
        movd xmm7, edx
        movd xmm6, ecx
        mov esi, dword ptr [ebp + 8]
        _emit 0x31
        _emit 0xc9
        mov edx, dword ptr [ebp + 0x14]
        add edx, 8
        pxor mm0, mm0
        pxor mm1, mm1
        pxor xmm0, xmm0
        L5B654E:
        movd xmm1, dword ptr [esi + ecx - 8]
        movd xmm2, dword ptr [esi + ecx + 7]
        punpcklbw xmm1, xmm0
        punpcklbw xmm2, xmm0
        punpcklwd xmm1, xmm0
        punpcklwd xmm2, xmm0
        psubd xmm2, xmm1
        paddd xmm1, xmm1
        paddd xmm1, xmm2
        pmaddwd xmm1, xmm2
        paddd xmm6, xmm2
        paddd xmm7, xmm1
        pshufd xmm6, xmm6, 0
        pshufd xmm7, xmm7, 0
        psrldq xmm1, 4
        psrldq xmm2, 4
        pshufd xmm3, xmm1, 3
        pshufd xmm4, xmm2, 3
        paddd xmm6, xmm4
        paddd xmm7, xmm3
        pshufd xmm3, xmm1, 0x5f
        pshufd xmm4, xmm2, 0x5f
        paddd xmm7, xmm3
        paddd xmm6, xmm4
        pshufd xmm3, xmm1, 0xbf
        pshufd xmm4, xmm2, 0xbf
        paddd xmm7, xmm3
        paddd xmm6, xmm4
        movdqa xmm3, xmm6
        pmaddwd xmm3, xmm3
        movdqa xmm5, xmm7
        pslld xmm5, 4
        psubd xmm5, xmm7
        psubd xmm5, xmm3
        psubd xmm5, xmmword ptr [esp]
        psrad xmm5, 0x1f
        packssdw xmm5, xmm0
        packsswb xmm5, xmm0
        movd xmm1, dword ptr [esi + ecx]
        movq xmm2, xmm1
        punpcklbw xmm1, xmm0
        punpcklwd xmm1, xmm0
        paddd xmm1, xmm6
        paddd xmm1, xmmword ptr [g_75E3B0]
        psrad xmm1, 4
        packssdw xmm1, xmm0
        packuswb xmm1, xmm0
        pand xmm1, xmm5
        pandn xmm5, xmm2
        por xmm5, xmm1
        movd dword ptr [esi + ecx - 8], mm0
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        movdq2q mm1, xmm5
        psrldq xmm7, 0xc
        psrldq xmm6, 0xc
        add ecx, 4
        _emit 0x39
        _emit 0xd1
        jl L5B654E
        mov eax, dword ptr [ebp + 0xc]
        add dword ptr [ebp + 8], eax
        sub dword ptr [ebp + 0x10], 1
        cmp dword ptr [ebp + 0x10], 0
        jg L5B64EE
        add esp, 0x10
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

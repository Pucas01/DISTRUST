extern char g_75E000[];
extern char g_75E010[];
extern char g_75E030[];
extern char g_75E040[];
extern char g_75E080[];
extern char g_75E090[];

// FUNCTION: 0x5B5610 sub_5B5610
__declspec(naked) void sub_5B5610()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        movdqa xmm6, xmmword ptr [g_75E000]
        lea edx, [ecx + eax]
        neg eax
        movdqa xmm0, xmmword ptr [edx]
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm1, xmmword ptr [ecx + eax*2]
        movdqa xmm2, xmm1
        movdqa xmm3, xmm0
        psubusb xmm0, xmm1
        psubusb xmm1, xmm3
        por xmm1, xmm0
        pand xmm1, xmm6
        psrlw xmm1, 1
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm5, xmmword ptr [ecx + eax]
        movdqa xmm4, xmmword ptr [ecx]
        movdqa xmm0, xmm4
        movdqa xmm6, xmm5
        psubusb xmm5, xmm4
        psubusb xmm4, xmm6
        por xmm5, xmm4
        movdqa xmm4, xmmword ptr [g_75E010]
        paddusb xmm5, xmm5
        paddusb xmm5, xmm1
        psubusb xmm5, xmm7
        pxor xmm7, xmm7
        pcmpeqb xmm5, xmm7
        pxor xmm2, xmm4
        pxor xmm3, xmm4
        psubsb xmm2, xmm3
        pxor xmm6, xmm4
        pxor xmm0, xmm4
        movdqa xmm3, xmm0
        psubsb xmm0, xmm6
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        paddsb xmm2, xmm0
        pand xmm5, xmm2
        movdqa xmm0, xmm5
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm0, xmmword ptr [g_75E040]
        movdqa xmm1, xmmword ptr [g_75E080]
        movdqa xmm2, xmmword ptr [g_75E090]
        pcmpgtb xmm7, xmm0
        pand xmm7, xmm1
        psrlw xmm0, 3
        pand xmm0, xmm2
        por xmm0, xmm7
        psubsb xmm3, xmm0
        pxor xmm7, xmm7
        pcmpgtb xmm7, xmm5
        pand xmm7, xmm1
        psrlw xmm5, 3
        pand xmm5, xmm2
        por xmm5, xmm7
        paddsb xmm6, xmm5
        pxor xmm3, xmm4
        movdqa xmmword ptr [ecx], xmm3
        pxor xmm6, xmm4
        movdqa xmmword ptr [ecx + eax], xmm6
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5725 sub_5B5725
__declspec(naked) void sub_5B5725()
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
        lea esi, [esi - 2]
        lea edi, [esi + eax]
        lea edx, [esi + eax*4]
        lea ecx, [edx + eax]
        movd xmm0, dword ptr [esi]
        movd xmm1, dword ptr [edx]
        movd xmm2, dword ptr [edi]
        movd xmm3, dword ptr [ecx]
        punpckldq xmm0, xmm1
        punpckldq xmm2, xmm3
        movd xmm4, dword ptr [esi + eax*2]
        movd xmm5, dword ptr [edx + eax*2]
        movd xmm6, dword ptr [edi + eax*2]
        movd xmm7, dword ptr [ecx + eax*2]
        punpckldq xmm4, xmm5
        punpckldq xmm6, xmm7
        punpcklbw xmm0, xmm2
        punpcklbw xmm4, xmm6
        movdqa xmm1, xmm0
        punpcklwd xmm0, xmm4
        punpckhwd xmm1, xmm4
        movdqa xmm2, xmm0
        punpckldq xmm0, xmm1
        punpckhdq xmm2, xmm1
        lea esi, [esi + eax*8]
        lea edi, [esi + eax]
        lea edx, [esi + eax*4]
        lea ecx, [edx + eax]
        movd xmm4, dword ptr [esi]
        movd xmm1, dword ptr [edx]
        movd xmm6, dword ptr [edi]
        movd xmm3, dword ptr [ecx]
        punpckldq xmm4, xmm1
        punpckldq xmm6, xmm3
        movd xmm1, dword ptr [esi + eax*2]
        movd xmm5, dword ptr [edx + eax*2]
        movd xmm3, dword ptr [edi + eax*2]
        movd xmm7, dword ptr [ecx + eax*2]
        punpckldq xmm1, xmm5
        punpckldq xmm3, xmm7
        punpcklbw xmm4, xmm6
        punpcklbw xmm1, xmm3
        movdqa xmm7, xmm4
        punpcklwd xmm4, xmm1
        punpckhwd xmm7, xmm1
        movdqa xmm6, xmm4
        punpckldq xmm4, xmm7
        punpckhdq xmm6, xmm7
        movdqa xmm1, xmm0
        movdqa xmm3, xmm2
        punpcklqdq xmm0, xmm4
        punpckhqdq xmm1, xmm4
        punpcklqdq xmm2, xmm6
        punpckhqdq xmm3, xmm6
        mov edx, dword ptr [ebp + 0x10]
        movdqa xmm6, xmm0
        movdqa xmm7, xmm3
        psubusb xmm7, xmm0
        psubusb xmm6, xmm3
        por xmm6, xmm7
        pand xmm6, xmmword ptr [g_75E000]
        psrlw xmm6, 1
        movdqa xmm7, xmmword ptr [edx]
        movdqa xmm5, xmm1
        movdqa xmm4, xmm2
        psubusb xmm5, xmm2
        psubusb xmm4, xmm1
        por xmm5, xmm4
        paddusb xmm5, xmm5
        paddusb xmm5, xmm6
        movdqa xmm4, xmmword ptr [g_75E010]
        psubusb xmm5, xmm7
        pxor xmm7, xmm7
        pcmpeqb xmm5, xmm7
        movdqa xmmword ptr [esp], xmm0
        movdqa xmmword ptr [esp + 0x10], xmm3
        pxor xmm0, xmm4
        pxor xmm3, xmm4
        psubsb xmm0, xmm3
        pxor xmm1, xmm4
        pxor xmm2, xmm4
        movdqa xmm3, xmm2
        psubsb xmm2, xmm1
        paddsb xmm0, xmm2
        paddsb xmm0, xmm2
        paddsb xmm0, xmm2
        pand xmm5, xmm0
        movdqa xmm0, xmm5
        paddsb xmm5, xmmword ptr [g_75E030]
        paddsb xmm0, xmmword ptr [g_75E040]
        movdqa xmm6, xmmword ptr [g_75E080]
        movdqa xmm2, xmmword ptr [g_75E090]
        pcmpgtb xmm7, xmm0
        pand xmm7, xmm6
        psrlw xmm0, 3
        pand xmm0, xmm2
        por xmm0, xmm7
        psubsb xmm3, xmm0
        pxor xmm7, xmm7
        pcmpgtb xmm7, xmm5
        pand xmm7, xmm6
        psrlw xmm5, 3
        pand xmm5, xmm2
        por xmm5, xmm7
        paddsb xmm1, xmm5
        pxor xmm3, xmm4
        pxor xmm1, xmm4
        movdqa xmm0, xmmword ptr [esp]
        movdqa xmm4, xmmword ptr [esp + 0x10]
        lea edx, [esi + eax*4]
        movdqa xmm6, xmm0
        punpcklbw xmm0, xmm1
        punpckhbw xmm6, xmm1
        movdqa xmm5, xmm3
        punpcklbw xmm3, xmm4
        punpckhbw xmm5, xmm4
        movdqa xmm2, xmm0
        punpcklwd xmm0, xmm3
        punpckhwd xmm2, xmm3
        movdqa xmm3, xmm6
        punpcklwd xmm6, xmm5
        punpckhwd xmm3, xmm5
        movd dword ptr [esi], xmm6
        movd dword ptr [edx], xmm3
        psrldq xmm6, 4
        psrldq xmm3, 4
        movd dword ptr [edi], xmm6
        movd dword ptr [ecx], xmm3
        psrldq xmm6, 4
        psrldq xmm3, 4
        movd dword ptr [esi + eax*2], xmm6
        movd dword ptr [edx + eax*2], xmm3
        psrldq xmm6, 4
        psrldq xmm3, 4
        movd dword ptr [edi + eax*2], xmm6
        movd dword ptr [ecx + eax*2], xmm3
        neg eax
        lea esi, [esi + eax*8]
        neg eax
        lea edi, [esi + eax]
        lea edx, [esi + eax*4]
        lea ecx, [edx + eax]
        movd dword ptr [esi], xmm0
        movd dword ptr [edx], xmm2
        psrldq xmm0, 4
        psrldq xmm2, 4
        movd dword ptr [edi], xmm0
        movd dword ptr [ecx], xmm2
        psrldq xmm0, 4
        psrldq xmm2, 4
        movd dword ptr [esi + eax*2], xmm0
        movd dword ptr [edx + eax*2], xmm2
        psrldq xmm0, 4
        psrldq xmm2, 4
        movd dword ptr [edi + eax*2], xmm0
        movd dword ptr [ecx + eax*2], xmm2
        add esp, 0x20
        pop esp
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B59E0 sub_5B59E0
__declspec(naked) void sub_5B59E0()
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
        lea ecx, [ecx + eax*8]
        pxor xmm6, xmm6
        L5B59FB:
        movq xmm0, qword ptr [esi]
        movq xmm2, qword ptr [esi + 8]
        movq xmm1, qword ptr [edi]
        movq xmm3, qword ptr [edi + 8]
        movq xmm4, qword ptr [esi + eax]
        movq xmm5, qword ptr [edi + edx]
        punpcklbw xmm0, xmm2
        punpcklbw xmm1, xmm3
        psadbw xmm0, xmm1
        movq xmm2, qword ptr [esi + eax + 8]
        movq xmm3, qword ptr [edi + edx + 8]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        punpcklbw xmm4, xmm2
        punpcklbw xmm5, xmm3
        psadbw xmm4, xmm5
        paddw xmm6, xmm0
        paddw xmm6, xmm4
        _emit 0x39
        _emit 0xce
        jne L5B59FB
        movq xmm0, xmm6
        psrldq xmm6, 8
        paddw xmm0, xmm6
        movd eax, xmm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5A62 sub_5B5A62
__declspec(naked) void sub_5B5A62()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [esi + ebx*8]
        lea ecx, [ecx + ebx*8]
        pxor mm7, mm7
        L5B5A7D:
        movd eax, mm7
        cmp eax, dword ptr [ebp + 0x18]
        ja L5B5AAC
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [esi + ebx]
        movq mm3, qword ptr [edi + edx]
        psadbw mm0, mm1
        psadbw mm2, mm3
        lea esi, [esi + ebx*2]
        lea edi, [edi + edx*2]
        paddw mm7, mm0
        paddw mm7, mm2
        _emit 0x39
        _emit 0xce
        jne L5B5A7D
        movd eax, mm7
        L5B5AAC:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5AB1 sub_5B5AB1
__declspec(naked) void sub_5B5AB1()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [esi + ebx*8]
        pxor mm7, mm7
        L5B5AC9:
        movd eax, mm7
        cmp eax, dword ptr [ebp + 0x18]
        ja L5B5AE9
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        psadbw mm0, mm1
        lea esi, [esi + ebx]
        _emit 0x1
        _emit 0xd7
        paddw mm7, mm0
        _emit 0x39
        _emit 0xce
        jne L5B5AC9
        movd eax, mm7
        L5B5AE9:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5AEE sub_5B5AEE
__declspec(naked) void sub_5B5AEE()
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
        movd mm0, dword ptr [esi]
        movd mm1, dword ptr [edi]
        movd mm2, dword ptr [esi + eax]
        movd mm3, dword ptr [edi + edx]
        punpcklbw mm0, mm2
        punpcklbw mm1, mm3
        psadbw mm0, mm1
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movd mm4, dword ptr [esi]
        movd mm5, dword ptr [edi]
        movd mm6, dword ptr [esi + eax]
        movd mm7, dword ptr [edi + edx]
        punpcklbw mm4, mm6
        punpcklbw mm5, mm7
        psadbw mm4, mm5
        paddw mm0, mm4
        movd eax, mm0
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5B3D sub_5B5B3D
__declspec(naked) void sub_5B5B3D()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        lea ecx, [esi + ebx*8]
        pxor mm7, mm7
        L5B5B55:
        movd eax, mm7
        cmp eax, dword ptr [ebp + 0x18]
        ja L5B5BA2
        movq mm0, qword ptr [esi]
        movq mm2, qword ptr [esi + 8]
        movq mm1, qword ptr [edi]
        movq mm3, qword ptr [edi + 8]
        movq mm4, qword ptr [esi + ebx]
        movq mm5, qword ptr [edi + edx]
        psadbw mm0, mm1
        psadbw mm2, mm3
        movq mm1, qword ptr [esi + ebx + 8]
        movq mm3, qword ptr [edi + edx + 8]
        psadbw mm4, mm5
        psadbw mm1, mm3
        lea esi, [esi + ebx*2]
        lea edi, [edi + edx*2]
        paddw mm0, mm2
        paddw mm4, mm1
        paddw mm7, mm0
        paddw mm7, mm4
        _emit 0x39
        _emit 0xce
        jne L5B5B55
        movd eax, mm7
        L5B5BA2:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B5BA7 sub_5B5BA7
__declspec(naked) void sub_5B5BA7()
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
        mov ecx, dword ptr [ebp + 0x18]
        L5B5BBB:
        movdqu xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [esi + 0x10]
        movdqu xmm2, xmmword ptr [esi + eax]
        movdqu xmm3, xmmword ptr [esi + eax + 0x10]
        lea esi, [esi + eax*2]
        movdqu xmm4, xmmword ptr [esi]
        movdqu xmm5, xmmword ptr [esi + 0x10]
        movdqu xmm6, xmmword ptr [esi + eax]
        movdqu xmm7, xmmword ptr [esi + eax + 0x10]
        lea esi, [esi + eax*2]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm1
        movdqa xmmword ptr [edi + edx], xmm2
        movdqa xmmword ptr [edi + edx + 0x10], xmm3
        lea edi, [edi + edx*2]
        movdqa xmmword ptr [edi], xmm4
        movdqa xmmword ptr [edi + 0x10], xmm5
        movdqa xmmword ptr [edi + edx], xmm6
        movdqa xmmword ptr [edi + edx + 0x10], xmm7
        lea edi, [edi + edx*2]
        sub ecx, 4
        cmp ecx, 4
        jge L5B5BBB
        cmp ecx, 0
        je L5B5C41
        L5B5C24:
        movdqu xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [esi + 0x10]
        lea esi, [esi + eax]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm1
        lea edi, [edi + edx]
        sub ecx, 1
        jne L5B5C24
        L5B5C41:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

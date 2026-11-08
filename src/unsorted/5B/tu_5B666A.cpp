void sub_5CAAD1();

// FUNCTION: 0x5B666A sub_5B666A
__declspec(naked) void sub_5B666A()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        L5B666F:
        call sub_5CAAD1
        mov ecx, dword ptr [ebp + 0xc]
        and eax, 0xff
        _emit 0x1
        _emit 0xc1
        mov edx, dword ptr [ebp + 0x10]
        _emit 0x89
        _emit 0xcf
        mov ecx, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 8]
        _emit 0x31
        _emit 0xc0
        L5B668B:
        movdqu xmm1, xmmword ptr [esi + eax]
        psubusb xmm1, xmmword ptr [edx]
        paddusb xmm1, xmmword ptr [edx + 0x20]
        psubusb xmm1, xmmword ptr [edx + 0x10]
        movdqu xmm2, xmmword ptr [edi + eax]
        paddb xmm1, xmm2
        movdqu xmmword ptr [esi + eax], xmm1
        add eax, 0x10
        _emit 0x39
        _emit 0xc8
        jl L5B668B
        mov eax, dword ptr [ebp + 0x24]
        add dword ptr [ebp + 8], eax
        sub dword ptr [ebp + 0x20], 1
        jg L5B666F
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B66D0 sub_5B66D0
__declspec(naked) void sub_5B66D0()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm5, xmmword ptr [edi]
        lddqu xmm6, xmmword ptr [edi + 1]
        lddqu xmm7, xmmword ptr [edi + 2]
        psadbw xmm5, xmm0
        psadbw xmm6, xmm0
        psadbw xmm7, xmm0
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        mov ecx, dword ptr [ebp + 0x18]
        movq xmm0, xmm5
        psrldq xmm5, 8
        paddw xmm0, xmm5
        movd dword ptr [ecx], xmm0
        movq xmm0, xmm6
        psrldq xmm6, 8
        paddw xmm0, xmm6
        movd dword ptr [ecx + 4], xmm0
        movq xmm0, xmm7
        psrldq xmm7, 8
        paddw xmm0, xmm7
        movd dword ptr [ecx + 8], xmm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B69FD sub_5B69FD
__declspec(naked) void sub_5B69FD()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm5, xmmword ptr [edi]
        lddqu xmm6, xmmword ptr [edi + 1]
        lddqu xmm7, xmmword ptr [edi + 2]
        psadbw xmm5, xmm0
        psadbw xmm6, xmm0
        psadbw xmm7, xmm0
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [edi]
        lddqu xmm2, xmmword ptr [edi + 1]
        lddqu xmm3, xmmword ptr [edi + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [edi + edx]
        lddqu xmm2, xmmword ptr [edi + edx + 1]
        lddqu xmm3, xmmword ptr [edi + edx + 2]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm5, xmm1
        paddw xmm6, xmm2
        paddw xmm7, xmm3
        mov ecx, dword ptr [ebp + 0x18]
        movq xmm0, xmm5
        psrldq xmm5, 8
        paddw xmm0, xmm5
        movd dword ptr [ecx], xmm0
        movq xmm0, xmm6
        psrldq xmm6, 8
        paddw xmm0, xmm6
        movd dword ptr [ecx + 4], xmm0
        movq xmm0, xmm7
        psrldq xmm7, 8
        paddw xmm0, xmm7
        movd dword ptr [ecx + 8], xmm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B6BB2 sub_5B6BB2
__declspec(naked) void sub_5B6BB2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movq mm0, qword ptr [esi]
        movq mm5, qword ptr [edi]
        movq mm6, qword ptr [edi + 1]
        movq mm7, qword ptr [edi + 2]
        psadbw mm5, mm0
        psadbw mm6, mm0
        psadbw mm7, mm0
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        mov ecx, dword ptr [ebp + 0x18]
        punpckldq mm5, mm6
        movq qword ptr [ecx], mm5
        movd dword ptr [ecx + 8], mm7
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B6E17 sub_5B6E17
__declspec(naked) void sub_5B6E17()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        movq mm0, qword ptr [esi]
        movq mm5, qword ptr [edi]
        movq mm6, qword ptr [edi + 1]
        movq mm7, qword ptr [edi + 2]
        psadbw mm5, mm0
        psadbw mm6, mm0
        psadbw mm7, mm0
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [edi]
        movq mm2, qword ptr [edi + 1]
        movq mm3, qword ptr [edi + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [edi + edx]
        movq mm2, qword ptr [edi + edx + 1]
        movq mm3, qword ptr [edi + edx + 2]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm5, mm1
        paddw mm6, mm2
        paddw mm7, mm3
        mov ecx, dword ptr [ebp + 0x18]
        punpckldq mm5, mm6
        movq qword ptr [ecx], mm5
        movd dword ptr [ecx + 8], mm7
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B6F54 sub_5B6F54
__declspec(naked) void sub_5B6F54()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
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
        movd mm4, dword ptr [edi + 1]
        movd mm5, dword ptr [edi + 2]
        movd mm2, dword ptr [edi + edx + 1]
        movd mm3, dword ptr [edi + edx + 2]
        psadbw mm1, mm0
        punpcklbw mm4, mm2
        punpcklbw mm5, mm3
        psadbw mm4, mm0
        psadbw mm5, mm0
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movd mm0, dword ptr [esi]
        movd mm2, dword ptr [edi]
        movd mm3, dword ptr [esi + eax]
        movd mm6, dword ptr [edi + edx]
        punpcklbw mm0, mm3
        punpcklbw mm2, mm6
        movd mm3, dword ptr [edi + 1]
        movd mm7, dword ptr [edi + 2]
        psadbw mm2, mm0
        paddw mm1, mm2
        movd mm2, dword ptr [edi + edx + 1]
        movd mm6, dword ptr [edi + edx + 2]
        punpcklbw mm3, mm2
        punpcklbw mm7, mm6
        psadbw mm3, mm0
        psadbw mm7, mm0
        paddw mm3, mm4
        paddw mm7, mm5
        mov ecx, dword ptr [ebp + 0x18]
        punpckldq mm1, mm3
        movq qword ptr [ecx], mm1
        movd dword ptr [ecx + 8], mm7
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B6FF1 sub_5B6FF1
__declspec(naked) void sub_5B6FF1()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        mov ecx, 4
        pxor xmm7, xmm7
        L5B700C:
        movdqa xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [edi]
        movdqa xmm2, xmmword ptr [esi + eax]
        movdqu xmm3, xmmword ptr [edi + edx]
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        movdqa xmm4, xmmword ptr [esi]
        movdqu xmm5, xmmword ptr [edi]
        movdqa xmm6, xmmword ptr [esi + eax]
        psadbw xmm0, xmm1
        movdqu xmm1, xmmword ptr [edi + edx]
        psadbw xmm2, xmm3
        psadbw xmm4, xmm5
        psadbw xmm6, xmm1
        lea esi, [esi + eax*2]
        lea edi, [edi + edx*2]
        paddw xmm7, xmm0
        paddw xmm7, xmm2
        paddw xmm7, xmm4
        paddw xmm7, xmm6
        sub ecx, 1
        jne L5B700C
        movq xmm0, xmm7
        psrldq xmm7, 8
        paddw xmm0, xmm7
        movd eax, xmm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7077 sub_5B7077
__declspec(naked) void sub_5B7077()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x14]
        L5B7089:
        lea ecx, [esi + eax*2]
        movdqu xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [esi + 0x10]
        movdqu xmm2, xmmword ptr [esi + eax]
        movdqu xmm3, xmmword ptr [esi + eax + 0x10]
        movdqu xmm4, xmmword ptr [ecx]
        movdqu xmm5, xmmword ptr [ecx + 0x10]
        movdqu xmm6, xmmword ptr [ecx + eax]
        movdqu xmm7, xmmword ptr [ecx + eax + 0x10]
        lea esi, [esi + eax*4]
        lea ecx, [edi + edx*2]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm1
        movdqa xmmword ptr [edi + edx], xmm2
        movdqa xmmword ptr [edi + edx + 0x10], xmm3
        movdqa xmmword ptr [ecx], xmm4
        movdqa xmmword ptr [ecx + 0x10], xmm5
        movdqa xmmword ptr [ecx + edx], xmm6
        movdqa xmmword ptr [ecx + edx + 0x10], xmm7
        lea edi, [edi + edx*4]
        sub dword ptr [ebp + 0x18], 4
        cmp dword ptr [ebp + 0x18], 4
        jge L5B7089
        cmp dword ptr [ebp + 0x18], 0
        je L5B7113
        L5B70F5:
        movdqu xmm0, xmmword ptr [esi]
        movdqu xmm1, xmmword ptr [esi + 0x10]
        lea esi, [esi + eax]
        movdqa xmmword ptr [edi], xmm0
        movdqa xmmword ptr [edi + 0x10], xmm1
        lea edi, [edi + edx]
        sub dword ptr [ebp + 0x18], 1
        jne L5B70F5
        L5B7113:
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

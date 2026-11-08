extern char g_75E3C0[];
extern char g_75E3D0[];
extern char g_75E3E0[];
extern char g_75E3F0[];

// FUNCTION: 0x5B7118 sub_5B7118
__declspec(naked) void sub_5B7118()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        push ebp
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0xc]
        mov ebp, dword ptr [ebp + 0x14]
        xchg ebx, eax
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm4, xmmword ptr [ecx]
        lddqu xmm5, xmmword ptr [edx]
        lddqu xmm6, xmmword ptr [ebx]
        lddqu xmm7, xmmword ptr [edi]
        psadbw xmm4, xmm0
        psadbw xmm5, xmm0
        psadbw xmm6, xmm0
        psadbw xmm7, xmm0
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        pop ebp
        mov ecx, dword ptr [ebp + 0x18]
        movq xmm0, xmm4
        psrldq xmm4, 8
        paddw xmm0, xmm4
        movd dword ptr [ecx], xmm0
        movq xmm0, xmm5
        psrldq xmm5, 8
        paddw xmm0, xmm5
        movd dword ptr [ecx + 4], xmm0
        movq xmm0, xmm6
        psrldq xmm6, 8
        paddw xmm0, xmm6
        movd dword ptr [ecx + 8], xmm0
        movq xmm0, xmm7
        psrldq xmm7, 8
        paddw xmm0, xmm7
        movd dword ptr [ecx + 0xc], xmm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7548 sub_5B7548
__declspec(naked) void sub_5B7548()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        push ebp
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0xc]
        mov ebp, dword ptr [ebp + 0x14]
        xchg ebx, eax
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm4, xmmword ptr [ecx]
        lddqu xmm5, xmmword ptr [edx]
        lddqu xmm6, xmmword ptr [ebx]
        lddqu xmm7, xmmword ptr [edi]
        psadbw xmm4, xmm0
        psadbw xmm5, xmm0
        psadbw xmm6, xmm0
        psadbw xmm7, xmm0
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi]
        lddqu xmm1, xmmword ptr [ecx]
        lddqu xmm2, xmmword ptr [edx]
        lddqu xmm3, xmmword ptr [ebx]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        movdqa xmm0, xmmword ptr [esi + eax]
        lddqu xmm1, xmmword ptr [ecx + ebp]
        lddqu xmm2, xmmword ptr [edx + ebp]
        lddqu xmm3, xmmword ptr [ebx + ebp]
        psadbw xmm1, xmm0
        psadbw xmm2, xmm0
        psadbw xmm3, xmm0
        paddw xmm4, xmm1
        lddqu xmm1, xmmword ptr [edi + ebp]
        paddw xmm5, xmm2
        paddw xmm6, xmm3
        psadbw xmm1, xmm0
        paddw xmm7, xmm1
        pop ebp
        mov ecx, dword ptr [ebp + 0x18]
        movq xmm0, xmm4
        psrldq xmm4, 8
        paddw xmm0, xmm4
        movd dword ptr [ecx], xmm0
        movq xmm0, xmm5
        psrldq xmm5, 8
        paddw xmm0, xmm5
        movd dword ptr [ecx + 4], xmm0
        movq xmm0, xmm6
        psrldq xmm6, 8
        paddw xmm0, xmm6
        movd dword ptr [ecx + 8], xmm0
        movq xmm0, xmm7
        psrldq xmm7, 8
        paddw xmm0, xmm7
        movd dword ptr [ecx + 0xc], xmm0
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7788 sub_5B7788
__declspec(naked) void sub_5B7788()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        push ebp
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0xc]
        mov ebp, dword ptr [ebp + 0x14]
        xchg ebx, eax
        movq mm0, qword ptr [esi]
        movq mm4, qword ptr [ecx]
        movq mm5, qword ptr [edx]
        movq mm6, qword ptr [ebx]
        movq mm7, qword ptr [edi]
        psadbw mm4, mm0
        psadbw mm5, mm0
        psadbw mm6, mm0
        psadbw mm7, mm0
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        pop ebp
        mov ecx, dword ptr [ebp + 0x18]
        punpckldq mm4, mm5
        punpckldq mm6, mm7
        movq qword ptr [ecx], mm4
        movq qword ptr [ecx + 8], mm6
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7AB2 sub_5B7AB2
__declspec(naked) void sub_5B7AB2()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        push ebp
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0xc]
        mov ebp, dword ptr [ebp + 0x14]
        xchg ebx, eax
        movq mm0, qword ptr [esi]
        movq mm4, qword ptr [ecx]
        movq mm5, qword ptr [edx]
        movq mm6, qword ptr [ebx]
        movq mm7, qword ptr [edi]
        psadbw mm4, mm0
        psadbw mm5, mm0
        psadbw mm6, mm0
        psadbw mm7, mm0
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi]
        movq mm1, qword ptr [ecx]
        movq mm2, qword ptr [edx]
        movq mm3, qword ptr [ebx]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        movq mm0, qword ptr [esi + eax]
        movq mm1, qword ptr [ecx + ebp]
        movq mm2, qword ptr [edx + ebp]
        movq mm3, qword ptr [ebx + ebp]
        psadbw mm1, mm0
        psadbw mm2, mm0
        psadbw mm3, mm0
        paddw mm4, mm1
        movq mm1, qword ptr [edi + ebp]
        paddw mm5, mm2
        paddw mm6, mm3
        psadbw mm1, mm0
        paddw mm7, mm1
        pop ebp
        mov ecx, dword ptr [ebp + 0x18]
        punpckldq mm4, mm5
        punpckldq mm6, mm7
        movq qword ptr [ecx], mm4
        movq qword ptr [ecx + 8], mm6
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7C54 sub_5B7C54
__declspec(naked) void sub_5B7C54()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        push ebx
        push ebp
        mov edi, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 8]
        mov edi, dword ptr [edi + 0xc]
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0xc]
        mov ebp, dword ptr [ebp + 0x14]
        xchg ebx, eax
        movd mm0, dword ptr [esi]
        movd mm1, dword ptr [ecx]
        movd mm2, dword ptr [esi + eax]
        movd mm3, dword ptr [ecx + ebp]
        punpcklbw mm0, mm2
        punpcklbw mm1, mm3
        movd mm4, dword ptr [edx]
        movd mm5, dword ptr [ebx]
        movd mm6, dword ptr [edi]
        movd mm2, dword ptr [edx + ebp]
        movd mm3, dword ptr [ebx + ebp]
        movd mm7, dword ptr [edi + ebp]
        psadbw mm1, mm0
        punpcklbw mm4, mm2
        punpcklbw mm5, mm3
        punpcklbw mm6, mm7
        psadbw mm4, mm0
        psadbw mm5, mm0
        psadbw mm6, mm0
        lea esi, [esi + eax*2]
        lea ecx, [ecx + ebp*2]
        lea edx, [edx + ebp*2]
        lea ebx, [ebx + ebp*2]
        lea edi, [edi + ebp*2]
        movd mm0, dword ptr [esi]
        movd mm2, dword ptr [ecx]
        movd mm3, dword ptr [esi + eax]
        movd mm7, dword ptr [ecx + ebp]
        punpcklbw mm0, mm3
        punpcklbw mm2, mm7
        movd mm3, dword ptr [edx]
        movd mm7, dword ptr [ebx]
        psadbw mm2, mm0
        _emit 0x89
        _emit 0xe8
        pop ebp
        mov esi, dword ptr [ebp + 0x18]
        paddw mm1, mm2
        movd dword ptr [esi], mm1
        movd mm2, dword ptr [edx + eax]
        movd mm1, dword ptr [ebx + eax]
        punpcklbw mm3, mm2
        punpcklbw mm7, mm1
        psadbw mm3, mm0
        psadbw mm7, mm0
        movd mm2, dword ptr [edi]
        movd mm1, dword ptr [edi + eax]
        paddw mm3, mm4
        paddw mm7, mm5
        movd dword ptr [esi + 4], mm3
        punpcklbw mm2, mm1
        movd dword ptr [esi + 8], mm7
        psadbw mm2, mm0
        paddw mm2, mm6
        movd dword ptr [esi + 0xc], mm2
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7D30 sub_5B7D30
__declspec(naked) void sub_5B7D30()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0xc]
        movq mm0, qword ptr [eax]
        movq mm1, qword ptr [eax + 8]
        movq mm2, qword ptr [eax + 0x10]
        movq mm3, qword ptr [eax + 0x18]
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x14]
        mov edi, dword ptr [ebp + 0x18]
        psubw mm0, mm2
        paddw mm2, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        paddw mm2, mm0
        pmulhw mm5, qword ptr [g_75E3C0]
        paddw mm5, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        pmulhw mm7, qword ptr [g_75E3D0]
        paddw mm7, mm3
        psubw mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        pmulhw mm5, qword ptr [g_75E3D0]
        paddw mm5, mm1
        pmulhw mm3, qword ptr [g_75E3C0]
        paddw mm3, mm4
        paddw mm3, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        paddw mm2, mm3
        paddw mm4, mm7
        psubw mm0, mm7
        psubw mm6, mm3
        _emit 0x0f
        _emit 0x6f
        _emit 0xca
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpcklwd mm1, mm0
        punpckhwd mm2, mm0
        punpcklwd mm3, mm6
        punpckhwd mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        _emit 0x0f
        _emit 0x6f
        _emit 0xdd
        psubw mm0, mm2
        paddw mm2, mm2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        paddw mm2, mm0
        pmulhw mm5, qword ptr [g_75E3C0]
        paddw mm5, mm1
        _emit 0x0f
        _emit 0x6f
        _emit 0xfb
        pmulhw mm7, qword ptr [g_75E3D0]
        paddw mm7, mm3
        psubw mm7, mm5
        _emit 0x0f
        _emit 0x6f
        _emit 0xe9
        _emit 0x0f
        _emit 0x6f
        _emit 0xe3
        pmulhw mm5, qword ptr [g_75E3D0]
        paddw mm5, mm1
        pmulhw mm3, qword ptr [g_75E3C0]
        paddw mm3, mm4
        paddw mm3, mm5
        paddw mm0, qword ptr [g_75E3E0]
        paddw mm2, qword ptr [g_75E3E0]
        _emit 0x0f
        _emit 0x6f
        _emit 0xf2
        _emit 0x0f
        _emit 0x6f
        _emit 0xe0
        paddw mm2, mm3
        paddw mm4, mm7
        psubw mm0, mm7
        psubw mm6, mm3
        psraw mm2, 3
        psraw mm0, 3
        psraw mm4, 3
        psraw mm6, 3
        _emit 0x0f
        _emit 0x6f
        _emit 0xca
        _emit 0x0f
        _emit 0x6f
        _emit 0xdc
        punpcklwd mm1, mm0
        punpckhwd mm2, mm0
        punpcklwd mm3, mm6
        punpckhwd mm4, mm6
        _emit 0x0f
        _emit 0x6f
        _emit 0xc1
        _emit 0x0f
        _emit 0x6f
        _emit 0xea
        punpckldq mm0, mm3
        punpckhdq mm1, mm3
        punpckldq mm2, mm4
        punpckhdq mm5, mm4
        pxor mm7, mm7
        movd mm4, dword ptr [esi]
        punpcklbw mm4, mm7
        paddsw mm0, mm4
        packuswb mm0, mm7
        movd dword ptr [edx], mm0
        movd mm4, dword ptr [esi + eax]
        punpcklbw mm4, mm7
        paddsw mm1, mm4
        packuswb mm1, mm7
        movd dword ptr [edx + edi], mm1
        movd mm4, dword ptr [esi + eax*2]
        punpcklbw mm4, mm7
        paddsw mm2, mm4
        packuswb mm2, mm7
        movd dword ptr [edx + edi*2], mm2
        _emit 0x1
        _emit 0xfa
        _emit 0x1
        _emit 0xc6
        movd mm4, dword ptr [esi + eax*2]
        punpcklbw mm4, mm7
        paddsw mm5, mm4
        packuswb mm5, mm7
        movd dword ptr [edx + edi*2], mm5
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7EB3 sub_5B7EB3
__declspec(naked) void sub_5B7EB3()
{
    __asm {
        push ebp
        _emit 0x89
        _emit 0xe5
        movd mm5, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        pxor mm0, mm0
        paddw mm5, qword ptr [g_75E3E0]
        lea ecx, [edx + edx*2]
        psraw mm5, 3
        punpcklwd mm5, mm5
        punpckldq mm5, mm5
        movd mm1, dword ptr [eax]
        movd mm2, dword ptr [eax + edx]
        movd mm3, dword ptr [eax + edx*2]
        movd mm4, dword ptr [eax + ecx]
        mov eax, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x18]
        punpcklbw mm1, mm0
        paddsw mm1, mm5
        packuswb mm1, mm0
        lea ecx, [edx + edx*2]
        punpcklbw mm2, mm0
        paddsw mm2, mm5
        packuswb mm2, mm0
        punpcklbw mm3, mm0
        paddsw mm3, mm5
        packuswb mm3, mm0
        punpcklbw mm4, mm0
        paddsw mm4, mm5
        packuswb mm4, mm0
        movd dword ptr [eax], mm1
        movd dword ptr [eax + edx], mm2
        movd dword ptr [eax + edx*2], mm3
        movd dword ptr [eax + ecx], mm4
        pop ebp
        ret
    }
}

// FUNCTION: 0x5B7F30 vp8_filter_block1d8_h6_sse2
__declspec(naked) void vp8_filter_block1d8_h6_sse2()
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
        L5B7F48:
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
        punpcklbw xmm4, xmm0
        movdqa xmmword ptr [edi], xmm4
        lea esi, [esi + eax]
        add edi, dword ptr [ebp + 0x1c]
        dec ecx
        jne L5B7F48
        pop edi
        pop esi
        pop ebp
        ret
    }
}

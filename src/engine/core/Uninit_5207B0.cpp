// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem5207B0 {
    char b[8];
};
struct Alloc5207B0 {
    void construct(Elem5207B0* dst, Elem5207B0* src);
};

// FUNCTION: 0x5207B0 ?umoveLoop5207B0@@YAPAUElem5207B0@@PAU1@00PAUAlloc5207B0@@0UDTag@@@Z
Elem5207B0* __cdecl umoveLoop5207B0(Elem5207B0* first, Elem5207B0* last, Elem5207B0* dest, Alloc5207B0* al, Elem5207B0* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}

// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem547ED0 {
    char b[72];
};
struct Alloc547ED0 {
    void construct(Elem547ED0* dst, Elem547ED0* src);
};

// FUNCTION: 0x547ED0 ?umoveLoop547ED0@@YAPAUElem547ED0@@PAU1@00PAUAlloc547ED0@@0UDTag@@@Z
Elem547ED0* __cdecl umoveLoop547ED0(Elem547ED0* first, Elem547ED0* last, Elem547ED0* dest, Alloc547ED0* al, Elem547ED0* nul, DTag t)
{
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        throw;
    }
    return dest;
}

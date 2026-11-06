// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50E4D0 {
    char b[8];
    ~Elem50E4D0();
};
struct Alloc50E4D0 {
    void construct(Elem50E4D0* dst, Elem50E4D0* src);
};

// FUNCTION: 0x50E4D0 ?umoveLoop50E4D0@@YAPAUElem50E4D0@@PAU1@00PAUAlloc50E4D0@@0UDTag@@@Z
Elem50E4D0* __cdecl umoveLoop50E4D0(Elem50E4D0* first, Elem50E4D0* last, Elem50E4D0* dest, Alloc50E4D0* al, Elem50E4D0* nul, DTag t)
{
    Elem50E4D0* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem50E4D0();
        throw;
    }
    return dest;
}

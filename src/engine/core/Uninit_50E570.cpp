// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50E570 {
    char b[8];
    ~Elem50E570();
};
struct Alloc50E570 {
    void construct(Elem50E570* dst, Elem50E570* src);
};

// FUNCTION: 0x50E570 ?umoveLoop50E570@@YAPAUElem50E570@@PAU1@00PAUAlloc50E570@@0UDTag@@@Z
Elem50E570* __cdecl umoveLoop50E570(Elem50E570* first, Elem50E570* last, Elem50E570* dest, Alloc50E570* al, Elem50E570* nul, DTag t)
{
    Elem50E570* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem50E570();
        throw;
    }
    return dest;
}

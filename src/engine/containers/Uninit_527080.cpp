// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem527080 {
    char b[8];
    ~Elem527080();
};
struct Alloc527080 {
    void construct(Elem527080* dst, Elem527080* src);
};

// FUNCTION: 0x527080 ?umoveLoop527080@@YAPAUElem527080@@PAU1@00PAUAlloc527080@@0UDTag@@@Z
Elem527080* __cdecl umoveLoop527080(Elem527080* first, Elem527080* last, Elem527080* dest, Alloc527080* al, Elem527080* nul, DTag t)
{
    Elem527080* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem527080();
        throw;
    }
    return dest;
}

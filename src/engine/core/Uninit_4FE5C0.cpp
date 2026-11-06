// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4FE5C0 {
    char b[8];
    ~Elem4FE5C0();
};
struct Alloc4FE5C0 {
    void construct(Elem4FE5C0* dst, Elem4FE5C0* src);
};

// FUNCTION: 0x4FE5C0 ?umoveLoop4FE5C0@@YAPAUElem4FE5C0@@PAU1@00PAUAlloc4FE5C0@@0UDTag@@@Z
Elem4FE5C0* __cdecl umoveLoop4FE5C0(Elem4FE5C0* first, Elem4FE5C0* last, Elem4FE5C0* dest, Alloc4FE5C0* al, Elem4FE5C0* nul, DTag t)
{
    Elem4FE5C0* start = dest;
    try {
        for (; first != last; ++dest, ++first)
            al->construct(dest, first);
    } catch (...) {
        for (; start != dest; ++start)
            start->~Elem4FE5C0();
        throw;
    }
    return dest;
}

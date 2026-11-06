// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem50F250 {
    char b[8];
};
void __cdecl destroyRange_50E1A0(Elem50F250* first, Elem50F250* last, char* al, DTag t);

struct Vec50F250 {
    Elem50F250* first;
    Elem50F250* last;
    Elem50F250* end;
    void umove(Elem50F250* f, Elem50F250* l, Elem50F250* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x50F250 ?realloc@Vec50F250@@QAEXI@Z
void Vec50F250::realloc(unsigned int n)
{
    Elem50F250* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem50F250*)operator new(n * 8)) == 0)
            std::_Xbad_alloc();
    }
    try {
        umove(first, last, p);
    } catch (...) {
        operator delete(p);
        throw;
    }
    unsigned int sz = last - first;
    if (first) {
        char al;
        DTag t;
        destroyRange_50E1A0(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}

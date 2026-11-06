// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem4FEB70 {
    char b[8];
};
void __cdecl destroyRange_4FE070(Elem4FEB70* first, Elem4FEB70* last, char* al, DTag t);

struct Vec4FEB70 {
    Elem4FEB70* first;
    Elem4FEB70* last;
    Elem4FEB70* end;
    void umove(Elem4FEB70* f, Elem4FEB70* l, Elem4FEB70* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x4FEB70 ?realloc@Vec4FEB70@@QAEXI@Z
void Vec4FEB70::realloc(unsigned int n)
{
    Elem4FEB70* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem4FEB70*)operator new(n * 8)) == 0)
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
        destroyRange_4FE070(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}

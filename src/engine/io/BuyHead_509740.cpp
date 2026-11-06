// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle509740 {
    int v;
};
struct Node509740 {
    Handle509740 f[3];
    char c0;
    char c1;
    char pad[18];
};
struct Al509740 {
    void construct(Handle509740* p, const Handle509740& v);
};
struct Tree509740 {
    Node509740* buy();
};

// FUNCTION: 0x509740 ?buy@Tree509740@@QAEPAUNode509740@@XZ
Node509740* Tree509740::buy()
{
    Al509740 al;
    Node509740* q = (Node509740*)operator new(32);
    if (!q)
        std::_Xbad_alloc();
    Node509740* pp = q;
    try {
        al.construct(&q->f[0], *(Handle509740*)&pp);
        al.construct(&q->f[1], *(Handle509740*)&pp);
        al.construct(&q->f[2], *(Handle509740*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

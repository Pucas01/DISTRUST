// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle52DDE0 {
    int v;
};
struct Node52DDE0 {
    Handle52DDE0 f[3];
    char c0;
    char c1;
    char pad[58];
};
struct Al52DDE0 {
    void construct(Handle52DDE0* p, const Handle52DDE0& v);
};
struct Tree52DDE0 {
    Node52DDE0* buy();
};

// FUNCTION: 0x52DDE0 ?buy@Tree52DDE0@@QAEPAUNode52DDE0@@XZ
Node52DDE0* Tree52DDE0::buy()
{
    Al52DDE0 al;
    Node52DDE0* q = (Node52DDE0*)operator new(72);
    if (!q)
        std::_Xbad_alloc();
    Node52DDE0* pp = q;
    try {
        al.construct(&q->f[0], *(Handle52DDE0*)&pp);
        al.construct(&q->f[1], *(Handle52DDE0*)&pp);
        al.construct(&q->f[2], *(Handle52DDE0*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

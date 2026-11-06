// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle517280 {
    int v;
};
struct Node517280 {
    Handle517280 f[3];
    char c0;
    char c1;
    char pad[10];
};
struct Al517280 {
    void construct(Handle517280* p, const Handle517280& v);
};
struct Tree517280 {
    Node517280* buy();
};

// FUNCTION: 0x517280 ?buy@Tree517280@@QAEPAUNode517280@@XZ
Node517280* Tree517280::buy()
{
    Al517280 al;
    Node517280* q = (Node517280*)operator new(24);
    if (!q)
        std::_Xbad_alloc();
    Node517280* pp = q;
    try {
        al.construct(&q->f[0], *(Handle517280*)&pp);
        al.construct(&q->f[1], *(Handle517280*)&pp);
        al.construct(&q->f[2], *(Handle517280*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

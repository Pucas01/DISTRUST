// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle54E7D0 {
    int v;
};
struct Node54E7D0 {
    Handle54E7D0 f[3];
    char c0;
    char c1;
    char pad[26];
};
struct Al54E7D0 {
    void construct(Handle54E7D0* p, const Handle54E7D0& v);
};
struct Tree54E7D0 {
    Node54E7D0* buy();
};

// FUNCTION: 0x54E7D0 ?buy@Tree54E7D0@@QAEPAUNode54E7D0@@XZ
Node54E7D0* Tree54E7D0::buy()
{
    Al54E7D0 al;
    Node54E7D0* q = (Node54E7D0*)operator new(40);
    if (!q)
        std::_Xbad_alloc();
    Node54E7D0* pp = q;
    try {
        al.construct(&q->f[0], *(Handle54E7D0*)&pp);
        al.construct(&q->f[1], *(Handle54E7D0*)&pp);
        al.construct(&q->f[2], *(Handle54E7D0*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

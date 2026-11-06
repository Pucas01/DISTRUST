// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle5045D0 {
    int v;
};
struct Node5045D0 {
    Handle5045D0 f[3];
    char c0;
    char c1;
    char pad[34];
};
struct Al5045D0 {
    void construct(Handle5045D0* p, const Handle5045D0& v);
};
struct Tree5045D0 {
    Node5045D0* buy();
};

// FUNCTION: 0x5045D0 ?buy@Tree5045D0@@QAEPAUNode5045D0@@XZ
Node5045D0* Tree5045D0::buy()
{
    Al5045D0 al;
    Node5045D0* q = (Node5045D0*)operator new(48);
    if (!q)
        std::_Xbad_alloc();
    Node5045D0* pp = q;
    try {
        al.construct(&q->f[0], *(Handle5045D0*)&pp);
        al.construct(&q->f[1], *(Handle5045D0*)&pp);
        al.construct(&q->f[2], *(Handle5045D0*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

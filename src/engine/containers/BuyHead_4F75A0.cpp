// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle4F75A0 {
    int v;
};
struct Node4F75A0 {
    Handle4F75A0 f[3];
    char c0;
    char c1;
    char pad[14];
};
struct Al4F75A0 {
    void construct(Handle4F75A0* p, const Handle4F75A0& v);
};
struct Tree4F75A0 {
    Node4F75A0* buy();
};

// FUNCTION: 0x4F75A0 ?buy@Tree4F75A0@@QAEPAUNode4F75A0@@XZ
Node4F75A0* Tree4F75A0::buy()
{
    Al4F75A0 al;
    Node4F75A0* q = (Node4F75A0*)operator new(28);
    if (!q)
        std::_Xbad_alloc();
    Node4F75A0* pp = q;
    try {
        al.construct(&q->f[0], *(Handle4F75A0*)&pp);
        al.construct(&q->f[1], *(Handle4F75A0*)&pp);
        al.construct(&q->f[2], *(Handle4F75A0*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

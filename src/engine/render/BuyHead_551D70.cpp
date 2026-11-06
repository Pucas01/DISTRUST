// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Handle551D70 {
    int v;
};
struct Node551D70 {
    Handle551D70 f[3];
    char c0;
    char c1;
    char pad[22];
};
struct Al551D70 {
    void construct(Handle551D70* p, const Handle551D70& v);
};
struct Tree551D70 {
    Node551D70* buy();
};

// FUNCTION: 0x551D70 ?buy@Tree551D70@@QAEPAUNode551D70@@XZ
Node551D70* Tree551D70::buy()
{
    Al551D70 al;
    Node551D70* q = (Node551D70*)operator new(36);
    if (!q)
        std::_Xbad_alloc();
    Node551D70* pp = q;
    try {
        al.construct(&q->f[0], *(Handle551D70*)&pp);
        al.construct(&q->f[1], *(Handle551D70*)&pp);
        al.construct(&q->f[2], *(Handle551D70*)&pp);
    } catch (...) {
        operator delete(q);
        throw;
    }
    q->c0 = 1;
    q->c1 = 1;
    return q;
}

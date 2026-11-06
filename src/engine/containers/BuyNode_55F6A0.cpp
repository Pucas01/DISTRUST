// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val55F6A0 {
    char b[4];
};
struct Node55F6A0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val55F6A0 val;
};
struct Al55F6A0 {
    void construct(Val55F6A0* p, const Val55F6A0& v);
};
struct Tree55F6A0 {
    Node55F6A0* buyhead();
    Node55F6A0* buynode(const Val55F6A0& v);
};

// FUNCTION: 0x55F6A0 ?buynode@Tree55F6A0@@QAEPAUNode55F6A0@@ABUVal55F6A0@@@Z
Node55F6A0* Tree55F6A0::buynode(const Val55F6A0& v)
{
    Node55F6A0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al55F6A0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

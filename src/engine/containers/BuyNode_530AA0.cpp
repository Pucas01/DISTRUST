// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val530AA0 {
    char b[4];
};
struct Node530AA0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val530AA0 val;
};
struct Al530AA0 {
    void construct(Val530AA0* p, const Val530AA0& v);
};
struct Tree530AA0 {
    Node530AA0* buyhead();
    Node530AA0* buynode(const Val530AA0& v);
};

// FUNCTION: 0x530AA0 ?buynode@Tree530AA0@@QAEPAUNode530AA0@@ABUVal530AA0@@@Z
Node530AA0* Tree530AA0::buynode(const Val530AA0& v)
{
    Node530AA0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al530AA0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

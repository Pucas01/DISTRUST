// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val550CF0 {
    char b[4];
};
struct Node550CF0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val550CF0 val;
};
struct Al550CF0 {
    void construct(Val550CF0* p, const Val550CF0& v);
};
struct Tree550CF0 {
    Node550CF0* buyhead();
    Node550CF0* buynode(const Val550CF0& v);
};

// FUNCTION: 0x550CF0 ?buynode@Tree550CF0@@QAEPAUNode550CF0@@ABUVal550CF0@@@Z
Node550CF0* Tree550CF0::buynode(const Val550CF0& v)
{
    Node550CF0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al550CF0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

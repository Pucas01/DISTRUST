// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val55F610 {
    char b[4];
};
struct Node55F610 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val55F610 val;
};
struct Al55F610 {
    void construct(Val55F610* p, const Val55F610& v);
};
struct Tree55F610 {
    Node55F610* buyhead();
    Node55F610* buynode(const Val55F610& v);
};

// FUNCTION: 0x55F610 ?buynode@Tree55F610@@QAEPAUNode55F610@@ABUVal55F610@@@Z
Node55F610* Tree55F610::buynode(const Val55F610& v)
{
    Node55F610* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al55F610 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

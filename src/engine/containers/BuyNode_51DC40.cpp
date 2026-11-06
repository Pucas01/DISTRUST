// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val51DC40 {
    char b[4];
};
struct Node51DC40 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val51DC40 val;
};
struct Al51DC40 {
    void construct(Val51DC40* p, const Val51DC40& v);
};
struct Tree51DC40 {
    Node51DC40* buyhead();
    Node51DC40* buynode(const Val51DC40& v);
};

// FUNCTION: 0x51DC40 ?buynode@Tree51DC40@@QAEPAUNode51DC40@@ABUVal51DC40@@@Z
Node51DC40* Tree51DC40::buynode(const Val51DC40& v)
{
    Node51DC40* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al51DC40 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

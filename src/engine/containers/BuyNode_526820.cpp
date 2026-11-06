// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val526820 {
    char b[4];
};
struct Node526820 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val526820 val;
};
struct Al526820 {
    void construct(Val526820* p, const Val526820& v);
};
struct Tree526820 {
    Node526820* buyhead();
    Node526820* buynode(const Val526820& v);
};

// FUNCTION: 0x526820 ?buynode@Tree526820@@QAEPAUNode526820@@ABUVal526820@@@Z
Node526820* Tree526820::buynode(const Val526820& v)
{
    Node526820* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al526820 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

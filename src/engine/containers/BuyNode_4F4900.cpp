// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val4F4900 {
    char b[4];
};
struct Node4F4900 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val4F4900 val;
};
struct Al4F4900 {
    void construct(Val4F4900* p, const Val4F4900& v);
};
struct Tree4F4900 {
    Node4F4900* buyhead();
    Node4F4900* buynode(const Val4F4900& v);
};

// FUNCTION: 0x4F4900 ?buynode@Tree4F4900@@QAEPAUNode4F4900@@ABUVal4F4900@@@Z
Node4F4900* Tree4F4900::buynode(const Val4F4900& v)
{
    Node4F4900* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al4F4900 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

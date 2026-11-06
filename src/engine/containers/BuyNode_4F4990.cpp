// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val4F4990 {
    char b[4];
};
struct Node4F4990 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val4F4990 val;
};
struct Al4F4990 {
    void construct(Val4F4990* p, const Val4F4990& v);
};
struct Tree4F4990 {
    Node4F4990* buyhead();
    Node4F4990* buynode(const Val4F4990& v);
};

// FUNCTION: 0x4F4990 ?buynode@Tree4F4990@@QAEPAUNode4F4990@@ABUVal4F4990@@@Z
Node4F4990* Tree4F4990::buynode(const Val4F4990& v)
{
    Node4F4990* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al4F4990 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

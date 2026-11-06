// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val4F4870 {
    char b[4];
};
struct Node4F4870 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val4F4870 val;
};
struct Al4F4870 {
    void construct(Val4F4870* p, const Val4F4870& v);
};
struct Tree4F4870 {
    Node4F4870* buyhead();
    Node4F4870* buynode(const Val4F4870& v);
};

// FUNCTION: 0x4F4870 ?buynode@Tree4F4870@@QAEPAUNode4F4870@@ABUVal4F4870@@@Z
Node4F4870* Tree4F4870::buynode(const Val4F4870& v)
{
    Node4F4870* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al4F4870 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

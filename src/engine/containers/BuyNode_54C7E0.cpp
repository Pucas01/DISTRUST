// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val54C7E0 {
    char b[4];
};
struct Node54C7E0 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val54C7E0 val;
};
struct Al54C7E0 {
    void construct(Val54C7E0* p, const Val54C7E0& v);
};
struct Tree54C7E0 {
    Node54C7E0* buyhead();
    Node54C7E0* buynode(const Val54C7E0& v);
};

// FUNCTION: 0x54C7E0 ?buynode@Tree54C7E0@@QAEPAUNode54C7E0@@ABUVal54C7E0@@@Z
Node54C7E0* Tree54C7E0::buynode(const Val54C7E0& v)
{
    Node54C7E0* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al54C7E0 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

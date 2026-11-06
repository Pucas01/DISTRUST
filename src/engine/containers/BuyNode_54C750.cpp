// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Val54C750 {
    char b[4];
};
struct Node54C750 {
    char pad[12];
    char c0;
    char c1;
    char pad2[2];
    Val54C750 val;
};
struct Al54C750 {
    void construct(Val54C750* p, const Val54C750& v);
};
struct Tree54C750 {
    Node54C750* buyhead();
    Node54C750* buynode(const Val54C750& v);
};

// FUNCTION: 0x54C750 ?buynode@Tree54C750@@QAEPAUNode54C750@@ABUVal54C750@@@Z
Node54C750* Tree54C750::buynode(const Val54C750& v)
{
    Node54C750* p = buyhead();
    p->c0 = 0;
    p->c1 = 0;
    try {
        Al54C750 al;
        al.construct(&p->val, v);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}

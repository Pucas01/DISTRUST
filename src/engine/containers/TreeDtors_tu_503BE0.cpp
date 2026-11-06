// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner504080 {
    TNode* head;
    int size;
    ~Inner504080() { operator delete(head); }
};
struct Tree504080 {
    Inner504080 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree504080();
};

// FUNCTION: 0x504080 ??1Tree504080@@QAE@XZ
Tree504080::~Tree504080()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner5040F0 {
    TNode* head;
    int size;
    ~Inner5040F0() { operator delete(head); }
};
struct Tree5040F0 {
    Inner5040F0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree5040F0();
};

// FUNCTION: 0x5040F0 ??1Tree5040F0@@QAE@XZ
Tree5040F0::~Tree5040F0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}


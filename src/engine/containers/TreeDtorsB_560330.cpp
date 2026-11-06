// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner560330 {
    TNode* head;
    int size;
    ~Inner560330() { operator delete(head); }
};
struct Base560330 {
    Inner560330 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base560330() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree560330 : Base560330 {
    ~Tree560330();
};

// FUNCTION: 0x560330 ??1Tree560330@@QAE@XZ
Tree560330::~Tree560330()
{
}

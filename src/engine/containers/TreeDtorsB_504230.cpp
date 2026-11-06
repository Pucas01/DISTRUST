// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner504230 {
    TNode* head;
    int size;
    ~Inner504230() { operator delete(head); }
};
struct Base504230 {
    Inner504230 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base504230() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree504230 : Base504230 {
    ~Tree504230();
};

// FUNCTION: 0x504230 ??1Tree504230@@QAE@XZ
Tree504230::~Tree504230()
{
}

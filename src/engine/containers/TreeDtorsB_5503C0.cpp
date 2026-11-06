// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner5503C0 {
    TNode* head;
    int size;
    ~Inner5503C0() { operator delete(head); }
};
struct Base5503C0 {
    Inner5503C0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base5503C0() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree5503C0 : Base5503C0 {
    ~Tree5503C0();
};

// FUNCTION: 0x5503C0 ??1Tree5503C0@@QAE@XZ
Tree5503C0::~Tree5503C0()
{
}

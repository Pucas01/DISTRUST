// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner5041C0 {
    TNode* head;
    int size;
    ~Inner5041C0() { operator delete(head); }
};
struct Base5041C0 {
    Inner5041C0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base5041C0() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree5041C0 : Base5041C0 {
    ~Tree5041C0();
};

// FUNCTION: 0x5041C0 ??1Tree5041C0@@QAE@XZ
Tree5041C0::~Tree5041C0()
{
}

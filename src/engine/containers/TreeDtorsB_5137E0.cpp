// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner5137E0 {
    TNode* head;
    int size;
    ~Inner5137E0() { operator delete(head); }
};
struct Base5137E0 {
    Inner5137E0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base5137E0() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree5137E0 : Base5137E0 {
    ~Tree5137E0();
};

// FUNCTION: 0x5137E0 ??1Tree5137E0@@QAE@XZ
Tree5137E0::~Tree5137E0()
{
}

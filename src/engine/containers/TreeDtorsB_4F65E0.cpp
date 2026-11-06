// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner4F65E0 {
    TNode* head;
    int size;
    ~Inner4F65E0() { operator delete(head); }
};
struct Base4F65E0 {
    Inner4F65E0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base4F65E0() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree4F65E0 : Base4F65E0 {
    ~Tree4F65E0();
};

// FUNCTION: 0x4F65E0 ??1Tree4F65E0@@QAE@XZ
Tree4F65E0::~Tree4F65E0()
{
}

// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner4F6650 {
    TNode* head;
    int size;
    ~Inner4F6650() { operator delete(head); }
};
struct Base4F6650 {
    Inner4F6650 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base4F6650() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree4F6650 : Base4F6650 {
    ~Tree4F6650();
};

// FUNCTION: 0x4F6650 ??1Tree4F6650@@QAE@XZ
Tree4F6650::~Tree4F6650()
{
}

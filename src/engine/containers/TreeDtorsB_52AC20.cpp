// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner52AC20 {
    TNode* head;
    int size;
    ~Inner52AC20() { operator delete(head); }
};
struct Base52AC20 {
    Inner52AC20 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base52AC20() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree52AC20 : Base52AC20 {
    ~Tree52AC20();
};

// FUNCTION: 0x52AC20 ??1Tree52AC20@@QAE@XZ
Tree52AC20::~Tree52AC20()
{
}

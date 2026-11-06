// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner52D200 {
    TNode* head;
    int size;
    ~Inner52D200() { operator delete(head); }
};
struct Base52D200 {
    Inner52D200 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base52D200() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree52D200 : Base52D200 {
    ~Tree52D200();
};

// FUNCTION: 0x52D200 ??1Tree52D200@@QAE@XZ
Tree52D200::~Tree52D200()
{
}

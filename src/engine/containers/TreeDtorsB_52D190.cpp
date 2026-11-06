// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner52D190 {
    TNode* head;
    int size;
    ~Inner52D190() { operator delete(head); }
};
struct Base52D190 {
    Inner52D190 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base52D190() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree52D190 : Base52D190 {
    ~Tree52D190();
};

// FUNCTION: 0x52D190 ??1Tree52D190@@QAE@XZ
Tree52D190::~Tree52D190()
{
}

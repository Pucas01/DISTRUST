// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner54DF80 {
    TNode* head;
    int size;
    ~Inner54DF80() { operator delete(head); }
};
struct Base54DF80 {
    Inner54DF80 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base54DF80() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree54DF80 : Base54DF80 {
    ~Tree54DF80();
};

// FUNCTION: 0x54DF80 ??1Tree54DF80@@QAE@XZ
Tree54DF80::~Tree54DF80()
{
}

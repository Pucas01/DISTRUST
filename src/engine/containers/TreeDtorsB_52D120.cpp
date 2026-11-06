// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner52D120 {
    TNode* head;
    int size;
    ~Inner52D120() { operator delete(head); }
};
struct Base52D120 {
    Inner52D120 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base52D120() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree52D120 : Base52D120 {
    ~Tree52D120();
};

// FUNCTION: 0x52D120 ??1Tree52D120@@QAE@XZ
Tree52D120::~Tree52D120()
{
}

// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner513770 {
    TNode* head;
    int size;
    ~Inner513770() { operator delete(head); }
};
struct Base513770 {
    Inner513770 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base513770() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree513770 : Base513770 {
    ~Tree513770();
};

// FUNCTION: 0x513770 ??1Tree513770@@QAE@XZ
Tree513770::~Tree513770()
{
}

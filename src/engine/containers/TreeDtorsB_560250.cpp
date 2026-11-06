// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner560250 {
    TNode* head;
    int size;
    ~Inner560250() { operator delete(head); }
};
struct Base560250 {
    Inner560250 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base560250() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree560250 : Base560250 {
    ~Tree560250();
};

// FUNCTION: 0x560250 ??1Tree560250@@QAE@XZ
Tree560250::~Tree560250()
{
}

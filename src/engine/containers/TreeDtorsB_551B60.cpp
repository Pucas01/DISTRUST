// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner551B60 {
    TNode* head;
    int size;
    ~Inner551B60() { operator delete(head); }
};
struct Base551B60 {
    Inner551B60 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base551B60() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree551B60 : Base551B60 {
    ~Tree551B60();
};

// FUNCTION: 0x551B60 ??1Tree551B60@@QAE@XZ
Tree551B60::~Tree551B60()
{
}

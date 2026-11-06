// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner54DE50 {
    TNode* head;
    int size;
    ~Inner54DE50() { operator delete(head); }
};
struct Tree54DE50 {
    Inner54DE50 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree54DE50();
};

// FUNCTION: 0x54DE50 ??1Tree54DE50@@QAE@XZ
Tree54DE50::~Tree54DE50()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner54DEC0 {
    TNode* head;
    int size;
    ~Inner54DEC0() { operator delete(head); }
};
struct Tree54DEC0 {
    Inner54DEC0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree54DEC0();
};

// FUNCTION: 0x54DEC0 ??1Tree54DEC0@@QAE@XZ
Tree54DEC0::~Tree54DEC0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}


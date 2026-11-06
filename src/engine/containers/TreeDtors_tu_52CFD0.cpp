// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner52CFD0 {
    TNode* head;
    int size;
    ~Inner52CFD0() { operator delete(head); }
};
struct Tree52CFD0 {
    Inner52CFD0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree52CFD0();
};

// FUNCTION: 0x52CFD0 ??1Tree52CFD0@@QAE@XZ
Tree52CFD0::~Tree52CFD0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner52D040 {
    TNode* head;
    int size;
    ~Inner52D040() { operator delete(head); }
};
struct Tree52D040 {
    Inner52D040 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree52D040();
};

// FUNCTION: 0x52D040 ??1Tree52D040@@QAE@XZ
Tree52D040::~Tree52D040()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner52D0B0 {
    TNode* head;
    int size;
    ~Inner52D0B0() { operator delete(head); }
};
struct Tree52D0B0 {
    Inner52D0B0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree52D0B0();
};

// FUNCTION: 0x52D0B0 ??1Tree52D0B0@@QAE@XZ
Tree52D0B0::~Tree52D0B0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}


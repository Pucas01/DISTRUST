// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner4F6490 {
    TNode* head;
    int size;
    ~Inner4F6490() { operator delete(head); }
};
struct Tree4F6490 {
    Inner4F6490 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree4F6490();
};

// FUNCTION: 0x4F6490 ??1Tree4F6490@@QAE@XZ
Tree4F6490::~Tree4F6490()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner4F6500 {
    TNode* head;
    int size;
    ~Inner4F6500() { operator delete(head); }
};
struct Tree4F6500 {
    Inner4F6500 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree4F6500();
};

// FUNCTION: 0x4F6500 ??1Tree4F6500@@QAE@XZ
Tree4F6500::~Tree4F6500()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

struct Inner4F6570 {
    TNode* head;
    int size;
    ~Inner4F6570() { operator delete(head); }
};
struct Tree4F6570 {
    Inner4F6570 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree4F6570();
};

// FUNCTION: 0x4F6570 ??1Tree4F6570@@QAE@XZ
Tree4F6570::~Tree4F6570()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}


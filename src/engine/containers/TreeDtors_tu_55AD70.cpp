// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner55B150 {
    TNode* head;
    int size;
    ~Inner55B150() { operator delete(head); }
};
struct Tree55B150 {
    Inner55B150 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree55B150();
};

// FUNCTION: 0x55B150 ??1Tree55B150@@QAE@XZ
Tree55B150::~Tree55B150()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}


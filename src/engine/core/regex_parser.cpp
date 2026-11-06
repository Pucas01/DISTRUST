struct ListNode {
    virtual ~ListNode();
    int a;
    int b;
    ListNode* next;
};

struct NodeList {
    ListNode* head;
    void clear();
};

struct RxParser {
    const char* cur;
    int pad4;
    const char* end;
    char pad0c[0x44];
    unsigned int flags;
    bool isGroupChar();
};

int __stdcall sub_5A8430(int a, int b);

struct Elem1_5A9C60 {
    char b[1];
};

struct VecR1_5A9C60 {
    Elem1_5A9C60* first;
    Elem1_5A9C60* last;
    Elem1_5A9C60* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct Elem8_5A9CD0 {
    char b[8];
};

struct VecR8_5A9CD0 {
    Elem8_5A9CD0* first;
    Elem8_5A9CD0* last;
    Elem8_5A9CD0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x5A7DC0 sub_5A7DC0 (411 bytes)
void sub_5A7DC0()
{
}

// STUB: 0x5A7F60 sub_5A7F60 (171 bytes)
void sub_5A7F60()
{
}

// FUNCTION: 0x5A8010 isNotMax
bool isNotMax()
{
    return sub_5A8430(10, 0x7FFFFFFF) != 0x7FFFFFFF;
}

// FUNCTION: 0x5A8030 destroyNodeRange
void __cdecl destroyNodeRange(ListNode* first, ListNode* last)
{
    while (first != last && first) {
        ListNode* cur = first;
        first = cur->next;
        cur->next = 0;
        delete cur;
    }
}

// FUNCTION: 0x5A8060 NodeList::clear
void NodeList::clear()
{
    ListNode* p = head;
    while (p) {
        ListNode* cur = p;
        p = cur->next;
        cur->next = 0;
        delete cur;
    }
    head = 0;
}

// STUB: 0x5A8090 sub_5A8090 (341 bytes)
void sub_5A8090()
{
}

// STUB: 0x5A81F0 sub_5A81F0 (47 bytes)
void sub_5A81F0()
{
}

// STUB: 0x5A8220 sub_5A8220 (132 bytes)
void sub_5A8220()
{
}

// STUB: 0x5A82B0 sub_5A82B0 (382 bytes)
void sub_5A82B0()
{
}

// STUB: 0x5A8430 sub_5A8430 (211 bytes)
void sub_5A8430()
{
}

// STUB: 0x5A8510 sub_5A8510 (357 bytes)
void sub_5A8510()
{
}

// STUB: 0x5A8680 sub_5A8680 (114 bytes)
void sub_5A8680()
{
}

// STUB: 0x5A8700 sub_5A8700 (405 bytes)
void sub_5A8700()
{
}

// STUB: 0x5A88A0 sub_5A88A0 (774 bytes)
void sub_5A88A0()
{
}

// STUB: 0x5A8BB0 sub_5A8BB0 (573 bytes)
void sub_5A8BB0()
{
}

// STUB: 0x5A8DF0 sub_5A8DF0 (217 bytes)
void sub_5A8DF0()
{
}

// STUB: 0x5A8ED0 sub_5A8ED0 (221 bytes)
void sub_5A8ED0()
{
}

// STUB: 0x5A8FB0 sub_5A8FB0 (90 bytes)
void sub_5A8FB0()
{
}

// STUB: 0x5A9010 sub_5A9010 (285 bytes)
void sub_5A9010()
{
}

// STUB: 0x5A9130 sub_5A9130 (122 bytes)
void sub_5A9130()
{
}

// FUNCTION: 0x5A9290 RxParser::isGroupChar
bool RxParser::isGroupChar()
{
    const char* p = cur + 1;
    if (p == end)
        return false;
    unsigned int f = flags;
    if (!(f & 8)) {
        if (*p == '(' || *p == ')')
            return true;
    }
    if (!(f & 0x10)) {
        if (*p == '{' || *p == '}')
            return true;
    }
    return false;
}

// STUB: 0x5A92D0 sub_5A92D0 (1154 bytes)
void sub_5A92D0()
{
}

// STUB: 0x5A97B0 sub_5A97B0 (165 bytes)
void sub_5A97B0()
{
}

// STUB: 0x5A9860 sub_5A9860 (67 bytes)
void sub_5A9860()
{
}

// STUB: 0x5A98B0 sub_5A98B0 (292 bytes)
void sub_5A98B0()
{
}

// STUB: 0x5A99E0 sub_5A99E0 (192 bytes)
void sub_5A99E0()
{
}

// STUB: 0x5A9AB0 sub_5A9AB0 (205 bytes)
void sub_5A9AB0()
{
}

// STUB: 0x5A9B80 sub_5A9B80 (224 bytes)
void sub_5A9B80()
{
}

// FUNCTION: 0x5A9C60 VecR1_5A9C60::_Reserve
void VecR1_5A9C60::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        Elem1_5A9C60* f = first;
        if ((unsigned int)(f - last) - 1 < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = (last - f) + n;
            unsigned int cap = end - f;
            if (0xFFFFFFFFu - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// FUNCTION: 0x5A9CD0 VecR8_5A9CD0::_Reserve
void VecR8_5A9CD0::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 8 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 8 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x5A9D50 sub_5A9D50 (158 bytes)
void sub_5A9D50()
{
}

// STUB: 0x5A9DF0 sub_5A9DF0 (676 bytes)
void sub_5A9DF0()
{
}

// STUB: 0x5AA0D0 sub_5AA0D0 (103 bytes)
void sub_5AA0D0()
{
}

// STUB: 0x5AA140 sub_5AA140 (261 bytes)
void sub_5AA140()
{
}

// STUB: 0x5AA2F0 sub_5AA2F0 (178 bytes)
void sub_5AA2F0()
{
}

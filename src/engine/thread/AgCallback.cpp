struct Vtbl3b {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

typedef void (__fastcall* FastFn)(void*);

struct Callback {
    int pad0[3];
    void* arg;
    FastFn fn;
    bool invoke();
};

// STUB: 0x501620 sub_501620 (202 bytes)
void sub_501620()
{
}

// STUB: 0x5016F0 sub_5016F0 (149 bytes)
void sub_5016F0()
{
}

// STUB: 0x501790 sub_501790 (183 bytes)
void sub_501790()
{
}

// STUB: 0x501850 sub_501850 (191 bytes)
void sub_501850()
{
}

// STUB: 0x501910 sub_501910 (229 bytes)
void sub_501910()
{
}

// STUB: 0x501A00 sub_501A00 (129 bytes)
void sub_501A00()
{
}

// STUB: 0x501A90 sub_501A90 (7 bytes)
void sub_501A90()
{
}

// STUB: 0x501AA0 sub_501AA0 (7 bytes)
void sub_501AA0()
{
}

// FUNCTION: 0x501AB0 callV2
void __cdecl callV2(Vtbl3b* p)
{
    p->v2();
}

// FUNCTION: 0x501AC0 Callback::invoke
bool Callback::invoke()
{
    fn(arg);
    return true;
}

// STUB: 0x501ACD sub_501ACD (5 bytes)
void sub_501ACD()
{
}

// STUB: 0x501AE0 sub_501AE0 (103 bytes)
void sub_501AE0()
{
}

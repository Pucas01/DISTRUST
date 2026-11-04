struct SysMgr {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

extern SysMgr* g_systemManager;

// FUNCTION: 0x507060 callSystemV6
void callSystemV6()
{
    g_systemManager->v6();
}

// STUB: 0x507070 sub_507070 (361 bytes)
void sub_507070()
{
}

// STUB: 0x5071E0 sub_5071E0 (39 bytes)
void sub_5071E0()
{
}

// STUB: 0x507210 sub_507210 (170 bytes)
void sub_507210()
{
}

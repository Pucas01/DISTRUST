// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_5630E0 {
    virtual ~Base_5630E0();
};
struct D_549170 : Base_5630E0 {
    virtual ~D_549170() {}
};

// FUNCTION: 0x549170 ??_GD_549170@@UAEPAXI@Z
D_549170* createD_549170()
{
    return new D_549170;
}

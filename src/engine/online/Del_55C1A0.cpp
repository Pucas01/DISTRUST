// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_527550 {
    virtual ~Base_527550();
};
struct D_55C1A0 : Base_527550 {
    virtual ~D_55C1A0() {}
};

// FUNCTION: 0x55C1A0 ??_GD_55C1A0@@UAEPAXI@Z
D_55C1A0* createD_55C1A0()
{
    return new D_55C1A0;
}

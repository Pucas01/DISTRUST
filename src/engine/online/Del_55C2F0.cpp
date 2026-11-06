// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_52A3A0 {
    virtual ~Base_52A3A0();
};
struct D_55C2F0 : Base_52A3A0 {
    virtual ~D_55C2F0() {}
};

// FUNCTION: 0x55C2F0 ??_GD_55C2F0@@UAEPAXI@Z
D_55C2F0* createD_55C2F0()
{
    return new D_55C2F0;
}

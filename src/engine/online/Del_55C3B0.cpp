// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Base_52AC90 {
    virtual ~Base_52AC90();
};
struct D_55C3B0 : Base_52AC90 {
    virtual ~D_55C3B0() {}
};

// FUNCTION: 0x55C3B0 ??_GD_55C3B0@@UAEPAXI@Z
D_55C3B0* createD_55C3B0()
{
    return new D_55C3B0;
}

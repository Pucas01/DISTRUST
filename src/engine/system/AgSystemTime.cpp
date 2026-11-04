struct Inner2c {
    char pad[0x2C];
    int flag;
};

struct Wrap8 {
    int pad0[2];
    Inner2c* inner;
    void setInnerFlag();
};

extern "C" __declspec(dllimport) unsigned long __stdcall GetTickCount(void);

// STUB: 0x51A970 sub_51A970 (33 bytes)
void sub_51A970()
{
}

// STUB: 0x51A9A0 sub_51A9A0 (1365 bytes)
void sub_51A9A0()
{
}

// FUNCTION: 0x51AF00 Wrap8::setInnerFlag
void Wrap8::setInnerFlag()
{
    inner->flag = 1;
}

// STUB: 0x51AF10 sub_51AF10 (108 bytes)
void sub_51AF10()
{
}

// FUNCTION: 0x51AF80 getTickMs
unsigned long long getTickMs()
{
    return (unsigned long long)GetTickCount() * 1000;
}

// STUB: 0x51AF90 sub_51AF90 (229 bytes)
void sub_51AF90()
{
}

// STUB: 0x51B080 sub_51B080 (267 bytes)
void sub_51B080()
{
}

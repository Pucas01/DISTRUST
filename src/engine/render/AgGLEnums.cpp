// FUNCTION: 0x5A2A20 toGlBlendFactor
int __cdecl toGlBlendFactor(unsigned int mode)
{
    switch (mode) {
    case 0:
        return 0;
    case 2:
        return 0x302;
    case 3:
        return 0x303;
    case 4:
        return 0x304;
    case 5:
        return 0x305;
    case 6:
        return 0x300;
    case 7:
        return 0x301;
    case 8:
        return 0x306;
    case 9:
        return 0x307;
    case 10:
        return 0x308;
    case 1:
        return 0x1;
    default:
        return 0x1;
    }
}

// FUNCTION: 0x5A2AB0 sub_5A2AB0
int __cdecl sub_5A2AB0(unsigned int mode)
{
    switch (mode) {
    case 0:
        return 0x1;
    case 2:
        return 0x5;
    case 3:
        return 0x6;
    case 4:
        return 0x7;
    case 5:
        return 0x8;
    case 6:
        return 0x3;
    case 7:
        return 0x4;
    case 8:
        return 0x9;
    case 9:
        return 0xa;
    case 10:
        return 0xb;
    case 1:
        return 0x2;
    default:
        return 0x2;
    }
}

// STUB: 0x5A2B40 toGlBlendEquation (40 bytes)
void toGlBlendEquation()
{
}

// FUNCTION: 0x5A2B70 sub_5A2B70
int __cdecl sub_5A2B70(unsigned int mode)
{
    switch (mode) {
    case 0:
        return 0x1;
    case 1:
        return 0x4;
    case 2:
        return 0x5;
    case 3:
        return 0x3;
    case 4:
        return 0x2;
    default:
        return 0x1;
    }
}

// STUB: 0x5A2BC0 toGlCullMode (35 bytes)
void toGlCullMode()
{
}

// STUB: 0x5A2BF0 sub_5A2BF0 (38 bytes)
void sub_5A2BF0()
{
}

// FUNCTION: 0x5A2C20 toGlDepthFunc
int __cdecl toGlDepthFunc(unsigned int mode)
{
    switch (mode) {
    case 0:
        return 0x200;
    case 1:
        return 0x201;
    case 2:
        return 0x202;
    case 3:
        return 0x203;
    case 4:
        return 0x204;
    case 5:
        return 0x205;
    case 6:
        return 0x206;
    case 7:
        return 0x207;
    default:
        return 0x200;
    }
}

// FUNCTION: 0x5A2C90 sub_5A2C90
int __cdecl sub_5A2C90(unsigned int mode)
{
    switch (mode) {
    case 0:
        return 0x1;
    case 1:
        return 0x2;
    case 2:
        return 0x3;
    case 3:
        return 0x4;
    case 4:
        return 0x5;
    case 5:
        return 0x6;
    case 6:
        return 0x7;
    case 7:
        return 0x8;
    default:
        return 0x8;
    }
}

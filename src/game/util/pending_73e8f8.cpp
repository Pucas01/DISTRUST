extern unsigned char g_73E8E1[];
extern unsigned char g_73E848;
struct B2_73E8F8 {
    unsigned char a;
    unsigned char b;
};
extern B2_73E8F8 g_73E8F8;
extern int g_73E8FC;
extern unsigned char g_73E902;
extern unsigned char g_73E954;
extern unsigned char g_73E840;
extern short g_73E842;

// STUB: 0x49C3D0 sub_49C3D0 (91 bytes)
void sub_49C3D0()
{
}

// STUB: 0x49C430 sub_49C430 (221 bytes)
void sub_49C430()
{
}

// STUB: 0x49C510 sub_49C510 (201 bytes)
void sub_49C510()
{
}

// STUB: 0x49C5E0 sub_49C5E0 (122 bytes)
void sub_49C5E0()
{
}

// STUB: 0x49C660 sub_49C660 (211 bytes)
void sub_49C660()
{
}

// STUB: 0x49C740 sub_49C740 (419 bytes)
void sub_49C740()
{
}

// STUB: 0x49C8F0 sub_49C8F0 (260 bytes)
void sub_49C8F0()
{
}

// STUB: 0x49CA00 sub_49CA00 (2891 bytes)
void sub_49CA00()
{
}

// STUB: 0x49D550 sub_49D550 (205 bytes)
void sub_49D550()
{
}

// STUB: 0x49D620 sub_49D620 (111 bytes)
void sub_49D620()
{
}

// STUB: 0x49D690 sub_49D690 (1405 bytes)
void sub_49D690()
{
}

// STUB: 0x49DC10 sub_49DC10 (444 bytes)
void sub_49DC10()
{
}

// STUB: 0x49DE20 sub_49DE20 (773 bytes)
void sub_49DE20()
{
}

// STUB: 0x49E130 sub_49E130 (366 bytes)
void sub_49E130()
{
}

// STUB: 0x49E2A0 sub_49E2A0 (1199 bytes)
void sub_49E2A0()
{
}

// FUNCTION: 0x49E750 sub_49E750
void __cdecl sub_49E750(unsigned int i, unsigned char v)
{
    if (i <= 1) {
        g_73E8E1[i * 12] = v;
        g_73E8E1[i * 12 + 1] = 0;
        *(int*)(g_73E8E1 + i * 12 + 3) = 0;
    }
}

// STUB: 0x49E780 sub_49E780 (959 bytes)
void sub_49E780()
{
}

// STUB: 0x49EB40 sub_49EB40 (973 bytes)
void sub_49EB40()
{
}

// FUNCTION: 0x49EF10 sub_49EF10
void __cdecl sub_49EF10(unsigned char v)
{
    if (g_73E848) {
        g_73E8F8.a = v;
        g_73E8F8.b = 0;
        g_73E8FC = 0;
    }
}

// STUB: 0x49F030 sub_49F030 (82 bytes)
void sub_49F030()
{
}

// FUNCTION: 0x49F090 sub_49F090
void sub_49F090()
{
    if (g_73E848) {
        g_73E8F8.a = 0xe;
        g_73E8F8.b = 0;
        g_73E8FC = 0;
    }
}

// FUNCTION: 0x49F0B0 sub_49F0B0
void __cdecl sub_49F0B0(unsigned char v)
{
    if (g_73E848) {
        g_73E8F8.a = 0xf;
        g_73E8F8.b = 0;
        g_73E8FC = 0;
        g_73E902 = v;
    }
}

// FUNCTION: 0x49F0E0 sub_49F0E0
void __cdecl sub_49F0E0(unsigned char v)
{
    if (g_73E848) {
        g_73E8F8.a = 0x11;
        g_73E8F8.b = 0;
        g_73E8FC = 0;
        g_73E902 = v;
    }
}

// FUNCTION: 0x49F110 sub_49F110
void sub_49F110()
{
    unsigned char c = g_73E954;
    if (c != 3 && c != 0) {
        g_73E840 = 4;
        g_73E842 = 0;
    }
}

// FUNCTION: 0x49F130 sub_49F130
void sub_49F130()
{
    unsigned char c = g_73E954;
    if (c != 1 && c != 2 && c != 0x12) {
        g_73E840 = 5;
        g_73E842 = 0;
    }
}

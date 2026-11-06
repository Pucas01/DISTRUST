extern char* g_entryTable;

// FUNCTION: 0x4C8B20 sub_4C8B20
void __cdecl sub_4C8B20(unsigned int i, float a, float b)
{
    if (i <= 0x6d) {
        char* e = g_entryTable + (i << 8);
        *(float*)(e + 0x3c) = a;
        *(float*)(e + 0x40) = b;
    }
}

// FUNCTION: 0x4C8B50 sub_4C8B50
void __cdecl sub_4C8B50(unsigned int i, short a, short b, short c, short d)
{
    if (i <= 0x6d) {
        unsigned char* e = (unsigned char*)g_entryTable + (i << 8);
        e[0x12] = 1;
        *(short*)(e + 0x16) = a;
        *(short*)(e + 0x18) = c;
        *(short*)(e + 0x1a) = b;
        *(short*)(e + 0x1c) = d;
    }
}

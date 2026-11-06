extern unsigned char g_73DCD4;
extern unsigned char g_73DCD5;
struct Rec20b {
    short id;
    char pad[18];
};
extern Rec20b g_73DCD8[];

// FUNCTION: 0x4845F0 hasEntry73DCD8
int __cdecl hasEntry73DCD8(short id)
{
    if (g_73DCD4 >= g_73DCD5) {
        return 0;
    }
    return g_73DCD8[g_73DCD4].id == id;
}

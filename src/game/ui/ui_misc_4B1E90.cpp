struct Mgr4B1E90 {
    void poke();
};
extern Mgr4B1E90* g_pcInputManager;

struct Q4B1E90 {
    char p[0x88];
    int v;
    void set(const unsigned char* b);
};

// FUNCTION: 0x4B1E90 Q4B1E90::set
void Q4B1E90::set(const unsigned char* b)
{
    if (g_pcInputManager) {
        g_pcInputManager->poke();
    }
    v = *b;
}

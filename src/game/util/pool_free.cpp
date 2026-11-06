struct PBlock {
    PBlock* next;
    unsigned short cnt;
    char pad[2];
    unsigned end;
};
typedef void(__cdecl* FreeFn)(void*);
extern PBlock* g_755A44[];
extern FreeFn g_errA[];

// FUNCTION: 0x4EA220 poolFree
void __cdecl poolFree(unsigned cls, void* p)
{
    if (!p) {
        return;
    }
    PBlock* prev = 0;
    for (PBlock* b = g_755A44[cls]; b; b = b->next) {
        if ((unsigned)p >= (unsigned)b && (unsigned)p < b->end) {
            b->cnt += 0xFFFF;
            if (b->cnt == 0) {
                PBlock* nx = b->next;
                if (prev) {
                    prev->next = nx;
                } else {
                    g_755A44[cls] = nx;
                }
                g_errA[cls](b);
            }
            return;
        }
        prev = b;
    }
    g_errA[cls](p);
}

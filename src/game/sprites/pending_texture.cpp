extern int g_snapshotSource;
extern int g_snapshot;
extern int g_74818C;
extern int g_748190;
extern int g_748194;
extern int g_748198;
extern unsigned char g_pendingArmed;
extern int g_pendingTexture;

bool __cdecl touchTexture(int id, int generation);

// FUNCTION: 0x4D6520 resetSnapshot
void resetSnapshot()
{
    g_snapshot = g_snapshotSource;
    g_74818C = 0;
    g_748190 = 0;
    g_748194 = 0;
    g_748198 = 0;
}

// FUNCTION: 0x4D6560 releasePendingTexture
void releasePendingTexture()
{
    if (g_pendingArmed == 1) {
        if (g_pendingTexture > 0) {
            touchTexture(g_pendingTexture, 0);
            g_pendingTexture = -1;
        }
        g_pendingArmed = 0;
    }
}

// FUNCTION: 0x4D6590 armPendingTexture
unsigned char armPendingTexture()
{
    unsigned char previous = g_pendingArmed;
    g_pendingArmed = 1;
    return previous;
}

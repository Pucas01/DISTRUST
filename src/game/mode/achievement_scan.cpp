extern unsigned char g_70169C[];
void __cdecl unlockAchievement(int id);

// FUNCTION: 0x46D940 sub_46D940
void sub_46D940()
{
    for (unsigned int i = 0; i < 0x25; i++) {
        if (g_70169C[i / 8] & (1 << (i % 8)))
            unlockAchievement(i);
    }
}

extern unsigned char g_73E401[];
extern unsigned short g_73E35C;

extern unsigned char g_73E35E;
extern signed char g_623690[];
extern signed char g_73E35F[];
extern signed char g_73E370[];

// STUB: 0x48D630 sub_48D630 (20 bytes)
void sub_48D630()
{
}

// FUNCTION: 0x48D650 sub_48D650
void __cdecl sub_48D650(unsigned int i)
{
    if (i <= 0xf)
        g_73E401[i] = 1;
}

// FUNCTION: 0x48D670 sub_48D670
void __cdecl sub_48D670(unsigned int v)
{
    if (v <= 0x3eb)
        g_73E35C = (unsigned short)v;
}

// FUNCTION: 0x48D6A0 loadFlagTable
void __cdecl loadFlagTable(int i)
{
    if ((i >= 0 && i < 7) || i == 10) {
        g_73E35E = i;
    } else {
        g_73E35E = 0x63;
        i = 7;
    }
    for (int k = 0; k < 17; k++) {
        signed char v = g_623690[i * 17 + k];
        if (v == -1) {
            g_73E35F[k] = -1;
            g_73E370[k] = -1;
        } else {
            g_73E35F[k] = k;
            g_73E370[k] = v;
        }
    }
}

// STUB: 0x48D720 sub_48D720 (314 bytes)
void sub_48D720()
{
}

#include <string.h>
struct Ent {
    char b0;
    unsigned char b1;
    char pad[14];
};
extern char g_73E138[];
extern short g_73E142[];
extern short g_73E170;
extern unsigned char g_73E180;
extern float g_73E184;
extern unsigned char g_73E188;
struct Pair2 {
    unsigned char a;
    unsigned char b;
};
extern Pair2 g_73E18A;
extern char g_73E18C;
extern unsigned char g_73E190;
extern char g_73E194;
extern Ent g_73E19C[];
extern unsigned char g_73E29C;
extern unsigned char g_73E29E;
extern unsigned char g_73E2A2;

// FUNCTION: 0x486960 initUiState486960
void initUiState486960()
{
    memset(g_73E138, 0, 0x16C);
    for (int i = 0; i < 23; i++) {
        g_73E142[i] = -1;
    }
    g_73E170 = -1;
    g_73E180 = 0;
    g_73E184 = 1.0f;
    g_73E188 = 0;
    g_73E18A.a = 0xFF;
    g_73E18A.b = 0xFF;
    g_73E18C = -1;
    g_73E190 = 0;
    g_73E194 = -1;
    int i = 0;
    for (Ent* p = g_73E19C; (int)p < (int)&g_73E19C[16]; p++, i++) {
        p->b0 = i;
        p->b1 = 0;
    }
    g_73E29C = 0;
    g_73E29E = 0;
    g_73E2A2 = 0;
}

struct Step {
    unsigned char state;
    char p;
    short step;
    int t;
};
extern Step g_73E840;
struct Pair2 {
    unsigned char a;
    unsigned char b;
};
extern Pair2 g_73E9C2;

// FUNCTION: 0x4A0090 stepMode9
void stepMode9()
{
    short s = g_73E840.step;
    if (s == 0) {
        g_73E9C2.a = 9;
        g_73E9C2.b = 0;
        g_73E840.t = 0;
        g_73E840.step = 1;
    } else if (s == 1) {
        if (g_73E9C2.a == 0) {
            g_73E840.state = 2;
            g_73E840.step = 0;
        }
    }
}

// FUNCTION: 0x4A00E0 stepMode8
void stepMode8()
{
    short s = g_73E840.step;
    if (s == 0) {
        g_73E9C2.a = 8;
        g_73E9C2.b = 0;
        g_73E840.t = 0;
        g_73E840.step = 1;
    } else if (s == 1) {
        if (g_73E9C2.a == 0) {
            g_73E840.state = 2;
            g_73E840.step = 0;
        }
    }
}

extern unsigned char g_73E848;
extern Pair2 g_73E8F8;
extern int g_73E8FC;
extern Pair2 g_73E8D0;
extern Pair2 g_73E954;
extern int g_73E958;
extern float g_7403E4;

// FUNCTION: 0x4A0330 stepMode330
void stepMode330()
{
    short s = g_73E840.step;
    if (s == 0) {
        if (g_73E848 != 0) {
            g_73E8F8.a = 3;
            g_73E8F8.b = 0;
            g_73E8FC = 0;
        }
        g_73E8D0.a = 4;
        g_73E8D0.b = 0;
        g_73E954.a = 3;
        g_73E954.b = 0;
        g_73E958 = 0;
        g_73E840.t = 0;
        g_73E840.step = 1;
    } else if (s == 1) {
        float t = g_7403E4 + *(float*)&g_73E840.t;
        *(float*)&g_73E840.t = t;
        if (t >= 30.0f) {
            g_73E840.state = 2;
            g_73E840.step = 0;
        }
    }
}

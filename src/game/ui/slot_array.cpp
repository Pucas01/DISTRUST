struct Slot {
    int h;
    int a;
    int b;
};
extern Slot g_73DA24[];
extern char g_62856C[];
extern char g_628580[];

int __cdecl sub_4C5D30(const char* name, int a, int b);
void __cdecl sub_46EAA0(Slot* s);

// FUNCTION: 0x475A00 loadSlots
void loadSlots()
{
    const char* names[2] = { g_62856C, g_628580 };
    Slot* s = g_73DA24;
    const char** n = names;
    for (; (int)s < (int)&g_73DA24[2]; s++, n++) {
        s->h = sub_4C5D30(*n, 0x10, 0);
    }
}

// FUNCTION: 0x475A50 slotsIdle
bool slotsIdle()
{
    for (Slot* s = g_73DA24; (int)s < (int)&g_73DA24[2]; s++) {
        if (s->h > -1) {
            return false;
        }
    }
    return true;
}

// FUNCTION: 0x475A70 updateSlots
void updateSlots()
{
    for (Slot* s = g_73DA24; (int)s < (int)&g_73DA24[2]; s++) {
        sub_46EAA0(s);
    }
}

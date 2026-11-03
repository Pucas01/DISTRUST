int __cdecl playSound(int id, int volume);
void __cdecl startFade(int mode, int type, int duration);
int __cdecl testButtonB(int key);
int __cdecl testButtonC(unsigned int bit);
void __cdecl resetEntry(unsigned int index, const char* name);
bool __cdecl isEntryDone(unsigned int index);
unsigned int __cdecl sub_4AFDD0(int a, int b);
int __cdecl sub_4AFDF0(int a, int b);
void __cdecl sub_4C8360(unsigned int entry, float x, float y);
void __cdecl sub_4C8F00(unsigned int entry, const char* name, int handle, int a, int b, int c);
void __cdecl sub_4D13B0(int a, int b);
void __cdecl sub_4D13F0(int a, int b);

extern unsigned char g_73EAF6;
extern unsigned char g_73EAF7;
extern int g_73EAF8;
extern int g_73ED44;

// FUNCTION: 0x4A85E0 sub_4A85E0
void __cdecl sub_4A85E0()
{
    unsigned int entry = sub_4AFDD0(2, 1);

    if (isEntryDone(entry)) {
        if (testButtonB(0x17)) {
            if (g_73EAF6 == 0)
                resetEntry(entry, "fl_out_2");
            else
                resetEntry(entry, "fl_out_1");
            playSound(4, 0x64);
            g_73ED44 = 5;
        } else if (testButtonC(0x12) && g_73EAF6 == 0) {
            g_73EAF6 = 1;
            playSound(5, 0x64);
            resetEntry(entry, "fl_select_1");
        } else if (testButtonC(0x13) && g_73EAF6 == 1) {
            g_73EAF6 = 0;
            playSound(5, 0x64);
            resetEntry(entry, "fl_select_2");
        } else if (testButtonB(0x16)) {
            playSound(1, 0x64);
            if (g_73EAF6 != 0) {
                g_73EAF7 = 1;
                resetEntry(entry, "fl_out_1");
                startFade(1, 1, 0x1E);
                unsigned int titleEntry = sub_4AFDD0(2, 0);
                if (g_73EAF8 == 0)
                    resetEntry(titleEntry, "fl_out_1");
                else
                    resetEntry(titleEntry, "fl_out_2");
                resetEntry(sub_4AFDD0(2, 4), "fl_out");
                resetEntry(sub_4AFDD0(2, 2), "fl_stop");
                g_73ED44 = 8;
            } else {
                resetEntry(entry, "fl_out_2");
                g_73ED44 = 5;
            }
        }
    }
    sub_4D13B0(0x4B, 1);
    sub_4D13F0(0x4B, 0x6270);
    unsigned int title = sub_4AFDD0(2, 1);
    sub_4C8F00(title, "p_tx_c_cl35_000", sub_4AFDF0(0, 0x1B), 0x4B, 0, 0);
    sub_4C8360(title, 0.0f, -20.0f);
}

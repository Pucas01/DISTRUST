extern unsigned char g_fadeActive;
extern unsigned char g_fadeMode;
extern unsigned char g_fadeType;
extern unsigned int g_fadeColor;
extern float g_fadeFrom;
extern float g_fadeTo;
extern float g_fadeDuration;

// FUNCTION: 0x4C5350 startFade
void __cdecl startFade(int mode, int type, int duration)
{
    if (g_fadeMode == 1 && mode == 1)
        return;
    if (type != 4 && g_fadeMode == 0) {
        if (mode == 0)
            return;
    } else if (mode == 0) {
        goto begin;
    }
    if (mode != 1)
        return;
begin:
    g_fadeMode = (unsigned char)mode;
    unsigned char fadeType = g_fadeType;
    if (type != -1)
        fadeType = (unsigned char)type;
    g_fadeActive = 1;
    g_fadeType = fadeType;
    g_fadeColor = 0xFF000000;
    g_fadeFrom = 0.0f;
    g_fadeTo = 1.0f;
    g_fadeDuration = (float)duration;
}

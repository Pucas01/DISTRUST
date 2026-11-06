// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct S5012E0 {
    int len;
    char* data;
    S5012E0();
    S5012E0(const S5012E0& o);
    int size();
    S5012E0 pathTail();
    int find(int c, int from);
    int rfind(int c, int from);
    S5012E0 substr(int pos, int cnt);
    S5012E0* replace(int pos, int cnt, const char* text, int tlen);
    void replaceExt(const char* text, int tlen);
    S5012E0 beforeColon();
    S5012E0 fileTitle();
};

// FUNCTION: 0x5015B0 S5012E0::beforeColon
S5012E0 S5012E0::beforeColon()
{
    int i = find(':', 0);
    if (i != -1) {
        return substr(0, i);
    }
    return S5012E0();
}

// FUNCTION: 0x5012E0 S5012E0::fileTitle
S5012E0 S5012E0::fileTitle()
{
    int a = rfind('/', -1);
    if (a != -1) {
        a++;
        int cnt = -1;
        int b = rfind('.', cnt);
        if (b >= 0) {
            cnt = b - a;
        }
        return substr(a, cnt);
    }
    return S5012E0();
}

// FUNCTION: 0x5015F0 S5012E0::replaceExt
void S5012E0::replaceExt(const char* text, int tlen)
{
    int i = rfind('.', -1);
    if (i >= 0) {
        replace(i, -1, text, tlen);
    }
}

// FUNCTION: 0x501270 S5012E0::pathTail
S5012E0 S5012E0::pathTail()
{
    int a = rfind('/', -1);
    if (a != -1) {
        return substr(a + 1, -1);
    }
    int b = find(':', 0);
    if (b != -1) {
        return substr(b + 1, size() - b - 1);
    }
    return *this;
}

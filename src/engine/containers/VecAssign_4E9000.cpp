// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include <string.h>
struct Vec4E9000 {
    char* data;
};
struct Obj4E9000 {
    char p[0x64];
    Vec4E9000 v;
    char q[0x74 - 0x68];
    int cnt;
    int cnt70;
};
bool __cdecl sub_4F1AB0(Vec4E9000* v, int bytes);

// FUNCTION: 0x4E9000 assign4E9000
bool __cdecl assign4E9000(Obj4E9000* o, const void* src, int n)
{
    if (o->cnt != n) {
        if (!sub_4F1AB0(&o->v, n * 4)) {
            o->cnt = 0;
            return false;
        }
        o->cnt = n;
    }
    if (src) {
        memcpy(o->v.data, src, n * 4);
    }
    return true;
}

struct Obj4E9060 {
    char p[0x60];
    Vec4E9000 v;
    char q[0x70 - 0x64];
    int cnt;
};

// FUNCTION: 0x4E9060 assignMax8
bool __cdecl assignMax8(Obj4E9060* o, const void* src, int n)
{
    if (n > 8) {
        n = 8;
    }
    if (o->cnt < n) {
        if (!sub_4F1AB0(&o->v, n * 4)) {
            o->cnt = 0;
            return false;
        }
        o->cnt = n;
    }
    if (src) {
        memcpy(o->v.data, src, n * 4);
    }
    return true;
}

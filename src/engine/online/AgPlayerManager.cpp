#include "engine/online/AgPlayerManager.gen.h"
#include "engine/core/AgSingleton.h"

struct Elem8_520F00 {
    char b[8];
};

struct VecR8_520F00 {
    Elem8_520F00* first;
    Elem8_520F00* last;
    Elem8_520F00* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x520E20 AgPlayerManager::fn_520E20 (222 bytes)
void AgPlayerManager::fn_520E20()
{
}

// FUNCTION: 0x520F00 VecR8_520F00::_Reserve
void VecR8_520F00::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 8 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 8 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x520F80 AgPlayerManager::fn_520F80 (219 bytes)
void AgPlayerManager::fn_520F80()
{
}

// STUB: 0x521060 AgPlayerManager::fn_521060 (216 bytes)
void AgPlayerManager::fn_521060()
{
}

// STUB: 0x521140 AgPlayerManager::fn_521140 (326 bytes)
void AgPlayerManager::fn_521140()
{
}

// STUB: 0x521290 AgPlayerManager::fn_521290 (20 bytes)
void AgPlayerManager::fn_521290()
{
}

// STUB: 0x5212B0 AgPlayerManager::fn_5212B0 (251 bytes)
void AgPlayerManager::fn_5212B0()
{
}

// STUB: 0x5213B0 AgPlayerManager::fn_5213B0 (294 bytes)
void AgPlayerManager::fn_5213B0()
{
}

// STUB: 0x5214E0 AgPlayerManager::fn_5214E0 (432 bytes)
void AgPlayerManager::fn_5214E0()
{
}

// STUB: 0x521690 AgPlayerManager::fn_521690 (87 bytes)
void AgPlayerManager::fn_521690()
{
}

// STUB: 0x5216F0 AgPlayerManager::fn_5216F0 (194 bytes)
void AgPlayerManager::fn_5216F0()
{
}

// STUB: 0x5217C0 AgPlayerManager::fn_5217C0 (185 bytes)
void AgPlayerManager::fn_5217C0()
{
}

// STUB: 0x521880 AgPlayerManager::fn_521880 (194 bytes)
void AgPlayerManager::fn_521880()
{
}

// STUB: 0x521950 AgPlayerManager::fn_521950 (194 bytes)
void AgPlayerManager::fn_521950()
{
}

// STUB: 0x521A20 AgPlayerManager::fn_521A20 (869 bytes)
void AgPlayerManager::fn_521A20()
{
}

// STUB: 0x521D90 AgPlayerManager::vfn_2 (111 bytes)
void AgPlayerManager::vfn_2()
{
}

// STUB: 0x521E00 AgPlayerManager::vfn_1 (157 bytes)
void AgPlayerManager::vfn_1()
{
}

// STUB: 0x521EA0 AgPlayerManager::fn_521EA0 (117 bytes)
void AgPlayerManager::fn_521EA0()
{
}

// STUB: 0x521F20 AgPlayerManager::fn_521F20 (146 bytes)
void AgPlayerManager::fn_521F20()
{
}

// STUB: 0x521FC0 AgPlayerManager::fn_521FC0 (209 bytes)
void AgPlayerManager::fn_521FC0()
{
}

// STUB: 0x5220A0 AgPlayerManager::fn_5220A0 (172 bytes)
void AgPlayerManager::fn_5220A0()
{
}

// STUB: 0x522150 AgPlayerManager::fn_522150 (295 bytes)
void AgPlayerManager::fn_522150()
{
}

// STUB: 0x522280 AgPlayerManager::fn_522280 (196 bytes)
void AgPlayerManager::fn_522280()
{
}

// STUB: 0x522350 AgPlayerManager::fn_522350 (259 bytes)
void AgPlayerManager::fn_522350()
{
}

// STUB: 0x522460 AgPlayerManager::fn_522460 (260 bytes)
void AgPlayerManager::fn_522460()
{
}

// STUB: 0x522570 AgPlayerManager::vfn_3 (1059 bytes)
void AgPlayerManager::vfn_3()
{
}

// STUB: 0x520C30 AgPlayerManager::~AgPlayerManager (279 bytes)
__declspec(noinline) AgPlayerManager::~AgPlayerManager()
{
}

// FUNCTION: 0x520DF0 ??_GAgPlayerManager@@UAEPAXI@Z

// FUNCTION: 0x520B80 ??1?$AgSingleton@VAgPlayerManager@@@@UAE@XZ
// FUNCTION: 0x520DC0 ??_G?$AgSingleton@VAgPlayerManager@@@@UAEPAXI@Z
template class AgSingleton<AgPlayerManager>;

// STUB: 0x520B90 sub_520B90 (66 bytes)
void sub_520B90()
{
}

// STUB: 0x520BE0 sub_520BE0 (66 bytes)
void sub_520BE0()
{
}

// STUB: 0x520D50 sub_520D50 (13 bytes)
void sub_520D50()
{
}

// STUB: 0x520D60 sub_520D60 (86 bytes)
void sub_520D60()
{
}

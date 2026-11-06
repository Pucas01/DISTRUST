#include "engine/core/AgReference.inl"

struct Q_520620 {
    ~Q_520620();
};

#include "engine/core/AgReference.inl"

struct V_5206C0 {
    virtual ~V_5206C0();
};

// STUB: 0x520580 sub_520580 (145 bytes)
void sub_520580()
{
}

// FUNCTION: 0x520620 destroyRange_520620
void __cdecl destroyRange_520620(AgReference<Q_520620>* first, AgReference<Q_520620>* last)
{
    for (; first != last; ++first)
        first->~AgReference<Q_520620>();
}

// FUNCTION: 0x5206C0 destroyRange_5206C0
void __cdecl destroyRange_5206C0(AgReference<V_5206C0>* first, AgReference<V_5206C0>* last)
{
    for (; first != last; ++first)
        first->~AgReference<V_5206C0>();
}

// STUB: 0x5208E0 sub_5208E0 (102 bytes)
void sub_5208E0()
{
}

// STUB: 0x520950 sub_520950 (211 bytes)
void sub_520950()
{
}

// STUB: 0x520A30 sub_520A30 (327 bytes)
void sub_520A30()
{
}

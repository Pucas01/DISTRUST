#include "game/entry_table.h"

// FUNCTION: 0x4DE850 enableEntry
void __cdecl enableEntry(unsigned int index)
{
    if (index <= 0x3FF) {
        Entry* e = &g_entries[index];
        e->active = 1;
        e->visible = 1;
    }
}

// FUNCTION: 0x4DE870 disableEntry
void __cdecl disableEntry(unsigned int index)
{
    if (index <= 0x3FF) {
        Entry* e = &g_entries[index];
        e->active = 0;
        e->visible = 0;
    }
}

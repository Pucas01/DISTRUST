#include "unsorted/entry_table.h"

extern EntryRecord* g_entryTable;

// FUNCTION: 0x4C85E0 getEntryValue
int __cdecl getEntryValue(unsigned int index, int slot)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid && slot >= 0 && slot < entry->count) {
            short* values = entry->values;
            if (values) {
                return *(short*)((char*)values + slot * 10);
            }
        }
    }
    return -1;
}

// FUNCTION: 0x4C88E0 isEntryDone
char __cdecl isEntryDone(unsigned int index)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->loaded)
            return entry->status == 1;
    }
    return 1;
}

// FUNCTION: 0x4C8C50 setEntryParam
void __cdecl setEntryParam(unsigned int index, short value)
{
    if (index <= 0x6d)
        g_entryTable[index].param = value;
}

// FUNCTION: 0x4C8B90 setEntryFlag
void __cdecl setEntryFlag(unsigned int index, int value)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        entry->flag03 = (char)value;
        if (entry->children) {
            for (int i = 0; i < entry->childCount; i++) {
                EntryChild* child = &entry->children[i];
                if (child->owner && child->enabled)
                    sub_4CF950(child->kind, value);
            }
        }
    }
}

// FUNCTION: 0x4C8DF0 setEntryLayerFlag
void __cdecl setEntryLayerFlag(unsigned int index, int key, char value)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid) {
            int layer = findEntryLayer(entry, key);
            if (layer >= 0) {
                entry->layers[layer].flag = value;
                EntryObject* object = findEntryObject(entry, key);
                if (object)
                    object->flag = value;
            }
        }
    }
}

// FUNCTION: 0x4C91C0 setEntryLayerWord
void __cdecl setEntryLayerWord(unsigned int index, int key, int value)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid) {
            int layer = findEntryLayer(entry, key);
            if (layer >= 0) {
                entry->layers[layer].wordA = (short)value;
                EntryObject* object = findEntryObject(entry, key);
                if (object)
                    object->wordA = (short)value;
            }
        }
    }
}

// FUNCTION: 0x4C9220 setEntryLayerPos
void __cdecl setEntryLayerPos(unsigned int index, int key, short x, short y)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid) {
            int layer = findEntryLayer(entry, key);
            if (layer >= 0) {
                EntryLayer* slot = &entry->layers[layer];
                slot->x = x;
                slot->y = y;
                EntryObject* object = findEntryObject(entry, key);
                if (object) {
                    object->x = x;
                    object->y = y;
                }
            }
        }
    }
}

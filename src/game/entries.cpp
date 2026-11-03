#include "unsorted/entry_table.h"

extern unsigned char g_fadeActive;
extern unsigned char g_slotFlags[];

void __cdecl sub_4C7D40(EntryRecord* entry, const char* name);
void __cdecl sub_4EA220(int mode, void* object);

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
                    setSlotFlagB(child->kind, (unsigned char)value);
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

// FUNCTION: 0x4C4F70 isFadeIdle
int __cdecl isFadeIdle()
{
    return g_fadeActive != 1;
}

// FUNCTION: 0x4CE9B0 setSlotFlag
void __cdecl setSlotFlag(unsigned int index, unsigned char value)
{
    if (index <= 0xff)
        g_slotFlags[index * 60] = value;
}

// FUNCTION: 0x4C8AF0 setEntryOrigin
void __cdecl setEntryOrigin(unsigned int index, float x, float y)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        entry->originX = x;
        entry->originY = y;
    }
}

// FUNCTION: 0x4C8910 setEntryName
void __cdecl setEntryName(unsigned int index, const char* name)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        entry->loaded = 1;
        entry->ready = 1;
        entry->status = 0;
        entry->unk07 = 0;
        entry->flag0A = 1;
        sub_4C7D40(entry, name);
        for (int i = 0; i < 0x40; i++) {
            entry->name[i] = name[i];
            if (!name[i])
                break;
        }
    }
}

// FUNCTION: 0x4C9330 swapEntryValues
void __cdecl swapEntryValues(unsigned int index, int a, int b)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid && entry->values && a >= 0 && a < entry->count && b >= 0 && b < entry->count && a != b) {
            short* slotA = (short*)((char*)entry->values + a * 10);
            int saved = *slotA;
            *slotA = *(short*)((char*)entry->values + b * 10);
            *(short*)((char*)entry->values + b * 10) = (short)saved;
        }
    }
}

// FUNCTION: 0x4EA2F0 releaseObject
void __cdecl releaseObject(void* object)
{
    if (object)
        sub_4EA220(0, object);
}

// FUNCTION: 0x4C8C30 setEntryKind
void __cdecl setEntryKind(unsigned int index, char value)
{
    if (index <= 0x6d)
        g_entryTable[index].kind08 = value;
}

// FUNCTION: 0x4C9310 unloadEntry
void __cdecl unloadEntry(unsigned int index)
{
    if (index <= 0x6d)
        g_entryTable[index].loaded = 0;
}

// FUNCTION: 0x4C8CB0 setEntryValue
void __cdecl setEntryValue(unsigned int index, int slot, short value)
{
    if (index <= 0x6d) {
        EntryRecord* entry = &g_entryTable[index];
        if (entry->valid && slot >= 0 && slot < entry->count && entry->values) {
            short* record = (short*)((char*)entry->values + slot * 10);
            record[0] = value;
            record[3] = 0;
            record[4] = 0;
        }
    }
}

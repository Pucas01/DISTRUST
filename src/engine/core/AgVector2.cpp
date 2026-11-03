#include "engine/core/AgVector2.h"

extern float g_sinTable[4096];

// FUNCTION: 0x4FD0C0 AgVector2::rotate
void AgVector2::rotate(AgVector2* out, float angle)
{
    int sineIndex = (int)(angle * 651.8986469044033) & 0xFFF;
    int cosineIndex = (int)((angle + 1.5707964f) * 651.8986469044033) & 0xFFF;
    float sine = g_sinTable[sineIndex];
    float cosine = g_sinTable[cosineIndex];
    out->x = x * cosine + y * sine;
    out->y = y * cosine - x * sine;
}

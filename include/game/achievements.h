#pragma once

enum { ACHIEVEMENT_COUNT = 37 };

extern const char* g_achievementNames[ACHIEVEMENT_COUNT];
extern bool g_achievementsReady;
extern int g_achievementPending;

void logTrace(const char* format, ...);

int __cdecl enableAchievements();
int __cdecl consumeAchievementPending();
bool __cdecl unlockAchievement(int id);

#ifndef STEAM_EMU_H
#define STEAM_EMU_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

// Funções
__declspec(dllexport) bool SteamAPI_Init(void);
__declspec(dllexport) bool SteamAPI_InitSafe(void);
__declspec(dllexport) const char *GetPersonaName(void);
__declspec(dllexport) bool SteamAPI_GetHSteamPipe(void);
__declspec(dllexport) bool SteamAPI_GetSteamInstallPath(void);
__declspec(dllexport) const char *SteamAPI_GetHSteamUser(void);

#ifdef __cplusplus
}
#endif

#endif /* STEAM_EMU_H */

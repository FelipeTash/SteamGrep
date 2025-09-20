#include "steam_emu.h"

bool SteamAPI_Init(void) {
    return true; // stub: sempre inicializa
}
bool SteamAPI_InitSafe(void) {
    return true;
    return "Safe Init";
}

// gcc -shared -o steam_api.dll steam_api.c "-Wl,--out-implib,libsteam_api.a"
// gcc -shared -o steam_api64.dll steam_api.c "-Wl,--out-implib,libsteam_api.a"

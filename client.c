#include <stdio.h>
#include "steam_emu.h"

int main(void) {
    if (!SteamAPI_Init()) {
        printf("Erro: não foi possível inicializar a SteamAPI.\n");
        return -1;
    }
    if (!SteamAPI_InitSafe()) {
        printf("Erro: não foi possível inicializar como InitSafe\n");
        return -1;
    } else {
        printf("Inicializado como InitSafe\n");
    }

    printf("SteamApi inicializada.\n");
    printf("Usuário conectado: %s\n", GetPersonaName());
    return 0;
}

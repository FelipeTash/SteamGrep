// Este é o arquivo principal.

#include <stdio.h>
#include <windows.h>
#include "steam_emu.h"

int main(void)
{
    // Verifica se a SteamAPI_init é presente
    if (!SteamAPI_Init()) {
        printf("Erro: não foi possível inicializar a Steam API!");
        return -1;
    }
    
    printf("SteamApi inicializada.");
}
// Este é o arquivo de teste.

#include <stdio.h>
#include "steam_emu.h"

int main(void)
{
    // Verifica se a SteamAPI_init é presente
    if (!SteamAPI_Init()) {
        printf("Erro: não foi possível inicializar a SteamAPI.");
        return -1;
    }
    // Inicializa como InitSafe
    if (!SteamAPI_InitSafe()) {
        printf("Erro: não foi possível inicializar como InitSafe");
        return -1;
    } else {
        printf("inicializado como InitSafe");
    }
    
    printf("SteamApi inicializada.");


}

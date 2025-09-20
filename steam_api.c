#include "steam_emu.h"
#include <stdio.h>
#include <stdbool.h>

// variável global
static char nome[128] = "Mr. Grep"; // valor padrão

// inicializador simples
static void carregar_nome(void) {
    FILE *user = fopen("username.txt", "r");
    if (user) {
        if (fgets(nome, sizeof(nome), user)) {
            for (char *p = nome; *p; p++) {
                if (*p == '\n' || *p == '\r') {
                    *p = '\0';
                    break;
                }
            }
        }
        fclose(user);
    }
}

// --- Funções exportadas ---
__declspec(dllexport) bool SteamAPI_Init(void) {
    carregar_nome(); // tenta carregar nome do arquivo
    return true;
}

__declspec(dllexport) bool SteamAPI_InitSafe(void) {
    return true;
}

__declspec(dllexport) const char *GetPersonaName(void) {
    return nome;
}

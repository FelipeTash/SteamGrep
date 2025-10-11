#ifndef STEAMAPI_COMMUN_H
#define STEAMAPI_COMMUN_H

// Um ​​buffer de tamanho fixo para receber uma mensagem de erro retornada por algumas chamadas de API.
const int k_cchMaxSteamErrMsg = 1024;
typedef char SteamErrMsg[ k_cchMaxSteamErrMsg ];

#endif

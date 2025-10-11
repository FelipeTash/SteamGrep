#ifndef STEAMAPI_H
#define STEAMAPI_H

#if defined(_WIN32) || defined(_WIN64)
  #if defined(STEAMAPI_EXPORTS)

    #define s_api __declspec(dllexport)

  #else

    #define s_api __declspec(dllimport)
    
  #endif
#else
  #define s_api
#endif

#include "steamAPI_commun.h"

enum apiResults
{
    InitResult_OK = 0
};

inline apiResults SteamAPI_InitEx( SteamErrMsg *pOutErrMsg );

inline bool SteamAPI_init(){
    return SteamAPI_InitEx( nullptr ) == InitResult_OK;
};

#endif // STEAMAPI_H

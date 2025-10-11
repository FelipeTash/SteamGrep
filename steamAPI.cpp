#include <iostream>
#include <cstdio>
#include "pakman.h"

const int k_cchMaxSteamErrMsg = 1024;
typedef char SteamErrMsg[k_cchMaxSteamErrMsg];

enum apiResults {
    InitResult_OK = 0
};

__declspec(dllexport) apiResults SteamAPI_InitEx(SteamErrMsg *pOutErrMsg) {
    std::cout << "Iniciando SteamAPI..." << std::endl;
    if (pOutErrMsg)
        snprintf(*pOutErrMsg, k_cchMaxSteamErrMsg, "Nenhum erro.");
    return InitResult_OK;
}

__declspec(dllexport) bool SteamAPI_init() {
    return SteamAPI_InitEx(nullptr) == InitResult_OK;
}

class MyPakmanApps : public pakmanApps {
public:
    bool BIsSubscribed() override {
        return true; // Retorna sempre true
    }
};


bool CheckSubscription() {
    MyPakmanApps app;
    return app.BIsSubscribed();
}

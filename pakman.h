/* pakman */
#ifndef PAKMAN_H
#define PAKMAN_H

#if defined(_WIN32) || defined(_WIN64)
  #if defined(STEAMAPI_EXPORTS)

    #define s_api __declspec(dllexport)

  #else

    #define s_api __declspec(dllimport)
    
  #endif
#else
  #define s_api
#endif

class pakmanApps
{
    public:
        virtual bool BIsSubscribed();
};

#endif

#ifndef STATISKIT_LINALG_CONFIG_H
#define STATISKIT_LINALG_CONFIG_H

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_LINALG
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllexport))
        #else
            #define STATISKIT_LINALG_API __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllimport))
        #else
            #define STATISKIT_LINALG_API __declspec(dllimport)
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_LINALG_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_LINALG_API
    #endif
#endif

#endif
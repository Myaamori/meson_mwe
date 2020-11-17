#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_A
    #define A_PUBLIC __declspec(dllexport)
  #else
    #define A_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_A
      #define A_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define A_PUBLIC
  #endif
#endif

int A_PUBLIC a_func();


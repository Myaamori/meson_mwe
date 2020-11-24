#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_MY_SUBPROJECT
    #define MY_SUBPROJECT_PUBLIC __declspec(dllexport)
  #else
    #define MY_SUBPROJECT_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_MY_SUBPROJECT
      #define MY_SUBPROJECT_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define MY_SUBPROJECT_PUBLIC
  #endif
#endif

int MY_SUBPROJECT_PUBLIC my__func();


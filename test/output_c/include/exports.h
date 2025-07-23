#pragma once

#ifndef MR_C_API
#  ifdef _WIN32
#    if MR_C_BUILD_LIBRARY
#      define MR_C_API __declspec(dllexport)
#    else
#      define MR_C_API __declspec(dllimport)
#    endif
#  else
#    define MR_C_API __attribute__((__visibility__("default")))
#  endif
#endif


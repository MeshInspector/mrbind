#pragma once

#ifndef MR_AB_API
#  ifdef _WIN32
#    ifdef MR_AB_BUILD_LIBRARY
#      define MR_AB_API __declspec(dllexport)
#    else
#      define MR_AB_API __declspec(dllimport)
#    endif
#  else
#    define MR_AB_API __attribute__((__visibility__("default")))
#  endif
#endif


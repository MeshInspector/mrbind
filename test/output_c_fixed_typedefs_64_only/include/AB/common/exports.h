#pragma once

#ifndef MR_CAB_API
#  ifdef _WIN32
#    ifdef MR_CAB_BUILD_LIBRARY
#      define MR_CAB_API __declspec(dllexport)
#    else
#      define MR_CAB_API __declspec(dllimport)
#    endif
#  else
#    define MR_CAB_API __attribute__((__visibility__("default")))
#  endif
#endif


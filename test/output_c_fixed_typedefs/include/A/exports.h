#ifndef MR_C_DETAIL_INCLUDED_A_EXPORTS_H
#define MR_C_DETAIL_INCLUDED_A_EXPORTS_H

#ifndef MR_A_API
#  ifdef _WIN32
#    ifdef MR_A_BUILD_LIBRARY
#      define MR_A_API __declspec(dllexport)
#    else
#      define MR_A_API __declspec(dllimport)
#    endif
#  else
#    define MR_A_API __attribute__((__visibility__("default")))
#  endif
#endif


#endif // MR_C_DETAIL_INCLUDED_A_EXPORTS_H

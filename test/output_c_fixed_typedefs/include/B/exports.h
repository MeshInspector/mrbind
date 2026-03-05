#ifndef MR_C_DETAIL_INCLUDED_B_EXPORTS_H
#define MR_C_DETAIL_INCLUDED_B_EXPORTS_H

#ifndef MR_CB_API
#  ifdef _WIN32
#    ifdef MR_CB_BUILD_LIBRARY
#      define MR_CB_API __declspec(dllexport)
#    else
#      define MR_CB_API __declspec(dllimport)
#    endif
#  else
#    define MR_CB_API __attribute__((__visibility__("default")))
#  endif
#endif


#endif // MR_C_DETAIL_INCLUDED_B_EXPORTS_H

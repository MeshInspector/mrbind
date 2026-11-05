#ifndef MR_C_DETAIL_INCLUDED_ABC_EXPORTS_H
#define MR_C_DETAIL_INCLUDED_ABC_EXPORTS_H

#ifndef MR_ABC_API
#  ifdef _WIN32
#    ifdef MR_ABC_BUILD_LIBRARY
#      define MR_ABC_API __declspec(dllexport)
#    else
#      define MR_ABC_API __declspec(dllimport)
#    endif
#  else
#    define MR_ABC_API __attribute__((__visibility__("default")))
#  endif
#endif


#endif // MR_C_DETAIL_INCLUDED_ABC_EXPORTS_H

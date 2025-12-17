#ifndef MR_C_DETAIL_INCLUDED_COMMON_H
#define MR_C_DETAIL_INCLUDED_COMMON_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __APPLE__
#include <stddef.h>
typedef ptrdiff_t MR_C_int64_t;
typedef size_t MR_C_uint64_t;
#else
#include <stdint.h>
typedef int64_t MR_C_int64_t;
typedef uint64_t MR_C_uint64_t;
#endif


typedef enum MR_C_PassBy
{
    MR_C_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_PassBy_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.
    MR_C_PassBy_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.
    MR_C_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
    MR_C_PassBy_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.
} MR_C_PassBy;

// Allocates `n` bytes of memory, which can then be freed using `MR_C_Free()`.
MR_C_API void *MR_C_Alloc(size_t num_bytes);

// Deallocates memory that was previously allocated with `MR_C_Alloc()`. Does nothing if the pointer is null.
MR_C_API void MR_C_Free(void *ptr);

// Allocates `n` bytes of memory, which can then be freed using `MR_C_FreeArray()`.
// For all purposes this is equivalent to `MR_C_Alloc()` and `MR_C_Free()`, but the deallocation functions are not interchangable.
// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise.
// So the allocation functions must be provided separately for both too.
MR_C_API void *MR_C_AllocArray(size_t num_bytes);

// Deallocates memory that was previously allocated with `MR_C_AllocArray()`. Does nothing if the pointer is null.
MR_C_API void MR_C_FreeArray(void *ptr);

// The deprecation attribute.
#if !defined(MR_C_DEPRECATED) && !defined(MR_C_DEPRECATED_REASON)
#  if defined(__cplusplus) // C++:
#    ifdef __has_cpp_attribute
#      if __has_cpp_attribute(deprecated)
#        define MR_C_DEPRECATED [[deprecated]]
#        ifdef _MSC_VER
#          define MR_C_DEPRECATED_REASON(str) [[deprecated("is deprecated: " str)]] // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.
#        else
#          define MR_C_DEPRECATED_REASON(str) [[deprecated(str)]]
#        endif
#      endif
#    endif
#  elif defined(_MSC_VER) // C in MSVC. It has a buggy `__has_c_attribute`, so needs to be special-cased.
#    if _MSC_VER >= 1937 && __STDC_VERSION__ >= 202312 // Funnily enough, MSVC doesn't even define `__STDC_VERSION__` in `/std:clatest` mode in 1936, but does define it in if you pass `/std:c17`. 1937 does define it in both cases (through the value for C23 is supposed to be one less than what it reports, `202311`). This also coincides with `[[deprecated]]` getting implemented in C.
#      define MR_C_DEPRECATED [[deprecated]]
#      define MR_C_DEPRECATED_REASON(str) [[deprecated("is deprecated: " str)]] // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.
#    else // Fall back to the non-standard syntax.
#      define MR_C_DEPRECATED __declspec(deprecated)
#      define MR_C_DEPRECATED_REASON(str) __declspec(deprecated("is deprecated: " str)) // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.
#    endif
#  else // C not in MSVC:
#    if defined(__has_c_attribute) && (__STDC_VERSION__ >= 202311 || !defined(__GNUC__)) // Don't trust the `__has_c_attribute()` alone, as new attributes might warn when used in old C, even if the compiler reports them as supported. So if we have `__GNUC__` and an old C version, prefer the non-standard syntax instead. If the C version is old, but this isn't `__GNUC__`, then we have no syntax to fall back to, so we just use this one.
#      if __has_c_attribute(deprecated)
#        define MR_C_DEPRECATED [[deprecated]]
#        define MR_C_DEPRECATED_REASON(str) [[deprecated(str)]]
#      endif
#    endif
#    if !defined(MR_C_DEPRECATED) && defined(__GNUC__)
#      define MR_C_DEPRECATED __attribute__((__deprecated__))
#      define MR_C_DEPRECATED_REASON(str) __attribute__((__deprecated__(str)))
#    endif
#  endif
#  ifndef MR_C_DEPRECATED // If nothing above has worked, just expand to nothing.
#    define MR_C_DEPRECATED
#  endif
#  ifndef MR_C_DEPRECATED_REASON
#    define MR_C_DEPRECATED_REASON(str) MR_C_DEPRECATED
#  endif
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_COMMON_H

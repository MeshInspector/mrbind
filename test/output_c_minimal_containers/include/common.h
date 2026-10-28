#pragma once

#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum MR_C_PassBy
{
    MR_C_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_PassBy_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.
    MR_C_PassBy_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.
    MR_C_PassBy_MoveAndDestroy, // Same as `Move`, but also destroy the pointer after moving from it.
    MR_C_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
    MR_C_PassBy_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.
} MR_C_PassBy;

/// Allocates `n` bytes of memory, which can then be freed using `MR_C_Free()`.
MR_C_API void *MR_C_Alloc(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_C_Alloc()`. Does nothing if the pointer is null.
MR_C_API void MR_C_Free(void *ptr);

/// Allocates `n` bytes of memory, which can then be freed using `MR_C_FreeArray()`.
/// For most purposes this is equivalent to `MR_C_Alloc()` and `MR_C_Free()`, but the deallocation functions are not interchangable.
/// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise.
/// So the allocation functions must be provided separately for both too.
MR_C_API void *MR_C_AllocArray(size_t num_bytes);

/// Deallocates memory that was previously allocated with `MR_C_AllocArray()`. Does nothing if the pointer is null.
MR_C_API void MR_C_FreeArray(void *ptr);

/// The detailed exception handler. Receives NULL-terminated arrays of exception messages and type names.
/// `messages` always has at least one element. If there are no nested exceptions, it will have exactly one element.
/// `type_names` always has either the same size as `messages`, or one less element if the last exception has an unknown type (then the corresponding message is a placeholder).
/// If the handler doesn't terminate the application, the function that threw the exception will return zero.
/// If the handler is null, we don't attempt to catch exceptions. Then if the throwing function is called from C++ the callee might be able to catch the exception normally (unless the library is compiled with MSVC with `/EHc`).
typedef void (*MR_C_ExceptionHandlerFuncPtr)(const char *const *messages, const char *const *type_names, void *userdata);

/// The simple exception handler. Only receives the exception message, which is never null. When several exceptions are nested, their messages are joined with newlines.
/// If the handler doesn't terminate the application, the function that threw the exception will return zero.
/// If the handler is null, we don't attempt to catch exceptions. Then if the throwing function is called from C++ the callee might be able to catch the exception normally (unless the library is compiled with MSVC with `/EHc`).
typedef void (*MR_C_SimpleExceptionHandlerFuncPtr)(const char *message);

/// Returns true if the C++ code was compiled with exceptions enabled.
/// If this returns false, most other exception-related functions will do nothing.
MR_C_API bool MR_C_ExceptionSupportEnabled(void);

/// Returns the default exception handler.
/// The default handler prints the exception message to stderr and calls `abort();`.
MR_C_API MR_C_ExceptionHandlerFuncPtr MR_C_GetDefaultExceptionHandler(void);

/// Returns the current exception handler.
/// By default this returns the same handler as `MR_C_GetDefaultExceptionHandler()`.
MR_C_API MR_C_ExceptionHandlerFuncPtr MR_C_GetCurrentExceptionHandler(void);

/// Returns the current exception handler user data pointer. Null by default.
MR_C_API void *MR_C_GetCurrentExceptionHandlerUserData(void);

/// Sets the current exception handler. This is not thread-safe.
MR_C_API void MR_C_SetExceptionHandler(MR_C_ExceptionHandlerFuncPtr func, void *userdata);

/// Sets the current exception handler, using the simplified interface. This is not thread-safe.
MR_C_API void MR_C_SetSimpleExceptionHandler(MR_C_SimpleExceptionHandlerFuncPtr func);

/// Throws a C++ exception with the specified message.
/// This is intended to be used from callbacks passed to C++.
/// This doesn't directly call our C exception handling callbacks. Those are only called if this is used called in a callback (unrelated to exception handling), and the resulting exception would leak into the C code.
/// If `MR_C_ExceptionSupportEnabled() == false`, terminates the application.
MR_C_API void MR_C_ThrowException(const char *message);

/// When called from a callback passed to `std::function`, copies the string, and throws a C++ exception with this message when the callback finishes executing.
/// Must not be executed outside of a callback.
/// This is an alternative to `MR_C_ThrowException()` that can be used if the callback is passed from a language that can't tolerate C++ exceptions being thrown across the language boundary with C++.
MR_C_API void MR_C_ThrowExceptionOnCallbackExit(const char *message);

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

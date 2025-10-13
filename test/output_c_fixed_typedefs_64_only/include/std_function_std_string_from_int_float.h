#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores a functor of type: `std::string(int, float)`. Possibly stateful.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_std_string_from_int_float MR_C_std_function_std_string_from_int_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_std_string_from_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_function_std_string_from_int_float_DestroyArray()`.
/// Use `MR_C_std_function_std_string_from_int_float_OffsetMutablePtr()` and `MR_C_std_function_std_string_from_int_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_std_string_from_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_function_std_string_from_int_float_AssignFromAnother(MR_C_std_function_std_string_from_int_float *_this, MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_function_std_string_from_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_std_string_from_int_float_Destroy(const MR_C_std_function_std_string_from_int_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_function_std_string_from_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_std_string_from_int_float_DestroyArray(const MR_C_std_function_std_string_from_int_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_OffsetPtr(const MR_C_std_function_std_string_from_int_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_OffsetMutablePtr(MR_C_std_function_std_string_from_int_float *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_return_end` is an output parameter. It's will never be null, and initially points to a zeroed variable.
/// Callback return value can not be null.
/// If `*_return_end` is kept null, then the callback return value is assumed to be null-terminated.
MR_C_API void MR_C_std_function_std_string_from_int_float_Assign(MR_C_std_function_std_string_from_int_float *_this, const char *(*func)(const char **_return_end, int _1, float _2));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_return_end` is an output parameter. It's will never be null, and initially points to a zeroed variable.
/// Callback return value can not be null.
/// If `*_return_end` is kept null, then the callback return value is assumed to be null-terminated.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MR_C_API void MR_C_std_function_std_string_from_int_float_AssignWithDataPtr(MR_C_std_function_std_string_from_int_float *_this, const char *(*func)(const char **_return_end, int _1, float _2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif

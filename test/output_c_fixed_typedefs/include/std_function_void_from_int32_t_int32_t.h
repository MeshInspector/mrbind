#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores a functor of type: `void(int32_t, int32_t)`. Possibly stateful.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_void_from_int32_t_int32_t MR_C_std_function_void_from_int32_t_int32_t;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_int32_t_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_void_from_int32_t_int32_t *MR_C_std_function_void_from_int32_t_int32_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_function_void_from_int32_t_int32_t_DestroyArray()`.
/// Use `MR_C_std_function_void_from_int32_t_int32_t_OffsetMutablePtr()` and `MR_C_std_function_void_from_int32_t_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_void_from_int32_t_int32_t *MR_C_std_function_void_from_int32_t_int32_t_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_int32_t_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_void_from_int32_t_int32_t *MR_C_std_function_void_from_int32_t_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_int32_t_int32_t *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_function_void_from_int32_t_int32_t_AssignFromAnother(MR_C_std_function_void_from_int32_t_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_int32_t_int32_t *other);

/// Destroys a heap-allocated instance of `MR_C_std_function_void_from_int32_t_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_int32_t_int32_t_Destroy(const MR_C_std_function_void_from_int32_t_int32_t *_this);

/// Destroys a heap-allocated array of `MR_C_std_function_void_from_int32_t_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_int32_t_int32_t_DestroyArray(const MR_C_std_function_void_from_int32_t_int32_t *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_function_void_from_int32_t_int32_t *MR_C_std_function_void_from_int32_t_int32_t_OffsetPtr(const MR_C_std_function_void_from_int32_t_int32_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_function_void_from_int32_t_int32_t *MR_C_std_function_void_from_int32_t_int32_t_OffsetMutablePtr(MR_C_std_function_void_from_int32_t_int32_t *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_function_void_from_int32_t_int32_t_Assign(MR_C_std_function_void_from_int32_t_int32_t *_this, void (*func)(int32_t _1, int32_t _2));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MR_C_API void MR_C_std_function_void_from_int32_t_int32_t_AssignWithDataPtr(MR_C_std_function_void_from_int32_t_int32_t *_this, void (*func)(int32_t _1, int32_t _2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif

#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdFunction_A MR_StdFunction_A; // Defined in `#include <MR/test_std_function.h>`.


/// Stores a functor of type: `MR::StdFunction::A(void)`. Possibly stateful.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_MR_StdFunction_A MR_C_std_function_MR_StdFunction_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_function_MR_StdFunction_A_DestroyArray()`.
/// Use `MR_C_std_function_MR_StdFunction_A_OffsetMutablePtr()` and `MR_C_std_function_MR_StdFunction_A_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_function_MR_StdFunction_A_AssignFromAnother(MR_C_std_function_MR_StdFunction_A *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other);

/// Destroys a heap-allocated instance of `MR_C_std_function_MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_MR_StdFunction_A_Destroy(const MR_C_std_function_MR_StdFunction_A *_this);

/// Destroys a heap-allocated array of `MR_C_std_function_MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_MR_StdFunction_A_DestroyArray(const MR_C_std_function_MR_StdFunction_A *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetPtr(const MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null.
/// Callback parameter `_return_pass_by` is an output parameter. It's will never be null, and initially points to a zeroed variable.
MR_C_API void MR_C_std_function_MR_StdFunction_A_Assign(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null.
/// Callback parameter `_return_pass_by` is an output parameter. It's will never be null, and initially points to a zeroed variable.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MR_C_API void MR_C_std_function_MR_StdFunction_A_AssignWithDataPtr(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif

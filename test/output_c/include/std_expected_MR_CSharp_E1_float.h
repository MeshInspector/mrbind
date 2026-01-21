#pragma once

#include <MR/test_csharp.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either a `MR::CSharp::E1` that represents success or a `float` that represents an error.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_expected_MR_CSharp_E1_float MR_C_std_expected_MR_CSharp_E1_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_E1_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_C_std_expected_MR_CSharp_E1_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_expected_MR_CSharp_E1_float_DestroyArray()`.
/// Use `MR_C_std_expected_MR_CSharp_E1_float_OffsetMutablePtr()` and `MR_C_std_expected_MR_CSharp_E1_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_C_std_expected_MR_CSharp_E1_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_E1_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_C_std_expected_MR_CSharp_E1_float_ConstructFromAnother(const MR_C_std_expected_MR_CSharp_E1_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_expected_MR_CSharp_E1_float_AssignFromAnother(MR_C_std_expected_MR_CSharp_E1_float *_this, const MR_C_std_expected_MR_CSharp_E1_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_expected_MR_CSharp_E1_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_MR_CSharp_E1_float_Destroy(const MR_C_std_expected_MR_CSharp_E1_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_expected_MR_CSharp_E1_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_expected_MR_CSharp_E1_float_DestroyArray(const MR_C_std_expected_MR_CSharp_E1_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_expected_MR_CSharp_E1_float *MR_C_std_expected_MR_CSharp_E1_float_OffsetPtr(const MR_C_std_expected_MR_CSharp_E1_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_C_std_expected_MR_CSharp_E1_float_OffsetMutablePtr(MR_C_std_expected_MR_CSharp_E1_float *ptr, ptrdiff_t i);

/// Returns true if this instance represents success, or false if it represents an error.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_expected_MR_CSharp_E1_float_Success(const MR_C_std_expected_MR_CSharp_E1_float *_this);

/// If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const MR_CSharp_E1 *MR_C_std_expected_MR_CSharp_E1_float_GetValue(const MR_C_std_expected_MR_CSharp_E1_float *_this);

/// If this instance represents an error, returns the stored `float`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const float *MR_C_std_expected_MR_CSharp_E1_float_GetError(const MR_C_std_expected_MR_CSharp_E1_float *_this);

/// If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API MR_CSharp_E1 *MR_C_std_expected_MR_CSharp_E1_float_GetMutableValue(MR_C_std_expected_MR_CSharp_E1_float *_this);

/// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API float *MR_C_std_expected_MR_CSharp_E1_float_GetMutableError(MR_C_std_expected_MR_CSharp_E1_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif

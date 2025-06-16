#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A fixed-size array of `int` of size 42.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_array_int_42 MR_C_std_array_int_42;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_array_int_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_int_42 *MR_C_std_array_int_42_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_array_int_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_array_int_42 *MR_C_std_array_int_42_ConstructFromAnother(const MR_C_std_array_int_42 *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_array_int_42_AssignFromAnother(MR_C_std_array_int_42 *_this, const MR_C_std_array_int_42 *other);

/// Destroys a heap-allocated instance of `MR_C_std_array_int_42`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_array_int_42_Destroy(MR_C_std_array_int_42 *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_array_int_42_At(const MR_C_std_array_int_42 *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_array_int_42_MutableAt(MR_C_std_array_int_42 *_this, size_t i);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_array_int_42_Data(const MR_C_std_array_int_42 *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_array_int_42_MutableData(MR_C_std_array_int_42 *_this);

#ifdef __cplusplus
} // extern "C"
#endif

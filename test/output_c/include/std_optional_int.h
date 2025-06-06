#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either a single `int` or nothing.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_optional_int MR_C_std_optional_int;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_ConstructFromAnother(const MR_C_std_optional_int *other);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_C_std_optional_int_ConstructFrom(const MR_C_std_optional_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_optional_int_AssignFromAnother(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_optional_int_AssignFrom(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other);

/// Destroys a heap-allocated instance of `MR_C_std_optional_int`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_optional_int_Destroy(MR_C_std_optional_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif

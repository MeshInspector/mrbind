#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdOptional_A MR_StdOptional_A; // Defined in `#include <MR/test_std_optional.h>`.


/// Stores either a single `MR::StdOptional::A` or nothing.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_optional_MR_StdOptional_A MR_C_std_optional_MR_StdOptional_A;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_A *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_ConstructFrom(const MR_StdOptional_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(MR_C_std_optional_MR_StdOptional_A *_this, const MR_C_std_optional_MR_StdOptional_A *other);

/// Assigns the contents.
/// Parameter `_this` can not be null.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_C_std_optional_MR_StdOptional_A_AssignFrom(MR_C_std_optional_MR_StdOptional_A *_this, const MR_StdOptional_A *other);

/// Destroys a heap-allocated instance of `MR_C_std_optional_MR_StdOptional_A`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_optional_MR_StdOptional_A_Destroy(MR_C_std_optional_MR_StdOptional_A *_this);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null.
MR_C_API const MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_Value(const MR_C_std_optional_MR_StdOptional_A *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null.
MR_C_API MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_MutableValue(MR_C_std_optional_MR_StdOptional_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

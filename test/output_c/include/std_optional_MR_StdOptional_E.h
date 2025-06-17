#pragma once

#include <MR/test_std_optional.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either a single `MR::StdOptional::E` or nothing.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_optional_MR_StdOptional_E MR_C_std_optional_MR_StdOptional_E;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_optional_MR_StdOptional_E_DestroyArray()`.
/// Use `MR_C_std_optional_MR_StdOptional_E_OffsetMutablePtr()` and `MR_C_std_optional_MR_StdOptional_E_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_E *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFrom(const MR_StdOptional_E *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(MR_C_std_optional_MR_StdOptional_E *_this, const MR_C_std_optional_MR_StdOptional_E *other);

/// Assigns the contents.
/// Parameter `_this` can not be null.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_C_std_optional_MR_StdOptional_E_AssignFrom(MR_C_std_optional_MR_StdOptional_E *_this, const MR_StdOptional_E *other);

/// Destroys a heap-allocated instance of `MR_C_std_optional_MR_StdOptional_E`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_MR_StdOptional_E_Destroy(MR_C_std_optional_MR_StdOptional_E *_this);

/// Destroys a heap-allocated array of `MR_C_std_optional_MR_StdOptional_E`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_MR_StdOptional_E_DestroyArray(MR_C_std_optional_MR_StdOptional_E *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array.
MR_C_API const MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetPtr(const MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null.
MR_C_API const MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_Value(const MR_C_std_optional_MR_StdOptional_E *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null.
MR_C_API MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_MutableValue(MR_C_std_optional_MR_StdOptional_E *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_MR_SeparateABC MR_C_std_vector_MR_SeparateABC; // Defined in `#include <std_vector_MR_SeparateABC.h>`.


// A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
/// Generated from class `MR::SeparateABC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SeparateABC MR_SeparateABC;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateABC_Destroy()` to free it when you're done using it.
MR_C_API MR_SeparateABC *MR_SeparateABC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SeparateABC_DestroyArray()`.
/// Use `MR_SeparateABC_OffsetMutablePtr()` and `MR_SeparateABC_OffsetPtr()` to access the array elements.
MR_C_API MR_SeparateABC *MR_SeparateABC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_SeparateABC *MR_SeparateABC_OffsetPtr(const MR_SeparateABC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_SeparateABC *MR_SeparateABC_OffsetMutablePtr(MR_SeparateABC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::SeparateABC::SeparateABC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateABC_Destroy()` to free it when you're done using it.
MR_C_API MR_SeparateABC *MR_SeparateABC_ConstructFromAnother(const MR_SeparateABC *_other);

/// Destroys a heap-allocated instance of `MR_SeparateABC`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateABC_Destroy(const MR_SeparateABC *_this);

/// Destroys a heap-allocated array of `MR_SeparateABC`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateABC_DestroyArray(const MR_SeparateABC *_this);

/// Generated from method `MR::SeparateABC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_SeparateABC *MR_SeparateABC_AssignFromAnother(MR_SeparateABC *_this, const MR_SeparateABC *_other);

/// Generated from function `MR::GetSeparateVecABC`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateABC_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateABC *MR_GetSeparateVecABC(void);

#ifdef __cplusplus
} // extern "C"
#endif

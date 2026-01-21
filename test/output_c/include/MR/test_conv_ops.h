#pragma once

#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::ConvOps::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_ConvOps_A MR_ConvOps_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConvOps_A_Destroy()` to free it when you're done using it.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ConvOps_A_DestroyArray()`.
/// Use `MR_ConvOps_A_OffsetMutablePtr()` and `MR_ConvOps_A_OffsetPtr()` to access the array elements.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_ConvOps_A *MR_ConvOps_A_OffsetPtr(const MR_ConvOps_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_OffsetMutablePtr(MR_ConvOps_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::ConvOps::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConvOps_A_Destroy()` to free it when you're done using it.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_ConstructFromAnother(const MR_ConvOps_A *_other);

/// Destroys a heap-allocated instance of `MR_ConvOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_ConvOps_A_Destroy(const MR_ConvOps_A *_this);

/// Destroys a heap-allocated array of `MR_ConvOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_ConvOps_A_DestroyArray(const MR_ConvOps_A *_this);

/// Generated from conversion operator `MR::ConvOps::A::operator bool`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_ConvOps_A_ConvertTo_bool(const MR_ConvOps_A *_this);

/// Generated from method `MR::ConvOps::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_ConvOps_A *MR_ConvOps_A_AssignFromAnother(MR_ConvOps_A *_this, const MR_ConvOps_A *_other);

#ifdef __cplusplus
} // extern "C"
#endif

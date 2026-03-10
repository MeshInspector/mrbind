#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::CommonBaseAB`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SeparateA`
///     `MR::SeparateB`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CommonBaseAB MR_CommonBaseAB;

/// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CommonBaseAB_Destroy()` to free it when you're done using it.
MR_C_API MR_CommonBaseAB *MR_CommonBaseAB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CommonBaseAB *MR_CommonBaseAB_OffsetPtr(const MR_CommonBaseAB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CommonBaseAB *MR_CommonBaseAB_OffsetMutablePtr(MR_CommonBaseAB *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CommonBaseAB`. Does nothing if the pointer is null.
MR_C_API void MR_CommonBaseAB_Destroy(const MR_CommonBaseAB *_this);

/// Destroys a heap-allocated array of `MR_CommonBaseAB`. Does nothing if the pointer is null.
MR_C_API void MR_CommonBaseAB_DestroyArray(const MR_CommonBaseAB *_this);

/// Generated from method `MR::CommonBaseAB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved in the return value.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_CommonBaseAB *MR_CommonBaseAB_AssignFromAnother(MR_CommonBaseAB *_this, MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other);

#ifdef __cplusplus
} // extern "C"
#endif

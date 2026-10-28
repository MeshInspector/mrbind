#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_SeparateA MR_SeparateA; // Defined in `#include <A/a.h>`.
typedef struct MR_SeparateB MR_SeparateB; // Defined in `#include <B/b.h>`.


/// Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_MR_SeparateA_MR_SeparateB MR_C_std_pair_MR_SeparateA_MR_SeparateB;

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *other);

/// Destroys a heap-allocated instance of `MR_C_std_pair_MR_SeparateA_MR_SeparateB`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

/// Destroys a heap-allocated array of `MR_C_std_pair_MR_SeparateA_MR_SeparateB`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_MR_SeparateA_MR_SeparateB_DestroyArray(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetPtr(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetMutablePtr(MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// The reference to the parameter `first` might be preserved in the constructed object.
/// The reference to the parameter `second` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR_C_PassBy first_pass_by, MR_SeparateA *first, MR_C_PassBy second_pass_by, MR_SeparateB *second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_MR_SeparateB MR_C_std_vector_MR_SeparateB; // Defined in `#include <std_vector_MR_SeparateB.h>`.
typedef struct MR_CommonBaseAB MR_CommonBaseAB; // Defined in `#include <AB_base/ab_base.h>`.


/// Generated from class `MR::SeparateB`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CommonBaseAB`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SeparateB MR_SeparateB;

/// Generated from constructor `MR::SeparateB::SeparateB`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateB_Destroy()` to free it when you're done using it.
MR_C_API MR_SeparateB *MR_SeparateB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_SeparateB *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_SeparateB *MR_SeparateB_OffsetPtr(const MR_SeparateB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SeparateB` to its base class `MR::CommonBaseAB`.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_CommonBaseAB *MR_SeparateB_UpcastTo_MR_CommonBaseAB(const MR_SeparateB *object);

/// Upcasts an instance of `MR::SeparateB` to its base class `MR::CommonBaseAB`.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_CommonBaseAB *MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB(MR_SeparateB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_SeparateB *MR_SeparateB_StaticDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_SeparateB *MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_SeparateB *MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_SeparateB *MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The reference to the parameter `object` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_SeparateB *MR_SeparateB_DynamicDowncastFromOrFail_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateB`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The reference to the parameter `object` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SeparateB *MR_SeparateB_MutableDynamicDowncastFromOrFail_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Destroys a heap-allocated instance of `MR_SeparateB`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateB_Destroy(const MR_SeparateB *_this);

/// Destroys a heap-allocated array of `MR_SeparateB`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateB_DestroyArray(const MR_SeparateB *_this);

/// Generated from method `MR::SeparateB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, MR_C_PassBy _other_pass_by, MR_SeparateB *_other);

/// Generated from function `MR::GetSeparateVecB`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateB_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void);

#ifdef __cplusplus
} // extern "C"
#endif

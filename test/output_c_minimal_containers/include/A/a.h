#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_MR_SeparateA MR_C_std_vector_MR_SeparateA; // Defined in `#include <std_vector_MR_SeparateA.h>`.
typedef struct MR_CommonBaseAB MR_CommonBaseAB; // Defined in `#include <AB_base/ab_base.h>`.


/// Generated from class `MR::SeparateA`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CommonBaseAB`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SeparateA MR_SeparateA;

/// Generated from constructor `MR::SeparateA::SeparateA`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SeparateA_Destroy()` to free it when you're done using it.
MR_C_API MR_SeparateA *MR_SeparateA_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_SeparateA *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_SeparateA *MR_SeparateA_OffsetPtr(const MR_SeparateA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_SeparateA *MR_SeparateA_OffsetMutablePtr(MR_SeparateA *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SeparateA` to its base class `MR::CommonBaseAB`.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_CommonBaseAB *MR_SeparateA_UpcastTo_MR_CommonBaseAB(const MR_SeparateA *object);

/// Upcasts an instance of `MR::SeparateA` to its base class `MR::CommonBaseAB`.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_CommonBaseAB *MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB(MR_SeparateA *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_SeparateA *MR_SeparateA_StaticDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_SeparateA *MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_SeparateA *MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_SeparateA *MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The reference to the parameter `object` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_SeparateA *MR_SeparateA_DynamicDowncastFromOrFail_MR_CommonBaseAB(const MR_CommonBaseAB *object);

/// Downcasts an instance of `MR::CommonBaseAB` to a derived class `MR::SeparateA`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The reference to the parameter `object` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SeparateA *MR_SeparateA_MutableDynamicDowncastFromOrFail_MR_CommonBaseAB(MR_CommonBaseAB *object);

/// Destroys a heap-allocated instance of `MR_SeparateA`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateA_Destroy(const MR_SeparateA *_this);

/// Destroys a heap-allocated array of `MR_SeparateA`. Does nothing if the pointer is null.
MR_C_API void MR_SeparateA_DestroyArray(const MR_SeparateA *_this);

/// Generated from method `MR::SeparateA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_SeparateA *MR_SeparateA_AssignFromAnother(MR_SeparateA *_this, MR_C_PassBy _other_pass_by, MR_SeparateA *_other);

/// Generated from function `MR::GetSeparateVecA`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateA *MR_GetSeparateVecA(void);

#ifdef __cplusplus
} // extern "C"
#endif

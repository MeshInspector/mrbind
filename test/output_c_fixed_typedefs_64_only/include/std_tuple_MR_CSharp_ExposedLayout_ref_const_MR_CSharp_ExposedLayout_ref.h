#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CSharp_ExposedLayout MR_CSharp_ExposedLayout; // Defined in `#include <MR/test_csharp.h>`.


/// Stores 2 objects: `MR::CSharp::ExposedLayout &`, `const MR::CSharp::ExposedLayout &`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref;

/// Destroys a heap-allocated instance of `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_DestroyArray(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_OffsetPtr(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_OffsetMutablePtr(MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *ptr, ptrdiff_t i);

/// Constructs the tuple elementwise.
/// Parameter `_0` can not be null. It is a single object.
/// The reference to the parameter `_0` might be preserved in the constructed object.
/// Parameter `_1` can not be null. It is a single object.
/// The reference to the parameter `_1` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(MR_CSharp_ExposedLayout *_0, const MR_CSharp_ExposedLayout *_1);

/// The element 0, of type `MR::CSharp::ExposedLayout &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this);

/// The element 1, of type `const MR::CSharp::ExposedLayout &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif

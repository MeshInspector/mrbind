#ifndef MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <MR/test_csharp.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores 2 objects: `MR::CSharp::ExposedLayout`, `const MR::CSharp::ExposedLayout`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DestroyArray()`.
// Use `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetMutablePtr()` and `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *other);

// Destroys a heap-allocated instance of `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this);

// Destroys a heap-allocated array of `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DestroyArray(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetPtr(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetMutablePtr(MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i);

// Constructs the tuple elementwise.
// The reference to the parameter `_0` might be preserved in the constructed object.
// The reference to the parameter `_1` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(MR_CSharp_ExposedLayout _0, MR_CSharp_ExposedLayout _1);

// The element 0, of type `MR::CSharp::ExposedLayout`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this);

// The element 0, of type `MR::CSharp::ExposedLayout`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut(MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this);

// The element 1, of type `const MR::CSharp::ExposedLayout`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H_2)
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_csharp.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_TUPLE_MR_CSHARP_EXPOSEDLAYOUT_CONST_MR_CSHARP_EXPOSEDLAYOUT_H_2)

#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_ABSTRACT_CLASSES_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_ABSTRACT_CLASSES_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::AbstractClasses::A`.
typedef struct MR_AbstractClasses_A MR_AbstractClasses_A;

// Generated from class `MR::AbstractClasses::B`.
// Derived classes:
//   Direct: (non-virtual)
//     `MR::AbstractClasses::C`
typedef struct MR_AbstractClasses_B MR_AbstractClasses_B;

// Generated from class `MR::AbstractClasses::C`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::AbstractClasses::B`
typedef struct MR_AbstractClasses_C MR_AbstractClasses_C;

// Generated from method `MR::AbstractClasses::A::foo`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AbstractClasses_A_foo(MR_AbstractClasses_A *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_A *MR_AbstractClasses_A_OffsetPtr(const MR_AbstractClasses_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_AbstractClasses_A *MR_AbstractClasses_A_OffsetMutablePtr(MR_AbstractClasses_A *ptr, ptrdiff_t i);

// Destroys a heap-allocated instance of `MR_AbstractClasses_B`. Does nothing if the pointer is null.
MR_C_API void MR_AbstractClasses_B_Destroy(const MR_AbstractClasses_B *_this);

// Destroys a heap-allocated array of `MR_AbstractClasses_B`. Does nothing if the pointer is null.
MR_C_API void MR_AbstractClasses_B_DestroyArray(const MR_AbstractClasses_B *_this);

// Generated from method `MR::AbstractClasses::B::foo`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AbstractClasses_B_foo(MR_AbstractClasses_B *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_B *MR_AbstractClasses_B_OffsetPtr(const MR_AbstractClasses_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_AbstractClasses_B *MR_AbstractClasses_B_OffsetMutablePtr(MR_AbstractClasses_B *ptr, ptrdiff_t i);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_C *MR_AbstractClasses_B_StaticDowncastTo_MR_AbstractClasses_C(const MR_AbstractClasses_B *object);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_AbstractClasses_C *MR_AbstractClasses_B_MutableStaticDowncastTo_MR_AbstractClasses_C(MR_AbstractClasses_B *object);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
// This version is acting on mutable pointers.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_C *MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(const MR_AbstractClasses_B *object);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_AbstractClasses_C *MR_AbstractClasses_B_MutableDynamicDowncastTo_MR_AbstractClasses_C(MR_AbstractClasses_B *object);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
// This version is acting on mutable pointers.
// Parameter `object` can not be null. It is a single object.
// The reference to the parameter `object` might be preserved in the return value.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_AbstractClasses_C *MR_AbstractClasses_B_DynamicDowncastToOrFail_MR_AbstractClasses_C(const MR_AbstractClasses_B *object);

// Downcasts an instance of `MR::AbstractClasses::B` to a derived class `MR::AbstractClasses::C`.
// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
// Parameter `object` can not be null. It is a single object.
// The reference to the parameter `object` might be preserved in the return value.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_AbstractClasses_C *MR_AbstractClasses_B_MutableDynamicDowncastToOrFail_MR_AbstractClasses_C(MR_AbstractClasses_B *object);

// Destroys a heap-allocated instance of `MR_AbstractClasses_C`. Does nothing if the pointer is null.
MR_C_API void MR_AbstractClasses_C_Destroy(const MR_AbstractClasses_C *_this);

// Destroys a heap-allocated array of `MR_AbstractClasses_C`. Does nothing if the pointer is null.
MR_C_API void MR_AbstractClasses_C_DestroyArray(const MR_AbstractClasses_C *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_C *MR_AbstractClasses_C_OffsetPtr(const MR_AbstractClasses_C *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_AbstractClasses_C *MR_AbstractClasses_C_OffsetMutablePtr(MR_AbstractClasses_C *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::AbstractClasses::C` to its base class `MR::AbstractClasses::B`.
// This version is acting on mutable pointers.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API const MR_AbstractClasses_B *MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(const MR_AbstractClasses_C *object);

// Upcasts an instance of `MR::AbstractClasses::C` to its base class `MR::AbstractClasses::B`.
// The reference to the parameter `object` might be preserved in the return value.
MR_C_API MR_AbstractClasses_B *MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B(MR_AbstractClasses_C *object);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_ABSTRACT_CLASSES_H

#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_TYPES_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_TYPES_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::NestedTypes::A::B`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_NestedTypes_A_B MR_NestedTypes_A_B;

typedef enum MR_NestedTypes_A_E
{
    MR_NestedTypes_A_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_NestedTypes_A_E;

// Generated from class `MR::NestedTypes::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_NestedTypes_A MR_NestedTypes_A;

// Returns a pointer to a member variable of class `MR::NestedTypes::A` named `b`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_NestedTypes_A_B *MR_NestedTypes_A_Get_b(const MR_NestedTypes_A *_this);

// Modifies a member variable of class `MR::NestedTypes::A` named `b`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null. It is a single object.
// The reference to the parameter `value` might be preserved in this object in element `b`.
// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_NestedTypes_A_Set_b(MR_NestedTypes_A *_this, const MR_NestedTypes_A_B *value);

// Returns a mutable pointer to a member variable of class `MR::NestedTypes::A` named `b`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_GetMutable_b(MR_NestedTypes_A *_this);

// Returns a pointer to a member variable of class `MR::NestedTypes::A` named `e`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_NestedTypes_A_E *MR_NestedTypes_A_Get_e(const MR_NestedTypes_A *_this);

// Modifies a member variable of class `MR::NestedTypes::A` named `e`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `value` might be preserved in this object in element `e`.
// When this function is called, this object will drop object references it had previously in `e`.
MR_C_API void MR_NestedTypes_A_Set_e(MR_NestedTypes_A *_this, MR_NestedTypes_A_E value);

// Returns a mutable pointer to a member variable of class `MR::NestedTypes::A` named `e`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API MR_NestedTypes_A_E *MR_NestedTypes_A_GetMutable_e(MR_NestedTypes_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_NestedTypes_A_DestroyArray()`.
// Use `MR_NestedTypes_A_OffsetMutablePtr()` and `MR_NestedTypes_A_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstructArray(size_t num_elems);

// Constructs `MR::NestedTypes::A` elementwise.
// Parameter `b` can not be null. It is a single object.
// The reference to the parameter `b` might be preserved in the constructed object.
// The reference to the parameter `e` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_ConstructFrom(const MR_NestedTypes_A_B *b, MR_NestedTypes_A_E e);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_NestedTypes_A *MR_NestedTypes_A_OffsetPtr(const MR_NestedTypes_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_OffsetMutablePtr(MR_NestedTypes_A *ptr, ptrdiff_t i);

// Generated from constructor `MR::NestedTypes::A::A`.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_ConstructFromAnother(const MR_NestedTypes_A *_other);

// Destroys a heap-allocated instance of `MR_NestedTypes_A`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_Destroy(const MR_NestedTypes_A *_this);

// Destroys a heap-allocated array of `MR_NestedTypes_A`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_DestroyArray(const MR_NestedTypes_A *_this);

// Generated from method `MR::NestedTypes::A::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_AssignFromAnother(MR_NestedTypes_A *_this, const MR_NestedTypes_A *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_B_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_NestedTypes_A_B_DestroyArray()`.
// Use `MR_NestedTypes_A_B_OffsetMutablePtr()` and `MR_NestedTypes_A_B_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetPtr(const MR_NestedTypes_A_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetMutablePtr(MR_NestedTypes_A_B *ptr, ptrdiff_t i);

// Generated from constructor `MR::NestedTypes::A::B::B`.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_B_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_ConstructFromAnother(const MR_NestedTypes_A_B *_other);

// Destroys a heap-allocated instance of `MR_NestedTypes_A_B`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_B_Destroy(const MR_NestedTypes_A_B *_this);

// Destroys a heap-allocated array of `MR_NestedTypes_A_B`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_B_DestroyArray(const MR_NestedTypes_A_B *_this);

// Generated from method `MR::NestedTypes::A::B::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_AssignFromAnother(MR_NestedTypes_A_B *_this, const MR_NestedTypes_A_B *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_NESTED_TYPES_H

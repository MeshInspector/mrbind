#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::LifetimeInference::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_LifetimeInference_A MR_LifetimeInference_A;

/// Generated from class `MR::LifetimeInference::B`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_LifetimeInference_B MR_LifetimeInference_B;

/// Generated from class `MR::LifetimeInference::C`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_LifetimeInference_C MR_LifetimeInference_C;

/// Returns a pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_LifetimeInference_A_Get_x(const MR_LifetimeInference_A *_this);

/// Modifies a member variable of class `MR::LifetimeInference::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, the parameter `_this` will drop object references it had previously in `x`.
MR_C_API void MR_LifetimeInference_A_Set_x(MR_LifetimeInference_A *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_LifetimeInference_A_GetMutable_x(MR_LifetimeInference_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_A_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LifetimeInference_A_DestroyArray()`.
/// Use `MR_LifetimeInference_A_OffsetMutablePtr()` and `MR_LifetimeInference_A_OffsetPtr()` to access the array elements.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LifetimeInference::A` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_A_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFrom(int x);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetPtr(const MR_LifetimeInference_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_OffsetMutablePtr(MR_LifetimeInference_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::LifetimeInference::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_A_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_ConstructFromAnother(const MR_LifetimeInference_A *_other);

/// Destroys a heap-allocated instance of `MR_LifetimeInference_A`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_A_Destroy(const MR_LifetimeInference_A *_this);

/// Destroys a heap-allocated array of `MR_LifetimeInference_A`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_A_DestroyArray(const MR_LifetimeInference_A *_this);

/// Generated from method `MR::LifetimeInference::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_LifetimeInference_A *MR_LifetimeInference_A_AssignFromAnother(MR_LifetimeInference_A *_this, const MR_LifetimeInference_A *_other);

/// Generated from method `MR::LifetimeInference::A::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_A_begin(MR_LifetimeInference_A *_this);

/// Generated from method `MR::LifetimeInference::A::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_A_end(MR_LifetimeInference_A *_this);

/// Generated from function `MR::LifetimeInference::begin`.
/// Parameter `a` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_begin_MR_LifetimeInference_A(MR_LifetimeInference_A *a);

/// Generated from function `MR::LifetimeInference::end`.
/// Parameter `a` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_end_MR_LifetimeInference_A(MR_LifetimeInference_A *a);

/// Returns a pointer to a member variable of class `MR::LifetimeInference::B` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_LifetimeInference_B_Get_x(const MR_LifetimeInference_B *_this);

/// Modifies a member variable of class `MR::LifetimeInference::B` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, the parameter `_this` will drop object references it had previously in `x`.
MR_C_API void MR_LifetimeInference_B_Set_x(MR_LifetimeInference_B *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::LifetimeInference::B` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_LifetimeInference_B_GetMutable_x(MR_LifetimeInference_B *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_B_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LifetimeInference_B_DestroyArray()`.
/// Use `MR_LifetimeInference_B_OffsetMutablePtr()` and `MR_LifetimeInference_B_OffsetPtr()` to access the array elements.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LifetimeInference::B` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_B_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFrom(int x);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetPtr(const MR_LifetimeInference_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_OffsetMutablePtr(MR_LifetimeInference_B *ptr, ptrdiff_t i);

/// Generated from constructor `MR::LifetimeInference::B::B`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_B_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_ConstructFromAnother(const MR_LifetimeInference_B *_other);

/// Destroys a heap-allocated instance of `MR_LifetimeInference_B`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_B_Destroy(const MR_LifetimeInference_B *_this);

/// Destroys a heap-allocated array of `MR_LifetimeInference_B`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_B_DestroyArray(const MR_LifetimeInference_B *_this);

/// Generated from method `MR::LifetimeInference::B::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_LifetimeInference_B *MR_LifetimeInference_B_AssignFromAnother(MR_LifetimeInference_B *_this, const MR_LifetimeInference_B *_other);

/// Generated from function `MR::LifetimeInference::begin`.
/// Parameter `b` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_begin_MR_LifetimeInference_B(MR_LifetimeInference_B *b);

/// Generated from function `MR::LifetimeInference::end`.
/// Parameter `b` can not be null. It is a single object.
MR_C_API int *MR_LifetimeInference_end_MR_LifetimeInference_B(MR_LifetimeInference_B *b);

/// Generated from constructor `MR::LifetimeInference::C::C`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_C_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_C *MR_LifetimeInference_C_ConstructFromAnother(const MR_LifetimeInference_C *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetPtr(const MR_LifetimeInference_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_LifetimeInference_C *MR_LifetimeInference_C_OffsetMutablePtr(MR_LifetimeInference_C *ptr, ptrdiff_t i);

/// Generated from constructor `MR::LifetimeInference::C::C`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LifetimeInference_C_Destroy()` to free it when you're done using it.
MR_C_API MR_LifetimeInference_C *MR_LifetimeInference_C_Construct(MR_LifetimeInference_A *_1, int *_2, int _3);

/// Destroys a heap-allocated instance of `MR_LifetimeInference_C`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_C_Destroy(const MR_LifetimeInference_C *_this);

/// Destroys a heap-allocated array of `MR_LifetimeInference_C`. Does nothing if the pointer is null.
MR_C_API void MR_LifetimeInference_C_DestroyArray(const MR_LifetimeInference_C *_this);

/// Generated from method `MR::LifetimeInference::C::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_LifetimeInference_C *MR_LifetimeInference_C_AssignFromAnother(MR_LifetimeInference_C *_this, const MR_LifetimeInference_C *_other);

#ifdef __cplusplus
} // extern "C"
#endif

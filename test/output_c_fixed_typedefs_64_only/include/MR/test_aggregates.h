#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
//   because otherwise there would be no way to construct them.
/// Generated from class `MR::Aggregates::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_A MR_Aggregates_A;

// This is an empty aggregate, it doesn't need an elementwise constructor.
/// Generated from class `MR::Aggregates::B`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_B MR_Aggregates_B;

/// Generated from class `MR::Aggregates::NonDefaultConstructible`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_NonDefaultConstructible MR_Aggregates_NonDefaultConstructible;

// Test the optional limit on the number of fields that we aggregate-initialize.
/// Generated from class `MR::Aggregates::C`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_C MR_Aggregates_C;

/// Generated from class `MR::Aggregates::D`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_D MR_Aggregates_D;

/// Generated from class `MR::Aggregates::E`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_Aggregates_E MR_Aggregates_E;

/// Returns a pointer to a member variable of class `MR::Aggregates::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_A_Get_x(const MR_Aggregates_A *_this);

/// Modifies a member variable of class `MR::Aggregates::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `x`.
MR_C_API void MR_Aggregates_A_Set_x(MR_Aggregates_A *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::A` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_A_GetMutable_x(MR_Aggregates_A *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::A` named `y`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_C_std_string *MR_Aggregates_A_Get_y(const MR_Aggregates_A *_this);

/// Modifies a member variable of class `MR::Aggregates::A` named `y`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `y`.
/// When this function is called, this object will drop object references it had previously in `y`.
MR_C_API void MR_Aggregates_A_Set_y(MR_Aggregates_A *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::A` named `y`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_string *MR_Aggregates_A_GetMutable_y(MR_Aggregates_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Aggregates_A_DestroyArray()`.
/// Use `MR_Aggregates_A_OffsetMutablePtr()` and `MR_Aggregates_A_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Aggregates::A` elementwise.
/// Parameter `y` can not be null.
/// If `y_end` is null, then `y` is assumed to be null-terminated.
/// The reference to the parameter `y` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_ConstructFrom(int x, const char *y, const char *y_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_A *MR_Aggregates_A_OffsetPtr(const MR_Aggregates_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_OffsetMutablePtr(MR_Aggregates_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::Aggregates::A::A`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other);

/// Destroys a heap-allocated instance of `MR_Aggregates_A`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_A_Destroy(const MR_Aggregates_A *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_A`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_A_DestroyArray(const MR_Aggregates_A *_this);

/// Generated from method `MR::Aggregates::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_AssignFromAnother(MR_Aggregates_A *_this, MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Aggregates_B_DestroyArray()`.
/// Use `MR_Aggregates_B_OffsetMutablePtr()` and `MR_Aggregates_B_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_B *MR_Aggregates_B_OffsetPtr(const MR_Aggregates_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_OffsetMutablePtr(MR_Aggregates_B *ptr, ptrdiff_t i);

/// Generated from constructor `MR::Aggregates::B::B`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_ConstructFromAnother(const MR_Aggregates_B *_other);

/// Destroys a heap-allocated instance of `MR_Aggregates_B`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_B_Destroy(const MR_Aggregates_B *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_B`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_B_DestroyArray(const MR_Aggregates_B *_this);

/// Generated from method `MR::Aggregates::B::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_AssignFromAnother(MR_Aggregates_B *_this, const MR_Aggregates_B *_other);

/// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(const MR_Aggregates_NonDefaultConstructible *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetPtr(const MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetMutablePtr(MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_Aggregates_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_NonDefaultConstructible_Destroy(const MR_Aggregates_NonDefaultConstructible *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_NonDefaultConstructible_DestroyArray(const MR_Aggregates_NonDefaultConstructible *_this);

/// Generated from method `MR::Aggregates::NonDefaultConstructible::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_AssignFromAnother(MR_Aggregates_NonDefaultConstructible *_this, const MR_Aggregates_NonDefaultConstructible *_other);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_a(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_Aggregates_C_Set_a(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_a(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_b(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_Aggregates_C_Set_b(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_b(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_c(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `c`.
MR_C_API void MR_Aggregates_C_Set_c(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_c(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_d(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `d`.
MR_C_API void MR_Aggregates_C_Set_d(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_d(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_e(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `e`.
MR_C_API void MR_Aggregates_C_Set_e(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_e(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_f(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `f`.
MR_C_API void MR_Aggregates_C_Set_f(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_f(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_g(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `g`.
MR_C_API void MR_Aggregates_C_Set_g(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_g(MR_Aggregates_C *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::C` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_C_Get_h(const MR_Aggregates_C *_this);

/// Modifies a member variable of class `MR::Aggregates::C` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `h`.
MR_C_API void MR_Aggregates_C_Set_h(MR_Aggregates_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::C` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_C_GetMutable_h(MR_Aggregates_C *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_C_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Aggregates_C_DestroyArray()`.
/// Use `MR_Aggregates_C_OffsetMutablePtr()` and `MR_Aggregates_C_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Aggregates::C` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_C_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_C *MR_Aggregates_C_OffsetPtr(const MR_Aggregates_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_OffsetMutablePtr(MR_Aggregates_C *ptr, ptrdiff_t i);

/// Generated from constructor `MR::Aggregates::C::C`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_C_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_ConstructFromAnother(const MR_Aggregates_C *_other);

/// Destroys a heap-allocated instance of `MR_Aggregates_C`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_C_Destroy(const MR_Aggregates_C *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_C`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_C_DestroyArray(const MR_Aggregates_C *_this);

/// Generated from method `MR::Aggregates::C::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_C *MR_Aggregates_C_AssignFromAnother(MR_Aggregates_C *_this, const MR_Aggregates_C *_other);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_a(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_Aggregates_D_Set_a(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_a(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_b(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_Aggregates_D_Set_b(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_b(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_c(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `c`.
MR_C_API void MR_Aggregates_D_Set_c(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_c(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_d(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `d`.
MR_C_API void MR_Aggregates_D_Set_d(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_d(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_e(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `e`.
MR_C_API void MR_Aggregates_D_Set_e(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_e(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_f(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `f`.
MR_C_API void MR_Aggregates_D_Set_f(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_f(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_g(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `g`.
MR_C_API void MR_Aggregates_D_Set_g(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_g(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_h(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `h`.
MR_C_API void MR_Aggregates_D_Set_h(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_h(MR_Aggregates_D *_this);

/// Returns a pointer to a member variable of class `MR::Aggregates::D` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_D_Get_i(const MR_Aggregates_D *_this);

/// Modifies a member variable of class `MR::Aggregates::D` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `i`.
MR_C_API void MR_Aggregates_D_Set_i(MR_Aggregates_D *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::Aggregates::D` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_D_GetMutable_i(MR_Aggregates_D *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_D_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Aggregates_D_DestroyArray()`.
/// Use `MR_Aggregates_D_OffsetMutablePtr()` and `MR_Aggregates_D_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Aggregates::D` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_D_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_D *MR_Aggregates_D_OffsetPtr(const MR_Aggregates_D *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_OffsetMutablePtr(MR_Aggregates_D *ptr, ptrdiff_t i);

/// Generated from constructor `MR::Aggregates::D::D`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_D_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_ConstructFromAnother(const MR_Aggregates_D *_other);

/// Destroys a heap-allocated instance of `MR_Aggregates_D`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_D_Destroy(const MR_Aggregates_D *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_D`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_D_DestroyArray(const MR_Aggregates_D *_this);

/// Generated from method `MR::Aggregates::D::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_D *MR_Aggregates_D_AssignFromAnother(MR_Aggregates_D *_this, const MR_Aggregates_D *_other);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_a(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_Aggregates_E_Set_a(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_a(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_b(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_Aggregates_E_Set_b(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_b(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_c(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `c`.
MR_C_API void MR_Aggregates_E_Set_c(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_c(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_d(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `d`.
MR_C_API void MR_Aggregates_E_Set_d(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_d(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_e(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `e`.
MR_C_API void MR_Aggregates_E_Set_e(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_e(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_f(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `f`.
MR_C_API void MR_Aggregates_E_Set_f(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_f(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_g(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `g`.
MR_C_API void MR_Aggregates_E_Set_g(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `g`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_g(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_h(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `h`.
MR_C_API void MR_Aggregates_E_Set_h(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `h`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_h(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_Aggregates_E_Get_i(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `i`.
MR_C_API void MR_Aggregates_E_Set_i(MR_Aggregates_E *_this, int value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_Aggregates_E_GetMutable_i(MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a pointer to a member variable of class `MR::Aggregates::E` named `j`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_Get_j(const MR_Aggregates_E *_this);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Modifies a member variable of class `MR::Aggregates::E` named `j`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `j`.
/// When this function is called, this object will drop object references it had previously in `j`.
MR_C_API void MR_Aggregates_E_Set_j(MR_Aggregates_E *_this, const MR_Aggregates_NonDefaultConstructible *value);

// This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
/// Returns a mutable pointer to a member variable of class `MR::Aggregates::E` named `j`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_GetMutable_j(MR_Aggregates_E *_this);

/// Generated from constructor `MR::Aggregates::E::E`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_E_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_E *MR_Aggregates_E_ConstructFromAnother(const MR_Aggregates_E *_other);

/// Constructs `MR::Aggregates::E` elementwise.
/// Parameter `j` can not be null. It is a single object.
/// The reference to the parameter `j` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_E_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_E *MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, const MR_Aggregates_NonDefaultConstructible *j);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_Aggregates_E *MR_Aggregates_E_OffsetPtr(const MR_Aggregates_E *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_Aggregates_E *MR_Aggregates_E_OffsetMutablePtr(MR_Aggregates_E *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_Aggregates_E`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_E_Destroy(const MR_Aggregates_E *_this);

/// Destroys a heap-allocated array of `MR_Aggregates_E`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_E_DestroyArray(const MR_Aggregates_E *_this);

/// Generated from method `MR::Aggregates::E::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_Aggregates_E *MR_Aggregates_E_AssignFromAnother(MR_Aggregates_E *_this, const MR_Aggregates_E *_other);

#ifdef __cplusplus
} // extern "C"
#endif

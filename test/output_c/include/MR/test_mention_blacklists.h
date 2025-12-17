#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::SignatureFilters::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SignatureFilters_A MR_SignatureFilters_A;

/// Generated from class `MR::SignatureFilters::Blah`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_SignatureFilters_Blah MR_SignatureFilters_Blah;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignatureFilters_A_Destroy()` to free it when you're done using it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SignatureFilters_A_DestroyArray()`.
/// Use `MR_SignatureFilters_A_OffsetMutablePtr()` and `MR_SignatureFilters_A_OffsetPtr()` to access the array elements.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetPtr(const MR_SignatureFilters_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetMutablePtr(MR_SignatureFilters_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::SignatureFilters::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignatureFilters_A_Destroy()` to free it when you're done using it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_A_ConstructFromAnother(const MR_SignatureFilters_A *_other);

/// Destroys a heap-allocated instance of `MR_SignatureFilters_A`. Does nothing if the pointer is null.
MR_C_API void MR_SignatureFilters_A_Destroy(const MR_SignatureFilters_A *_this);

/// Destroys a heap-allocated array of `MR_SignatureFilters_A`. Does nothing if the pointer is null.
MR_C_API void MR_SignatureFilters_A_DestroyArray(const MR_SignatureFilters_A *_this);

/// Generated from method `MR::SignatureFilters::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_A_AssignFromAnother(MR_SignatureFilters_A *_this, const MR_SignatureFilters_A *_other);

/// Generated from function `MR::SignatureFilters::foo`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_SignatureFilters_foo_1(const MR_SignatureFilters_A *_1);

/// Generated from function `MR::SignatureFilters::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignatureFilters_A_Destroy()` to free it when you're done using it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_foo_0(void);

/// Generated from function `MR::SignatureFilters::foo2`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_SignatureFilters_foo2_1(MR_SignatureFilters_A *_1);

/// Generated from function `MR::SignatureFilters::foo2`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_foo2_0(void);

/// Generated from function `MR::SignatureFilters::foo3`.
/// Parameter `_1` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_SignatureFilters_foo3_1(MR_SignatureFilters_A *_1);

/// Generated from function `MR::SignatureFilters::foo3`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_foo3_0(void);

/// Generated from function `MR::SignatureFilters::foo4`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_SignatureFilters_foo4_1(const MR_SignatureFilters_A *_1);

/// Generated from function `MR::SignatureFilters::foo4`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_SignatureFilters_A *MR_SignatureFilters_foo4_0(void);

/// Generated from function `MR::SignatureFilters::foo5`.
/// Parameter `_1` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_SignatureFilters_foo5_1(const MR_SignatureFilters_A *_1);

/// Generated from function `MR::SignatureFilters::foo5`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_SignatureFilters_A *MR_SignatureFilters_foo5_0(void);

/// Returns a pointer to a member variable of class `MR::SignatureFilters::Blah` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_SignatureFilters_A *MR_SignatureFilters_Blah_Get_a(const MR_SignatureFilters_Blah *_this);

/// Modifies a member variable of class `MR::SignatureFilters::Blah` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_SignatureFilters_Blah_Set_a(MR_SignatureFilters_Blah *_this, const MR_SignatureFilters_A *value);

/// Returns a mutable pointer to a member variable of class `MR::SignatureFilters::Blah` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SignatureFilters_A *MR_SignatureFilters_Blah_GetMutable_a(MR_SignatureFilters_Blah *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignatureFilters_Blah_Destroy()` to free it when you're done using it.
MR_C_API MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SignatureFilters_Blah_DestroyArray()`.
/// Use `MR_SignatureFilters_Blah_OffsetMutablePtr()` and `MR_SignatureFilters_Blah_OffsetPtr()` to access the array elements.
MR_C_API MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetPtr(const MR_SignatureFilters_Blah *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetMutablePtr(MR_SignatureFilters_Blah *ptr, ptrdiff_t i);

/// Generated from constructor `MR::SignatureFilters::Blah::Blah`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignatureFilters_Blah_Destroy()` to free it when you're done using it.
MR_C_API MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_ConstructFromAnother(const MR_SignatureFilters_Blah *_other);

/// Destroys a heap-allocated instance of `MR_SignatureFilters_Blah`. Does nothing if the pointer is null.
MR_C_API void MR_SignatureFilters_Blah_Destroy(const MR_SignatureFilters_Blah *_this);

/// Destroys a heap-allocated array of `MR_SignatureFilters_Blah`. Does nothing if the pointer is null.
MR_C_API void MR_SignatureFilters_Blah_DestroyArray(const MR_SignatureFilters_Blah *_this);

/// Generated from method `MR::SignatureFilters::Blah::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_AssignFromAnother(MR_SignatureFilters_Blah *_this, const MR_SignatureFilters_Blah *_other);

#ifdef __cplusplus
} // extern "C"
#endif

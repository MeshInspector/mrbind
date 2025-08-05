#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// And test that `uint64_t` is correctly adjusted in some other kinds of names.
// Though here we don't really test that each of them brings its own includes.
/// Generated from class `MR::AdjustingNames::A`.
typedef struct MR_AdjustingNames_A MR_AdjustingNames_A;

// When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
// And we must make sure that the typedef gets applied to the name correctly.
/// Generated from function `MR::AdjustingNames::foo<MR_C_uint64_t>`.
MR_C_API void MR_AdjustingNames_foo(void);

/// Generated from function `MR::AdjustingNames::bar`.
MR_C_API void MR_AdjustingNames_bar(void);

/// Returns a pointer to a member variable of class `MR::AdjustingNames::A` named `var<MR_C_uint64_t>`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_uint64_t *MR_AdjustingNames_A_Get_var_uint64_t(void);

/// Modifies a member variable of class `MR::AdjustingNames::A` named `var<MR_C_uint64_t>`.
MR_C_API void MR_AdjustingNames_A_Set_var_uint64_t(MR_C_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::AdjustingNames::A` named `var<MR_C_uint64_t>`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_uint64_t *MR_AdjustingNames_A_GetMutable_var_uint64_t(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AdjustingNames_A_Destroy()` to free it when you're done using it.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AdjustingNames_A_DestroyArray()`.
/// Use `MR_AdjustingNames_A_OffsetMutablePtr()` and `MR_AdjustingNames_A_OffsetPtr()` to access the array elements.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetPtr(const MR_AdjustingNames_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetMutablePtr(MR_AdjustingNames_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AdjustingNames::A`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AdjustingNames_A_Destroy()` to free it when you're done using it.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_ConstructFromAnother(const MR_AdjustingNames_A *_other);

/// Destroys a heap-allocated instance of `MR_AdjustingNames_A`. Does nothing if the pointer is null.
MR_C_API void MR_AdjustingNames_A_Destroy(const MR_AdjustingNames_A *_this);

/// Destroys a heap-allocated array of `MR_AdjustingNames_A`. Does nothing if the pointer is null.
MR_C_API void MR_AdjustingNames_A_DestroyArray(const MR_AdjustingNames_A *_this);

/// Generated from a conversion operator of class `MR::AdjustingNames::A` to type `MR_C_uint64_t`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_uint64_t MR_AdjustingNames_A_ConvertTo_uint64_t(MR_AdjustingNames_A *_this);

/// Generated from a method of class `MR::AdjustingNames::A` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_AssignFromAnother(MR_AdjustingNames_A *_this, const MR_AdjustingNames_A *_other);

/// Generated from a method of class `MR::AdjustingNames::A` named `foo<MR_C_uint64_t>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AdjustingNames_A_foo(MR_AdjustingNames_A *_this);

/// Generated from a method of class `MR::AdjustingNames::A` named `bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AdjustingNames_A_bar(MR_AdjustingNames_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

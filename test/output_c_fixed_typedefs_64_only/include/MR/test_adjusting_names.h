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
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
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
/// The reference to the parameter `value` might be preserved in the parameter `_this` in element `var<MR_C_uint64_t>`.
/// After this function is called, the parameter `_this` will drop object references it had previously in `var<MR_C_uint64_t>`.
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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetPtr(const MR_AdjustingNames_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetMutablePtr(MR_AdjustingNames_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::AdjustingNames::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AdjustingNames_A_Destroy()` to free it when you're done using it.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_ConstructFromAnother(const MR_AdjustingNames_A *_other);

/// Destroys a heap-allocated instance of `MR_AdjustingNames_A`. Does nothing if the pointer is null.
MR_C_API void MR_AdjustingNames_A_Destroy(const MR_AdjustingNames_A *_this);

/// Destroys a heap-allocated array of `MR_AdjustingNames_A`. Does nothing if the pointer is null.
MR_C_API void MR_AdjustingNames_A_DestroyArray(const MR_AdjustingNames_A *_this);

/// Generated from conversion operator `MR::AdjustingNames::A::operator MR_C_uint64_t`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_uint64_t MR_AdjustingNames_A_ConvertTo_uint64_t(MR_AdjustingNames_A *_this);

/// Generated from method `MR::AdjustingNames::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_AdjustingNames_A *MR_AdjustingNames_A_AssignFromAnother(MR_AdjustingNames_A *_this, const MR_AdjustingNames_A *_other);

/// Generated from method `MR::AdjustingNames::A::foo<MR_C_uint64_t>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AdjustingNames_A_foo(MR_AdjustingNames_A *_this);

/// Generated from method `MR::AdjustingNames::A::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_AdjustingNames_A_bar(MR_AdjustingNames_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

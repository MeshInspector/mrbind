#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.
typedef struct MR_C_std_vector_MR_A MR_C_std_vector_MR_A; // Defined in `#include <std_vector_MR_A.h>`.


/// Generated from class `MR::A`.
typedef struct MR_A MR_A;

/// Returns a pointer to a member variable of class `MR::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_A_Get_x(const MR_A *_this);

/// Modifies a member variable of class `MR::A` named `x`.
/// Parameter `_this` can not be null.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MR_C_API void MR_A_Set_x(MR_A *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_A_GetMutable_x(MR_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_A_DestroyArray()`.
/// Use `MR_A_OffsetMutablePtr()` and `MR_A_OffsetPtr()` to access the array elements.
MR_C_API MR_A *MR_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_A *MR_A_OffsetPtr(const MR_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_A *MR_A_OffsetMutablePtr(MR_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::A`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_A *_other);

/// Destroys a heap-allocated instance of `MR_A`. Does nothing if the pointer is null.
MR_C_API void MR_A_Destroy(const MR_A *_this);

/// Destroys a heap-allocated array of `MR_A`. Does nothing if the pointer is null.
MR_C_API void MR_A_DestroyArray(const MR_A *_this);

/// Generated from a method of class `MR::A` named `operator=`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other);

/// Generated from function `MR::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_foo(void);

/// Generated from function `MR::bar`.
MR_C_API void MR_bar(MR_C_PassBy _1_pass_by, MR_C_std_vector_MR_A *_1);

#ifdef __cplusplus
} // extern "C"
#endif

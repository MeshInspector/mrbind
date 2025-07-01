#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_TypedefsInTemplates_A_int MR_TypedefsInTemplates_A_int; // Defined below in this file.
typedef struct MR_TypedefsInTemplates_B_int MR_TypedefsInTemplates_B_int; // Defined below in this file.
typedef struct MR_TypedefsInTemplates_B_int_BB_float MR_TypedefsInTemplates_B_int_BB_float; // Defined below in this file.


// This tests a specific Clang bug/quirk.
// Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
/// Generated from class `MR::TypedefsInTemplates::A<int>`.
typedef struct MR_TypedefsInTemplates_A_int MR_TypedefsInTemplates_A_int;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TypedefsInTemplates_A_int_DestroyArray()`.
/// Use `MR_TypedefsInTemplates_A_int_OffsetMutablePtr()` and `MR_TypedefsInTemplates_A_int_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetPtr(const MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetMutablePtr(MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TypedefsInTemplates::A<int>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_ConstructFromAnother(const MR_TypedefsInTemplates_A_int *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::A<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_AssignFromAnother(MR_TypedefsInTemplates_A_int *_this, const MR_TypedefsInTemplates_A_int *_other);

/// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_A_int_Destroy(MR_TypedefsInTemplates_A_int *_this);

/// Destroys a heap-allocated array of `MR_TypedefsInTemplates_A_int`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_A_int_DestroyArray(MR_TypedefsInTemplates_A_int *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::A<int>` named `foo`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_A_int_foo(MR_TypedefsInTemplates_A_int *_this);

/// Generated from class `MR::TypedefsInTemplates::B<int>`.
typedef struct MR_TypedefsInTemplates_B_int MR_TypedefsInTemplates_B_int;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TypedefsInTemplates_B_int_DestroyArray()`.
/// Use `MR_TypedefsInTemplates_B_int_OffsetMutablePtr()` and `MR_TypedefsInTemplates_B_int_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetPtr(const MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetMutablePtr(MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_ConstructFromAnother(const MR_TypedefsInTemplates_B_int *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_AssignFromAnother(MR_TypedefsInTemplates_B_int *_this, const MR_TypedefsInTemplates_B_int *_other);

/// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_B_int`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int_Destroy(MR_TypedefsInTemplates_B_int *_this);

/// Destroys a heap-allocated array of `MR_TypedefsInTemplates_B_int`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int_DestroyArray(MR_TypedefsInTemplates_B_int *_this);

/// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`.
typedef struct MR_TypedefsInTemplates_B_int_BB_float MR_TypedefsInTemplates_B_int_BB_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TypedefsInTemplates_B_int_BB_float_DestroyArray()`.
/// Use `MR_TypedefsInTemplates_B_int_BB_float_OffsetMutablePtr()` and `MR_TypedefsInTemplates_B_int_BB_float_OffsetPtr()` to access the array elements.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetPtr(const MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetMutablePtr(MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>::BB<float>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int_BB_float *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int_BB_float *_this, const MR_TypedefsInTemplates_B_int_BB_float *_other);

/// Destroys a heap-allocated instance of `MR_TypedefsInTemplates_B_int_BB_float`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int_BB_float_Destroy(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Destroys a heap-allocated array of `MR_TypedefsInTemplates_B_int_BB_float`. Does nothing if the pointer is null.
MR_C_API void MR_TypedefsInTemplates_B_int_BB_float_DestroyArray(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `foo`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_B_int_BB_float_foo(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `foo2`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_B_int_BB_float_foo2(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Generated from function `MR::TypedefsInTemplates::bar`.
MR_C_API void MR_TypedefsInTemplates_bar(int _1);

#ifdef __cplusplus
} // extern "C"
#endif

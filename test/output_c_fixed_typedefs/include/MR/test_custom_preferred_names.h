#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::CustomPrefNames::Ai`.
typedef struct MR_CustomPrefNames_Ai MR_CustomPrefNames_Ai;

/// Generated from class `MR::CustomPrefNames::Af`.
typedef struct MR_CustomPrefNames_Af MR_CustomPrefNames_Af;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CustomPrefNames_Ai_Destroy()` to free it when you're done using it.
MR_C_API MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CustomPrefNames_Ai_DestroyArray()`.
/// Use `MR_CustomPrefNames_Ai_OffsetMutablePtr()` and `MR_CustomPrefNames_Ai_OffsetPtr()` to access the array elements.
MR_C_API MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetPtr(const MR_CustomPrefNames_Ai *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_OffsetMutablePtr(MR_CustomPrefNames_Ai *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CustomPrefNames::Ai`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CustomPrefNames_Ai_Destroy()` to free it when you're done using it.
MR_C_API MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_ConstructFromAnother(const MR_CustomPrefNames_Ai *_other);

/// Destroys a heap-allocated instance of `MR_CustomPrefNames_Ai`. Does nothing if the pointer is null.
MR_C_API void MR_CustomPrefNames_Ai_Destroy(const MR_CustomPrefNames_Ai *_this);

/// Destroys a heap-allocated array of `MR_CustomPrefNames_Ai`. Does nothing if the pointer is null.
MR_C_API void MR_CustomPrefNames_Ai_DestroyArray(const MR_CustomPrefNames_Ai *_this);

/// Generated from a method of class `MR::CustomPrefNames::Ai` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CustomPrefNames_Ai *MR_CustomPrefNames_Ai_AssignFromAnother(MR_CustomPrefNames_Ai *_this, const MR_CustomPrefNames_Ai *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CustomPrefNames_Af_Destroy()` to free it when you're done using it.
MR_C_API MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CustomPrefNames_Af_DestroyArray()`.
/// Use `MR_CustomPrefNames_Af_OffsetMutablePtr()` and `MR_CustomPrefNames_Af_OffsetPtr()` to access the array elements.
MR_C_API MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetPtr(const MR_CustomPrefNames_Af *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_OffsetMutablePtr(MR_CustomPrefNames_Af *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CustomPrefNames::Af`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CustomPrefNames_Af_Destroy()` to free it when you're done using it.
MR_C_API MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_ConstructFromAnother(const MR_CustomPrefNames_Af *_other);

/// Destroys a heap-allocated instance of `MR_CustomPrefNames_Af`. Does nothing if the pointer is null.
MR_C_API void MR_CustomPrefNames_Af_Destroy(const MR_CustomPrefNames_Af *_this);

/// Destroys a heap-allocated array of `MR_CustomPrefNames_Af`. Does nothing if the pointer is null.
MR_C_API void MR_CustomPrefNames_Af_DestroyArray(const MR_CustomPrefNames_Af *_this);

/// Generated from a method of class `MR::CustomPrefNames::Af` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CustomPrefNames_Af *MR_CustomPrefNames_Af_AssignFromAnother(MR_CustomPrefNames_Af *_this, const MR_CustomPrefNames_Af *_other);

/// Generated from function `MR::CustomPrefNames::blah`.
MR_C_API void MR_CustomPrefNames_blah(void);

#ifdef __cplusplus
} // extern "C"
#endif

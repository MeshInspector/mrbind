#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IncompleteArrayElemType_A MR_IncompleteArrayElemType_A; // Defined below in this file.


/// Generated from class `MR::IncompleteArrayElemType::A`.
typedef struct MR_IncompleteArrayElemType_A MR_IncompleteArrayElemType_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncompleteArrayElemType_A_Destroy()` to free it when you're done using it.
MR_C_API MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IncompleteArrayElemType_A_DestroyArray()`.
/// Use `MR_IncompleteArrayElemType_A_OffsetMutablePtr()` and `MR_IncompleteArrayElemType_A_OffsetPtr()` to access the array elements.
MR_C_API MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_OffsetPtr(const MR_IncompleteArrayElemType_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_OffsetMutablePtr(MR_IncompleteArrayElemType_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IncompleteArrayElemType::A`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncompleteArrayElemType_A_Destroy()` to free it when you're done using it.
MR_C_API MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_ConstructFromAnother(const MR_IncompleteArrayElemType_A *_other);

/// Destroys a heap-allocated instance of `MR_IncompleteArrayElemType_A`. Does nothing if the pointer is null.
MR_C_API void MR_IncompleteArrayElemType_A_Destroy(const MR_IncompleteArrayElemType_A *_this);

/// Destroys a heap-allocated array of `MR_IncompleteArrayElemType_A`. Does nothing if the pointer is null.
MR_C_API void MR_IncompleteArrayElemType_A_DestroyArray(const MR_IncompleteArrayElemType_A *_this);

/// Generated from a method of class `MR::IncompleteArrayElemType::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_IncompleteArrayElemType_A *MR_IncompleteArrayElemType_A_AssignFromAnother(MR_IncompleteArrayElemType_A *_this, const MR_IncompleteArrayElemType_A *_other);

/// Generated from function `MR::IncompleteArrayElemType::bar`.
MR_C_API void MR_IncompleteArrayElemType_bar(MR_IncompleteArrayElemType_A (*_1)[4]);

#ifdef __cplusplus
} // extern "C"
#endif

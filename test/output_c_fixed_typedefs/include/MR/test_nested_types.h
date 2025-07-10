#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_NestedTypes_A MR_NestedTypes_A; // Defined below in this file.
typedef struct MR_NestedTypes_A_B MR_NestedTypes_A_B; // Defined below in this file.


/// Generated from class `MR::NestedTypes::A::B`.
typedef struct MR_NestedTypes_A_B MR_NestedTypes_A_B;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_B_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NestedTypes_A_B_DestroyArray()`.
/// Use `MR_NestedTypes_A_B_OffsetMutablePtr()` and `MR_NestedTypes_A_B_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetPtr(const MR_NestedTypes_A_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetMutablePtr(MR_NestedTypes_A_B *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NestedTypes::A::B`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_B_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_ConstructFromAnother(const MR_NestedTypes_A_B *_other);

/// Destroys a heap-allocated instance of `MR_NestedTypes_A_B`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_B_Destroy(const MR_NestedTypes_A_B *_this);

/// Destroys a heap-allocated array of `MR_NestedTypes_A_B`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_B_DestroyArray(const MR_NestedTypes_A_B *_this);

/// Generated from a method of class `MR::NestedTypes::A::B` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_B_AssignFromAnother(MR_NestedTypes_A_B *_this, const MR_NestedTypes_A_B *_other);

typedef enum MR_NestedTypes_A_E
{
    MR_NestedTypes_A_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_NestedTypes_A_E;

/// Generated from class `MR::NestedTypes::A`.
typedef struct MR_NestedTypes_A MR_NestedTypes_A;

/// Generated from a member variable of class `MR::NestedTypes::A` named `b`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_NestedTypes_A_B *MR_NestedTypes_A_GetConst_b(const MR_NestedTypes_A *_this);

/// Generated from a member variable of class `MR::NestedTypes::A` named `b`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTypes_A_B *MR_NestedTypes_A_GetMutable_b(MR_NestedTypes_A *_this);

/// Generated from a member variable of class `MR::NestedTypes::A` named `e`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_NestedTypes_A_E *MR_NestedTypes_A_GetConst_e(const MR_NestedTypes_A *_this);

/// Generated from a member variable of class `MR::NestedTypes::A` named `e`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTypes_A_E *MR_NestedTypes_A_GetMutable_e(MR_NestedTypes_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NestedTypes_A_DestroyArray()`.
/// Use `MR_NestedTypes_A_OffsetMutablePtr()` and `MR_NestedTypes_A_OffsetPtr()` to access the array elements.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_NestedTypes_A *MR_NestedTypes_A_OffsetPtr(const MR_NestedTypes_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_OffsetMutablePtr(MR_NestedTypes_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NestedTypes::A`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NestedTypes_A_Destroy()` to free it when you're done using it.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_ConstructFromAnother(const MR_NestedTypes_A *_other);

/// Generated from a method of class `MR::NestedTypes::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_NestedTypes_A *MR_NestedTypes_A_AssignFromAnother(MR_NestedTypes_A *_this, const MR_NestedTypes_A *_other);

/// Destroys a heap-allocated instance of `MR_NestedTypes_A`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_Destroy(const MR_NestedTypes_A *_this);

/// Destroys a heap-allocated array of `MR_NestedTypes_A`. Does nothing if the pointer is null.
MR_C_API void MR_NestedTypes_A_DestroyArray(const MR_NestedTypes_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

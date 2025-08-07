#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
//   because otherwise there would be no way to construct them.
// Generated from class `MR::Aggregates::A`.
typedef struct MR_Aggregates_A MR_Aggregates_A;

// This is an empty aggregate, it doesn't need an elementwise constructor.
// Generated from class `MR::Aggregates::B`.
typedef struct MR_Aggregates_B MR_Aggregates_B;

// Returns a pointer to a member variable of class `MR::Aggregates::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_Aggregates_A_Get_x(const MR_Aggregates_A *_this);

// Modifies a member variable of class `MR::Aggregates::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_Aggregates_A_Set_x(MR_Aggregates_A *_this, int32_t value);

// Returns a mutable pointer to a member variable of class `MR::Aggregates::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_Aggregates_A_GetMutable_x(MR_Aggregates_A *_this);

// Returns a pointer to a member variable of class `MR::Aggregates::A` named `y`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_Aggregates_A_Get_y(const MR_Aggregates_A *_this);

// Modifies a member variable of class `MR::Aggregates::A` named `y`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
MR_C_API void MR_Aggregates_A_Set_y(MR_Aggregates_A *_this, const char *value, const char *value_end);

// Returns a mutable pointer to a member variable of class `MR::Aggregates::A` named `y`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_Aggregates_A_GetMutable_y(MR_Aggregates_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_Aggregates_A_DestroyArray()`.
// Use `MR_Aggregates_A_OffsetMutablePtr()` and `MR_Aggregates_A_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_DefaultConstructArray(size_t num_elems);

// Constructs `MR::Aggregates::A` elementwise.
// Parameter `y` can not be null.
// If `y_end` is null, then `y` is assumed to be null-terminated.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_ConstructFrom(int32_t x, const char *y, const char *y_end);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Aggregates_A *MR_Aggregates_A_OffsetPtr(const MR_Aggregates_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_OffsetMutablePtr(MR_Aggregates_A *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::Aggregates::A`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other);

// Destroys a heap-allocated instance of `MR_Aggregates_A`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_A_Destroy(const MR_Aggregates_A *_this);

// Destroys a heap-allocated array of `MR_Aggregates_A`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_A_DestroyArray(const MR_Aggregates_A *_this);

// Generated from a method of class `MR::Aggregates::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Aggregates_A *MR_Aggregates_A_AssignFromAnother(MR_Aggregates_A *_this, MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_Aggregates_B_DestroyArray()`.
// Use `MR_Aggregates_B_OffsetMutablePtr()` and `MR_Aggregates_B_OffsetPtr()` to access the array elements.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Aggregates_B *MR_Aggregates_B_OffsetPtr(const MR_Aggregates_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_OffsetMutablePtr(MR_Aggregates_B *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::Aggregates::B`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_Aggregates_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_ConstructFromAnother(const MR_Aggregates_B *_other);

// Destroys a heap-allocated instance of `MR_Aggregates_B`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_B_Destroy(const MR_Aggregates_B *_this);

// Destroys a heap-allocated array of `MR_Aggregates_B`. Does nothing if the pointer is null.
MR_C_API void MR_Aggregates_B_DestroyArray(const MR_Aggregates_B *_this);

// Generated from a method of class `MR::Aggregates::B` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Aggregates_B *MR_Aggregates_B_AssignFromAnother(MR_Aggregates_B *_this, const MR_Aggregates_B *_other);

#ifdef __cplusplus
} // extern "C"
#endif

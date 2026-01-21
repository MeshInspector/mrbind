#ifndef MR_C_DETAIL_INCLUDED_MR_1_H
#define MR_C_DETAIL_INCLUDED_MR_1_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.
typedef struct MR_C_std_vector_MR_A MR_C_std_vector_MR_A; // Defined in `#include <std_vector_MR_A.h>`.


// Generated from class `MR::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_A MR_A;

// Returns a pointer to a member variable of class `MR::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_A_Get_x(const MR_A *_this);

// Modifies a member variable of class `MR::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
// The reference to the parameter `value` might be preserved in the parameter `_this` in element `x`.
// When this function is called, the parameter `_this` will drop object references it had previously in `x`.
MR_C_API void MR_A_Set_x(MR_A *_this, const char *value, const char *value_end);

// Returns a mutable pointer to a member variable of class `MR::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_A_GetMutable_x(MR_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_A_DestroyArray()`.
// Use `MR_A_OffsetMutablePtr()` and `MR_A_OffsetPtr()` to access the array elements.
MR_C_API MR_A *MR_A_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_A *MR_A_OffsetPtr(const MR_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_A *MR_A_OffsetMutablePtr(MR_A *ptr, ptrdiff_t i);

// Generated from constructor `MR::A::A`.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_A *_other);

// Destroys a heap-allocated instance of `MR_A`. Does nothing if the pointer is null.
MR_C_API void MR_A_Destroy(const MR_A *_this);

// Destroys a heap-allocated array of `MR_A`. Does nothing if the pointer is null.
MR_C_API void MR_A_DestroyArray(const MR_A *_this);

// Generated from method `MR::A::operator=`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// When this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other);

// Generated from function `MR::foo`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_foo(void);

// Generated from function `MR::bar`.
MR_C_API void MR_bar(MR_C_PassBy _1_pass_by, MR_C_std_vector_MR_A *_1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_1_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_1_H_2)
#define MR_C_DETAIL_INCLUDED_MR_1_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>
#include <std_vector_MR_A.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_1_H_2)

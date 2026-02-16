#ifndef MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H
#define MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Stores two objects: `int32_t` and `int32_t`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_int32_t_std_string MR_C_std_pair_int32_t_std_string;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_pair_int32_t_std_string_DestroyArray()`.
// Use `MR_C_std_pair_int32_t_std_string_OffsetMutablePtr()` and `MR_C_std_pair_int32_t_std_string_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_std_string_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_int32_t_std_string *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_pair_int32_t_std_string_AssignFromAnother(MR_C_std_pair_int32_t_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_int32_t_std_string *other);

// Destroys a heap-allocated instance of `MR_C_std_pair_int32_t_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_std_string_Destroy(const MR_C_std_pair_int32_t_std_string *_this);

// Destroys a heap-allocated array of `MR_C_std_pair_int32_t_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_std_string_DestroyArray(const MR_C_std_pair_int32_t_std_string *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_OffsetPtr(const MR_C_std_pair_int32_t_std_string *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_OffsetMutablePtr(MR_C_std_pair_int32_t_std_string *ptr, ptrdiff_t i);

// Constructs the pair elementwise.
// The reference to the parameter `first` might be preserved in the constructed object.
// Parameter `second` can not be null.
// If `second_end` is null, then `second` is assumed to be null-terminated.
// The reference to the parameter `second` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_std_string_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_int32_t_std_string *MR_C_std_pair_int32_t_std_string_Construct(int32_t first, const char *second, const char *second_end);

// The first of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_pair_int32_t_std_string_first(const MR_C_std_pair_int32_t_std_string *_this);

// The first of the two elements, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_pair_int32_t_std_string_first_mut(MR_C_std_pair_int32_t_std_string *_this);

// The second of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_C_std_string *MR_C_std_pair_int32_t_std_string_second(const MR_C_std_pair_int32_t_std_string *_this);

// The second of the two elements, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_string *MR_C_std_pair_int32_t_std_string_second_mut(MR_C_std_pair_int32_t_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H_2)
#define MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_STD_STRING_H_2)

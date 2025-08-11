#ifndef MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H
#define MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Stores a functor of type: `void(std::string)`. Possibly stateful.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_void_from_std_string MR_C_std_function_void_from_std_string;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_function_void_from_std_string_DestroyArray()`.
// Use `MR_C_std_function_void_from_std_string_OffsetMutablePtr()` and `MR_C_std_function_void_from_std_string_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_function_void_from_std_string_AssignFromAnother(MR_C_std_function_void_from_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other);

// Destroys a heap-allocated instance of `MR_C_std_function_void_from_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_std_string_Destroy(const MR_C_std_function_void_from_std_string *_this);

// Destroys a heap-allocated array of `MR_C_std_function_void_from_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_std_string_DestroyArray(const MR_C_std_function_void_from_std_string *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetPtr(const MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetMutablePtr(MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i);

// Assign a stateless function.
// Parameter `_this` can not be null. It is a single object.
// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
// In C++ that parameter is an rvalue reference.
MR_C_API void MR_C_std_function_void_from_std_string_Assign(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1));

// Assign a function with an extra user data pointer.
// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
// Parameter `_this` can not be null. It is a single object.
// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
// In C++ that parameter is an rvalue reference.
// How to use `userdata_callback`:
//   The `_this_userdata` parameter will never be null.
//   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
//   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
//   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MR_C_API void MR_C_std_function_void_from_std_string_AssignWithDataPtr(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H

#if !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H_2)
#define MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>

#endif // !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FUNCTION_VOID_FROM_STD_STRING_H_2)

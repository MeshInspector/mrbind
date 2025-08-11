#ifndef MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H
#define MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <MR/test_std_function.h>
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores a functor of type: `MR::StdFunction::E(int32_t, MR::StdFunction::E)`. Possibly stateful.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DestroyArray()`.
// Use `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_OffsetMutablePtr()` and `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother(MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *other);

// Destroys a heap-allocated instance of `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy(const MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_this);

// Destroys a heap-allocated array of `MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DestroyArray(const MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_OffsetPtr(const MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *ptr, ptrdiff_t i);

// Assign a stateless function.
// Parameter `_this` can not be null. It is a single object.
// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
// In C++ that parameter is an rvalue reference.
MR_C_API void MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Assign(MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int32_t _1, MR_StdFunction_E *_2));

// Assign a function with an extra user data pointer.
// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
// Parameter `_this` can not be null. It is a single object.
// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
// In C++ that parameter is an rvalue reference.
// How to use `userdata_callback`:
//   The `_this_userdata` parameter will never be null.
//   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
//   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
//   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MR_C_API void MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignWithDataPtr(MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int32_t _1, MR_StdFunction_E *_2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H

#if !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H_2)
#define MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_std_function.h>

#endif // !defined(MR_C_DETAIL_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_FUNCTION_MR_STDFUNCTION_E_FROM_INT32_T_MR_STDFUNCTION_E_H_2)

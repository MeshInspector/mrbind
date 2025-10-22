#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_function_MR_StdFunction_A MR_C_std_function_MR_StdFunction_A; // Defined in `#include <std_function_MR_StdFunction_A.h>`.
typedef struct MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E; // Defined in `#include <std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.h>`.
typedef struct MR_C_std_function_int32_t MR_C_std_function_int32_t; // Defined in `#include <std_function_int32_t.h>`.
typedef struct MR_C_std_function_int32_t_from_int32_t_int32_t MR_C_std_function_int32_t_from_int32_t_int32_t; // Defined in `#include <std_function_int32_t_from_int32_t_int32_t.h>`.
typedef struct MR_C_std_function_std_string_from_int32_t_float MR_C_std_function_std_string_from_int32_t_float; // Defined in `#include <std_function_std_string_from_int32_t_float.h>`.
typedef struct MR_C_std_function_void_from_MR_StdFunction_A MR_C_std_function_void_from_MR_StdFunction_A; // Defined in `#include <std_function_void_from_MR_StdFunction_A.h>`.
typedef struct MR_C_std_function_void_from_int32_t_int32_t MR_C_std_function_void_from_int32_t_int32_t; // Defined in `#include <std_function_void_from_int32_t_int32_t.h>`.
typedef struct MR_C_std_function_void_from_std_string MR_C_std_function_void_from_std_string; // Defined in `#include <std_function_void_from_std_string.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


typedef enum MR_StdFunction_E
{
    MR_StdFunction_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_StdFunction_E;

// Generated from class `MR::StdFunction::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdFunction_A MR_StdFunction_A;

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_int32_t_func(MR_C_PassBy _1_pass_by, MR_C_std_function_int32_t *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_int32_t_int32_t(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_int32_t_int32_t *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_int32_t_func_from_int32_t_int32_t(MR_C_PassBy _1_pass_by, MR_C_std_function_int32_t_from_int32_t_int32_t *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int32_t_MR_StdFunction_E(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_std_string_func_from_int32_t_float(MR_C_PassBy _1_pass_by, MR_C_std_function_std_string_from_int32_t_float *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_std_string(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_std_string *_1);

// Returns a pointer to a member variable of class `MR::StdFunction::A` named `a`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_StdFunction_A_Get_a(const MR_StdFunction_A *_this);

// Modifies a member variable of class `MR::StdFunction::A` named `a`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
MR_C_API void MR_StdFunction_A_Set_a(MR_StdFunction_A *_this, const char *value, const char *value_end);

// Returns a mutable pointer to a member variable of class `MR::StdFunction::A` named `a`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_StdFunction_A_GetMutable_a(MR_StdFunction_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_StdFunction_A_DestroyArray()`.
// Use `MR_StdFunction_A_OffsetMutablePtr()` and `MR_StdFunction_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_DefaultConstructArray(size_t num_elems);

// Constructs `MR::StdFunction::A` elementwise.
// Parameter `a` can not be null.
// If `a_end` is null, then `a` is assumed to be null-terminated.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_ConstructFrom(const char *a, const char *a_end);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdFunction_A *MR_StdFunction_A_OffsetPtr(const MR_StdFunction_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_OffsetMutablePtr(MR_StdFunction_A *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdFunction::A::A`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other);

// Destroys a heap-allocated instance of `MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdFunction_A_Destroy(const MR_StdFunction_A *_this);

// Destroys a heap-allocated array of `MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdFunction_A_DestroyArray(const MR_StdFunction_A *_this);

// Generated from method `MR::StdFunction::A::operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_AssignFromAnother(MR_StdFunction_A *_this, MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *_1);

// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_MR_StdFunction_A_func(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_A *_1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_function_MR_StdFunction_A.h>
#include <std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E.h>
#include <std_function_int32_t.h>
#include <std_function_int32_t_from_int32_t_int32_t.h>
#include <std_function_std_string_from_int32_t_float.h>
#include <std_function_void_from_MR_StdFunction_A.h>
#include <std_function_void_from_int32_t_int32_t.h>
#include <std_function_void_from_std_string.h>
#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_FUNCTION_H_2)

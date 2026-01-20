#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_function_MR_StdFunction_A MR_C_std_function_MR_StdFunction_A; // Defined in `#include <std_function_MR_StdFunction_A.h>`.
typedef struct MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E; // Defined in `#include <std_function_MR_StdFunction_E_from_int_MR_StdFunction_E.h>`.
typedef struct MR_C_std_function_int MR_C_std_function_int; // Defined in `#include <std_function_int.h>`.
typedef struct MR_C_std_function_int_from_int_int MR_C_std_function_int_from_int_int; // Defined in `#include <std_function_int_from_int_int.h>`.
typedef struct MR_C_std_function_std_string_from_int_float MR_C_std_function_std_string_from_int_float; // Defined in `#include <std_function_std_string_from_int_float.h>`.
typedef struct MR_C_std_function_void_from_MR_StdFunction_A MR_C_std_function_void_from_MR_StdFunction_A; // Defined in `#include <std_function_void_from_MR_StdFunction_A.h>`.
typedef struct MR_C_std_function_void_from_int_int MR_C_std_function_void_from_int_int; // Defined in `#include <std_function_void_from_int_int.h>`.
typedef struct MR_C_std_function_void_from_std_string MR_C_std_function_void_from_std_string; // Defined in `#include <std_function_void_from_std_string.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


typedef enum MR_StdFunction_E
{
    MR_StdFunction_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_StdFunction_E;

/// Generated from class `MR::StdFunction::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdFunction_A MR_StdFunction_A;

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_int_func(MR_C_PassBy _1_pass_by, MR_C_std_function_int *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_int_int(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_int_int *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_int_func_from_int_int(MR_C_PassBy _1_pass_by, MR_C_std_function_int_from_int_int *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_std_string_func_from_int_float(MR_C_PassBy _1_pass_by, MR_C_std_function_std_string_from_int_float *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_std_string(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_std_string *_1);

/// Returns a pointer to a member variable of class `MR::StdFunction::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_StdFunction_A_Get_a(const MR_StdFunction_A *_this);

/// Modifies a member variable of class `MR::StdFunction::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in the parameter `_this` in element `a`.
/// After this function is called, the parameter `_this` will drop object references it had previously in `a`.
MR_C_API void MR_StdFunction_A_Set_a(MR_StdFunction_A *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::StdFunction::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_StdFunction_A_GetMutable_a(MR_StdFunction_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_StdFunction_A_DestroyArray()`.
/// Use `MR_StdFunction_A_OffsetMutablePtr()` and `MR_StdFunction_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::StdFunction::A` elementwise.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// The reference to the parameter `a` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_ConstructFrom(const char *a, const char *a_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_StdFunction_A *MR_StdFunction_A_OffsetPtr(const MR_StdFunction_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_OffsetMutablePtr(MR_StdFunction_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::StdFunction::A::A`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other);

/// Destroys a heap-allocated instance of `MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdFunction_A_Destroy(const MR_StdFunction_A *_this);

/// Destroys a heap-allocated array of `MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdFunction_A_DestroyArray(const MR_StdFunction_A *_this);

/// Generated from method `MR::StdFunction::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_StdFunction_A *MR_StdFunction_A_AssignFromAnother(MR_StdFunction_A *_this, MR_C_PassBy _other_pass_by, MR_StdFunction_A *_other);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(MR_C_PassBy _1_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *_1);

/// Generated from function `MR::StdFunction::foo`.
MR_C_API void MR_StdFunction_foo_std_function_MR_StdFunction_A_func(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_A *_1);

#ifdef __cplusplus
} // extern "C"
#endif

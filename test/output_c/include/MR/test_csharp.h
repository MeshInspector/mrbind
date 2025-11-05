#pragma once

#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Enum comment.
typedef enum MR_CSharp_E1
{
    // A
    MR_CSharp_E1_a = 10,
    // B
    MR_CSharp_E1_b = 20,
    // C
    MR_CSharp_E1_c = 30,
} MR_CSharp_E1;

typedef bool MR_CSharp_E2;
enum // MR_CSharp_E2
{
    MR_CSharp_E2_a = 0,
    MR_CSharp_E2_b = 1,
};

/// Generated from class `MR::CSharp::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_A MR_CSharp_A;

/// Generated from function `MR::CSharp::foo`.
MR_C_API void MR_CSharp_foo(void);

/// Generated from function `MR::CSharp::test_int`.
/// Parameter `b` has a default argument: `42`, pass a null pointer to use it.
MR_C_API int MR_CSharp_test_int(int a, const int *b);

/// Generated from function `MR::CSharp::test_bool`.
/// Parameter `b` has a default argument: `true`, pass a null pointer to use it.
MR_C_API bool MR_CSharp_test_bool(bool a, const bool *b);

/// Generated from function `MR::CSharp::test_bool_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_bool`, pass a null pointer to use it.
MR_C_API void MR_CSharp_test_bool_ref(bool *a, bool *b);

/// Generated from function `MR::CSharp::test_bool_ref2`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_bool`, pass a null pointer to use it.
MR_C_API int MR_CSharp_test_bool_ref2(bool *a, bool *b);

/// Generated from function `MR::CSharp::get_bool_ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool *MR_CSharp_get_bool_ref(void);

/// Generated from function `MR::CSharp::print_bool_ref`.
MR_C_API void MR_CSharp_print_bool_ref(void);

/// Generated from function `MR::CSharp::test_bool_cref`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` is a single object.
/// Parameter `_2` has a default argument: `default_bool`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool *MR_CSharp_test_bool_cref(const bool *_1, const bool *_2);

/// Generated from function `MR::CSharp::test_int_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_int`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_test_int_ref(int *a, int *b);

/// Generated from function `MR::CSharp::test_int_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_int`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_test_int_cref(const int *a, const int *b);

/// Generated from function `MR::CSharp::test_int_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_int`, pass a null pointer to use it.
MR_C_API int *MR_CSharp_test_int_ptr(int *a, int *b, int *const *c);

/// Generated from function `MR::CSharp::test_int_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_int`, pass a null pointer to use it.
MR_C_API const int *MR_CSharp_test_int_cptr(const int *a, const int *b, const int *const *c);

/// Generated from function `MR::CSharp::test_enum`.
/// Parameter `b` has a default argument: `E1::b`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 MR_CSharp_test_enum(MR_CSharp_E1 a, const MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E1 *MR_CSharp_test_enum_ref(MR_CSharp_E1 *a, MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E1 *MR_CSharp_test_enum_cref(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e1`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 *MR_CSharp_test_enum_ptr(MR_CSharp_E1 *a, MR_CSharp_E1 *b, MR_CSharp_E1 *const *c);

/// Generated from function `MR::CSharp::test_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e1`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E1 *MR_CSharp_test_enum_cptr(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b, const MR_CSharp_E1 *const *c);

/// Generated from function `MR::CSharp::test_bool_enum`.
/// Parameter `b` has a default argument: `E2::b`, pass a null pointer to use it.
MR_C_API MR_CSharp_E2 MR_CSharp_test_bool_enum(MR_CSharp_E2 a, const MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_bool_enum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_bool_enum_ref(MR_CSharp_E2 *a, MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_bool_enum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_bool_enum_cref(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_bool_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_bool_enum_ptr(MR_CSharp_E2 *a, MR_CSharp_E2 *b, MR_CSharp_E2 *const *c);

/// Generated from function `MR::CSharp::test_bool_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_bool_enum_cptr(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b, const MR_CSharp_E2 *const *c);

/// Returns a pointer to a member variable of class `MR::CSharp::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_A_Get_a(const MR_CSharp_A *_this);

/// Modifies a member variable of class `MR::CSharp::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_A_Set_a(MR_CSharp_A *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::A` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_A_GetMutable_a(MR_CSharp_A *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_A *MR_CSharp_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_A_DestroyArray()`.
/// Use `MR_CSharp_A_OffsetMutablePtr()` and `MR_CSharp_A_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_A *MR_CSharp_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_A *MR_CSharp_A_OffsetPtr(const MR_CSharp_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_A *MR_CSharp_A_OffsetMutablePtr(MR_CSharp_A *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_Destroy(const MR_CSharp_A *_this);

/// Destroys a heap-allocated array of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_DestroyArray(const MR_CSharp_A *_this);

/// Generated from method `MR::CSharp::A::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_A_foo(MR_CSharp_A *_this);

/// Generated from method `MR::CSharp::A::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_A_bar(const MR_CSharp_A *_this, int _1, int _2);

/// Generated from method `MR::CSharp::A::static_foo`.
MR_C_API void MR_CSharp_A_static_foo(void);

/// Generated from method `MR::CSharp::A::static_bar`.
MR_C_API void MR_CSharp_A_static_bar(int _1, int _2);

/// Generated from method `MR::CSharp::A::virtual_foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_A_virtual_foo(MR_CSharp_A *_this);

/// Generated from method `MR::CSharp::A::virtual_bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_A_virtual_bar(const MR_CSharp_A *_this, int _1, int _2);

/// Generated from method `MR::CSharp::A::refs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_A_refs(MR_CSharp_A *_this, int *x, int *_2);

#ifdef __cplusplus
} // extern "C"
#endif

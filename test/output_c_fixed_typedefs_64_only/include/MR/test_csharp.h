#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_filesystem_path MR_C_std_filesystem_path; // Defined in `#include <std_filesystem_path.h>`.
typedef struct MR_C_std_shared_ptr_MR_CSharp_SA MR_C_std_shared_ptr_MR_CSharp_SA; // Defined in `#include <std_shared_ptr_MR_CSharp_SA.h>`.
typedef struct MR_C_std_shared_ptr_const_MR_CSharp_SA MR_C_std_shared_ptr_const_MR_CSharp_SA; // Defined in `#include <std_shared_ptr_const_MR_CSharp_SA.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.
typedef struct MR_C_std_string_view MR_C_std_string_view; // Defined in `#include <std_string_view.h>`.


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
/// Derived classes:
///   Virtual:
///     `MR::CSharp::C`
///   Direct: (non-virtual)
///     `MR::CSharp::B`
///     `MR::CSharp::F`
///     `MR::CSharp::G`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_A MR_CSharp_A;

/// Generated from class `MR::CSharp::B`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::A`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_B MR_CSharp_B;

/// Generated from class `MR::CSharp::C`.
/// Base classes:
///   Virtual:
///     `MR::CSharp::A`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_C MR_CSharp_C;

/// Generated from class `MR::CSharp::D`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::F`
///     `MR::CSharp::G`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_D MR_CSharp_D;

/// Generated from class `MR::CSharp::E`.
/// Derived classes:
///   Virtual:
///     `MR::CSharp::G`
///   Direct: (non-virtual)
///     `MR::CSharp::F`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_E MR_CSharp_E;

/// Generated from class `MR::CSharp::F`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::A`
///     `MR::CSharp::D`
///     `MR::CSharp::E`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_F MR_CSharp_F;

// Even if the secondary bases are virtual, this doesn't affect anything.
/// Generated from class `MR::CSharp::G`.
/// Base classes:
///   Virtual:
///     `MR::CSharp::E`
///   Direct: (non-virtual)
///     `MR::CSharp::A`
///     `MR::CSharp::D`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_G MR_CSharp_G;

/// Generated from class `MR::CSharp::Trivial`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_Trivial MR_CSharp_Trivial;

/// Generated from class `MR::CSharp::TrivialDerived`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TrivialDerived MR_CSharp_TrivialDerived;

/// Generated from class `MR::CSharp::NonTrivial`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NonTrivial MR_CSharp_NonTrivial;

/// Generated from class `MR::CSharp::NonTrivialDerived`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NonTrivialDerived MR_CSharp_NonTrivialDerived;

/// Generated from class `MR::CSharp::SA`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SC`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SA MR_CSharp_SA;

/// Generated from class `MR::CSharp::SB`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SC`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SB MR_CSharp_SB;

/// Generated from class `MR::CSharp::SC`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SA`
///     `MR::CSharp::SB`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SC MR_CSharp_SC;

// Nested classes.
/// Generated from class `MR::CSharp::Outer`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_Outer MR_CSharp_Outer;

/// Generated from class `MR::CSharp::Outer::Inner`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_Outer_Inner MR_CSharp_Outer_Inner;

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

/// Generated from function `MR::CSharp::test_ushort`.
/// Parameter `b` has a default argument: `42`, pass a null pointer to use it.
MR_C_API unsigned short MR_CSharp_test_ushort(unsigned short a, const unsigned short *b);

/// Generated from function `MR::CSharp::test_ushort_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_ushort`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *MR_CSharp_test_ushort_ref(unsigned short *a, unsigned short *b);

/// Generated from function `MR::CSharp::test_ushort_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_ushort`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short *MR_CSharp_test_ushort_cref(const unsigned short *a, const unsigned short *b);

/// Generated from function `MR::CSharp::test_ushort_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_ushort`, pass a null pointer to use it.
MR_C_API unsigned short *MR_CSharp_test_ushort_ptr(unsigned short *a, unsigned short *b, unsigned short *const *c);

/// Generated from function `MR::CSharp::test_ushort_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_ushort`, pass a null pointer to use it.
MR_C_API const unsigned short *MR_CSharp_test_ushort_cptr(const unsigned short *a, const unsigned short *b, const unsigned short *const *c);

/// Generated from function `MR::CSharp::test_enum`.
/// Parameter `b` has a default argument: `E1::b`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 MR_CSharp_test_enum_MR_CSharp_E1(MR_CSharp_E1 a, const MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E1 *MR_CSharp_test_enum_ref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E1 *MR_CSharp_test_enum_cref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e1`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 *MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(MR_CSharp_E1 *a, MR_CSharp_E1 *b, MR_CSharp_E1 *const *c);

/// Generated from function `MR::CSharp::test_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e1`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E1 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b, const MR_CSharp_E1 *const *c);

/// Generated from function `MR::CSharp::test_enum`.
/// Parameter `b` has a default argument: `E2::b`, pass a null pointer to use it.
MR_C_API MR_CSharp_E2 MR_CSharp_test_enum_MR_CSharp_E2(MR_CSharp_E2 a, const MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_enum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_enum_ref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_enum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_enum_cref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(MR_CSharp_E2 *a, MR_CSharp_E2 *b, MR_CSharp_E2 *const *c);

/// Generated from function `MR::CSharp::test_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b, const MR_CSharp_E2 *const *c);

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

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_B *MR_CSharp_A_StaticDowncastTo_MR_CSharp_B(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_B *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_B(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_B *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MR_C_API MR_CSharp_B *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_B(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_B *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_B(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::B`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_B *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_B(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::C`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_C *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::C`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MR_C_API MR_CSharp_C *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_C(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::C`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_C *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_C(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::C`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_C *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_C(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_F *MR_CSharp_A_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_F *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_F *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MR_C_API MR_CSharp_F *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_F(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_F *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_F(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::F`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_F *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_F(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_G *MR_CSharp_A_StaticDowncastTo_MR_CSharp_G(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_G *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_G(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_G *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MR_C_API MR_CSharp_G *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_G(MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_G *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_G(const MR_CSharp_A *object);

/// Downcasts an instance of `MR::CSharp::A` to a derived class `MR::CSharp::G`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_G *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_G(MR_CSharp_A *object);

/// Generated from constructor `MR::CSharp::A::A`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_A *MR_CSharp_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_A *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_Destroy(const MR_CSharp_A *_this);

/// Destroys a heap-allocated array of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_DestroyArray(const MR_CSharp_A *_this);

/// Generated from method `MR::CSharp::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A *MR_CSharp_A_AssignFromAnother(MR_CSharp_A *_this, MR_C_PassBy _other_pass_by, MR_CSharp_A *_other);

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

/// Returns a pointer to a member variable of class `MR::CSharp::B` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_B_Get_a(const MR_CSharp_B *_this);

/// Modifies a member variable of class `MR::CSharp::B` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_B_Set_a(MR_CSharp_B *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::B` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_B_GetMutable_a(MR_CSharp_B *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_B *MR_CSharp_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_B_DestroyArray()`.
/// Use `MR_CSharp_B_OffsetMutablePtr()` and `MR_CSharp_B_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_B *MR_CSharp_B_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_B *MR_CSharp_B_OffsetPtr(const MR_CSharp_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_B *MR_CSharp_B_OffsetMutablePtr(MR_CSharp_B *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::B` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_B_UpcastTo_MR_CSharp_A(const MR_CSharp_B *object);

/// Upcasts an instance of `MR::CSharp::B` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(MR_CSharp_B *object);

/// Generated from constructor `MR::CSharp::B::B`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_B *MR_CSharp_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_B *_other);

/// Generated from constructor `MR::CSharp::B::B`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_B *MR_CSharp_B_Construct(int a, int b);

/// Destroys a heap-allocated instance of `MR_CSharp_B`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_B_Destroy(const MR_CSharp_B *_this);

/// Destroys a heap-allocated array of `MR_CSharp_B`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_B_DestroyArray(const MR_CSharp_B *_this);

/// Generated from method `MR::CSharp::B::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_B *MR_CSharp_B_AssignFromAnother(MR_CSharp_B *_this, MR_C_PassBy _other_pass_by, MR_CSharp_B *_other);

/// Generated from method `MR::CSharp::B::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_B_foo(MR_CSharp_B *_this);

/// Generated from method `MR::CSharp::B::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_B_bar(const MR_CSharp_B *_this, int _1, int _2);

/// Generated from method `MR::CSharp::B::static_foo`.
MR_C_API void MR_CSharp_B_static_foo(void);

/// Generated from method `MR::CSharp::B::static_bar`.
MR_C_API void MR_CSharp_B_static_bar(int _1, int _2);

/// Generated from method `MR::CSharp::B::virtual_foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_B_virtual_foo(MR_CSharp_B *_this);

/// Generated from method `MR::CSharp::B::virtual_bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_B_virtual_bar(const MR_CSharp_B *_this, int _1, int _2);

/// Generated from method `MR::CSharp::B::refs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_B_refs(MR_CSharp_B *_this, int *x, int *_2);

/// Returns a pointer to a member variable of class `MR::CSharp::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_C_Get_a(const MR_CSharp_C *_this);

/// Modifies a member variable of class `MR::CSharp::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_C_Set_a(MR_CSharp_C *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::C` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_C_GetMutable_a(MR_CSharp_C *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_C *MR_CSharp_C_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_C_DestroyArray()`.
/// Use `MR_CSharp_C_OffsetMutablePtr()` and `MR_CSharp_C_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_C *MR_CSharp_C_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_C *MR_CSharp_C_OffsetPtr(const MR_CSharp_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_C *MR_CSharp_C_OffsetMutablePtr(MR_CSharp_C *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::C` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_C_UpcastTo_MR_CSharp_A(const MR_CSharp_C *object);

/// Upcasts an instance of `MR::CSharp::C` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(MR_CSharp_C *object);

/// Generated from constructor `MR::CSharp::C::C`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_C *MR_CSharp_C_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_C *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_C`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_C_Destroy(const MR_CSharp_C *_this);

/// Destroys a heap-allocated array of `MR_CSharp_C`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_C_DestroyArray(const MR_CSharp_C *_this);

/// Generated from method `MR::CSharp::C::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_C *MR_CSharp_C_AssignFromAnother(MR_CSharp_C *_this, MR_C_PassBy _other_pass_by, MR_CSharp_C *_other);

/// Generated from method `MR::CSharp::C::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_C_foo(MR_CSharp_C *_this);

/// Generated from method `MR::CSharp::C::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_C_bar(const MR_CSharp_C *_this, int _1, int _2);

/// Generated from method `MR::CSharp::C::static_foo`.
MR_C_API void MR_CSharp_C_static_foo(void);

/// Generated from method `MR::CSharp::C::static_bar`.
MR_C_API void MR_CSharp_C_static_bar(int _1, int _2);

/// Generated from method `MR::CSharp::C::virtual_foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_C_virtual_foo(MR_CSharp_C *_this);

/// Generated from method `MR::CSharp::C::virtual_bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_C_virtual_bar(const MR_CSharp_C *_this, int _1, int _2);

/// Generated from method `MR::CSharp::C::refs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_C_refs(MR_CSharp_C *_this, int *x, int *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_D_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_D *MR_CSharp_D_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_D_DestroyArray()`.
/// Use `MR_CSharp_D_OffsetMutablePtr()` and `MR_CSharp_D_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_D *MR_CSharp_D_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_D *MR_CSharp_D_OffsetPtr(const MR_CSharp_D *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_D *MR_CSharp_D_OffsetMutablePtr(MR_CSharp_D *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::D` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_F *MR_CSharp_D_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_D *object);

/// Downcasts an instance of `MR::CSharp::D` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_F *MR_CSharp_D_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_D *object);

/// Downcasts an instance of `MR::CSharp::D` to a derived class `MR::CSharp::G`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_G *MR_CSharp_D_StaticDowncastTo_MR_CSharp_G(const MR_CSharp_D *object);

/// Downcasts an instance of `MR::CSharp::D` to a derived class `MR::CSharp::G`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_G *MR_CSharp_D_MutableStaticDowncastTo_MR_CSharp_G(MR_CSharp_D *object);

/// Generated from constructor `MR::CSharp::D::D`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_D_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_D *MR_CSharp_D_ConstructFromAnother(const MR_CSharp_D *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_D`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_D_Destroy(const MR_CSharp_D *_this);

/// Destroys a heap-allocated array of `MR_CSharp_D`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_D_DestroyArray(const MR_CSharp_D *_this);

/// Generated from method `MR::CSharp::D::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_D *MR_CSharp_D_AssignFromAnother(MR_CSharp_D *_this, const MR_CSharp_D *_other);

/// Generated from method `MR::CSharp::D::d1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_D_d1(const MR_CSharp_D *_this);

/// Generated from method `MR::CSharp::D::d2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_D_d2(MR_CSharp_D *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_E_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_E *MR_CSharp_E_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_E_DestroyArray()`.
/// Use `MR_CSharp_E_OffsetMutablePtr()` and `MR_CSharp_E_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_E *MR_CSharp_E_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_E *MR_CSharp_E_OffsetPtr(const MR_CSharp_E *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_E *MR_CSharp_E_OffsetMutablePtr(MR_CSharp_E *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::E` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_F *MR_CSharp_E_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_E *object);

/// Downcasts an instance of `MR::CSharp::E` to a derived class `MR::CSharp::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_F *MR_CSharp_E_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_E *object);

/// Generated from constructor `MR::CSharp::E::E`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_E_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_E *MR_CSharp_E_ConstructFromAnother(const MR_CSharp_E *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_E`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_E_Destroy(const MR_CSharp_E *_this);

/// Destroys a heap-allocated array of `MR_CSharp_E`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_E_DestroyArray(const MR_CSharp_E *_this);

/// Generated from method `MR::CSharp::E::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E *MR_CSharp_E_AssignFromAnother(MR_CSharp_E *_this, const MR_CSharp_E *_other);

/// Generated from method `MR::CSharp::E::e1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_E_e1(const MR_CSharp_E *_this);

/// Generated from method `MR::CSharp::E::e2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_E_e2(MR_CSharp_E *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::F` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_F_Get_a(const MR_CSharp_F *_this);

/// Modifies a member variable of class `MR::CSharp::F` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_Set_a(MR_CSharp_F *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::F` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_F_GetMutable_a(MR_CSharp_F *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_F *MR_CSharp_F_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_F_DestroyArray()`.
/// Use `MR_CSharp_F_OffsetMutablePtr()` and `MR_CSharp_F_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_F *MR_CSharp_F_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_F *MR_CSharp_F_OffsetPtr(const MR_CSharp_F *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_F *MR_CSharp_F_OffsetMutablePtr(MR_CSharp_F *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_F_UpcastTo_MR_CSharp_A(const MR_CSharp_F *object);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_F_MutableUpcastTo_MR_CSharp_A(MR_CSharp_F *object);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::D`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_D *MR_CSharp_F_UpcastTo_MR_CSharp_D(const MR_CSharp_F *object);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::D`.
MR_C_API MR_CSharp_D *MR_CSharp_F_MutableUpcastTo_MR_CSharp_D(MR_CSharp_F *object);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_E *MR_CSharp_F_UpcastTo_MR_CSharp_E(const MR_CSharp_F *object);

/// Upcasts an instance of `MR::CSharp::F` to its base class `MR::CSharp::E`.
MR_C_API MR_CSharp_E *MR_CSharp_F_MutableUpcastTo_MR_CSharp_E(MR_CSharp_F *object);

/// Generated from constructor `MR::CSharp::F::F`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_F *MR_CSharp_F_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_F *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_F`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_F_Destroy(const MR_CSharp_F *_this);

/// Destroys a heap-allocated array of `MR_CSharp_F`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_F_DestroyArray(const MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_F *MR_CSharp_F_AssignFromAnother(MR_CSharp_F *_this, MR_C_PassBy _other_pass_by, MR_CSharp_F *_other);

/// Generated from method `MR::CSharp::F::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_foo(MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_bar(const MR_CSharp_F *_this, int _1, int _2);

/// Generated from method `MR::CSharp::F::static_foo`.
MR_C_API void MR_CSharp_F_static_foo(void);

/// Generated from method `MR::CSharp::F::static_bar`.
MR_C_API void MR_CSharp_F_static_bar(int _1, int _2);

/// Generated from method `MR::CSharp::F::virtual_foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_virtual_foo(MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::virtual_bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_virtual_bar(const MR_CSharp_F *_this, int _1, int _2);

/// Generated from method `MR::CSharp::F::refs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_F_refs(MR_CSharp_F *_this, int *x, int *_2);

/// Generated from method `MR::CSharp::F::d1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_d1(const MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::d2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_d2(MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::e1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_e1(const MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::e2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_F_e2(MR_CSharp_F *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::G` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_G_Get_a(const MR_CSharp_G *_this);

/// Modifies a member variable of class `MR::CSharp::G` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_Set_a(MR_CSharp_G *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::G` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_G_GetMutable_a(MR_CSharp_G *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_G *MR_CSharp_G_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_G_DestroyArray()`.
/// Use `MR_CSharp_G_OffsetMutablePtr()` and `MR_CSharp_G_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_G *MR_CSharp_G_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_G *MR_CSharp_G_OffsetPtr(const MR_CSharp_G *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_G *MR_CSharp_G_OffsetMutablePtr(MR_CSharp_G *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_G_UpcastTo_MR_CSharp_A(const MR_CSharp_G *object);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_G_MutableUpcastTo_MR_CSharp_A(MR_CSharp_G *object);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::D`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_D *MR_CSharp_G_UpcastTo_MR_CSharp_D(const MR_CSharp_G *object);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::D`.
MR_C_API MR_CSharp_D *MR_CSharp_G_MutableUpcastTo_MR_CSharp_D(MR_CSharp_G *object);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_E *MR_CSharp_G_UpcastTo_MR_CSharp_E(const MR_CSharp_G *object);

/// Upcasts an instance of `MR::CSharp::G` to its base class `MR::CSharp::E`.
MR_C_API MR_CSharp_E *MR_CSharp_G_MutableUpcastTo_MR_CSharp_E(MR_CSharp_G *object);

/// Generated from constructor `MR::CSharp::G::G`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_G *MR_CSharp_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_G *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_G`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_G_Destroy(const MR_CSharp_G *_this);

/// Destroys a heap-allocated array of `MR_CSharp_G`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_G_DestroyArray(const MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_G *MR_CSharp_G_AssignFromAnother(MR_CSharp_G *_this, MR_C_PassBy _other_pass_by, MR_CSharp_G *_other);

/// Generated from method `MR::CSharp::G::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_foo(MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_bar(const MR_CSharp_G *_this, int _1, int _2);

/// Generated from method `MR::CSharp::G::static_foo`.
MR_C_API void MR_CSharp_G_static_foo(void);

/// Generated from method `MR::CSharp::G::static_bar`.
MR_C_API void MR_CSharp_G_static_bar(int _1, int _2);

/// Generated from method `MR::CSharp::G::virtual_foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_virtual_foo(MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::virtual_bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_virtual_bar(const MR_CSharp_G *_this, int _1, int _2);

/// Generated from method `MR::CSharp::G::refs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_G_refs(MR_CSharp_G *_this, int *x, int *_2);

/// Generated from method `MR::CSharp::G::d1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_d1(const MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::d2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_d2(MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::e1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_e1(const MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::e2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_G_e2(MR_CSharp_G *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_Trivial_DestroyArray()`.
/// Use `MR_CSharp_Trivial_OffsetMutablePtr()` and `MR_CSharp_Trivial_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetPtr(const MR_CSharp_Trivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetMutablePtr(MR_CSharp_Trivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Trivial::Trivial`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_ConstructFromAnother(const MR_CSharp_Trivial *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Trivial_Destroy(const MR_CSharp_Trivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Trivial_DestroyArray(const MR_CSharp_Trivial *_this);

/// Generated from method `MR::CSharp::Trivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_AssignFromAnother(MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_TrivialDerived_DestroyArray()`.
/// Use `MR_CSharp_TrivialDerived_OffsetMutablePtr()` and `MR_CSharp_TrivialDerived_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetPtr(const MR_CSharp_TrivialDerived *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetMutablePtr(MR_CSharp_TrivialDerived *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_ConstructFromAnother(const MR_CSharp_TrivialDerived *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_TrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TrivialDerived_Destroy(const MR_CSharp_TrivialDerived *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TrivialDerived_DestroyArray(const MR_CSharp_TrivialDerived *_this);

/// Generated from method `MR::CSharp::TrivialDerived::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_AssignFromAnother(MR_CSharp_TrivialDerived *_this, const MR_CSharp_TrivialDerived *_other);

/// Generated from function `MR::CSharp::test_class_trivial`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_test_class_trivial(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_class_trivial_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_trivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_class_trivial_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_trivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_class_trivial_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_trivial`, pass a null pointer to use it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ptr(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b, MR_CSharp_Trivial *const *c);

/// Generated from function `MR::CSharp::test_class_trivial_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_trivial`, pass a null pointer to use it.
MR_C_API const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cptr(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b, const MR_CSharp_Trivial *const *c);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NonTrivial_DestroyArray()`.
/// Use `MR_CSharp_NonTrivial_OffsetMutablePtr()` and `MR_CSharp_NonTrivial_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetPtr(const MR_CSharp_NonTrivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetMutablePtr(MR_CSharp_NonTrivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivial_Destroy(const MR_CSharp_NonTrivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivial_DestroyArray(const MR_CSharp_NonTrivial *_this);

/// Generated from method `MR::CSharp::NonTrivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_AssignFromAnother(MR_CSharp_NonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NonTrivialDerived_DestroyArray()`.
/// Use `MR_CSharp_NonTrivialDerived_OffsetMutablePtr()` and `MR_CSharp_NonTrivialDerived_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetPtr(const MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetMutablePtr(MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonTrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialDerived_Destroy(const MR_CSharp_NonTrivialDerived *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonTrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialDerived_DestroyArray(const MR_CSharp_NonTrivialDerived *_this);

/// Generated from method `MR::CSharp::NonTrivialDerived::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_AssignFromAnother(MR_CSharp_NonTrivialDerived *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other);

/// Generated from function `MR::CSharp::test_class_nontrivial`.
/// Parameter `b` has a default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_class_nontrivial_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_nontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_class_nontrivial_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_nontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_nontrivial`, pass a null pointer to use it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ptr(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b, MR_CSharp_NonTrivial *const *c);

/// Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_nontrivial`, pass a null pointer to use it.
MR_C_API const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cptr(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b, const MR_CSharp_NonTrivial *const *c);

/// Generated from function `MR::CSharp::test_void_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `(void *)42`, pass a null pointer to use it.
MR_C_API void *MR_CSharp_test_void_ptr(void *a, void *b, void *const *c);

/// Generated from function `MR::CSharp::test_void_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `(const void *)42`, pass a null pointer to use it.
MR_C_API const void *MR_CSharp_test_void_cptr(const void *a, const void *b, const void *const *c);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SA_DestroyArray()`.
/// Use `MR_CSharp_SA_OffsetMutablePtr()` and `MR_CSharp_SA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_SA *MR_CSharp_SA_OffsetPtr(const MR_CSharp_SA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_OffsetMutablePtr(MR_CSharp_SA *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::SA` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SC *MR_CSharp_SA_StaticDowncastTo_MR_CSharp_SC(const MR_CSharp_SA *object);

/// Downcasts an instance of `MR::CSharp::SA` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_SC *MR_CSharp_SA_MutableStaticDowncastTo_MR_CSharp_SC(MR_CSharp_SA *object);

/// Generated from constructor `MR::CSharp::SA::SA`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_ConstructFromAnother(const MR_CSharp_SA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SA_Destroy(const MR_CSharp_SA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SA_DestroyArray(const MR_CSharp_SA *_this);

/// Generated from method `MR::CSharp::SA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_AssignFromAnother(MR_CSharp_SA *_this, const MR_CSharp_SA *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SB_DestroyArray()`.
/// Use `MR_CSharp_SB_OffsetMutablePtr()` and `MR_CSharp_SB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_SB *MR_CSharp_SB_OffsetPtr(const MR_CSharp_SB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_OffsetMutablePtr(MR_CSharp_SB *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::SB` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SC *MR_CSharp_SB_StaticDowncastTo_MR_CSharp_SC(const MR_CSharp_SB *object);

/// Downcasts an instance of `MR::CSharp::SB` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_SC *MR_CSharp_SB_MutableStaticDowncastTo_MR_CSharp_SC(MR_CSharp_SB *object);

/// Generated from constructor `MR::CSharp::SB::SB`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_ConstructFromAnother(const MR_CSharp_SB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SB_Destroy(const MR_CSharp_SB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SB_DestroyArray(const MR_CSharp_SB *_this);

/// Generated from method `MR::CSharp::SB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_AssignFromAnother(MR_CSharp_SB *_this, const MR_CSharp_SB *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SC_DestroyArray()`.
/// Use `MR_CSharp_SC_OffsetMutablePtr()` and `MR_CSharp_SC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_SC *MR_CSharp_SC_OffsetPtr(const MR_CSharp_SC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_OffsetMutablePtr(MR_CSharp_SC *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::SC` to its base class `MR::CSharp::SA`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SA *MR_CSharp_SC_UpcastTo_MR_CSharp_SA(const MR_CSharp_SC *object);

/// Upcasts an instance of `MR::CSharp::SC` to its base class `MR::CSharp::SA`.
MR_C_API MR_CSharp_SA *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA(MR_CSharp_SC *object);

/// Upcasts an instance of `MR::CSharp::SC` to its base class `MR::CSharp::SB`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SB *MR_CSharp_SC_UpcastTo_MR_CSharp_SB(const MR_CSharp_SC *object);

/// Upcasts an instance of `MR::CSharp::SC` to its base class `MR::CSharp::SB`.
MR_C_API MR_CSharp_SB *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB(MR_CSharp_SC *object);

/// Generated from constructor `MR::CSharp::SC::SC`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_ConstructFromAnother(const MR_CSharp_SC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SC_Destroy(const MR_CSharp_SC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SC_DestroyArray(const MR_CSharp_SC *_this);

/// Generated from method `MR::CSharp::SC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_AssignFromAnother(MR_CSharp_SC *_this, const MR_CSharp_SC *_other);

// Pokeing a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
/// Generated from function `MR::CSharp::test_shptr`.
/// Parameter `b` has a default argument: `default_shptr`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_shptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_shptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shptr_ptr`.
/// Parameter `b` has a default argument: `&default_shptr`, pass a null pointer to use it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ptr(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *const *b);

/// Generated from function `MR::CSharp::test_shptr_cptr`.
/// Parameter `b` has a default argument: `&default_shptr`, pass a null pointer to use it.
MR_C_API const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cptr(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *const *b);

/// Generated from function `MR::CSharp::test_shcptr`.
/// Parameter `b` has a default argument: `default_shcptr`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_const_MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shcptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_shcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shcptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_shcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shcptr_ptr`.
/// Parameter `b` has a default argument: `&default_shcptr`, pass a null pointer to use it.
MR_C_API MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ptr(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b);

/// Generated from function `MR::CSharp::test_shcptr_cptr`.
/// Parameter `b` has a default argument: `&default_shcptr`, pass a null pointer to use it.
MR_C_API const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cptr(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b);

/// Generated from function `MR::CSharp::test_string`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `default_string`, pass a null pointer to both it and `b_end` to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_CSharp_test_string(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_string_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_string`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_test_string_ref(MR_C_std_string *a, MR_C_std_string *b);

/// Generated from function `MR::CSharp::test_string_cref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `default_string`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_test_string_cref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_string_ptr`.
/// Parameter `b` has a default argument: `&default_string`, pass a null pointer to use it.
MR_C_API MR_C_std_string *MR_CSharp_test_string_ptr(MR_C_std_string *a, MR_C_std_string *const *b);

/// Generated from function `MR::CSharp::test_string_cptr`.
/// Parameter `b` has a default argument: `&default_string`, pass a null pointer to use it.
MR_C_API const MR_C_std_string *MR_CSharp_test_string_cptr(const MR_C_std_string *a, const MR_C_std_string *const *b);

/// Generated from function `MR::CSharp::test_stringview`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `default_stringview`, pass a null pointer to both it and `b_end` to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string_view *MR_CSharp_test_stringview(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_stringview_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_stringview`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string_view *MR_CSharp_test_stringview_ref(MR_C_std_string_view *a, MR_C_std_string_view *b);

/// Generated from function `MR::CSharp::test_stringview_cref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `default_stringview`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string_view *MR_CSharp_test_stringview_cref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_stringview_ptr`.
/// Parameter `b` has a default argument: `&default_stringview`, pass a null pointer to use it.
MR_C_API MR_C_std_string_view *MR_CSharp_test_stringview_ptr(MR_C_std_string_view *a, MR_C_std_string_view *const *b);

/// Generated from function `MR::CSharp::test_stringview_cptr`.
/// Parameter `b` has a default argument: `&default_stringview`, pass a null pointer to use it.
MR_C_API const MR_C_std_string_view *MR_CSharp_test_stringview_cptr(const MR_C_std_string_view *a, const MR_C_std_string_view *const *b);

/// Generated from function `MR::CSharp::test_fspath`.
/// Parameter `a` is a UTF-8 encoded filesystem path.
/// Parameter `b` is a UTF-8 encoded filesystem path.
/// Parameter `b` has a default argument: `default_fspath`, pass a null pointer to both it and `b_end` to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_CSharp_test_fspath(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_fspath_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_fspath`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_filesystem_path *MR_CSharp_test_fspath_ref(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *b);

/// Generated from function `MR::CSharp::test_fspath_cref`.
/// Parameter `a` is a UTF-8 encoded filesystem path.
/// Parameter `b` is a UTF-8 encoded filesystem path.
/// Parameter `b` has a default argument: `default_fspath`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_fspath_ptr`.
/// Parameter `b` has a default argument: `&default_fspath`, pass a null pointer to use it.
MR_C_API MR_C_std_filesystem_path *MR_CSharp_test_fspath_ptr(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *const *b);

/// Generated from function `MR::CSharp::test_fspath_cptr`.
/// Parameter `b` has a default argument: `&default_fspath`, pass a null pointer to use it.
MR_C_API const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cptr(const MR_C_std_filesystem_path *a, const MR_C_std_filesystem_path *const *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_Outer_DestroyArray()`.
/// Use `MR_CSharp_Outer_OffsetMutablePtr()` and `MR_CSharp_Outer_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_Outer *MR_CSharp_Outer_OffsetPtr(const MR_CSharp_Outer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_OffsetMutablePtr(MR_CSharp_Outer *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Outer::Outer`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_ConstructFromAnother(const MR_CSharp_Outer *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Outer`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Destroy(const MR_CSharp_Outer *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Outer`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_DestroyArray(const MR_CSharp_Outer *_this);

/// Generated from method `MR::CSharp::Outer::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_AssignFromAnother(MR_CSharp_Outer *_this, const MR_CSharp_Outer *_other);

/// Generated from method `MR::CSharp::Outer::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_Outer_foo(MR_CSharp_Outer *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Inner_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_Outer_Inner_DestroyArray()`.
/// Use `MR_CSharp_Outer_Inner_OffsetMutablePtr()` and `MR_CSharp_Outer_Inner_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetPtr(const MR_CSharp_Outer_Inner *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetMutablePtr(MR_CSharp_Outer_Inner *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Inner_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_ConstructFromAnother(const MR_CSharp_Outer_Inner *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Outer_Inner`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Inner_Destroy(const MR_CSharp_Outer_Inner *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Outer_Inner`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Inner_DestroyArray(const MR_CSharp_Outer_Inner *_this);

/// Generated from method `MR::CSharp::Outer::Inner::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_AssignFromAnother(MR_CSharp_Outer_Inner *_this, const MR_CSharp_Outer_Inner *_other);

/// Generated from method `MR::CSharp::Outer::Inner::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_Outer_Inner_bar(MR_CSharp_Outer_Inner *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_expected_MR_CSharp_E1_float MR_C_std_expected_MR_CSharp_E1_float; // Defined in `#include <std_expected_MR_CSharp_E1_float.h>`.
typedef struct MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float; // Defined in `#include <std_expected_MR_CSharp_ExposedLayoutSh_float.h>`.
typedef struct MR_C_std_expected_MR_CSharp_ExposedLayout_float MR_C_std_expected_MR_CSharp_ExposedLayout_float; // Defined in `#include <std_expected_MR_CSharp_ExposedLayout_float.h>`.
typedef struct MR_C_std_expected_MR_CSharp_NonTrivial_float MR_C_std_expected_MR_CSharp_NonTrivial_float; // Defined in `#include <std_expected_MR_CSharp_NonTrivial_float.h>`.
typedef struct MR_C_std_expected_MR_CSharp_SA_float MR_C_std_expected_MR_CSharp_SA_float; // Defined in `#include <std_expected_MR_CSharp_SA_float.h>`.
typedef struct MR_C_std_expected_MR_CSharp_Trivial_float MR_C_std_expected_MR_CSharp_Trivial_float; // Defined in `#include <std_expected_MR_CSharp_Trivial_float.h>`.
typedef struct MR_C_std_expected_int_float MR_C_std_expected_int_float; // Defined in `#include <std_expected_int_float.h>`.
typedef struct MR_C_std_expected_void_float MR_C_std_expected_void_float; // Defined in `#include <std_expected_void_float.h>`.
typedef struct MR_C_std_filesystem_path MR_C_std_filesystem_path; // Defined in `#include <std_filesystem_path.h>`.
typedef struct MR_C_std_istream MR_C_std_istream; // Defined in `#include <iostream.h>`.
typedef struct MR_C_std_optional_MR_CSharp_ExposedLayoutSh MR_C_std_optional_MR_CSharp_ExposedLayoutSh; // Defined in `#include <std_optional_MR_CSharp_ExposedLayoutSh.h>`.
typedef struct MR_C_std_optional_MR_CSharp_NonTrivial MR_C_std_optional_MR_CSharp_NonTrivial; // Defined in `#include <std_optional_MR_CSharp_NonTrivial.h>`.
typedef struct MR_C_std_optional_MR_CSharp_SA MR_C_std_optional_MR_CSharp_SA; // Defined in `#include <std_optional_MR_CSharp_SA.h>`.
typedef struct MR_C_std_optional_MR_CSharp_Trivial MR_C_std_optional_MR_CSharp_Trivial; // Defined in `#include <std_optional_MR_CSharp_Trivial.h>`.
typedef struct MR_C_std_optional_int MR_C_std_optional_int; // Defined in `#include <std_optional_int.h>`.
typedef struct MR_C_std_optional_std_string MR_C_std_optional_std_string; // Defined in `#include <std_optional_std_string.h>`.
typedef struct MR_C_std_ostream MR_C_std_ostream; // Defined in `#include <iostream.h>`.
typedef struct MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh; // Defined in `#include <std_shared_ptr_MR_CSharp_ExposedLayoutSh.h>`.
typedef struct MR_C_std_shared_ptr_MR_CSharp_SA MR_C_std_shared_ptr_MR_CSharp_SA; // Defined in `#include <std_shared_ptr_MR_CSharp_SA.h>`.
typedef struct MR_C_std_shared_ptr_MR_CSharp_SE MR_C_std_shared_ptr_MR_CSharp_SE; // Defined in `#include <std_shared_ptr_MR_CSharp_SE.h>`.
typedef struct MR_C_std_shared_ptr_const_MR_CSharp_SA MR_C_std_shared_ptr_const_MR_CSharp_SA; // Defined in `#include <std_shared_ptr_const_MR_CSharp_SA.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.
typedef struct MR_C_std_string_view MR_C_std_string_view; // Defined in `#include <std_string_view.h>`.
typedef struct MR_C_std_unique_ptr_int MR_C_std_unique_ptr_int; // Defined in `#include <std_unique_ptr_int.h>`.
typedef struct MR_C_std_variant_std_monostate_int_float MR_C_std_variant_std_monostate_int_float; // Defined in `#include <std_variant_std_monostate_int_float.h>`.
typedef struct MR_C_std_variant_std_monostate_int_float_float MR_C_std_variant_std_monostate_int_float_float; // Defined in `#include <std_variant_std_monostate_int_float_float.h>`.
typedef struct MR_C_std_vector_MR_CSharp_ExposedLayout MR_C_std_vector_MR_CSharp_ExposedLayout; // Defined in `#include <std_vector_MR_CSharp_ExposedLayout.h>`.


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

/// Generated from class `MR::CSharp::SD`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SF`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SD MR_CSharp_SD;

/// Generated from class `MR::CSharp::SE`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SF`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SE MR_CSharp_SE;

/// Generated from class `MR::CSharp::SF`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CSharp::SD`
///     `MR::CSharp::SE`
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_SF MR_CSharp_SF;

/// Generated from class `MR::CSharp::Outer::Inner`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_Outer_Inner MR_CSharp_Outer_Inner;

// Nested classes.
/// Generated from class `MR::CSharp::Outer`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_Outer MR_CSharp_Outer;

/// Generated from class `MR::CSharp::TestFields`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TestFields MR_CSharp_TestFields;

/// Generated from class `MR::CSharp::TestConstness`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TestConstness MR_CSharp_TestConstness;

// This is the happy path.
// This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrA MR_CSharp_IncrDecrA;

// This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
/// Generated from class `MR::CSharp::IncrDecrB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrB MR_CSharp_IncrDecrB;

// This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
// The non-static ones are not marked const, so they're also in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrC MR_CSharp_IncrDecrC;

// This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
// The non-static ones are in the const half due to being marked const.
/// Generated from class `MR::CSharp::IncrDecrD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrD MR_CSharp_IncrDecrD;

// Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
/// Generated from class `MR::CSharp::IncrDecrE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrE MR_CSharp_IncrDecrE;

// Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
/// Generated from class `MR::CSharp::IncrDecrF`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrF MR_CSharp_IncrDecrF;

// This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
/// Generated from class `MR::CSharp::IncrDecrG`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrG MR_CSharp_IncrDecrG;

// This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
/// Generated from class `MR::CSharp::IncrDecrH`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrH MR_CSharp_IncrDecrH;

// Friend functions.
/// Generated from class `MR::CSharp::IncrDecrI`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IncrDecrI MR_CSharp_IncrDecrI;

// Test equality comparison.
/// Generated from class `MR::CSharp::EqualityA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_EqualityA MR_CSharp_EqualityA;

// Return type isn't `bool`.
/// Generated from class `MR::CSharp::EqualityB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_EqualityB MR_CSharp_EqualityB;

// Return type is `void`.
/// Generated from class `MR::CSharp::EqualityC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_EqualityC MR_CSharp_EqualityC;

// The C# parameter type ends with `?`, and isn't a managed type.
/// Generated from class `MR::CSharp::EqualityD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_EqualityD MR_CSharp_EqualityD;

// The C# parameter type ends with `?`, and is a managed type.
/// Generated from class `MR::CSharp::EqualityE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_EqualityE MR_CSharp_EqualityE;

// The happy path, the operator is const.
/// Generated from class `MR::CSharp::RelationalA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalA MR_CSharp_RelationalA;

// The happy path, the operator is non-const.
/// Generated from class `MR::CSharp::RelationalB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalB MR_CSharp_RelationalB;

// The operators have mixed constness, which causes them to be demoted to functions.
/// Generated from class `MR::CSharp::RelationalC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalC MR_CSharp_RelationalC;

// The operators have operands of different types, causing them to be demoted to functions.
/// Generated from class `MR::CSharp::RelationalD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalD MR_CSharp_RelationalD;

// The operators have a weird return type.
/// Generated from class `MR::CSharp::RelationalE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalE MR_CSharp_RelationalE;

// The operators return void.
/// Generated from class `MR::CSharp::RelationalF`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_RelationalF MR_CSharp_RelationalF;

// The operator is injected correctly.
/// Generated from class `MR::CSharp::StaticOpsLhsA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsA MR_CSharp_StaticOpsLhsA;

// The operator injects but becomes a function, because it returns void.
/// Generated from class `MR::CSharp::StaticOpsLhsB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsB MR_CSharp_StaticOpsLhsB;

// The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
/// Generated from class `MR::CSharp::StaticOpsLhsC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsC MR_CSharp_StaticOpsLhsC;

// The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsD MR_CSharp_StaticOpsLhsD;

// The class isn't copyable, but the operator takes it by reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsE MR_CSharp_StaticOpsLhsE;

// The class isn't copyable, but the operator takes it by const reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsLhsF`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsF MR_CSharp_StaticOpsLhsF;

// The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
/// Generated from class `MR::CSharp::StaticOpsLhsG`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsG MR_CSharp_StaticOpsLhsG;

// The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
//   so the operator gets injected into the const half.
/// Generated from class `MR::CSharp::StaticOpsLhsH`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsLhsH MR_CSharp_StaticOpsLhsH;

// The operator is injected correctly.
/// Generated from class `MR::CSharp::StaticOpsRhsA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsA MR_CSharp_StaticOpsRhsA;

// The operator injects but becomes a function, because it returns void.
/// Generated from class `MR::CSharp::StaticOpsRhsB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsB MR_CSharp_StaticOpsRhsB;

// The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
/// Generated from class `MR::CSharp::StaticOpsRhsC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsC MR_CSharp_StaticOpsRhsC;

// The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsD MR_CSharp_StaticOpsRhsD;

// The class isn't copyable, but the operator takes it by reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsE MR_CSharp_StaticOpsRhsE;

// The class isn't copyable, but the operator takes it by const reference, so it injects fine.
/// Generated from class `MR::CSharp::StaticOpsRhsF`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsF MR_CSharp_StaticOpsRhsF;

// The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
/// Generated from class `MR::CSharp::StaticOpsRhsG`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsG MR_CSharp_StaticOpsRhsG;

// The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
//   so the operator gets injected into the const half.
/// Generated from class `MR::CSharp::StaticOpsRhsH`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy` (for this type it can modify the source object) (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsRhsH MR_CSharp_StaticOpsRhsH;

// Other injection cases:
typedef enum MR_CSharp_StaticOpsEnum
{
    MR_CSharp_StaticOpsEnum_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_CSharp_StaticOpsEnum;

/// Generated from class `MR::CSharp::StaticOpsMixedLhs`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsMixedLhs MR_CSharp_StaticOpsMixedLhs;

/// Generated from class `MR::CSharp::StaticOpsMixedRhs`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StaticOpsMixedRhs MR_CSharp_StaticOpsMixedRhs;

// Check how non-trivial class types are passed by value into operators.
/// Generated from class `MR::CSharp::NonTrivialClassOps`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NonTrivialClassOps MR_CSharp_NonTrivialClassOps;

// The class is non-copyable, so operators with by-value parameters fail to inject.
/// Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NonCopyableClassByValueOps MR_CSharp_NonCopyableClassByValueOps;

// Test the call operator, since it can have an unusual amount of arguments.
// Not testing `[]` here to be able to run the tests on older C++.
/// Generated from class `MR::CSharp::CallOp`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_CallOp MR_CSharp_CallOp;

/// Generated from class `MR::CSharp::TestOpsA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TestOpsA MR_CSharp_TestOpsA;

/// Generated from class `MR::CSharp::TestOpsB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TestOpsB MR_CSharp_TestOpsB;

/// Generated from class `MR::CSharp::TestOpsC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_TestOpsC MR_CSharp_TestOpsC;

// Subscription operator.
/// Generated from class `MR::CSharp::IndexerA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IndexerA MR_CSharp_IndexerA;

/// Generated from class `MR::CSharp::IndexerB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IndexerB MR_CSharp_IndexerB;

/// Generated from class `MR::CSharp::IndexerC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IndexerC MR_CSharp_IndexerC;

// Conversion operators. We preserve explicit-ness.
/// Generated from class `MR::CSharp::ConvOp`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvOp MR_CSharp_ConvOp;

// Conversion operators to references.
/// Generated from class `MR::CSharp::ConvOpToRef`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvOpToRef MR_CSharp_ConvOpToRef;

// Conversions to string-like types.
// Those create the additional `operator string` to convert directly to a C# string, and `override string ToString()` to override the method of the implicit base `object`.
/// Generated from class `MR::CSharp::StringConvString`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StringConvString MR_CSharp_StringConvString;

/// Generated from class `MR::CSharp::StringConvStringView`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StringConvStringView MR_CSharp_StringConvStringView;

/// Generated from class `MR::CSharp::StringConvFsPath`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_StringConvFsPath MR_CSharp_StringConvFsPath;

// Conversion constructors. Right now we only provide conversion operators for implicit ones,
//   because I have no idea when the explicit ones could be useful.
/// Generated from class `MR::CSharp::ConvCtor`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtor MR_CSharp_ConvCtor;

// Test that the default argument of the parameter of a converting constructor is stripped when rewriting it as a conversion operator.
/// Generated from class `MR::CSharp::ConvCtorWithDefArg`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtorWithDefArg MR_CSharp_ConvCtorWithDefArg;

// A non-trivial move-only class with a converting ctor.
// Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
/// Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtorNonTrivialRestricted MR_CSharp_ConvCtorNonTrivialRestricted;

// A converting ctor in an exposed struct.
/// Generated from class `MR::CSharp::ConvCtorExposed`.
typedef struct MR_CSharp_ConvCtorExposed
{
    int x;
} MR_CSharp_ConvCtorExposed;

// A sad class that's copyable but not movable.
// This can often happen if you have a user-provided destructor.
/// Generated from class `MR::CSharp::ConvCtorCopyButNoMove`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtorCopyButNoMove MR_CSharp_ConvCtorCopyButNoMove;

// Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
/// Generated from class `MR::CSharp::ConvCtorTrivial`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtorTrivial MR_CSharp_ConvCtorTrivial;

// Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
/// Generated from class `MR::CSharp::ConvCtorNonTrivial`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ConvCtorNonTrivial MR_CSharp_ConvCtorNonTrivial;

// Exposed structs:
/// Generated from class `MR::CSharp::ExposedLayout`.
typedef struct MR_CSharp_ExposedLayout
{
    unsigned short x;

    // This is field `y`!
    int y;
    double z;
    int arr[3];
    bool b;
    bool ba[4][5];
} MR_CSharp_ExposedLayout;

// This one is backed by a shared pointer.
/// Generated from class `MR::CSharp::ExposedLayoutSh`.
typedef struct MR_CSharp_ExposedLayoutSh
{
    unsigned short x;

    // This is field `y`!
    int y;
    double z;
    int arr[3];
    bool b;
    bool ba[4][5];
} MR_CSharp_ExposedLayoutSh;

/// Generated from class `MR::CSharp::ExposedLayoutB`.
typedef struct MR_CSharp_ExposedLayoutB
{
    int x;
} MR_CSharp_ExposedLayoutB;

// Test various array members.
/// Generated from class `MR::CSharp::ArrayMembers`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ArrayMembers MR_CSharp_ArrayMembers;

/// Generated from class `MR::CSharp::NameConflicts::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NameConflicts_A MR_CSharp_NameConflicts_A;

// Members having the same name as the exposed class, after rewriting.
/// Generated from class `MR::CSharp::NameConflicts`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_NameConflicts MR_CSharp_NameConflicts;

/// Generated from class `MR::CSharp::NameConflictsExposed::A`.
typedef struct MR_CSharp_NameConflictsExposed_A
{
    int x;
} MR_CSharp_NameConflictsExposed_A;

/// Generated from class `MR::CSharp::NameConflictsExposed`.
typedef struct MR_CSharp_NameConflictsExposed
{
    int name_conflicts_exposed;
    MR_CSharp_NameConflictsExposed_A a;
} MR_CSharp_NameConflictsExposed;

/// Generated from class `MR::CSharp::AmbiguousTemplates`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_AmbiguousTemplates MR_CSharp_AmbiguousTemplates;

// Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
/// Generated from class `MR::CSharp::ConstNonconstConflicts`.
typedef struct MR_CSharp_ConstNonconstConflicts
{
    int x;
} MR_CSharp_ConstNonconstConflicts;

// Class fields of pointer types:
/// Generated from class `MR::CSharp::ClassMemberPointersClass`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ClassMemberPointersClass MR_CSharp_ClassMemberPointersClass;

/// Generated from class `MR::CSharp::ClassMemberPointersExposed`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ClassMemberPointersExposed MR_CSharp_ClassMemberPointersExposed;

/// Generated from class `MR::CSharp::ClassMemberPointersUshort`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ClassMemberPointersUshort MR_CSharp_ClassMemberPointersUshort;

/// Generated from class `MR::CSharp::ClassMemberPointersBool`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_ClassMemberPointersBool MR_CSharp_ClassMemberPointersBool;

// Keep-alive sorcery:
/// Generated from class `MR::CSharp::LifetimesA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_LifetimesA MR_CSharp_LifetimesA;

/// Generated from class `MR::CSharp::LifetimesB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_LifetimesB MR_CSharp_LifetimesB;

/// Generated from class `MR::CSharp::LifetimesC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_LifetimesC MR_CSharp_LifetimesC;

/// Generated from class `MR::CSharp::LifetimesD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_LifetimesD MR_CSharp_LifetimesD;

// Const member functions.
/// Generated from class `MR::CSharp::IterableA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableA MR_CSharp_IterableA;

// Mutable member functions.
/// Generated from class `MR::CSharp::IterableB`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableB MR_CSharp_IterableB;

// Both const and mutable member functions.
/// Generated from class `MR::CSharp::IterableC`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableC MR_CSharp_IterableC;

// Const free functions.
/// Generated from class `MR::CSharp::IterableD`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableD MR_CSharp_IterableD;

// Mutable free functions.
/// Generated from class `MR::CSharp::IterableE`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableE MR_CSharp_IterableE;

// Both const and mutable free functions.
/// Generated from class `MR::CSharp::IterableF`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableF MR_CSharp_IterableF;

// Returning mutable class instances.
/// Generated from class `MR::CSharp::IterableG`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableG MR_CSharp_IterableG;

// Returning const class instances.
/// Generated from class `MR::CSharp::IterableH`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableH MR_CSharp_IterableH;

// Returning mutable exposed struct instances.
/// Generated from class `MR::CSharp::IterableI`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableI MR_CSharp_IterableI;

// Returning const exposed struct instances.
/// Generated from class `MR::CSharp::IterableJ`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CSharp_IterableJ MR_CSharp_IterableJ;

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

/// Generated from function `MR::CSharp::test_int_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `42`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API int *MR_CSharp_test_int_rref(int *a, int *b);

/// Generated from function `MR::CSharp::test_int_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `42`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const int *MR_CSharp_test_int_crref(const int *a, const int *b);

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

/// Generated from function `MR::CSharp::test_ushort_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(unsigned short&&)default_ushort`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API unsigned short *MR_CSharp_test_ushort_rref(unsigned short *a, unsigned short *b);

/// Generated from function `MR::CSharp::test_ushort_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(unsigned short&&)default_ushort`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const unsigned short *MR_CSharp_test_ushort_crref(const unsigned short *a, const unsigned short *b);

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

/// Generated from function `MR::CSharp::test_enum_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::E1&&)default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_CSharp_E1 *MR_CSharp_test_enum_rref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b);

/// Generated from function `MR::CSharp::test_enum_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::E1&&)default_e1`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_CSharp_E1 *MR_CSharp_test_enum_crref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b);

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

/// Generated from function `MR::CSharp::test_enum_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::E2&&)default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_enum_rref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_enum_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::E2&&)default_e2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_enum_crref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b);

/// Generated from function `MR::CSharp::test_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API MR_CSharp_E2 *MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(MR_CSharp_E2 *a, MR_CSharp_E2 *b, MR_CSharp_E2 *const *c);

/// Generated from function `MR::CSharp::test_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_e2`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E2 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b, const MR_CSharp_E2 *const *c);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_A *MR_CSharp_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_A_DestroyArray()`.
/// Use `MR_CSharp_A_OffsetMutablePtr()` and `MR_CSharp_A_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_A *MR_CSharp_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_A *MR_CSharp_A_OffsetPtr(const MR_CSharp_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_A *MR_CSharp_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_A *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_Destroy(const MR_CSharp_A *_this);

/// Destroys a heap-allocated array of `MR_CSharp_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_A_DestroyArray(const MR_CSharp_A *_this);

/// Generated from method `MR::CSharp::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_B *MR_CSharp_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_B_DestroyArray()`.
/// Use `MR_CSharp_B_OffsetMutablePtr()` and `MR_CSharp_B_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_B *MR_CSharp_B_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_B *MR_CSharp_B_OffsetPtr(const MR_CSharp_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_B *MR_CSharp_B_OffsetMutablePtr(MR_CSharp_B *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::B` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_B_UpcastTo_MR_CSharp_A(const MR_CSharp_B *object);

/// Upcasts an instance of `MR::CSharp::B` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(MR_CSharp_B *object);

/// Generated from constructor `MR::CSharp::B::B`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_C *MR_CSharp_C_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_C_DestroyArray()`.
/// Use `MR_CSharp_C_OffsetMutablePtr()` and `MR_CSharp_C_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_C *MR_CSharp_C_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_C *MR_CSharp_C_OffsetPtr(const MR_CSharp_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_C *MR_CSharp_C_OffsetMutablePtr(MR_CSharp_C *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::C` to its base class `MR::CSharp::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_A *MR_CSharp_C_UpcastTo_MR_CSharp_A(const MR_CSharp_C *object);

/// Upcasts an instance of `MR::CSharp::C` to its base class `MR::CSharp::A`.
MR_C_API MR_CSharp_A *MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(MR_CSharp_C *object);

/// Generated from constructor `MR::CSharp::C::C`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_C *MR_CSharp_C_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_C *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_C`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_C_Destroy(const MR_CSharp_C *_this);

/// Destroys a heap-allocated array of `MR_CSharp_C`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_C_DestroyArray(const MR_CSharp_C *_this);

/// Generated from method `MR::CSharp::C::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_D *MR_CSharp_D_OffsetPtr(const MR_CSharp_D *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_D_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_D *MR_CSharp_D_ConstructFromAnother(const MR_CSharp_D *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_D`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_D_Destroy(const MR_CSharp_D *_this);

/// Destroys a heap-allocated array of `MR_CSharp_D`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_D_DestroyArray(const MR_CSharp_D *_this);

/// Generated from method `MR::CSharp::D::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_E *MR_CSharp_E_OffsetPtr(const MR_CSharp_E *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_E_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_E *MR_CSharp_E_ConstructFromAnother(const MR_CSharp_E *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_E`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_E_Destroy(const MR_CSharp_E *_this);

/// Destroys a heap-allocated array of `MR_CSharp_E`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_E_DestroyArray(const MR_CSharp_E *_this);

/// Generated from method `MR::CSharp::E::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_E *MR_CSharp_E_AssignFromAnother(MR_CSharp_E *_this, const MR_CSharp_E *_other);

/// Generated from method `MR::CSharp::E::e1`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_E_e1(const MR_CSharp_E *_this);

/// Generated from method `MR::CSharp::E::e2`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_E_e2(MR_CSharp_E *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_F *MR_CSharp_F_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_F_DestroyArray()`.
/// Use `MR_CSharp_F_OffsetMutablePtr()` and `MR_CSharp_F_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_F *MR_CSharp_F_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_F *MR_CSharp_F_OffsetPtr(const MR_CSharp_F *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_F *MR_CSharp_F_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_F *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_F`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_F_Destroy(const MR_CSharp_F *_this);

/// Destroys a heap-allocated array of `MR_CSharp_F`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_F_DestroyArray(const MR_CSharp_F *_this);

/// Generated from method `MR::CSharp::F::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_G *MR_CSharp_G_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_G_DestroyArray()`.
/// Use `MR_CSharp_G_OffsetMutablePtr()` and `MR_CSharp_G_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_G *MR_CSharp_G_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_G *MR_CSharp_G_OffsetPtr(const MR_CSharp_G *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_G *MR_CSharp_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_G *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_G`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_G_Destroy(const MR_CSharp_G *_this);

/// Destroys a heap-allocated array of `MR_CSharp_G`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_G_DestroyArray(const MR_CSharp_G *_this);

/// Generated from method `MR::CSharp::G::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetPtr(const MR_CSharp_Trivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetMutablePtr(MR_CSharp_Trivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Trivial::Trivial`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_ConstructFromAnother(const MR_CSharp_Trivial *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Trivial_Destroy(const MR_CSharp_Trivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Trivial_DestroyArray(const MR_CSharp_Trivial *_this);

/// Generated from method `MR::CSharp::Trivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_Trivial *MR_CSharp_Trivial_AssignFromAnother(MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_TrivialDerived_DestroyArray()`.
/// Use `MR_CSharp_TrivialDerived_OffsetMutablePtr()` and `MR_CSharp_TrivialDerived_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetPtr(const MR_CSharp_TrivialDerived *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetMutablePtr(MR_CSharp_TrivialDerived *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_ConstructFromAnother(const MR_CSharp_TrivialDerived *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_TrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TrivialDerived_Destroy(const MR_CSharp_TrivialDerived *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TrivialDerived_DestroyArray(const MR_CSharp_TrivialDerived *_this);

/// Generated from method `MR::CSharp::TrivialDerived::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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

/// Generated from function `MR::CSharp::test_class_trivial_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::Trivial&&)default_trivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_CSharp_Trivial *MR_CSharp_test_class_trivial_rref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_class_trivial_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::Trivial&&)default_trivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_crref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b);

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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetPtr(const MR_CSharp_NonTrivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetMutablePtr(MR_CSharp_NonTrivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivial_Destroy(const MR_CSharp_NonTrivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivial_DestroyArray(const MR_CSharp_NonTrivial *_this);

/// Generated from method `MR::CSharp::NonTrivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_AssignFromAnother(MR_CSharp_NonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NonTrivialDerived_DestroyArray()`.
/// Use `MR_CSharp_NonTrivialDerived_OffsetMutablePtr()` and `MR_CSharp_NonTrivialDerived_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetPtr(const MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetMutablePtr(MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialDerived_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonTrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialDerived_Destroy(const MR_CSharp_NonTrivialDerived *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonTrivialDerived`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialDerived_DestroyArray(const MR_CSharp_NonTrivialDerived *_this);

/// Generated from method `MR::CSharp::NonTrivialDerived::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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

/// Generated from function `MR::CSharp::test_class_nontrivial_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::NonTrivial&&)default_nontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_rref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_class_nontrivial_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::NonTrivial&&)default_nontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_crref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b);

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
/// Parameter `c` has a default argument: `(void*)42`, pass a null pointer to use it.
MR_C_API void *MR_CSharp_test_void_ptr(void *a, void *b, void *const *c);

/// Generated from function `MR::CSharp::test_void_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `(const void*)42`, pass a null pointer to use it.
MR_C_API const void *MR_CSharp_test_void_cptr(const void *a, const void *b, const void *const *c);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SA_DestroyArray()`.
/// Use `MR_CSharp_SA_OffsetMutablePtr()` and `MR_CSharp_SA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SA *MR_CSharp_SA_OffsetPtr(const MR_CSharp_SA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_ConstructFromAnother(const MR_CSharp_SA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SA_Destroy(const MR_CSharp_SA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SA_DestroyArray(const MR_CSharp_SA *_this);

/// Generated from method `MR::CSharp::SA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SA *MR_CSharp_SA_AssignFromAnother(MR_CSharp_SA *_this, const MR_CSharp_SA *_other);

// Make this non-trivial for a change.
/// Returns a pointer to a member variable of class `MR::CSharp::SB` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_SB_Get_s(const MR_CSharp_SB *_this);

// Make this non-trivial for a change.
/// Modifies a member variable of class `MR::CSharp::SB` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_SB_Set_s(MR_CSharp_SB *_this, const char *value, const char *value_end);

// Make this non-trivial for a change.
/// Returns a mutable pointer to a member variable of class `MR::CSharp::SB` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_SB_GetMutable_s(MR_CSharp_SB *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SB_DestroyArray()`.
/// Use `MR_CSharp_SB_OffsetMutablePtr()` and `MR_CSharp_SB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::SB` elementwise.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
/// The reference to the parameter `s` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SB_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_ConstructFrom(const char *s, const char *s_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SB *MR_CSharp_SB_OffsetPtr(const MR_CSharp_SB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_OffsetMutablePtr(MR_CSharp_SB *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::SB` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SC *MR_CSharp_SB_StaticDowncastTo_MR_CSharp_SC(const MR_CSharp_SB *object);

/// Downcasts an instance of `MR::CSharp::SB` to a derived class `MR::CSharp::SC`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_SC *MR_CSharp_SB_MutableStaticDowncastTo_MR_CSharp_SC(MR_CSharp_SB *object);

/// Generated from constructor `MR::CSharp::SB::SB`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SB_Destroy(const MR_CSharp_SB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SB_DestroyArray(const MR_CSharp_SB *_this);

/// Generated from method `MR::CSharp::SB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SB *MR_CSharp_SB_AssignFromAnother(MR_CSharp_SB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other);

// Make this non-trivial for a change.
/// Returns a pointer to a member variable of class `MR::CSharp::SC` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_SC_Get_s(const MR_CSharp_SC *_this);

// Make this non-trivial for a change.
/// Modifies a member variable of class `MR::CSharp::SC` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_SC_Set_s(MR_CSharp_SC *_this, const char *value, const char *value_end);

// Make this non-trivial for a change.
/// Returns a mutable pointer to a member variable of class `MR::CSharp::SC` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_SC_GetMutable_s(MR_CSharp_SC *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SC_DestroyArray()`.
/// Use `MR_CSharp_SC_OffsetMutablePtr()` and `MR_CSharp_SC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SC *MR_CSharp_SC_OffsetPtr(const MR_CSharp_SC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
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
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SC_Destroy(const MR_CSharp_SC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SC_DestroyArray(const MR_CSharp_SC *_this);

/// Generated from method `MR::CSharp::SC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SC *MR_CSharp_SC_AssignFromAnother(MR_CSharp_SC *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SD *MR_CSharp_SD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SD_DestroyArray()`.
/// Use `MR_CSharp_SD_OffsetMutablePtr()` and `MR_CSharp_SD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SD *MR_CSharp_SD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SD *MR_CSharp_SD_OffsetPtr(const MR_CSharp_SD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_SD *MR_CSharp_SD_OffsetMutablePtr(MR_CSharp_SD *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SF *MR_CSharp_SD_StaticDowncastTo_MR_CSharp_SF(const MR_CSharp_SD *object);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_SF *MR_CSharp_SD_MutableStaticDowncastTo_MR_CSharp_SF(MR_CSharp_SD *object);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SF *MR_CSharp_SD_DynamicDowncastTo_MR_CSharp_SF(const MR_CSharp_SD *object);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MR_C_API MR_CSharp_SF *MR_CSharp_SD_MutableDynamicDowncastTo_MR_CSharp_SF(MR_CSharp_SD *object);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_SF *MR_CSharp_SD_DynamicDowncastToOrFail_MR_CSharp_SF(const MR_CSharp_SD *object);

/// Downcasts an instance of `MR::CSharp::SD` to a derived class `MR::CSharp::SF`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_SF *MR_CSharp_SD_MutableDynamicDowncastToOrFail_MR_CSharp_SF(MR_CSharp_SD *object);

/// Generated from constructor `MR::CSharp::SD::SD`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SD *MR_CSharp_SD_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SD_Destroy(const MR_CSharp_SD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SD_DestroyArray(const MR_CSharp_SD *_this);

/// Generated from method `MR::CSharp::SD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SD *MR_CSharp_SD_AssignFromAnother(MR_CSharp_SD *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other);

// Make this non-trivial for a change.
/// Returns a pointer to a member variable of class `MR::CSharp::SE` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_SE_Get_s(const MR_CSharp_SE *_this);

// Make this non-trivial for a change.
/// Modifies a member variable of class `MR::CSharp::SE` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_SE_Set_s(MR_CSharp_SE *_this, const char *value, const char *value_end);

// Make this non-trivial for a change.
/// Returns a mutable pointer to a member variable of class `MR::CSharp::SE` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_SE_GetMutable_s(MR_CSharp_SE *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SE_DestroyArray()`.
/// Use `MR_CSharp_SE_OffsetMutablePtr()` and `MR_CSharp_SE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::SE` elementwise.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
/// The reference to the parameter `s` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SE_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_ConstructFrom(const char *s, const char *s_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SE *MR_CSharp_SE_OffsetPtr(const MR_CSharp_SE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_OffsetMutablePtr(MR_CSharp_SE *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::CSharp::SE` to a derived class `MR::CSharp::SF`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SF *MR_CSharp_SE_StaticDowncastTo_MR_CSharp_SF(const MR_CSharp_SE *object);

/// Downcasts an instance of `MR::CSharp::SE` to a derived class `MR::CSharp::SF`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CSharp_SF *MR_CSharp_SE_MutableStaticDowncastTo_MR_CSharp_SF(MR_CSharp_SE *object);

/// Generated from constructor `MR::CSharp::SE::SE`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SE_Destroy(const MR_CSharp_SE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SE_DestroyArray(const MR_CSharp_SE *_this);

/// Generated from method `MR::CSharp::SE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SE *MR_CSharp_SE_AssignFromAnother(MR_CSharp_SE *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other);

// Make this non-trivial for a change.
/// Returns a pointer to a member variable of class `MR::CSharp::SF` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_SF_Get_s(const MR_CSharp_SF *_this);

// Make this non-trivial for a change.
/// Modifies a member variable of class `MR::CSharp::SF` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_SF_Set_s(MR_CSharp_SF *_this, const char *value, const char *value_end);

// Make this non-trivial for a change.
/// Returns a mutable pointer to a member variable of class `MR::CSharp::SF` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_SF_GetMutable_s(MR_CSharp_SF *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SF *MR_CSharp_SF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_SF_DestroyArray()`.
/// Use `MR_CSharp_SF_OffsetMutablePtr()` and `MR_CSharp_SF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_SF *MR_CSharp_SF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_SF *MR_CSharp_SF_OffsetPtr(const MR_CSharp_SF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_SF *MR_CSharp_SF_OffsetMutablePtr(MR_CSharp_SF *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CSharp::SF` to its base class `MR::CSharp::SD`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SD *MR_CSharp_SF_UpcastTo_MR_CSharp_SD(const MR_CSharp_SF *object);

/// Upcasts an instance of `MR::CSharp::SF` to its base class `MR::CSharp::SD`.
MR_C_API MR_CSharp_SD *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD(MR_CSharp_SF *object);

/// Upcasts an instance of `MR::CSharp::SF` to its base class `MR::CSharp::SE`.
/// This version is acting on mutable pointers.
MR_C_API const MR_CSharp_SE *MR_CSharp_SF_UpcastTo_MR_CSharp_SE(const MR_CSharp_SF *object);

/// Upcasts an instance of `MR::CSharp::SF` to its base class `MR::CSharp::SE`.
MR_C_API MR_CSharp_SE *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE(MR_CSharp_SF *object);

/// Generated from constructor `MR::CSharp::SF::SF`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_SF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_SF *MR_CSharp_SF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_SF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SF_Destroy(const MR_CSharp_SF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_SF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_SF_DestroyArray(const MR_CSharp_SF *_this);

/// Generated from method `MR::CSharp::SF::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_SF *MR_CSharp_SF_AssignFromAnother(MR_CSharp_SF *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other);

/// Generated from function `MR::CSharp::mark_se_as_shared`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_SE_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_SE *MR_CSharp_mark_se_as_shared(void);

// Poking a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
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

/// Generated from function `MR::CSharp::test_shptr_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(std::shared_ptr<MR::CSharp::SA>&&)default_shptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_rref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shptr_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(std::shared_ptr<MR::CSharp::SA>&&)default_shptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_crref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b);

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

/// Generated from function `MR::CSharp::test_shcptr_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(std::shared_ptr<const MR::CSharp::SA>&&)default_shcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_rref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_shcptr_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(std::shared_ptr<const MR::CSharp::SA>&&)default_shcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_crref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b);

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

/// Generated from function `MR::CSharp::test_string_rref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `(std::string&&)default_string`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_C_std_string *MR_CSharp_test_string_rref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_string_crref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `(std::string&&)default_string`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_string *MR_CSharp_test_string_crref(const char *a, const char *a_end, const char *b, const char *b_end);

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

/// Generated from function `MR::CSharp::test_stringview_rref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `(std::string_view&&)default_stringview`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_C_std_string_view *MR_CSharp_test_stringview_rref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_stringview_crref`.
/// Parameter `a` can not be null.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// If `b_end` is null, then `b` is assumed to be null-terminated.
/// Non-null `b_end` requires a non-null `b`.
/// Parameter `b` has a default argument: `(std::string_view&&)default_stringview`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_string_view *MR_CSharp_test_stringview_crref(const char *a, const char *a_end, const char *b, const char *b_end);

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

/// Generated from function `MR::CSharp::test_fspath_rref`.
/// Parameter `a` is a UTF-8 encoded filesystem path.
/// Parameter `b` is a UTF-8 encoded filesystem path.
/// Parameter `b` has a default argument: `(std::filesystem::path&&)default_fspath`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_C_std_filesystem_path *MR_CSharp_test_fspath_rref(const char *a, const char *a_end, const char *b, const char *b_end);

/// Generated from function `MR::CSharp::test_fspath_crref`.
/// Parameter `a` is a UTF-8 encoded filesystem path.
/// Parameter `b` is a UTF-8 encoded filesystem path.
/// Parameter `b` has a default argument: `(std::filesystem::path&&)default_fspath`, pass a null pointer to both it and `b_end` to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_filesystem_path *MR_CSharp_test_fspath_crref(const char *a, const char *a_end, const char *b, const char *b_end);

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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_Outer *MR_CSharp_Outer_OffsetPtr(const MR_CSharp_Outer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_OffsetMutablePtr(MR_CSharp_Outer *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Outer::Outer`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer *MR_CSharp_Outer_ConstructFromAnother(const MR_CSharp_Outer *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Outer`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Destroy(const MR_CSharp_Outer *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Outer`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_DestroyArray(const MR_CSharp_Outer *_this);

/// Generated from method `MR::CSharp::Outer::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
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
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetPtr(const MR_CSharp_Outer_Inner *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetMutablePtr(MR_CSharp_Outer_Inner *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_Outer_Inner_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_ConstructFromAnother(const MR_CSharp_Outer_Inner *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_Outer_Inner`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Inner_Destroy(const MR_CSharp_Outer_Inner *_this);

/// Destroys a heap-allocated array of `MR_CSharp_Outer_Inner`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_Outer_Inner_DestroyArray(const MR_CSharp_Outer_Inner *_this);

/// Generated from method `MR::CSharp::Outer::Inner::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_AssignFromAnother(MR_CSharp_Outer_Inner *_this, const MR_CSharp_Outer_Inner *_other);

/// Generated from method `MR::CSharp::Outer::Inner::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_Outer_Inner_bar(MR_CSharp_Outer_Inner *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_static_i(void);

/// Modifies a member variable of class `MR::CSharp::TestFields` named `static_i`.
/// When this function is called, this object will drop object references it had previously in `static_i`.
MR_C_API void MR_CSharp_TestFields_Set_static_i(int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_TestFields_GetMutable_static_i(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_static_const_i(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i_ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_TestFields_Get_static_i_ref(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i_ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_static_const_i_ref(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_static_s(void);

/// Modifies a member variable of class `MR::CSharp::TestFields` named `static_s`.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `static_s`.
/// When this function is called, this object will drop object references it had previously in `static_s`.
MR_C_API void MR_CSharp_TestFields_Set_static_s(const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_TestFields_GetMutable_static_s(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_static_const_s(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s_ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_TestFields_Get_static_s_ref(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s_ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_static_const_s_ref(void);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_i(const MR_CSharp_TestFields *_this);

/// Modifies a member variable of class `MR::CSharp::TestFields` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `i`.
MR_C_API void MR_CSharp_TestFields_Set_i(MR_CSharp_TestFields *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_TestFields_GetMutable_i(MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_const_i(const MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i_ref`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_TestFields_Get_i_ref(const MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i_ref`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_TestFields_Get_const_i_ref(const MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_s(const MR_CSharp_TestFields *_this);

/// Modifies a member variable of class `MR::CSharp::TestFields` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_TestFields_Set_s(MR_CSharp_TestFields *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_TestFields_GetMutable_s(MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_const_s(const MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s_ref`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_TestFields_Get_s_ref(const MR_CSharp_TestFields *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s_ref`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_TestFields_Get_const_s_ref(const MR_CSharp_TestFields *_this);

/// Generated from constructor `MR::CSharp::TestFields::TestFields`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestFields_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestFields *MR_CSharp_TestFields_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestFields *_other);

/// Constructs `MR::CSharp::TestFields` elementwise.
/// Parameter `i_ref` can not be null. It is a single object.
/// The reference to the parameter `i_ref` might be preserved in the constructed object.
/// Parameter `const_i_ref` can not be null. It is a single object.
/// The reference to the parameter `const_i_ref` might be preserved in the constructed object.
/// Parameter `s` can not be null.
/// If `s_end` is null, then `s` is assumed to be null-terminated.
/// The reference to the parameter `s` might be preserved in the constructed object.
/// Parameter `const_s` can not be null.
/// If `const_s_end` is null, then `const_s` is assumed to be null-terminated.
/// The reference to the parameter `const_s` might be preserved in the constructed object.
/// Parameter `s_ref` can not be null. It is a single object.
/// The reference to the parameter `s_ref` might be preserved in the constructed object.
/// Parameter `const_s_ref` can not be null.
/// If `const_s_ref_end` is null, then `const_s_ref` is assumed to be null-terminated.
/// The reference to the parameter `const_s_ref` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestFields_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_TestFields *MR_CSharp_TestFields_ConstructFrom(int i, int const_i, int *i_ref, const int *const_i_ref, const char *s, const char *s_end, const char *const_s, const char *const_s_end, MR_C_std_string *s_ref, const char *const_s_ref, const char *const_s_ref_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetPtr(const MR_CSharp_TestFields *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetMutablePtr(MR_CSharp_TestFields *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_TestFields`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestFields_Destroy(const MR_CSharp_TestFields *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TestFields`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestFields_DestroyArray(const MR_CSharp_TestFields *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestConstness_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_TestConstness_DestroyArray()`.
/// Use `MR_CSharp_TestConstness_OffsetMutablePtr()` and `MR_CSharp_TestConstness_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetPtr(const MR_CSharp_TestConstness *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetMutablePtr(MR_CSharp_TestConstness *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::TestConstness::TestConstness`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestConstness_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestConstness *MR_CSharp_TestConstness_ConstructFromAnother(const MR_CSharp_TestConstness *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_TestConstness`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestConstness_Destroy(const MR_CSharp_TestConstness *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TestConstness`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestConstness_DestroyArray(const MR_CSharp_TestConstness *_this);

/// Generated from method `MR::CSharp::TestConstness::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_TestConstness *MR_CSharp_TestConstness_AssignFromAnother(MR_CSharp_TestConstness *_this, const MR_CSharp_TestConstness *_other);

/// Generated from method `MR::CSharp::TestConstness::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestConstness_foo(MR_CSharp_TestConstness *_this);

/// Generated from method `MR::CSharp::TestConstness::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestConstness_foo_const(const MR_CSharp_TestConstness *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrA_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrA_OffsetMutablePtr()` and `MR_CSharp_IncrDecrA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetPtr(const MR_CSharp_IncrDecrA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetMutablePtr(MR_CSharp_IncrDecrA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrA::IncrDecrA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_ConstructFromAnother(const MR_CSharp_IncrDecrA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrA_Destroy(const MR_CSharp_IncrDecrA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrA_DestroyArray(const MR_CSharp_IncrDecrA *_this);

/// Generated from method `MR::CSharp::IncrDecrA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_AssignFromAnother(MR_CSharp_IncrDecrA *_this, const MR_CSharp_IncrDecrA *_other);

/// Generated from method `MR::CSharp::IncrDecrA::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrA *MR_C_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this);

/// Generated from method `MR::CSharp::IncrDecrA::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrA *MR_C_post_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this);

/// Generated from method `MR::CSharp::IncrDecrA::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrA *MR_C_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this);

/// Generated from method `MR::CSharp::IncrDecrA::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrA *MR_C_post_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrB_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrB_OffsetMutablePtr()` and `MR_CSharp_IncrDecrB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetPtr(const MR_CSharp_IncrDecrB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetMutablePtr(MR_CSharp_IncrDecrB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrB::IncrDecrB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_ConstructFromAnother(const MR_CSharp_IncrDecrB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrB_Destroy(const MR_CSharp_IncrDecrB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrB_DestroyArray(const MR_CSharp_IncrDecrB *_this);

/// Generated from method `MR::CSharp::IncrDecrB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_AssignFromAnother(MR_CSharp_IncrDecrB *_this, const MR_CSharp_IncrDecrB *_other);

/// Generated from method `MR::CSharp::IncrDecrB::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrB *MR_C_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this);

/// Generated from method `MR::CSharp::IncrDecrB::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrB *MR_C_post_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this);

/// Generated from method `MR::CSharp::IncrDecrB::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrB *MR_C_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this);

/// Generated from method `MR::CSharp::IncrDecrB::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrB *MR_C_post_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrC_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrC_OffsetMutablePtr()` and `MR_CSharp_IncrDecrC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetPtr(const MR_CSharp_IncrDecrC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetMutablePtr(MR_CSharp_IncrDecrC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_ConstructFromAnother(const MR_CSharp_IncrDecrC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrC_Destroy(const MR_CSharp_IncrDecrC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrC_DestroyArray(const MR_CSharp_IncrDecrC *_this);

/// Generated from method `MR::CSharp::IncrDecrC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_AssignFromAnother(MR_CSharp_IncrDecrC *_this, const MR_CSharp_IncrDecrC *_other);

/// Generated from method `MR::CSharp::IncrDecrC::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrC *MR_C_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this);

/// Generated from method `MR::CSharp::IncrDecrC::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrC *MR_C_post_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this);

/// Generated from method `MR::CSharp::IncrDecrC::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrC *MR_C_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this);

/// Generated from method `MR::CSharp::IncrDecrC::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrC *MR_C_post_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrD_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrD_OffsetMutablePtr()` and `MR_CSharp_IncrDecrD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetPtr(const MR_CSharp_IncrDecrD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetMutablePtr(MR_CSharp_IncrDecrD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrD::IncrDecrD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_ConstructFromAnother(const MR_CSharp_IncrDecrD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrD_Destroy(const MR_CSharp_IncrDecrD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrD_DestroyArray(const MR_CSharp_IncrDecrD *_this);

/// Generated from method `MR::CSharp::IncrDecrD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_AssignFromAnother(MR_CSharp_IncrDecrD *_this, const MR_CSharp_IncrDecrD *_other);

/// Generated from method `MR::CSharp::IncrDecrD::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrD *MR_C_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this);

/// Generated from method `MR::CSharp::IncrDecrD::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrD *MR_C_post_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this);

/// Generated from method `MR::CSharp::IncrDecrD::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrD *MR_C_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this);

/// Generated from method `MR::CSharp::IncrDecrD::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrD *MR_C_post_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrE_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrE_OffsetMutablePtr()` and `MR_CSharp_IncrDecrE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetPtr(const MR_CSharp_IncrDecrE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetMutablePtr(MR_CSharp_IncrDecrE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrE::IncrDecrE`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrE_Destroy(const MR_CSharp_IncrDecrE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrE_DestroyArray(const MR_CSharp_IncrDecrE *_this);

/// Generated from method `MR::CSharp::IncrDecrE::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrE *MR_C_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this);

/// Generated from method `MR::CSharp::IncrDecrE::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrE *MR_C_post_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this);

/// Generated from method `MR::CSharp::IncrDecrE::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrE *MR_C_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this);

/// Generated from method `MR::CSharp::IncrDecrE::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrE *MR_C_post_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrF_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrF_OffsetMutablePtr()` and `MR_CSharp_IncrDecrF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetPtr(const MR_CSharp_IncrDecrF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetMutablePtr(MR_CSharp_IncrDecrF *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrF_Destroy(const MR_CSharp_IncrDecrF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrF_DestroyArray(const MR_CSharp_IncrDecrF *_this);

/// Generated from method `MR::CSharp::IncrDecrF::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrF *MR_C_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this);

/// Generated from method `MR::CSharp::IncrDecrF::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrF *MR_C_post_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this);

/// Generated from method `MR::CSharp::IncrDecrF::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrF *MR_C_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this);

/// Generated from method `MR::CSharp::IncrDecrF::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrF *MR_C_post_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrG_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrG_OffsetMutablePtr()` and `MR_CSharp_IncrDecrG_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetPtr(const MR_CSharp_IncrDecrG *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetMutablePtr(MR_CSharp_IncrDecrG *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrG::IncrDecrG`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_ConstructFromAnother(const MR_CSharp_IncrDecrG *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrG_Destroy(const MR_CSharp_IncrDecrG *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrG_DestroyArray(const MR_CSharp_IncrDecrG *_this);

/// Generated from method `MR::CSharp::IncrDecrG::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrG *MR_C_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this);

/// Generated from method `MR::CSharp::IncrDecrG::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrG *MR_C_post_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this);

/// Generated from method `MR::CSharp::IncrDecrG::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IncrDecrG *MR_C_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this);

/// Generated from method `MR::CSharp::IncrDecrG::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrG *MR_C_post_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrH_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrH_OffsetMutablePtr()` and `MR_CSharp_IncrDecrH_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetPtr(const MR_CSharp_IncrDecrH *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetMutablePtr(MR_CSharp_IncrDecrH *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrH::IncrDecrH`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_ConstructFromAnother(const MR_CSharp_IncrDecrH *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrH_Destroy(const MR_CSharp_IncrDecrH *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrH_DestroyArray(const MR_CSharp_IncrDecrH *_this);

/// Generated from method `MR::CSharp::IncrDecrH::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrH *MR_C_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this);

/// Generated from method `MR::CSharp::IncrDecrH::operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrH *MR_C_post_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this);

/// Generated from method `MR::CSharp::IncrDecrH::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IncrDecrH *MR_C_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this);

/// Generated from method `MR::CSharp::IncrDecrH::operator--`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrH *MR_C_post_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrI_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IncrDecrI_DestroyArray()`.
/// Use `MR_CSharp_IncrDecrI_OffsetMutablePtr()` and `MR_CSharp_IncrDecrI_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetPtr(const MR_CSharp_IncrDecrI *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetMutablePtr(MR_CSharp_IncrDecrI *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IncrDecrI::IncrDecrI`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IncrDecrI_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_ConstructFromAnother(const MR_CSharp_IncrDecrI *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IncrDecrI`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrI_Destroy(const MR_CSharp_IncrDecrI *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IncrDecrI`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IncrDecrI_DestroyArray(const MR_CSharp_IncrDecrI *_this);

/// Generated from method `MR::CSharp::IncrDecrI::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_AssignFromAnother(MR_CSharp_IncrDecrI *_this, const MR_CSharp_IncrDecrI *_other);

/// Generated from function `MR::CSharp::operator++`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1);

/// Generated from function `MR::CSharp::operator++`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_post_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1);

/// Generated from function `MR::CSharp::operator--`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1);

/// Generated from function `MR::CSharp::operator--`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_post_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_EqualityA_DestroyArray()`.
/// Use `MR_CSharp_EqualityA_OffsetMutablePtr()` and `MR_CSharp_EqualityA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetPtr(const MR_CSharp_EqualityA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetMutablePtr(MR_CSharp_EqualityA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::EqualityA::EqualityA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityA *MR_CSharp_EqualityA_ConstructFromAnother(const MR_CSharp_EqualityA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_EqualityA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityA_Destroy(const MR_CSharp_EqualityA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_EqualityA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityA_DestroyArray(const MR_CSharp_EqualityA *_this);

/// Generated from method `MR::CSharp::EqualityA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_EqualityA *MR_CSharp_EqualityA_AssignFromAnother(MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_other);

/// Generated from method `MR::CSharp::EqualityA::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1);

/// Generated from method `MR::CSharp::EqualityA::operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_not_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1);

/// Generated from method `MR::CSharp::EqualityA::operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_EqualityA(const MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_EqualityB_DestroyArray()`.
/// Use `MR_CSharp_EqualityB_OffsetMutablePtr()` and `MR_CSharp_EqualityB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetPtr(const MR_CSharp_EqualityB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetMutablePtr(MR_CSharp_EqualityB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityB *MR_CSharp_EqualityB_ConstructFromAnother(const MR_CSharp_EqualityB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_EqualityB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityB_Destroy(const MR_CSharp_EqualityB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_EqualityB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityB_DestroyArray(const MR_CSharp_EqualityB *_this);

/// Generated from method `MR::CSharp::EqualityB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_EqualityB *MR_CSharp_EqualityB_AssignFromAnother(MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_other);

/// Generated from method `MR::CSharp::EqualityB::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1);

/// Generated from method `MR::CSharp::EqualityB::operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_not_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1);

/// Generated from method `MR::CSharp::EqualityB::operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_equal_MR_CSharp_EqualityB(const MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_EqualityC_DestroyArray()`.
/// Use `MR_CSharp_EqualityC_OffsetMutablePtr()` and `MR_CSharp_EqualityC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetPtr(const MR_CSharp_EqualityC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetMutablePtr(MR_CSharp_EqualityC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::EqualityC::EqualityC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityC *MR_CSharp_EqualityC_ConstructFromAnother(const MR_CSharp_EqualityC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_EqualityC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityC_Destroy(const MR_CSharp_EqualityC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_EqualityC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityC_DestroyArray(const MR_CSharp_EqualityC *_this);

/// Generated from method `MR::CSharp::EqualityC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_EqualityC *MR_CSharp_EqualityC_AssignFromAnother(MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_other);

/// Generated from method `MR::CSharp::EqualityC::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1);

/// Generated from method `MR::CSharp::EqualityC::operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_not_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1);

/// Generated from method `MR::CSharp::EqualityC::operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_equal_MR_CSharp_EqualityC(const MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_EqualityD_DestroyArray()`.
/// Use `MR_CSharp_EqualityD_OffsetMutablePtr()` and `MR_CSharp_EqualityD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetPtr(const MR_CSharp_EqualityD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetMutablePtr(MR_CSharp_EqualityD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::EqualityD::EqualityD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityD *MR_CSharp_EqualityD_ConstructFromAnother(const MR_CSharp_EqualityD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_EqualityD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityD_Destroy(const MR_CSharp_EqualityD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_EqualityD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityD_DestroyArray(const MR_CSharp_EqualityD *_this);

/// Generated from method `MR::CSharp::EqualityD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_EqualityD *MR_CSharp_EqualityD_AssignFromAnother(MR_CSharp_EqualityD *_this, const MR_CSharp_EqualityD *_other);

/// Generated from method `MR::CSharp::EqualityD::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(MR_CSharp_EqualityD *_this, const int *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_EqualityE_DestroyArray()`.
/// Use `MR_CSharp_EqualityE_OffsetMutablePtr()` and `MR_CSharp_EqualityE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetPtr(const MR_CSharp_EqualityE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetMutablePtr(MR_CSharp_EqualityE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::EqualityE::EqualityE`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_EqualityE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_EqualityE *MR_CSharp_EqualityE_ConstructFromAnother(const MR_CSharp_EqualityE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_EqualityE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityE_Destroy(const MR_CSharp_EqualityE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_EqualityE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_EqualityE_DestroyArray(const MR_CSharp_EqualityE *_this);

/// Generated from method `MR::CSharp::EqualityE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_EqualityE *MR_CSharp_EqualityE_AssignFromAnother(MR_CSharp_EqualityE *_this, const MR_CSharp_EqualityE *_other);

/// Generated from method `MR::CSharp::EqualityE::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(MR_CSharp_EqualityE *_this, MR_CSharp_EqualityD *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalA_DestroyArray()`.
/// Use `MR_CSharp_RelationalA_OffsetMutablePtr()` and `MR_CSharp_RelationalA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetPtr(const MR_CSharp_RelationalA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetMutablePtr(MR_CSharp_RelationalA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalA::RelationalA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalA *MR_CSharp_RelationalA_ConstructFromAnother(const MR_CSharp_RelationalA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalA_Destroy(const MR_CSharp_RelationalA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalA_DestroyArray(const MR_CSharp_RelationalA *_this);

/// Generated from method `MR::CSharp::RelationalA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalA *MR_CSharp_RelationalA_AssignFromAnother(MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_other);

/// Generated from method `MR::CSharp::RelationalA::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1);

/// Generated from method `MR::CSharp::RelationalA::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1);

/// Generated from method `MR::CSharp::RelationalA::operator<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1);

/// Generated from method `MR::CSharp::RelationalA::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalB_DestroyArray()`.
/// Use `MR_CSharp_RelationalB_OffsetMutablePtr()` and `MR_CSharp_RelationalB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetPtr(const MR_CSharp_RelationalB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetMutablePtr(MR_CSharp_RelationalB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalB::RelationalB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalB *MR_CSharp_RelationalB_ConstructFromAnother(const MR_CSharp_RelationalB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalB_Destroy(const MR_CSharp_RelationalB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalB_DestroyArray(const MR_CSharp_RelationalB *_this);

/// Generated from method `MR::CSharp::RelationalB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalB *MR_CSharp_RelationalB_AssignFromAnother(MR_CSharp_RelationalB *_this, const MR_CSharp_RelationalB *_other);

/// Generated from method `MR::CSharp::RelationalB::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1);

/// Generated from method `MR::CSharp::RelationalB::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1);

/// Generated from method `MR::CSharp::RelationalB::operator<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1);

/// Generated from method `MR::CSharp::RelationalB::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalC_DestroyArray()`.
/// Use `MR_CSharp_RelationalC_OffsetMutablePtr()` and `MR_CSharp_RelationalC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetPtr(const MR_CSharp_RelationalC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetMutablePtr(MR_CSharp_RelationalC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalC::RelationalC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalC *MR_CSharp_RelationalC_ConstructFromAnother(const MR_CSharp_RelationalC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalC_Destroy(const MR_CSharp_RelationalC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalC_DestroyArray(const MR_CSharp_RelationalC *_this);

/// Generated from method `MR::CSharp::RelationalC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalC *MR_CSharp_RelationalC_AssignFromAnother(MR_CSharp_RelationalC *_this, const MR_CSharp_RelationalC *_other);

/// Generated from method `MR::CSharp::RelationalC::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalC::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1);

// bool operator<=(RelationalC &) const {return false;} // Skip one operator to observe the function missing.
/// Generated from method `MR::CSharp::RelationalC::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_equal_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalD_DestroyArray()`.
/// Use `MR_CSharp_RelationalD_OffsetMutablePtr()` and `MR_CSharp_RelationalD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetPtr(const MR_CSharp_RelationalD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetMutablePtr(MR_CSharp_RelationalD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalD *MR_CSharp_RelationalD_ConstructFromAnother(const MR_CSharp_RelationalD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalD_Destroy(const MR_CSharp_RelationalD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalD_DestroyArray(const MR_CSharp_RelationalD *_this);

/// Generated from method `MR::CSharp::RelationalD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalD *MR_CSharp_RelationalD_AssignFromAnother(MR_CSharp_RelationalD *_this, const MR_CSharp_RelationalD *_other);

/// Generated from method `MR::CSharp::RelationalD::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalD::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalD::operator<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalD::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalE_DestroyArray()`.
/// Use `MR_CSharp_RelationalE_OffsetMutablePtr()` and `MR_CSharp_RelationalE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetPtr(const MR_CSharp_RelationalE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetMutablePtr(MR_CSharp_RelationalE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalE::RelationalE`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalE *MR_CSharp_RelationalE_ConstructFromAnother(const MR_CSharp_RelationalE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalE_Destroy(const MR_CSharp_RelationalE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalE_DestroyArray(const MR_CSharp_RelationalE *_this);

/// Generated from method `MR::CSharp::RelationalE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalE *MR_CSharp_RelationalE_AssignFromAnother(MR_CSharp_RelationalE *_this, const MR_CSharp_RelationalE *_other);

/// Generated from method `MR::CSharp::RelationalE::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalE::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalE::operator<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalE::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_RelationalF_DestroyArray()`.
/// Use `MR_CSharp_RelationalF_OffsetMutablePtr()` and `MR_CSharp_RelationalF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetPtr(const MR_CSharp_RelationalF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetMutablePtr(MR_CSharp_RelationalF *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::RelationalF::RelationalF`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_RelationalF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_RelationalF *MR_CSharp_RelationalF_ConstructFromAnother(const MR_CSharp_RelationalF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_RelationalF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalF_Destroy(const MR_CSharp_RelationalF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_RelationalF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_RelationalF_DestroyArray(const MR_CSharp_RelationalF *_this);

/// Generated from method `MR::CSharp::RelationalF::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_RelationalF *MR_CSharp_RelationalF_AssignFromAnother(MR_CSharp_RelationalF *_this, const MR_CSharp_RelationalF *_other);

/// Generated from method `MR::CSharp::RelationalF::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalF::operator>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalF::operator<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1);

/// Generated from method `MR::CSharp::RelationalF::operator>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsA_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsA_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetPtr(const MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetMutablePtr(MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsA::StaticOpsLhsA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_ConstructFromAnother(const MR_CSharp_StaticOpsLhsA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsA_Destroy(const MR_CSharp_StaticOpsLhsA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsA_DestroyArray(const MR_CSharp_StaticOpsLhsA *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_AssignFromAnother(MR_CSharp_StaticOpsLhsA *_this, const MR_CSharp_StaticOpsLhsA *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsA_int(const MR_CSharp_StaticOpsLhsA *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsB_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsB_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetPtr(const MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetMutablePtr(MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsB::StaticOpsLhsB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_ConstructFromAnother(const MR_CSharp_StaticOpsLhsB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsB_Destroy(const MR_CSharp_StaticOpsLhsB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsB_DestroyArray(const MR_CSharp_StaticOpsLhsB *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_AssignFromAnother(MR_CSharp_StaticOpsLhsB *_this, const MR_CSharp_StaticOpsLhsB *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_add_MR_CSharp_StaticOpsLhsB_int(const MR_CSharp_StaticOpsLhsB *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsC_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsC_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetPtr(const MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetMutablePtr(MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsC::StaticOpsLhsC`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsLhsC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsC_Destroy(const MR_CSharp_StaticOpsLhsC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsC_DestroyArray(const MR_CSharp_StaticOpsLhsC *_this);

/// Generated from function `MR::CSharp::operator+`.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsC_int(MR_C_PassBy _1_pass_by, MR_CSharp_StaticOpsLhsC *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsD_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsD_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetPtr(const MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetMutablePtr(MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsD::StaticOpsLhsD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_ConstructFromAnother(const MR_CSharp_StaticOpsLhsD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsD_Destroy(const MR_CSharp_StaticOpsLhsD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsD_DestroyArray(const MR_CSharp_StaticOpsLhsD *_this);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsD_int(const MR_CSharp_StaticOpsLhsD *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsE_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsE_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetPtr(const MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetMutablePtr(MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsE::StaticOpsLhsE`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_ConstructFromAnother(const MR_CSharp_StaticOpsLhsE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsE_Destroy(const MR_CSharp_StaticOpsLhsE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsE_DestroyArray(const MR_CSharp_StaticOpsLhsE *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_AssignFromAnother(MR_CSharp_StaticOpsLhsE *_this, const MR_CSharp_StaticOpsLhsE *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsE_int(MR_CSharp_StaticOpsLhsE *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsF_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsF_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetPtr(const MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetMutablePtr(MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsF::StaticOpsLhsF`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_ConstructFromAnother(const MR_CSharp_StaticOpsLhsF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsF_Destroy(const MR_CSharp_StaticOpsLhsF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsF_DestroyArray(const MR_CSharp_StaticOpsLhsF *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsF::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_AssignFromAnother(MR_CSharp_StaticOpsLhsF *_this, const MR_CSharp_StaticOpsLhsF *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsF_int(const MR_CSharp_StaticOpsLhsF *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsG_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsG_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsG_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetPtr(const MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetMutablePtr(MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsG::StaticOpsLhsG`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_ConstructFromAnother(const MR_CSharp_StaticOpsLhsG *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsG_Destroy(const MR_CSharp_StaticOpsLhsG *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsG_DestroyArray(const MR_CSharp_StaticOpsLhsG *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsG::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_AssignFromAnother(MR_CSharp_StaticOpsLhsG *_this, const MR_CSharp_StaticOpsLhsG *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsG_int(const MR_CSharp_StaticOpsLhsG *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsLhsH_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsLhsH_OffsetMutablePtr()` and `MR_CSharp_StaticOpsLhsH_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetPtr(const MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetMutablePtr(MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsLhsH::StaticOpsLhsH`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsLhsH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_ConstructFromAnother(const MR_CSharp_StaticOpsLhsH *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsLhsH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsH_Destroy(const MR_CSharp_StaticOpsLhsH *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsLhsH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsLhsH_DestroyArray(const MR_CSharp_StaticOpsLhsH *_this);

/// Generated from method `MR::CSharp::StaticOpsLhsH::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_AssignFromAnother(MR_CSharp_StaticOpsLhsH *_this, const MR_CSharp_StaticOpsLhsH *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsLhsH_int(const MR_CSharp_StaticOpsLhsH *_1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsA_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsA_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetPtr(const MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetMutablePtr(MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsA::StaticOpsRhsA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_ConstructFromAnother(const MR_CSharp_StaticOpsRhsA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsA_Destroy(const MR_CSharp_StaticOpsRhsA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsA_DestroyArray(const MR_CSharp_StaticOpsRhsA *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_AssignFromAnother(MR_CSharp_StaticOpsRhsA *_this, const MR_CSharp_StaticOpsRhsA *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsA(int _1, const MR_CSharp_StaticOpsRhsA *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsB_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsB_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetPtr(const MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetMutablePtr(MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsB::StaticOpsRhsB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_ConstructFromAnother(const MR_CSharp_StaticOpsRhsB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsB_Destroy(const MR_CSharp_StaticOpsRhsB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsB_DestroyArray(const MR_CSharp_StaticOpsRhsB *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_AssignFromAnother(MR_CSharp_StaticOpsRhsB *_this, const MR_CSharp_StaticOpsRhsB *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API void MR_C_add_int_MR_CSharp_StaticOpsRhsB(int _1, const MR_CSharp_StaticOpsRhsB *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsC_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsC_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetPtr(const MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetMutablePtr(MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsC::StaticOpsRhsC`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsRhsC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsC_Destroy(const MR_CSharp_StaticOpsRhsC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsC_DestroyArray(const MR_CSharp_StaticOpsRhsC *_this);

/// Generated from function `MR::CSharp::operator+`.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsC(int _1, MR_C_PassBy _2_pass_by, MR_CSharp_StaticOpsRhsC *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsD_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsD_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetPtr(const MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetMutablePtr(MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsD::StaticOpsRhsD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_ConstructFromAnother(const MR_CSharp_StaticOpsRhsD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsD_Destroy(const MR_CSharp_StaticOpsRhsD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsD_DestroyArray(const MR_CSharp_StaticOpsRhsD *_this);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsD(int _1, const MR_CSharp_StaticOpsRhsD *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsE_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsE_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetPtr(const MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetMutablePtr(MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsE::StaticOpsRhsE`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_ConstructFromAnother(const MR_CSharp_StaticOpsRhsE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsE_Destroy(const MR_CSharp_StaticOpsRhsE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsE_DestroyArray(const MR_CSharp_StaticOpsRhsE *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_AssignFromAnother(MR_CSharp_StaticOpsRhsE *_this, const MR_CSharp_StaticOpsRhsE *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsE(int _1, MR_CSharp_StaticOpsRhsE *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsF_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsF_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetPtr(const MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetMutablePtr(MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsF::StaticOpsRhsF`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_ConstructFromAnother(const MR_CSharp_StaticOpsRhsF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsF_Destroy(const MR_CSharp_StaticOpsRhsF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsF_DestroyArray(const MR_CSharp_StaticOpsRhsF *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsF::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_AssignFromAnother(MR_CSharp_StaticOpsRhsF *_this, const MR_CSharp_StaticOpsRhsF *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsF(int _1, const MR_CSharp_StaticOpsRhsF *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsG_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsG_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsG_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetPtr(const MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetMutablePtr(MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsG::StaticOpsRhsG`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_ConstructFromAnother(const MR_CSharp_StaticOpsRhsG *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsG_Destroy(const MR_CSharp_StaticOpsRhsG *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsG_DestroyArray(const MR_CSharp_StaticOpsRhsG *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsG::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_AssignFromAnother(MR_CSharp_StaticOpsRhsG *_this, const MR_CSharp_StaticOpsRhsG *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsG(int _1, const MR_CSharp_StaticOpsRhsG *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsRhsH_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsRhsH_OffsetMutablePtr()` and `MR_CSharp_StaticOpsRhsH_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetPtr(const MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetMutablePtr(MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsRhsH::StaticOpsRhsH`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsRhsH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_ConstructFromAnother(const MR_CSharp_StaticOpsRhsH *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsRhsH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsH_Destroy(const MR_CSharp_StaticOpsRhsH *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsRhsH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsRhsH_DestroyArray(const MR_CSharp_StaticOpsRhsH *_this);

/// Generated from method `MR::CSharp::StaticOpsRhsH::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_AssignFromAnother(MR_CSharp_StaticOpsRhsH *_this, const MR_CSharp_StaticOpsRhsH *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_StaticOpsRhsH(int _1, const MR_CSharp_StaticOpsRhsH *_2);

// Fails to inject, becomes a free function.
/// Generated from function `MR::CSharp::operator+`.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsEnum_int(MR_CSharp_StaticOpsEnum _1, int _2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsMixedLhs_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsMixedLhs_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsMixedLhs_OffsetMutablePtr()` and `MR_CSharp_StaticOpsMixedLhs_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetPtr(const MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsMixedLhs::StaticOpsMixedLhs`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsMixedLhs_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedLhs *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsMixedLhs`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsMixedLhs_Destroy(const MR_CSharp_StaticOpsMixedLhs *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsMixedLhs`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsMixedLhs_DestroyArray(const MR_CSharp_StaticOpsMixedLhs *_this);

/// Generated from method `MR::CSharp::StaticOpsMixedLhs::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(MR_CSharp_StaticOpsMixedLhs *_this, const MR_CSharp_StaticOpsMixedLhs *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsMixedRhs_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StaticOpsMixedRhs_DestroyArray()`.
/// Use `MR_CSharp_StaticOpsMixedRhs_OffsetMutablePtr()` and `MR_CSharp_StaticOpsMixedRhs_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetPtr(const MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StaticOpsMixedRhs::StaticOpsMixedRhs`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StaticOpsMixedRhs_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedRhs *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StaticOpsMixedRhs`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsMixedRhs_Destroy(const MR_CSharp_StaticOpsMixedRhs *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StaticOpsMixedRhs`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StaticOpsMixedRhs_DestroyArray(const MR_CSharp_StaticOpsMixedRhs *_this);

/// Generated from method `MR::CSharp::StaticOpsMixedRhs::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(MR_CSharp_StaticOpsMixedRhs *_this, const MR_CSharp_StaticOpsMixedRhs *_other);

// Gets injected into the lhs by default.
/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(const MR_CSharp_StaticOpsMixedLhs *_1, const MR_CSharp_StaticOpsMixedRhs *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialClassOps_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NonTrivialClassOps_DestroyArray()`.
/// Use `MR_CSharp_NonTrivialClassOps_OffsetMutablePtr()` and `MR_CSharp_NonTrivialClassOps_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetPtr(const MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetMutablePtr(MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonTrivialClassOps::NonTrivialClassOps`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonTrivialClassOps_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonTrivialClassOps`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialClassOps_Destroy(const MR_CSharp_NonTrivialClassOps *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonTrivialClassOps`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonTrivialClassOps_DestroyArray(const MR_CSharp_NonTrivialClassOps *_this);

/// Generated from method `MR::CSharp::NonTrivialClassOps::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_AssignFromAnother(MR_CSharp_NonTrivialClassOps *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other);

/// Generated from method `MR::CSharp::NonTrivialClassOps::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_NonTrivialClassOps_int(MR_CSharp_NonTrivialClassOps *_this, int _1);

/// Generated from function `MR::CSharp::operator+`.
MR_C_API int MR_C_add_MR_CSharp_NonTrivialClassOps_float(MR_C_PassBy _1_pass_by, MR_CSharp_NonTrivialClassOps *_1, float _2);

/// Generated from function `MR::CSharp::operator+`.
MR_C_API int MR_C_add_float_MR_CSharp_NonTrivialClassOps(float _1, MR_C_PassBy _2_pass_by, MR_CSharp_NonTrivialClassOps *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonCopyableClassByValueOps_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NonCopyableClassByValueOps_DestroyArray()`.
/// Use `MR_CSharp_NonCopyableClassByValueOps_OffsetMutablePtr()` and `MR_CSharp_NonCopyableClassByValueOps_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetPtr(const MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetMutablePtr(MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NonCopyableClassByValueOps::NonCopyableClassByValueOps`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NonCopyableClassByValueOps_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(const MR_CSharp_NonCopyableClassByValueOps *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NonCopyableClassByValueOps`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonCopyableClassByValueOps_Destroy(const MR_CSharp_NonCopyableClassByValueOps *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NonCopyableClassByValueOps`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NonCopyableClassByValueOps_DestroyArray(const MR_CSharp_NonCopyableClassByValueOps *_this);

/// Generated from method `MR::CSharp::NonCopyableClassByValueOps::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(MR_CSharp_NonCopyableClassByValueOps *_this, const MR_CSharp_NonCopyableClassByValueOps *_other);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(const MR_CSharp_NonCopyableClassByValueOps *_1, int _2);

/// Generated from function `MR::CSharp::operator+`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(int _1, const MR_CSharp_NonCopyableClassByValueOps *_2);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_CallOp_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_CallOp_DestroyArray()`.
/// Use `MR_CSharp_CallOp_OffsetMutablePtr()` and `MR_CSharp_CallOp_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetPtr(const MR_CSharp_CallOp *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetMutablePtr(MR_CSharp_CallOp *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::CallOp::CallOp`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_CallOp_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_CallOp *MR_CSharp_CallOp_ConstructFromAnother(const MR_CSharp_CallOp *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_CallOp`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_CallOp_Destroy(const MR_CSharp_CallOp *_this);

/// Destroys a heap-allocated array of `MR_CSharp_CallOp`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_CallOp_DestroyArray(const MR_CSharp_CallOp *_this);

/// Generated from method `MR::CSharp::CallOp::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_CallOp *MR_CSharp_CallOp_AssignFromAnother(MR_CSharp_CallOp *_this, const MR_CSharp_CallOp *_other);

/// Generated from method `MR::CSharp::CallOp::operator()`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_CallOp_call_0(MR_CSharp_CallOp *_this);

/// Generated from method `MR::CSharp::CallOp::operator()`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_CallOp_call_3(MR_CSharp_CallOp *_this, int _1, int _2, int _3);

/// Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestOpsA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_ConstructFromAnother(const MR_CSharp_TestOpsA *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetPtr(const MR_CSharp_TestOpsA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetMutablePtr(MR_CSharp_TestOpsA *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_TestOpsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsA_Destroy(const MR_CSharp_TestOpsA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TestOpsA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsA_DestroyArray(const MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API int MR_CSharp_TestOpsA_AssignFromAnother(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_other);

/// Generated from method `MR::CSharp::TestOpsA::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_pos_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_neg_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_sub_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_deref_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_mul_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator/`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_div_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator%`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_mod_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator^`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_xor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator&`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_addressof_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator&`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_bitand_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator|`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_bitor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator~`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_compl_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator!`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_not_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_add_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_sub_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_mul_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_div_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator%=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_mod_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_xor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_bitand_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_bitor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator<<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_lshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator>>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_rshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator<<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_lshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator>>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_rshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator<=>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_compare_three_way_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator&&`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_and_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator||`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_or_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator,`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_comma_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator->*`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_arrow_star(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator->`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_arrow(MR_CSharp_TestOpsA *_this);

/// Generated from method `MR::CSharp::TestOpsA::operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_call(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsA::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsA_index(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from constructor `MR::CSharp::TestOpsB::TestOpsB`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestOpsB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetPtr(const MR_CSharp_TestOpsB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetMutablePtr(MR_CSharp_TestOpsB *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_TestOpsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsB_Destroy(const MR_CSharp_TestOpsB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TestOpsB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsB_DestroyArray(const MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API int MR_CSharp_TestOpsB_AssignFromAnother(MR_CSharp_TestOpsB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other);

/// Generated from method `MR::CSharp::TestOpsB::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_pos_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_neg_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_sub_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_deref_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_mul_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator/`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_div_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator%`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_mod_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator^`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_xor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator&`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_addressof_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator&`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_bitand_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator|`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_bitor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator~`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_compl_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator!`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_not_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator+=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_add_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator-=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_sub_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator*=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_mul_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator/=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_div_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator%=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_mod_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator^=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_xor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator&=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_bitand_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator|=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_bitor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator<<`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_lshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator>>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_rshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator<<=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_lshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator>>=`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_rshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator<=>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_compare_three_way_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator&&`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_and_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator||`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_or_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator,`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_comma_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator->*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_arrow_star(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator->`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_arrow(MR_CSharp_TestOpsB *_this);

/// Generated from method `MR::CSharp::TestOpsB::operator()`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_call(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from method `MR::CSharp::TestOpsB::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_TestOpsB_index(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1);

/// Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_TestOpsC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_ConstructFromAnother(const MR_CSharp_TestOpsC *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetPtr(const MR_CSharp_TestOpsC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetMutablePtr(MR_CSharp_TestOpsC *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_TestOpsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsC_Destroy(const MR_CSharp_TestOpsC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_TestOpsC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_TestOpsC_DestroyArray(const MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_AssignFromAnother(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsC *_other);

/// Generated from method `MR::CSharp::TestOpsC::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_pos_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_neg_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_deref_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator/`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator%`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator^`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator&`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_addressof_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator&`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator|`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator~`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_compl_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator!`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_not_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_add_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_sub_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_mul_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_div_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator%=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_mod_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_xor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_bitand_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_bitor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator<<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator>>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator<<=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_lshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator>>=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_rshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator<=>`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator&&`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator||`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator,`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator->*`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_arrow_star(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator->`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_arrow(MR_CSharp_TestOpsC *_this);

/// Generated from method `MR::CSharp::TestOpsC::operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_call(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Generated from method `MR::CSharp::TestOpsC::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_CSharp_TestOpsC_index(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1);

/// Returns a pointer to a member variable of class `MR::CSharp::IndexerA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IndexerA_Get_x(const MR_CSharp_IndexerA *_this);

/// Modifies a member variable of class `MR::CSharp::IndexerA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `x`.
MR_C_API void MR_CSharp_IndexerA_Set_x(MR_CSharp_IndexerA *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IndexerA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IndexerA_GetMutable_x(MR_CSharp_IndexerA *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IndexerA_DestroyArray()`.
/// Use `MR_CSharp_IndexerA_OffsetMutablePtr()` and `MR_CSharp_IndexerA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::IndexerA` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerA_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFrom(int x);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetPtr(const MR_CSharp_IndexerA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetMutablePtr(MR_CSharp_IndexerA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IndexerA::IndexerA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFromAnother(const MR_CSharp_IndexerA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IndexerA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerA_Destroy(const MR_CSharp_IndexerA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IndexerA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerA_DestroyArray(const MR_CSharp_IndexerA *_this);

/// Generated from method `MR::CSharp::IndexerA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerA_AssignFromAnother(MR_CSharp_IndexerA *_this, const MR_CSharp_IndexerA *_other);

/// Generated from method `MR::CSharp::IndexerA::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IndexerA_index(MR_CSharp_IndexerA *_this, int i);

/// Returns a pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IndexerA *MR_CSharp_IndexerB_Get_a(const MR_CSharp_IndexerB *_this);

/// Modifies a member variable of class `MR::CSharp::IndexerB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_IndexerB_Set_a(MR_CSharp_IndexerB *_this, const MR_CSharp_IndexerA *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_IndexerA *MR_CSharp_IndexerB_GetMutable_a(MR_CSharp_IndexerB *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IndexerB_DestroyArray()`.
/// Use `MR_CSharp_IndexerB_OffsetMutablePtr()` and `MR_CSharp_IndexerB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::IndexerB` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerB_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFrom(const MR_CSharp_IndexerA *a);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetPtr(const MR_CSharp_IndexerB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetMutablePtr(MR_CSharp_IndexerB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IndexerB::IndexerB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFromAnother(const MR_CSharp_IndexerB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IndexerB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerB_Destroy(const MR_CSharp_IndexerB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IndexerB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerB_DestroyArray(const MR_CSharp_IndexerB *_this);

/// Generated from method `MR::CSharp::IndexerB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IndexerB *MR_CSharp_IndexerB_AssignFromAnother(MR_CSharp_IndexerB *_this, const MR_CSharp_IndexerB *_other);

/// Generated from method `MR::CSharp::IndexerB::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_1(const MR_CSharp_IndexerB *_this, int i);

/// Generated from method `MR::CSharp::IndexerB::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_2(const MR_CSharp_IndexerB *_this, int i, int j);

/// Generated from method `MR::CSharp::IndexerB::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_0(const MR_CSharp_IndexerB *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IndexerC_DestroyArray()`.
/// Use `MR_CSharp_IndexerC_OffsetMutablePtr()` and `MR_CSharp_IndexerC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetPtr(const MR_CSharp_IndexerC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetMutablePtr(MR_CSharp_IndexerC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IndexerC::IndexerC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IndexerC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IndexerC *MR_CSharp_IndexerC_ConstructFromAnother(const MR_CSharp_IndexerC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IndexerC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerC_Destroy(const MR_CSharp_IndexerC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IndexerC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IndexerC_DestroyArray(const MR_CSharp_IndexerC *_this);

/// Generated from method `MR::CSharp::IndexerC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IndexerC *MR_CSharp_IndexerC_AssignFromAnother(MR_CSharp_IndexerC *_this, const MR_CSharp_IndexerC *_other);

/// Generated from method `MR::CSharp::IndexerC::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_IndexerC_index(MR_CSharp_IndexerC *_this, int i);

/// Generated from method `MR::CSharp::IndexerC::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API float MR_CSharp_IndexerC_index_const(const MR_CSharp_IndexerC *_this, int i);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvOp_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvOp_DestroyArray()`.
/// Use `MR_CSharp_ConvOp_OffsetMutablePtr()` and `MR_CSharp_ConvOp_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetPtr(const MR_CSharp_ConvOp *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetMutablePtr(MR_CSharp_ConvOp *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvOp::ConvOp`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvOp_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvOp *MR_CSharp_ConvOp_ConstructFromAnother(const MR_CSharp_ConvOp *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvOp`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvOp_Destroy(const MR_CSharp_ConvOp *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvOp`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvOp_DestroyArray(const MR_CSharp_ConvOp *_this);

/// Generated from conversion operator `MR::CSharp::ConvOp::operator int`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_ConvOp_ConvertTo_int(MR_CSharp_ConvOp *_this);

/// Generated from conversion operator `MR::CSharp::ConvOp::operator float`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API float MR_CSharp_ConvOp_ConvertTo_float(MR_CSharp_ConvOp *_this);

/// Generated from method `MR::CSharp::ConvOp::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvOp *MR_CSharp_ConvOp_AssignFromAnother(MR_CSharp_ConvOp *_this, const MR_CSharp_ConvOp *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvOpToRef_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvOpToRef_DestroyArray()`.
/// Use `MR_CSharp_ConvOpToRef_OffsetMutablePtr()` and `MR_CSharp_ConvOpToRef_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetPtr(const MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetMutablePtr(MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvOpToRef::ConvOpToRef`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvOpToRef_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_ConstructFromAnother(const MR_CSharp_ConvOpToRef *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvOpToRef`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvOpToRef_Destroy(const MR_CSharp_ConvOpToRef *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvOpToRef`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvOpToRef_DestroyArray(const MR_CSharp_ConvOpToRef *_this);

// Not to a reference.
/// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator int`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_ConvOpToRef_ConvertTo_int(MR_CSharp_ConvOpToRef *_this);

// To a reference.
/// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator float &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_CSharp_ConvOpToRef_ConvertTo_float_ref(MR_CSharp_ConvOpToRef *_this);

// To a reference, explicit.
/// Generated from conversion operator `MR::CSharp::ConvOpToRef::operator unsigned short &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *MR_CSharp_ConvOpToRef_ConvertTo_unsigned_short_ref(MR_CSharp_ConvOpToRef *_this);

/// Generated from method `MR::CSharp::ConvOpToRef::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_AssignFromAnother(MR_CSharp_ConvOpToRef *_this, const MR_CSharp_ConvOpToRef *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvString_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StringConvString_DestroyArray()`.
/// Use `MR_CSharp_StringConvString_OffsetMutablePtr()` and `MR_CSharp_StringConvString_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetPtr(const MR_CSharp_StringConvString *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetMutablePtr(MR_CSharp_StringConvString *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StringConvString::StringConvString`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvString_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvString *MR_CSharp_StringConvString_ConstructFromAnother(const MR_CSharp_StringConvString *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StringConvString`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvString_Destroy(const MR_CSharp_StringConvString *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StringConvString`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvString_DestroyArray(const MR_CSharp_StringConvString *_this);

/// Generated from conversion operator `MR::CSharp::StringConvString::operator std::string`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string *MR_CSharp_StringConvString_ConvertTo_std_string(MR_CSharp_StringConvString *_this);

/// Generated from method `MR::CSharp::StringConvString::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StringConvString *MR_CSharp_StringConvString_AssignFromAnother(MR_CSharp_StringConvString *_this, const MR_CSharp_StringConvString *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvStringView_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StringConvStringView_DestroyArray()`.
/// Use `MR_CSharp_StringConvStringView_OffsetMutablePtr()` and `MR_CSharp_StringConvStringView_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetPtr(const MR_CSharp_StringConvStringView *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetMutablePtr(MR_CSharp_StringConvStringView *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StringConvStringView::StringConvStringView`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvStringView_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_ConstructFromAnother(const MR_CSharp_StringConvStringView *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StringConvStringView`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvStringView_Destroy(const MR_CSharp_StringConvStringView *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StringConvStringView`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvStringView_DestroyArray(const MR_CSharp_StringConvStringView *_this);

// Mark this `explicit` and `const` for a change.
/// Generated from conversion operator `MR::CSharp::StringConvStringView::operator std::string_view`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_string_view_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_string_view *MR_CSharp_StringConvStringView_ConvertTo_std_string_view(const MR_CSharp_StringConvStringView *_this);

/// Generated from method `MR::CSharp::StringConvStringView::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_AssignFromAnother(MR_CSharp_StringConvStringView *_this, const MR_CSharp_StringConvStringView *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvFsPath_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_StringConvFsPath_DestroyArray()`.
/// Use `MR_CSharp_StringConvFsPath_OffsetMutablePtr()` and `MR_CSharp_StringConvFsPath_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetPtr(const MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetMutablePtr(MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::StringConvFsPath::StringConvFsPath`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_StringConvFsPath_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_ConstructFromAnother(const MR_CSharp_StringConvFsPath *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_StringConvFsPath`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvFsPath_Destroy(const MR_CSharp_StringConvFsPath *_this);

/// Destroys a heap-allocated array of `MR_CSharp_StringConvFsPath`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_StringConvFsPath_DestroyArray(const MR_CSharp_StringConvFsPath *_this);

/// Generated from conversion operator `MR::CSharp::StringConvFsPath::operator std::filesystem::path`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path(MR_CSharp_StringConvFsPath *_this);

/// Generated from method `MR::CSharp::StringConvFsPath::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_AssignFromAnother(MR_CSharp_StringConvFsPath *_this, const MR_CSharp_StringConvFsPath *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvCtor_DestroyArray()`.
/// Use `MR_CSharp_ConvCtor_OffsetMutablePtr()` and `MR_CSharp_ConvCtor_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetPtr(const MR_CSharp_ConvCtor *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetMutablePtr(MR_CSharp_ConvCtor *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_ConstructFromAnother(const MR_CSharp_ConvCtor *_other);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_int(int _1);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_int(int _1, int _2);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Parameter `_2` has a default argument: `42`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_short(short _1, const int *_2);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_float(float _1);

/// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtor_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_float(float _1, float _2);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtor`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtor_Destroy(const MR_CSharp_ConvCtor *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtor`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtor_DestroyArray(const MR_CSharp_ConvCtor *_this);

/// Generated from method `MR::CSharp::ConvCtor::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_AssignFromAnother(MR_CSharp_ConvCtor *_this, const MR_CSharp_ConvCtor *_other);

/// Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
/// Parameter `_1` has a default argument: `42`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorWithDefArg_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_Construct(const int *_1);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvCtorWithDefArg_DestroyArray()`.
/// Use `MR_CSharp_ConvCtorWithDefArg_OffsetMutablePtr()` and `MR_CSharp_ConvCtorWithDefArg_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetPtr(const MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetMutablePtr(MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorWithDefArg_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother(const MR_CSharp_ConvCtorWithDefArg *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtorWithDefArg`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorWithDefArg_Destroy(const MR_CSharp_ConvCtorWithDefArg *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtorWithDefArg`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorWithDefArg_DestroyArray(const MR_CSharp_ConvCtorWithDefArg *_this);

/// Generated from method `MR::CSharp::ConvCtorWithDefArg::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_AssignFromAnother(MR_CSharp_ConvCtorWithDefArg *_this, const MR_CSharp_ConvCtorWithDefArg *_other);

/// Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivialRestricted_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetPtr(const MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivialRestricted_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_Construct(int _1);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtorNonTrivialRestricted`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorNonTrivialRestricted_Destroy(const MR_CSharp_ConvCtorNonTrivialRestricted *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtorNonTrivialRestricted`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorNonTrivialRestricted_DestroyArray(const MR_CSharp_ConvCtorNonTrivialRestricted *_this);

/// Generated from method `MR::CSharp::ConvCtorNonTrivialRestricted::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother(MR_CSharp_ConvCtorNonTrivialRestricted *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other);

/// Generated from constructor `MR::CSharp::ConvCtorExposed::ConvCtorExposed`.
MR_C_API MR_CSharp_ConvCtorExposed MR_CSharp_ConvCtorExposed_Construct(int _1);

/// Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorCopyButNoMove_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetPtr(const MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetMutablePtr(MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorCopyButNoMove_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_Construct(int _1);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtorCopyButNoMove`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorCopyButNoMove_Destroy(const MR_CSharp_ConvCtorCopyButNoMove *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtorCopyButNoMove`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorCopyButNoMove_DestroyArray(const MR_CSharp_ConvCtorCopyButNoMove *_this);

/// Generated from method `MR::CSharp::ConvCtorCopyButNoMove::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother(MR_CSharp_ConvCtorCopyButNoMove *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvCtorTrivial_DestroyArray()`.
/// Use `MR_CSharp_ConvCtorTrivial_OffsetMutablePtr()` and `MR_CSharp_ConvCtorTrivial_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetPtr(const MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_ConstructFromAnother(const MR_CSharp_ConvCtorTrivial *_other);

/// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_Construct(int _1);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtorTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorTrivial_Destroy(const MR_CSharp_ConvCtorTrivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtorTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorTrivial_DestroyArray(const MR_CSharp_ConvCtorTrivial *_this);

/// Generated from method `MR::CSharp::ConvCtorTrivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_AssignFromAnother(MR_CSharp_ConvCtorTrivial *_this, const MR_CSharp_ConvCtorTrivial *_other);

/// Generated from function `MR::CSharp::test_class_convtrivial`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b);

/// Generated from function `MR::CSharp::test_class_convtrivial_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_convtrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ref(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b);

/// Generated from function `MR::CSharp::test_class_convtrivial_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_convtrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cref(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b);

/// Generated from function `MR::CSharp::test_class_convtrivial_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_convtrivial`, pass a null pointer to use it.
MR_C_API MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ptr(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b, MR_CSharp_ConvCtorTrivial *const *c);

/// Generated from function `MR::CSharp::test_class_convtrivial_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_convtrivial`, pass a null pointer to use it.
MR_C_API const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cptr(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b, const MR_CSharp_ConvCtorTrivial *const *c);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ConvCtorNonTrivial_DestroyArray()`.
/// Use `MR_CSharp_ConvCtorNonTrivial_OffsetMutablePtr()` and `MR_CSharp_ConvCtorNonTrivial_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetPtr(const MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other);

/// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_Construct(int _1);

/// Destroys a heap-allocated instance of `MR_CSharp_ConvCtorNonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorNonTrivial_Destroy(const MR_CSharp_ConvCtorNonTrivial *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ConvCtorNonTrivial`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ConvCtorNonTrivial_DestroyArray(const MR_CSharp_ConvCtorNonTrivial *_this);

/// Generated from method `MR::CSharp::ConvCtorNonTrivial::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(MR_CSharp_ConvCtorNonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other);

/// Generated from function `MR::CSharp::test_class_convnontrivial`.
/// Parameter `b` has a default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ConvCtorNonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial(MR_C_PassBy a_pass_by, MR_CSharp_ConvCtorNonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_ConvCtorNonTrivial *b);

/// Generated from function `MR::CSharp::test_class_convnontrivial_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_convnontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ref(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b);

/// Generated from function `MR::CSharp::test_class_convnontrivial_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_convnontrivial`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cref(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b);

/// Generated from function `MR::CSharp::test_class_convnontrivial_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_convnontrivial`, pass a null pointer to use it.
MR_C_API MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ptr(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b, MR_CSharp_ConvCtorNonTrivial *const *c);

/// Generated from function `MR::CSharp::test_class_convnontrivial_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_convnontrivial`, pass a null pointer to use it.
MR_C_API const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cptr(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b, const MR_CSharp_ConvCtorNonTrivial *const *c);

/// Generated from method `MR::CSharp::ExposedLayout::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ExposedLayout_foo(MR_CSharp_ExposedLayout *_this);

/// Generated from method `MR::CSharp::ExposedLayout::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ExposedLayout_bar(const MR_CSharp_ExposedLayout *_this);

/// Generated from method `MR::CSharp::ExposedLayout::blah`.
MR_C_API void MR_CSharp_ExposedLayout_blah(void);

// Try some jank operators.
/// Generated from method `MR::CSharp::ExposedLayout::operator++`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_incr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *_this);

/// Generated from method `MR::CSharp::ExposedLayout::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_ExposedLayout_ref_int(MR_CSharp_ExposedLayout *_this, int _1);

// Test how returning references to an exposed struct works, since C# overloaded operators can't return `ref`.
// Note that this operator must be `const` to test this correctly, since we turn non-const operators in exposed structs into functions.
/// Generated from method `MR::CSharp::ExposedLayout::operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_C_mul_MR_CSharp_ExposedLayout_int(const MR_CSharp_ExposedLayout *_this, int _1);

/// Generated from method `MR::CSharp::ExposedLayout::operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_add_const_MR_CSharp_ExposedLayout_ref_int(const MR_CSharp_ExposedLayout *_this, int _1);

/// Generated from method `MR::CSharp::ExposedLayout::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *_this, const MR_CSharp_ExposedLayout *_1);

/// Generated from method `MR::CSharp::ExposedLayout::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_ExposedLayout_float(MR_CSharp_ExposedLayout *_this, float _1);

/// Generated from method `MR::CSharp::ExposedLayout::operator<`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_ExposedLayout_char(MR_CSharp_ExposedLayout *_this, char _1);

/// Generated from function `MR::CSharp::operator-`.
MR_C_API int MR_C_sub_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout _2);

/// Generated from function `MR::CSharp::operator/`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_div_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout *_2);

/// Generated from function `MR::CSharp::operator%`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_mod_int_MR_CSharp_ExposedLayout(int _1, const MR_CSharp_ExposedLayout *_2);

/// Generated from function `MR::CSharp::operator--`.
MR_C_API void MR_C_decr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout _1);

/// Generated from function `MR::CSharp::test_exposed`.
/// Parameter `b` has a default argument: `default_exposed`, pass a null pointer to use it.
MR_C_API MR_CSharp_ExposedLayout MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout a, const MR_CSharp_ExposedLayout *b);

/// Generated from function `MR::CSharp::test_exposed_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b);

/// Generated from function `MR::CSharp::test_exposed_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b);

/// Generated from function `MR::CSharp::test_exposed_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::ExposedLayout&&)default_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_rref(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b);

/// Generated from function `MR::CSharp::test_exposed_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::ExposedLayout&&)default_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_crref(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b);

/// Generated from function `MR::CSharp::test_exposed_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_exposed`, pass a null pointer to use it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *const *c);

/// Generated from function `MR::CSharp::test_exposed_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_exposed`, pass a null pointer to use it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, const MR_CSharp_ExposedLayout *const *c);

// This broke at one point, so testing it too.
/// Generated from function `MR::CSharp::test_exposed_vec`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_vec(void);

// Test that capturing lifetime of an exposed struct is a no-op.
/// Generated from function `MR::CSharp::asave_ref_in_exposed_layout`.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_NonTrivial *MR_CSharp_asave_ref_in_exposed_layout(MR_CSharp_ExposedLayout *ref);

/// Generated from method `MR::CSharp::ExposedLayoutSh::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ExposedLayoutSh_foo(MR_CSharp_ExposedLayoutSh *_this);

/// Generated from method `MR::CSharp::ExposedLayoutSh::bar`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ExposedLayoutSh_bar(const MR_CSharp_ExposedLayoutSh *_this);

/// Generated from method `MR::CSharp::ExposedLayoutSh::blah`.
MR_C_API void MR_CSharp_ExposedLayoutSh_blah(void);

// Try some jank operators.
/// Generated from method `MR::CSharp::ExposedLayoutSh::operator++`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_incr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *_this);

/// Generated from method `MR::CSharp::ExposedLayoutSh::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_add_MR_CSharp_ExposedLayoutSh_int(MR_CSharp_ExposedLayoutSh *_this, int _1);

/// Generated from method `MR::CSharp::ExposedLayoutSh::operator*`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_mul_MR_CSharp_ExposedLayoutSh_int(const MR_CSharp_ExposedLayoutSh *_this, int _1);

/// Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1);

/// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_ExposedLayoutSh_float(MR_CSharp_ExposedLayoutSh *_this, float _1);

/// Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_less_MR_CSharp_ExposedLayoutSh_char(MR_CSharp_ExposedLayoutSh *_this, char _1);

// While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
/// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayout *_1);

// And against itself, too.
/// Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1);

/// Generated from function `MR::CSharp::operator-`.
MR_C_API int MR_C_sub_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh _2);

/// Generated from function `MR::CSharp::operator/`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_div_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh *_2);

/// Generated from function `MR::CSharp::operator%`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_mod_int_MR_CSharp_ExposedLayoutSh(int _1, const MR_CSharp_ExposedLayoutSh *_2);

/// Generated from function `MR::CSharp::operator--`.
MR_C_API void MR_C_decr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh _1);

/// Generated from function `MR::CSharp::make_exposed_sh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_CSharp_make_exposed_sh(void);

/// Generated from function `MR::CSharp::test_exposed`.
/// Parameter `b` has a default argument: `default_exposed_sh`, pass a null pointer to use it.
MR_C_API MR_CSharp_ExposedLayoutSh MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh a, const MR_CSharp_ExposedLayoutSh *b);

/// Generated from function `MR::CSharp::test_exposed_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_exposed_sh`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b);

/// Generated from function `MR::CSharp::test_exposed_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_exposed_sh`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b);

/// Generated from function `MR::CSharp::test_exposed_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_exposed_sh`, pass a null pointer to use it.
MR_C_API MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b, MR_CSharp_ExposedLayoutSh *const *c);

/// Generated from function `MR::CSharp::test_exposed_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_exposed_sh`, pass a null pointer to use it.
MR_C_API const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b, const MR_CSharp_ExposedLayoutSh *const *c);

// Some random ctor.
/// Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
MR_C_API MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_2(int _1, int _2);

// This gets a lifetime annotation from `--infer-lifetime-constructors`, but it should be a no-op in an exposed struct.
/// Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_1(const MR_CSharp_A *_1);

// And try an equality comparison!
/// Generated from function `MR::CSharp::operator==`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_CSharp_ExposedLayoutB(const MR_CSharp_ExposedLayoutB *_1, const MR_CSharp_ExposedLayoutB *_2);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_ArrayMembers_Get_i(const MR_CSharp_ArrayMembers *_this);

/// Modifies a member variable of class `MR::CSharp::ArrayMembers` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `i`.
MR_C_API void MR_CSharp_ArrayMembers_Set_i(MR_CSharp_ArrayMembers *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_ArrayMembers_GetMutable_i(MR_CSharp_ArrayMembers *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_ArrayMembers_Get_ia(const MR_CSharp_ArrayMembers *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_ArrayMembers_GetMutable_ia(MR_CSharp_ArrayMembers *_this);

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ia`. The size is `2`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_ia(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (*MR_CSharp_ArrayMembers_Get_iaa(const MR_CSharp_ArrayMembers *_this))[4];

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int (*MR_CSharp_ArrayMembers_GetMutable_iaa(MR_CSharp_ArrayMembers *_this))[4];

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `iaa`. The size is `3`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_iaa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ci`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_ArrayMembers_Get_ci(const MR_CSharp_ArrayMembers *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cia`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_ArrayMembers_Get_cia(const MR_CSharp_ArrayMembers *_this);

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `cia`. The size is `2`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_cia(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ciaa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (*MR_CSharp_ArrayMembers_Get_ciaa(const MR_CSharp_ArrayMembers *_this))[4];

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ciaa`. The size is `3`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_ciaa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_ArrayMembers_Get_s(const MR_CSharp_ArrayMembers *_this);

/// Modifies a member variable of class `MR::CSharp::ArrayMembers` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// The reference to the parameter `value` might be preserved in this object in element `s`.
/// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_CSharp_ArrayMembers_Set_s(MR_CSharp_ArrayMembers *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_ArrayMembers_GetMutable_s(MR_CSharp_ArrayMembers *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_ArrayMembers_Get_sa(const MR_CSharp_ArrayMembers *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_ArrayMembers_GetMutable_sa(MR_CSharp_ArrayMembers *_this);

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `sa`. The size is `2`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_sa(void);

// std::string saa[3][4]; // The C generator doesn't support those yet. We'd need to expose them as flat arrays, with N size getters, I think?
/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_ArrayMembers_Get_cs(const MR_CSharp_ArrayMembers *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `csa`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_ArrayMembers_Get_csa(const MR_CSharp_ArrayMembers *_this);

/// Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `csa`. The size is `2`.
MR_C_API size_t MR_CSharp_ArrayMembers_GetSize_csa(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ArrayMembers_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_ArrayMembers_DestroyArray()`.
/// Use `MR_CSharp_ArrayMembers_OffsetMutablePtr()` and `MR_CSharp_ArrayMembers_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetPtr(const MR_CSharp_ArrayMembers *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetMutablePtr(MR_CSharp_ArrayMembers *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::ArrayMembers::ArrayMembers`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ArrayMembers_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ArrayMembers *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_ArrayMembers`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ArrayMembers_Destroy(const MR_CSharp_ArrayMembers *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ArrayMembers`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ArrayMembers_DestroyArray(const MR_CSharp_ArrayMembers *_this);

/// Generated from function `MR::CSharp::test_optint`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optint`, pass a null pointer to use it.
/// Parameter `c` is a single object.
/// Parameter `c` has a default argument: `default_optint`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_CSharp_test_optint(const int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *c);

/// Generated from function `MR::CSharp::test_optint_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optint`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_int *MR_CSharp_test_optint_ref(MR_C_std_optional_int *a, MR_C_std_optional_int *b);

/// Generated from function `MR::CSharp::test_optint_cref`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optint`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_int *MR_CSharp_test_optint_cref(const int *a, const MR_C_std_optional_int *b);

/// Generated from function `MR::CSharp::test_optint_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optint`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_int *MR_CSharp_test_optint_ptr(MR_C_std_optional_int *a, MR_C_std_optional_int *b, MR_C_std_optional_int *const *c);

/// Generated from function `MR::CSharp::test_optint_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optint`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_int *MR_CSharp_test_optint_cptr(const MR_C_std_optional_int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *const *c);

/// Generated from function `MR::CSharp::test_optstr`.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// Non-null `a_end` requires a non-null `a`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer to both it and `a_end`.
/// Parameter `b` has a default argument: `default_optstr`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `c` has a default argument: `default_optstr`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_std_string *MR_CSharp_test_optstr(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b, MR_C_PassBy c_pass_by, MR_C_std_optional_std_string *c);

/// Generated from function `MR::CSharp::test_optstr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optstr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_std_string *MR_CSharp_test_optstr_ref(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b);

/// Generated from function `MR::CSharp::test_optstr_cref`.
/// If `a_end` is null, then `a` is assumed to be null-terminated.
/// Non-null `a_end` requires a non-null `a`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer to both it and `a_end`.
/// Parameter `b` has a default argument: `default_optstr`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cref(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b);

/// Generated from function `MR::CSharp::test_optstr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optstr`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_std_string *MR_CSharp_test_optstr_ptr(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b, MR_C_std_optional_std_string *const *c);

/// Generated from function `MR::CSharp::test_optstr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optstr`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cptr(const MR_C_std_optional_std_string *a, const MR_C_std_optional_std_string *b, const MR_C_std_optional_std_string *const *c);

/// Generated from function `MR::CSharp::test_opttriv`.
/// Parameter `a` is a single object.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_opttriv`, pass a null pointer to use it.
/// Parameter `c` is a single object.
/// Parameter `c` has a default argument: `default_opttriv`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *c);

/// Generated from function `MR::CSharp::test_opttriv_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_opttriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ref(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_opttriv_cref`.
/// Parameter `a` is a single object.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_opttriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cref(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b);

/// Generated from function `MR::CSharp::test_opttriv_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_opttriv`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ptr(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b, MR_C_std_optional_MR_CSharp_Trivial *const *c);

/// Generated from function `MR::CSharp::test_opttriv_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_opttriv`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cptr(const MR_C_std_optional_MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *const *c);

/// Generated from function `MR::CSharp::test_optnontriv`.
/// Parameter `a` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
/// Parameter `b` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
/// Parameter `b` has a default argument: `default_optnontriv`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `c` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
/// Parameter `c` has a default argument: `default_optnontriv`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_NonTrivial_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b, MR_C_PassBy c_pass_by, MR_CSharp_NonTrivial *c);

/// Generated from function `MR::CSharp::test_optnontriv_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optnontriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ref(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_optnontriv_cref`.
/// Parameter `a` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
/// Parameter `b` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
/// Parameter `b` has a default argument: `default_optnontriv`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cref(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b);

/// Generated from function `MR::CSharp::test_optnontriv_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optnontriv`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ptr(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b, MR_C_std_optional_MR_CSharp_NonTrivial *const *c);

/// Generated from function `MR::CSharp::test_optnontriv_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optnontriv`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cptr(const MR_C_std_optional_MR_CSharp_NonTrivial *a, const MR_C_std_optional_MR_CSharp_NonTrivial *b, const MR_C_std_optional_MR_CSharp_NonTrivial *const *c);

/// Generated from function `MR::CSharp::test_optshexp`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshexp`, pass a null pointer to use it.
/// Parameter `c` is a single object.
/// Parameter `c` has a default argument: `default_optshexp`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *c);

/// Generated from function `MR::CSharp::test_optshexp_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshexp`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ref(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b);

/// Generated from function `MR::CSharp::test_optshexp_cref`.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshexp`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cref(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b);

/// Generated from function `MR::CSharp::test_optshexp_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optshexp`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ptr(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c);

/// Generated from function `MR::CSharp::test_optshexp_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optshexp`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cptr(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c);

/// Generated from function `MR::CSharp::test_optshtriv`.
/// Parameter `a` is a single object.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshtriv`, pass a null pointer to use it.
/// Parameter `c` is a single object.
/// Parameter `c` has a default argument: `default_optshtriv`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_SA_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *c);

/// Generated from function `MR::CSharp::test_optshtriv_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshtriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ref(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_optshtriv_cref`.
/// Parameter `a` is a single object.
/// Parameter `a` is optional. To keep it empty, pass a null pointer.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_optshtriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cref(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b);

/// Generated from function `MR::CSharp::test_optshtriv_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optshtriv`, pass a null pointer to use it.
MR_C_API MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ptr(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b, MR_C_std_optional_MR_CSharp_SA *const *c);

/// Generated from function `MR::CSharp::test_optshtriv_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_optshtriv`, pass a null pointer to use it.
MR_C_API const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cptr(const MR_C_std_optional_MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *const *c);

// Tag types:
/// Generated from function `MR::CSharp::test_tag`.
MR_C_API void MR_CSharp_test_tag(void);

/// Generated from function `MR::CSharp::test_tag_cref`.
MR_C_API void MR_CSharp_test_tag_cref(void);

/// Generated from function `MR::CSharp::test_tag_ptr`.
MR_C_API bool MR_CSharp_test_tag_ptr(void);

/// Generated from function `MR::CSharp::test_tag_cptr`.
MR_C_API bool MR_CSharp_test_tag_cptr(void);

/// Generated from function `MR::CSharp::test_variant`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_variant`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_std_monostate_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b);

/// Generated from function `MR::CSharp::test_variant_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_variant`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ref(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *b);

/// Generated from function `MR::CSharp::test_variant_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_variant`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cref(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b);

/// Generated from function `MR::CSharp::test_variant_ptr`.
/// Parameter `b` has a default argument: `&default_variant`, pass a null pointer to use it.
MR_C_API MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ptr(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *const *b);

/// Generated from function `MR::CSharp::test_variant_cptr`.
/// Parameter `b` has a default argument: `&default_variant`, pass a null pointer to use it.
MR_C_API const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cptr(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *const *b);

// Test a variant that has duplicate element types.
/// Generated from function `MR::CSharp::test_variant_with_repeated_types`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_std_monostate_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_std_monostate_int_float_float *MR_CSharp_test_variant_with_repeated_types(void);

// Input and output streams:
/// Generated from function `MR::CSharp::test_iostreams_ref`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_ostream *MR_CSharp_test_iostreams_ref(MR_C_std_istream *_1);

/// Generated from function `MR::CSharp::test_iostreams_ptr`.
MR_C_API MR_C_std_ostream *MR_CSharp_test_iostreams_ptr(MR_C_std_istream *_1);

/// Generated from function `MR::CSharp::test_iostreams_cref`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_ostream *MR_CSharp_test_iostreams_cref(const MR_C_std_istream *_1);

/// Generated from function `MR::CSharp::test_iostreams_cptr`.
MR_C_API const MR_C_std_ostream *MR_CSharp_test_iostreams_cptr(const MR_C_std_istream *_1);

/// Generated from function `MR::CSharp::test_uniqueptr`.
/// Parameter `a` should point to a single object rather than to an array.
/// Parameter `a` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
/// Parameter `b` (after dereferencing) should point to a single object rather than to an array.
/// Parameter `b` takes ownership of the (deferenced) passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
/// Parameter `b` has a default argument: `std::move(default_uniqueptr)`, pass a null pointer to use it.
/// The returned pointer is owning! If not null, it must be deallocated using `MR_C_Free().
MR_C_API int *MR_CSharp_test_uniqueptr(int *a, int *const *b);

/// Generated from function `MR::CSharp::test_uniqueptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_uniqueptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ref(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b);

/// Generated from function `MR::CSharp::test_uniqueptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_uniqueptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cref(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b);

/// Generated from function `MR::CSharp::test_uniqueptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_uniqueptr`, pass a null pointer to use it.
MR_C_API MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ptr(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b, MR_C_std_unique_ptr_int *const *c);

/// Generated from function `MR::CSharp::test_uniqueptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_uniqueptr`, pass a null pointer to use it.
MR_C_API const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cptr(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b, const MR_C_std_unique_ptr_int *const *c);

/// Generated from function `MR::CSharp::test_plainarr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int (*MR_CSharp_test_plainarr_ref(int (*a)[42], int (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (*MR_CSharp_test_plainarr_cref(const int (*a)[42], const int (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::PlainArray&&)default_plainarr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API int (*MR_CSharp_test_plainarr_rref(int (*a)[42], int (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::PlainArray&&)default_plainarr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const int (*MR_CSharp_test_plainarr_crref(const int (*a)[42], const int (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarr`, pass a null pointer to use it.
MR_C_API int (*MR_CSharp_test_plainarr_ptr(int (*a)[42], int (*b)[42], int (*const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarr`, pass a null pointer to use it.
MR_C_API const int (*MR_CSharp_test_plainarr_cptr(const int (*a)[42], const int (*b)[42], const int (*const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarr2_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarr2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int (*MR_CSharp_test_plainarr2_ref(int (*a)[10][20], int (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarr2_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarr2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (*MR_CSharp_test_plainarr2_cref(const int (*a)[10][20], const int (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarr2_rref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::PlainArray2&&)default_plainarr2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API int (*MR_CSharp_test_plainarr2_rref(int (*a)[10][20], int (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarr2_crref`.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` has a default argument: `(MR::CSharp::PlainArray2&&)default_plainarr2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
MR_C_API const int (*MR_CSharp_test_plainarr2_crref(const int (*a)[10][20], const int (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarr2_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarr2`, pass a null pointer to use it.
MR_C_API int (*MR_CSharp_test_plainarr2_ptr(int (*a)[10][20], int (*b)[10][20], int (*const *c)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarr2_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarr2`, pass a null pointer to use it.
MR_C_API const int (*MR_CSharp_test_plainarr2_cptr(const int (*a)[10][20], const int (*b)[10][20], const int (*const *c)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarrenum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarrenum`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ref(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarrenum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarrenum`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cref(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarrenum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarrenum`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ptr(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42], MR_CSharp_E1 (*const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarrenum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarrenum`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cptr(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42], const MR_CSharp_E1 (*const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_plainarrenum2_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarrenum2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ref(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarrenum2_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_plainarrenum2`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cref(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarrenum2_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarrenum2`, pass a null pointer to use it.
MR_C_API MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ptr(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20], MR_CSharp_E1 (*const *c)[10][20]))[10][20];

/// Generated from function `MR::CSharp::test_plainarrenum2_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_plainarrenum2`, pass a null pointer to use it.
MR_C_API const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cptr(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20], const MR_CSharp_E1 (*const *c)[10][20]))[10][20];

// Some multi-level pointer madness:
/// Generated from function `MR::CSharp::test_ptrs1`.
/// Parameter `ref` can not be null. It is a single object.
MR_C_API int (**MR_CSharp_test_ptrs1(int (**ptr)[42], int (**ref)[42]))[42];

/// Generated from function `MR::CSharp::test_ptrs2`.
/// Parameter `ref` can not be null. It is a single object.
MR_C_API int (***MR_CSharp_test_ptrs2(int (***ptr)[42], int (***ref)[42]))[42];

/// Generated from function `MR::CSharp::test_intptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int **MR_CSharp_test_intptr_ref(int **a, int **b);

/// Generated from function `MR::CSharp::test_intptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *const *MR_CSharp_test_intptr_cref(int *const *a, int *const *b);

/// Generated from function `MR::CSharp::test_intptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intptr`, pass a null pointer to use it.
MR_C_API int **MR_CSharp_test_intptr_ptr(int **a, int **b, int **const *c);

/// Generated from function `MR::CSharp::test_intptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intptr`, pass a null pointer to use it.
MR_C_API int *const *MR_CSharp_test_intptr_cptr(int *const *a, int *const *b, int *const *const *c);

/// Generated from function `MR::CSharp::test_intcptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int **MR_CSharp_test_intcptr_ref(const int **a, const int **b);

/// Generated from function `MR::CSharp::test_intcptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *const *MR_CSharp_test_intcptr_cref(const int *const *a, const int *const *b);

/// Generated from function `MR::CSharp::test_intcptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intcptr`, pass a null pointer to use it.
MR_C_API const int **MR_CSharp_test_intcptr_ptr(const int **a, const int **b, const int **const *c);

/// Generated from function `MR::CSharp::test_intcptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intcptr`, pass a null pointer to use it.
MR_C_API const int *const *MR_CSharp_test_intcptr_cptr(const int *const *a, const int *const *b, const int *const *const *c);

/// Generated from function `MR::CSharp::test_intptrptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intptrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int ***MR_CSharp_test_intptrptr_ref(int ***a, int ***b);

/// Generated from function `MR::CSharp::test_intptrptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_intptrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int **const *MR_CSharp_test_intptrptr_cref(int **const *a, int **const *b);

/// Generated from function `MR::CSharp::test_intptrptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intptrptr`, pass a null pointer to use it.
MR_C_API int ***MR_CSharp_test_intptrptr_ptr(int ***a, int ***b, int ***const *c);

/// Generated from function `MR::CSharp::test_intptrptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_intptrptr`, pass a null pointer to use it.
MR_C_API int **const *MR_CSharp_test_intptrptr_cptr(int **const *a, int **const *b, int **const *const *c);

/// Generated from function `MR::CSharp::test_voidptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_voidptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API void **MR_CSharp_test_voidptr_ref(void **a, void **b);

/// Generated from function `MR::CSharp::test_voidptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_voidptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API void *const *MR_CSharp_test_voidptr_cref(void *const *a, void *const *b);

/// Generated from function `MR::CSharp::test_voidptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_voidptr`, pass a null pointer to use it.
MR_C_API void **MR_CSharp_test_voidptr_ptr(void **a, void **b, void **const *c);

/// Generated from function `MR::CSharp::test_voidptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_voidptr`, pass a null pointer to use it.
MR_C_API void *const *MR_CSharp_test_voidptr_cptr(void *const *a, void *const *b, void *const *const *c);

/// Generated from function `MR::CSharp::test_voidptrptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_voidptrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API void ***MR_CSharp_test_voidptrptr_ref(void ***a, void ***b);

/// Generated from function `MR::CSharp::test_voidptrptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_voidptrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API void **const *MR_CSharp_test_voidptrptr_cref(void **const *a, void **const *b);

/// Generated from function `MR::CSharp::test_voidptrptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_voidptrptr`, pass a null pointer to use it.
MR_C_API void ***MR_CSharp_test_voidptrptr_ptr(void ***a, void ***b, void ***const *c);

/// Generated from function `MR::CSharp::test_voidptrptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_voidptrptr`, pass a null pointer to use it.
MR_C_API void **const *MR_CSharp_test_voidptrptr_cptr(void **const *a, void **const *b, void **const *const *c);

/// Generated from function `MR::CSharp::test_arrptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_arrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int (**MR_CSharp_test_arrptr_ref(int (**a)[42], int (**b)[42]))[42];

/// Generated from function `MR::CSharp::test_arrptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_arrptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int (*const *MR_CSharp_test_arrptr_cref(int (*const *a)[42], int (*const *b)[42]))[42];

/// Generated from function `MR::CSharp::test_arrptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_arrptr`, pass a null pointer to use it.
MR_C_API int (**MR_CSharp_test_arrptr_ptr(int (**a)[42], int (**b)[42], int (**const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_arrptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_arrptr`, pass a null pointer to use it.
MR_C_API int (*const *MR_CSharp_test_arrptr_cptr(int (*const *a)[42], int (*const *b)[42], int (*const *const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_arrcptr_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_arrcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (**MR_CSharp_test_arrcptr_ref(const int (**a)[42], const int (**b)[42]))[42];

/// Generated from function `MR::CSharp::test_arrcptr_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_arrcptr`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int (*const *MR_CSharp_test_arrcptr_cref(const int (*const *a)[42], const int (*const *b)[42]))[42];

/// Generated from function `MR::CSharp::test_arrcptr_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_arrcptr`, pass a null pointer to use it.
MR_C_API const int (**MR_CSharp_test_arrcptr_ptr(const int (**a)[42], const int (**b)[42], const int (**const *c)[42]))[42];

/// Generated from function `MR::CSharp::test_arrcptr_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_arrcptr`, pass a null pointer to use it.
MR_C_API const int (*const *MR_CSharp_test_arrcptr_cptr(const int (*const *a)[42], const int (*const *b)[42], const int (*const *const *c)[42]))[42];

/// Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_NameConflicts_Get_name_conflicts(const MR_CSharp_NameConflicts *_this);

/// Modifies a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `name_conflicts`.
MR_C_API void MR_CSharp_NameConflicts_Set_name_conflicts(MR_CSharp_NameConflicts *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_NameConflicts_GetMutable_name_conflicts(MR_CSharp_NameConflicts *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_Get_a(const MR_CSharp_NameConflicts *_this);

/// Modifies a member variable of class `MR::CSharp::NameConflicts` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_NameConflicts_Set_a(MR_CSharp_NameConflicts *_this, const MR_CSharp_NameConflicts_A *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::NameConflicts` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_GetMutable_a(MR_CSharp_NameConflicts *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NameConflicts_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NameConflicts_DestroyArray()`.
/// Use `MR_CSharp_NameConflicts_OffsetMutablePtr()` and `MR_CSharp_NameConflicts_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::NameConflicts` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NameConflicts_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFrom(int name_conflicts, const MR_CSharp_NameConflicts_A *a);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetPtr(const MR_CSharp_NameConflicts *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetMutablePtr(MR_CSharp_NameConflicts *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NameConflicts::NameConflicts`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NameConflicts_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFromAnother(const MR_CSharp_NameConflicts *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NameConflicts`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NameConflicts_Destroy(const MR_CSharp_NameConflicts *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NameConflicts`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NameConflicts_DestroyArray(const MR_CSharp_NameConflicts *_this);

/// Generated from method `MR::CSharp::NameConflicts::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_AssignFromAnother(MR_CSharp_NameConflicts *_this, const MR_CSharp_NameConflicts *_other);

/// Generated from method `MR::CSharp::NameConflicts::name_Conflicts`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_NameConflicts_name_Conflicts(MR_CSharp_NameConflicts *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NameConflicts_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_NameConflicts_A_DestroyArray()`.
/// Use `MR_CSharp_NameConflicts_A_OffsetMutablePtr()` and `MR_CSharp_NameConflicts_A_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetPtr(const MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetMutablePtr(MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::NameConflicts::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_NameConflicts_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_ConstructFromAnother(const MR_CSharp_NameConflicts_A *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_NameConflicts_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NameConflicts_A_Destroy(const MR_CSharp_NameConflicts_A *_this);

/// Destroys a heap-allocated array of `MR_CSharp_NameConflicts_A`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_NameConflicts_A_DestroyArray(const MR_CSharp_NameConflicts_A *_this);

/// Generated from method `MR::CSharp::NameConflicts::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_AssignFromAnother(MR_CSharp_NameConflicts_A *_this, const MR_CSharp_NameConflicts_A *_other);

/// Generated from function `MR::CSharp::nameConflicts`.
MR_C_API void MR_CSharp_nameConflicts(void);

/// Generated from method `MR::CSharp::NameConflictsExposed::name_Conflicts_exposed`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_NameConflictsExposed_name_Conflicts_exposed(MR_CSharp_NameConflictsExposed *_this);

/// Generated from function `MR::CSharp::nameConflictsExposed`.
MR_C_API void MR_CSharp_nameConflictsExposed(void);

// Test how template arguments are added to function names when needed to avoid ambiguities.
/// Generated from function `MR::CSharp::template_a<int>`.
MR_C_API void MR_CSharp_template_a_int(int _1);

// Test how template arguments are added to function names when needed to avoid ambiguities.
/// Generated from function `MR::CSharp::template_a<float>`.
MR_C_API void MR_CSharp_template_a_float(float _1);

/// Generated from function `MR::CSharp::template_b<int>`.
MR_C_API int MR_CSharp_template_b_int(void);

/// Generated from function `MR::CSharp::template_b<float>`.
MR_C_API float MR_CSharp_template_b_float(void);

/// Generated from function `MR::CSharp::template_c<int>`.
MR_C_API void MR_CSharp_template_c_int(void);

/// Generated from function `MR::CSharp::template_c<float>`.
MR_C_API void MR_CSharp_template_c_float(void);

/// Generated from function `MR::CSharp::instantiate`.
MR_C_API void MR_CSharp_instantiate(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_AmbiguousTemplates_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_AmbiguousTemplates_DestroyArray()`.
/// Use `MR_CSharp_AmbiguousTemplates_OffsetMutablePtr()` and `MR_CSharp_AmbiguousTemplates_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetPtr(const MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetMutablePtr(MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::AmbiguousTemplates::AmbiguousTemplates`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_AmbiguousTemplates_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_ConstructFromAnother(const MR_CSharp_AmbiguousTemplates *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_AmbiguousTemplates`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_AmbiguousTemplates_Destroy(const MR_CSharp_AmbiguousTemplates *_this);

/// Destroys a heap-allocated array of `MR_CSharp_AmbiguousTemplates`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_AmbiguousTemplates_DestroyArray(const MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::AmbiguousTemplates::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_AssignFromAnother(MR_CSharp_AmbiguousTemplates *_this, const MR_CSharp_AmbiguousTemplates *_other);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_a<int>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_AmbiguousTemplates_template_a_int(MR_CSharp_AmbiguousTemplates *_this, int _1);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_a<float>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_AmbiguousTemplates_template_a_float(MR_CSharp_AmbiguousTemplates *_this, float _1);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_b<int>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_CSharp_AmbiguousTemplates_template_b_int(MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_b<float>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API float MR_CSharp_AmbiguousTemplates_template_b_float(MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_c<int>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_AmbiguousTemplates_template_c_int(MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::AmbiguousTemplates::template_c<float>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_AmbiguousTemplates_template_c_float(MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::AmbiguousTemplates::instantiate`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_AmbiguousTemplates_instantiate(MR_CSharp_AmbiguousTemplates *_this);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ConstNonconstConflicts_foo_int(MR_CSharp_ConstNonconstConflicts *_this, int _1);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ConstNonconstConflicts_foo_const_float(const MR_CSharp_ConstNonconstConflicts *_this, float _1);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ConstNonconstConflicts_foo_char(MR_CSharp_ConstNonconstConflicts *_this, char _1);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CSharp_ConstNonconstConflicts_foo_const_char(const MR_CSharp_ConstNonconstConflicts *_this, char _1);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this);

// Since this returns void, it gets rewritten into a method.
/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int(MR_CSharp_ConstNonconstConflicts *_this, int _1);

/// Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int(const MR_CSharp_ConstNonconstConflicts *_this, int _1);

/// Generated from function `MR::CSharp::operator-`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1);

/// Generated from function `MR::CSharp::operator-`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API int MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1);

// Since this returns void, it gets rewritten into a method.
/// Generated from function `MR::CSharp::operator!`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1);

/// Generated from function `MR::CSharp::operator!`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1);

/// Generated from function `MR::CSharp::operator&`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_bitand_int_MR_CSharp_ConstNonconstConflicts_ref(int _1, MR_CSharp_ConstNonconstConflicts *_2);

/// Generated from function `MR::CSharp::operator&`.
/// Parameter `_2` can not be null. It is a single object.
MR_C_API int MR_C_bitand_int_const_MR_CSharp_ConstNonconstConflicts_ref(int _1, const MR_CSharp_ConstNonconstConflicts *_2);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_sa(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
/// The reference to the parameter `value` might be preserved in this object in element `sa`.
/// When this function is called, this object will drop object references it had previously in `sa`.
MR_C_API void MR_CSharp_ClassMemberPointersClass_Set_sa(MR_CSharp_A *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_sa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_sb(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
/// The reference to the parameter `value` might be preserved in this object in element `sb`.
/// When this function is called, this object will drop object references it had previously in `sb`.
MR_C_API void MR_CSharp_ClassMemberPointersClass_Set_sb(const MR_CSharp_A *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_sb(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sc`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_sc(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sd`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_sd(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_a(const MR_CSharp_ClassMemberPointersClass *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_ClassMemberPointersClass_Set_a(MR_CSharp_ClassMemberPointersClass *_this, MR_CSharp_A *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_a(MR_CSharp_ClassMemberPointersClass *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_b(const MR_CSharp_ClassMemberPointersClass *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `b`.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_CSharp_ClassMemberPointersClass_Set_b(MR_CSharp_ClassMemberPointersClass *_this, const MR_CSharp_A *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_b(MR_CSharp_ClassMemberPointersClass *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_c(const MR_CSharp_ClassMemberPointersClass *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_d(const MR_CSharp_ClassMemberPointersClass *_this);

/// Generated from constructor `MR::CSharp::ClassMemberPointersClass::ClassMemberPointersClass`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersClass_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_ConstructFromAnother(const MR_CSharp_ClassMemberPointersClass *_other);

/// Constructs `MR::CSharp::ClassMemberPointersClass` elementwise.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// The reference to the parameter `b` might be preserved in the constructed object.
/// Parameter `c` can not be null. It is a single object.
/// The reference to the parameter `c` might be preserved in the constructed object.
/// Parameter `d` can not be null. It is a single object.
/// The reference to the parameter `d` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersClass_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_ConstructFrom(MR_CSharp_A *a, const MR_CSharp_A *b, MR_CSharp_A *c, const MR_CSharp_A *d);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetPtr(const MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetMutablePtr(MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_ClassMemberPointersClass`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersClass_Destroy(const MR_CSharp_ClassMemberPointersClass *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ClassMemberPointersClass`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersClass_DestroyArray(const MR_CSharp_ClassMemberPointersClass *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_sa(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
/// The reference to the parameter `value` might be preserved in this object in element `sa`.
/// When this function is called, this object will drop object references it had previously in `sa`.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_Set_sa(MR_CSharp_ExposedLayout *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_sa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_sb(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
/// The reference to the parameter `value` might be preserved in this object in element `sb`.
/// When this function is called, this object will drop object references it had previously in `sb`.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_Set_sb(const MR_CSharp_ExposedLayout *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_sb(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sc`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_sc(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sd`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_sd(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_a(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_Set_a(MR_CSharp_ClassMemberPointersExposed *_this, MR_CSharp_ExposedLayout *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_a(MR_CSharp_ClassMemberPointersExposed *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_b(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `b`.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_Set_b(MR_CSharp_ClassMemberPointersExposed *_this, const MR_CSharp_ExposedLayout *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_b(MR_CSharp_ClassMemberPointersExposed *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_c(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_d(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Generated from constructor `MR::CSharp::ClassMemberPointersExposed::ClassMemberPointersExposed`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersExposed_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother(const MR_CSharp_ClassMemberPointersExposed *_other);

/// Constructs `MR::CSharp::ClassMemberPointersExposed` elementwise.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// The reference to the parameter `b` might be preserved in the constructed object.
/// Parameter `c` can not be null. It is a single object.
/// The reference to the parameter `c` might be preserved in the constructed object.
/// Parameter `d` can not be null. It is a single object.
/// The reference to the parameter `d` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersExposed_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_ConstructFrom(MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *c, const MR_CSharp_ExposedLayout *d);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetPtr(const MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetMutablePtr(MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_ClassMemberPointersExposed`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_Destroy(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ClassMemberPointersExposed`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersExposed_DestroyArray(const MR_CSharp_ClassMemberPointersExposed *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_sa(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
/// The reference to the parameter `value` might be preserved in this object in element `sa`.
/// When this function is called, this object will drop object references it had previously in `sa`.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_Set_sa(unsigned short *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_sa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_sb(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
/// The reference to the parameter `value` might be preserved in this object in element `sb`.
/// When this function is called, this object will drop object references it had previously in `sb`.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_Set_sb(const unsigned short *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_sb(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sc`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_sc(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sd`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_sd(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_a(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_Set_a(MR_CSharp_ClassMemberPointersUshort *_this, unsigned short *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_a(MR_CSharp_ClassMemberPointersUshort *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_b(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `b`.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_Set_b(MR_CSharp_ClassMemberPointersUshort *_this, const unsigned short *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_b(MR_CSharp_ClassMemberPointersUshort *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_c(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_d(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Generated from constructor `MR::CSharp::ClassMemberPointersUshort::ClassMemberPointersUshort`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersUshort_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother(const MR_CSharp_ClassMemberPointersUshort *_other);

/// Constructs `MR::CSharp::ClassMemberPointersUshort` elementwise.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// The reference to the parameter `b` might be preserved in the constructed object.
/// Parameter `c` can not be null. It is a single object.
/// The reference to the parameter `c` might be preserved in the constructed object.
/// Parameter `d` can not be null. It is a single object.
/// The reference to the parameter `d` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersUshort_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_ConstructFrom(unsigned short *a, const unsigned short *b, unsigned short *c, const unsigned short *d);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetPtr(const MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetMutablePtr(MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_ClassMemberPointersUshort`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_Destroy(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ClassMemberPointersUshort`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersUshort_DestroyArray(const MR_CSharp_ClassMemberPointersUshort *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool *const *MR_CSharp_ClassMemberPointersBool_Get_sa(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
/// The reference to the parameter `value` might be preserved in this object in element `sa`.
/// When this function is called, this object will drop object references it had previously in `sa`.
MR_C_API void MR_CSharp_ClassMemberPointersBool_Set_sa(bool *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool **MR_CSharp_ClassMemberPointersBool_GetMutable_sa(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool *const *MR_CSharp_ClassMemberPointersBool_Get_sb(void);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
/// The reference to the parameter `value` might be preserved in this object in element `sb`.
/// When this function is called, this object will drop object references it had previously in `sb`.
MR_C_API void MR_CSharp_ClassMemberPointersBool_Set_sb(const bool *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool **MR_CSharp_ClassMemberPointersBool_GetMutable_sb(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sc`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool *MR_CSharp_ClassMemberPointersBool_Get_sc(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sd`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool *MR_CSharp_ClassMemberPointersBool_Get_sd(void);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool *const *MR_CSharp_ClassMemberPointersBool_Get_a(const MR_CSharp_ClassMemberPointersBool *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_ClassMemberPointersBool_Set_a(MR_CSharp_ClassMemberPointersBool *_this, bool *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool **MR_CSharp_ClassMemberPointersBool_GetMutable_a(MR_CSharp_ClassMemberPointersBool *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool *const *MR_CSharp_ClassMemberPointersBool_Get_b(const MR_CSharp_ClassMemberPointersBool *_this);

/// Modifies a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `b`.
/// When this function is called, this object will drop object references it had previously in `b`.
MR_C_API void MR_CSharp_ClassMemberPointersBool_Set_b(MR_CSharp_ClassMemberPointersBool *_this, const bool *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool **MR_CSharp_ClassMemberPointersBool_GetMutable_b(MR_CSharp_ClassMemberPointersBool *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API bool *MR_CSharp_ClassMemberPointersBool_Get_c(const MR_CSharp_ClassMemberPointersBool *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const bool *MR_CSharp_ClassMemberPointersBool_Get_d(const MR_CSharp_ClassMemberPointersBool *_this);

/// Generated from constructor `MR::CSharp::ClassMemberPointersBool::ClassMemberPointersBool`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersBool_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_ConstructFromAnother(const MR_CSharp_ClassMemberPointersBool *_other);

/// Constructs `MR::CSharp::ClassMemberPointersBool` elementwise.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// The reference to the parameter `b` might be preserved in the constructed object.
/// Parameter `c` can not be null. It is a single object.
/// The reference to the parameter `c` might be preserved in the constructed object.
/// Parameter `d` can not be null. It is a single object.
/// The reference to the parameter `d` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_ClassMemberPointersBool_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_ConstructFrom(bool *a, const bool *b, bool *c, const bool *d);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetPtr(const MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetMutablePtr(MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_CSharp_ClassMemberPointersBool`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersBool_Destroy(const MR_CSharp_ClassMemberPointersBool *_this);

/// Destroys a heap-allocated array of `MR_CSharp_ClassMemberPointersBool`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_ClassMemberPointersBool_DestroyArray(const MR_CSharp_ClassMemberPointersBool *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::LifetimesA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_LifetimesA_Get_x(const MR_CSharp_LifetimesA *_this);

/// Modifies a member variable of class `MR::CSharp::LifetimesA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop object references it had previously in `x`.
MR_C_API void MR_CSharp_LifetimesA_Set_x(MR_CSharp_LifetimesA *_this, int value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesA` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_LifetimesA_GetMutable_x(MR_CSharp_LifetimesA *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_LifetimesA_DestroyArray()`.
/// Use `MR_CSharp_LifetimesA_OffsetMutablePtr()` and `MR_CSharp_LifetimesA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::LifetimesA` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesA_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFrom(int x);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetPtr(const MR_CSharp_LifetimesA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetMutablePtr(MR_CSharp_LifetimesA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::LifetimesA::LifetimesA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFromAnother(const MR_CSharp_LifetimesA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_LifetimesA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesA_Destroy(const MR_CSharp_LifetimesA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_LifetimesA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesA_DestroyArray(const MR_CSharp_LifetimesA *_this);

/// Generated from method `MR::CSharp::LifetimesA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_AssignFromAnother(MR_CSharp_LifetimesA *_this, const MR_CSharp_LifetimesA *_other);

// Some degenerate cases that have to be ignored in C#, because we don't support the lifetime operations for those types.
/// Generated from method `MR::CSharp::LifetimesA::foo`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_LifetimesA_foo(MR_CSharp_LifetimesA *_this);

/// Generated from method `MR::CSharp::LifetimesA::bar`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in this object.
MR_C_API void MR_CSharp_LifetimesA_bar(MR_CSharp_LifetimesA *_this, int *ref);

/// Returns a pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_Get_a(const MR_CSharp_LifetimesB *_this);

/// Modifies a member variable of class `MR::CSharp::LifetimesB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_LifetimesB_Set_a(MR_CSharp_LifetimesB *_this, const MR_CSharp_LifetimesA *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_GetMutable_a(MR_CSharp_LifetimesB *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_LifetimesB_DestroyArray()`.
/// Use `MR_CSharp_LifetimesB_OffsetMutablePtr()` and `MR_CSharp_LifetimesB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::LifetimesB` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesB_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFrom(const MR_CSharp_LifetimesA *a);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetPtr(const MR_CSharp_LifetimesB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetMutablePtr(MR_CSharp_LifetimesB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::LifetimesB::LifetimesB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFromAnother(const MR_CSharp_LifetimesB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_LifetimesB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesB_Destroy(const MR_CSharp_LifetimesB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_LifetimesB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesB_DestroyArray(const MR_CSharp_LifetimesB *_this);

/// Generated from method `MR::CSharp::LifetimesB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_AssignFromAnother(MR_CSharp_LifetimesB *_this, const MR_CSharp_LifetimesB *_other);

// `--infer-lifetime-iterators` should act on those:
/// Generated from method `MR::CSharp::LifetimesB::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_begin(MR_CSharp_LifetimesB *_this);

/// Generated from method `MR::CSharp::LifetimesB::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_end(MR_CSharp_LifetimesB *_this);

/// Generated from method `MR::CSharp::LifetimesB::operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesB_ref(MR_CSharp_LifetimesB *_this);

// `--infer-lifetime-iterators` should act on those:
/// Generated from function `MR::CSharp::begin`.
/// Parameter `b` can not be null. It is a single object.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b);

/// Generated from function `MR::CSharp::end`.
/// Parameter `b` can not be null. It is a single object.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b);

/// Generated from function `MR::CSharp::operator*`.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_LifetimesA *MR_C_deref_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b);

/// Returns a pointer to a member variable of class `MR::CSharp::LifetimesC` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_LifetimesC_Get_a(const MR_CSharp_LifetimesC *_this);

/// Modifies a member variable of class `MR::CSharp::LifetimesC` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_LifetimesC_Set_a(MR_CSharp_LifetimesC *_this, const MR_CSharp_LifetimesA *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesC` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesC_GetMutable_a(MR_CSharp_LifetimesC *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_LifetimesC_DestroyArray()`.
/// Use `MR_CSharp_LifetimesC_OffsetMutablePtr()` and `MR_CSharp_LifetimesC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CSharp::LifetimesC` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// The reference to the parameter `a` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesC_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFrom(const MR_CSharp_LifetimesA *a);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetPtr(const MR_CSharp_LifetimesC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetMutablePtr(MR_CSharp_LifetimesC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::LifetimesC::LifetimesC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFromAnother(const MR_CSharp_LifetimesC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_LifetimesC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesC_Destroy(const MR_CSharp_LifetimesC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_LifetimesC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesC_DestroyArray(const MR_CSharp_LifetimesC *_this);

/// Generated from method `MR::CSharp::LifetimesC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_AssignFromAnother(MR_CSharp_LifetimesC *_this, const MR_CSharp_LifetimesC *_other);

// `--infer-lifetime-iterators` should act on those:
/// Generated from function `MR::CSharp::begin`.
/// Parameter `c` can not be null. It is a single object.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c);

/// Generated from function `MR::CSharp::end`.
/// Parameter `c` can not be null. It is a single object.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c);

/// Generated from function `MR::CSharp::operator*`.
/// Parameter `c` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesC(const MR_CSharp_LifetimesC *c);

/// Returns a pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_Get_a(const MR_CSharp_LifetimesD *_this);

/// Modifies a member variable of class `MR::CSharp::LifetimesD` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
/// The reference to the parameter `value` might be preserved in this object in element `a`.
/// When this function is called, this object will drop object references it had previously in `a`.
MR_C_API void MR_CSharp_LifetimesD_Set_a(MR_CSharp_LifetimesD *_this, const MR_CSharp_LifetimesA *value);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_GetMutable_a(MR_CSharp_LifetimesD *_this);

/// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_ConstructFromAnother(const MR_CSharp_LifetimesD *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetPtr(const MR_CSharp_LifetimesD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetMutablePtr(MR_CSharp_LifetimesD *ptr, ptrdiff_t i);

// Store param references in this. The two annotation styles are equivalent for constructors.
/// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in the constructed object.
/// Parameter `other_ref` can not be null. It is a single object.
/// The reference to the parameter `other_ref` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_2(MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref);

// `--infer-lifetime-constructors` should act on this.
/// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
/// Parameter `ref` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA(MR_CSharp_LifetimesA *ref);

// Store reference to this in param.
// `--infer-lifetime-constructors` skips this, because we already have custom attributes.
/// Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
/// Parameter `ref` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_LifetimesD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB(MR_CSharp_LifetimesB *ref);

/// Destroys a heap-allocated instance of `MR_CSharp_LifetimesD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesD_Destroy(const MR_CSharp_LifetimesD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_LifetimesD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_LifetimesD_DestroyArray(const MR_CSharp_LifetimesD *_this);

/// Generated from method `MR::CSharp::LifetimesD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_AssignFromAnother(MR_CSharp_LifetimesD *_this, const MR_CSharp_LifetimesD *_other);

/// Generated from method `MR::CSharp::LifetimesD::get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_get(MR_CSharp_LifetimesD *_this);

/// Generated from method `MR::CSharp::LifetimesD::return_ref`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref);

/// Generated from method `MR::CSharp::LifetimesD::return_ref_static`.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref_static(MR_CSharp_LifetimesA *ref);

/// Generated from method `MR::CSharp::LifetimesD::store_ref_in_this`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in this object.
MR_C_API void MR_CSharp_LifetimesD_store_ref_in_this(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref);

/// Generated from method `MR::CSharp::LifetimesD::store_ref_in_param`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
/// The reference to the parameter `ref` might be preserved in the parameter `other_ref`.
/// Parameter `other_ref` can not be null. It is a single object.
MR_C_API void MR_CSharp_LifetimesD_store_ref_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref);

/// Generated from method `MR::CSharp::LifetimesD::store_this_in_param`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ref` can not be null. It is a single object.
MR_C_API void MR_CSharp_LifetimesD_store_this_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableA` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableA_Get_arr(const MR_CSharp_IterableA *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableA` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableA_GetMutable_arr(MR_CSharp_IterableA *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableA` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableA_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableA *MR_CSharp_IterableA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableA_DestroyArray()`.
/// Use `MR_CSharp_IterableA_OffsetMutablePtr()` and `MR_CSharp_IterableA_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableA *MR_CSharp_IterableA_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetPtr(const MR_CSharp_IterableA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetMutablePtr(MR_CSharp_IterableA *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableA::IterableA`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableA_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableA *MR_CSharp_IterableA_ConstructFromAnother(const MR_CSharp_IterableA *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableA_Destroy(const MR_CSharp_IterableA *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableA`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableA_DestroyArray(const MR_CSharp_IterableA *_this);

/// Generated from method `MR::CSharp::IterableA::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableA *MR_CSharp_IterableA_AssignFromAnother(MR_CSharp_IterableA *_this, const MR_CSharp_IterableA *_other);

/// Generated from method `MR::CSharp::IterableA::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_IterableA_begin(const MR_CSharp_IterableA *_this);

/// Generated from method `MR::CSharp::IterableA::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_IterableA_end(const MR_CSharp_IterableA *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableB` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableB_Get_arr(const MR_CSharp_IterableB *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableB` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableB_GetMutable_arr(MR_CSharp_IterableB *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableB` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableB_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableB *MR_CSharp_IterableB_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableB_DestroyArray()`.
/// Use `MR_CSharp_IterableB_OffsetMutablePtr()` and `MR_CSharp_IterableB_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableB *MR_CSharp_IterableB_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetPtr(const MR_CSharp_IterableB *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetMutablePtr(MR_CSharp_IterableB *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableB::IterableB`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableB_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableB *MR_CSharp_IterableB_ConstructFromAnother(const MR_CSharp_IterableB *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableB_Destroy(const MR_CSharp_IterableB *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableB`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableB_DestroyArray(const MR_CSharp_IterableB *_this);

/// Generated from method `MR::CSharp::IterableB::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableB *MR_CSharp_IterableB_AssignFromAnother(MR_CSharp_IterableB *_this, const MR_CSharp_IterableB *_other);

/// Generated from method `MR::CSharp::IterableB::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_CSharp_IterableB_begin(MR_CSharp_IterableB *_this);

/// Generated from method `MR::CSharp::IterableB::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_CSharp_IterableB_end(MR_CSharp_IterableB *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableC` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableC_Get_arr(const MR_CSharp_IterableC *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableC` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableC_GetMutable_arr(MR_CSharp_IterableC *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableC` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableC_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableC *MR_CSharp_IterableC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableC_DestroyArray()`.
/// Use `MR_CSharp_IterableC_OffsetMutablePtr()` and `MR_CSharp_IterableC_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableC *MR_CSharp_IterableC_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetPtr(const MR_CSharp_IterableC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetMutablePtr(MR_CSharp_IterableC *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableC::IterableC`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableC_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableC *MR_CSharp_IterableC_ConstructFromAnother(const MR_CSharp_IterableC *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableC_Destroy(const MR_CSharp_IterableC *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableC`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableC_DestroyArray(const MR_CSharp_IterableC *_this);

/// Generated from method `MR::CSharp::IterableC::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableC *MR_CSharp_IterableC_AssignFromAnother(MR_CSharp_IterableC *_this, const MR_CSharp_IterableC *_other);

/// Generated from method `MR::CSharp::IterableC::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_CSharp_IterableC_begin(MR_CSharp_IterableC *_this);

/// Generated from method `MR::CSharp::IterableC::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API int *MR_CSharp_IterableC_end(MR_CSharp_IterableC *_this);

/// Generated from method `MR::CSharp::IterableC::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_IterableC_begin_const(const MR_CSharp_IterableC *_this);

/// Generated from method `MR::CSharp::IterableC::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_IterableC_end_const(const MR_CSharp_IterableC *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableD` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableD_Get_arr(const MR_CSharp_IterableD *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableD` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableD_GetMutable_arr(MR_CSharp_IterableD *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableD` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableD_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableD *MR_CSharp_IterableD_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableD_DestroyArray()`.
/// Use `MR_CSharp_IterableD_OffsetMutablePtr()` and `MR_CSharp_IterableD_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableD *MR_CSharp_IterableD_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetPtr(const MR_CSharp_IterableD *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetMutablePtr(MR_CSharp_IterableD *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableD::IterableD`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableD_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableD *MR_CSharp_IterableD_ConstructFromAnother(const MR_CSharp_IterableD *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableD_Destroy(const MR_CSharp_IterableD *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableD`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableD_DestroyArray(const MR_CSharp_IterableD *_this);

/// Generated from method `MR::CSharp::IterableD::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableD *MR_CSharp_IterableD_AssignFromAnother(MR_CSharp_IterableD *_this, const MR_CSharp_IterableD *_other);

/// Generated from function `MR::CSharp::begin`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_begin_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self);

/// Generated from function `MR::CSharp::end`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_end_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableE` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableE_Get_arr(const MR_CSharp_IterableE *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableE` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableE_GetMutable_arr(MR_CSharp_IterableE *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableE` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableE_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableE *MR_CSharp_IterableE_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableE_DestroyArray()`.
/// Use `MR_CSharp_IterableE_OffsetMutablePtr()` and `MR_CSharp_IterableE_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableE *MR_CSharp_IterableE_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetPtr(const MR_CSharp_IterableE *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetMutablePtr(MR_CSharp_IterableE *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableE::IterableE`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableE_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableE *MR_CSharp_IterableE_ConstructFromAnother(const MR_CSharp_IterableE *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableE_Destroy(const MR_CSharp_IterableE *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableE`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableE_DestroyArray(const MR_CSharp_IterableE *_this);

/// Generated from method `MR::CSharp::IterableE::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableE *MR_CSharp_IterableE_AssignFromAnother(MR_CSharp_IterableE *_this, const MR_CSharp_IterableE *_other);

/// Generated from function `MR::CSharp::begin`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API int *MR_CSharp_begin_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self);

/// Generated from function `MR::CSharp::end`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API int *MR_CSharp_end_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableF` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_CSharp_IterableF_Get_arr(const MR_CSharp_IterableF *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableF` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_CSharp_IterableF_GetMutable_arr(MR_CSharp_IterableF *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableF` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableF_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableF *MR_CSharp_IterableF_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableF_DestroyArray()`.
/// Use `MR_CSharp_IterableF_OffsetMutablePtr()` and `MR_CSharp_IterableF_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableF *MR_CSharp_IterableF_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetPtr(const MR_CSharp_IterableF *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetMutablePtr(MR_CSharp_IterableF *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableF::IterableF`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableF_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableF *MR_CSharp_IterableF_ConstructFromAnother(const MR_CSharp_IterableF *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableF_Destroy(const MR_CSharp_IterableF *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableF`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableF_DestroyArray(const MR_CSharp_IterableF *_this);

/// Generated from method `MR::CSharp::IterableF::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableF *MR_CSharp_IterableF_AssignFromAnother(MR_CSharp_IterableF *_this, const MR_CSharp_IterableF *_other);

/// Generated from function `MR::CSharp::begin`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_begin_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self);

/// Generated from function `MR::CSharp::end`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API const int *MR_CSharp_end_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self);

/// Generated from function `MR::CSharp::begin`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API int *MR_CSharp_begin_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self);

/// Generated from function `MR::CSharp::end`.
/// Parameter `self` can not be null. It is a single object.
MR_C_API int *MR_CSharp_end_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableG` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_IterableG_Get_arr(const MR_CSharp_IterableG *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableG` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_IterableG_GetMutable_arr(MR_CSharp_IterableG *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableG` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableG_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableG *MR_CSharp_IterableG_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableG_DestroyArray()`.
/// Use `MR_CSharp_IterableG_OffsetMutablePtr()` and `MR_CSharp_IterableG_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableG *MR_CSharp_IterableG_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetPtr(const MR_CSharp_IterableG *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetMutablePtr(MR_CSharp_IterableG *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableG::IterableG`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableG_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableG *MR_CSharp_IterableG_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableG_Destroy(const MR_CSharp_IterableG *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableG`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableG_DestroyArray(const MR_CSharp_IterableG *_this);

/// Generated from method `MR::CSharp::IterableG::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableG *MR_CSharp_IterableG_AssignFromAnother(MR_CSharp_IterableG *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other);

/// Generated from method `MR::CSharp::IterableG::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_std_string *MR_CSharp_IterableG_begin(MR_CSharp_IterableG *_this);

/// Generated from method `MR::CSharp::IterableG::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_std_string *MR_CSharp_IterableG_end(MR_CSharp_IterableG *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableH` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_CSharp_IterableH_Get_arr(const MR_CSharp_IterableH *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableH` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_CSharp_IterableH_GetMutable_arr(MR_CSharp_IterableH *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableH` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableH_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableH *MR_CSharp_IterableH_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableH_DestroyArray()`.
/// Use `MR_CSharp_IterableH_OffsetMutablePtr()` and `MR_CSharp_IterableH_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableH *MR_CSharp_IterableH_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetPtr(const MR_CSharp_IterableH *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetMutablePtr(MR_CSharp_IterableH *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableH::IterableH`.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableH_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableH *MR_CSharp_IterableH_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableH_Destroy(const MR_CSharp_IterableH *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableH`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableH_DestroyArray(const MR_CSharp_IterableH *_this);

/// Generated from method `MR::CSharp::IterableH::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableH *MR_CSharp_IterableH_AssignFromAnother(MR_CSharp_IterableH *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other);

// Not making those functions `const` for a change.
/// Generated from method `MR::CSharp::IterableH::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_C_std_string *MR_CSharp_IterableH_begin(MR_CSharp_IterableH *_this);

/// Generated from method `MR::CSharp::IterableH::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_C_std_string *MR_CSharp_IterableH_end(MR_CSharp_IterableH *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableI` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_IterableI_Get_arr(const MR_CSharp_IterableI *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableI` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_IterableI_GetMutable_arr(MR_CSharp_IterableI *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableI` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableI_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableI_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableI *MR_CSharp_IterableI_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableI_DestroyArray()`.
/// Use `MR_CSharp_IterableI_OffsetMutablePtr()` and `MR_CSharp_IterableI_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableI *MR_CSharp_IterableI_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetPtr(const MR_CSharp_IterableI *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetMutablePtr(MR_CSharp_IterableI *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableI::IterableI`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableI_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableI *MR_CSharp_IterableI_ConstructFromAnother(const MR_CSharp_IterableI *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableI`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableI_Destroy(const MR_CSharp_IterableI *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableI`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableI_DestroyArray(const MR_CSharp_IterableI *_this);

/// Generated from method `MR::CSharp::IterableI::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableI *MR_CSharp_IterableI_AssignFromAnother(MR_CSharp_IterableI *_this, const MR_CSharp_IterableI *_other);

/// Generated from method `MR::CSharp::IterableI::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_IterableI_begin(MR_CSharp_IterableI *_this);

/// Generated from method `MR::CSharp::IterableI::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_IterableI_end(MR_CSharp_IterableI *_this);

/// Returns a pointer to a member variable of class `MR::CSharp::IterableJ` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_Get_arr(const MR_CSharp_IterableJ *_this);

/// Returns a mutable pointer to a member variable of class `MR::CSharp::IterableJ` named `arr`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_GetMutable_arr(MR_CSharp_IterableJ *_this);

/// Returns the size of the array member of class `MR::CSharp::IterableJ` named `arr`. The size is `3`.
MR_C_API size_t MR_CSharp_IterableJ_GetSize_arr(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableJ_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableJ *MR_CSharp_IterableJ_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CSharp_IterableJ_DestroyArray()`.
/// Use `MR_CSharp_IterableJ_OffsetMutablePtr()` and `MR_CSharp_IterableJ_OffsetPtr()` to access the array elements.
MR_C_API MR_CSharp_IterableJ *MR_CSharp_IterableJ_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetPtr(const MR_CSharp_IterableJ *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetMutablePtr(MR_CSharp_IterableJ *ptr, ptrdiff_t i);

/// Generated from constructor `MR::CSharp::IterableJ::IterableJ`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CSharp_IterableJ_Destroy()` to free it when you're done using it.
MR_C_API MR_CSharp_IterableJ *MR_CSharp_IterableJ_ConstructFromAnother(const MR_CSharp_IterableJ *_other);

/// Destroys a heap-allocated instance of `MR_CSharp_IterableJ`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableJ_Destroy(const MR_CSharp_IterableJ *_this);

/// Destroys a heap-allocated array of `MR_CSharp_IterableJ`. Does nothing if the pointer is null.
MR_C_API void MR_CSharp_IterableJ_DestroyArray(const MR_CSharp_IterableJ *_this);

/// Generated from method `MR::CSharp::IterableJ::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_CSharp_IterableJ *MR_CSharp_IterableJ_AssignFromAnother(MR_CSharp_IterableJ *_this, const MR_CSharp_IterableJ *_other);

// Not making those functions `const` for a change.
/// Generated from method `MR::CSharp::IterableJ::begin`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_begin(MR_CSharp_IterableJ *_this);

/// Generated from method `MR::CSharp::IterableJ::end`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_end(MR_CSharp_IterableJ *_this);

/// Generated from function `MR::CSharp::test_expected_int`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<int, float>{42}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_int_float *MR_CSharp_test_expected_int(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b);

/// Generated from function `MR::CSharp::test_expected_int_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_int`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ref(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b);

/// Generated from function `MR::CSharp::test_expected_int_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_int`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cref(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b);

/// Generated from function `MR::CSharp::test_expected_int_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_int`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ptr(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b, MR_C_std_expected_int_float *const *c);

/// Generated from function `MR::CSharp::test_expected_int_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_int`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cptr(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b, const MR_C_std_expected_int_float *const *c);

/// Generated from function `MR::CSharp::test_expected_void`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<void, float>{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_void_float *MR_CSharp_test_expected_void(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b);

/// Generated from function `MR::CSharp::test_expected_void_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_void`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ref(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b);

/// Generated from function `MR::CSharp::test_expected_void_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_void`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cref(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b);

/// Generated from function `MR::CSharp::test_expected_void_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_void`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ptr(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b, MR_C_std_expected_void_float *const *c);

/// Generated from function `MR::CSharp::test_expected_void_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_void`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cptr(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b, const MR_C_std_expected_void_float *const *c);

/// Generated from function `MR::CSharp::test_expected_enum`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::E1, float>{E1::b}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_E1_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b);

/// Generated from function `MR::CSharp::test_expected_enum_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_enum`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ref(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b);

/// Generated from function `MR::CSharp::test_expected_enum_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_enum`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cref(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b);

/// Generated from function `MR::CSharp::test_expected_enum_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_enum`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ptr(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b, MR_C_std_expected_MR_CSharp_E1_float *const *c);

/// Generated from function `MR::CSharp::test_expected_enum_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_enum`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cptr(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b, const MR_C_std_expected_MR_CSharp_E1_float *const *c);

/// Generated from function `MR::CSharp::test_expected_triv`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::Trivial, float>{MR::CSharp::Trivial{}}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_Trivial_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b);

/// Generated from function `MR::CSharp::test_expected_triv_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_triv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ref(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b);

/// Generated from function `MR::CSharp::test_expected_triv_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_triv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cref(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b);

/// Generated from function `MR::CSharp::test_expected_triv_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_triv`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ptr(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b, MR_C_std_expected_MR_CSharp_Trivial_float *const *c);

/// Generated from function `MR::CSharp::test_expected_triv_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_triv`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cptr(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b, const MR_C_std_expected_MR_CSharp_Trivial_float *const *c);

/// Generated from function `MR::CSharp::test_expected_nontriv`.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::NonTrivial, float>{MR::CSharp::NonTrivial{}}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_NonTrivial_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv(MR_C_PassBy a_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_PassBy b_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *b);

/// Generated from function `MR::CSharp::test_expected_nontriv_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_nontriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ref(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b);

/// Generated from function `MR::CSharp::test_expected_nontriv_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_nontriv`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cref(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b);

/// Generated from function `MR::CSharp::test_expected_nontriv_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_nontriv`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ptr(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b, MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c);

/// Generated from function `MR::CSharp::test_expected_nontriv_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_nontriv`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cptr(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b, const MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c);

/// Generated from function `MR::CSharp::test_expected_shared`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::SA, float>{MR::CSharp::SA{}}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_SA_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b);

/// Generated from function `MR::CSharp::test_expected_shared_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_shared`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ref(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b);

/// Generated from function `MR::CSharp::test_expected_shared_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_shared`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cref(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b);

/// Generated from function `MR::CSharp::test_expected_shared_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_shared`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ptr(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b, MR_C_std_expected_MR_CSharp_SA_float *const *c);

/// Generated from function `MR::CSharp::test_expected_shared_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_shared`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cptr(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b, const MR_C_std_expected_MR_CSharp_SA_float *const *c);

/// Generated from function `MR::CSharp::test_expected_exposed`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::ExposedLayout, float>{MR::CSharp::ExposedLayout{}}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_ExposedLayout_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ref(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_exposed`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cref(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_exposed`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ptr(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c);

/// Generated from function `MR::CSharp::test_expected_exposed_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_exposed`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c);

/// Generated from function `MR::CSharp::test_expected_exposed_shared`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `std::expected<MR::CSharp::ExposedLayoutSh, float>{MR::CSharp::ExposedLayoutSh{}}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_shared_ref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_exposed_shared`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ref(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_shared_cref`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` is a single object.
/// Parameter `b` has a default argument: `default_expected_exposed_shared`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cref(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b);

/// Generated from function `MR::CSharp::test_expected_exposed_shared_ptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_exposed_shared`, pass a null pointer to use it.
MR_C_API MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ptr(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c);

/// Generated from function `MR::CSharp::test_expected_exposed_shared_cptr`.
/// Parameter `b` defaults to a null pointer in C++.
/// Parameter `c` has a default argument: `&default_expected_exposed_shared`, pass a null pointer to use it.
MR_C_API const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c);

#ifdef __cplusplus
} // extern "C"
#endif

#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum MR_DeclOrder_A_E
{
    MR_DeclOrder_A_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_DeclOrder_A_E;

#ifndef MR_C_DETAIL_TYPEDEF_MR_DeclOrder_A_B
#define MR_C_DETAIL_TYPEDEF_MR_DeclOrder_A_B
/// Generated from class `MR::DeclOrder::A::B`.
typedef struct MR_DeclOrder_A_B MR_DeclOrder_A_B;
#endif

/// Generated from class `MR::DeclOrder::A::B`.
struct MR_DeclOrder_A_B
{
    int bleh;
};

#ifndef MR_C_DETAIL_TYPEDEF_MR_DeclOrder_A
#define MR_C_DETAIL_TYPEDEF_MR_DeclOrder_A
// Here all classes are whitelisted using `--expose-as-struct`.
/// Generated from class `MR::DeclOrder::A`.
typedef struct MR_DeclOrder_A MR_DeclOrder_A;
#endif

// Here all classes are whitelisted using `--expose-as-struct`.
/// Generated from class `MR::DeclOrder::A`.
struct MR_DeclOrder_A
{
    int blah;
};

#ifndef MR_C_DETAIL_TYPEDEF_MR_DeclOrder_C_false
#define MR_C_DETAIL_TYPEDEF_MR_DeclOrder_C_false
/// Generated from class `MR::DeclOrder::C<false>`.
typedef struct MR_DeclOrder_C_false MR_DeclOrder_C_false;
#endif

/// Generated from class `MR::DeclOrder::C<false>`.
struct MR_DeclOrder_C_false
{
    int bleh;
};

#ifndef MR_C_DETAIL_TYPEDEF_MR_DeclOrder_C_true
#define MR_C_DETAIL_TYPEDEF_MR_DeclOrder_C_true
/// Generated from class `MR::DeclOrder::C<true>`.
typedef struct MR_DeclOrder_C_true MR_DeclOrder_C_true;
#endif

/// Generated from class `MR::DeclOrder::C<true>`.
struct MR_DeclOrder_C_true
{
    int bleh;
};

/// Generated from method `MR::DeclOrder::A::c`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this);

/// Generated from method `MR::DeclOrder::A::d`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this);

/// Generated from method `MR::DeclOrder::A::B::a`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this);

/// Generated from method `MR::DeclOrder::A::B::b`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this);

/// Generated from method `MR::DeclOrder::C<false>::blah`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this);

/// Generated from method `MR::DeclOrder::C<true>::blah`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this);

#ifdef __cplusplus
} // extern "C"
#endif

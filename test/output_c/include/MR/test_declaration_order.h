#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


// Here all classes are whitelisted using `--expose-as-struct`.
/// Generated from class `MR::DeclOrder::A`.
typedef struct MR_DeclOrder_A
{
    int blah;
} MR_DeclOrder_A;

typedef enum MR_DeclOrder_A_E
{
    MR_DeclOrder_A_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_DeclOrder_A_E;

/// Generated from class `MR::DeclOrder::A::B`.
typedef struct MR_DeclOrder_A_B
{
    int bleh;
} MR_DeclOrder_A_B;

/// Generated from class `MR::DeclOrder::C<false>`.
typedef struct MR_DeclOrder_C_false
{
    int bleh;
} MR_DeclOrder_C_false;

/// Generated from class `MR::DeclOrder::C<true>`.
typedef struct MR_DeclOrder_C_true
{
    int bleh;
} MR_DeclOrder_C_true;

/// Generated from a method of class `MR::DeclOrder::A` named `c`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this);

/// Generated from a method of class `MR::DeclOrder::A` named `d`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this);

/// Generated from a method of class `MR::DeclOrder::A::B` named `a`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this);

/// Generated from a method of class `MR::DeclOrder::A::B` named `b`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this);

/// Generated from a method of class `MR::DeclOrder::C<false>` named `blah`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this);

/// Generated from a method of class `MR::DeclOrder::C<true>` named `blah`.
/// Parameter `_this` can not be null.
MR_C_API MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_DECLARATION_ORDER_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_DECLARATION_ORDER_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Here all classes are whitelisted using `--expose-as-struct`.
// Generated from class `MR::DeclOrder::A`.
typedef struct MR_DeclOrder_A
{
    int32_t blah;
} MR_DeclOrder_A;

typedef int32_t MR_DeclOrder_A_E;

// Generated from class `MR::DeclOrder::A::B`.
typedef struct MR_DeclOrder_A_B
{
    int32_t bleh;
} MR_DeclOrder_A_B;

// Generated from class `MR::DeclOrder::C<false>`.
typedef struct MR_DeclOrder_C_false
{
    int32_t bleh;
} MR_DeclOrder_C_false;

// Generated from class `MR::DeclOrder::C<true>`.
typedef struct MR_DeclOrder_C_true
{
    int32_t bleh;
} MR_DeclOrder_C_true;

// Generated from a method of class `MR::DeclOrder::A` named `c`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this);

// Generated from a method of class `MR::DeclOrder::A` named `d`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this);

// Generated from a method of class `MR::DeclOrder::A::B` named `a`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this);

// Generated from a method of class `MR::DeclOrder::A::B` named `b`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this);

// Generated from a method of class `MR::DeclOrder::C<false>` named `blah`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this);

// Generated from a method of class `MR::DeclOrder::C<true>` named `blah`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_DECLARATION_ORDER_H

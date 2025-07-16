#pragma once

#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::MatchingLayout::A`.
typedef struct MR_MatchingLayout_A
{
    // first
    int32_t a;

    // second
    int16_t b;

    // third
    float c;
} MR_MatchingLayout_A;

/// Generated from class `MR::MatchingLayout::B`.
typedef struct MR_MatchingLayout_B
{
    int16_t x;
    MR_MatchingLayout_A a;
    char y;
} MR_MatchingLayout_B;

/// Constructs an empty (default-constructed) instance.
MR_C_API MR_MatchingLayout_B MR_MatchingLayout_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MatchingLayout_B_DestroyArray()`.
/// Use `MR_MatchingLayout_B_OffsetMutablePtr()` and `MR_MatchingLayout_B_OffsetPtr()` to access the array elements.
MR_C_API MR_MatchingLayout_B *MR_MatchingLayout_B_DefaultConstructArray(size_t num_elems);

/// Generated from function `MR::MatchingLayout::foo`.
MR_C_API MR_MatchingLayout_B MR_MatchingLayout_foo(void);

/// Generated from function `MR::MatchingLayout::bar`.
MR_C_API void MR_MatchingLayout_bar(MR_MatchingLayout_B _1);

/// Generated from function `MR::MatchingLayout::baz`.
/// Parameter `_1` has a default argument: `MR::MatchingLayout::B{}`, pass a null pointer to use it.
MR_C_API void MR_MatchingLayout_baz(const MR_MatchingLayout_B *_1);

/// Generated from function `MR::MatchingLayout::bleh`.
MR_C_API MR_MatchingLayout_B *MR_MatchingLayout_bleh(MR_MatchingLayout_B *_1);

#ifdef __cplusplus
} // extern "C"
#endif

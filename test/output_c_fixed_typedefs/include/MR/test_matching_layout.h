#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_MATCHING_LAYOUT_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_MATCHING_LAYOUT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from class `MR::MatchingLayout::A`.
typedef struct MR_MatchingLayout_A
{
    // first
    int32_t a;

    // second
    int16_t b;

    // third
    float c;
    int32_t arr[3];
    int32_t arr2d[4][5];
} MR_MatchingLayout_A;

// Generated from class `MR::MatchingLayout::B`.
typedef struct MR_MatchingLayout_B
{
    int16_t x;
    MR_MatchingLayout_A a;
    char y;
} MR_MatchingLayout_B;

// Having static fields is not an error! Those get their normal getters and setters.
// Returns a pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_MatchingLayout_A_Get_x(void);

// Having static fields is not an error! Those get their normal getters and setters.
// Modifies a member variable of class `MR::MatchingLayout::A` named `x`.
MR_C_API void MR_MatchingLayout_A_Set_x(int32_t value);

// Having static fields is not an error! Those get their normal getters and setters.
// Returns a mutable pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_MatchingLayout_A_GetMutable_x(void);

// Constructs an empty (default-constructed) instance.
MR_C_API MR_MatchingLayout_B MR_MatchingLayout_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_MatchingLayout_B_DestroyArray()`.
// Use `MR_MatchingLayout_B_OffsetMutablePtr()` and `MR_MatchingLayout_B_OffsetPtr()` to access the array elements.
MR_C_API MR_MatchingLayout_B *MR_MatchingLayout_B_DefaultConstructArray(size_t num_elems);

// Generated from function `MR::MatchingLayout::foo`.
MR_C_API MR_MatchingLayout_B MR_MatchingLayout_foo(void);

// Generated from function `MR::MatchingLayout::bar`.
MR_C_API void MR_MatchingLayout_bar(MR_MatchingLayout_B _1);

// Generated from function `MR::MatchingLayout::baz`.
// Parameter `_1` has a default argument: `MR::MatchingLayout::B{}`, pass a null pointer to use it.
MR_C_API void MR_MatchingLayout_baz(const MR_MatchingLayout_B *_1);

// Generated from function `MR::MatchingLayout::bleh`.
MR_C_API MR_MatchingLayout_B *MR_MatchingLayout_bleh(MR_MatchingLayout_B *_1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_MATCHING_LAYOUT_H

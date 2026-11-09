#ifndef MR_C_DETAIL_INCLUDED_COMPARE_H
#define MR_C_DETAIL_INCLUDED_COMPARE_H

#ifdef __cplusplus
extern "C" {
#endif


// The result of a three-way comparison between values that are not necessarily ordered with respect to each other.
typedef enum MR_C_std_partial_ordering
{
    // A < B
    MR_C_std_partial_ordering_less = -1,
    // A == B
    MR_C_std_partial_ordering_equivalent = 0,
    // A > B
    MR_C_std_partial_ordering_greater = 1,
    // A is not comparable to B
    MR_C_std_partial_ordering_unordered = 2,
} MR_C_std_partial_ordering;

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_COMPARE_H

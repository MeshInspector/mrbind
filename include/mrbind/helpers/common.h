#pragma once

#include "macro_sequence_for.h"

// Some common helper macros.

#define MRBIND_NULL(...)
#define MRBIND_COMMA(...) ,
#define MRBIND_IDENTITY(...) __VA_ARGS__
#define MRBIND_EXPECT_EMPTY()

// Stringification.
#define MRBIND_STR(...) DETAIL_MRBIND_STR(__VA_ARGS__)
#define DETAIL_MRBIND_STR(...) #__VA_ARGS__

// Concatenation.
#define MRBIND_CAT(x, y) DETAIL_MRBIND_CAT(x, y)
#define DETAIL_MRBIND_CAT(x, y) x##y

// A helper for loops, concats `_END` to the end of `...`.
#define MRBIND_END(...) DETAIL_MRBIND_END(__VA_ARGS__)
#define DETAIL_MRBIND_END(...) __VA_ARGS__##_END

// Given `x`, returns `,x`. But if the argument is empty, returns nothing.
#define MRBIND_PREPEND_COMMA(...) __VA_OPT__(, __VA_ARGS__)

// Strips the leading comma from the argument. But if the argument is empty, returns nothing.
#define MRBIND_STRIP_LEADING_COMMA(...) DETAIL_MRBIND_STRIP_LEADING_COMMA(__VA_ARGS__)
#define DETAIL_MRBIND_STRIP_LEADING_COMMA(empty, ...) MRBIND_EXPECT_EMPTY(empty) __VA_ARGS__

// Given `(a)(b)(c)`, returns `a::b::c::`.
#define MRBIND_NS_QUAL(seq) SF_FOR_EACH(DETAIL_MRBIND_NS_QUAL_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MRBIND_NS_QUAL_BODY(n, d, x) x::

// Given `(a)(b)(c)`, returns `a_b_c`. Useful for collapsing namespace names.
#define MRBIND_NS_CAT(seq) SF_FOR_EACH(SF_NULL, DETAIL_MRBIND_NS_CAT_STEP, DETAIL_MRBIND_NS_CAT_FINAL, (,), seq)
#define DETAIL_MRBIND_NS_CAT_STEP(n, d, x) (DETAIL_MRBIND_NS_CAT_STEP_0(x, MRBIND_IDENTITY d), 1)
#define DETAIL_MRBIND_NS_CAT_STEP_0(...) DETAIL_MRBIND_NS_CAT_STEP_1(__VA_ARGS__)
#define DETAIL_MRBIND_NS_CAT_STEP_1(...) DETAIL_MRBIND_NS_CAT_STEP_2(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MRBIND_NS_CAT_STEP_2(x, d, ...) MRBIND_CAT(d, MRBIND_CAT(__VA_OPT__(_), x))
#define DETAIL_MRBIND_NS_CAT_FINAL(n, d) DETAIL_MRBIND_NS_CAT_FINAL_0(MRBIND_IDENTITY d)
#define DETAIL_MRBIND_NS_CAT_FINAL_0(...) DETAIL_MRBIND_NS_CAT_FINAL_1(__VA_ARGS__)
#define DETAIL_MRBIND_NS_CAT_FINAL_1(ret, unused) ret

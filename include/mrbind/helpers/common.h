#pragma once

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

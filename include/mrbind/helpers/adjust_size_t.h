#pragma once

// You can optionally include this header at the beginning of whatever you're parsing.
// And then you might also have to `-include` it when compiling the resulting bindings, or you might get some errors.

// This header redefines `[std::]size_t` and some other types to give them a consistent spelling across platforms.
// On Windows this does nothing, because it's already `[unsigned] long long` there.
// On other platforms, this redefines them from `[unsigned] long` to `[unsigned] long long`.
// The end result is that they become `[unsigned] long long` on all platforms.

// The list of types to be replaced can be obtained like this: (on Linux)
//     clang++ -dM -E - </dev/null | grep -P 'long'
//     clang++ -dM -E - </dev/null --target=x86_64-pc-windows-msvc | grep -P 'long long'
// The two should print the same list.

// We do things in a particular way to allow both `size_t` and `std::size_t` to work (and similarly all other types).

#ifndef _WIN32

// First, include some of the standard library headers. Because they tend to choke on those type redefinitions otherwise.

#if 1
#include "all_standard_headers.h"
#else
// Here I tried to include the offending headers manually, but there's quite a lot of them. It's easier to just include everything.

// The overloads of `operator new`/`operator delete` need specific parameter types.
#include <new>
// Those have user-defined literals that need a specific parameter type: [
#include <chrono>
#include <complex>
#include <string>
#include <string_view>
// ]
// Those are needed for random reasons: [
#include <array>
#include <deque>
#include <memory_resource>
#include <memory>
#include <variant>
#include <vector>
// Add more headers here as needed...
#if __has_include(<emmintrin.h>)
#include <emmintrin.h>
#endif
// ]
#endif


namespace std
{
    using __adjusted_int64_t = long long;
    using __adjusted_intmax_t = long long;
    using __adjusted_intptr_t = long long;
    using __adjusted_int_fast64_t = long long;
    using __adjusted_int_least64_t = long long;
    using __adjusted_ptrdiff_t = long long;
    using __adjusted_size_t = unsigned long long;
    using __adjusted_uint64_t = unsigned long long;
    using __adjusted_uintmax_t = unsigned long long;
    using __adjusted_uintptr_t = unsigned long long;
    using __adjusted_uint_fast64_t = unsigned long long;
    using __adjusted_uint_least64_t = unsigned long long;
}

using std::__adjusted_int64_t;
using std::__adjusted_intmax_t;
using std::__adjusted_intptr_t;
using std::__adjusted_int_fast64_t;
using std::__adjusted_int_least64_t;
using std::__adjusted_ptrdiff_t;
using std::__adjusted_size_t;
using std::__adjusted_uint64_t;
using std::__adjusted_uintmax_t;
using std::__adjusted_uintptr_t;
using std::__adjusted_uint_fast64_t;
using std::__adjusted_uint_least64_t;

#define int64_t __adjusted_int64_t
#define intmax_t __adjusted_intmax_t
#define intptr_t __adjusted_intptr_t
#define int_fast64_t __adjusted_int_fast64_t
#define int_least64_t __adjusted_int_least64_t
#define ptrdiff_t __adjusted_ptrdiff_t
#define size_t __adjusted_size_t
#define uint64_t __adjusted_uint64_t
#define uintmax_t __adjusted_uintmax_t
#define uintptr_t __adjusted_uintptr_t
#define uint_fast64_t __adjusted_uint_fast64_t
#define uint_least64_t __adjusted_uint_least64_t


// You'd think the about should be enough, but turns out `stddef.h` on Linux doesn't have an include guard,
//   and redefines the same typedefs AGAIN every time you include it.
// So we have to define those macros to convince it to do the right thing.
// You can get the list of those defines from the commands mentioned in the comment at the beginning of this header.
#undef __INT64_TYPE__
#undef __INTMAX_TYPE__
#undef __INTPTR_TYPE__
#undef __INT_FAST64_TYPE__
#undef __INT_LEAST64_TYPE__
#undef __PTRDIFF_TYPE__
#undef __SIZE_TYPE__
#undef __UINT64_TYPE__
#undef __UINTMAX_TYPE__
#undef __UINTPTR_TYPE__
#undef __UINT_FAST64_TYPE__
#undef __UINT_LEAST64_TYPE__

#define __INT64_TYPE__ long long int
#define __INTMAX_TYPE__ long long int
#define __INTPTR_TYPE__ long long int
#define __INT_FAST64_TYPE__ long long int
#define __INT_LEAST64_TYPE__ long long int
#define __PTRDIFF_TYPE__ long long int
#define __SIZE_TYPE__ long long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __UINTMAX_TYPE__ long long unsigned int
#define __UINTPTR_TYPE__ long long unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int

#endif

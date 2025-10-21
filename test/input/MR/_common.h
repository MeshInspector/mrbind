#pragma once


#ifdef __APPLE__
#include <cstddef>
using MRint64 = std::ptrdiff_t;
using MRuint64 = std::size_t;
static_assert(sizeof(MRint64) == 8);
static_assert(sizeof(MRuint64) == 8);
#else
#include <cstdint>
using MRint64 = std::int64_t;
using MRuint64 = std::uint64_t;
#endif

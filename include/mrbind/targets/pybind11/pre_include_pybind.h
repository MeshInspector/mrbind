// Intentionally no include guard.

// This remembers the current value of `_DEBUG` (undefined, empty, 0 or 1). Then it can be restored by including `post_include_pybind.h`.
// We need this because Pybind11 messes up this macro (if it was 1, it becomes empty), which confuses TBB in certain cases.
// See bug: https://github.com/pybind/pybind11/issues/5136

#ifdef _MSC_VER

// This emptiness check is straight from TBB: https://github.com/oneapi-src/oneTBB/blob/471454d14c76e39bec7deaa353a8cd4b2409bb3f/include/oneapi/tbb/detail/_config.h#L111-L130
#define DETAIL_MB_PB11_CAT_(a, b) a##b
#define DETAIL_MB_PB11_IS_EMPTY(a, unused) DETAIL_MB_PB11_CAT_(DETAIL_MB_PB11_EMPTY, a)
#define DETAIL_MB_PB11_EMPTY 1

#ifdef _DEBUG
#  if DETAIL_MB_PB11_IS_EMPTY(_DEBUG, unused) == DETAIL_MB_PB11_EMPTY
#    define DETAIL_MB_PB11_DEBUG_MARKER_EMPTY
#  elif _DEBUG
#    define DETAIL_MB_PB11_DEBUG_MARKER_1
#  else
#    define DETAIL_MB_PB11_DEBUG_MARKER_0
#  endif
#endif

#undef DETAIL_MB_PB11_CAT_
#undef DETAIL_MB_PB11_IS_EMPTY
#undef DETAIL_MB_PB11_EMPTY

#endif
// Intentionally no include guard.

// See `pre_include_pybind.h` for what's going on here.

#ifdef _MSC_VER

#ifdef _DEBUG
#  undef _DEBUG
#endif

#ifdef DETAIL_MB_PB11_DEBUG_MARKER_EMPTY
#  undef DETAIL_MB_PB11_DEBUG_MARKER_EMPTY
#  define _DEBUG
#endif
#ifdef DETAIL_MB_PB11_DEBUG_MARKER_1
#  undef DETAIL_MB_PB11_DEBUG_MARKER_1
#  define _DEBUG 1
#endif
#ifdef DETAIL_MB_PB11_DEBUG_MARKER_0
#  undef DETAIL_MB_PB11_DEBUG_MARKER_0
#  define _DEBUG 0
#endif

#endif
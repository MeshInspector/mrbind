// Intentionally no include guard.

// Set `MB_PYBIND11_EXPAND_TOP_NAMESPACE` to 1 to omit the top-level namespace from function names

#ifndef MB_PYBIND11_MODULE_NAME
#error Must define `MB_PYBIND11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Include the original source.
#include MRBIND_ORIGINAL_FILE

#include <mrbind/helpers/common.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

// Destroy existing macros.
#include <mrbind/helpers/undef_all_macros.h>

// A helper macro that optionally strips top-level namespace from an `(a)(b)(c)` sequence.
#if MB_PYBIND11_EXPAND_TOP_NAMESPACE
#define DETAIL_MB_PYBIND11_EXPAND_TOP_NS(...) __VA_OPT__(MRBIND_NULL __VA_ARGS__)
#else
#define DETAIL_MB_PYBIND11_EXPAND_TOP_NS(...) __VA_ARGS__
#endif

#define MB_FILE PYBIND11_MODULE(MB_PYBIND11_MODULE_NAME, m) { (void)m;
#define MB_END_FILE }

#define MB_FUNC(ret_, ns_, name_, params_, comment_) \
    m.def( \
        /* Name as a string. */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PYBIND11_EXPAND_TOP_NS(ns_)(name_))) \
        /* Name without quotes. */\
        , MRBIND_NS_QUAL(ns_) name_ \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
        /* Params, if any. */\
        DETAIL_MB_PYBIND11_MAKE_PARAMS(params_) \
    );

#define MB_ENUM(kind_, ns_, name_, type_, comment_, elems_) \
    pybind11::enum_< \
        /* Type. */\
        MRBIND_NS_QUAL(ns_) name_ \
    >(m, \
        /* Name as a string. */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PYBIND11_EXPAND_TOP_NS(ns_)(name_)))\
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    ) \
        DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS(MRBIND_NS_QUAL(ns_(name_)), elems_)\
    ;

// A helper for `MB_FUNC` that generates the parameter list.
#define DETAIL_MB_PYBIND11_MAKE_PARAMS(seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_PARAMS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PYBIND11_MAKE_PARAMS_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , pybind11::arg(MRBIND_STR(name_)) __VA_OPT__(= __VA_ARGS__)

// A helper for `MB_ENUM` that generates the element list.
#define DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    .value(MRBIND_STR(name_), d name_ MRBIND_PREPEND_COMMA(comment_))

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

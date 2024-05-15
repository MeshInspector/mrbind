// Intentionally no include guard.

// Set `MB_PYBIND11_EXPAND_TOP_NAMESPACE` to 1 to omit the top-level namespace from function names

#ifndef MB_PYBIND11_MODULE_NAME
#error Must define `MB_PYBIND11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Include the original source.
#include MRBIND_ORIGINAL_FILE

// Various other headers we need:

#include <mrbind/helpers/common.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <type_traits>

// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif

// Destroy existing macros.
#include <mrbind/helpers/undef_all_macros.h>

// A helper macro that optionally strips top-level namespace from an `(a)(b)(c)` sequence.
#if MB_PYBIND11_EXPAND_TOP_NAMESPACE
#define DETAIL_MB_PYBIND11_EXPAND_TOP_NS(...) __VA_OPT__(MRBIND_NULL __VA_ARGS__)
#else
#define DETAIL_MB_PYBIND11_EXPAND_TOP_NS(...) __VA_ARGS__
#endif

// Wrap the whole file in a module.
#define MB_FILE PYBIND11_MODULE(MB_PYBIND11_MODULE_NAME, m) { (void)m;
#define MB_END_FILE }

// Bind a function.
#define MB_FUNC(ret_, ns_, name_, comment_, params_) \
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

// Bind a enum.
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
        /* Elements. */\
        DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS(MRBIND_NS_QUAL(ns_(name_)), elems_)\
    ;

// Bind a class.
#define MB_CLASS(kind_, ns_, name_, comment_, fields_, ctors_, methods_) \
    pybind11::class_< \
        /* Type. */\
        MRBIND_NS_QUAL(ns_) name_ \
    >(m, \
        /* Name as a string. */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PYBIND11_EXPAND_TOP_NS(ns_)(name_)))\
    )\
        /* Fields. */\
        DETAIL_MB_PYBIND11_MAKE_CLASS_FIELDS(MRBIND_NS_QUAL(ns_(name_)), fields_)\
        /* Constructors. */\
        DETAIL_MB_PYBIND11_MAKE_CLASS_CTORS(ctors_)\
        /* Methods. */\
        DETAIL_MB_PYBIND11_MAKE_CLASS_METHODS(MRBIND_NS_QUAL(ns_(name_)), methods_)\
    ;

// A helper for `MB_FUNC` that generates the parameters.
#define DETAIL_MB_PYBIND11_MAKE_PARAMS(seq) SF_FOR_EACH0(DETAIL_MB_PYBIND11_MAKE_PARAMS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PYBIND11_MAKE_PARAMS_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , pybind11::arg(MRBIND_STR(name_)) __VA_OPT__(= __VA_ARGS__)

// A helper for `DETAIL_MB_PYBIND11_MAKE_CLASS_CTORS` that generates a list of parameter types.
#define DETAIL_MB_PYBIND11_MAKE_PARAM_TYPES(seq) MRBIND_STRIP_LEADING_COMMA(SF_FOR_EACH0(DETAIL_MB_PYBIND11_MAKE_PARAM_TYPES_BODY, SF_NULL, SF_NULL, 1, seq))
#define DETAIL_MB_PYBIND11_MAKE_PARAM_TYPES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBIND_IDENTITY type_

// A helper for `MB_ENUM` that generates the elements.
#define DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PYBIND11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    .value(MRBIND_STR(name_), d name_ MRBIND_PREPEND_COMMA(comment_))

// A helper for `MB_CLASS` that generates the fields.
#define DETAIL_MB_PYBIND11_MAKE_CLASS_FIELDS(name, seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_CLASS_FIELDS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PYBIND11_MAKE_CLASS_FIELDS_BODY(n, d, type_, name_, comment_) \
    .def_readwrite(MRBIND_STR(name_), &d name_ MRBIND_PREPEND_COMMA(comment_))

// A helper for `MB_CLASS` that generates the constructors.
#define DETAIL_MB_PYBIND11_MAKE_CLASS_CTORS(seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_CLASS_CTORS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PYBIND11_MAKE_CLASS_CTORS_BODY(n, d, comment_, params_) \
    .def( \
        /* Parameter types. */\
        pybind11::init<DETAIL_MB_PYBIND11_MAKE_PARAM_TYPES(params_)>() \
        /* Parameters. */\
        DETAIL_MB_PYBIND11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    )

// A helper for `MB_CLASS` that generates the methods.
#define DETAIL_MB_PYBIND11_MAKE_CLASS_METHODS(name, seq) SF_FOR_EACH(DETAIL_MB_PYBIND11_MAKE_CLASS_METHODS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PYBIND11_MAKE_CLASS_METHODS_BODY(n, d, ret_, name_, const_, comment_, params_) \
    .def( \
        /* Name */\
        MRBIND_STR(name_), \
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(d*)(DETAIL_MB_PYBIND11_MAKE_PARAM_TYPES(params_)) const_>(&d name_) \
        /* Parameters. */\
        DETAIL_MB_PYBIND11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    )

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

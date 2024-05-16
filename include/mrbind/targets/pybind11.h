// Intentionally no include guard.

// Set `MB_PB11_EXPAND_TOP_NAMESPACE` to 1 to omit the top-level namespace from function names

#ifndef MB_PB11_MODULE_NAME
#error Must define `MB_PB11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Various headers we need:

#include <mrbind/helpers/common.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <type_traits>

// Some template helpers.

namespace MRBind::detail::pb11
{
    template <bool IsStatic, typename ...P>
    void TryAddFunc(auto &c, auto &&... data)
    {
        if constexpr (((std::is_reference_v<P> && !std::is_const_v<std::remove_reference_t<P>>) || ...))
            ; // This function has output parameters, don't generate any bindings for it.
        else
        {
            if constexpr (IsStatic)
                c.def_static(decltype(data)(data)...);
            else
                c.def(decltype(data)(data)...);
        }
    }
}

// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif

// Destroy existing macros.
#include <mrbind/helpers/undef_all_macros.h>

// Signal to include the original haders.
#define MB_INCLUDE_ORIGINAL_HEADER 2

// A helper macro that optionally strips top-level namespace from an `(a)(b)(c)` sequence.
#if MB_PB11_EXPAND_TOP_NAMESPACE
#define DETAIL_MB_PB11_EXPAND_TOP_NS(...) __VA_OPT__(MRBIND_NULL __VA_ARGS__)
#else
#define DETAIL_MB_PB11_EXPAND_TOP_NS(...) __VA_ARGS__
#endif

// Wrap the whole file in a module.
#define MB_FILE PYBIND11_MODULE(MB_PB11_MODULE_NAME, _py11_m) { (void)_py11_m;
#define MB_END_FILE }

// Bind a function.
#define MB_FUNC(ret_, ns_, name_, comment_, params_) \
    _py11_m.def( \
        /* Name as a string. */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PB11_EXPAND_TOP_NS(ns_)(name_))) \
        /* Name without quotes. */\
        , MRBIND_NS_QUAL(ns_) name_ \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
        /* Params, if any. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
    );

// Bind a enum.
#define MB_ENUM(kind_, ns_, name_, type_, comment_, elems_) \
    pybind11::enum_< \
        /* Type. */\
        MRBIND_NS_QUAL(ns_) name_ \
    >(_py11_m, \
        /* Name as a string. */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PB11_EXPAND_TOP_NS(ns_)(name_)))\
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    ) \
        /* Elements. */\
        DETAIL_MB_PB11_MAKE_ENUM_ELEMS(MRBIND_NS_QUAL(ns_(name_)), elems_)\
    ;

// Bind a class.
#define MB_CLASS(kind_, ns_, name_, comment_, bases_, members_) \
    { \
        auto &&_py11_c = pybind11::class_< \
            /* Type. */\
            MRBIND_NS_QUAL(ns_) name_ \
            /* Bases. */\
            DETAIL_MB_PB11_BASE_TYPES(bases_)\
        >(_py11_m, \
            /* Name as a string. */\
            MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PB11_EXPAND_TOP_NS(ns_)(name_)))\
        ); \
        /* Members. */\
        DETAIL_MB_PB11_DISPATCH_MEMBERS(MRBIND_NS_QUAL(ns_(name_)), members_)

#define MB_END_CLASS(name_) \
    }

// If `...` is empty, returns void. If it's `(T)`, returns `T`.
#define DETAIL_MB_PB11_TYPE_OR_VOID(...) MRBIND_CAT(DETAIL_MB_PB11_TYPE_OR_VOID_, __VA_OPT__(0))(__VA_ARGS__)
#define DETAIL_MB_PB11_TYPE_OR_VOID_() void
#define DETAIL_MB_PB11_TYPE_OR_VOID_0(...) MRBIND_IDENTITY __VA_ARGS__

// A helper that generates function parameter bindings.
#define DETAIL_MB_PB11_MAKE_PARAMS(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAMS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_MAKE_PARAMS_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , pybind11::arg(MRBIND_STR(name_)) __VA_OPT__(= __VA_ARGS__)

// A helper that generates a list of parameter types.
#define DETAIL_MB_PB11_PARAM_TYPES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_TYPES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_TYPES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBIND_IDENTITY type_

// A helper for `MB_ENUM` that generates the elements.
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    .value(MRBIND_STR(name_), d name_ MRBIND_PREPEND_COMMA(comment_))

// A helper for `MB_CLASS` that generates the base class list with a leading comma.
#define DETAIL_MB_PB11_BASE_TYPES(seq) SF_FOR_EACH(DETAIL_MB_PB11_BASE_TYPES_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_BASE_TYPES_BODY(n, d, type_, virtual_) , MRBIND_IDENTITY type_

// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(qual, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, qual, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qual_, type_, name_, comment_) \
    _py11_c.def_readwrite(MRBIND_STR(name_), &qual_ name_ MRBIND_PREPEND_COMMA(comment_));

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a constructor.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(qual_, comment_, params_) \
    _py11_c.def( \
        /* Parameter types. */\
        pybind11::init<DETAIL_MB_PB11_PARAM_TYPES(params_)>() \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a method.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qual_, static_, ret_, name_, const_, comment_, params_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddFunc< \
        /* bool: is this function static? */\
        MRBIND_CAT(DETAIL_MB_PB11_METHOD_IF_STATIC_, static_)(true, false)\
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(params_) \
    >( \
        _py11_c, \
        /* Name */\
        MRBIND_STR(name_), \
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(MRBIND_CAT(DETAIL_MB_PB11_METHOD_IF_STATIC_, static_)(,qual_)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&qual_ name_) \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );
#define DETAIL_MB_PB11_METHOD_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_METHOD_IF_STATIC_static(x, y) x

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

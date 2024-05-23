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
    template <typename T>
    struct ParamTraits
    {
        // using disables_func = void; // Disable the whole function because of this parameter.

        // using adjusted_param_type = ...; // Replaces the parameter type in the wrapping lambda.

        // static T UnadjustParam(adjusted_param_type &&); // Unadjust the parameter type back to the original.
    };

    // Ban non-const lvalue refs to scalar and array types, since writing to those isn't visible in the caller.
    // Maybe other types are also affected, not sure, need more testing.
    template <typename T>
    requires(
        std::is_lvalue_reference_v<T> &&
        !std::is_const_v<std::remove_reference_t<T>> &&
        (std::is_scalar_v<std::remove_reference_t<T>> || std::is_array_v<std::remove_reference_t<T>>)
    )
    struct ParamTraits<T>
    {
        using disables_func = void; // Disable the whole function because of this parameter.
    };

    // Adjust rvalue references to copyable types to passing by value and then copying. pybind11 doesn't like rvalue references.
    template <typename T>
    requires std::is_rvalue_reference_v<T>
    struct ParamTraits<T>
    {
        using adjusted_param_type = std::remove_reference_t<T>;

        static T UnadjustParam(adjusted_param_type &&param)
        {
            return std::move(param);
        }
    };

    // ---

    // Decays the parameter type as spelled in the declaration to the actual type.
    // I.e. decays arrays and functions to pointers, but doesn't touch references.
    template <typename T>
    using DecayToTrueParamType = std::conditional_t<std::is_array_v<T> || std::is_function_v<T>, std::decay_t<T>, T>;

    // Whether having a parameter of type `T` should exclude the whole function from the binding.
    template <typename T>
    concept ParamTypeDisablesWholeFunction = requires{typename ParamTraits<T>::disables_func;};

    // For our lambda wrapping the original function, the adjust parameter type.
    template <typename T>
    struct AdjustedParamType
    {
        using type = T;
    };
    template <typename T>
    concept ParamTypeRequiresAdjustment = requires{typename ParamTraits<T>::adjusted_param_type;};
    template <ParamTypeRequiresAdjustment T>
    struct AdjustedParamType<T>
    {
        using type = typename ParamTraits<T>::adjusted_param_type;
    };

    // Converts from `AdjustedParamType<T>::type` back to `T`.
    template <typename T>
    [[nodiscard]] T UnadjustParam(typename AdjustedParamType<T>::type &&param)
    {
        if constexpr (ParamTypeRequiresAdjustment<T>)
            return ParamTraits<T>::UnadjustParam(std::forward<typename AdjustedParamType<T>::type>(param));
        else
            return std::forward<T>(param);
    }

    // ---

    template <auto Getter>
    void TryAddMemberVar(auto &c, const char *name, auto &&... data)
    {
        // Using pybind11 "properties" here because the member can be a reference, and you can't form a pointer-to-member to those.

        using ClassType = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.

        auto const_getter = [](const ClassType &o) -> const auto & {return Getter(const_cast<ClassType &>(o));};

        using T = std::remove_reference_t<decltype(Getter(std::declval<ClassType &>()))>;
        if constexpr (
            // If this is a const member (bad!) or a const reference member (also bad).
            std::is_const_v<T> ||
            // Pybind11 will try to assign from `const T &`.
            !std::is_copy_assignable_v<T> ||
            // I don't even wanna know what it'll do to assign to a pointer.
            std::is_pointer_v<T>
        )
        {
            c.def_property_readonly(name, const_getter, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
        else
        {
            // Can't use perfect forwarding here, because pybind11 tries to analyze the functor signature, therefore it chokes on templated lambdas.
            c.def_property(name, const_getter, [](ClassType &obj, T value){Getter(obj) = std::move(value);}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
    }

    template <bool IsStatic, auto F, typename ...P>
    void TryAddMemberFunc(auto &c, const char *name, auto &&... data)
    {
        if constexpr ((ParamTypeDisablesWholeFunction<P> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            auto lambda = [](typename AdjustedParamType<P>::type ...params) -> decltype(auto)
            {
                return std::invoke(F, (UnadjustParam<P>)(std::forward<typename AdjustedParamType<P>::type>(params))...);
            };

            // using ReturnType = std::invoke_result_t<decltype(F), P &&...>; // `P...` are already unadjusted.
            constexpr pybind11::return_value_policy ret_policy = pybind11::return_value_policy::automatic_reference;

            if constexpr (IsStatic)
                c.def_static(name, lambda, ret_policy, decltype(data)(data)...);
            else
                c.def(name, lambda, ret_policy, decltype(data)(data)...);
        }
    }

    template <typename ...P>
    void TryAddCtor(auto &c, auto &&... data)
    {
        using T = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<P> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            auto lambda = [](typename AdjustedParamType<P>::type ...params) -> decltype(auto)
            {
                return T((UnadjustParam<P>)(std::forward<typename AdjustedParamType<P>::type>(params))...);
            };

            c.def(pybind11::init(lambda), decltype(data)(data)...);
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
#define MB_FILE PYBIND11_MODULE(MB_PB11_MODULE_NAME, _pb11_m) { (void)_pb11_m;
#define MB_END_FILE }

// For namespaces, emit braces with `using namespace`.
// This helps with name lookup for default arguments (where we can't easily fully qualify the types ourselves).
#define MB_NAMESPACE(namespace_, ...) { using namespace namespace_;
#define MB_END_NAMESPACE(namespace_) }

// Bind a function.
#define MB_FUNC(ret_, ns_, name_, comment_, params_) \
    MRBind::detail::pb11::TryAddMemberFunc<\
        /* Doesn't count as `static` for our puposes. */\
        false, \
        /* The function pointer, cast to the correct type to handle overloads. */\
        static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(*)(DETAIL_MB_PB11_PARAM_TYPES(params_))>(MRBIND_NS_QUAL(ns_) name_) \
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_m, \
        /* Name */\
        MRBIND_STR(MRBIND_NS_CAT(DETAIL_MB_PB11_EXPAND_TOP_NS(ns_)(name_))) \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

// Bind a enum.
#define MB_ENUM(kind_, ns_, name_, type_, comment_, elems_) \
    pybind11::enum_< \
        /* Type. */\
        MRBIND_NS_QUAL(ns_) name_ \
    >(_pb11_m, \
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
        /* Class type. */\
        using _pb11_C = MRBIND_NS_QUAL(ns_) name_; \
        auto &&_pb11_c = pybind11::class_< \
            /* Type. */\
            _pb11_C \
            /* Bases. */\
            DETAIL_MB_PB11_BASE_TYPES(bases_)\
        >(_pb11_m, \
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
// We also decay arrays and functions to pointers here.
// It's easier than doing this in the templates, and easier than trying to figure out how to make libclang do it.
#define DETAIL_MB_PB11_PARAM_TYPES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_TYPES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_TYPES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBind::detail::pb11::DecayToTrueParamType<MRBIND_IDENTITY type_>

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
    MRBind::detail::pb11::TryAddMemberVar<[](_pb11_C &_pb11_o)->auto&&{return _pb11_o.name_;}>(_pb11_c, MRBIND_STR(name_) MRBIND_PREPEND_COMMA(comment_));

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a constructor.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(...) DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(qual_, comment_, params_) \
    MRBind::detail::pb11::TryAddCtor<\
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_TYPES(params_)\
    >( \
        _pb11_c \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a method.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qual_, static_, ret_, name_, const_, comment_, params_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddMemberFunc< \
        /* bool: is this function static? */\
        MRBIND_CAT(DETAIL_MB_PB11_METHOD_IF_STATIC_, static_)(true, false),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(MRBIND_CAT(DETAIL_MB_PB11_METHOD_IF_STATIC_, static_)(,qual_)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&qual_ name_) \
        /* Parameter types: */\
        /* Self parameter. */\
        MRBIND_CAT(DETAIL_MB_PB11_METHOD_IF_STATIC_, static_)(,MRBIND_COMMA() _pb11_C&)\
        /* Normal parameter types. */\
        DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_c, \
        /* Name */\
        MRBIND_STR(name_) \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#define DETAIL_MB_PB11_METHOD_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_METHOD_IF_STATIC_static(x, y) x

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

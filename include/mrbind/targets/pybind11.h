// Intentionally no include guard.

// Set `MB_PB11_EXPAND_TOP_NAMESPACE` to 1 to omit the top-level namespace from function names

#include <future>
#ifndef MB_PB11_MODULE_NAME
#error Must define `MB_PB11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Various headers we need:

#include <mrbind/helpers/common.h>
#include <mrbind/helpers/macro_sequence_for.h>

#include <mrbind/targets/pybind11/pre_include_pybind.h> // All pybind headers must be here: [
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <mrbind/targets/pybind11/post_include_pybind.h> // ]

#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if __has_include(<tl/expected.hpp>)
#define DETAIL_MB_PB11_HAS_TL_EXPECTED 1
#include <tl/expected.hpp>
#else
#define DETAIL_MB_PB11_HAS_TL_EXPECTED 0
#endif

// Some template helpers.

namespace MRBind::detail::pb11
{
    // Given a qualified C++ name, removes all weird characters from it, replaces `::` with `_`, etc.
    // The resulting name is used for the python bindings.
    [[nodiscard]] std::string QualifiedNameToPythonName(std::string_view name);

    // ---

    // A module is assembled into this structure on load, and then passed to pybind11.
    struct UnfinishedModule
    {
        using LoadFunc = void (*)(pybind11::module_ &);

        struct TypeEntry
        {
            LoadFunc load = nullptr;

            // Other types that must be loaded before this one.
            // Those are keys into `Registry::type_entries`.
            std::unordered_set<std::type_index> type_deps;

            // Reverse dependencies. Those are populated automatically.
            std::unordered_set<std::type_index> type_rdeps;

            TypeEntry(LoadFunc load, std::unordered_set<std::type_index> type_deps = {})
                : load(load), type_deps(std::move(type_deps))
            {}
        };
        // The keys are
        std::unordered_map<std::type_index, TypeEntry> type_entries;

        std::vector<LoadFunc> func_entries;
    };

    // Each source file registers itself there.
    struct Registry
    {
        std::vector<void (*)(UnfinishedModule &)> files;
    };

    [[nodiscard]] inline Registry &GetRegistry()
    {
        static Registry ret;
        return ret;
    }

    // ---

    template <typename T>
    struct ReturnTypeTraits
    {
        // static ?? Adjust(T &&);
    };

    template <typename T>
    concept ReturnTypeNeedsAdjusting = requires{ReturnTypeTraits<T>::Adjust(std::declval<T &&>());};

    template <typename T>
    [[nodiscard]] decltype(auto) AdjustReturnedValue(std::type_identity_t<T &&> value)
    {
        if constexpr (ReturnTypeNeedsAdjusting<T>)
            return ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value));
        else if constexpr (std::is_rvalue_reference_v<T &&>)
            return std::forward<T &&>(value);
        else
            return value;
    }

    template <typename T>
    struct AdjustedReturnType {using type = T;};
    template <ReturnTypeNeedsAdjusting T>
    struct AdjustedReturnType<T> {using type = decltype(ReturnTypeTraits<T>::Adjust(std::declval<T &&>()));};

    // Adjust returned futures to shared futures.
    template <typename T>
    struct ReturnTypeTraits<std::future<T>>
    {
        static std::shared_future<T> Adjust(std::future<T> &&fut) {return fut.share();}
    };

    // Recursive adjustment:

    // Adjust `std::vector` elementwise. (What about other containers?)
    template <ReturnTypeNeedsAdjusting T, typename ...P>
    struct ReturnTypeTraits<std::vector<T, P...>>
    {
        static std::vector<typename AdjustedReturnType<T>::type> Adjust(std::vector<T, P...> &&value)
        {
            std::vector<typename AdjustedReturnType<T>::type> ret;
            ret.reserve(value.size());
            for (auto &elem : value)
                ret.push_back((AdjustReturnedValue<T>)(std::move(elem)));
            return ret;
        }
    };

    #if DETAIL_MB_PB11_HAS_TL_EXPECTED
    // Adjust `tl::expected` elementwise.
    template <typename T, typename U> requires ReturnTypeNeedsAdjusting<T> || ReturnTypeNeedsAdjusting<U>
    struct ReturnTypeTraits<tl::expected<T, U>>
    {
        static tl::expected<typename AdjustedReturnType<T>::type, typename AdjustedReturnType<U>::type> Adjust(tl::expected<T, U> &&value)
        {
            if (value)
            {
                if constexpr (std::is_void_v<T>)
                    return {};
                else
                    return (AdjustReturnedValue<T>)(std::move(value.value()));
            }
            else
            {
                return tl::unexpected((AdjustReturnedValue<U>)(std::move(value.error())));
            }
        }
    };
    #endif

    // ---

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

    template <bool IsStatic, auto Getter>
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
            if constexpr (IsStatic)
                c.def_property_readonly_static(name, const_getter, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property_readonly(name, const_getter, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
        else
        {
            // Can't use perfect forwarding here, because pybind11 tries to analyze the functor signature, therefore it chokes on templated lambdas.
            if constexpr (IsStatic)
                c.def_property_static(name, const_getter, [](ClassType &obj, T value){Getter(obj) = std::move(value);}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
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
            using ReturnType = std::invoke_result_t<decltype(F), P &&...>; // `P...` are already unadjusted.

            auto lambda = [](typename AdjustedParamType<P>::type ...params) -> decltype(auto)
            {
                if constexpr (std::is_void_v<ReturnType>)
                    std::invoke(F, (UnadjustParam<P>)(std::forward<typename AdjustedParamType<P>::type>(params))...);
                else if constexpr (ReturnTypeNeedsAdjusting<ReturnType>)
                    return (AdjustReturnedValue<ReturnType>)(std::invoke(F, (UnadjustParam<P>)(std::forward<typename AdjustedParamType<P>::type>(params))...));
                else
                    return std::invoke(F, (UnadjustParam<P>)(std::forward<typename AdjustedParamType<P>::type>(params))...);
            };

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

#if !MRBIND_IS_SECONDARY_FILE // Don't duplicate this if we have >1 TU.

namespace MRBind::detail::pb11
{
    std::string QualifiedNameToPythonName(std::string_view name)
    {
        std::string ret;
        ret.reserve(name.size());
        bool prev_char_is_special = false;
        for (char ch : name)
        {
            if (std::isalnum((unsigned char)ch))
            {
                ret += ch;
                prev_char_is_special = false;
            }
            else
            {
                if (!prev_char_is_special)
                {
                    ret += '_';
                    prev_char_is_special = true;
                }
            }
        }
        return ret;
    }
}

PYBIND11_MODULE(MB_PB11_MODULE_NAME, _pb11_m)
{
    using namespace MRBind::detail::pb11;

    // Load stuff from evety file.
    UnfinishedModule _pb11_u;
    for (auto f : MRBind::detail::pb11::GetRegistry().files)
        f(_pb11_u);

    { // Topologically sort the classes (by inheritance), and immediately load them. https://en.wikipedia.org/wiki/Topological_sorting#Kahn's_algorithm
        // Populate reverse dependencies.
        for (auto &[id, e] : _pb11_u.type_entries)
        {
            for (std::type_index dep : e.type_deps)
            {
                auto iter = _pb11_u.type_entries.find(dep);
                if (iter == _pb11_u.type_entries.end())
                    throw std::runtime_error(std::string("MRBind pybind11: Type `") + dep.name() + "` is a depenency of type `" + id.name() + "`, but the former is not registered.");
                _pb11_u.type_entries.at(dep).type_rdeps.insert(id);
            }
        }

        // Find types with no deps and load them immediately.
        std::vector<typename decltype(UnfinishedModule::type_entries)::value_type *> queue;
        for (auto &elem : _pb11_u.type_entries)
        {
            if (elem.second.type_deps.empty())
            {
                elem.second.load(_pb11_m);
                elem.second.load = nullptr;
                if (!elem.second.type_rdeps.empty())
                    queue.push_back(&elem);
            }
        }

        // Process the queue.
        while (!queue.empty())
        {
            auto &e = *queue.back();
            queue.pop_back();
            for (std::type_index rdep : e.second.type_rdeps)
            {
                auto next_e_iter = _pb11_u.type_entries.find(rdep);
                if (next_e_iter == _pb11_u.type_entries.end())
                    throw std::runtime_error(std::string("MRBind pybind11: Type not registered: ") + rdep.name());

                next_e_iter->second.type_deps.erase(e.first);
                if (next_e_iter->second.type_deps.empty())
                {
                    next_e_iter->second.load(_pb11_m);
                    next_e_iter->second.load = nullptr;
                    if (!next_e_iter->second.type_rdeps.empty())
                        queue.push_back(&*next_e_iter);
                }
            }
        }

        // Complain if there are any remaining cycles.
        for (const auto &elem : _pb11_u.type_entries)
        {
            if (elem.second.load)
                throw std::runtime_error(std::string("MRBind pybind11: There's a dependency cycle in the type graph, involving ") + elem.first.name());
        }
    }

    // Load the functions.
    for (const auto &elem : _pb11_u.func_entries)
        elem(_pb11_m);
}

#endif

// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif

// Destroy existing macros.
#include <mrbind/helpers/undef_all_macros.h>

// Signal to include the original haders.
#define MB_INCLUDE_ORIGINAL_HEADER 2

// Wrap the whole file in a registered lambda.
#define MB_FILE static const auto register_bindings = []{ MRBind::detail::pb11::GetRegistry().files.push_back([]([[maybe_unused]] MRBind::detail::pb11::UnfinishedModule &_pb11_u){
#define MB_END_FILE }); return nullptr; }();

// For namespaces, emit braces with `using namespace`.
// This helps with name lookup for default arguments (where we can't easily fully qualify the types ourselves).
#define MB_NAMESPACE(namespace_, ...) { using namespace namespace_;
#define MB_END_NAMESPACE(namespace_) }

// Bind a function.
#define MB_FUNC(ret_, name_, qualname_, comment_, params_) \
    _pb11_u.func_entries.push_back([](pybind11::module_ &_pb11_m){\
        MRBind::detail::pb11::TryAddMemberFunc<\
            /* Doesn't count as `static` for our purposes. */\
            false, \
            /* The function pointer, cast to the correct type to handle overloads. */\
            static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(*)(DETAIL_MB_PB11_PARAM_TYPES(params_))> qualname_ \
            /* Parameter types. */\
            DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(params_) \
        >( \
            _pb11_m, \
            /* Name */\
            MRBind::detail::pb11::QualifiedNameToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)).c_str() \
            /* Parameters. */\
            DETAIL_MB_PB11_MAKE_PARAMS(params_) \
            /* Comment, if any. */ \
            MRBIND_PREPEND_COMMA(comment_) \
        ); \
    });

// Bind a enum.
#define MB_ENUM(kind_, name_, qualname_, type_, comment_, elems_) \
    { \
        /* Type. */\
        using _pb11_E = MRBIND_IDENTITY qualname_; \
        _pb11_u.type_entries.try_emplace(typeid(_pb11_E), [](pybind11::module_ &_pb11_m) \
        { \
            pybind11::enum_<_pb11_E>(_pb11_m, \
                /* Name as a string. */\
                MRBind::detail::pb11::QualifiedNameToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)).c_str() \
                /* Comment, if any. */\
                MRBIND_PREPEND_COMMA(comment_) \
            ) \
                /* Elements. */\
                DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_)\
            ; \
        }); \
    }

// Bind a class.
#define MB_CLASS(kind_, name_, qualname_, comment_, bases_, members_) \
    { \
        /* Class type. */\
        using _pb11_C = MRBIND_IDENTITY qualname_; \
        _pb11_u.type_entries.try_emplace(typeid(_pb11_C), [](pybind11::module_ &_pb11_m) \
        { \
            auto &&_pb11_c = pybind11::class_< \
                /* Type. */\
                _pb11_C \
                /* Bases. */\
                DETAIL_MB_PB11_BASE_TYPES(bases_)\
            >(_pb11_m, \
                /* Name as a string. */\
                MRBind::detail::pb11::QualifiedNameToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)).c_str() \
            ); \
            /* Members. */\
            DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
        }, std::unordered_set<std::type_index>{DETAIL_MB_PB11_BASE_TYPEIDS(bases_)}); \
    }

#define MB_END_CLASS(name_)

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
    .value(MRBIND_STR(name_), MRBIND_IDENTITY d::name_ MRBIND_PREPEND_COMMA(comment_))

// A helper for `MB_CLASS` that generates the base class list with a leading comma.
#define DETAIL_MB_PB11_BASE_TYPES(seq) SF_FOR_EACH(DETAIL_MB_PB11_BASE_TYPES_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_BASE_TYPES_BODY(n, d, type_, virtual_) , MRBIND_IDENTITY type_
// Same, but emits `typeid`s, and with a trailing comma.
#define DETAIL_MB_PB11_BASE_TYPEIDS(seq) SF_FOR_EACH(DETAIL_MB_PB11_BASE_TYPEIDS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_BASE_TYPEIDS_BODY(n, d, type_, virtual_) typeid(MRBIND_IDENTITY type_),

// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(classname, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, classname, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qualname_, static_, type_, name_, comment_) \
    MRBind::detail::pb11::TryAddMemberVar< \
        /* Static? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_,static_)(true, false),\
        /* Accessor lambda. */\
        [](_pb11_C &_pb11_o)->auto&&{return _pb11_o.name_;}\
    >(\
        _pb11_c,\
        /* Name. */\
        MRBIND_STR(name_)\
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_)\
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a constructor.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(...) DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(qualname_, comment_, params_) \
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
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qualname_, static_, ret_, name_, simplename_, const_, comment_, params_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddMemberFunc< \
        /* bool: is this function static? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(true, false),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_IDENTITY qualname_::)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&MRBIND_IDENTITY qualname_:: name_) \
        /* Parameter types: */\
        /* Self parameter. */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_COMMA() _pb11_C &)\
        /* Normal parameter types. */\
        DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_c, \
        /* Name */\
        MRBIND_STR(simplename_) \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a conversion function.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_conv_op(qualname_, ret_, const_, comment_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddMemberFunc< \
        /* Not static. */\
        false,\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<DETAIL_MB_PB11_TYPE_OR_VOID(ret_)>(MRBIND_IDENTITY qualname_::*)() const_>(&MRBIND_IDENTITY qualname_::operator MRBIND_IDENTITY ret_), \
        /* The only parameter, which is the class itself. */\
        _pb11_C & \
    >( \
        _pb11_c, \
        /* Name */\
        ("_convert_to_" + MRBind::detail::pb11::QualifiedNameToPythonName(MRBIND_STR(MRBIND_IDENTITY ret_))).c_str() \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#define DETAIL_MB_PB11_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_IF_STATIC_static(x, y) x

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

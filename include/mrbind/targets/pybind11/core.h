#pragma once

#ifndef MB_PB11_MODULE_NAME
#error Must define `MB_PB11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Various headers we need:

#include <mrbind/helpers/common.h>
#include <mrbind/helpers/const_string.h>
#include <mrbind/helpers/macro_sequence_for.h>
#include <mrbind/helpers/type_name.h>

#include <mrbind/targets/pybind11/pre_include_pybind.h> // All pybind headers must be here: [
#include <pybind11/functional.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl_bind.h>
// NOTE: Not including `<pybind11/stl.h>` because that doesn't cooperate with passing containers by reference.
#include <mrbind/targets/pybind11/post_include_pybind.h> // ]

#include <map>
#include <optional>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#ifdef MB_PB11_ADJUST_NAMES
#include <regex>
#endif



// Some template helpers.

namespace MRBind
{
    template <typename> struct BakedTypeName; // Codegen defines this when you add `--emit-type-names`.
}

namespace MRBind::detail::pb11
{
    // Given a qualified C++ name, removes all weird characters from it, replaces `::` with `_`, etc.
    // The resulting name is used for the python bindings.
    [[nodiscard]] std::string ToPythonName(std::string_view name);

    // Given MRBind's internal overloaded operator name, output Python's name for it. Otherwise returns the name unchanged.
    [[nodiscard]] const char *AdjustOverloadedOperatorName(const char *name, bool unary);

    // ---

    // A module is assembled into this structure on load, and then passed to pybind11.
    struct UnfinishedModule
    {
        struct BasicPybindType
        {
            virtual ~BasicPybindType() = default;
            BasicPybindType() = default;
            BasicPybindType(const BasicPybindType &) = delete;
            BasicPybindType &operator=(const BasicPybindType &) = delete;

            virtual pybind11::object &GetPybindObject() = 0;

            void AddExtraMethod(const char *name, auto &&f, const auto &... extra)
            {
                GetPybindObject().attr(name) = pybind11::cpp_function(
                    f,
                    pybind11::name(name),
                    pybind11::is_method(GetPybindObject()),
                    pybind11::sibling(pybind11::getattr(GetPybindObject(), name, pybind11::none())),
                    extra...
                );
            }
        };

        template <typename T>
        struct SpecificPybindType : BasicPybindType
        {
            // An instance of `pybind11::class_<...>` or `pybind11::enum_<...>` or something similar.
            T type{};

            template <typename ...P>
            SpecificPybindType(P &&... params) : type(std::forward<P>(params)...) {}

            pybind11::object &GetPybindObject() override {return type;}
        };

        using InitClass = std::unique_ptr<BasicPybindType> (*)(pybind11::module_ &m, UnfinishedModule &u, const char *n);
        using AddClassMembers = void (*)(pybind11::module_ &m, UnfinishedModule &u, BasicPybindType &c, bool second_pass);

        struct TypeEntry
        {
            std::string pybind_type_name;

            InitClass init = nullptr;
            AddClassMembers load_members = nullptr;

            bool was_processed = false;

            // We store this to load the methods after all types.
            std::unique_ptr<BasicPybindType> pybind_type;

            // Other types that must be loaded before this one.
            // Those are keys into `Registry::type_entries`.
            std::unordered_set<std::type_index> type_deps;

            // Reverse dependencies. Those are populated automatically.
            std::unordered_set<std::type_index> type_rdeps;

            TypeEntry(std::string pybind_type_name, InitClass init, AddClassMembers load_members, std::unordered_set<std::type_index> type_deps = {})
                : pybind_type_name(std::move(pybind_type_name)), init(init), load_members(load_members), type_deps(std::move(type_deps))
            {}
        };
        // The keys are
        std::unordered_map<std::type_index, TypeEntry> type_entries;

        using LoadFunc = void (*)(pybind11::module_ &m, UnfinishedModule &u);
        std::vector<LoadFunc> func_entries;
    };

    // Each source file registers itself there.
    struct Registry
    {
        std::vector<void (*)(UnfinishedModule &)> files;

        // This is for extra bindings, such as those for `std::vector`.
        std::map<std::type_index, void (*)(UnfinishedModule &)> extra;
    };

    [[nodiscard]] inline Registry &GetRegistry()
    {
        static Registry ret;
        return ret;
    }

    // ---

    // This is used for manually defining  bindings
    template <typename T>
    struct CustomTypeBinding {using unspecialized = void;};

    template <typename T>
    concept HasCustomTypeBinding = !requires{typename CustomTypeBinding<T>::unspecialized;};

    template <typename T>
    struct DefaultCustomTypeBinding
    {
        // The pybind11's description of this type.
        // Can also be a `pybind11::enum_<T>` for enums, and perhaps something else.
        using pybind_type = pybind11::class_<T>;

        // This passes the constructor arguments to `pybind_type`.
        // Normally you don't need to override this. Override this for stuff like `pybind11::bind_vector()` or `pybind11::bind_map()`.
        // `U` is either a `pybind_type` or that of a derived class (i.e. `TypedefWrapper<T, "...">`). Use `U` instead of `pybind_type` and `T` here.
        template <typename U>
        [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, UnfinishedModule &, const char *n) {return f(m, n);}

        // The type name for pybind11. Normally don't need to override this.
        [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(BakedTypeNameOrFallback<T>());}

        // Which base classes we inherit from. Or in general, which types must be initialized before this one.
        static std::unordered_set<std::type_index> base_typeids() {return {};}

        // Registers all members. Called twice, with `second_pass = false` and then `= true`.
        // Usually must override this, unless you do something with `pybind_init` (see comment on it above).
        // Normally you'd do constructors in the first pass, everything else in the second pass. But often you can just dump everything to the second pass.
        // Note, must not use `T` here. Use `using TT = typename std::remove_reference_t<decltype(c.type)>::type;` to support derived classes (i.e. `TypedefWrapper<T, "...">`).
        static void bind_members(pybind11::module_ &, UnfinishedModule &, auto &c, bool second_pass) {(void)c; (void)second_pass;}
    };

    template <typename T>
    struct RegisterTypeWithCustomBinding
    {
        inline static const std::nullptr_t register_type = []{
            namespace pb11 = MRBind::detail::pb11;
            pb11::GetRegistry().extra.try_emplace(
                typeid(T), [](pb11::UnfinishedModule &u)
                {
                    using Traits = MRBind::detail::pb11::CustomTypeBinding<T>;
                    using PybindType = typename Traits::pybind_type;
                    using TypeStorage = pb11::UnfinishedModule::SpecificPybindType<PybindType>;
                    u.type_entries.try_emplace(
                        typeid(T),
                        Traits::pybind_type_name(),
                        [](pybind11::module_ &m, MRBind::detail::pb11::UnfinishedModule &u, const char *n) -> std::unique_ptr<pb11::UnfinishedModule::BasicPybindType>
                        {
                            return Traits::template pybind_init<T>(
                                [&](auto &&... params)
                                {
                                    return std::make_unique<TypeStorage>(decltype(params)(params)...);
                                },
                                m, u, n
                            );
                        },
                        [](pybind11::module_ &m, MRBind::detail::pb11::UnfinishedModule &u, pb11::UnfinishedModule::BasicPybindType &b, bool second_pass)
                        {
                            Traits::bind_members(m, u, static_cast<TypeStorage &>(b), second_pass);
                        },
                        Traits::base_typeids()
                    );
                });
            return nullptr;
        }();
        /* Instantiate `register_type`. */
        static constexpr std::integral_constant<const std::nullptr_t *, &register_type> force_register_type{};
    };

    // ---

    // This is used instead of `T` for class typedefs, to give them a shared type.
    template <typename T, ConstString Name> requires std::is_class_v<T>
    struct TypedefWrapper : T
    {
        TypedefWrapper() requires std::default_initializable<T> {}
        TypedefWrapper(const T &other) requires std::copyable<T> : T(other) {}
        TypedefWrapper(T &&other) requires std::movable<T> : T(std::move(other)) {}
    };

    // Given a type, wraps it in `TypedefWrapper`. For pointers and references, it inserted into the most nested level only.
    template <typename T, ConstString Name> struct TypedefWrapperAdder {};
    template <typename T, ConstString Name> requires std::is_class_v<T> struct TypedefWrapperAdder<      T, Name> : RegisterTypeWithCustomBinding<TypedefWrapper<T, Name>> {using type =       TypedefWrapper<T, Name>;};
    template <typename T, ConstString Name> requires std::is_class_v<T> struct TypedefWrapperAdder<const T, Name> : RegisterTypeWithCustomBinding<TypedefWrapper<T, Name>> {using type = const TypedefWrapper<T, Name>;};
    template <typename T, ConstString Name> struct TypedefWrapperAdder<T *, Name> {using type = typename TypedefWrapperAdder<T, Name>::type *;};
    template <typename T, ConstString Name> struct TypedefWrapperAdder<T *const, Name> {using type = typename TypedefWrapperAdder<T, Name>::type *;};
    template <typename T, ConstString Name> struct TypedefWrapperAdder<T &, Name> {using type = typename TypedefWrapperAdder<T, Name>::type &;};
    template <typename T, ConstString Name> struct TypedefWrapperAdder<T &&, Name> {using type = typename TypedefWrapperAdder<T, Name>::type &&;};

    // Removes all pointers, references, and cv-qualifiers from a type.
    template <typename T> struct RemoveCvPointersRefs {using type = T;};
    template <typename T> struct RemoveCvPointersRefs<const T> {using type = typename RemoveCvPointersRefs<T>::type;};
    template <typename T> struct RemoveCvPointersRefs<T *> {using type = typename RemoveCvPointersRefs<T>::type;};
    template <typename T> struct RemoveCvPointersRefs<T &> {using type = typename RemoveCvPointersRefs<T>::type;};
    template <typename T> struct RemoveCvPointersRefs<T &&> {using type = typename RemoveCvPointersRefs<T>::type;};

    // Whether `Name` is the canonical type name of `T` according to `BakedTypeNameOrFallback()`.
    // This also rejects non-classes, because we can't apply `TypedefWrapper` to them because it uses inheritance.
    // Also always returns true for empty strings.
    template <typename T, ConstString Name>
    constexpr bool needs_typedef_wrapper =
        std::is_class_v<T> &&
        !Name.view().empty() &&
        HasCustomTypeBinding<T> && // Reject parsed classes because I couldn't figure out how to actually generate typedef bindings for them.
        BakedTypeNameOrFallback<T>() != Name.view();

    // If `Name` starts with `const `, returns the character index after that, otherwise 0.
    template <ConstString Name>
    constexpr std::size_t FindFirstIndexAfterLeadingConst = []{
        std::string_view v = Name.view();
        while (v.starts_with("const "))
            v = v.substr(6);
        return v.data() - Name.view().data();
    }();

    // If the `Name` starts with `const` and/or ends with `*`, `&`, `&&`, or `const`, removes all that recursively (i.e. possibly more than once),
    // trimming trailing and leading spaces.
    template <ConstString Name>
    [[nodiscard]] consteval auto TrimCvPointersRefsFromName()
    {
        constexpr std::size_t size = []{
            constexpr std::string_view v = Name.view().substr(FindFirstIndexAfterLeadingConst<Name>);
            auto IsRemovedChar = [](char ch){return ch == '*' || ch == '&' || ch == ' ';};
            const char *p = v.data();
            std::size_t n = v.size();
            bool one_char = false;
            while (n > 0 && ((one_char = IsRemovedChar(p[n-1])) || (n >= 6 && p[n-5]=='c' && p[n-4]=='o' && p[n-3]=='n' && p[n-2]=='s' && p[n-1]=='t' && IsRemovedChar(p[n-6]))))
                n -= (one_char ? 1 : 6);
            return n;
        }();
        ConstString<size + 1> ret{};
        std::copy_n(Name.view().data() + FindFirstIndexAfterLeadingConst<Name>, size, ret.value);
        return ret;
    }

    // See `MaybeTypedefWrapper` below.
    template <typename T, ConstString Name>
    struct MaybeTypedefWrapperHelper {using type = T;};
    template <typename T, ConstString Name> requires needs_typedef_wrapper<typename RemoveCvPointersRefs<T>::type, TrimCvPointersRefsFromName<Name>()>
    struct MaybeTypedefWrapperHelper<T, Name> {using type = TypedefWrapperAdder<T, TrimCvPointersRefsFromName<Name>()>::type;};

    // If `Name` is a canonical name of `T`, returns `T`. Otherwise returns `TypedefWrapper<T, Name>`.
    template <typename T, ConstString Name>
    using MaybeTypedefWrapper = typename MaybeTypedefWrapperHelper<T, Name>::type;

    // ---

    // This trait can be used to automatically adjust returned values.

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

    template <typename T, ConstString Name>
    [[nodiscard]] decltype(auto) AdjustAndWrapReturnedValue(std::type_identity_t<T &&> value)
    {
        if constexpr (ReturnTypeNeedsAdjusting<T>)
        {
            if constexpr (!needs_typedef_wrapper<T, Name>)
            {
                return ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value));
            }
            else
            {
                using R = decltype(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
                using W = MaybeTypedefWrapper<R, Name>;
                if constexpr (std::is_reference_v<W>)
                    return reinterpret_cast<W>(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
                else
                    return W(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
            }
        }
        else if constexpr (std::is_reference_v<T>)
            return reinterpret_cast<MaybeTypedefWrapper<T, Name> &&>(std::forward<T &&>(value));
        else
            return MaybeTypedefWrapper<T, Name>(std::move(value));
    }

    template <typename T>
    struct AdjustedReturnType {using type = T;};
    template <ReturnTypeNeedsAdjusting T>
    struct AdjustedReturnType<T> {using type = decltype(ReturnTypeTraits<T>::Adjust(std::declval<T &&>()));};

    // ---

    // This traits lets you adjust ecah passed parameter.

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

    // For our lambda wrapping the original function, the adjusted parameter type.
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

    template <typename T, ConstString Name>
    using WrappedAdjustedParamType = MaybeTypedefWrapper<typename AdjustedParamType<T>::type, Name>;

    template <typename T, ConstString TypeName>
    struct ParamInfo
    {
        using OriginalType = DecayToTrueParamType<T>; // Unsure where to decay, probably any
        static constexpr auto name = TypeName;

        using WrappedAdjustedType = WrappedAdjustedParamType<T, name>;
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

    // Converts from `WrappedAdjustedParamType<T>` back to `T`.
    template <typename T, ConstString Name>
    [[nodiscard]] T UnwrapUnadjustParam(WrappedAdjustedParamType<T, Name> &&param)
    {
        return (UnadjustParam<T>)(static_cast<typename AdjustedParamType<T>::type &&>(std::forward<WrappedAdjustedParamType<T, Name>>(param)));
    }

    // ---

    template <bool IsStatic, auto Getter>
    void TryAddMemberVar(auto &c, bool second_pass, const char *name, auto &&... data)
    {
        // Using pybind11 "properties" here because the member can be a reference, and you can't form a pointer-to-member to those.

        if (!second_pass) // Member variables are loaded in the second pass, though this shouldn't matter in most cases.
            return;

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

    // Member or non-member functions. Non-member functions should pass `IsStatic == false`.
    template <bool IsStatic, auto F, ConstString ReturnTypeName, typename ...P>
    void TryAddFunc(auto &c, UnfinishedModule &u, bool second_pass, const char *simplename, const char *fullname, auto &&... data)
    {
        if constexpr ((ParamTypeDisablesWholeFunction<typename P::OriginalType> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            if (!second_pass) // Member function are loaded in the second pass because of the default method arguments.
                return;

            using ReturnType = std::invoke_result_t<decltype(F), typename P::OriginalType &&...>; // `P::OriginalType...` are already unadjusted.

            auto lambda = [](typename P::WrappedAdjustedType ...params) -> decltype(auto)
            {
                if constexpr (std::is_void_v<ReturnType>)
                    /*------------------------------------------------------------*/std::invoke(F, (UnwrapUnadjustParam<typename P::OriginalType, P::name>)(std::forward<typename P::WrappedAdjustedType>(params))...);
                else
                    return (AdjustAndWrapReturnedValue<ReturnType, ReturnTypeName>)(std::invoke(F, (UnwrapUnadjustParam<typename P::OriginalType, P::name>)(std::forward<typename P::WrappedAdjustedType>(params))...));
            };

            constexpr pybind11::return_value_policy ret_policy = pybind11::return_value_policy::automatic_reference;

            constexpr bool is_class_method = !std::is_same_v<decltype(c), pybind11::module_ &>;

            // If this is an overloaded operator defined outside of a class (or as a `friend`), inject it into
            // the target class, instead of emitting as a global function.
            if constexpr (!is_class_method && sizeof...(P) >= 1)
            {
                const char *op = AdjustOverloadedOperatorName(simplename, sizeof...(P) == 1);
                if (op != simplename)
                {
                    [&](auto&&, auto &&...trimmed_data)
                    {
                        using FirstParam = FirstType<typename P::OriginalType...>;

                        if (auto iter = u.type_entries.find(typeid(FirstParam)); iter != u.type_entries.end())
                        {
                            // Try injecting into the type of the first operand.
                            iter->second.pybind_type->AddExtraMethod(op, lambda, ret_policy, decltype(trimmed_data)(trimmed_data)...);
                        }
                        else
                        {
                            // If the first operand is not registered AND this is a binary operator,
                            // try injecting the reverse form into the type of the second operand.
                            if constexpr (sizeof...(P) == 2)
                            {
                                using SecondParam = SecondType<typename P::OriginalType...>;
                                if (auto iter = u.type_entries.find(typeid(SecondParam)); iter != u.type_entries.end())
                                {
                                    // A lambda to swap the order of the two arguments.
                                    auto symmetric_lambda = [](SecondType<typename P::WrappedAdjustedType...> x, FirstType<typename P::WrappedAdjustedType...> y) -> decltype(auto)
                                    {
                                        // Using `forward` here to have decent behavior when `x`,`y` are non-references.
                                        return decltype(lambda){}(std::forward<decltype(y)>(y), std::forward<decltype(x)>(x));
                                    };

                                    // In python, binary operators with reverse argument order are prefixed with `r`: e.g. `__add__` becomes `__radd__`, etc.
                                    iter->second.pybind_type->AddExtraMethod(("__r" + std::string(op + 2)).c_str(), symmetric_lambda, ret_policy, decltype(trimmed_data)(trimmed_data)...);
                                }
                            }
                        }
                    }
                    (decltype(data)(data)...);

                    // Return unconditionally. If we couldn't inject this operator into one of the arguments' types, just drop it.
                    return;
                }
            }

            const char *final_name = is_class_method ? AdjustOverloadedOperatorName(simplename, sizeof...(P) == 1) : fullname;

            if constexpr (IsStatic)
                c.def_static(final_name, lambda, ret_policy, decltype(data)(data)...);
            else
                c.def(final_name, lambda, ret_policy, decltype(data)(data)...);
        }
    }

    template <typename ...P>
    void TryAddCtor(auto &c, bool second_pass, auto &&... data)
    {
        using T = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<P> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            if (second_pass)
                return;

            auto lambda = [](typename P::WrappedAdjustedType ...params) -> decltype(auto)
            {
                return T((UnwrapUnadjustParam<typename P::OriginalType, P::name>)(std::forward<typename P::WrappedAdjustedType>(params))...);
            };

            c.def(pybind11::init(lambda), decltype(data)(data)...);
        }
    }
}

PYBIND11_NAMESPACE_BEGIN(PYBIND11_NAMESPACE)
namespace detail
{
    template <typename T>
    requires MRBind::detail::pb11::HasCustomTypeBinding<T>
    class type_caster<T> : public type_caster_base<T>, MRBind::detail::pb11::RegisterTypeWithCustomBinding<T> {};
}
PYBIND11_NAMESPACE_END(PYBIND11_NAMESPACE)

template <typename T, MRBind::ConstString Name>
requires MRBind::detail::pb11::HasCustomTypeBinding<T>
struct MRBind::detail::pb11::CustomTypeBinding<MRBind::detail::pb11::TypedefWrapper<T, Name>>
    : public CustomTypeBinding<T>
{
    using pybind_type = pybind11::class_<MRBind::detail::pb11::TypedefWrapper<T, Name>>;

    [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(Name.view());}

    // This causes errors for some reason (our own "T is not yet registered").
    // Commenting this out doesn't seem to cause any issues, so whatever.
    // std::unordered_set<std::type_index> base_typeids() const {return {typeid(T)};}
};

// Module entry point, and more stuff.
#if !MRBIND_IS_SECONDARY_FILE // Don't duplicate this if we have >1 TU.

namespace MRBind::detail::pb11
{
    std::string ToPythonName(std::string_view name)
    {
        // Read regex replacement rules from `MB_PB11_ADJUST_NAMES`.
        // This implements a tiny subset of `sed`: a `;`-separated list of `s/../../` or `s/../../g`, where the first `..` is the regex,
        // and the second `..` is the replacement string, possibly containing `$&` (entire match) and `$1` (a specific capture group).
        #ifdef MB_PB11_ADJUST_NAMES
        struct Rule
        {
            std::regex regex;
            std::string replacement;
            bool global = false;
        };
        static const std::vector<Rule> rules = []{
            std::vector<Rule> rules;
            const char *const input = MB_PB11_ADJUST_NAMES;
            const char *cur = input;

            while (*cur)
            {
                if (cur != input)
                {
                    if (*cur != ';')
                        throw std::runtime_error("In MB_PB11_ADJUST_NAMES: Expected `;` separator between rules.");
                    cur++;
                }

                if (*cur != 's')
                    throw std::runtime_error("In MB_PB11_ADJUST_NAMES: Expected `s` to start a `s/../../` rule.");
                cur++;

                if (*cur != '/')
                    throw std::runtime_error("In MB_PB11_ADJUST_NAMES: Expected `/` after `s`.");
                cur++;

                std::string regex_str;
                while (*cur != '/' && *cur != '\0')
                    regex_str += *cur++;

                if (!*cur)
                    throw std::runtime_error("In MB_PB11_ADJUST_NAMES: Unterminated `s/`, missing the second `/`.");
                cur++; // Skip `/`.

                Rule &this_rule = rules.emplace_back();
                this_rule.regex = std::regex(regex_str);

                while (*cur != '/' && *cur != '\0')
                    this_rule.replacement += *cur++;
                if (!*cur)
                    throw std::runtime_error("In MB_PB11_ADJUST_NAMES: Unterminated `s/../`, missing the third `/`.");
                cur++; // Skip `/`.

                if (*cur == 'g')
                {
                    cur++;
                    this_rule.global = true;
                }
            }

            return rules;
        }();

        std::string adjusted_name(name);
        for (const Rule &rule : rules)
            adjusted_name = std::regex_replace(adjusted_name, rule.regex, rule.replacement, rule.global ? std::regex_constants::format_default : std::regex_constants::format_first_only);
        name = adjusted_name;
        #endif

        std::string ret;
        ret.reserve(name.size());
        bool prev_char_is_special = false;
        std::size_t last_good_size = 0;
        for (char ch : name)
        {
            if (std::isalnum((unsigned char)ch))
            {
                ret += ch;
                prev_char_is_special = false;
                last_good_size = ret.size();
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
        ret.resize(last_good_size); // Trim trailing special characters.

        return ret;
    }

    [[nodiscard]] const char *AdjustOverloadedOperatorName(const char *name, bool unary)
    {
        std::string_view view = name;
        if (view == "_Plus") return unary ? "__pos__" : "__add__";
        if (view == "_Minus") return unary ? "__neg__" : "__sub__";
        if (view == "_Star") return "__matmul__";
        if (view == "_Slash") return "__truediv__";
        if (view == "_Percent") return "__mod__";
        if (view == "_Caret") return "__xor__";
        if (view == "_Amp") return "__and__";
        if (view == "_Pipe") return "__or__";
        if (view == "_Tilde") return "__invert__";
        if (view == "_PlusEqual") return "__iadd__";
        if (view == "_MinusEqual") return "__isub__";
        if (view == "_StarEqual") return "__imatmul__";
        if (view == "_SlashEqual") return "__itruediv__";
        if (view == "_PercentEqual") return "__imod__";
        if (view == "_CaretEqual") return "__ixor__";
        if (view == "_AmpEqual") return "__iand__";
        if (view == "_PipeEqual") return "__ior__";
        if (view == "_LessLess") return "__lshift__";
        if (view == "_GreaterGreater") return "__rshift__";
        if (view == "_LessLessEqual") return "__ilshift__";
        if (view == "_GreaterGreaterEqual") return "__irshift__";
        return name;
        // Unhandled operators: (taken from /usr/lib/llvm-18/include/clang/Basic/OperatorKinds.def)
        // _New
        // _Delete
        // _Array_New
        // _Array_Delete
        // _Exclaim
        // _Equal
        // _Less
        // _Greater
        // _EqualEqual
        // _ExclaimEqual
        // _LessEqual
        // _GreaterEqual
        // _Spaceship
        // _AmpAmp
        // _PipePipe
        // _PlusPlus
        // _MinusMinus
        // _Comma
        // _ArrowStar
        // _Arrow
        // _Call
        // _Subscript
    }
}

PYBIND11_MODULE(MB_PB11_MODULE_NAME, _pb11_m)
{
    using namespace MRBind::detail::pb11;

    // Load stuff from evety file.
    UnfinishedModule _pb11_u;
    for (auto f : MRBind::detail::pb11::GetRegistry().files)
        f(_pb11_u);
    for (const auto &f : MRBind::detail::pb11::GetRegistry().extra)
        f.second(_pb11_u);

    { // Topologically sort the classes (by inheritance), and load them. https://en.wikipedia.org/wiki/Topological_sorting#Kahn's_algorithm
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

        std::vector<MRBind::detail::pb11::UnfinishedModule::TypeEntry *> final_order;

        // Find types with no deps and load them immediately.
        std::vector<typename decltype(UnfinishedModule::type_entries)::value_type *> queue;
        for (auto &elem : _pb11_u.type_entries)
        {
            if (elem.second.type_deps.empty())
            {
                final_order.push_back(&elem.second);
                elem.second.was_processed = true;
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
                    final_order.push_back(&next_e_iter->second);
                    next_e_iter->second.was_processed = true;
                    if (!next_e_iter->second.type_rdeps.empty())
                        queue.push_back(&*next_e_iter);
                }
            }
        }

        // Complain if there are any remaining cycles.
        for (const auto &elem : _pb11_u.type_entries)
        {
            if (!elem.second.was_processed)
                throw std::runtime_error(std::string("MRBind pybind11: There's a dependency cycle in the type graph, involving ") + elem.first.name());
        }

        // Load in two (three?) passes.

        // Init.
        for (auto *elem : final_order)
            elem->pybind_type = elem->init(_pb11_m, _pb11_u, elem->pybind_type_name.c_str());
        // Pass 1.
        for (auto *elem : final_order)
            elem->load_members(_pb11_m, _pb11_u, *elem->pybind_type, false);
        // Pass 2.
        for (auto *elem : final_order)
            elem->load_members(_pb11_m, _pb11_u, *elem->pybind_type, true);
    }

    // Load the functions.
    for (const auto &elem : _pb11_u.func_entries)
        elem(_pb11_m, _pb11_u);
}

#endif




// Macros for the generated code:

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
    _pb11_u.func_entries.push_back([](pybind11::module_ &_pb11_m, MRBind::detail::pb11::UnfinishedModule &_pb11_u){\
        MRBind::detail::pb11::TryAddFunc<\
            /* Doesn't count as `static` for our purposes. */\
            false, \
            /* The function pointer, cast to the correct type to handle overloads. */\
            static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(*)(DETAIL_MB_PB11_PARAM_TYPES(params_))> qualname_, \
            /* Return type name. */\
            MRBIND_STR(MRBIND_IDENTITY ret_) \
            /* Parameter types. */\
            DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
        >( \
            _pb11_m, _pb11_u, true, \
            /* Simple name */\
            MRBIND_STR(name_), \
            /* Full name */\
            MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)).c_str() \
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
        using _pb11_T = MRBind::detail::pb11::UnfinishedModule::SpecificPybindType<pybind11::enum_<_pb11_E>>; \
        _pb11_u.type_entries.try_emplace( \
            typeid(_pb11_E), \
            MRBind::detail::pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<_pb11_E>()), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, MRBind::detail::pb11::UnfinishedModule &, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::UnfinishedModule::BasicPybindType> \
            { \
                return std::make_unique<_pb11_T>(_pb11_m, _pb11_n); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &, MRBind::detail::pb11::UnfinishedModule &, MRBind::detail::pb11::UnfinishedModule::BasicPybindType &_pb11_b, [[maybe_unused]] bool _pb11_second_pass) \
            { \
                if (_pb11_second_pass) \
                { \
                    [[maybe_unused]] pybind11::enum_<_pb11_E> &_pb11_e = static_cast<_pb11_T &>(_pb11_b).type; \
                    DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_); \
                } \
            }, \
            std::unordered_set<std::type_index>{} \
        ); \
    }

// Bind a class.
#define MB_CLASS(kind_, name_, qualname_, comment_, bases_, members_) \
    { \
        /* Class type. */\
        using _pb11_C = MRBIND_IDENTITY qualname_; \
        using _pb11_T = MRBind::detail::pb11::UnfinishedModule::SpecificPybindType<\
            pybind11::class_< \
                /* Type. */\
                _pb11_C \
                /* Bases. */\
                DETAIL_MB_PB11_BASE_TYPES(bases_)\
            >\
        >;\
        _pb11_u.type_entries.try_emplace( \
            typeid(_pb11_C), \
            MRBind::detail::pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<_pb11_C>()), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, MRBind::detail::pb11::UnfinishedModule &, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::UnfinishedModule::BasicPybindType> \
            { \
                return std::make_unique<_pb11_T>(_pb11_m, _pb11_n); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &, MRBind::detail::pb11::UnfinishedModule &_pb11_u, MRBind::detail::pb11::UnfinishedModule::BasicPybindType &_pb11_b, [[maybe_unused]] bool _pb11_second_pass) \
            { \
                [[maybe_unused]] _pb11_T *_pb11_c = static_cast<_pb11_T *>(&_pb11_b); \
                DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
            }, \
            std::unordered_set<std::type_index>{DETAIL_MB_PB11_BASE_TYPEIDS(bases_)} \
        ); \
    }

#define MB_END_CLASS(name_)

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

// A helper that generates a list of info wrappers about each parameter.
#define DETAIL_MB_PB11_PARAM_ENTRIES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_ENTRIES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_ENTRIES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBind::detail::pb11::ParamInfo<MRBIND_IDENTITY type_, MRBIND_STR(MRBIND_IDENTITY type_)>

// A helper for `MB_ENUM` that generates the elements.
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    _pb11_e.value(MRBIND_STR(name_), MRBIND_IDENTITY d::name_ MRBIND_PREPEND_COMMA(comment_));

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
        _pb11_c->type, _pb11_second_pass,\
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
        DETAIL_MB_PB11_PARAM_ENTRIES(params_)\
    >( \
        _pb11_c->type, _pb11_second_pass \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a method.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qualname_, static_, ret_, name_, simplename_, const_, comment_, params_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddFunc< \
        /* bool: is this function static? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(true, false),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_IDENTITY qualname_::)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&MRBIND_IDENTITY qualname_:: name_), \
        /* Return type name. */\
        MRBIND_STR(MRBIND_IDENTITY ret_) \
        /* Parameter types: */\
        /* Self parameter. */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_COMMA() MRBind::detail::pb11::ParamInfo<_pb11_C & MRBIND_COMMA() "">)\
        /* Normal parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_c->type, _pb11_u, _pb11_second_pass, \
        /* Simple name */\
        MRBIND_STR(simplename_), \
        /* Full name */\
        MRBIND_STR(name_) \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a conversion function.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_conv_op(qualname_, ret_, const_, comment_) \
    /* `.def` or `.def_static` */\
    MRBind::detail::pb11::TryAddFunc< \
        /* Not static. */\
        false,\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_IDENTITY qualname_::*)() const_>(&MRBIND_IDENTITY qualname_::operator MRBIND_IDENTITY ret_), \
        /* Return type name. */\
        MRBIND_STR(MRBIND_IDENTITY ret_), \
        /* The only parameter, which is the class itself. */\
        MRBind::detail::pb11::ParamInfo<_pb11_C &, ""> \
    >( \
        _pb11_c->type, _pb11_u, _pb11_second_pass, \
        /* Simple name */\
        ("_convert_to_" + MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY ret_))).c_str(), \
        /* Full name */\
        nullptr \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#define DETAIL_MB_PB11_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_IF_STATIC_static(x, y) x

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

// Intentionally no `#pragma once`.

#ifndef MB_PB11_MODULE_NAME
#error Must define `MB_PB11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Various headers we need:

#include <mrbind/helpers/common.h>
#include <mrbind/helpers/macro_sequence_for.h>
#include <mrbind/helpers/type_name.h>

#include <mrbind/targets/pybind11/pre_include_pybind.h> // All pybind headers must be here: [
#include <pybind11/functional.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl_bind.h>
// NOTE: Not including `<pybind11/stl.h>` because that doesn't cooperate with passing containers by reference.
#include <mrbind/targets/pybind11/post_include_pybind.h> // ]

#include <optional>
#include <string_view>
#include <string>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if MB_FRAGMENT == 0
#include <exception> // For `std::terminate()`.
#include <iostream> // To report errors.
#endif

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
    // Fails the application with a critical error.
    [[noreturn]] void CriticalError(std::string_view message);

    // Given a qualified C++ name, removes all weird characters from it, replaces `::` with `_`, etc.
    // The resulting name is used for the python bindings.
    [[nodiscard]] std::string ToPythonName(std::string_view name);

    // Given MRBind's internal overloaded operator name, output Python's name for it. Otherwise returns the name unchanged.
    [[nodiscard]] const char *AdjustOverloadedOperatorName(const char *name, bool unary);

    void RegisterTypeAlias(std::string_view from, std::string_view to);

    template <typename T>
    [[nodiscard]] std::string GetConversionFuncName(const char *type_name)
    {
        if constexpr (std::is_same_v<T, bool>)
            return "__bool__";
        else
            return "_convert_to_" + ToPythonName(type_name);
    }

    // ---

    // On MSVC, removes `class` and other unnecessary strings from type names.
    // Returns the new length.
    // It's recommended to include the null terminator in `size`, then we also null-terminate the resulting string and include it in the resulting length.
    constexpr std::size_t CleanUpTypeName(char *buffer, std::size_t size)
    {
        #ifndef _MSC_VER
        (void)buffer;
        return size;
        #else
        std::string_view view(buffer, size); // Yes, with the null at the end.

        auto RemoveTypePrefix = [&](std::string_view to_remove)
        {
            std::size_t region_start = 0;
            std::size_t source_pos = std::size_t(-1);
            std::size_t target_pos = 0;
            while (true)
            {
                source_pos = view.find(to_remove, source_pos + 1);
                if (source_pos == std::string_view::npos)
                    break;
                if (source_pos == 0 || !chars::IsIdentifierCharStrict(view[source_pos - 1]))
                {
                    std::size_t n = source_pos - region_start;
                    std::copy_n(view.begin() + region_start, n, buffer + target_pos);
                    target_pos += n;
                    source_pos += to_remove.size();
                    region_start = source_pos;
                }
            }
            std::size_t n = view.size() - region_start;
            std::copy_n(view.begin() + region_start, n, buffer + target_pos);
            target_pos += n;
            view = std::string_view(view.data(), target_pos);
        };

        RemoveTypePrefix("struct ");
        RemoveTypePrefix("class ");
        RemoveTypePrefix("union ");
        RemoveTypePrefix("enum ");

        { // Condense `> >` into `>>`.
            std::size_t target_pos = 1;
            for (std::size_t i = 1; i + 1 < size; i++)
            {
                if (buffer[i] == ' ' && buffer[i-1] == '>' && buffer[i+1] == '>')
                    continue;
                buffer[target_pos++] = buffer[i];
            }
            if (size > 0)
                buffer[target_pos++] = buffer[size-1];
            view = std::string_view(view.data(), target_pos);
        }

        return view.size();
        #endif
    }

    class Demangler
    {
        #ifndef _MSC_VER
        char *buf_ptr = nullptr;
        std::size_t buf_size = 0;
        #else
        std::string buf;
        #endif

      public:
        Demangler() {}
        Demangler(const Demangler &) = delete;
        Demangler &operator=(const Demangler &) = delete;
        ~Demangler();

        // Demangles a name. Keep the demangler alive while using the returned pointer.
        [[nodiscard]] const char *operator()(const char *name);
    };

    // Type name from `typeid()`, demangled if necessary.
    template <typename T>
    [[nodiscard]] const char *TypeidTypeName()
    {
        static Demangler d;
        static const char *const ret = d(typeid(T).name());
        return ret;
    }

    // ---

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

    struct TypeEntry
    {
        using InitClass = std::unique_ptr<BasicPybindType> (*)(pybind11::module_ &m, const char *n);
        using AddClassMembers = void (*)(pybind11::module_ &m, BasicPybindType &c);

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

    // Each source file registers itself there.
    struct Registry
    {
        std::unordered_map<std::type_index, TypeEntry> type_entries;
        std::unordered_map<std::string, std::unordered_set<std::string>> type_aliases;

        using LoadFunc = void (*)(pybind11::module_ &m);
        std::vector<LoadFunc> func_entries;

        bool was_loaded = false;
    };

    [[nodiscard]] inline Registry &GetRegistry()
    {
        static Registry ret;
        return ret;
    }

    // ---

    // Some simple type traits:

    template <typename T> struct IsUniquePtr : std::false_type {};
    template <typename T, typename D> struct IsUniquePtr<std::unique_ptr<T, D>> : std::true_type {};

    template <typename T> struct IsSmartPtr : std::false_type {};
    template <typename T> struct IsSmartPtr<std::shared_ptr<T>> : std::true_type {};
    template <typename T, typename D> struct IsSmartPtr<std::unique_ptr<T, D>> : std::true_type {};

    // It would be nice to automatically accept all types except the custom and parsed ones here, but this requires communicating parsed
    // types across fragments, which is expensive.
    template <typename T> struct IsPybindBuiltinType : std::is_arithmetic<T> {};
    template <typename ...P> struct IsPybindBuiltinType<std::basic_string<P...>> : std::true_type {};
    template <typename ...P> struct IsPybindBuiltinType<std::basic_string_view<P...>> : std::true_type {};
    // Those weren't tested much: [
    template <typename T, typename U> struct IsPybindBuiltinType<std::pair<T, U>> : std::true_type {};
    template <typename ...P> struct IsPybindBuiltinType<std::tuple<P...>> : std::true_type {};
    template <typename T> struct IsPybindBuiltinType<std::reference_wrapper<T>> : std::true_type {};
    // ]
    // Those shouldn't matter for our purposes, but still a good idea to list them: [
    template <> struct IsPybindBuiltinType<const char *> : std::true_type {};
    template <> struct IsPybindBuiltinType<const wchar_t *> : std::true_type {};
    template <> struct IsPybindBuiltinType<const char16_t *> : std::true_type {};
    template <> struct IsPybindBuiltinType<const char32_t *> : std::true_type {};
    // ]

    template <typename T>
    struct IsUniquePtrToBuiltinType : std::false_type {};
    template <typename T>
    struct IsUniquePtrToBuiltinType<std::unique_ptr<T>> : IsPybindBuiltinType<T> {};

    // ---

    // This is used for manually defining bindings.
    // Specialziations should inherit from `DefaultCustomTypeBinding<T>` and modify some members.
    template <typename T>
    struct CustomTypeBinding {using unspecialized = void;};

    template <typename T>
    concept HasCustomTypeBinding = !requires{typename CustomTypeBinding<T>::unspecialized;};

    template <typename T>
    struct DefaultCustomTypeBinding
    {
        // The pybind11's description of this type.
        // Can also be a `pybind11::enum_<T>` for enums, and perhaps something else.
        using pybind_type = pybind11::class_<T, std::shared_ptr<T>>;

        // This passes the constructor arguments to `pybind_type`.
        // Normally you don't need to override this. Override this for stuff like `pybind11::bind_vector()` or `pybind11::bind_map()`.
        // `U` is either a `pybind_type` or that of a derived class (i.e. `TypedefWrapper<T, "...">`). Use `U` instead of `pybind_type` and `T` here.
        // `P` is a list of parents. Normally this will be at most one.
        template <typename U, typename ...Q>
        [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(m, n);}

        // The type name for pybind11. Normally don't need to override this.
        [[nodiscard]] static std::string pybind_type_name()
        {
            // Can't use non-typeid type name here, because then we often get name conflicts between TypedefWrapper names and this for the underlying type.
            return ToPythonName(TypeidTypeName<T>());
        }

        // Which base classes we inherit from. Or in general, which types must be initialized before this one.
        static std::unordered_set<std::type_index> base_typeids() {return {};}

        // Registers all members.
        // Usually must override this, unless you do something with `pybind_init` (see comment on it above).
        // Note, must not use `T` here. Use `using TT = typename std::remove_reference_t<decltype(c.type)>::type;` to support derived classes (i.e. `TypedefWrapper<T, "...">`).
        template <bool InDerivedClass>
        static void bind_members(pybind11::module_ &, auto &c) {(void)c;}
    };

    template <typename T>
    struct RegisterOneTypeWithCustomBinding
    {
        inline static const std::nullptr_t register_type = []{
            namespace pb11 = MRBind::detail::pb11;
            using Traits = pb11::CustomTypeBinding<T>;
            using PybindType = typename Traits::pybind_type;
            using TypeStorage = pb11::SpecificPybindType<PybindType>;
            pb11::GetRegistry().type_entries.try_emplace(
                typeid(T),
                Traits::pybind_type_name(),
                [](pybind11::module_ &m, const char *n) -> std::unique_ptr<pb11::BasicPybindType>
                {
                    return Traits::template pybind_init<T>(
                        [&](auto &&... params)
                        {
                            return std::make_unique<TypeStorage>(decltype(params)(params)...);
                        },
                        m, n
                    );
                },
                [](pybind11::module_ &m, pb11::BasicPybindType &b)
                {
                    Traits::template bind_members<false>(m, static_cast<TypeStorage &>(b));
                },
                Traits::base_typeids()
            );
            return nullptr;
        }();
        /* Instantiate `register_type`. */
        static constexpr std::integral_constant<const std::nullptr_t *, &register_type> force_register_type{};
    };

    // ---

    // Removes cvref-qualifiers, pointers, smart pointers.
    template <typename T> struct StripToUnderlyingType {using type = T;};
    template <typename T> struct StripToUnderlyingType<const T> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T *> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T &> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T &&> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<std::shared_ptr<T>> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T, typename D> struct StripToUnderlyingType<std::unique_ptr<T, D>> {using type = typename StripToUnderlyingType<T>::type;};

    // Like `RegisterOneTypeWithCustomBinding<T>`, but does nothing if T doesn't have a custom binding for it.
    // Also automatically strips pointers/refs/etc.
    template <typename T>
    struct RegisterOneTypeWithCustomBindingIfApplicable {};
    template <typename T> requires HasCustomTypeBinding<typename StripToUnderlyingType<T>::type>
    struct RegisterOneTypeWithCustomBindingIfApplicable<T> : RegisterOneTypeWithCustomBinding<typename StripToUnderlyingType<T>::type> {};

    // Like `RegisterOneTypeWithCustomBindingIfApplicable`, but also accepts multiple types.
    // This is because you might want to inherit from it, and if you try to inherit from several instances,
    //   and if the template parameters of them happen to match, you'll get a compilation error (repeated direct base class).
    #ifdef __clang__
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Winaccessible-base"
    #endif
    template <typename ...P>
    struct RegisterTypeWithCustomBindingIfApplicable {};
    template <typename P0, typename ...P>
    struct RegisterTypeWithCustomBindingIfApplicable<P0, P...> : RegisterOneTypeWithCustomBindingIfApplicable<P0>, RegisterTypeWithCustomBindingIfApplicable<P...> {};
    #ifdef __clang__
    #pragma clang diagnostic pop
    #endif

    // ---

    // Removes all pointers and references from a type, but not cv-qualifiers.
    template <typename T> struct RemovePointersRefs {using type = T;};
    template <typename T> struct RemovePointersRefs<T *> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T *const> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T &> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T &&> {using type = typename RemovePointersRefs<T>::type;};

    // ---

    // This trait can be used to automatically adjust returned values.

    template <typename T>
    struct ReturnTypeAdjustment
    {
        using unspecialized = void; // Remove this in specializations.

        // When implementing this, don't forget to recursively call `AdjustReturnedValue()`!
        // static ?? Adjust(T &&);
    };

    template <typename T>
    concept ReturnTypeNeedsAdjusting = !requires{typename ReturnTypeAdjustment<T>::unspecialized;};

    // Using `std::type_identity` to prevent `T` from being deduced, because the behavior for non-reference T and rvalue reference T can be different.
    template <typename T>
    [[nodiscard]] decltype(auto) AdjustReturnedValue(std::type_identity_t<T &&> value)
    {
        if constexpr (ReturnTypeNeedsAdjusting<T>)
            return ReturnTypeAdjustment<T>::Adjust(std::forward<T &&>(value));
        else if constexpr (std::is_reference_v<T>)
            return std::forward<T &&>(value);
        else
            return T(std::move(value)); // Really want the correct return type, so have to accept an extra move, I guess?
    }

    template <typename T>
    struct AdjustReturnType {using type = T;};
    template <ReturnTypeNeedsAdjusting T>
    struct AdjustReturnType<T> {using type = decltype(ReturnTypeAdjustment<T>::Adjust(std::declval<T &&>()));};

    // ---

    // A helper for implementing `ReturnTypeAdjustment`, for types like `std::optional` and `tl::expected`.
    template <typename T>
    struct OptionalReturnType
    {
        // Maybe we should return `std::shared_ptr` here? Since we use `std::shared_ptr` holders for everything,
        //   and even adjust `std::unique_ptr` to `std::shared_ptr`, since things crash otherwise?
        // I'll keep this `unique_ptr` for now, the user is supposed to call `AdjustReturnedValue()` anyway.
        using type = std::unique_ptr<T>;
        [[nodiscard]] static std::unique_ptr<T> make(T &&value)
        {
            return std::make_unique<T>(std::move(value));
        }
    };
    // Leave smart pointers as is. We don't want to end up with `std::unique_ptr<std::shared_ptr<...>>`.
    template <typename T> requires IsSmartPtr<T>::value || std::is_pointer_v<T>
    struct OptionalReturnType<T>
    {
        using type = T;
        [[nodiscard]] static T make(T &&value)
        {
            return std::move(value);
        }
    };

    // ---

    // How to handle the global interpreter lock.
    enum class GilHandling
    {
        neutral, // Don't care (will usually keep locked).
        must_keep_locked, // Must keep locked for some reason.
        prefer_unlock, // Prefer it to be unlocked, but can work with it remaining locked.
        must_unlock, // Must unlock.
        invalid, // `CombineGilHandling` returns this when several preferences are not compatible.
    };

    // Combine together several `GilHandling` values.
    template <GilHandling ...P> struct CombineGilHandling : std::integral_constant<GilHandling, GilHandling::neutral> {};
    template <GilHandling P> struct CombineGilHandling<P> : std::integral_constant<GilHandling, P> {};
    template <GilHandling P, GilHandling Q0, GilHandling ...Q> struct CombineGilHandling<P, Q0, Q...>
    {
        static constexpr GilHandling other = CombineGilHandling<Q0, Q...>::value;
        static constexpr GilHandling value =
            // Propagate invalid.
            P == GilHandling::invalid || other == GilHandling::invalid ||
            // Or conflicting requirements.
            (P == GilHandling::must_unlock && other == GilHandling::must_keep_locked) ||
            (P == GilHandling::must_keep_locked && other == GilHandling::must_unlock)
                ? GilHandling::invalid :
            // Strong preference.
            (P == GilHandling::must_unlock || other == GilHandling::must_unlock)
                ? GilHandling::must_unlock :
            (P == GilHandling::must_keep_locked || other == GilHandling::must_keep_locked)
                ? GilHandling::must_keep_locked :
            // Weak preference.
            P == GilHandling::prefer_unlock || other == GilHandling::prefer_unlock
                ? GilHandling::prefer_unlock :
            // Neutral.
            GilHandling::neutral;
    };

    // ---

    // This traits lets you adjust ecah passed parameter.

    // Specialize `ParamTraitsLow` for your custom types.
    //
    // Specialize `ParamTraits` only here in this file, for high-level type groups.
    //   Those aren't allowed to change the parameter type, except for cvref/ptr qualifiers.

    template <typename T>
    struct ParamTraitsLow
    {
        // using disables_func = void; // Optional. Disable the whole function because of this parameter.

        // Optional: [
        // using adjusted_param_type = ...; // Replaces the parameter type in the wrapping lambda.
        // static T UnadjustParam(adjusted_param_type &&); // Unadjust the parameter type back to the original.
        // ]

        // Optional. If specified, a default-constructed argument of this type is passed as an extra argument to `UnadjustParam()`.
        // It's useful to hold temporary objects that must remain alive until the call finishes.
        // using unadjust_param_extra_param = ...;

        // Optional. Detauls to `GilHandling::neutral`.
        // What to do about python's global interpreter lock (temporarily unlock or keep locked).
        // static constexpr GilHandling gil_handling = ...;
    };

    template <typename T>
    struct ParamTraits : ParamTraitsLow<T>
    {};

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
    requires std::is_rvalue_reference_v<T> && std::is_copy_constructible_v<std::remove_reference_t<T>>
    struct ParamTraits<T>
    {
        using adjusted_param_type = std::remove_reference_t<T>;

        static T UnadjustParam(adjusted_param_type &&param)
        {
            return std::move(param);
        }
    };
    // Rvalue references and passing by value for noncopyable types disable the whole function.
    template <typename T>
    requires ((std::is_rvalue_reference_v<T> || !std::is_reference_v<T>) && !std::is_copy_constructible_v<std::remove_reference_t<T>>)
    struct ParamTraits<T>
    {
        using disables_func = void;
    };

    // ---

    // Decays the parameter type as spelled in the declaration to the actual type.
    // I.e. decays arrays and functions to pointers, but doesn't touch references.
    template <typename T>
    using DecayToTrueParamType = std::conditional_t<std::is_array_v<T> || std::is_function_v<T>, std::decay_t<T>, T>;

    // Whether having a parameter of type `T` should exclude the whole function from the binding.
    template <typename T>
    concept ParamTypeDisablesWholeFunction = requires{typename ParamTraits<T>::disables_func;};

    template <typename T>
    concept ParamTypeRequiresAdjustment = requires{typename ParamTraits<T>::adjusted_param_type;};

    // For our lambda wrapping the original function, the adjusted parameter type.
    template <typename T>
    struct AdjustedParamTypeHelper
    {
        // Type after adjustment.
        using type = T;
    };
    template <ParamTypeRequiresAdjustment T>
    struct AdjustedParamTypeHelper<T>
    {
        using type = typename ParamTraits<T>::adjusted_param_type;
    };
    template <typename T>
    using AdjustedParamType = typename AdjustedParamTypeHelper<DecayToTrueParamType<T>>::type;

    // Extracts `unadjust_param_extra_param` from the parameter's traits, or `std::nullptr_t` if none.
    template <typename T>
    struct ParamUnadjusterExtraParam {using type = std::nullptr_t;};
    template <typename T> requires requires{typename ParamTraits<T>::unadjust_param_extra_param;}
    struct ParamUnadjusterExtraParam<T> {using type = typename ParamTraits<T>::unadjust_param_extra_param;};

    // Extract `gil_handling` from parameter's traits, or default to `neutral` if not specified.
    template <typename T>
    constexpr GilHandling param_gil_handling = GilHandling::neutral;
    template <typename T> requires requires{ParamTraits<T>::gil_handling;}
    constexpr GilHandling param_gil_handling<T> = ParamTraits<T>::gil_handling;

    // Converts from `AdjustedParamType<T>` back to `T`.
    template <typename T>
    [[nodiscard]] T UnadjustParam(AdjustedParamType<T> &&param, typename ParamUnadjusterExtraParam<T>::type &&extra = {})
    {
        if constexpr (ParamTypeRequiresAdjustment<T>)
        {
            if constexpr (std::is_null_pointer_v<typename ParamUnadjusterExtraParam<T>::type>)
                return ParamTraits<T>::UnadjustParam(std::forward<AdjustedParamType<T>>(param));
            else
                return ParamTraits<T>::UnadjustParam(std::forward<AdjustedParamType<T>>(param), std::move(extra));
        }
        else
        {
            return std::forward<T>(param);
        }
    }

    // ---

    // Some `ReturnTypeAdjustment` specializations:

    // Adjust `std::unique_ptr` to `std::shared_ptr`, when returning it by value. Only when it points to a parsed class.
    // For some reason pybind11 crashes when the holder type is set to `shared_ptr` and you return a `unique_ptr`.
    // (When the reverse happens it also crashes, but in that case no adjustment can help us, so instead we use a `shared_ptr` holder and adjust `unique_ptr`.)
    template <typename T, typename D> requires (!IsPybindBuiltinType<T>::value)
    struct ReturnTypeAdjustment<std::unique_ptr<T, D>> {static std::shared_ptr<T> Adjust(std::unique_ptr<T, D> &&src) {return std::move(src);}};
    // When returning a REFERENCE to `std::unique_ptr` (to a parsed class), just replace it with a raw pointer.
    // This one was necessary for `tl::expected<T,U>` bindings, where if `T` is a `unique_ptr`, `.value()` returns a reference to it.
    template <typename T> requires std::is_reference_v<T> && IsUniquePtr<std::remove_cvref_t<T>>::value && (!IsPybindBuiltinType<typename std::remove_cvref_t<T>::element_type>::value)
    struct ReturnTypeAdjustment<T> {static auto Adjust(T &&src) {return src.get();}};

    // ---

    // MB_REGISTER_TYPE uses those:

    // Like `RegisterTypeWithCustomBindingIfApplicable<T>`, but also does nothing if `Enable` is false.
    template <typename T>
    struct RegisterOneTypeWithCustomBindingAndAdjustments {};
    template <typename T>
        // Only accept complete types, because otherwise some traits in `AdjustedParamType` below (and maybe somewhere else) blow up.
        // We could guard them specifically, but I believe doing this here is enough.
        requires (sizeof(T) > 0)
    struct RegisterOneTypeWithCustomBindingAndAdjustments<T>
        : RegisterTypeWithCustomBindingIfApplicable<
            T,
            // Also register return and parameter wrappers.
            // Could make this conditional to speed up compilation, but it's probably not worth it (export
            typename AdjustReturnType<T>::type,
            AdjustedParamType<T>
        >
    {};

    // ---

    template <typename T>
    struct CrashingDeleter
    {
        void operator()(T *ptr)
        {
            CriticalError("Trying to delete a type with a private destructor: " + std::string(BakedTypeNameOrFallback<T>()));
        }
    };

    // Selects an appropriate pybind11 holder type for `T`. We REALLY don't want to use `std::unique_ptr` here,
    // because if you then try to return a `std::shared_ptr`, pybind will try to steal ownership from it, and then crash with a double-free (better test with ASAN).
    template <typename T>
    struct SelectPybindHolder {using type = std::shared_ptr<T>;};
    // Here we just need some holder that compiles. This one will crash if actually destroyed, so using `std::unique_ptr` here doesn't matter.
    template <typename T> requires (!std::is_destructible_v<T>)
    struct SelectPybindHolder<T> {using type = std::unique_ptr<T, CrashingDeleter<T>>;};

    // ---

    template <bool IsStatic, auto Getter>
    void TryAddMemberVar(auto &c, const char *name, auto &&... data)
    {
        // Using pybind11 "properties" here because the member can be a reference, and you can't form a pointer-to-member to those.

        using ClassType = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.

        auto const_getter = [](const ClassType &o) -> const auto & {return Getter(const_cast<ClassType &>(o));};

        std::string py_name = ToPythonName(name);

        using T = std::remove_reference_t<decltype(Getter(std::declval<ClassType &>()))>;
        if constexpr (
            // If this is a const member (bad!) or a const reference member (also bad).
            std::is_const_v<T> ||
            // Pybind11 will try to assign from `const T &`.
            !pybind11::detail::is_copy_assignable<T>::value
        )
        {
            if constexpr (IsStatic)
                c.def_property_readonly_static(py_name.c_str(), const_getter, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property_readonly(py_name.c_str(), const_getter, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
        else
        {
            // Can't use perfect forwarding here, because pybind11 tries to analyze the functor signature, therefore it chokes on templated lambdas.
            if constexpr (IsStatic)
                c.def_property_static(py_name.c_str(), const_getter, [](ClassType &obj, const T &value){Getter(obj) = value;}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property(py_name.c_str(), const_getter, [](ClassType &obj, const T &value){Getter(obj) = value;}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
    }

    // Member or non-member functions. Non-member functions should pass `IsStatic == false`.
    template <bool IsStatic, auto F, typename ...P>
    void TryAddFunc(auto &c, const char *simplename, const char *fullname, auto &&... data)
    {
        if constexpr ((ParamTypeDisablesWholeFunction<DecayToTrueParamType<P>> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            using ReturnType = std::invoke_result_t<decltype(F), DecayToTrueParamType<P> &&...>; // `DecayToTrueParamType` is not adjusted.
            using ReturnTypeAdjusted = typename AdjustReturnType<ReturnType>::type;

            constexpr bool returns_unique_ptr_to_builtin = IsUniquePtrToBuiltinType<ReturnTypeAdjusted>::value;
            static_assert(
                IsUniquePtrToBuiltinType<std::remove_cvref_t<ReturnTypeAdjusted>>::value <= returns_unique_ptr_to_builtin,
                "Why are we returning `std::unique_ptr` by reference? This shouldn't be possible, it should've been adjusted to `std::shared_ptr`."
            );

            auto lambda = [](AdjustedParamType<P> ...params) -> decltype(auto)
            {
                #define INVOKE_FUNC std::invoke(F, (UnadjustParam<DecayToTrueParamType<P>>)(std::forward<AdjustedParamType<P>>(params))...)

                if constexpr (std::is_void_v<ReturnTypeAdjusted>)
                {
                    INVOKE_FUNC;
                }
                else
                {
                    #define INVOKE_FUNC_R (AdjustReturnedValue<ReturnType>)(INVOKE_FUNC)

                    if constexpr (returns_unique_ptr_to_builtin)
                        return INVOKE_FUNC_R.release(); // `pybind11::return_value_policy::take_ownership` takes ownership of this.
                    else
                        return INVOKE_FUNC_R;

                    #undef INVOKE_FUNC_R
                }

                #undef INVOKE_FUNC
            };

            using LambdaReturnTypeAdjustedWrapped = decltype(lambda(std::declval<AdjustedParamType<P>>()...));

            using LambdaReturnTypeAdjustedWrapperPtrRefStripped = typename RemovePointersRefs<LambdaReturnTypeAdjustedWrapped>::type;

            // I thought `return_value_policy::autmatic_reference` was supposed to do the same thing, but for some reason it doesn't.
            // E.g. it refuses (at runtime) to call functions returning references to non-movable classes.
            constexpr pybind11::return_value_policy ret_policy =
                returns_unique_ptr_to_builtin ?
                    pybind11::return_value_policy::take_ownership :
                (std::is_pointer_v<LambdaReturnTypeAdjustedWrapped> || std::is_reference_v<LambdaReturnTypeAdjustedWrapped>) &&
                // This is important. If we return a const reference to a copyable type, we actually COPY it.
                // Because otherwise pybind11 casts away constness and propagates changes through that reference!
                !std::is_const_v<LambdaReturnTypeAdjustedWrapperPtrRefStripped>
                    ? pybind11::return_value_policy::reference :
                // This is important too, otherwise pybind11 will const_cast and then move!
                std::is_const_v<LambdaReturnTypeAdjustedWrapperPtrRefStripped> ? pybind11::return_value_policy::copy
                : pybind11::return_value_policy::move;

            // Make sure this isn't a hard error. We add our own specializations, and we don't want them to be ambiguous.
            (void)pybind11::detail::is_copy_constructible<std::remove_cv_t<LambdaReturnTypeAdjustedWrapperPtrRefStripped>>::value;
            (void)pybind11::detail::is_copy_assignable<std::remove_cv_t<LambdaReturnTypeAdjustedWrapperPtrRefStripped>>::value;

            constexpr bool is_class_method = !std::is_same_v<decltype(c), pybind11::module_ &>;

            // If this is an overloaded operator defined outside of a class (or as a `friend`), inject it into
            // the target class, instead of emitting as a global function.
            if constexpr (!is_class_method && sizeof...(P) >= 1)
            {
                const char *op = AdjustOverloadedOperatorName(simplename, sizeof...(P) == 1);
                if (op != simplename)
                {
                    auto &r = GetRegistry();

                    [&](auto&&, auto &&...trimmed_data)
                    {
                        using FirstParam = FirstType<DecayToTrueParamType<P>...>;

                        if (auto iter = r.type_entries.find(typeid(FirstParam)); iter != r.type_entries.end())
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
                                using SecondParam = SecondType<DecayToTrueParamType<P>...>;
                                if (auto iter = r.type_entries.find(typeid(SecondParam)); iter != r.type_entries.end())
                                {
                                    // A lambda to swap the order of the two arguments.
                                    auto symmetric_lambda = [](SecondType<AdjustedParamType<P>...> x, FirstType<AdjustedParamType<P>...> y) -> decltype(auto)
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

            const char *final_name;
            std::string final_name_storage;
            if (is_class_method)
            {
                final_name = AdjustOverloadedOperatorName(simplename, sizeof...(P) == 1);
                if (final_name == simplename) // If this is not an overloaded operator, adjust the name.
                {
                    final_name_storage = ToPythonName(final_name);
                    final_name = final_name_storage.c_str();
                }
            }
            else
            {
                // This name is already adjusted...
                final_name = fullname;
            }

            constexpr GilHandling gil_handling = CombineGilHandling<param_gil_handling<P>...>::value;
            static_assert(gil_handling != GilHandling::invalid, "Parameter types of this function give conflicting requirements on what to do with the global interpreter lock.");

            // The `call_guard<gil_scoped_release>` fixes a deadlock when calling python callbacks from something other than the main thread.
            // The documentation says it's only legal if you "don't access python objects" from the function, which sounds right.
            // When our functions then call python lambdas, those lambdas will automatically take the interpreter lock.
            // And when we call C++ lambdas, a different mechanism is used to force pybind11 to avoid adding code to them to take the interpreter lock.
            // We need this different mechanism as an optimization, because we sometimes invoke C++ lambdas (that were passed through python)
            // in multithreaded contexts, and we don't want them to be locking mutexes unless absolutely necessary.
            if constexpr (gil_handling == GilHandling::must_unlock || gil_handling == GilHandling::prefer_unlock)
            {
                if constexpr (IsStatic)
                    c.def_static(final_name, lambda, ret_policy, decltype(data)(data)..., pybind11::call_guard<pybind11::gil_scoped_release>());
                else
                    c.def(final_name, lambda, ret_policy, decltype(data)(data)..., pybind11::call_guard<pybind11::gil_scoped_release>());
            }
            else
            {
                if constexpr (IsStatic)
                    c.def_static(final_name, lambda, ret_policy, decltype(data)(data)...);
                else
                    c.def(final_name, lambda, ret_policy, decltype(data)(data)...);
            }
        }
    }

    template <int NumDefaultArgs, bool IsExplicit, typename ...P>
    void TryAddCtor(auto &c, auto &&... data)
    {
        using T = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<DecayToTrueParamType<P>> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else if constexpr (sizeof...(P) == 1 && std::is_base_of_v<AdjustedParamType<FirstType<P...>>, T>)
            // Reject move constructors. They just appear as a duplicate of the copy constructor in the `help(...)`, and other than that don't do anything.
            // `std::is_base_of` was placed is here instead of `std::is_same` to catch the ol' `TypedefWrapper`s. Might not be necessary anymore.
            ;
        else
        {
            auto lambda = [](AdjustedParamType<P> ...params) -> decltype(auto)
            {
                // Note `new` here! Pybind still frees the object automatically.
                // The only effect this causes is eliminating the extra move that otherwise occurs when creating an object.
                // This extra move only appears when using `.def(pybind11::init([](...){...}))` and not `.def(pybind11::init<...>())`,
                // but the latter is not an option for us because it prevents us from adjusting the parameter types.
                return new T((UnadjustParam<DecayToTrueParamType<P>>)(std::forward<AdjustedParamType<P>>(params))...);
            };

            constexpr GilHandling gil_handling = CombineGilHandling<param_gil_handling<P>...>::value;
            static_assert(gil_handling != GilHandling::invalid, "Parameter types of this function give conflicting requirements on what to do with the global interpreter lock.");

            if constexpr (gil_handling == GilHandling::must_unlock || gil_handling == GilHandling::prefer_unlock)
                c.def(pybind11::init(lambda), decltype(data)(data)..., pybind11::call_guard<pybind11::gil_scoped_release>());
            else
                c.def(pybind11::init(lambda), decltype(data)(data)...);

            // Register this ctor as an implicit conversion if it's not explicit, has at least one parameter,
            // and has at most one parameter without a default argument.
            if constexpr (!IsExplicit && sizeof...(P) > 0 && sizeof...(P) - NumDefaultArgs <= 1)
            {
                pybind11::implicitly_convertible<std::remove_cvref_t<FirstType<DecayToTrueParamType<P>...>>, T>();
            }
        }
    }

    // If the class has begin/end methods, adds the 'iterable' protocol.
    template <typename T>
    void TryMakeIterable(auto &c)
    {
        // Could use `std::ranges` here, but using a less fancy approach to hopefully support older standard libraries.
        using std::begin; // Fallback to `std::begin`/`std::end` on ADL failure.
        using std::end; // ^
        if constexpr (
            requires(const T &t)
            {
                requires std::is_same_v<decltype(begin(t)), decltype(end(t))>; // Both iterators exist and have the same type.
                requires std::is_lvalue_reference_v<decltype(*begin(t))>; // Iterators dereference to lvalue references. Maybe not strictly necessary.
            }
        )
        {
            c.def(
                "__iter__",
                [](T &target)
                {
                    return pybind11::make_iterator(begin(target), end(target));
                },
                // Keep the container alive as long as iterators exist.
                pybind11::keep_alive<0, 1>()
            );
        }
    }
}

PYBIND11_NAMESPACE_BEGIN(PYBIND11_NAMESPACE)
namespace detail
{
    // Disable the casters for all types for which we provide custom bindings (containers and such).
    // We no longer do automatic registration here, to save build times. We register manually using `MB_REGISTER_TYPE()`.
    template <typename T>
    requires MRBind::detail::pb11::HasCustomTypeBinding<T>
    class type_caster<T> : public type_caster_base<T> /*MRBind::detail::pb11::RegisterOneTypeWithCustomBinding<T>*/ {};
}
PYBIND11_NAMESPACE_END(PYBIND11_NAMESPACE)

// Module entry point, and more stuff.
#if MB_FRAGMENT == 0 // Don't duplicate this if we have >1 TU.

namespace MRBind::detail::pb11
{
    void CriticalError(std::string_view message)
    {
        std::cerr << "mrbind pybind11 bindings: " << message << '\n' << std::flush;
        std::terminate();
    }

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
            // Somewhat in doubt here. I don't want to treat `_` as a special character, because I want to be able to use this to add
            //   custom functions like `__call__` and stuff.
            if (std::isalnum((unsigned char)ch) || ch == '_')
            {
                ret += ch;
                prev_char_is_special = false;
                last_good_size = ret.size();
            }
            else if (ch == '-')
            {
                prev_char_is_special = false;
                ret += "minus";
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

    Demangler::~Demangler()
    {
        #ifndef _MSC_VER
        std::free(buf_ptr);
        #endif
    }

    const char *Demangler::operator()(const char *name)
    {
        #ifndef _MSC_VER
        int status = -4;
        buf_ptr = abi::__cxa_demangle(name, buf_ptr, &buf_size, &status);
        if (status != 0) // -1 = out of memory, -2 = invalid string, -3 = invalid usage
            return name;

        return buf_ptr;
        #else
        buf = name;
        buf.resize(CleanUpTypeName(buf.data(), buf.size() + 1) - 1);
        return buf.c_str();
        #endif
    }

    const char *AdjustOverloadedOperatorName(const char *name, bool unary)
    {
        std::string_view view = name;
        if (view == "_Plus") return unary ? "__pos__" : "__add__";
        if (view == "_Minus") return unary ? "__neg__" : "__sub__";
        if (view == "_Star") return "__mul__";
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
        if (view == "_EqualEqual") return "__eq__"; // If missing, Python implements this in terms of `is` (basically an address comparison).
        if (view == "_ExclaimEqual") return "__ne__"; // Python automatically implements this in terms of `__eq__` if it's missing, like in C++.
        // We don't handle <,<=,>,>= at the moment. Would need to do something about `<=>` too....
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

    void RegisterTypeAlias(std::string_view from, std::string_view to)
    {
        auto FixType = [](std::string_view &type)
        {
            if (type.starts_with("const "))
                type.remove_prefix(6);

            // We don't need to fix the suffix, `ToPythonName()` will remove it.
        };

        FixType(from);
        FixType(to);

        MRBind::detail::pb11::GetRegistry().type_aliases[MRBind::detail::pb11::ToPythonName(to)].insert(MRBind::detail::pb11::ToPythonName(from));
    }
}

PYBIND11_MODULE(MB_PB11_MODULE_NAME, m)
{
    using namespace MRBind::detail::pb11;

    auto &r = GetRegistry();

    if (std::exchange(r.was_loaded, true))
        throw std::runtime_error("Can't load the same module twice.");

    { // Topologically sort the classes (by inheritance), and load them. https://en.wikipedia.org/wiki/Topological_sorting#Kahn's_algorithm
        // Populate reverse dependencies.
        for (auto &[id, e] : r.type_entries)
        {
            for (std::type_index dep : e.type_deps)
            {
                auto iter = r.type_entries.find(dep);
                if (iter == r.type_entries.end())
                    throw std::runtime_error(std::string("MRBind pybind11: Type `") + dep.name() + "` is a depenency of type `" + id.name() + "`, but the former is not registered.");
                r.type_entries.at(dep).type_rdeps.insert(id);
            }
        }

        std::vector<MRBind::detail::pb11::TypeEntry *> final_order;

        // Find types with no deps and load them immediately.
        std::vector<typename decltype(Registry::type_entries)::value_type *> queue;
        for (auto &elem : r.type_entries)
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
                auto next_e_iter = r.type_entries.find(rdep);
                if (next_e_iter == r.type_entries.end())
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
        for (const auto &elem : r.type_entries)
        {
            if (!elem.second.was_processed)
                throw std::runtime_error(std::string("MRBind pybind11: There's a dependency cycle in the type graph, involving ") + elem.first.name());
        }

        // Load:

        // Init.
        for (auto *elem : final_order)
            elem->pybind_type = elem->init(m, elem->pybind_type_name.c_str());
        // Actually load.
        for (auto *elem : final_order)
            elem->load_members(m, *elem->pybind_type);
    }

    // Load the functions.
    for (const auto &elem : r.func_entries)
        elem(m);

    { // Load the aliases.
        std::unordered_map<std::string_view, const TypeEntry *> names_to_types;
        for (const auto &elem : r.type_entries)
        {
            bool ok = names_to_types.try_emplace(elem.second.pybind_type_name, &elem.second).second;
            if (!ok)
                throw std::runtime_error("Name `" + elem.second.pybind_type_name + "` refers to more than one type.");
        }

        for (const auto &[type, spellings] : r.type_aliases)
        {
            if (spellings.size() > 1)
                continue; // More than one target name, so this is ambiguous (somehow). Ignore this one.

            auto iter = names_to_types.find(*spellings.begin());
            if (iter == names_to_types.end())
                continue; // Don't know this target type, ignore it.

            m.add_object(type.c_str(), iter->second->pybind_type->GetPybindObject());
        }
    }
}

#endif // MB_FRAGMENT == 0



// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif



// Helper macros:

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

// A helper that generates function parameter declarations, with placeholder names (to not choke on unnamed parameters), and with no default arguments.
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY(n, d, type_, name_, .../*default_arg_*/) , std::type_identity_t<MRBIND_IDENTITY type_> d
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP(n, d, ...) MRBIND_CAT(d, i)

// A helper that generates function parameter uses (comma-separated names, forwarded),
// with the same placeholder names as `DETAIL_MB_PB11_MAKE_PARAM_DECLS`.
#define DETAIL_MB_PB11_MAKE_PARAM_USES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_USES_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_USES_BODY(n, d, type_, name_, .../*default_arg_*/) , std::forward<decltype(d)>(d)

// A helper that generates a list of info wrappers about each parameter.
#define DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_ENTRIES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_ENTRIES_BODY(n, d, type_, name_, .../*default_arg_*/) \
    , MRBIND_IDENTITY type_

// Returns the number of function parameters with default arguments.
#define DETAIL_MB_PB11_NUM_DEF_ARGS(seq) 0 SF_FOR_EACH0(DETAIL_MB_PB11_NUM_DEF_ARGS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_NUM_DEF_ARGS_BODY(n, d, type_, name_, .../*default_arg_*/) __VA_OPT__(+1)

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

// Given a namespace stack (see comments on `MB_NAMESPACE` in `define_missing_macros.h`),
// emits `using namespace`s for every namespace listed in it.
#define DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) SF_FOR_EACH(DETAIL_MB_PB11_USING_NAMESPACES_BODY, DETAIL_MB_PB11_USING_NAMESPACES_STEP, SF_NULL,, ns_stack_)
#define DETAIL_MB_PB11_USING_NAMESPACES_BODY(n, d, name_, kind_) MRBIND_CAT(DETAIL_MB_PB11_USING_NAMESPACES_BODY_, kind_)(d, name_)
#define DETAIL_MB_PB11_USING_NAMESPACES_BODY_ns(d, name_) using namespace d::name_;
#define DETAIL_MB_PB11_USING_NAMESPACES_BODY_cl(d, name_)
#define DETAIL_MB_PB11_USING_NAMESPACES_STEP(n, d, name_, kind_) MRBIND_CAT(DETAIL_MB_PB11_USING_NAMESPACES_STEP_, kind_)(d, name_)
#define DETAIL_MB_PB11_USING_NAMESPACES_STEP_ns(d, name_) d::name_
#define DETAIL_MB_PB11_USING_NAMESPACES_STEP_cl(d, name_) d

// Given a namespace stack (see comments on `MB_NAMESPACE` in `define_missing_macros.h`),
// returns the kind of the most nested entry (`cl` for class, `ns` for namespace). For empty input returns `ns`.
#define DETAIL_MB_PB11_LAST_SCOPE_KIND(ns_stack_) SF_FOR_EACH(SF_NULL, DETAIL_MB_PB11_LAST_SCOPE_KIND_STEP, SF_STATE, ns, ns_stack_)
#define DETAIL_MB_PB11_LAST_SCOPE_KIND_STEP(n, d, name_, kind_) kind_

// For a function, provides either a function pointer to call it, or a lambda to do the same.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_) \
    MRBIND_CAT(DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_,DETAIL_MB_PB11_LAST_SCOPE_KIND(ns_stack_))(ret_, name_, qualname_, ns_stack_, params_)
// For namespace-scoped functions, we get a function pointer.
// Cast it to the correct type to select an overload.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_ns(ret_, simplename_, qualname_, ns_stack_, params_) \
    static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(*)(DETAIL_MB_PB11_PARAM_TYPES(params_))> qualname_
// For class-scoped functions (i.e. friend functions, since methods are handled elsewhere), we generate a lambda that ADL-calls the function.
// Must use a lambda because friend functions are not callable without ADL unless redeclared separately.
// We used to redeclare them using codegen, but it's tricky for two reasons:
// 1. Friends can be templated, and then they must be redeclared as a template (doable, but I haven't figured out, though I didn't try it that much).
// 2. More importantly, it doesn't play well with our forced template instantiations in the parser (e.g. of classes referred to by typedefs),
//    because if we generate declarations for their friend functions, those declarations will be rejected when compiling the binding (because the functions
//    will not exist at that point, and scoped declarations can't be made without an existing function). But we could in theory wrap the declarations =
//    in namespaces when generating them, instead of qualifying. This could work.
// So a lambda just looks easier.
// A lambda generates an extra move per argument, but whatever. I don't think we can call functions with non-movable arguments by value (from python) anyway.
#define DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA_cl(ret_, simplename_, qualname_, ns_stack_, params_) \
    []( DETAIL_MB_PB11_MAKE_PARAM_DECLS(params_) ) -> decltype(auto) {return simplename_( DETAIL_MB_PB11_MAKE_PARAM_USES(params_) );}

#define DETAIL_MB_PB11_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_IF_STATIC_static(x, y) x

#define DETAIL_MB_PB11_IF_EXPLICIT_() false
#define DETAIL_MB_PB11_IF_EXPLICIT_explicit() true


// ---

#include <mrbind/helpers/undef_all_macros.h>

#define MB_WANT_BAKED_TYPE_NAMES
#define MB_INCLUDE_ORIGINAL_HEADER 2

// For namespaces, emit braces with `using namespace`.
// This helps with name lookup for default arguments (where we can't easily fully qualify the types ourselves).
#define MB_NAMESPACE(namespace_, inline_, ns_stack_, comment_) inline_ namespace namespace_ {
#define MB_END_NAMESPACE(namespace_) }

// Bind a function.
#define MB_FUNC(ret_, name_, simplename_, qualname_, ns_stack_, comment_, params_) \
    static const char MRBIND_UNIQUE_VAR = []{ \
        DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) \
        MRBind::detail::pb11::GetRegistry().func_entries.push_back([](pybind11::module_ &_pb11_m){\
            MRBind::detail::pb11::TryAddFunc<\
                /* Doesn't count as `static` for our purposes. */\
                false, \
                /* The function pointer or a lambda. */\
                DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_) \
                /* Parameter types. */\
                DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
            >( \
                _pb11_m, \
                /* Simple name */\
                MRBIND_STR(simplename_), \
                /* Full name */\
                MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)).c_str() \
                /* Parameters. */\
                DETAIL_MB_PB11_MAKE_PARAMS(params_) \
                /* Comment, if any. */ \
                MRBIND_PREPEND_COMMA(comment_) \
            ); \
        }); \
        return 0; \
    }();

// Bind a enum.
#define MB_ENUM(kind_, name_, qualname_, ns_stack_, type_, comment_, elems_) \
    static const char MRBIND_UNIQUE_VAR = []{ \
        DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) \
        MRBind::detail::pb11::GetRegistry().type_entries.try_emplace( \
            typeid(MRBIND_IDENTITY qualname_), \
            MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::BasicPybindType> \
            { \
                return std::make_unique<MRBind::detail::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>>>(_pb11_m, _pb11_n); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &, MRBind::detail::pb11::BasicPybindType &_pb11_b) \
            { \
                [[maybe_unused]] pybind11::enum_<MRBIND_IDENTITY qualname_> &_pb11_e = static_cast<MRBind::detail::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>> &>(_pb11_b).type; \
                DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_); \
            }, \
            std::unordered_set<std::type_index>{} \
        ); \
        return 0; \
    }();

// Bind a class.
#define MB_CLASS(kind_, name_, qualname_, ns_stack_, comment_, bases_, members_) \
    static const char MRBIND_UNIQUE_VAR = []{ \
        DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) \
        MRBind::detail::pb11::GetRegistry().type_entries.try_emplace( \
            typeid(MRBIND_IDENTITY qualname_), \
            MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY qualname_)), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::BasicPybindType> \
            { \
                using _pb11_C = MRBIND_IDENTITY qualname_; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<pybind11::class_<_pb11_C, typename MRBind::detail::pb11::SelectPybindHolder<_pb11_C>::type>>; \
                return std::make_unique<_pb11_T>(_pb11_m, _pb11_n); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &_pb11_m, MRBind::detail::pb11::BasicPybindType &_pb11_b) \
            { \
                using _pb11_C = MRBIND_IDENTITY qualname_; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<pybind11::class_<_pb11_C, typename MRBind::detail::pb11::SelectPybindHolder<_pb11_C>::type>>; \
                auto &_pb11_c = static_cast<_pb11_T *>(&_pb11_b)->type; \
                DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
                (MRBind::detail::pb11::TryMakeIterable<_pb11_C>)(_pb11_c); \
            }, \
            std::unordered_set<std::type_index>{DETAIL_MB_PB11_BASE_TYPEIDS(bases_)} \
        ); \
        return 0; \
    }(); \


// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(classname, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, classname, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qualname_, static_, type_, name_, fullname_, comment_) \
    MRBind::detail::pb11::TryAddMemberVar< \
        /* Static? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_,static_)(true, false),\
        /* Accessor lambda. */\
        [](_pb11_C &_pb11_o)->auto&&{return _pb11_o.MRBIND_IDENTITY fullname_;}\
    >(\
        _pb11_c,\
        /* Name. */\
        MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY fullname_)).c_str()\
        /* Comment, if any. */\
        MRBIND_PREPEND_COMMA(comment_)\
    );

#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(...) DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(qualname_, explicit_, comment_, params_) \
    MRBind::detail::pb11::TryAddCtor<\
        /* Default argument counter, to detect converting constructors. */\
        DETAIL_MB_PB11_NUM_DEF_ARGS(params_),\
        /* Explicit? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_EXPLICIT_, explicit_)()\
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_)\
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
    MRBind::detail::pb11::TryAddFunc< \
        /* bool: is this function static? */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(true, false),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_IDENTITY qualname_::)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&MRBIND_IDENTITY qualname_:: name_) \
        /* Parameter types: */\
        /* Self parameter. */\
        MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_COMMA() _pb11_C &)\
        /* Normal parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
    >( \
        _pb11_c, \
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
        /* The only parameter, which is the class itself. */\
        _pb11_C & \
    >( \
        _pb11_c, \
        /* Simple name */\
        MRBind::detail::pb11::GetConversionFuncName<MRBIND_IDENTITY ret_>(MRBIND_STR(MRBIND_IDENTITY ret_)).c_str(), \
        /* Full name */\
        nullptr \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#define MB_REGISTER_TYPE(i_, ...) \
    static constexpr MRBind::detail::pb11::RegisterOneTypeWithCustomBindingAndAdjustments<std::remove_cvref_t<__VA_ARGS__>> MRBIND_UNIQUE_VAR{};

#define MB_ALT_TYPE_SPELLING(i_, type_, spelling_) \
    static const char MRBIND_UNIQUE_VAR = []{ \
        MRBind::detail::pb11::RegisterTypeAlias(MRBIND_STR(MRBIND_IDENTITY type_), MRBIND_STR(MRBIND_IDENTITY spelling_)); \
        return 0; \
    }();



// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

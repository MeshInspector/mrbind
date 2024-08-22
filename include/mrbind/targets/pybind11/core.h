// Intentionally no `#pragma once`.

#ifndef MB_PB11_STAGE // --------------------------------- STAGE 0 ---------------------------------

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

    // ---

    // This is specialized by `MB_CLASS()` of the stage 0.
    template <typename T>
    struct BindParsedClass
    {
        using unspecialized = void;
    };

    template <typename T>
    concept HasParsedClassBinding = !requires{typename BindParsedClass<T>::unspecialized;};

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

    // This is used instead of `T` for class typedefs, to give them a shared type.
    template <typename T, ConstString Name> requires std::is_class_v<T>
    struct TypedefWrapper : T
    {
        template <typename ...P>
        TypedefWrapper(P &&... params) requires std::constructible_from<T, P &&...> : T(std::forward<P>(params)...) {}

        // This little hack is important. Without this, our specialization of `pybind11::detail::is_copy_constructible`
        // becomes ambiguous with the one in `pybind11/detail/type_caster_base.h` (search for `std::is_copy_constructible<Container>`).
        using reference = void;
    };

    // Given a type, wraps it in `TypedefWrapper`. For pointers and references, it inserted into the most nested level only.
    template <typename T, ConstString Name> struct TypedefWrapperAdder {};
    template <typename T, ConstString Name> requires std::is_class_v<T> struct TypedefWrapperAdder<      T, Name> {using type =       TypedefWrapper<T, Name>;};
    template <typename T, ConstString Name> requires std::is_class_v<T> struct TypedefWrapperAdder<const T, Name> {using type = const TypedefWrapper<T, Name>;};
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

    // Removes all pointers and references from a type, but not cv-qualifiers.
    template <typename T> struct RemovePointersRefs {using type = T;};
    template <typename T> struct RemovePointersRefs<T *> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T *const> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T &> {using type = typename RemovePointersRefs<T>::type;};
    template <typename T> struct RemovePointersRefs<T &&> {using type = typename RemovePointersRefs<T>::type;};

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

    // Returns true if `Name` is not the canonical name of `T` (if `Name` is empty, always returns false).
    template <typename T, ConstString Name>
    constexpr bool needs_typedef_wrapper =
        !Name.view().empty() &&
        BakedTypeNameOrFallback<T>() != Name.view() &&
        (HasCustomTypeBinding<typename RemoveCvPointersRefs<T>::type> || HasParsedClassBinding<typename RemoveCvPointersRefs<T>::type>);

    // See `MaybeTypedefWrapper` below.
    template <typename T, ConstString Name, typename CheckedT>
    struct MaybeTypedefWrapperHelper {using type = T;};
    template <typename T, ConstString Name, typename CheckedT> requires needs_typedef_wrapper<CheckedT, Name>
    struct MaybeTypedefWrapperHelper<T, Name, CheckedT> {using type = TypedefWrapperAdder<T, TrimCvPointersRefsFromName<Name>()>::type;};

    // If `Name` is a canonical name of `CheckedT`, returns `T`. Otherwise returns `TypedefWrapper<T, Name>`.
    // Often `T` and `CheckedT` will be the same type.
    template <typename T, ConstString Name, typename CheckedT>
    using MaybeTypedefWrapper = typename MaybeTypedefWrapperHelper<T, Name, CheckedT>::type;

    // ---

    // This is what `MB_ALT_TYPE_SPELLING(...)` expands to. This registers a `TypedefWrapper` binding.
    // `ThisFragment` is true for 1/Nth of all entires (given `N` fragments), false otherwise.

    // For custom types, we only register the type if the fragment number matches.
    // For parsed types, we ignore the fragment number and register the type if we have the binding for the underlying type in this fragment.

    template <bool ThisFragment, typename T, ConstString Name>
    struct RegisterAltTypeSpellingIfNeeded {};
    template <typename T, ConstString Name> requires HasCustomTypeBinding<typename RemoveCvPointersRefs<T>::type> && needs_typedef_wrapper<T, Name>
    struct RegisterAltTypeSpellingIfNeeded<true, T, Name>
        : RegisterOneTypeWithCustomBinding<typename TypedefWrapperAdder<typename RemoveCvPointersRefs<T>::type, TrimCvPointersRefsFromName<Name>()>::type>
    {};
    template <bool ThisFragment, typename T, ConstString Name> requires HasParsedClassBinding<typename RemoveCvPointersRefs<T>::type> && needs_typedef_wrapper<T, Name>
    struct RegisterAltTypeSpellingIfNeeded<ThisFragment, T, Name>
        : RegisterOneTypeWithCustomBinding<typename TypedefWrapperAdder<typename RemoveCvPointersRefs<T>::type, TrimCvPointersRefsFromName<Name>()>::type>
    {};

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
            // No typedef wrappers here, though we certainly could add them.
            // We don't add them in adjusted parameters though, so this among other things is for consistency.
            // Adding them in both places is not viable, because it could cause name conflicts (same name but different types, possibly).
            // But adding them in one place (e.g. only here) could be alright. Though the difference in naming would likely be confusing.

            // using R = decltype(ReturnTypeAdjustment<T>::Adjust(std::forward<T &&>(value)));
            // if constexpr (!needs_typedef_wrapper<T, Name>)
            // {
            return ReturnTypeAdjustment<T>::Adjust(std::forward<T &&>(value));
            // }
            // else
            // {
            //     using W = MaybeTypedefWrapper<R, Name, T>;
            //     if constexpr (std::is_reference_v<W>)
            //         return reinterpret_cast<W>(ReturnTypeAdjustment<T>::Adjust(std::forward<T &&>(value)));
            //     else
            //         return W(ReturnTypeAdjustment<T>::Adjust(std::forward<T &&>(value)));
            // }
        }
        else
        {
            if constexpr (std::is_reference_v<T>)
                return reinterpret_cast<MaybeTypedefWrapper<T, Name, T> &&>(std::forward<T &&>(value));
            else
                return MaybeTypedefWrapper<T, Name, T>(std::move(value));
        }
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

    // This traits lets you adjust ecah passed parameter.

    // Specialize `ParamTraitsLow` for your custom types.
    //
    // Specialize `ParamTraits` only here in this file, for high-level type groups.
    //   Those aren't allowed to change the parameter type, except for cvref/ptr qualifiers.
    //   `AdjustedParamType` depends on this, see its specializations for details.

    template <typename T>
    struct ParamTraitsLow
    {
        // using disables_func = void; // Disable the whole function because of this parameter.

        // using adjusted_param_type = ...; // Replaces the parameter type in the wrapping lambda.

        // static T UnadjustParam(adjusted_param_type &&); // Unadjust the parameter type back to the original.
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
    template <typename T>
    concept ParamTypeRequiresAdjustmentLow = ParamTypeRequiresAdjustment<T> && requires{typename ParamTraitsLow<T>::adjusted_param_type;};

    // For our lambda wrapping the original function, the adjusted parameter type.
    template <typename T>
    struct AdjustedParamType
    {
        // Type after adjustment.
        using type = T;

        // Typedef wrapper if needed.
        template <ConstString Name>
        using WrappedType = typename MaybeTypedefWrapperHelper<T, Name, T>::type;
    };
    template <ParamTypeRequiresAdjustment T>
    struct AdjustedParamType<T>
    {
        using type = typename ParamTraits<T>::adjusted_param_type;

        template <ConstString Name>
        using WrappedType = typename MaybeTypedefWrapperHelper<type, Name, T>::type;
    };
    template <ParamTypeRequiresAdjustmentLow T>
    struct AdjustedParamType<T>
    {
        using type = typename ParamTraits<T>::adjusted_param_type;

        // !!! No wrapper here.
        // We don't want to register typedef wrappers if the type was adjusted to something completely different,
        //   because it might conflict with wrappers for return values (same name but different types). And also for clarity, though this is debatable.
        template <ConstString Name>
        using WrappedType = type;
    };

    template <typename T, ConstString Name>
    using WrappedAdjustedParamType = typename AdjustedParamType<T>::template WrappedType<Name>;

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

    // Some `ReturnTypeAdjustment` specializations:

    // Adjust `std::unique_ptr` to `std::shared_ptr`, when returning it by value.
    // For some reason pybind11 crashes when the holder type is set to `shared_ptr` and you return a `unique_ptr`.
    // (When the reverse happens it also crashes, but in that case no adjustment can help us, so instead we use a `shared_ptr` holder and adjust `unique_ptr`.)
    template <typename T, typename D> requires HasCustomTypeBinding<T> || HasParsedClassBinding<T>
    struct ReturnTypeAdjustment<std::unique_ptr<T, D>> {static std::shared_ptr<T> Adjust(std::unique_ptr<T, D> &&src) {return std::move(src);}};
    // When returning a REFERENCE to `std::unique_ptr`, just replace it with a raw pointer.
    // This one was necessary for `tl::expected<T,U>` bindings, where if `T` is a `unique_ptr`, `.value()` returns a reference to it.
    template <typename T> requires std::is_reference_v<T> && IsUniquePtr<std::remove_cvref_t<T>>::value && (HasCustomTypeBinding<typename std::remove_cvref_t<T>::element_type> || HasParsedClassBinding<typename std::remove_cvref_t<T>::element_type>)
    struct ReturnTypeAdjustment<T> {static auto Adjust(T &&src) {return src.get();}};

    // ---

    // MB_REGISTER_TYPE uses those:

    // Like `RegisterTypeWithCustomBindingIfApplicable<T>`, but also does nothing if `Enable` is false.
    template <bool Enable, typename T>
    struct RegisterOneTypeWithCustomBindingAndAdjustmentsCond {};
    template <typename T>
        // Only accept complete types, because otherwise some traits in `AdjustedParamType` below (and maybe somewhere else) blow up.
        // We could guard them specifically, but I believe doing this here is enough.
        requires (sizeof(T) > 0)
    struct RegisterOneTypeWithCustomBindingAndAdjustmentsCond<true, T>
        : RegisterTypeWithCustomBindingIfApplicable<
            T,
            // Also register return and parameter wrappers.
            // Could make this conditional to speed up compilation, but it's probably not worth it (export
            typename AdjustReturnType<T>::type,
            typename AdjustedParamType<T>::type
        >
    {};

    // ---

    template <typename T>
    struct IsUniquePtrToBuiltinType : std::false_type {};
    template <typename T>
    struct IsUniquePtrToBuiltinType<std::unique_ptr<T>>
        : std::bool_constant<
            !HasCustomTypeBinding<T> &&
            !HasParsedClassBinding<T> &&
            // We don't want to accept those. Because transforming `std::optional<std::shared_ptr<T>>` to `std::shared_ptr<T> *` is kinda lame.
            !IsSmartPtr<T>::value
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
            !std::is_copy_assignable_v<T> ||
            // I don't even wanna know what it'll do to assign to a pointer.
            std::is_pointer_v<T>
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
                c.def_property_static(py_name.c_str(), const_getter, [](ClassType &obj, T value){Getter(obj) = std::move(value);}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property(py_name.c_str(), const_getter, [](ClassType &obj, T value){Getter(obj) = std::move(value);}, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
    }

    // Member or non-member functions. Non-member functions should pass `IsStatic == false`.
    template <bool IsStatic, auto F, ConstString ReturnTypeName, typename ...P>
    void TryAddFunc(auto &c, const char *simplename, const char *fullname, auto &&... data)
    {
        if constexpr ((ParamTypeDisablesWholeFunction<typename P::OriginalType> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            using ReturnType = std::invoke_result_t<decltype(F), typename P::OriginalType &&...>; // `P::OriginalType...` are already unadjusted.
            using ReturnTypeAdjusted = typename AdjustReturnType<ReturnType>::type;

            constexpr bool returns_unique_ptr_to_builtin = IsUniquePtrToBuiltinType<ReturnTypeAdjusted>::value;

            auto lambda = [](typename P::WrappedAdjustedType ...params) -> decltype(auto)
            {
                #define INVOKE_FUNC std::invoke(F, (UnwrapUnadjustParam<typename P::OriginalType, P::name>)(std::forward<typename P::WrappedAdjustedType>(params))...)

                if constexpr (std::is_void_v<ReturnTypeAdjusted>)
                {
                    INVOKE_FUNC;
                }
                else
                {
                    #define INVOKE_FUNC_R (AdjustAndWrapReturnedValue<ReturnType, ReturnTypeName>)(INVOKE_FUNC)

                    if constexpr (returns_unique_ptr_to_builtin)
                        return INVOKE_FUNC_R.release(); // `pybind11::return_value_policy::take_ownership` takes ownership of this.
                    else
                        return INVOKE_FUNC_R;

                    #undef INVOKE_FUNC_R
                }

                #undef INVOKE_FUNC
            };

            using LambdaReturnTypeAdjustedWrapped = decltype(lambda(std::declval<typename P::WrappedAdjustedType>()...));

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
                        using FirstParam = FirstType<typename P::OriginalType...>;

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
                                using SecondParam = SecondType<typename P::OriginalType...>;
                                if (auto iter = r.type_entries.find(typeid(SecondParam)); iter != r.type_entries.end())
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

            // The `call_guard<gil_scoped_release>` fixes a deadlock when calling python callbacks from something other than the main thread.
            // The documentation says it's only legal if you "don't access python objects" from the function, which sounds right.
            // When our functions then call python lambdas, those lambdas will automatically take the interpreter lock.
            // And when we call C++ lambdas, a different mechanism is used to force pybind11 to avoid adding code to them to take the interpreter lock.
            // We need this different mechanism as an optimization, because we sometimes invoke C++ lambdas (that were passed through python)
            // in multithreaded contexts, and we don't want them to be locking mutexes unless absolutely necessary.
            if constexpr (IsStatic)
                c.def_static(final_name, lambda, ret_policy, decltype(data)(data)..., pybind11::call_guard<pybind11::gil_scoped_release>());
            else
                c.def(final_name, lambda, ret_policy, decltype(data)(data)..., pybind11::call_guard<pybind11::gil_scoped_release>());
        }
    }

    template <int NumDefaultArgs, bool IsExplicit, typename ...P>
    void TryAddCtor(auto &c, auto &&... data)
    {
        using T = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<typename P::OriginalType> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else if constexpr (sizeof...(P) == 1 && std::is_base_of_v<typename AdjustedParamType<FirstType<typename P::OriginalType...>>::type, T>)
            // Reject move constructors. They just appear as a duplicate of the copy constructor in the `help(...)`, and other than that don't do anything.
            // Note `std::is_base_of` instead of `std::is_same`. This is to catch those constructors in `TypedefWrapper`s as well.
            ;
        else
        {
            auto lambda = [](typename P::WrappedAdjustedType ...params) -> decltype(auto)
            {
                // Note `new` here! Pybind still frees the object automatically.
                // The only effect this causes is eliminating the extra move that otherwise occurs when creating an object.
                // This extra move only appears when using `.def(pybind11::init([](...){...}))` and not `.def(pybind11::init<...>())`,
                // but the latter is not an option for us because it prevents us from adjusting the parameter types.
                return new T((UnwrapUnadjustParam<typename P::OriginalType, P::name>)(std::forward<typename P::WrappedAdjustedType>(params))...);
            };

            c.def(pybind11::init(lambda), decltype(data)(data)...);

            // Register this ctor as an implicit conversion if it's not explicit, has at least one parameter,
            // and has at most one parameter without a default argument.
            if constexpr (!IsExplicit && sizeof...(P) > 0 && sizeof...(P) - NumDefaultArgs <= 1)
            {
                pybind11::implicitly_convertible<std::remove_cvref_t<FirstType<typename P::OriginalType...>>, T>();
            }
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

    // Propagate pybind11's fixed `is_copy_constructible` through `TypedefWrapper`.
    template <typename T, MRBind::ConstString Name>
    struct is_copy_constructible<MRBind::detail::pb11::TypedefWrapper<T, Name>>
        : is_copy_constructible<T> // This is `pybind11::detail::is_copy_constructible`.
    {};
}
PYBIND11_NAMESPACE_END(PYBIND11_NAMESPACE)

// Typedef wrapper for a custom class.
template <typename T, MRBind::ConstString Name>
requires MRBind::detail::pb11::HasCustomTypeBinding<T>
struct MRBind::detail::pb11::CustomTypeBinding<MRBind::detail::pb11::TypedefWrapper<T, Name>>
    : public CustomTypeBinding<T>
{
    using pybind_type = pybind11::class_<
        // This class.
        MRBind::detail::pb11::TypedefWrapper<T, Name>,
        // Base.
        T,
        // Holder. You'd think we don't need it here, but otherwise we get:
        //   ImportError: generic_type: type "X" does not have a non-default holder type while its base "Y" does
        typename SelectPybindHolder<MRBind::detail::pb11::TypedefWrapper<T, Name>>::type
    >;

    [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(Name.view());}

    template <typename U> // No `typename ...Q`, we don't expect any parents here.
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n)
    {
        return CustomTypeBinding<T>::template pybind_init<U, T>(std::move(f), m, n);
    }

    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &m, auto &c)
    {
        CustomTypeBinding<T>::template bind_members<true>(m, c);
    }

    static std::unordered_set<std::type_index> base_typeids() {return {typeid(T)};}
};

// Typedef wrapper for a parsed class.
template <typename T, MRBind::ConstString Name>
requires MRBind::detail::pb11::HasParsedClassBinding<T>
struct MRBind::detail::pb11::CustomTypeBinding<MRBind::detail::pb11::TypedefWrapper<T, Name>>
    : public DefaultCustomTypeBinding<T>
{
    using pybind_type = BindParsedClass<T>::template pybind_class_type_for<TypedefWrapper<T, Name>, T>; // This automatically sets the right holder.

    [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(Name.view());}

    template <typename U> // No `typename ...Q`, we don't expect any parents here.
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n)
    {
        return std::make_unique<MRBind::detail::pb11::SpecificPybindType<typename BindParsedClass<T>::template pybind_class_type_for<U, T>>>(BindParsedClass<T>::template BindType<U, T>(m, n));
    }

    template <bool InDerivedClass>
    static void bind_members(pybind11::module_ &m, auto &c)
    {
        using U = typename std::remove_reference_t<decltype(c.type)>::type;
        BindParsedClass<T>::template BindMembers<true, U, T>(m, c.type);
    }

    static std::unordered_set<std::type_index> base_typeids() {return {typeid(T)};}
};

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
    , MRBind::detail::pb11::ParamInfo<MRBIND_IDENTITY type_, MRBIND_STR(MRBIND_IDENTITY type_)>

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


// --------------------------------- STAGE 0 ---------------------------------

#define MB_WANT_BAKED_TYPE_NAMES

#include <mrbind/helpers/undef_all_macros.h>

// Signal to include the original haders.
#define MB_INCLUDE_ORIGINAL_HEADER 2

#define MB_CLASS(kind_, name_, qualname_, ns_stack_, comment_, bases_, members_) \
    namespace MRBind::detail::pb11 \
    { \
        DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) \
        template <> \
        struct BindParsedClass<MRBIND_IDENTITY qualname_> \
        { \
            template <typename T, typename ...P> \
            using pybind_class_type_for = pybind11::class_< \
                /* Type. */\
                T, \
                /* Holder. */\
                typename SelectPybindHolder<T>::type,\
                /* Extra. */\
                P... \
            >; \
            using pybind_class_type = pybind_class_type_for<MRBIND_IDENTITY qualname_ DETAIL_MB_PB11_BASE_TYPES(bases_)>; \
            template <typename T, typename ...E> \
            static pybind_class_type_for<T, E...> BindType(pybind11::module_ &m, const char *n); \
            static pybind_class_type BindTypeDefault(pybind11::module_ &m, const char *n) {return BindType<MRBIND_IDENTITY qualname_ DETAIL_MB_PB11_BASE_TYPES(bases_)>(m, n);} \
            template <bool InDerivedClass = false, typename U, typename ...E> \
            static void BindMembers(pybind11::module_ &m, pybind_class_type_for<U, E...> &c); \
            static void BindMembersDefault(pybind11::module_ &m, pybind_class_type &c) {BindMembers(m, c);} \
        }; \
    }

#include <mrbind/helpers/define_missing_macros.h>

#define MB_PB11_STAGE 1
#define MB_AGAIN
#elif MB_PB11_STAGE == 1 // --------------------------------- STAGE 1 ---------------------------------

// Destroy existing macros.
#include <mrbind/helpers/undef_all_macros.h>

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
                DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_), \
                /* Return type name. */\
                MRBIND_STR(MRBIND_IDENTITY ret_) \
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
                using _pb11_B = MRBind::detail::pb11::BindParsedClass<_pb11_C>; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<_pb11_B::pybind_class_type>; \
                return std::make_unique<_pb11_T>(_pb11_B::BindTypeDefault(_pb11_m, _pb11_n)); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &_pb11_m, MRBind::detail::pb11::BasicPybindType &_pb11_b) \
            { \
                using _pb11_C = MRBIND_IDENTITY qualname_; \
                using _pb11_B = MRBind::detail::pb11::BindParsedClass<_pb11_C>; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<_pb11_B::pybind_class_type>; \
                _pb11_B::BindMembersDefault(_pb11_m, static_cast<_pb11_T *>(&_pb11_b)->type); \
            }, \
            std::unordered_set<std::type_index>{DETAIL_MB_PB11_BASE_TYPEIDS(bases_)} \
        ); \
        return 0; \
    }(); \

// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>


#undef MB_PB11_STAGE
#define MB_PB11_STAGE 2
#define MB_AGAIN
#elif MB_PB11_STAGE == 2 // --------------------------------- STAGE 2 ---------------------------------

#include <mrbind/helpers/undef_all_macros.h>

#define MB_CLASS(kind_, name_, qualname_, ns_stack_, comment_, bases_, members_) \
    namespace MRBind::detail::pb11 \
    { \
        DETAIL_MB_PB11_USING_NAMESPACES(ns_stack_) \
        template <typename _pb11_C, typename ..._pb11_E> \
        auto BindParsedClass<MRBIND_IDENTITY qualname_>::BindType(pybind11::module_ &_pb11_m, const char *_pb11_n) -> pybind_class_type_for<_pb11_C, _pb11_E...> \
        { \
            pybind_class_type_for<_pb11_C, _pb11_E...> _pb11_c(_pb11_m, _pb11_n); \
            return _pb11_c; \
        } \
        template <bool _pb11_InDerivedClass, typename _pb11_C, typename ..._pb11_E> \
        void BindParsedClass<MRBIND_IDENTITY qualname_>::BindMembers(pybind11::module_ &_pb11_m, pybind_class_type_for<_pb11_C, _pb11_E...> &_pb11_c) \
        { \
            DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
        } \
    }


#define MB_REGISTER_TYPE(i_, ...) \
    static constexpr MRBind::detail::pb11::RegisterOneTypeWithCustomBindingAndAdjustmentsCond<MB_CHECK_FRAGMENT(i_), std::remove_cvref_t<__VA_ARGS__>> MRBIND_UNIQUE_VAR{};

#define MB_ALT_TYPE_SPELLING(i_, type_, spelling_) \
    /* Here we just generate the typedef wrapper if needed, and that's all. */\
    /* Using `std::type_identity` (note, not `..._t`) to avoid constructing the actual type. Can't use a pointer, because the type can be a reference. */\
    static constexpr MRBind::detail::pb11::RegisterAltTypeSpellingIfNeeded<MB_CHECK_FRAGMENT(i_), MRBIND_IDENTITY type_, MRBIND_STR(MRBIND_IDENTITY spelling_)> MRBIND_UNIQUE_VAR{};



// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(classname, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, classname, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qualname_, static_, type_, name_, fullname_, comment_) \
    if constexpr (!_pb11_InDerivedClass) \
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
    if constexpr (!_pb11_InDerivedClass) \
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
    if constexpr (!_pb11_InDerivedClass) \
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
        _pb11_c, \
        /* Simple name */\
        MRBind::detail::pb11::GetConversionFuncName<MRBIND_IDENTITY ret_>(MRBIND_STR(MRBIND_IDENTITY ret_)).c_str(), \
        /* Full name */\
        nullptr \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#include <mrbind/helpers/define_missing_macros.h>



#endif // MB_PB11_STAGE == 2

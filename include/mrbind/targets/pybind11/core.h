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

#if !MRBIND_IS_SECONDARY_FILE
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
        using AddClassMembers = void (*)(pybind11::module_ &m, BasicPybindType &c, bool second_pass);

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
        using pybind_type = pybind11::class_<T>;

        // This passes the constructor arguments to `pybind_type`.
        // Normally you don't need to override this. Override this for stuff like `pybind11::bind_vector()` or `pybind11::bind_map()`.
        // `U` is either a `pybind_type` or that of a derived class (i.e. `TypedefWrapper<T, "...">`). Use `U` instead of `pybind_type` and `T` here.
        template <typename U>
        [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n) {return f(m, n);}

        // The type name for pybind11. Normally don't need to override this.
        [[nodiscard]] static std::string pybind_type_name()
        {
            // Can't use non-typeid type name here, because then we often get name conflicts between TypedefWrapper names and this for the underlying type.
            return ToPythonName(TypeidTypeName<T>());
        }

        // Which base classes we inherit from. Or in general, which types must be initialized before this one.
        static std::unordered_set<std::type_index> base_typeids() {return {};}

        // Registers all members. Called twice, with `second_pass = false` and then `= true`.
        // Usually must override this, unless you do something with `pybind_init` (see comment on it above).
        // Normally you'd do constructors in the first pass, everything else in the second pass. But often you can just dump everything to the second pass.
        // Note, must not use `T` here. Use `using TT = typename std::remove_reference_t<decltype(c.type)>::type;` to support derived classes (i.e. `TypedefWrapper<T, "...">`).
        static void bind_members(pybind11::module_ &, auto &c, bool second_pass) {(void)c; (void)second_pass;}
    };

    template <typename T>
    struct RegisterTypeWithCustomBinding
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
                [](pybind11::module_ &m, pb11::BasicPybindType &b, bool second_pass)
                {
                    Traits::bind_members(m, static_cast<TypeStorage &>(b), second_pass);
                },
                Traits::base_typeids()
            );
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
        template <typename ...P>
        TypedefWrapper(P &&... params) requires std::constructible_from<T, P &&...> : T(std::forward<P>(params)...) {}
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

    // Returns true if `Name` is not the canonical name of `T` (if `Name` is empty, always returns false).
    template <typename T, ConstString Name>
    constexpr bool needs_typedef_wrapper =
        !Name.view().empty() &&
        BakedTypeNameOrFallback<T>() != Name.view() && // Must compare the typename of exactly `T`, because that's what's baked. If we strip cvref-qualifiers/pointers, the stripped version will not be baked.
        (HasCustomTypeBinding<typename RemoveCvPointersRefs<T>::type> || HasParsedClassBinding<typename RemoveCvPointersRefs<T>::type>);

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
            using R = decltype(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
            if constexpr (!needs_typedef_wrapper<T, Name>)
            {
                return ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value));
            }
            else
            {
                using W = MaybeTypedefWrapper<R, Name>;
                if constexpr (std::is_reference_v<W>)
                    return reinterpret_cast<W>(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
                else
                    return W(ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value)));
            }
        }
        else
        {
            if constexpr (std::is_reference_v<T>)
                return reinterpret_cast<MaybeTypedefWrapper<T, Name> &&>(std::forward<T &&>(value));
            else
                return MaybeTypedefWrapper<T, Name>(std::move(value));
        }
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

    template <typename T>
    struct DeleterOrCrash
    {
        void operator()(T *ptr)
        {
            if constexpr (std::is_destructible_v<T>)
            {
                delete ptr;
            }
            else
            {
                CriticalError("Trying to delete a type with a private destructor: " + std::string(BakedTypeNameOrFallback<T>()));
            }
        }
    };

    // ---

    template <bool IsStatic, auto Getter>
    void TryAddMemberVar(auto &c, bool second_pass, const char *name, auto &&... data)
    {
        // Using pybind11 "properties" here because the member can be a reference, and you can't form a pointer-to-member to those.

        if (!second_pass) // Member variables are loaded in the second pass, though this shouldn't matter in most cases.
            return;

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
    void TryAddFunc(auto &c, bool second_pass, const char *simplename, const char *fullname, auto &&... data)
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

            using ReturnTypeAdjustedWrapped = decltype(lambda(std::declval<typename P::WrappedAdjustedType>()...));

            // I thought `return_value_policy::autmatic_reference` was supposed to do the same thing, but for some reason it doesn't.
            // E.g. it refuses (at runtime) to call functions returning references to non-movable classes.
            constexpr pybind11::return_value_policy ret_policy =
                std::is_pointer_v<ReturnTypeAdjustedWrapped> || std::is_reference_v<ReturnTypeAdjustedWrapped>
                ? pybind11::return_value_policy::reference
                : pybind11::return_value_policy::move;

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

            if constexpr (IsStatic)
                c.def_static(final_name, lambda, ret_policy, decltype(data)(data)...);
            else
                c.def(final_name, lambda, ret_policy, decltype(data)(data)...);
        }
    }

    template <int NumDefaultArgs, bool IsExplicit, typename ...P>
    void TryAddCtor(auto &c, bool second_pass, auto &&... data)
    {
        using T = std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<P> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            if (!second_pass) // Constructors are loaded in the second pass because of the default arguments.
                return;

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
    template <typename T>
    requires MRBind::detail::pb11::HasCustomTypeBinding<T>
    class type_caster<T> : public type_caster_base<T>, MRBind::detail::pb11::RegisterTypeWithCustomBinding<T> {};
}
PYBIND11_NAMESPACE_END(PYBIND11_NAMESPACE)

template <typename T, MRBind::ConstString Name>
requires MRBind::detail::pb11::HasCustomTypeBinding<T>
struct MRBind::detail::pb11::CustomTypeBinding<MRBind::detail::pb11::TypedefWrapper<T, Name>>
    : public CustomTypeBinding<T>, public RegisterTypeWithCustomBinding<T>
{
    using pybind_type = pybind11::class_<MRBind::detail::pb11::TypedefWrapper<T, Name>>;

    [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(Name.view());}

    static std::unordered_set<std::type_index> base_typeids() {return {typeid(T)};}
};

template <typename T, MRBind::ConstString Name>
requires MRBind::detail::pb11::HasParsedClassBinding<T>
struct MRBind::detail::pb11::CustomTypeBinding<MRBind::detail::pb11::TypedefWrapper<T, Name>>
    : public DefaultCustomTypeBinding<T>
{
    using pybind_type = BindParsedClass<T>::template pybind_class_type_for<TypedefWrapper<T, Name>, T>;

    [[nodiscard]] static std::string pybind_type_name() {return ToPythonName(Name.view());}

    template <typename U>
    [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::module_ &m, const char *n)
    {
        return std::make_unique<MRBind::detail::pb11::SpecificPybindType<typename BindParsedClass<T>::template pybind_class_type_for<U, T>>>(BindParsedClass<T>::template BindType<U, T>(m, n));
    }

    static void bind_members(pybind11::module_ &m, auto &c, bool second_pass)
    {
        using U = typename std::remove_reference_t<decltype(c.type)>::type;
        BindParsedClass<T>::template BindMembers<U, T>(m, c.type, second_pass);
    }

    static std::unordered_set<std::type_index> base_typeids() {return {typeid(T)};}
};

// Module entry point, and more stuff.
#if !MRBIND_IS_SECONDARY_FILE // Don't duplicate this if we have >1 TU.

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

        // Load in two (three?) passes.

        // Init.
        for (auto *elem : final_order)
            elem->pybind_type = elem->init(m, elem->pybind_type_name.c_str());
        // Pass 1.
        for (auto *elem : final_order)
            elem->load_members(m, *elem->pybind_type, false);
        // Pass 2.
        for (auto *elem : final_order)
            elem->load_members(m, *elem->pybind_type, true);
    }

    // Load the functions.
    for (const auto &elem : r.func_entries)
        elem(m);
}

#endif



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
                std::unique_ptr<T, MRBind::detail::pb11::DeleterOrCrash<T>>,\
                /* Extra. */\
                P... \
            >; \
            using pybind_class_type = pybind_class_type_for<MRBIND_IDENTITY qualname_ DETAIL_MB_PB11_BASE_TYPES(bases_)>; \
            template <typename T, typename ...E> \
            static pybind_class_type_for<T, E...> BindType(pybind11::module_ &m, const char *n); \
            static pybind_class_type BindTypeDefault(pybind11::module_ &m, const char *n) {return BindType<MRBIND_IDENTITY qualname_ DETAIL_MB_PB11_BASE_TYPES(bases_)>(m, n);} \
            template <typename U, typename ...E> \
            static void BindMembers(pybind11::module_ &m, pybind_class_type_for<U, E...> &c, bool second_pass); \
            static void BindMembersDefault(pybind11::module_ &m, pybind_class_type &c, bool second_pass) {BindMembers(m, c, second_pass);} \
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
                _pb11_m, true, \
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
            MRBind::detail::pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<MRBIND_IDENTITY qualname_>()), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::BasicPybindType> \
            { \
                return std::make_unique<MRBind::detail::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>>>(_pb11_m, _pb11_n); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &, MRBind::detail::pb11::BasicPybindType &_pb11_b, [[maybe_unused]] bool _pb11_second_pass) \
            { \
                if (_pb11_second_pass) \
                { \
                    [[maybe_unused]] pybind11::enum_<MRBIND_IDENTITY qualname_> &_pb11_e = static_cast<MRBind::detail::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>> &>(_pb11_b).type; \
                    DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_); \
                } \
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
            MRBind::detail::pb11::ToPythonName(MRBind::BakedTypeNameOrFallback<MRBIND_IDENTITY qualname_>()), \
            /* Init lambda. */\
            [](pybind11::module_ &_pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::detail::pb11::BasicPybindType> \
            { \
                using _pb11_C = MRBIND_IDENTITY qualname_; \
                using _pb11_B = MRBind::detail::pb11::BindParsedClass<_pb11_C>; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<_pb11_B::pybind_class_type>; \
                return std::make_unique<_pb11_T>(_pb11_B::BindTypeDefault(_pb11_m, _pb11_n)); \
            }, \
            /* Members lamdba. */\
            [](pybind11::module_ &_pb11_m, MRBind::detail::pb11::BasicPybindType &_pb11_b, [[maybe_unused]] bool _pb11_second_pass) \
            { \
                using _pb11_C = MRBIND_IDENTITY qualname_; \
                using _pb11_B = MRBind::detail::pb11::BindParsedClass<_pb11_C>; \
                using _pb11_T = MRBind::detail::pb11::SpecificPybindType<_pb11_B::pybind_class_type>; \
                _pb11_B::BindMembersDefault(_pb11_m, static_cast<_pb11_T *>(&_pb11_b)->type, _pb11_second_pass); \
            }, \
            std::unordered_set<std::type_index>{DETAIL_MB_PB11_BASE_TYPEIDS(bases_)} \
        ); \
        return 0; \
    }(); \

#define MB_TYPEDEF(name_, qualname_, ns_stack_, type_, comment_) \
    /* Here we just generate the typedef wrapper if needed, and that's all. */\
    /* Using `std::type_identity` (note, not `..._t`) to avoid constructing the actual type. Can't use a pointer, because the type can be a reference. */\
    static constexpr std::type_identity<MRBind::detail::pb11::MaybeTypedefWrapper<MRBIND_IDENTITY type_, MRBIND_STR(MRBIND_IDENTITY qualname_)>> MRBIND_UNIQUE_VAR{};

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
        template <typename _pb11_C, typename ..._pb11_E> \
        void BindParsedClass<MRBIND_IDENTITY qualname_>::BindMembers(pybind11::module_ &_pb11_m, pybind_class_type_for<_pb11_C, _pb11_E...> &_pb11_c, bool _pb11_second_pass) \
        { \
            DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
        } \
    }



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
        _pb11_c, _pb11_second_pass,\
        /* Name. */\
        MRBIND_STR(name_)\
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
        _pb11_c, _pb11_second_pass \
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
        _pb11_c, _pb11_second_pass, \
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
        _pb11_c, _pb11_second_pass, \
        /* Simple name */\
        ("_convert_to_" + MRBind::detail::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY ret_))).c_str(), \
        /* Full name */\
        nullptr \
        /* Comment, if any. */ \
        MRBIND_PREPEND_COMMA(comment_) \
    );

#include <mrbind/helpers/define_missing_macros.h>



#endif // MB_PB11_STAGE == 2

// Intentionally no pragma once, though currently it doesn't matter (to allow re-including the target file multiple times).

#ifndef MB_PB11_STAGE

#ifndef MB_PB11_MODULE_NAME
#error Must define `MB_PB11_MODULE_NAME` to the desired module name (without quotes).
#endif

// Various headers we need:

#include <mrbind/helpers/common.h>
#include <mrbind/helpers/const_string.h>
#include <mrbind/helpers/enum_flag_ops.h>
#include <mrbind/helpers/macro_sequence_for.h>
#include <mrbind/helpers/map_filter_pack.h>
#include <mrbind/helpers/rebind_container.h>
#include <mrbind/helpers/type_index.h>
#include <mrbind/helpers/type_lists.h>

#include <mrbind/targets/pybind11/pre_include_pybind.h> // All pybind headers must be here: [
#include <pybind11/functional.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl_bind.h>
// NOTE: Not including `<pybind11/stl.h>` because that doesn't cooperate with passing containers by reference.
#include <mrbind/targets/pybind11/post_include_pybind.h> // ]

#include <cstddef>
#include <map>
#include <optional>
#include <set>
#include <string_view>
#include <string>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// Enable this macro for only one TU.
#if MB_DEFINE_IMPLEMENTATION
#include <cstdio> // To report debug info if enabled. Also for deprecation warnings.
#include <cstdlib> // For `getenv` to enable debug logging, also `atoi` to parse the loglevel env variable.
#include <exception> // For `std::terminate()`.
#include <iostream> // To report errors.
#include <mrbind/helpers/strings.h>
#endif

#ifdef MB_PB11_ADJUST_NAMES
#include <regex>
#endif

#ifdef _WIN32
#define MB_PB11_EXPORT_TYPE
#else
#define MB_PB11_EXPORT_TYPE __attribute__((__visibility__("default")))
#endif

#ifdef __clang__
#define MB_PB11_NO_WARN_ON_DUPLICATE_BASE(...) _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Winaccessible-base\"") __VA_ARGS__ _Pragma("GCC diagnostic pop")
#else
#define MB_PB11_NO_WARN_ON_DUPLICATE_BASE(...) __VA_ARGS__
#endif

// Like `offsetof(...)`, but with dumb warnings disabled.
#if defined(__GNUC__) || defined(__clang__)
#define MB_PB11_OFFSETOF(...) _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Winvalid-offsetof\"") offsetof(__VA_ARGS__) _Pragma("GCC diagnostic pop")
#else
#define MB_PB11_OFFSETOF(...) offsetof(__VA_ARGS__)
#endif


// The global namespace marker. Each parsed namespace gets its own, in `MB_NAMESPACE` below.
using _pb11_ns_marker = void;
// This wraps `_pb11_ns_marker` structs to make them complete types, that `typeid()` can work with.
namespace MRBind::pb11 {template <typename> struct MB_PB11_EXPORT_TYPE NsMarker {};}
using _pb11_this_ns = MRBind::pb11::NsMarker<::_pb11_ns_marker>;

namespace MRBind::pb11
{
    // Fails the application with a critical error.
    [[noreturn]] void CriticalError(std::string_view message);

    // Given a qualified C++ name, removes all weird characters from it, replaces `::` with `_`, etc.
    // The resulting name is used for the python bindings.
    [[nodiscard]] std::string ToPythonName(std::string name);

    // If `name` matches a python keyword, tweaks it to not match. This is a subset of `ToPythonName()`.
    [[nodiscard]] std::string AdjustPythonKeywords(std::string name);

    // Simplifies a type name by applying some heuristics. This is a subset of `ToPythonName()`.
    [[nodiscard]] std::string ImproveTypeName(std::string str);

    // Given MRBind's internal overloaded operator name, output Python's name for it. Otherwise returns the name unchanged.
    [[nodiscard]] const char *AdjustOverloadedOperatorName(const char *name, bool unary);

    void RegisterTypeAliasLow(MRBind::TypeIndex type, std::string_view spelling);

    template <typename T>
    [[nodiscard]] std::string GetConversionFuncName(const char *type_name)
    {
        if constexpr (std::is_same_v<T, bool>)
            return "__bool__";
        else if constexpr (std::is_integral_v<T>)
            return "__int__"; // Python has ints with unlimited precision, so all integral types go here.
        else if constexpr (std::is_same_v<T, float> || std::is_same_v<T, double>)
            return "__float__"; // Python float corresponds to C/C++ double. We don't allow `long double` here.
        else
            return "convert_to_" + ToPythonName(type_name);
    }

    // Converts the typeid of a `NsMarker<...::_pb11_ns_marker>` to the unqualified name of the namespace.
    [[nodiscard]] std::string NamespaceMarkerToUnqualifiedName(MRBind::TypeIndex marker);

    // Which Python namespaces should be "stripped", i.e. their contents pasted directly into the module.
    // This is customized via the `MB_PB11_STRIPPED_NAMESPACES` macro (see the definition of this function for details).
    [[nodiscard]] const std::set<std::string, std::less<>> &StrippedPythonNamespaces();

    // This can be called manually to add a custom alias to `Registry::custom_aliases`.
    void RegisterCustomAlias(std::string alias, std::string target);

    // ---

    class Demangler
    {
        #ifndef _MSC_VER
        char *buf_ptr = nullptr;
        std::size_t buf_size = 0;
        #endif

      public:
        Demangler() {}
        Demangler(const Demangler &) = delete;
        Demangler &operator=(const Demangler &) = delete;
        ~Demangler();

        [[nodiscard]] std::string operator()(const char *name);
    };

    // Type name from `typeid()`, demangled if necessary.
    template <typename T>
    [[nodiscard]] std::string TypeidTypeName()
    {
        return Demangler{}(typeid(T).name());
    }

    // ---

    // This mirrors `mrbind::CopyMoveKind` in the parser, the names must match exactly.
    enum class CopyMoveKind
    {
        none,
        copy,
        move,
        by_value_assignment,
    };

    // `TryAddFunc()` uses this state to preserve information between the two passes.
    struct TryAddFuncState
    {
        // This initially receives the function name without template arguments (rewritten in Python style of course),
        // which during subsequent passes can be changed to include template arguments to resolve ambiguous overloads.
        std::string python_name;
        bool is_overloaded_operator = false;
    };

    // Use `ToPybindSignatureType` with this.
    using PybindSignature = std::vector<MRBind::TypeIndex>;

    // `TryAddFunc()` stores overload lists here.
    // Use one instance per scope (per class; all namespaces can share one).
    struct TryAddFuncScopeState
    {
        struct OverloadEntry
        {
            std::size_t num_overloads = 0;
            std::set<PybindSignature> signatures;
        };

        std::unordered_map<std::string, OverloadEntry> overloads;

        // This is filled when generating class members. Ignored for namespace scope functions.
        bool have_default_ctor = false;
        bool have_copy_ctor = false;
    };

    // Refers either to the module itself or to one of the classes.
    // Provides a generic interface to insert things into them.
    struct ModuleOrClassRef
    {
        // If true, this is a `pybind11::class_<...>` representing a namespace. If false, this is a `pybind11::module_`.
        bool is_class = false;
        // It's a bit weird that this is a pointer, but doing it this way allows us to downcast it back to a more specific type legally? Still feels a bit weird though.
        pybind11::handle *handle = nullptr;

        ModuleOrClassRef() {}
        ModuleOrClassRef(pybind11::module_ &m) : is_class(false), handle(&m) {}
        ModuleOrClassRef(pybind11::object &o) : is_class(true), handle(&o) {}

        // Add a free function (if this is a module) or a static function (if this is a class representing a namespace).
        void AddFunc(const char *name, auto &&f, const auto &... extra)
        {
            if (is_class)
            {
                handle->attr(name) = pybind11::cpp_function(
                    decltype(f)(f),
                    pybind11::name(name),
                    pybind11::scope(*handle),
                    pybind11::sibling(pybind11::getattr(*handle, name, pybind11::none())),
                    extra...
                );
            }
            else
            {
                static_cast<pybind11::module_ *>(handle)->def(name, decltype(f)(f), extra...);
            }
        }
    };

    // Each namespace and class gets a copy of this.
    // It lets you re-register the member functions in a different scope,
    //   which in turn lets you properly create function aliases (regular Python aliases sometimes cause pybind11-stubgen to choke,
    //   seemingly when the function is a class member and overloaded, but I'm not 100% sure).
    struct FuncAliasRegistrationFuncs
    {
        // This maps Python-style function names to functions that can be used to register an alias for them.
        std::unordered_map<std::string, std::vector<std::function<void(ModuleOrClassRef m, const char *name)>>> funcs;
    };

    struct FuncEntry
    {
        using LoadFunc = void (*)(ModuleOrClassRef m, TryAddFuncState &state, TryAddFuncScopeState &scope_state, int pass_number, const char *qual_name, const char *qual_name_with_template_args, FuncAliasRegistrationFuncs *func_alias_registration_funcs);
        LoadFunc load = nullptr;

        const char *qual_name = nullptr;
        const char *qual_name_with_template_args = nullptr;

        TryAddFuncState state;

        FuncEntry() {}
        FuncEntry(
            const char *qual_name,
            const char *qual_name_with_template_args,
            LoadFunc load
        )
            : load(load),
            qual_name(qual_name),
            qual_name_with_template_args(qual_name_with_template_args)
        {}
    };


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
        struct AddClassMembersState
        {
            TryAddFuncScopeState func_scope_state;
            std::vector<TryAddFuncState> func_state;

            int pass_number = 0;
            std::size_t i = 0;

            TryAddFuncState &NextFuncState()
            {
                if (pass_number == 0)
                    return func_state.emplace_back();
                else
                    return func_state.at(i++);
            }
        };

        using InitClass = std::unique_ptr<BasicPybindType> (*)(ModuleOrClassRef m, const char *n);
        using AddClassMembers = void (*)(BasicPybindType &c, AddClassMembersState &state, FuncAliasRegistrationFuncs *func_alias_registration_funcs);

        InitClass init = nullptr;
        AddClassMembers load_members = nullptr;

        bool is_parsed = false; // If false, this is a fully custom binding.

        // This is either parsed or returned by `CustomTypeBinding::cpp_type_name()` for custom types.
        // We're not using the typeid types because our parsed/custom ones can be more pretty.
        // This doesn't have to be valid C++, but we will extract the scope qualifiers from it.
        std::string cpp_type_name;
        const char *comment = nullptr;

        // If false, don't attempt to write to `.doc()`.
        bool set_docstring = false;

        // This is set when loading the class. Relative to the parent class or namespace.
        std::string pybind_type_name;
        // Same, but with `.`-separate qualifiers for all parent classes or namespaces.
        std::string pybind_type_name_qual;

        bool was_processed = false;
        std::vector<std::string> aliases;

        MRBind::TypeIndex parent_namespace_or_class;
        std::map<std::string, MRBind::TypeIndex, std::less<>> nested_types;

        // We store this to load the methods after all types.
        // This and `typeinfo_from_other_module` are mutually exclusive.
        std::unique_ptr<BasicPybindType> pybind_type;

        // Other types that must be loaded before this one.
        // Those are keys into `Registry::type_entries`.
        std::unordered_set<MRBind::TypeIndex> type_deps;

        // Reverse dependencies. Those are populated automatically.
        std::unordered_set<MRBind::TypeIndex> type_rdeps;

        FuncAliasRegistrationFuncs func_alias_registration_funcs;

        // This is set only for custom types that were already loaded in a different module.
        // For those we don't register a new type, and instead use the stuff from here.
        pybind11::detail::type_info *typeinfo_from_other_module = nullptr;

        #if MRBIND_DEBUG
        // Increment this manually when inserting non-parsed types into `type_entries`.
        // We use this to track redundant bindings.
        int num_redundant_nonparsed_binds = 0;
        #endif

        TypeEntry(
            bool is_parsed,
            MRBind::TypeIndex parent_namespace_or_class,
            const char *comment,
            bool set_docstring,
            std::string cpp_type_name,
            InitClass init,
            AddClassMembers load_members,
            std::unordered_set<MRBind::TypeIndex> type_deps = {}
        )
            : init(init),
            load_members(load_members),
            is_parsed(is_parsed),
            cpp_type_name(std::move(cpp_type_name)),
            comment(comment),
            set_docstring(set_docstring),
            parent_namespace_or_class(parent_namespace_or_class),
            type_deps(std::move(type_deps))
        {
            this->type_deps.insert(parent_namespace_or_class);
        }
    };

    struct NamespaceEntry
    {
        MRBind::TypeIndex parent_namespace;

        // Unqualified name.
        std::string name;
        // Python-style qualified name, with `.` separating the scopes.
        std::string pybind_name_qual;
        // Same, but ignoring the parts that are stripped from the final python names.
        std::string pybind_name_qual_fixed;

        // If true, this namespace doesn't appear in the final names.
        bool is_stripped = false;

        std::map<std::string, MRBind::TypeIndex, std::less<>> nested_namespaces;
        std::map<std::string, MRBind::TypeIndex, std::less<>> nested_types;

        std::unique_ptr<BasicPybindType> (*init_pybind_type)(ModuleOrClassRef m, const char *n) = nullptr;

        // Null if `is_stripped == true`.
        std::unique_ptr<BasicPybindType> pybind_type;

        FuncAliasRegistrationFuncs func_alias_registration_funcs;

        NamespaceEntry(MRBind::TypeIndex parent_namespace) : parent_namespace(parent_namespace) {}
    };

    // Each source file registers itself there.
    struct Registry
    {
        std::unordered_map<MRBind::TypeIndex, TypeEntry> type_entries;

        // This maps C++-spelled type alias names to the target types.
        std::unordered_map<std::string_view, std::unordered_set<MRBind::TypeIndex>> type_aliases;

        std::unordered_map<MRBind::TypeIndex, NamespaceEntry> namespace_entries;

        // Points into `namespace_entries`. Only includes the top-level namespaces.
        std::map<std::string_view, MRBind::TypeIndex, std::less<>> top_level_namespaces;
        // Points into `type_entries`. Only includes the top-level types (not inside any namespace nor a class).
        std::map<std::string_view, MRBind::TypeIndex, std::less<>> top_level_types;

        std::vector<FuncEntry> func_entries;

        // Those aliases are defined manually. Both strings are Python identifiers and can have embedded `.`s.
        std::map<std::string, std::string, std::less<>> custom_aliases;

        FuncAliasRegistrationFuncs top_level_func_alias_registration_funcs;

        bool was_loaded = false;
    };

    [[nodiscard]] inline Registry &GetRegistry()
    {
        static Registry ret;
        return ret;
    }

    struct ApplyNamespacesResult
    {
        ModuleOrClassRef m;
        std::string_view name; // This is always null-terminated if the `name` parameter is.

        // At most one of those can be non-null at the same time.
        // Then it points to the same thing as `m`.
        NamespaceEntry *most_nested_namespace = nullptr;
        // This can be non-null only if `enter_classes == true`.
        TypeEntry *most_nested_class = nullptr;

        // This is true when `name` is non-empty and doesn't contain separators (aka doesn't contain unknown scopes).
        bool unqualified_name_remains = false;
    };
    // Removes C++ or Python namespace qualifiers (depending on `python_style_name`).
    // Returns the namespace/class that they refer to (or the module itself if none), and the remaining (hopefully unqualified) name.
    // If `enter_classes == false`, will only enter namespaces and will stop at the first class (returning the class name as a part of `n`).
    [[nodiscard]] ApplyNamespacesResult ApplyNamespaces(pybind11::module_ &m, bool python_style_name, std::string_view name, bool enter_classes);


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

    // Removes cvref-qualifiers, pointers, smart pointers.
    template <typename T> struct StripToUnderlyingType {using type = T;};
    template <typename T> struct StripToUnderlyingType<const T> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T *> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T &> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<T &&> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T> struct StripToUnderlyingType<std::shared_ptr<T>> {using type = typename StripToUnderlyingType<T>::type;};
    template <typename T, typename D> struct StripToUnderlyingType<std::unique_ptr<T, D>> {using type = typename StripToUnderlyingType<T>::type;};

    // Simplifies the type, merging types that end up as the same python type.
    // Couldn't find a proper way of doing this, so this is an approximation. (`make_caster<T>::name` looked promising, but for classes it's just `%`, sad.).
    template <typename T> struct ToPybindSignatureTypeHelper {using type = T;};
    // The exact types don't really matter, here I'm just matching the Python's names, even though the actual precision is likely different.
    template <typename T> requires std::is_arithmetic_v<T> struct ToPybindSignatureTypeHelper<T> {using type = std::conditional<std::is_integral_v<T>, int, float>;};
    template <typename T> using ToPybindSignatureType = typename ToPybindSignatureTypeHelper<typename StripToUnderlyingType<T>::type>::type;

    // Detect `std::initializer_list`.
    template <typename T> struct IsStdInitializerList : std::false_type {};
    template <typename T> struct IsStdInitializerList<std::initializer_list<T>> : std::true_type {};

    // Converts `const T &` and `const T` to just `T`, otherwise leaves it unchanged.
    template <typename T> struct RemoveConstAndConstRefHelper {using type = T;};
    template <typename T> struct RemoveConstAndConstRefHelper<const T> {using type = T;};
    template <typename T> struct RemoveConstAndConstRefHelper<const T &> {using type = T;};
    template <typename T> using RemoveConstAndConstRef = typename RemoveConstAndConstRefHelper<T>::type;

    // This replaces `std::equality_comparable`, to correctly handle non-SFINAE-friendly types, such as `std::expected` (why?!).
    template <typename T> struct IsEqualityComparable : std::bool_constant<std::equality_comparable<T>> {};

    // ---

    // Replaces `pybind11::arg_v`.
    template <typename T>
    auto ParamWithDefaultArg(const char *name, T &&default_arg, const char *default_arg_str)
    {
        // This logic is only needed to emit nicer default argument strings.
        if constexpr (std::is_pointer_v<RemoveConstAndConstRef<T>> || std::is_null_pointer_v<RemoveConstAndConstRef<T>>)
        {
            // For pointers,
            std::string default_arg_view = default_arg_str;
            bool is_null = default_arg_view == "'0'" || default_arg_view == "'nullptr'";
            return pybind11::arg_v(name, std::forward<T>(default_arg), is_null ? "None" : default_arg_str);
        }
        else if constexpr (
            std::is_arithmetic_v<RemoveConstAndConstRef<T>> ||
            std::is_same_v<RemoveConstAndConstRef<T>, std::string> ||
            std::is_same_v<RemoveConstAndConstRef<T>, std::string_view>
        )
        {
            return pybind11::arg_v(name, std::forward<T>(default_arg)); // No custom string.
        }
        else
        {
            return pybind11::arg_v(name, std::forward<T>(default_arg), default_arg_str); // Leave the string as is.
        }
    }

    // ---

    // `spelling` must permanently remain alive.
    template <typename T>
    void RegisterTypeAlias(std::string_view spelling)
    {
        if constexpr (requires{requires sizeof(typename StripToUnderlyingType<T>::type) > 0;}) // If complete.
            RegisterTypeAliasLow(typeid(typename StripToUnderlyingType<T>::type), spelling);
    }

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
        [[nodiscard]] static decltype(auto) pybind_init(auto f, pybind11::handle &m, const char *n) {return f(m, n);}

        // The type name for pybind11. Normally don't need to override this.
        [[nodiscard]] static std::string cpp_type_name()
        {
            // Can't use the baked type name here, because then we often get name conflicts between TypedefWrapper names and this for the underlying type.
            return TypeidTypeName<T>();
        }

        // Which base classes we inherit from. Or in general, which types must be initialized before this one.
        // The return value should usually be obtained from calling `MakeBaseTypeids<...>()`.
        static std::unordered_set<MRBind::TypeIndex> base_typeids() {return {};}

        // Registers all members.
        // Usually must override this, unless you do something with `pybind_init` (see comment on it above).
        static void bind_members(pybind_type &c /*optional: , FuncAliasRegistrationFuncs *func_alias_registration_funcs*/) {(void)c;}
    };

    #if MRBIND_DEBUG
    namespace { // Need this to count the duplicate instantiations.
    #endif
    // Avoid this version, prefer the ones without `Direct`.
    template <typename T>
    struct RegisterOneTypeWithCustomBindingDirect
    {
        inline static const std::nullptr_t register_type = []{
            namespace pb11 = MRBind::pb11;
            using Traits = pb11::CustomTypeBinding<T>;
            using PybindType = typename Traits::pybind_type;
            using TypeStorage = pb11::SpecificPybindType<PybindType>;
            pb11::GetRegistry().type_entries.try_emplace(
                typeid(T),
                // Parsed?
                false,
                // Parent namespace. Currently we just use the global namespace.
                typeid(::_pb11_this_ns),
                // Comment.
                nullptr,
                // Set docstring?
                true,
                // C++ type name.
                Traits::cpp_type_name(),
                +[](ModuleOrClassRef m, const char *n) -> std::unique_ptr<pb11::BasicPybindType>
                {
                    return Traits::pybind_init(
                        [&](auto &&... params)
                        {
                            return std::make_unique<TypeStorage>(decltype(params)(params)...);
                        },
                        *m.handle, n
                    );
                },
                +[](pb11::BasicPybindType &b, TypeEntry::AddClassMembersState &state, FuncAliasRegistrationFuncs *func_alias_registration_funcs)
                {
                    if (state.pass_number == 0)
                    {
                        if constexpr (requires{Traits::bind_members(static_cast<TypeStorage &>(b).type, func_alias_registration_funcs);})
                            Traits::bind_members(static_cast<TypeStorage &>(b).type, func_alias_registration_funcs);
                        else
                            Traits::bind_members(static_cast<TypeStorage &>(b).type);
                    }
                },
                Traits::base_typeids()
            )
            #if MRBIND_DEBUG
            .first->second.num_redundant_nonparsed_binds++
            #endif
            ;
            return nullptr;
        }();
        /* Instantiate `register_type`. */
        static constexpr std::integral_constant<const std::nullptr_t *, &register_type> force_register_type{};
    };
    #if MRBIND_DEBUG
    } // namespace
    #endif

    // Like `RegisterOneTypeWithCustomBindingDirect<T>`, but does nothing if T doesn't have a custom binding for it.
    // Avoid this version, prefer the ones without `Direct`.
    template <typename T>
    struct RegisterOneTypeWithCustomBindingDirectIfApplicable {};
    template <typename T> requires HasCustomTypeBinding<T>
    struct RegisterOneTypeWithCustomBindingDirectIfApplicable<T> : RegisterOneTypeWithCustomBindingDirect<T> {};

    // This one calls `RegisterOneTypeWithCustomBindingDirect<...>` for several types.
    // Avoid this version, prefer the ones without `Direct`.
    MB_PB11_NO_WARN_ON_DUPLICATE_BASE(
    template <typename ...P>
    struct RegisterTypesWithCustomBindingDirectIfApplicable {};
    template <typename P0, typename ...P>
    struct RegisterTypesWithCustomBindingDirectIfApplicable<P0, P...> : RegisterOneTypeWithCustomBindingDirectIfApplicable<P0>, RegisterTypesWithCustomBindingDirectIfApplicable<P...> {};
    )


    // This is a customization point.
    // When something tries to register a custom type binding, this lets you instead attempt to register one or more other types.
    // This is useful e.g. when something tried to register `std::pair<A, B>`, so you can instead register `A` and `B` separately,
    //   so that the built-in `std::pair` support can use them. (Though in this case maybe we instead should instead have our own pair?)
    // When recursing, you should instead call `DecomposeTypeForRegistration`, not this directly.
    template <typename T>
    struct CustomizeDecomposingTypeForRegistration {using type = TypeList<T>;};

    // This is not a customization point.
    // This is the public interface for `CustomizeDecomposingTypeForRegistration`.
    template <typename T>
    using DecomposeTypeForRegistration = typename CustomizeDecomposingTypeForRegistration<typename StripToUnderlyingType<T>::type>::type;

    // THIS is the primary version you should be using. This one respects `DecomposeTypeForRegistration`.
    template <typename ...P>
    struct RegisterTypesWithCustomBindingIfApplicable : CatTypeLists<DecomposeTypeForRegistration<P>...>::template Apply<RegisterTypesWithCustomBindingDirectIfApplicable> {};

    // A helper for `MakeBaseTypeids()`, see below.
    template <typename ...P>
    struct TypeListToTypeidSet {static std::unordered_set<MRBind::TypeIndex> MakeSet() {return {typeid(P)...};}};

    // This is what custom bindings should return from their `base_typeids()`.
    // This automatically applies `DecomposeTypeForRegistration` to the types.
    template <typename ...P>
    [[nodiscard]] std::unordered_set<MRBind::TypeIndex> MakeBaseTypeids() {return CatTypeLists<DecomposeTypeForRegistration<P>...>::template Apply<TypeListToTypeidSet>::MakeSet();}

    // Use this as an additional base class for your `CustomTypeBinding<...>` specializations.
    template <typename ...P>
    #if MB_PB11_NO_REGISTER_TYPE_DEPS // Enabling this requires you to manually register the type dependencies of other types, but can improve build times.
    struct RegisterTypeDependencies {}; // A no-op.
    #else
    using RegisterTypeDependencies = RegisterTypesWithCustomBindingIfApplicable<P...>;
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
    struct ReturnTypeTraits
    {
        // Remove this when adding `Adjust()`. I don't check for `Adjust()` directly because that could silently fail if you get the signature wrong.
        using no_adjust = void;

        // Optional. When implementing this, don't forget to recursively call `AdjustReturnedValue()`!
        // static ?? Adjust(T &&);

        // Optional. Disable the whole function because of this return type.
        // using disables_func = void;

        // Optional. If added, then the container element adjustment will not sure this specialization.
        // using ignore_for_container_elems = void;
    };

    template <typename T>
    concept ReturnTypeNeedsAdjusting = !requires{typename ReturnTypeTraits<T>::no_adjust;};

    // Using `std::type_identity` to prevent `T` from being deduced, because the behavior for non-reference T and rvalue reference T can be different.
    template <typename T>
    [[nodiscard]] decltype(auto) AdjustReturnedValue(std::type_identity_t<T &&> value)
    {
        if constexpr (ReturnTypeNeedsAdjusting<T>)
            return ReturnTypeTraits<T>::Adjust(std::forward<T &&>(value));
        else if constexpr (std::is_reference_v<T>)
            return std::forward<T &&>(value);
        else
            return T(std::move(value)); // Really want the correct return type, so have to accept an extra move, I guess?
    }

    template <typename T>
    struct AdjustReturnType {using type = T;};
    template <ReturnTypeNeedsAdjusting T>
    struct AdjustReturnType<T> {using type = decltype(ReturnTypeTraits<T>::Adjust(std::declval<T &&>()));};

    // ---

    // A helper for implementing `ReturnTypeTraits`, for types like `std::optional` and `tl::expected`.
    template <typename T>
    struct OptionalReturnType
    {
        // There's complex logic at play here. Builtin types have to use `std::unique_ptr` because that can be `.release()`d, which we have to do
        //   because Pybind doesn't like builtin types in holders (I believe?).
        // Non-builtin types could use `std::unique_ptr` as well, but `std::shared_ptr` is better, because when we adjust a whole container,
        //   it's nice to be able to have the `std::shared_ptr`s directly as the elements, while for builtin types we have to convert the `std::unique_ptr`s
        //   to `std::optional`s.
        using type = std::conditional_t<IsPybindBuiltinType<T>::value, std::unique_ptr<T>, std::shared_ptr<T>>;
        [[nodiscard]] static type make(T &&value)
        {
            if constexpr (IsPybindBuiltinType<T>::value)
                return std::make_unique<T>(std::move(value));
            else
                return std::make_shared<T>(std::move(value));
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

    // Specialize `ParamTraits` for your custom types.
    //
    // Specialize `ParamTraitsLow` only here in this file, for high-level type groups.
    //   Those aren't allowed to change the parameter type, except for cvref/ptr qualifiers.

    // (Do we need this distinction anymore? Consider merging the two...)

    template <typename T>
    struct ParamTraits
    {
        // Optional. Disable the whole function because of this parameter.
        // using disables_func = void;

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

        // Optional. If specified, registers this function late, which gives it less priority during overload resolution.
        // using register_late = void;
    };

    template <typename T>
    struct ParamTraitsLow : ParamTraits<T>
    {};

    // Ban refs to array types, since those don't work anyway.
    // Non-const refs to builtin types also don't work, but we don't disable them here, and instead add the support with a hack in `output_params_of_builtin_types`.
    template <typename T>
    requires std::is_reference_v<T> && std::is_array_v<std::remove_reference_t<T>>
    struct ParamTraitsLow<T>
    {
        using disables_func = void; // Disable the whole function because of this parameter.
    };

    // Adjust rvalue references to copyable types to passing by value and then copying. pybind11 doesn't like rvalue references.
    template <typename T>
    requires std::is_rvalue_reference_v<T> && std::is_copy_constructible_v<std::remove_reference_t<T>>
    struct ParamTraitsLow<T>
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
    struct ParamTraitsLow<T>
    {
        using disables_func = void;
    };

    // Ban functions with `std::initializer_list` parameters.
    // In theory we could support those by constructing those in a non-portable manner.
    template <typename T> requires IsStdInitializerList<std::remove_cvref_t<T>>::value
    struct ParamTraitsLow<T>
    {
        using disables_func = void; // Disable the whole function because of this parameter.
    };

    // ---

    // Decays the parameter type as spelled in the declaration to the actual type.
    // I.e. decays arrays and functions to pointers, but doesn't touch references.
    template <typename T>
    using DecayToTrueParamType = std::conditional_t<std::is_array_v<T> || std::is_function_v<T>, std::decay_t<T>, T>;

    template <typename T>
    concept ParamTypeRequiresAdjustment = requires{typename ParamTraitsLow<T>::adjusted_param_type;};

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
        using type = typename ParamTraitsLow<T>::adjusted_param_type;
    };
    template <typename T>
    using AdjustedParamType = typename AdjustedParamTypeHelper<DecayToTrueParamType<T>>::type;

    // Extracts `unadjust_param_extra_param` from the parameter's traits, or `std::nullptr_t` if none.
    template <typename T>
    struct ParamUnadjusterExtraParam {using type = std::nullptr_t;};
    template <typename T> requires requires{typename ParamTraitsLow<T>::unadjust_param_extra_param;}
    struct ParamUnadjusterExtraParam<T> {using type = typename ParamTraitsLow<T>::unadjust_param_extra_param;};

    // Extract `gil_handling` from parameter's traits, or default to `neutral` if not specified.
    template <typename T>
    struct DefaultParamGilHandling : std::integral_constant<GilHandling, GilHandling::neutral> {};
    template <typename T> requires requires{ParamTraitsLow<T>::gil_handling;}
    struct DefaultParamGilHandling<T> : std::integral_constant<GilHandling, ParamTraitsLow<T>::gil_handling> {};

    // This is the final GIL handling for this parameter type. This is a customization point!
    template <typename T>
    struct ParamGilHandling : DefaultParamGilHandling<T> {};

    // Whether this parameter type requires that function to be registered late, to give it less priority during overload resolution.
    template <typename T>
    concept ParamTypeRequiresLateFuncRegistration = requires{typename ParamTraitsLow<T>::register_late;};

    // Converts from `AdjustedParamType<T>` back to `T`.
    template <typename T>
    [[nodiscard]] T UnadjustParam(AdjustedParamType<T> &&param, typename ParamUnadjusterExtraParam<T>::type &&extra = {})
    {
        if constexpr (ParamTypeRequiresAdjustment<T>)
        {
            if constexpr (std::is_null_pointer_v<typename ParamUnadjusterExtraParam<T>::type>)
                return ParamTraitsLow<T>::UnadjustParam(std::forward<AdjustedParamType<T>>(param));
            else
                return ParamTraitsLow<T>::UnadjustParam(std::forward<AdjustedParamType<T>>(param), std::move(extra));
        }
        else
        {
            return std::forward<T>(param);
        }
    }

    // ---

    // If this is specialized to true, functions with this return type (as determined BEFORE adjustement) will be skipped in the bindings.
    template <typename T>
    struct IgnoreFuncsWithReturnType : std::false_type {};

    // Whether having a parameter of type `T` should exclude the whole function from the binding.
    template <typename T>
    concept ParamTypeDisablesWholeFunction = requires{typename ParamTraitsLow<T>::disables_func;};

    // ---

    // Some `ReturnTypeTraits` specializations:

    // Adjust `std::unique_ptr` to `std::shared_ptr`, when returning it by value. Only when it points to a parsed class.
    // For some reason pybind11 crashes when the holder type is set to `shared_ptr` and you return a `unique_ptr`.
    // (When the reverse happens it also crashes, but in that case no adjustment can help us, so instead we use a `shared_ptr` holder and adjust `unique_ptr`.)
    template <typename T, typename D> requires (!IsPybindBuiltinType<T>::value)
    struct ReturnTypeTraits<std::unique_ptr<T, D>> {static std::shared_ptr<T> Adjust(std::unique_ptr<T, D> &&src) {return std::move(src);}};
    // When returning a REFERENCE to `std::unique_ptr` (to a parsed class), just replace it with a raw pointer.
    // This one was necessary for `tl::expected<T,U>` bindings, where if `T` is a `unique_ptr`, `.value()` returns a reference to it.
    template <typename T> requires std::is_reference_v<T> && IsUniquePtr<std::remove_cvref_t<T>>::value && (!IsPybindBuiltinType<typename std::remove_cvref_t<T>::element_type>::value)
    struct ReturnTypeTraits<T> {static auto Adjust(T &&src) {return src.get();}};

    // Some code to adjust containers recursively:

    template <typename T>
    struct ContainerElemTypeTraits
    {
        using adjusted_type = T;
        static constexpr bool needs_adjustment = false;
        static T Adjust(T &&src) {return std::forward<T>(src);} // This can move if we're returning by value, that's intentional.
    };
    // Thes specialization applies the normal return type adjustment.
    // The only reason we have this specialization at all (instead of pasting the contents into the primary template)
    //   is to be able to disable this behavior when `::ignore_for_container_elems` is defined. We need this e.g. to avoid adjusting `vector<expected<T,U>>`,
    //   which is bad because it would try to dereference all `expected`s immediately.
    template <ReturnTypeNeedsAdjusting T> requires(!requires{typename ReturnTypeTraits<T>::ignore_for_container_elems;})
    struct ContainerElemTypeTraits<T>
    {
        using adjusted_type = typename AdjustReturnType<T>::type;
        static constexpr bool needs_adjustment = true;
        static decltype(auto) Adjust(T &&src) {return AdjustReturnedValue<T>(std::forward<T>(src));}
    };
    // Need to convert `std::unique_ptr` to `std::optional`.
    template <typename T, typename D> requires std::movable<T>
    struct ContainerElemTypeTraits<std::unique_ptr<T,D>>
    {
        using adjusted_type = std::optional<T>;
        static constexpr bool needs_adjustment = true;
        static std::optional<T> Adjust(T &&src)
        {
            std::optional<T> ret;
            if (src)
            {
                ret = std::make_optional(*src);
                src = {};
            }
            return ret;
        }
    };

    template <typename T>
    concept ContainerElemTypeNeedsAdjusting = ContainerElemTypeTraits<T>::needs_adjustment;

    // Given a container ELEMENT type (not the whole container!), adjusts it to a better type.
    template <typename T>
    using AdjustContainerElemType = typename ContainerElemTypeTraits<T>::adjusted_type;

    // Adjust containers recursively:

    // Non-map-like:
    template <IsRebindableNonMapContainer T> requires ContainerElemTypeNeedsAdjusting<typename T::value_type>
    struct ReturnTypeTraits<T>
    {
        static auto Adjust(T &&src)
        {
            RebindContainer<T, AdjustContainerElemType<typename T::value_type>> ret;
            if constexpr (requires(std::size_t cap){ret.reserve(cap);})
                ret.reserve(src.size());
            for (auto &&elem : src)
            {
                if constexpr (requires(typename decltype(ret)::value_type &&p){ret.push_back(std::move(p));})
                    ret.push_back(ContainerElemTypeTraits<typename T::value_type>::Adjust(std::move(elem)));
                else
                    ret.insert   (ContainerElemTypeTraits<typename T::value_type>::Adjust(std::move(elem)));
            }
            return ret;
        }
    };
    // Map-like.
    // For now we only touch the mapped type, as opposed to the key type, primarily to avoid dealing the keys being const.
    // Yes, we could `.extract()` to get a mutable reference to it, but while standard `.extract()` doesn't invalidate other iterators,
    //   it might invalidate them for non-standard maps, or they might not have such function in the first place.
    // In any case, we don't seem to need key adjustments for anything right now.
    // If you decide to change this, don't forget to go over the custom bindings for all containers,
    //   and add `AdjustContainerElemType<...>` to the key template parameter of `RegisterTypesWithCustomBindingIfApplicable<...>`.
    template <IsRebindableMapContainer T> requires ContainerElemTypeNeedsAdjusting<typename T::mapped_type>
    struct ReturnTypeTraits<T>
    {
        static auto Adjust(T &&src)
        {
            RebindContainer<T, typename T::key_type, AdjustContainerElemType<typename T::mapped_type>> ret;
            if constexpr (requires(std::size_t cap){ret.reserve(cap);})
                ret.reserve(src.size());
            for (auto &&elem : src)
            {
                ret.try_emplace(
                    elem.first, // Ugh, a copy! See the comment above.
                    ContainerElemTypeTraits<typename T::mapped_type>::Adjust(std::move(elem.second))
                );
            }
            return ret;
        }
    };

    // ---

    // If this is specialized to true, fields with this type will be skipped in the bindings.
    template <typename T>
    struct IgnoreFieldsWithType : std::false_type {};

    // ---

    // See `FieldSetterKeepAlive` below. This is not a customization point, but `FieldSetterKeepAlive` is.
    template <typename T>
    struct DefaultFieldSetterKeepAlive : std::false_type {};

    // If this is specialized to true, assigning something to this field will keep that object alive as long as the field exists.
    // This is a customization point.
    template <typename T>
    struct FieldSetterKeepAlive : DefaultFieldSetterKeepAlive<T> {};

    // Always keep alive for pointers.
    template <typename T>
    struct DefaultFieldSetterKeepAlive<T *> : std::true_type {};

    // ---

    // MB_REGISTER_TYPE_... use those:

    template <typename T>
    struct RegisterReturnType {};
    template <typename T> requires (!IgnoreFuncsWithReturnType<T>::value)
    struct RegisterReturnType<T> : RegisterTypesWithCustomBindingIfApplicable<typename AdjustReturnType<T>::type> {};

    template <typename T>
    struct RegisterParamType {};
    template <typename T> requires (!ParamTypeDisablesWholeFunction<DecayToTrueParamType<T>>)
    struct RegisterParamType<T> : RegisterTypesWithCustomBindingIfApplicable<AdjustedParamType<T>> {};

    template <typename T>
    struct RegisterFieldType : RegisterReturnType<const T &>, RegisterParamType<const T &> {};

    // ---

    template <typename T>
    struct CrashingDeleter
    {
        void operator()(T *)
        {
            CriticalError("Trying to delete a type with a private destructor: " + std::string(TypeidTypeName<T>()));
        }
    };

    // Selects an appropriate pybind11 holder type for `T`. We REALLY don't want to use `std::unique_ptr` here,
    // because if you then try to return a `std::shared_ptr`, pybind will try to steal ownership from it, and then crash with a double-free (better test with ASAN).
    template <typename T>
    struct SelectPybindHolderHelper {using type = std::shared_ptr<T>;};
    // Here we just need some holder that compiles. This one will crash if actually destroyed, so using `std::unique_ptr` here doesn't matter.
    template <typename T> requires (!std::is_destructible_v<T>)
    struct SelectPybindHolderHelper<T> {using type = std::unique_ptr<T, CrashingDeleter<T>>;};
    template <typename T>
    using SelectPybindHolder = typename SelectPybindHolderHelper<T>::type;

    // ---

    // Is `T` const for the purposes of class properties (aka fields).
    template <typename T>
    concept PropertyTypeIsConst =
        // If this is a const member (bad!) or a const reference member (also bad).
        std::is_const_v<T> ||
        // Pybind11 will try to assign from `const T &`.
        !pybind11::detail::is_copy_assignable<T>::value;

    // Whether we can bind fields of type `T`.
    template <typename T>
    concept IsValidFieldType = \
        !IgnoreFieldsWithType<T>::value && \
        !IgnoreFuncsWithReturnType<const T &>::value && \
        !ParamTypeDisablesWholeFunction<const T &> &&
        !std::is_void_v<typename AdjustReturnType<const T &>::type>;

    namespace MemberVarDetails
    {
        template <typename ClassType, typename T, auto GetterFunc>
        decltype(auto) Getter(const ClassType &o)
        {
            return (AdjustReturnedValue<const T &>)(GetterFunc(const_cast<ClassType &>(o)));
        }

        template <typename T, auto Ptr>
        decltype(auto) GetterStatic(const pybind11::object &)
        {
            return (AdjustReturnedValue<const T &>)(*Ptr);
        }

        template <typename ClassType, typename T, auto GetterFunc>
        decltype(auto) Setter(ClassType &obj, AdjustedParamType<const T &> value)
        {
            GetterFunc(obj) = (UnadjustParam<const T &>)(std::forward<AdjustedParamType<const T &>>(value));
        }

        template <typename T, auto Ptr>
        decltype(auto) SetterStatic(const pybind11::object &, AdjustedParamType<const T &> value)
        {
            *Ptr = (UnadjustParam<const T &>)(std::forward<AdjustedParamType<const T &>>(value));
        }

        template <typename T>
        auto MaybeAddKeepAlive(auto setter)
        {
            if constexpr (FieldSetterKeepAlive<T>::value)
                return pybind11::cpp_function(setter, pybind11::keep_alive<1, 2>());
            else
                return setter;
        }
    }

    template <auto Getter, typename T>
    void TryAddMemberVar(auto &c, const char *name, auto &&... data)
    {
        if constexpr (IsValidFieldType<T>)
        {
            using ClassType = typename std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.

            std::string py_name = ToPythonName(name);

            // Using pybind11 "properties" here because the member can be a reference, and you can't form a pointer-to-member to those.
            if constexpr (PropertyTypeIsConst<std::remove_reference_t<T>>)
                c.def_property_readonly(py_name.c_str(), MemberVarDetails::Getter<ClassType, T, Getter>, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property(py_name.c_str(), MemberVarDetails::Getter<ClassType, T, Getter>, MemberVarDetails::MaybeAddKeepAlive<T>(MemberVarDetails::Setter<ClassType, T, Getter>), pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
    }

    template <auto Ptr, typename T>
    void TryAddMemberVarStatic(auto &c, const char *name, auto &&... data)
    {
        if constexpr (IsValidFieldType<T>)
        {
            // Interestingly, passing a lambda getter instead of a pointer to this function leads
            // to weird linking errors (`relocation refers to a discarded section`, last tested on `clang++-18 -fclang-abi-compat=17` on Ubuntu 22.04,
            // only happens in the entire MeshLib and not in test programs).

            std::string py_name = ToPythonName(name);

            if constexpr (PropertyTypeIsConst<std::remove_reference_t<T>>)
                c.def_property_readonly_static(py_name.c_str(), MemberVarDetails::GetterStatic<T, Ptr>, pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
            else
                c.def_property_static(py_name.c_str(), MemberVarDetails::GetterStatic<T, Ptr>, MemberVarDetails::MaybeAddKeepAlive<T>(MemberVarDetails::SetterStatic<T, Ptr>), pybind11::return_value_policy::reference_internal, decltype(data)(data)...);
        }
    }

    enum class FuncKind
    {
        nonmember_or_static = 1 << 0,
        member_nonstatic    = 1 << 1,
        conv_op             = 1 << 2 | member_nonstatic,
        conv_op_explicit    = 1 << 3 | conv_op,
    };
    MRBIND_FLAG_OPERATORS(FuncKind)

    // This is the default argument for `TryAddFunc()`'s template parameter `DataFunc`. See the comment on that for details.
    struct IdentityDataFunc
    {
        void operator()(auto f) const {f();}
    };

    // How many passes `TryAddFunc()` needs. Currently there are three passes:
    // 0. adjust overloaded function names
    // 1. register most functions
    // 2. register delayed functions
    inline constexpr int num_add_func_passes = 3;


    template <CopyMoveKind CopyMove, int NumDefaultArgs, bool IsExplicit, typename ...P>
    void TryAddCtor(auto &c, TryAddFuncScopeState *scope_state, int pass_number, auto &&... data)
    {
        using T = typename std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.
        if constexpr (std::is_abstract_v<T>)
            ; // Reject abstract classes.
        else if constexpr ((ParamTypeDisablesWholeFunction<DecayToTrueParamType<P>> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else if constexpr (CopyMove == CopyMoveKind::move)
            ; // Reject move constructors. They just appear as a duplicate of the copy constructor in the `help(...)`, and other than that don't do anything.
        else
        {
            // This currently does nothing in the first pass, which is something `TryAddFunc()` relies on when injecting new constructors for conversion operators.

            static constexpr int desired_pass_number =
                // The copy ctors are delayed to pass 2 for a convoluted reason. We'd do the same to move ctors, but they are all disabled by a condition
                //   above anyway.
                // We have class `MR::Mesh` that's implicitly convertible to `MR::MeshPart`, because the latter has a ctor from `(const Mesh &)`.
                // If you then proceed to do `a = module.MeshPart(module.makeSomeMesh())`, if the copy ctor is registered first, this calls the copy ctor
                //   instead of the one taking a mesh, because Pybind doesn't a proper overload resolution, and just tries the overloads in the registration
                //   order. This seems to be able to call the copy ctor because of the implicit conversion. So the result is one extra copy.
                // The reason why this copy ctor call is bad, other than performance, is that we've made it so that `keep_alive` doesn't propagate
                //   through copy ctors, out of general sanity. Which results in `keep_alive` silently being ignored in this case.
                // But if we delay the copy ctors, they no longer interfere.
                // The parser does currently sort the members, but it sorts copy ctors before user ctors, because this looks better in C. We could introduce
                //   a flag to sort them after, but I believe this would be confusing to the user, since forgetting this flag would silently cause strange
                //   dangling issues. So instead we delay the copy ctors here.
                // And since they get emitted first by the parser, they'll happen in the delayed pass before user ctors, which is exactly what we want,
                //   since delayed user ctors are usually delayed because they have catch-all `pybind11::object` parameters, so it's good to have them
                //   after the copy ctors.
                // But note that this fix isn't of course a full solution. If the user manually calls the copy ctor, the copy will lose the `keep_alive`s,
                //   (since we explicitly opted out of lifetime-extending the copy ctor parameters, as mentioned above, which would be dumb for obvious reasons).
                //   which I don't see an easy fix for.
                CopyMove == CopyMoveKind::copy ||
                (ParamTypeRequiresLateFuncRegistration<DecayToTrueParamType<P>> || ...) ? 2 : 1;
            if (pass_number != desired_pass_number && pass_number >= 0)
                return;

            auto lambda = [](AdjustedParamType<P> ...params) -> decltype(auto)
            {
                // Note `new` here! Pybind still frees the object automatically.
                // The only effect this causes is eliminating the extra move that otherwise occurs when creating an object.
                // This extra move only appears when using `.def(pybind11::init([](...){...}))` and not `.def(pybind11::init<...>())`,
                // but the latter is not an option for us because it prevents us from adjusting the parameter types.
                return new T((UnadjustParam<DecayToTrueParamType<P>>)(std::forward<AdjustedParamType<P>>(params))...);
            };

            if (scope_state)
            {
                if constexpr (sizeof...(P) == NumDefaultArgs)
                    scope_state->have_default_ctor = true;
                else if constexpr (CopyMove == CopyMoveKind::copy)
                    scope_state->have_copy_ctor = true;
            }

            constexpr GilHandling gil_handling = CombineGilHandling<ParamGilHandling<P>::value...>::value;
            static_assert(gil_handling != GilHandling::invalid, "Parameter types of this function give conflicting requirements on what to do with the global interpreter lock.");

            (MapFilterPack<P...>)(
                [&]<int I, typename U>()
                {
                    // Keep alive reference arguments as long as `this` is alive, in case the class stores them.
                    // This prevents dangling references. Yes, we do it even for const references! (See e.g. `MR::FreeFormDeformer`.)
                    // Reject references to the same class though, to avoid the copy constructors. (Just in case also reject refs to base classes.)
                    if constexpr (
                        (std::is_lvalue_reference_v<AdjustedParamType<U>> && !std::is_base_of_v<std::remove_cvref_t<AdjustedParamType<U>>, T>) ||
                        // And the same for pointers:
                        std::is_pointer_v<AdjustedParamType<U>>
                    )
                    {
                        return pybind11::keep_alive<1, I+2>();
                    }
                },
                [&](auto &&... keepalives)
                {
                    if constexpr (gil_handling == GilHandling::must_unlock || gil_handling == GilHandling::prefer_unlock)
                        c.def(pybind11::init(+lambda), decltype(data)(data)..., decltype(keepalives)(keepalives)..., pybind11::call_guard<pybind11::gil_scoped_release>());
                    else
                        c.def(pybind11::init(+lambda), decltype(data)(data)..., decltype(keepalives)(keepalives)...);
                }
            );

            // Register this ctor as an implicit conversion if it's not explicit, has at least one parameter,
            // and has at most one parameter without a default argument.
            if constexpr (!IsExplicit && sizeof...(P) > 0 && sizeof...(P) - NumDefaultArgs <= 1)
            {
                pybind11::implicitly_convertible<std::remove_cvref_t<FirstType<DecayToTrueParamType<P>...>>, T>();
            }
        }
    }

    template <typename ...P>
    void TryAddAggregateCtor(auto &c, auto &&... data)
    {
        if constexpr ((pybind11::detail::is_copy_constructible<P>::value && ...))
        {
            (TryAddCtor<MRBind::pb11::CopyMoveKind::none, 0, true, const P &...>)(c, nullptr, -1, decltype(data)(data)...);
        }
    }


    // Member or non-member function.
    // Normally is used in several passes, but in simple cases it can be used in a single pass (see `TryAddFuncSimple()`).
    template <FuncKind Kind, auto F, typename ...P, typename DataFunc>
    void TryAddFunc(
        // `ModuleOrClassRef` for `Kind == nonmember_or_static`.
        // `class_` otherwise.
        auto &c,
        // Only used for overloaded operators, can be null otherwise. Accepts our own operator names, such as `_Plus`.
        // Only used during the first pass.
        const char *simplename,
        // The main name.
        // Only used during the first pass.
        const char *fullname,
        // Same name, but with template arguments added, if any.
        // Only used during the SECOND pass.
        const char *fullname_with_template_args,
        // Opaque string to compare python signatures for equality.
        // Only used during the first pass.
        std::initializer_list<MRBind::TypeIndex> python_signature,
        TryAddFuncState *state,
        TryAddFuncScopeState *scope_state,
        // The pass number, from 0 to `num_add_func_passes-1` inclusive. (Unless `{,scope_}state` is null, then this is ignored.)
        int pass_number,
        // If non-null, this is populated.
        FuncAliasRegistrationFuncs *alias_registration_funcs,
        // This is either `IdentityDataFunc{}` or a lambda `(auto f) -> void`.
        // The lambda must call `f` exactly once with the additional arguments that you want to pass to Pybind, such as the comment string,
        //   `pybind11::arg(...)` objects, and so on. The reason why we do this is because we have to store those objects for later use
        //   (see `FuncAliasRegistrationFuncs` for why we need it), and a lot of this stuff is prone to dangling (e.g. `pybind11::arg` stores
        //   a pointer to the argument name, or even just the comment string can't be captured by the lambda directly without dangling,
        //   unless you cast it to `std::string`, and so on).
        // NOTE: This currently must be stateless, we'll default-construct our own `DataFunc` when needed.
        //   This is done to reduce the compilation times.
        DataFunc &&
    )
    {
        if constexpr ((ParamTypeDisablesWholeFunction<DecayToTrueParamType<P>> || ...))
            ; // This function has a parameter of a weird type that we can't support.
        else
        {
            // The return type in the C++ code.
            using ReturnType = std::invoke_result_t<decltype(F), DecayToTrueParamType<P> &&...>; // `DecayToTrueParamType` is not adjusted.

            if constexpr (!IgnoreFuncsWithReturnType<ReturnType>::value)
            {
                // The return type after our custom adjustments.
                using ReturnTypeAdjusted = typename AdjustReturnType<ReturnType>::type;

                // In theory we could just check for any `std::unique_ptr` here, because non-builtins should be in a `std::shared_ptr` at this point.
                // But that might be false in some edge cases, it's better to be safe.
                static constexpr bool returns_unique_ptr_to_builtin = IsUniquePtrToBuiltinType<ReturnTypeAdjusted>::value;
                static_assert(
                    IsUniquePtrToBuiltinType<std::remove_cvref_t<ReturnTypeAdjusted>>::value <= returns_unique_ptr_to_builtin,
                    "Why are we returning `std::unique_ptr` by reference? This shouldn't be possible, it should've been adjusted to `std::shared_ptr`."
                );

                static constexpr auto lambda = [](AdjustedParamType<P> ...params) -> decltype(auto)
                {
                    #define INVOKE_FUNC std::invoke(F, (UnadjustParam<DecayToTrueParamType<P>>)(std::forward<AdjustedParamType<P>>(params))...)

                    if constexpr (std::is_void_v<ReturnType>) // Sic! Not `ReturnTypeAdjusted`. This matters e.g. for `tl::expected<void, ...>`.
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

                // This further modifies `ReturnTypeAdjusted` by adjusting `unique_ptr` to builtin types to plain pointers (releasing the ownership,
                //   the memory is then freed by `pybind11::return_value_policy::take_ownership` below).
                using LambdaReturnTypeAdjustedWrapped = decltype(lambda(std::declval<AdjustedParamType<P>>()...));

                // This further strips pointers and refs. Not smart pointers though.
                using LambdaReturnTypeAdjustedWrapperPtrRefStripped = typename RemovePointersRefs<LambdaReturnTypeAdjustedWrapped>::type;

                // I thought `return_value_policy::autmatic_reference` was supposed to do the same thing, but for some reason it doesn't.
                // E.g. it refuses (at runtime) to call functions returning references to non-movable classes.
                static constexpr pybind11::return_value_policy ret_policy =
                    returns_unique_ptr_to_builtin ?
                        pybind11::return_value_policy::take_ownership :
                    (std::is_pointer_v<LambdaReturnTypeAdjustedWrapped> || std::is_reference_v<LambdaReturnTypeAdjustedWrapped>) &&
                    // This is important. If we return a const reference to a copyable type, we actually COPY it.
                    // Because otherwise pybind11 casts away constness and propagates changes through that reference!
                    !std::is_const_v<LambdaReturnTypeAdjustedWrapperPtrRefStripped>
                        ? bool(Kind & FuncKind::member_nonstatic) ? pybind11::return_value_policy::reference_internal : pybind11::return_value_policy::reference :
                    // This is important too, otherwise pybind11 will const_cast and then move!
                    std::is_const_v<LambdaReturnTypeAdjustedWrapperPtrRefStripped> ? pybind11::return_value_policy::copy
                    : pybind11::return_value_policy::move;

                // Make sure this isn't a hard error. We add our own specializations, and we don't want them to be ambiguous.
                (void)pybind11::detail::is_copy_constructible<std::remove_cv_t<LambdaReturnTypeAdjustedWrapperPtrRefStripped>>::value;
                (void)pybind11::detail::is_copy_assignable<std::remove_cv_t<LambdaReturnTypeAdjustedWrapperPtrRefStripped>>::value;

                // First pass.
                if (state && pass_number == 0)
                {
                    const char *op = AdjustOverloadedOperatorName(simplename, sizeof...(P) == 1);
                    if (op != simplename)
                    {
                        state->is_overloaded_operator = true;
                        state->python_name = op;
                    }
                    else
                    {
                        state->python_name = ToPythonName(fullname);

                        TryAddFuncScopeState::OverloadEntry &overload = scope_state->overloads[state->python_name];
                        overload.num_overloads++;
                        overload.signatures.insert(python_signature);
                    }
                    return;
                }

                // Second pass starts here...

                // If this is a conversion operator that returns a known class by value, inject it into that class by value...
                // This is being tested BEFORE validating the pass number to let the constructor choose the pass number that it wants.
                // This probably never matters in practice though.
                if constexpr (
                    (Kind & FuncKind::conv_op) == FuncKind::conv_op &&
                    std::is_class_v<ReturnTypeAdjusted> // Implies `!std::is_reference_v<ReturnTypeAdjusted>`.
                )
                {
                    auto &r = GetRegistry();
                    if (auto iter = r.type_entries.find(typeid(ReturnTypeAdjusted)); iter != r.type_entries.end())
                    {
                        // We don't HAVE to check is-parsed-ness, but it's a good idea because non-parsed types can be shared between modules,
                        //   and if a type is shared, I'm not immediately sure how to inject constructors into it, if all I have
                        //   is a `.typeinfo_from_other_module`.
                        // It could be possible though, I didn't dig too deep.
                        if (iter->second.is_parsed)
                        {
                            if (!iter->second.pybind_type)
                                throw std::logic_error("Why does a parsed type not have `pybind_type` set?");

                            DataFunc{}([&](auto &&... data)
                            {
                                using ThisClass = typename std::remove_cvref_t<decltype(c)>::type; // Extract the target class type.

                                // A hack!
                                // We can't really figure out the correct template arguments for `pybind11::class_<...>` here.
                                // We know the class and the holder, but after that everything (i.e. the base classes) is a mystery.
                                // It seems we don't really need to know them to define the constructor, so whatever? Hopefully this works.
                                auto &target_type = reinterpret_cast<SpecificPybindType<pybind11::class_<ReturnTypeAdjusted, SelectPybindHolder<ReturnTypeAdjusted> /*, ??*/>> &>(*iter->second.pybind_type);

                                TryAddCtor<
                                    CopyMoveKind::none,
                                    /*NumDefaultArgs:*/ 0,
                                    /*IsExplicit:*/ (Kind & FuncKind::conv_op_explicit) == FuncKind::conv_op_explicit,
                                    /*Params:*/ ThisClass
                                >(
                                    target_type.type,
                                    scope_state,
                                    pass_number,
                                    data...
                                );
                            });

                            return;
                        }
                    }
                }


                // Check the pass number.
                static constexpr int desired_pass_number = (ParamTypeRequiresLateFuncRegistration<DecayToTrueParamType<P>> || ...) ? 2 : 1;
                if (pass_number != desired_pass_number && pass_number >= 0)
                    return;

                const char *final_name = state ? state->python_name.c_str() : fullname;

                { // Fix the python name to avoid ambiguous overloads...
                    if (state && !state->is_overloaded_operator)
                    {
                        TryAddFuncScopeState::OverloadEntry &overload = scope_state->overloads.at(state->python_name);
                        if (overload.num_overloads > overload.signatures.size())
                        {
                            // Those overloads are ambiguous, adjust the name.
                            state->python_name = ToPythonName(fullname_with_template_args);
                            final_name = state->python_name.c_str();
                        }
                    }
                }

                // This is true for static and non-static member functions, but false for free functions and friend functions.
                static constexpr bool is_class_member = !std::is_same_v<decltype(c), ModuleOrClassRef &>;

                // If this is an overloaded operator defined outside of a class (or as a `friend`), inject it into
                // the target class, instead of emitting as a global function.
                if constexpr (!is_class_member && sizeof...(P) >= 1)
                {
                    if (state->is_overloaded_operator)
                    {
                        auto &r = GetRegistry();

                        DataFunc{}([&](auto&&, auto &&...trimmed_data)
                        {
                            using FirstParam = FirstType<DecayToTrueParamType<P>...>;

                            if (auto iter = r.type_entries.find(typeid(FirstParam)); iter != r.type_entries.end())
                            {
                                // Try injecting into the type of the first operand.
                                iter->second.pybind_type->AddExtraMethod(final_name, +lambda, ret_policy, decltype(trimmed_data)(trimmed_data)...);
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
                                        iter->second.pybind_type->AddExtraMethod(("__r" + std::string(final_name + 2)).c_str(), +symmetric_lambda, ret_policy, decltype(trimmed_data)(trimmed_data)...);
                                    }
                                }
                            }
                        });

                        // Return unconditionally. If we couldn't inject this operator into one of the arguments' types, just drop it.
                        return;
                    }
                }

                constexpr GilHandling gil_handling = CombineGilHandling<ParamGilHandling<P>::value...>::value;
                static_assert(gil_handling != GilHandling::invalid, "Parameter types of this function give conflicting requirements on what to do with the global interpreter lock.");

                auto registration_lambda = [](ModuleOrClassRef m, const char *name)
                {
                    using C = std::remove_reference_t<decltype(c)>;

                    // The `call_guard<gil_scoped_release>` fixes a deadlock when calling python callbacks from something other than the main thread.
                    // The documentation says it's only legal if you "don't access python objects" from the function, which sounds right.
                    // When our functions then call python lambdas, those lambdas will automatically take the interpreter lock.
                    // And when we call C++ lambdas, a different mechanism is used to force pybind11 to avoid adding code to them to take the interpreter lock.
                    // We need this different mechanism as an optimization, because we sometimes invoke C++ lambdas (that were passed through python)
                    // in multithreaded contexts, and we don't want them to be locking mutexes unless absolutely necessary.
                    if constexpr (gil_handling == GilHandling::must_unlock || gil_handling == GilHandling::prefer_unlock)
                    {
                        // Sus downcasts galore!
                        if constexpr (bool(Kind & FuncKind::member_nonstatic))
                            DataFunc{}([&](auto &&... args){ static_cast<C *>(m.handle)->def       (name, +lambda, ret_policy, decltype(args)(args)..., pybind11::call_guard<pybind11::gil_scoped_release>()); });
                        else
                            DataFunc{}([&](auto &&... args){ m.                          AddFunc   (name, +lambda, ret_policy, decltype(args)(args)..., pybind11::call_guard<pybind11::gil_scoped_release>()); });
                    }
                    else
                    {
                        if constexpr (bool(Kind & FuncKind::member_nonstatic))
                            DataFunc{}([&](auto &&... args){ static_cast<C *>(m.handle)->def       (name, +lambda, ret_policy, decltype(args)(args)...); });
                        else
                            DataFunc{}([&](auto &&... args){ m.                          AddFunc   (name, +lambda, ret_policy, decltype(args)(args)...); });
                    }
                };
                registration_lambda(c, final_name);

                // Register the alias registration func.
                if (alias_registration_funcs)
                    alias_registration_funcs->funcs.try_emplace(final_name).first->second.push_back(+registration_lambda);
            }
        }
    }

    // This version doesn't understand overloaded operators (unless you pass the python-style name directly), and doesn't resolve ambiguous overloads.
    // `fullname` is used as is, make sure it doesn't need adjusting.
    template <FuncKind Kind, auto F, typename ...P, typename DataFunc = IdentityDataFunc>
    void TryAddFuncSimple(
        auto &c,
        const char *fullname,
        // Optional:
        FuncAliasRegistrationFuncs *alias_registration_funcs = nullptr,
        DataFunc &&data_func = {}
    )
    {
        (TryAddFunc<Kind, F, P...>)(c, nullptr, fullname, nullptr, {}, nullptr, nullptr, -1, alias_registration_funcs, std::forward<DataFunc>(data_func));
    }

    // Python uses two `operator[]` overloads, one for `a[b] = c` (called `__setitem__`) and one for everything else (called `__getitem__`).
    // Normally we generate `__getitem__` (because `__setitem__` has a different signature, it can't be generated using the normal mechanism).
    // This function then generates `__setitem__`. The macro calls this for `operator[]`, and then this function internally makes sure
    //   this is a mutable overload.
    // Astute readers might notice that this approach can often result in duplicate `__getitem__` overloads (one const and one non-const).
    // We could work around that somehow, but since this already happens for ALL THE OTHER class functions ANYWAY, do we care? Probably not.
    template <typename Class, typename IndexType>
    void TryAddMutableSubscriptOperator(auto &c)
    {
        if constexpr (
            // This version returns a mutable reference.
            requires{
                requires MutableLvalueRef<decltype(std::declval<Class &>()[std::declval<IndexType>()])>;
            }
        )
        {
            using ElemType = std::remove_cvref_t<decltype(std::declval<Class &>()[std::declval<IndexType>()])>;

            TryAddFuncSimple<
                FuncKind::member_nonstatic,
                +[](Class &object, IndexType index, ElemType elem)
                {
                    object[std::forward<IndexType>(index)] = std::move(elem);
                },
                // Parameters:
                Class &, // `this`
                IndexType,
                ElemType
            >(
                c,
                "__setitem__"
            );
        }
    };

    // If the class has begin/end methods, adds the 'iterable' protocol.
    template <typename T>
    void TryMakeIterable(auto &c)
    {
        // Could use `std::ranges` here, but using a less fancy approach to hopefully support older standard libraries.
        using std::begin; // Fallback to `std::begin`/`std::end` on ADL failure.
        using std::end; // ^
        if constexpr (
            requires(T &t)
            {
                // Both iterators exist and have the same type. Checking non-const `t`, because we'll be
                // calling it on a non-const object anyway, since Python doesn't have constness, and we have no reason to artificially add it.
                requires std::is_same_v<decltype(begin(t)), decltype(end(t))>;
            }
        )
        {
            if constexpr (std::is_lvalue_reference_v<decltype(*begin(std::declval<T &>()))>)
            {
                c.def(
                    +"__iter__",
                    +[](T &target)
                    {
                        return pybind11::make_iterator(begin(target), end(target));
                    },
                    // Keep the container alive as long as iterators exist. Should be redundant when the policy
                    // is set to `reference_interal`, which is the default value. But adding it doesn't hurt.
                    pybind11::keep_alive<0, 1>()
                );
            }
            else
            {
                c.def(
                    +"__iter__",
                    +[](T &target)
                    {
                        return pybind11::make_iterator<pybind11::return_value_policy::copy>(begin(target), end(target));
                    },
                    // This one IS important, because the policy isn't `reference_internal`. Omitting this causes dangling in some cases, when the container is a temporary.
                    pybind11::keep_alive<0, 1>()
                );
            }
        }
    }

    template <typename T>
    struct AllowAutomaticPrinting : std::true_type {};

    // If the class overloads `<<`, implement printing for it (i.e. `__repr__`) in terms of it.
    template <typename T>
    void TryMakePrintable(auto &c)
    {
        if constexpr (AllowAutomaticPrinting<T>::value)
        {
            if constexpr (requires(std::ostream &s, const T &t){s << t;})
            {
                static const std::string name = c.attr("__qualname__").template cast<std::string>();
                c.def(
                    +"__repr__",
                    +[](const T &t)
                    {
                        std::ostringstream ss;
                        ss << t;

                        return name + '(' + std::move(ss).str() + ')';
                    }
                );
            }
        }
    }

    template <typename T>
    void FinalizeClass(auto &c, TryAddFuncScopeState &scope_state)
    {
        TryMakeIterable<T>(c);
        TryMakePrintable<T>(c);


        // Those shouldn't be necessary anymore, now that we updated the parser to hopefully always emit the implicit constructors.
        // TODO: remove those?

        if (!scope_state.have_default_ctor)
        {
            if constexpr (std::default_initializable<T>)
                c.def(pybind11::init(+[]{return std::make_shared<T>();}), +"Implicit default constructor.");
        }
        if (!scope_state.have_copy_ctor)
        {
            if constexpr (pybind11::detail::is_copy_constructible<T>::value)
                c.def(pybind11::init(+[](const T &other){return std::make_shared<T>(other);}), +"Implicit copy constructor.");
        }
    }

    // This registers one of the "namespace marker" structures, which we use to represent namespaces in Python.
    template <typename T, typename ParentT>
    struct RegisterNamespaceMarker
    {
        inline static const std::nullptr_t register_type = []{
            namespace pb11 = MRBind::pb11;
            using PybindType = pybind11::class_<T>; // Don't need the holder.
            using TypeStorage = pb11::SpecificPybindType<PybindType>;

            NamespaceEntry &entry = pb11::GetRegistry().namespace_entries.try_emplace(typeid(T), typeid(ParentT)).first->second;
            entry.name = NamespaceMarkerToUnqualifiedName(typeid(T));
            entry.init_pybind_type = [](ModuleOrClassRef m, const char *n) -> std::unique_ptr<BasicPybindType>
            {
                auto ret = std::make_unique<TypeStorage>(*m.handle, n);
                ret->type.doc() = "This is a namespace.";
                return ret;
            };

            if constexpr (std::is_same_v<ParentT, ::_pb11_this_ns>)
                pb11::GetRegistry().top_level_namespaces.try_emplace(entry.name, typeid(T));

            return nullptr;
        }();
        /* Instantiate `register_type`. */
        static constexpr std::integral_constant<const std::nullptr_t *, &register_type> force_register_type{};
    };


    // --- Function deprecation:

    void EmitDeprecationWarningLow(const char *name, const char *message, bool is_last);

    template <ConstString Name, ConstString Message>
    void EmitDeprecationWarning()
    {
        static int counter = 3;
        if (counter > 0)
        {
            counter--;
            EmitDeprecationWarningLow(Name.value, Message.value, counter == 0);
        }
    }

    // An implementation detail for `deprecation_wrapper`, see below.
    // `FuncType` always matches the type of `Func`. We have to write it this way to be able to specialize the template.
    template <typename FuncType, auto Func, ConstString Name, ConstString Message>
    struct DeprecationWrapperImpl {};

    // Wraps a function pointer or a member function pointer to give it a deprecation message.
    // For member function pointers, returns a normal function pointer instead, since we can't easily create a new member pointer.
    template <auto Func, ConstString Name, ConstString Message>
    constexpr auto deprecation_wrapper = DeprecationWrapperImpl<decltype(Func), Func, Name, Message>::func;

    #define DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_FUNC(noexcept_) \
        template <typename R, typename ...P, auto Func, ConstString Name, ConstString Message> \
        struct DeprecationWrapperImpl<R (*)(P...) noexcept_, Func, Name, Message> \
        { \
            static R func(P ...params) noexcept_ \
            { \
                EmitDeprecationWarning<Name, Message>(); \
                return Func(std::forward<P>(params)...); \
            } \
        };
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_FUNC()
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_FUNC(noexcept)
    #undef DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_FUNC

    #define DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const_, ref_, maybe_ref_, noexcept_) \
        template <typename R, typename C, typename ...P, auto Func, ConstString Name, ConstString Message> \
        struct DeprecationWrapperImpl<R (C::*)(P...) const_ maybe_ref_ noexcept_, Func, Name, Message> \
        { \
            static R func(const_ C ref_ self, P ...params) noexcept_ \
            { \
                EmitDeprecationWarning<Name, Message>(); \
                return (decltype(self)(self).*Func)(std::forward<P>(params)...); \
            } \
        };
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , & ,   ,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , & ,   , noexcept)
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , & , & ,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , & , & , noexcept)
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , &&, &&,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(     , &&, &&, noexcept)
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, & ,   ,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, & ,   , noexcept)
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, & , & ,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, & , & , noexcept)
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, &&, &&,         )
    DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD(const, &&, &&, noexcept)
    #undef DETAIL_MB_PB11_SPECIALIZE_DEPRECATION_HANDLER_METHOD
}

PYBIND11_NAMESPACE_BEGIN(PYBIND11_NAMESPACE)
namespace detail
{
    // Disable the casters for all types for which we provide custom bindings (containers and such).
    // We no longer do automatic registration here, to save build times. We register manually using `MB_REGISTER_TYPE()`.
    template <typename T>
    requires MRBind::pb11::HasCustomTypeBinding<T>
    class type_caster<T> : public type_caster_base<T> /*MRBind::pb11::RegisterOneTypeWithCustomBinding<T>*/ {};
}
PYBIND11_NAMESPACE_END(PYBIND11_NAMESPACE)

// Module entry point, and more stuff.
#if MB_DEFINE_IMPLEMENTATION // Don't duplicate this if we have >1 TU.

#pragma message("MRBind: Pybind internals magic: " PYBIND11_INTERNALS_ID)

namespace MRBind::pb11
{
    void CriticalError(std::string_view message)
    {
        std::cerr << "mrbind pybind11 bindings: " << message << '\n' << std::flush;
        std::terminate();
    }

    std::string AdjustPythonKeywords(std::string name)
    {
        // https://docs.python.org/3/reference/lexical_analysis.html#keywords
        static const std::unordered_set<std::string> keywords = {
            "and",
            "as",
            "assert",
            "async",
            "await",
            "break",
            "class",
            "continue",
            "def",
            "del",
            "elif",
            "else",
            "except",
            "False",
            "finally",
            "for",
            "from",
            "global",
            "if",
            "import",
            "in",
            "is",
            "lambda",
            "None",
            "nonlocal",
            "not",
            "or",
            "pass",
            "raise",
            "return",
            "True",
            "try",
            "while",
            "with",
            "yield",
        };

        if (keywords.contains(name))
        {
            // If the name starts with an uppercase letter, lowercase it. Otherwise add `_` suffix.
            if (std::isupper((unsigned char)name[0]))
                name[0] = std::tolower((unsigned char)name[0]);
            else
                name += '_';
        }

        return name;
    }

    std::string ToPythonName(std::string name)
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

        for (const Rule &rule : rules)
            name = std::regex_replace(name, rule.regex, rule.replacement, rule.global ? std::regex_constants::format_default : std::regex_constants::format_first_only);
        #endif

        name = ImproveTypeName(std::move(name));

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

        return AdjustPythonKeywords(std::move(ret));
    }

    Demangler::~Demangler()
    {
        #ifndef _MSC_VER
        std::free(buf_ptr);
        #endif
    }

    // Cleans up the demangled type name from `typeid(...).name()`. Returns the new length.
    void CleanUpTypeName(std::string &str)
    {
        auto IsAlpha = [](char ch){return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_';};

        auto RemoveFragment = [&](std::string_view to_remove, bool starts_at_word_boundary, bool ends_at_word_boundary)
        {
            std::size_t region_start = 0;
            std::size_t source_pos = std::size_t(-1);
            std::size_t target_pos = 0;
            while (true)
            {
                source_pos = str.find(to_remove, source_pos + 1);
                if (source_pos == std::string_view::npos)
                    break;

                bool ok = true;
                if (ok && starts_at_word_boundary && source_pos != 0)
                {
                    char ch = str[source_pos - 1];
                    if (IsAlpha(ch))
                        ok = false;
                }
                if (ok && ends_at_word_boundary && source_pos + to_remove.size() < str.size())
                {
                    char ch = str[source_pos + to_remove.size()];
                    if (IsAlpha(ch))
                        ok = false;
                }

                if (ok)
                {
                    std::size_t n = source_pos - region_start;
                    std::copy_n(str.begin() + region_start, n, str.data() + target_pos);
                    target_pos += n;
                    source_pos += to_remove.size();
                    region_start = source_pos;
                }
            }
            std::size_t n = str.size() - region_start;
            std::copy_n(str.begin() + region_start, n, str.data() + target_pos);
            target_pos += n;
            str.resize(target_pos);
        };
        [[maybe_unused]] auto ReplaceFragment = [&](std::string_view a, std::string_view b, bool separate_word)
        {
            std::string ret;

            std::size_t last_pos = 0;

            std::size_t cur_pos = 0;

            while (true)
            {
                cur_pos = str.find(a, cur_pos);
                if (cur_pos == std::string::npos)
                    break;

                if (
                    !separate_word ||
                    (
                        (cur_pos == 0 || !IsAlpha(str[cur_pos-1])) &&
                        (cur_pos + a.size() == str.size() || !IsAlpha(str[cur_pos + a.size()]))
                    )
                )
                {
                    ret.append(str, last_pos, cur_pos - last_pos);
                    ret += b;
                    last_pos = cur_pos + a.size();
                }

                cur_pos = cur_pos + a.size();
            }

            ret += str.substr(last_pos);
            str = std::move(ret);
        };

        #if defined(_MSC_VER)
        RemoveFragment("struct ", true, false);
        RemoveFragment("class ", true, false);
        RemoveFragment("union ", true, false);
        RemoveFragment("enum ", true, false);
        ReplaceFragment("__int64", "long long", true);
        #ifdef _WIN64
        RemoveFragment(" __ptr64", false, true); // `int * __ptr64` -> `int *`. Those are just normal pointers.
        #else
        RemoveFragment(" __ptr32", false, true);
        #endif
        #elif defined(_LIBCPP_VERSION)
        RemoveFragment(":__1:", false, false);
        #elif defined(__GLIBCXX__)
        RemoveFragment(":__cxx11:", false, false);
        #endif

        #ifndef _LIBCPP_VERSION
        { // Condense `> >` into `>>`.
            std::size_t target_pos = 1;
            for (std::size_t i = 1; i + 1 < str.size(); i++)
            {
                if (str[i] == ' ' && str[i-1] == '>' && str[i+1] == '>')
                    continue;
                str[target_pos++] = str[i];
            }
            if (!str.empty())
                str[target_pos++] = str.back();
            str.resize(target_pos);
        }
        #endif
    }

    std::string Demangler::operator()(const char *name)
    {
        #ifndef _MSC_VER
        int status = -4;
        buf_ptr = abi::__cxa_demangle(name, buf_ptr, &buf_size, &status);
        if (status != 0) // -1 = out of memory, -2 = invalid string, -3 = invalid usage
            return name;

        std::string ret = buf_ptr;
        #else
        std::string ret = name;
        #endif
        CleanUpTypeName(ret);
        return ret;
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
        if (view == "_Call") return "__call__";
        if (view == "_Subscript") return "__getitem__"; // `__setitem__` is generated separately.
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
    }

    void RegisterTypeAliasLow(MRBind::TypeIndex type, std::string_view spelling)
    {
        if (spelling.starts_with("const "))
            spelling.remove_prefix(6);
        // We don't need to fix the suffix (stripping any `&`,`*`,` `), `ToPythonName()` will remove it.

        MRBind::pb11::GetRegistry().type_aliases[spelling].insert(type);
    }

    std::string NamespaceMarkerToUnqualifiedName(MRBind::TypeIndex marker)
    {
        std::string str = Demangler{}(marker.name());
        static constexpr std::string_view prefix = "MRBind::pb11::NsMarker<";
        static constexpr std::string_view suffix = "::_pb11_ns_marker>";
        if (!str.starts_with(prefix) || !str.ends_with(suffix))
            CriticalError("Something is wrong with with the namespace marker type name.");
        std::string_view view(str);
        view.remove_suffix(suffix.size());
        view.remove_prefix(prefix.size());
        std::size_t pos = view.find_last_of(':');
        if (pos != std::string_view::npos)
            view = view.substr(pos + 1);
        std::string ret(view);
        CleanUpTypeName(ret);
        return ret;
    }

    const std::set<std::string, std::less<>> &StrippedPythonNamespaces()
    {
        static const std::set<std::string, std::less<>> ret = {
            #ifdef MB_PB11_STRIPPED_NAMESPACES
            // Define this to a list of namespaces that should be stripped, with their contents pasted directly to the global namespace.
            // This is a list of comma-separated quoted strings, with python-style namespace names in them. E.g.: `"a", "a.b"`.
            MB_PB11_STRIPPED_NAMESPACES
            #endif
        };
        return ret;
    }

    void RegisterCustomAlias(std::string alias, std::string target)
    {
        Registry &r = GetRegistry();
        if (!r.custom_aliases.try_emplace(std::move(alias), std::move(target)).second)
            CriticalError("Duplicate custom alias: `" + alias + "`."); // If this is reached, `alias` wasn't moved from, so we can safely print it.
    }


    // `name` is a qualified name. If `use_dots == false` it should contain `::`, and if `use_dots == true` it should contain Python-style `.` dots.
    // `scope` is `(std::string_view segment) -> bool`. It receives every qualifier in order, without `::`. Return false by default.
    // `unscoped_name` is `(std::string_view segment) -> void`. It then receives the remaining unqualified name.
    // If you return `true` from `scope`, the remaining qualifiers are not processed, and everything starting
    // from the current qualifier (including it!) is passed to `unscoped_name`.
    void ForScopePrefixes(bool use_dots, std::string_view name, auto &&scope, auto &&unscoped_name)
    {
        std::size_t segment_start = 0;

        char brace_stack[256];
        std::size_t brace_stack_pos = 0;

        for (std::size_t i = 0; i < name.size(); i++)
        {
            char ch = name[i];

            if (brace_stack_pos == 0)
            {
                if (ch == ":."[use_dots] && (use_dots || (i > 0 && name[i - 1] == ':')))
                {
                    if (scope(std::string_view(name.data() + segment_start, i - segment_start - !use_dots)))
                        break;
                    i++;
                    segment_start = i;
                    continue;
                }
            }
            else
            {
                if (ch == brace_stack[brace_stack_pos - 1])
                {
                    brace_stack_pos--;
                    continue;
                }
            }

            if (brace_stack_pos >= sizeof(brace_stack))
                CriticalError("Brace stack overflow.");

            if (ch == '(')
                brace_stack[brace_stack_pos++] = ')';
            else if (ch == '{')
                brace_stack[brace_stack_pos++] = '}';
            else if (ch == '[')
                brace_stack[brace_stack_pos++] = ']';
            else if (ch == '<')
                brace_stack[brace_stack_pos++] = '>';

            // Quotes seem to never appear in the type strings. Even when constexpr strings are involved.
        }

        unscoped_name(std::string_view(name.data() + segment_start, name.size() - segment_start));
    }

    ApplyNamespacesResult ApplyNamespaces(pybind11::module_ &m, bool python_style_name, std::string_view name, bool enter_classes)
    {
        ApplyNamespacesResult ret;
        ret.unqualified_name_remains = true;

        ForScopePrefixes(
            python_style_name,
            name,
            [&](std::string_view segment) -> bool
            {
                auto &r = GetRegistry();
                if (!ret.most_nested_namespace && !ret.most_nested_class)
                {
                    // We're at the top level.

                    // Enter a namespace.
                    if (auto it = r.top_level_namespaces.find(segment); it != r.top_level_namespaces.end())
                    {
                        ret.most_nested_namespace = &r.namespace_entries.at(it->second);

                        if (ret.most_nested_namespace->is_stripped)
                            ret.most_nested_namespace = nullptr; // Reject stripped namespace.

                        return false;
                    }

                    // Enter a class.
                    if (enter_classes)
                    {
                        if (auto it = r.top_level_types.find(segment); it != r.top_level_types.end())
                        {
                            ret.most_nested_class = &r.type_entries.at(it->second);
                            return false;
                        }
                    }
                }
                else if (ret.most_nested_namespace)
                {
                    // We're in a namespace.

                    // Enter a nested namespace.
                    if (auto it = ret.most_nested_namespace->nested_namespaces.find(segment); it != ret.most_nested_namespace->nested_namespaces.end())
                    {
                        ret.most_nested_namespace = &r.namespace_entries.at(it->second);

                        if (ret.most_nested_namespace->is_stripped)
                            ret.most_nested_namespace = nullptr; // Reject stripped namespace.

                        return false;
                    }

                    // Enter a class.
                    if (enter_classes)
                    {
                        if (auto it = ret.most_nested_namespace->nested_types.find(segment); it != ret.most_nested_namespace->nested_types.end())
                        {
                            ret.most_nested_class = &r.type_entries.at(it->second);
                            ret.most_nested_namespace = nullptr;
                            return false;
                        }
                    }
                }
                else if (ret.most_nested_class)
                {
                    // We're in a class.

                    if (auto it = ret.most_nested_class->nested_types.find(segment); it != ret.most_nested_class->nested_types.end())
                    {
                        ret.most_nested_class = &r.type_entries.at(it->second);
                        return false;
                    }
                }

                // We don't know this scope.
                if (segment.data() + segment.size() != name.data() + name.size())
                    ret.unqualified_name_remains = false;
                return true;
            },
            [&](std::string_view segment)
            {
                ret.name = segment;
            }
        );

        if (ret.most_nested_namespace)
            ret.m = ret.most_nested_namespace->pybind_type->GetPybindObject();
        else if (ret.most_nested_class)
            ret.m = ret.most_nested_class->pybind_type->GetPybindObject();
        else
            ret.m = m;

        if (ret.name.empty())
            ret.unqualified_name_remains = false;

        return ret;
    }


    // Type name simplification:

    struct ForTemplateParametersStackEntry
    {
        char brace = '\0';
        char *begin = nullptr;
        char *ptr = nullptr;
        bool erased_part = false;
        std::size_t arg_stack_pos = 0;
    };
    struct ForTemplateParametersArgStackEntry
    {
        char *begin = nullptr;
        char *end = nullptr;
        char *trimmed_end = nullptr;
    };

    // This is used to edit identifiers, primarily to erase unwanted template parameters.
    //
    // There are following callbacks:
    // * `push`     - `(char *begin, char *&end) -> void`
    // * `pop`      - `() -> void`
    // * `push_arg` - `(char *begin, char *&end) -> void`
    // * `pop_arg`  - `(char *begin, char *&end) -> void`
    //
    // `push` is called when entering a template argument list, and receives the name of the template before the `<`.
    // `pop` is called when exiting a template argument list.
    // `push_arg` is called when seeing a template argument.
    // `pop_arg` is called after seeing all template arguments in a list, in reverse for all arguments in the list.
    //
    // In other words, there's a stack of argument lists, and for each element a stack of arguments.
    // When existing an argument list, all arguments in it are popped.
    //
    // At the end of the function, `push_arg` and `pop_arg` are always called with the whole string as input.
    //
    // Those callbacks can modify the input strings.
    // Callbacks that receive end can decrease it to shrink the string.
    // `pop_arg` has a special case: if you set `end = begin` it not only removes the argument,
    //   but also removes one of the commas next ot it.
    //
    // The pointers you get remain stable until `pop` is called for the current parameter list.
    void ForTemplateParameters(std::string &str, auto &&push, auto &&pop, auto &&push_arg, auto &&pop_arg)
    {
        // A placeholder character used to mark the erased parts of the string.
        // You can temporarily change it to something printable to debug.
        // The input string should never contain those.
        constexpr char clobber_char = '?';

        char *begin = str.data();
        char *end = str.data() + str.size();

        ForTemplateParametersStackEntry brace_stack[256];
        std::size_t brace_stack_pos = 0;

        ForTemplateParametersArgStackEntry arg_stack[256];
        std::size_t arg_stack_pos = 0;

        bool erased_part = false;

        for (char *cur = begin; cur < end; cur++)
        {
            char ch = *cur;

            if (brace_stack_pos > 0)
            {
                ForTemplateParametersStackEntry &entry = brace_stack[brace_stack_pos - 1];

                auto InsertArg = [&](char *a, char *b)
                {
                    if (arg_stack_pos == std::size(arg_stack))
                        CriticalError("ForTemplateParameters: Argument stack overflow.");

                    arg_stack[arg_stack_pos].begin = a;

                    // Backtrack to remove the erased suffix.
                    while (b > a && b[-1] == clobber_char)
                        b--;

                    arg_stack[arg_stack_pos].end = b;

                    // Skip trailing whitespace. MSVC seems to add it sometimes (e.g. in a map allocator, `std::pair<int const ,float>`).
                    while (b > a && b[-1] == ' ')
                        b--;

                    push_arg(std::as_const(a), b);
                    arg_stack[arg_stack_pos].trimmed_end = b;

                    arg_stack_pos++;

                };

                if (ch == entry.brace)
                {
                    brace_stack_pos--;

                    if (entry.brace == '>')
                        InsertArg(entry.ptr, cur);

                    // Reverse argument iteration.
                    while (arg_stack_pos > entry.arg_stack_pos)
                    {
                        ForTemplateParametersArgStackEntry &arg = arg_stack[--arg_stack_pos];
                        char *new_trimmed_end = arg.trimmed_end;
                        pop_arg(arg.begin, new_trimmed_end);

                        if (new_trimmed_end < arg.end)
                        {
                            entry.erased_part = true;

                            // If we erased the whole argument...
                            if (arg.begin == new_trimmed_end)
                            {
                                // Erase one of the commas, if possible.
                                if (
                                    // Try the leading comma:
                                    // `,`
                                    (arg.begin > begin && arg.begin[-1] == ',') ||
                                    // `, `
                                    (arg.begin > begin+1 && arg.begin[-1] == ' ' && arg.begin[-2] == ',')
                                )
                                {
                                    if (arg.begin[-1] == ' ')
                                        arg.begin--;
                                    arg.begin--;
                                }
                                else
                                {
                                    // Try the trailing comma.
                                    if (arg.end < end && *arg.end == ',')
                                    {
                                        arg.end++;
                                        if (*arg.end == ' ')
                                            arg.end++;
                                    }
                                }

                                for (char *p = arg.begin; p < arg.end;)
                                    *p++ = clobber_char;
                            }
                            else
                            {
                                for (char *p = new_trimmed_end; p < arg.end;)
                                    *p++ = clobber_char;
                            }
                        }
                    }

                    char *segment_begin = brace_stack_pos == 0 ? begin : brace_stack[brace_stack_pos-1].ptr;
                    char *segment_end = cur + 1;

                    if (entry.erased_part)
                    {
                        segment_end = std::remove(segment_begin, segment_end, clobber_char);
                        for (char *p = segment_end; p < cur + 1;)
                            *p++ = clobber_char;

                        if (brace_stack_pos == 0)
                            erased_part = true;
                        else
                            brace_stack[brace_stack_pos-1].erased_part = true;
                    }

                    if (entry.brace == '>')
                        pop();

                    continue;
                }

                if (entry.brace == '>' && ch == ',')
                {
                    InsertArg(entry.ptr, cur);

                    entry.ptr = cur + 1;

                    if (entry.ptr < end && *entry.ptr == ' ')
                        entry.ptr++; // Skip whitespace after `,` template argument separator.

                    continue;
                }
            }

            if (brace_stack_pos >= std::size(brace_stack))
                CriticalError("ForTemplateParameters: Brace stack overflow.");

            char ending_brace = 0;

            if (ch == '(')
                ending_brace = ')';
            else if (ch == '{')
                ending_brace = '}';
            else if (ch == '[')
                ending_brace = ']';
            else if (ch == '<')
                ending_brace = '>';

            if (ending_brace)
            {
                if (ending_brace == '>')
                {
                    char *new_cur = cur;
                    push(std::as_const(brace_stack_pos == 0 ? begin : brace_stack[brace_stack_pos-1].ptr), new_cur);
                    if (new_cur < cur)
                    {
                        while (new_cur < cur)
                            *new_cur++ = clobber_char;

                        brace_stack[brace_stack_pos].erased_part = true;
                    }
                }

                brace_stack[brace_stack_pos].brace = ending_brace;
                brace_stack[brace_stack_pos].begin = cur + 1;
                brace_stack[brace_stack_pos].ptr = cur + 1;
                brace_stack[brace_stack_pos].arg_stack_pos = arg_stack_pos;
                brace_stack_pos++;
            }

            // Quotes seem to never appear in the type strings. Even when constexpr strings are involved.
        }

        if (erased_part)
            end = std::remove(begin, end, clobber_char);

        push_arg(std::as_const(begin), end);
        pop_arg(std::as_const(begin), end);

        str.resize(end - begin);
    }

    // Simplifies a type name by applying some heuristics.
    std::string ImproveTypeName(std::string str)
    {
        struct StackEntry
        {
            // Strip defaulted `char_traits`.
            bool is_basic_string = false;
            // Strip `std::less<T>`.
            bool is_ordered_map_like = false;
            // Strip `std::equal_to<T>`, `std::hash<T>`.
            bool is_unordered_map_like = false;

            // Same, but also strip some internal phmap stuff. This is for https://github.com/greg7mdp/parallel-hashmap
            bool is_ordered_phmap_like = false;
            bool is_unordered_phmap_like = false;

            int arg_counter = 0;
            std::string_view first_template_arg;
            std::string_view second_template_arg;
            bool can_erase_args = true;
        };
        StackEntry stack[256];
        std::size_t pos = 0;

        ForTemplateParameters(
            str,
            [&](char *begin, char *&end)
            {
                (void)begin;
                (void)end;
                if (pos == std::size(stack))
                    CriticalError("ImproveTypeName: Brace stack overflow.");
                std::string_view view(begin, end);
                stack[pos] = {};
                stack[pos].is_basic_string = view == "std::basic_string";
                stack[pos].is_ordered_phmap_like = view.starts_with("phmap::") && view.find("btree_") != std::string_view::npos;
                stack[pos].is_ordered_map_like =
                    stack[pos].is_ordered_phmap_like ||
                    view == "std::map" ||
                    view == "std::set" ||
                    view == "std::multimap" ||
                    view == "std::multiset";
                stack[pos].is_unordered_phmap_like = view.starts_with("phmap::") && view.find("_hash_") != std::string_view::npos;
                stack[pos].is_unordered_map_like =
                    stack[pos].is_unordered_phmap_like ||
                    view == "std::unordered_map" ||
                    view == "std::unordered_set" ||
                    view == "std::unordered_multimap" ||
                    view == "std::unordered_multiset";
                pos++;
            },
            [&]()
            {
                pos--;
            },
            [&](char *begin, char *&end)
            {
                // Simplify some types:

                auto ReplaceString = [&](std::string_view from, std::string_view to)
                {
                    if (to.size() > from.size())
                        CriticalError("Can't make the string longer.");

                    std::string_view view(begin, end);

                    // If `view` is exactly `from` or starts with `from + ':'`...
                    if (view.starts_with(from) && (view.size() == from.size() || view[from.size() == ':']))
                    {
                        std::copy(to.begin(), to.end(), begin);
                        end = std::rotate(begin + to.size(), begin + from.size(), end);
                        return true;
                    }
                    return false;
                };

                ReplaceString("std::basic_string<char>", "std::string") ||
                ReplaceString("std::basic_string<wchar_t>", "std::wstring");

                // Save the first template argument.

                if (pos > 0)
                {
                    StackEntry &e = stack[pos-1];
                    if (e.arg_counter == 0)
                        e.first_template_arg = {begin, end};
                    else if (e.arg_counter == 1)
                        e.second_template_arg = {begin, end};
                    e.arg_counter++;
                }
            },
            [&](char *begin, char *&end)
            {
                if (pos > 0)
                {
                    StackEntry &e = stack[pos-1];
                    e.arg_counter--;

                    if (e.can_erase_args)
                    {
                        std::string_view view(begin, end);

                        auto IsTraitsForFirstArg = [&](std::string_view name)
                        {
                            if (e.arg_counter == 0)
                                return false;

                            std::string_view arg = e.first_template_arg;
                            std::string_view view_copy = view;

                            if (!arg.empty() && view.size() == name.size() + 2 + arg.size() && view.starts_with(name) && view[name.size()] == '<' && view.back() == '>')
                            {
                                view_copy.remove_prefix(name.size() + 1);
                                view_copy.remove_suffix(1);
                                if (view_copy == arg)
                                    return true;
                            }

                            return false;
                        };

                        if (
                            IsTraitsForFirstArg("std::allocator") ||
                            (e.is_basic_string && IsTraitsForFirstArg("std::char_traits")) ||
                            (e.is_ordered_map_like && IsTraitsForFirstArg("std::less")) ||
                            (e.is_unordered_map_like && IsTraitsForFirstArg("std::hash")) ||
                            (e.is_unordered_map_like && IsTraitsForFirstArg("std::equal_to")) ||
                            (e.is_unordered_phmap_like && view.starts_with("phmap::priv::")) ||
                            (e.is_unordered_phmap_like && IsTraitsForFirstArg("phmap::Hash")) ||
                            (e.is_unordered_phmap_like && IsTraitsForFirstArg("phmap::EqualTo")) ||
                            (e.is_ordered_phmap_like && IsTraitsForFirstArg("phmap::Less"))
                        )
                        {
                            end = begin;
                            return;
                        }

                        { // Check for `std::allocator<T const, U>`.
                            static constexpr std::string_view prefix = "std::allocator<std::pair<";
                            if (e.arg_counter >= 2 && view.starts_with(prefix) && view.ends_with(">>"))
                            {
                                std::string_view view_copy = view;
                                view_copy.remove_prefix(prefix.size());
                                view_copy.remove_suffix(2);

                                std::string_view arg1 = e.first_template_arg;
                                std::string_view arg2 = e.second_template_arg;

                                if (view_copy.starts_with(arg1) && view_copy.ends_with(arg2))
                                {
                                    view_copy.remove_prefix(arg1.size());
                                    view_copy.remove_suffix(arg2.size());
                                    if (view_copy.starts_with(" const,"))
                                    {
                                        view_copy.remove_prefix(7);
                                        if (view_copy.empty() || view_copy == " ")
                                        {
                                            // Success!
                                            end = begin;
                                            return;
                                        }
                                    }
                                }
                            }
                        }

                        e.can_erase_args = false;
                    }
                }
            }
        );

        return str;
    }

    void EmitDeprecationWarningLow(const char *name, const char *message, bool is_last)
    {
        const char *last_str = is_last ? " (will not warn about this entity again)" : "";
        if (*message)
            std::fprintf(stderr, MRBIND_STR(MB_PB11_MODULE_NAME) ": `%s` is deprecated: `%s`%s\n", name, message, last_str);
        else
            std::fprintf(stderr, MRBIND_STR(MB_PB11_MODULE_NAME) ": `%s` is deprecated%s\n", name, last_str);
    }
}

PYBIND11_MODULE(MB_PB11_MODULE_NAME, m)
{
    using namespace MRBind;
    using namespace MRBind::pb11;

    auto &r = GetRegistry();

    if (r.was_loaded)
        throw std::runtime_error("Can't load the same module twice.");

    #ifdef MB_PB11_MODULE_DEPS
    { // Load dependencies (other modules).
        std::vector<const char *> deps = { MB_PB11_MODULE_DEPS };
        for (const auto &dep : deps)
            pybind11::module_::import(dep);
    }
    #endif

    const int debug_loglevel = []{
        const char *var = std::getenv("MRBIND_DEBUG");
        if (var)
            return std::atoi(var); // A quick and dirty option with minimal error checking.
        return 0;
    }();

    std::size_t num_nonstripped_namespaces = 0;
    { // Load the namespaces.
        // Fill `nested_namespaces`.
        for (auto &[id, e] : r.namespace_entries)
        {
            // If the parent namespace is not the global namespace, add it to the list.
            if (e.parent_namespace != typeid(::_pb11_this_ns))
                r.namespace_entries.at(e.parent_namespace).nested_namespaces.try_emplace(e.name, id);
        }

        auto LoadNamespace = [&](auto &LoadNamespace, MRBind::TypeIndex type, NamespaceEntry *e)
        {
            if (!e)
                e = &r.namespace_entries.at(type);

            if (e->pybind_type)
                return; // Already loaded.

            // Load the parent namespace first, if it's not the global namespace.
            NamespaceEntry *parent = nullptr;
            if (e->parent_namespace != typeid(::_pb11_this_ns))
            {
                parent = &r.namespace_entries.at(e->parent_namespace);
                LoadNamespace(LoadNamespace, e->parent_namespace, parent);
            }

            if (e->pybind_type)
                return; // Maybe we somehow got loaded? This shouldn't happen though, namespaces shouldn't have cycles.

            std::string py_name = ToPythonName(e->name);

            // Compute the python-style qualified name.
            if (parent)
                e->pybind_name_qual = parent->pybind_name_qual + "." + py_name;
            else
                e->pybind_name_qual = py_name;

            // Should this namespace be stripped from the final binding?
            e->is_stripped = StrippedPythonNamespaces().contains(e->pybind_name_qual);

            // Compute the python-style qualified name, stripped of unwanted namespaces.
            if (e->is_stripped)
                ;// Keep `e->pybind_name_qual_fixed` empty.
            else if (!parent || parent->is_stripped)
                e->pybind_name_qual_fixed = py_name;
            else
                e->pybind_name_qual_fixed = parent->pybind_name_qual_fixed + "." + py_name;

            // Initialize the type, but only if this namespace is not stripped.
            if (!e->is_stripped)
            {
                e->pybind_type = e->init_pybind_type(parent && !parent->is_stripped ? ModuleOrClassRef(parent->pybind_type->GetPybindObject()) : ModuleOrClassRef(m), e->name.c_str());
                num_nonstripped_namespaces++;
            }

            // If the parent namespace is stripped, register this as a top-level namespace.
            if (parent && parent->is_stripped)
                r.top_level_namespaces.try_emplace(e->name, type);

            if (debug_loglevel >= 2)
                std::cout << "mrbind: Registering namespace: `" << e->name << "`, stripped=" << e->is_stripped << ", parent=" << (parent ? "`" + parent->pybind_name_qual + "`" : "none") << '\n';
        };
        for (auto &[id, e] : r.namespace_entries)
            LoadNamespace(LoadNamespace, id, &e);
    }

    { // Topologically sort the classes and load them. https://en.wikipedia.org/wiki/Topological_sorting#Kahn's_algorithm
        // Populate reverse dependencies.
        for (auto &[id, e] : r.type_entries)
        {
            for (auto type_iter = e.type_deps.begin(); type_iter != e.type_deps.end();)
            {
                auto dep_iter = r.type_entries.find(*type_iter);

                // if (dep_iter == r.type_entries.end())
                //     throw std::runtime_error(std::string("MRBind pybind11: Type `") + dep.name() + "` is a depenency of type `" + id.name() + "`, but the former is not registered.");

                // ^ We no longer do this validation, because `std::vector<T>` now depends on `T`, and we want to silently ignore cases where `T` is a built-in type.
                // So instead we erase it here.
                // Also our classes now depend on the markers of the namespaces they're in, and those are also not registered here.
                if (dep_iter == r.type_entries.end())
                {
                    type_iter = e.type_deps.erase(type_iter);
                    continue;
                }

                r.type_entries.at(*type_iter).type_rdeps.insert(id);
                type_iter++;
            }
        }

        std::vector<typename decltype(Registry::type_entries)::value_type *> final_order;

        // Find types with no deps.
        std::vector<typename decltype(Registry::type_entries)::value_type *> queue;
        for (auto &elem : r.type_entries)
        {
            if (elem.second.type_deps.empty())
            {
                final_order.push_back(&elem);
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
            for (MRBind::TypeIndex rdep : e.second.type_rdeps)
            {
                auto next_e_iter = r.type_entries.find(rdep);
                if (next_e_iter == r.type_entries.end())
                    throw std::runtime_error(std::string("MRBind pybind11: Type not registered: ") + rdep.name());

                next_e_iter->second.type_deps.erase(e.first);
                if (next_e_iter->second.type_deps.empty())
                {
                    final_order.push_back(&*next_e_iter);
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

        // If a certain custom class was already loaded in a different module, refuse to load it again (that would cause a pybind error),
        //   and instead make an alias for it.
        for (auto it = final_order.begin(); it != final_order.end();)
        {
            if (((*it)->second.typeinfo_from_other_module =/*assign*/ pybind11::detail::get_global_type_info((*it)->first)))
            {
                r.type_aliases[(*it)->second.cpp_type_name].insert((*it)->first);
                it = final_order.erase(it);
                continue;
            }
            ++it;
        }

        // Load:

        // Init.
        // This has to be a separate pass! Otherwise when loading functions before their argument or return types are registered,
        //   they will display non-adjuted C++ names in the help pages.
        // Not entirely sure if it can cause issues with actually calling them or not.
        for (auto *elem : final_order)
        {
            auto ns = ApplyNamespaces(m, false, elem->second.cpp_type_name, true);
            elem->second.pybind_type_name = ToPythonName(std::string(ns.name));

            // Register this class in the enclosing class or namespace, for the purposes of name lookup.
            // Also compute the qualified python-style name.
            if (ns.most_nested_namespace)
            {
                ns.most_nested_namespace->nested_types.try_emplace(std::string(ns.name), elem->first);
                elem->second.pybind_type_name_qual = ns.most_nested_namespace->pybind_name_qual_fixed + "." + elem->second.pybind_type_name;
            }
            else if (ns.most_nested_class)
            {
                ns.most_nested_class->nested_types.try_emplace(std::string(ns.name), elem->first);
                elem->second.pybind_type_name_qual = ns.most_nested_class->pybind_type_name_qual + "." + elem->second.pybind_type_name;
            }
            else
            {
                r.top_level_types.try_emplace(ns.name, elem->first);
                elem->second.pybind_type_name_qual = elem->second.pybind_type_name;
            }

            if (debug_loglevel >= 2)
            {
                std::cout << "mrbind: Registering type:"
                    " is_parsed=" << elem->second.is_parsed << ","
                    " python=`" << elem->second.pybind_type_name_qual << "`,"
                    " cpp=`" << elem->second.cpp_type_name << "`,"
                    " typeid_cpp=`" << Demangler{}(elem->first.name()) << "`";
                #if MRBIND_DEBUG
                if (!elem->second.is_parsed)
                    std::cout << " num_bindings=" << elem->second.num_redundant_nonparsed_binds;
                #endif
                std::cout << '\n';
            }

            elem->second.pybind_type = elem->second.init(ns.m, elem->second.pybind_type_name.c_str());
        }
        // Actually load.
        for (auto *elem : final_order)
        {
            MRBind::pb11::TypeEntry::AddClassMembersState state;
            for (state.pass_number = 0; state.pass_number < num_add_func_passes; state.pass_number++)
            {
                state.i = 0;
                elem->second.load_members(*elem->second.pybind_type, state, &elem->second.func_alias_registration_funcs);

                // Log the registered functions. Would be nicer to do it in real time,
                //   like we do with non-member functions, but it's easier to do it as a separate step.
                if (debug_loglevel >= 3 && state.pass_number + 1 == num_add_func_passes)
                {
                    for (const auto &func : elem->second.func_alias_registration_funcs.funcs)
                    {
                        std::cout << "mrbind: Registering member function: class=`" << elem->second.pybind_type_name_qual << "`, name=`" << func.first << "`\n";
                    }
                }
            }
        }
    }

    { // Load the functions.
        struct Func
        {
            ModuleOrClassRef m;
            FuncEntry *entry = nullptr;
            const char *name = nullptr;
            const char *name_with_template_args = nullptr;
            FuncAliasRegistrationFuncs *func_alias_registration_funcs = nullptr;
        };
        std::unordered_map<NamespaceEntry *, std::vector<Func>> func_scopes;

        // Split functions by namespace.
        for (auto &entry : r.func_entries)
        {
            auto ns = ApplyNamespaces(m, false, entry.qual_name, false);
            func_scopes[ns.most_nested_namespace].emplace_back(
                ns.m,
                &entry,
                ns.name.data(),
                // The qualified name minus the namespace qualifiers.
                entry.qual_name_with_template_args + (ns.name.data() - entry.qual_name),
                ns.most_nested_namespace ? &ns.most_nested_namespace->func_alias_registration_funcs : &r.top_level_func_alias_registration_funcs
            );
        }

        // Load the functions.
        for (auto &scope : func_scopes)
        {
            TryAddFuncScopeState scope_state;
            for (int pass_number = 0; pass_number < num_add_func_passes; pass_number++)
            {
                for (auto &func : scope.second)
                {
                    func.entry->load(func.m, func.entry->state, scope_state, pass_number, func.name, func.name_with_template_args, func.func_alias_registration_funcs);
                    if (debug_loglevel >= 3 && pass_number + 1 == num_add_func_passes)
                        std::cout << "mrbind: Registering free function: namespace=`" << (scope.first ? scope.first->pybind_name_qual_fixed : "") << "`, name=`" << func.entry->state.python_name << "`\n";
                }
            }
        }
    }

    std::size_t num_noncustom_aliases = 0;
    { // Load the type aliases.
        std::unordered_set<std::string_view> nonalias_python_type_names;
        for (const auto &elem : r.type_entries)
        {
            // Skip skipped types. In particular, those are the types that got rejected because they are
            //   already loaded in a different module, see the `get_global_type_info()` check above.
            if (elem.second.typeinfo_from_other_module)
                continue;

            bool ok = nonalias_python_type_names.insert(elem.second.pybind_type_name_qual).second;
            if (!ok)
                throw std::runtime_error("Python name `" + elem.second.pybind_type_name + "` refers to more than one type.");
        }

        for (const auto &[spelling, types] : r.type_aliases)
        {
            if (types.size() > 1)
                continue; // More than one target type, so this is ambiguous (somehow). Ignore this one.

            auto iter = r.type_entries.find(*types.begin());
            if (iter == r.type_entries.end())
                continue; // Don't know this target type, ignore it.

            std::string spelling_fixed = ImproveTypeName(std::string(spelling));
            auto ns = ApplyNamespaces(m, false, spelling_fixed, true);
            std::string python_unqual_name = ToPythonName(std::string(ns.name));

            std::string python_qual_name;
            if (ns.most_nested_namespace)
                python_qual_name = ns.most_nested_namespace->pybind_name_qual_fixed + "." + python_unqual_name;
            else if (ns.most_nested_class)
                python_qual_name = ns.most_nested_class->pybind_type_name_qual + "." + python_unqual_name;
            else
                python_qual_name = python_unqual_name;

            if (nonalias_python_type_names.contains(python_qual_name))
                continue; // The target name is already occupied by a type.

            if (debug_loglevel >= 2)
                std::cout << "mrbind: Registering alias: `" << python_qual_name << "` -> `" << iter->second.pybind_type_name_qual << "`\n";

            if (iter->second.typeinfo_from_other_module)
                ns.m.handle->attr(python_unqual_name.c_str()) = reinterpret_cast<PyObject *>(iter->second.typeinfo_from_other_module->type);
            else
                ns.m.handle->attr(python_unqual_name.c_str()) = iter->second.pybind_type->GetPybindObject();

            iter->second.aliases.push_back(python_qual_name);
            num_noncustom_aliases++;
        }
    }

    { // Generate class documentation. After loading type aliases, because they're mentioned in it too.
        for (auto &[type, entry] : r.type_entries)
        {
            if (!entry.set_docstring || !entry.pybind_type)
                continue;

            std::string doc;
            if (entry.is_parsed)
            {
                doc += "Generated from:  ";
                doc += entry.cpp_type_name;
                doc += '\n';
            }
            if (!entry.aliases.empty())
            {
                doc += "Aliases:  ";
                bool first = true;
                for (const auto& alias : entry.aliases)
                {
                    if (first)
                        first = false;
                    else
                        doc += ", ";
                    doc += alias;
                }
                doc += '\n';
            }
            if (entry.comment)
            {
                if (!doc.empty())
                    doc += '\n';
                doc += entry.comment;
            }

            if (!doc.empty())
                entry.pybind_type->GetPybindObject().doc() = std::move(doc);
        }
    }

    { // Load custom aliases.
        auto FindPythonObject = [&](std::string_view name, const char **last_segment = nullptr) -> pybind11::handle
        {
            pybind11::handle ret = m;
            split(name, ".", [&](std::string_view segment)
            {
                if (last_segment)
                {
                    bool is_last = segment.data() + segment.size() == name.data() + name.size();
                    if (is_last)
                    {
                        *last_segment = segment.data();
                        return true;
                    }
                }

                ret = ret.attr(std::string(segment).c_str());
                return false;
            });
            return ret;
        };

        for (const auto &[alias, target] : r.custom_aliases)
        {
            // We do something special for function aliases here, because in come cases when registering them normally (like all other aliases),
            //   pybind11-stubgen chokes on them. (If they're static class member functions, AND overloaded? Not 100% sure what the criteria is.)
            if (auto ns = ApplyNamespaces(m, true, target, true); ns.unqualified_name_remains)
            {
                const auto &func_map = (
                    ns.most_nested_class ? ns.most_nested_class->func_alias_registration_funcs :
                    ns.most_nested_namespace ? ns.most_nested_namespace->func_alias_registration_funcs :
                    r.top_level_func_alias_registration_funcs
                ).funcs;

                if (auto func_iter = func_map.find(std::string(ns.name)); func_iter != func_map.end())
                {
                    if (auto nst = ApplyNamespaces(m, true, alias, true); nst.unqualified_name_remains)
                    {
                        if (debug_loglevel >= 2)
                            std::cout << "mrbind: Registering custom function alias: `" << alias << "` -> `" << target << "`\n";

                        for (auto &elem : func_iter->second)
                            elem(nst.m, nst.name.data());
                        continue;
                    }
                }
            }

            if (debug_loglevel >= 2)
                std::cout << "mrbind: Registering custom alias: `" << alias << "` -> `" << target << "`\n";

            // Note that we're doing some juggling here with the last segment of the lhs.
            // We can't convert the final `.attr()` call of the lhs to `pybind11::handle` because it forces the attribute to be resolved,
            //   and trips on missing attributes (and the most nested lhs attribute will always be missing).
            // We could make `FindPythonObject` return `pybind11::detail::str_attr_accessor` or something, but that didn't immediately work for me,
            //   and also that helper class can dangle the string, so it's easier to do it this way.
            const char *alias_last = nullptr;
            FindPythonObject(alias, &alias_last).attr(alias_last) = FindPythonObject(target);
        }
    }

    // Display debug statistics.
    if (debug_loglevel >= 1)
    {
        std::size_t num_types_nonparsed = 0;
        [[maybe_unused]] std::size_t num_types_nonparsed_redundant = 0;
        [[maybe_unused]] std::size_t num_types_nonparsed_redundant_with_repetitions = 0;
        std::size_t num_methods = 0;
        for (auto &[id, e] : r.type_entries)
        {
            if (!e.is_parsed)
            {
                num_types_nonparsed++;
                #if MRBIND_DEBUG
                if (e.num_redundant_nonparsed_binds > 1)
                {
                    num_types_nonparsed_redundant++;
                    num_types_nonparsed_redundant_with_repetitions += e.num_redundant_nonparsed_binds - 1;
                }
                #endif
            }

            num_methods += e.func_alias_registration_funcs.funcs.size();
        }

        std::printf(
            "mrbind: Statistics:\n"
            "mrbind:     Namespaces: %zu\n"
            "mrbind:         Normal: %zu\n"
            "mrbind:         Stripped: %zu\n"
            "mrbind:     Types: %zu\n"
            "mrbind:         Parsed: %zu\n"
            "mrbind:         Custom: %zu\n"
            #if MRBIND_DEBUG
            "mrbind:             Custom types with duplicated bindings: %zu (total number of redundant bindings: %zu)\n"
            #endif
            "mrbind:     Functions: %zu\n"
            "mrbind:         Free: %zu\n"
            "mrbind:         Methods: %zu\n"
            "mrbind:     Aliases: %zu\n"
            "mrbind:         Automatic: %zu\n"
            "mrbind:         Custom: %zu\n"
        ,
            r.namespace_entries.size(),
            num_nonstripped_namespaces,
            r.namespace_entries.size() - num_nonstripped_namespaces,

            r.type_entries.size(),
            r.type_entries.size() - num_types_nonparsed,
            num_types_nonparsed,
            #if MRBIND_DEBUG
            num_types_nonparsed_redundant,
            num_types_nonparsed_redundant_with_repetitions,
            #endif

            r.func_entries.size() + num_methods,
            r.func_entries.size(),
            num_methods,

            r.custom_aliases.size() + num_noncustom_aliases,
            num_noncustom_aliases,
            r.custom_aliases.size()
        );
    }

    // Destroy the registry.
    // This not only saves memory, but also hopefully fix weird destruction order fiasco crashes.
    r = {};
    r.was_loaded = true;
}

// Some sanity checks. On Clang 18 and older those will fail if you forget the `-frelaxed-template-template-args` flag.
// MSVC is currently not supported, so they should fail always.
static_assert(std::is_same_v<MRBind::RebindContainer<std::vector<int>, float>, std::vector<float>>);
static_assert(std::is_same_v<MRBind::RebindContainer<std::map<int, float>, char, double>, std::map<char, double>>);
static_assert(std::is_same_v<MRBind::RebindContainer<std::array<int, 4>, float>, std::array<float, 4>>);

#endif // MB_DEFINE_IMPLEMENTATION



// Silence some warnings:
#ifdef __clang__
// Clang warns about `::` + `*` coming from different macros, but all compilers including Clang emit a hard error when trying to paste the two tokens together.
#pragma clang diagnostic ignored "-Wcompound-token-split-by-macro"
#endif






// Helper macros:

#define DETAIL_MB_PB11_PREPEND_COMMA_PLUS(...) __VA_OPT__(,+__VA_ARGS__)
#define DETAIL_MB_PB11_PREPEND_PLUS(...) __VA_OPT__(+__VA_ARGS__)

// A helper that generates function parameter bindings.
#define DETAIL_MB_PB11_MAKE_PARAMS(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAMS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_MAKE_PARAMS_BODY(n, d, type_, name_, default_arg_, .../*default_arg_cpp_*/) \
    MRBIND_CAT(DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_, __VA_OPT__(0))(name_, default_arg_, __VA_ARGS__)

#define DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_(name_, default_arg, default_arg_cpp_) \
    , pybind11::arg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str())
#define DETAIL_MB_PB11_MAKE_PARAMS_BODY_ARG_0(name_, default_arg_, default_arg_cpp_) \
    , MRBind::pb11::ParamWithDefaultArg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str(), MRBIND_IDENTITY default_arg_cpp_, "'" MRBIND_STR(MRBIND_IDENTITY default_arg_) "'")

// A helper that generates a list of parameter types.
// We also decay arrays and functions to pointers here.
// It's easier than doing this in the templates, and easier than trying to figure out how to make libclang do it.
#define DETAIL_MB_PB11_PARAM_TYPES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_PARAM_TYPES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_TYPES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_TYPES_BODY(n, d, type_, ...) \
    , MRBind::pb11::DecayToTrueParamType<MRBIND_IDENTITY type_>

// A helper that generates function parameter declarations, with placeholder names (to not choke on unnamed parameters), and with no default arguments.
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_BODY(n, d, type_, ...) , std::type_identity_t<MRBIND_IDENTITY type_> d
#define DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP(n, d, ...) MRBIND_CAT(d, i)

// A helper that generates function parameter uses (comma-separated names, forwarded),
// with the same placeholder names as `DETAIL_MB_PB11_MAKE_PARAM_DECLS`.
#define DETAIL_MB_PB11_MAKE_PARAM_USES(seq) MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq))
#define DETAIL_MB_PB11_MAKE_PARAM_USES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_MAKE_PARAM_USES_BODY, DETAIL_MB_PB11_MAKE_PARAM_DECLS_STEP, SF_NULL, i, seq)
#define DETAIL_MB_PB11_MAKE_PARAM_USES_BODY(n, d, ...) , std::forward<decltype(d)>(d)

// A helper that generates a list of info wrappers about each parameter.
#define DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(seq) SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_ENTRIES_BODY, SF_NULL, SF_NULL, 1, seq)
#define DETAIL_MB_PB11_PARAM_ENTRIES_BODY(n, d, type_, ...) \
    , MRBIND_IDENTITY type_

// A helper that generates a list of pybind type names corresponding to the C++ parameter types.
#define DETAIL_MB_PB11_PARAM_PB_SIGNATURE(seq) { SF_FOR_EACH0(DETAIL_MB_PB11_PARAM_PB_SIGNATURE_BODY, SF_NULL, SF_NULL, 1, seq) }
#define DETAIL_MB_PB11_PARAM_PB_SIGNATURE_BODY(n, d, type_, ...) \
    typeid(MRBind::pb11::ToPybindSignatureType<MRBind::pb11::AdjustedParamType<MRBind::pb11::DecayToTrueParamType<MRBIND_IDENTITY type_>>>),

// Returns the number of function parameters with default arguments.
#define DETAIL_MB_PB11_NUM_DEF_ARGS(seq) 0 SF_FOR_EACH0(DETAIL_MB_PB11_NUM_DEF_ARGS_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_NUM_DEF_ARGS_BODY(n, d, type_, name_, default_arg_, .../*default_arg_cpp_*/) __VA_OPT__(+1)

// A helper for `MB_ENUM` that generates the elements.
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS(name, seq) SF_FOR_EACH(DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY, SF_STATE, SF_NULL, name, seq)
#define DETAIL_MB_PB11_MAKE_ENUM_ELEMS_BODY(n, d, name_, value_, comment_) \
    _pb11_e.value(MRBIND_STR(name_), MRBIND_IDENTITY d::name_ DETAIL_MB_PB11_PREPEND_COMMA_PLUS(comment_));

// A helper for `MB_CLASS` that generates the base class list with a leading comma.
#define DETAIL_MB_PB11_BASE_TYPES(seq) SF_FOR_EACH(DETAIL_MB_PB11_BASE_TYPES_BODY, SF_NULL, SF_NULL,, seq)
#define DETAIL_MB_PB11_BASE_TYPES_BODY(n, d, type_, virtual_) , MRBIND_IDENTITY type_

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
    +[]( DETAIL_MB_PB11_MAKE_PARAM_DECLS(params_) ) -> decltype(auto) {return simplename_( DETAIL_MB_PB11_MAKE_PARAM_USES(params_) );}

// `name_` is the entity name string literal.
// `message_` is the deprecation reasong string literal, empty string if deprecated with no reason, completely empty if not deprecated.
// `...` is a function pointer or a member function pointer.
// If `message_` is empty, returns `...` unchanged. Otherwise wraps it in `MRBind::pb11::deprecation_wrapper<...>`, which prints a deprecation message when called,
//   but still forwards the call.
#define DETAIL_MB_PB11_DEPRECATION_WRAPPER(name_, message_, .../*func*/) DETAIL_MB_PB11_DEPRECATION_WRAPPER_1((__VA_ARGS__), name_, message_)
#define DETAIL_MB_PB11_DEPRECATION_WRAPPER_1(p_func_, name_, .../*message*/) MRBIND_CAT(DETAIL_MB_PB11_DEPRECATION_WRAPPER_2_, __VA_OPT__(1))(name_, __VA_ARGS__, MRBIND_IDENTITY p_func_)
#define DETAIL_MB_PB11_DEPRECATION_WRAPPER_2_1(name_, message_, .../*func*/) MRBind::pb11::deprecation_wrapper<__VA_ARGS__, name_, message_>
#define DETAIL_MB_PB11_DEPRECATION_WRAPPER_2_(name_, message_, .../*func*/) __VA_ARGS__

#define DETAIL_MB_PB11_IF_STATIC_(x, y) y
#define DETAIL_MB_PB11_IF_STATIC_static(x, y) x

#define DETAIL_MB_PB11_IS_EXPLICIT_() false
#define DETAIL_MB_PB11_IS_EXPLICIT_explicit() true

#define DETAIL_MB_PB11_CONV_OP_KIND_() MRBind::pb11::FuncKind::conv_op
#define DETAIL_MB_PB11_CONV_OP_KIND_explicit() MRBind::pb11::FuncKind::conv_op_explicit

// If the parameter is empty, returns `nullptr`. Otherwise prepends `+`. This is intended for optional comment strings, and `+` forces a conversion to a pointer, which helps reduce the number of instantiations.
#define DETAIL_MB_PB11_COMMENT_PTR(...) MRBIND_CAT(DETAIL_MB_PB11_COMMENT_PTR_, __VA_OPT__(1))(__VA_ARGS__)
#define DETAIL_MB_PB11_COMMENT_PTR_(...) nullptr
#define DETAIL_MB_PB11_COMMENT_PTR_1(...) +__VA_ARGS__

// Returns the "namespace marker" class for the given namespace stack.
// E.g. given `(a,ns)(b,ns)(c,cl)`, this returns `MRBind::pb11::NsMarker<MRBind::ns:: a::b::c ::_pb11_ns_marker>`.
#define DETAIL_MB_PB11_NS_MARKER(ns_stack_) MRBind::pb11::NsMarker<SF_FOR_EACH(DETAIL_MB_PB11_NS_MARKER_BODY, SF_NULL, SF_NULL,, ns_stack_) ::_pb11_ns_marker>
#define DETAIL_MB_PB11_NS_MARKER_BODY(n, d, name_, kind_) ::name_



// #################################### STAGE 0 ####################################

#define MB_INCLUDE_ORIGINAL_HEADER 2

// Define the marker structs for all the namespaces.
// The one for the global namespace is defined at the top of this file.
#define MB_NAMESPACE(namespace_, inline_, ns_stack_, comment_) \
    inline_ namespace namespace_ \
    { \
        struct MB_PB11_EXPORT_TYPE _pb11_ns_marker;

#define MB_END_NAMESPACE(namespace_, inline_, ns_stack_) \
    }

#include <mrbind/helpers/define_missing_macros.h>
#define MB_PB11_STAGE 1
#define MB_AGAIN

#elif MB_PB11_STAGE == 1 // #################################### STAGE 1 ####################################

#include <mrbind/helpers/undef_all_macros.h>

#define MB_FILE static const char MRBIND_UNIQUE_VAR = []{
#define MB_END_FILE return char{}; }();

// For namespaces, emit braces with `using namespace`.
// This helps with name lookup for default arguments (where we can't easily fully qualify the types ourselves).
#define MB_NAMESPACE(namespace_, inline_, ns_stack_, comment_) \
    { \
        using namespace namespace_; \
        using _pb11_this_ns [[maybe_unused]] = DETAIL_MB_PB11_NS_MARKER(ns_stack_(namespace_,ns)); \
        (void)MRBind::pb11::RegisterNamespaceMarker<_pb11_this_ns, DETAIL_MB_PB11_NS_MARKER(ns_stack_)>{}; \

#define MB_END_NAMESPACE(namespace_, inline_, ns_stack_) \
    }

// Bind a function.
#define MB_FUNC(ret_, name_, simplename_, qualname_, fullqualname_, ns_stack_, deprecated_, comment_, params_) \
    MRBind::pb11::GetRegistry().func_entries.emplace_back( \
        /* Qualified name */\
        MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Qualified name with template arguments */\
        MRBIND_STR(MRBIND_IDENTITY fullqualname_), \
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, MRBind::pb11::TryAddFuncState &_pb11_state, MRBind::pb11::TryAddFuncScopeState &_pb11_scope_state, int _pb11_pass_number, const char *_pb11_qual_name, const char *_pb11_qual_name_with_template_args, MRBind::pb11::FuncAliasRegistrationFuncs *_pb11_func_alias_registration_funcs) \
        {\
            MRBind::pb11::TryAddFunc<\
                MRBind::pb11::FuncKind::nonmember_or_static, \
                /* The function pointer or a lambda. */\
                DETAIL_MB_PB11_DEPRECATION_WRAPPER( MRBIND_STR(MRBIND_IDENTITY fullqualname_), deprecated_, DETAIL_MB_PB11_FUNC_PTR_OR_LAMBDA(ret_, name_, qualname_, ns_stack_, params_) ) \
                /* Parameter types. */\
                DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_) \
            >( \
                _pb11_m, \
                /* Simple name */\
                MRBIND_STR(simplename_), \
                /* Qualified name */\
                _pb11_qual_name, \
                /* Qualified name with template arguments */\
                _pb11_qual_name_with_template_args, \
                /* Pybind signature (to detect overloadable functions). */\
                DETAIL_MB_PB11_PARAM_PB_SIGNATURE(params_), \
                /* Pass information. */\
                &_pb11_state, &_pb11_scope_state, _pb11_pass_number, \
                /* Func alias information. */\
                _pb11_func_alias_registration_funcs, \
                /* Pybind extras: */\
                [](auto _pb11_f){_pb11_f(MRBIND_STRIP_LEADING_COMMA( \
                    /* Parameters. */\
                    DETAIL_MB_PB11_MAKE_PARAMS(params_) \
                    /* Comment, if any. */ \
                    MRBIND_PREPEND_COMMA(comment_) \
                ));} \
            ); \
        } \
    );

// Bind a enum.
#define MB_ENUM(kind_, name_, qualname_, ns_stack_, type_, comment_, elems_) \
    MRBind::pb11::GetRegistry().type_entries.try_emplace( \
        typeid(MRBIND_IDENTITY qualname_), \
        /* Is parsed? */\
        true, \
        /* Parent namespace or class. */\
        typeid(_pb11_this_ns), \
        /* Comment: */\
        DETAIL_MB_PB11_COMMENT_PTR(comment_), \
        /* Emit docstrings? */\
        false, /* Don't generate docstrings for enums, this crashes for some reason. And passing it to `enum_` below seems to have no effect? Weird. */ \
        /* C++ type name: */\
        +MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Init lambda. */\
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::pb11::BasicPybindType> \
        { \
            return std::make_unique<MRBind::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>>>(*_pb11_m.handle, _pb11_n); \
        }, \
        /* Members lamdba. */\
        +[](MRBind::pb11::BasicPybindType &_pb11_b, MRBind::pb11::TypeEntry::AddClassMembersState &_pb11_state, MRBind::pb11::FuncAliasRegistrationFuncs *) \
        { \
            if (_pb11_state.pass_number != 0) return; /* Only one pass is needed. */\
            [[maybe_unused]] pybind11::enum_<MRBIND_IDENTITY qualname_> &_pb11_e = static_cast<MRBind::pb11::SpecificPybindType<pybind11::enum_<MRBIND_IDENTITY qualname_>> &>(_pb11_b).type; \
            DETAIL_MB_PB11_MAKE_ENUM_ELEMS(qualname_, elems_); \
        }, \
        std::unordered_set<MRBind::TypeIndex>{} \
    ); \

// This generates the aggregate constructor for a class if needed.
// First we check if the class is actually an aggregate, and additionally we reject any classes with bases (for simplicity, for now).
// If all conditions pass, we call `TryAddCtor(...)` with the correct arguments.
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR(is_aggregate_, bases_, members_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_,is_aggregate_)(members_, bases_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_0(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_A_1(members_, .../*bases_*/) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_,__VA_OPT__(1))(members_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_1(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_B_(...) __VA_OPT__(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_C(__VA_ARGS__))
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_C(members_) \
    (MRBind::pb11::TryAddAggregateCtor< \
        /* Non-static data member types: */\
        MRBIND_STRIP_LEADING_COMMA( SF_FOR_EACH1(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY, SF_NULL, SF_NULL,, members_) ) \
    >)( \
        _pb11_c \
        /* Non-static data member names: (note, no comma before this) */\
        SF_FOR_EACH1(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY, SF_NULL, SF_NULL,, members_) \
        , "Implicit aggregate constructor." \
    );
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY(n, d, kind_, ...) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_, kind_)(__VA_ARGS__)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_ctor(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_method(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_conv_op(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field(static_, type_, name_, fullname_, comment_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_,static_)(type_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_static(type_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_TYPE_BODY_field_(type_) , MRBIND_IDENTITY type_
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY(n, d, kind_, ...) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_, kind_)(__VA_ARGS__)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_ctor(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_method(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_conv_op(...)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field(static_, type_, name_, fullname_, comment_) MRBIND_CAT(DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_,static_)(name_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_static(name_)
#define DETAIL_MB_PB11_ADD_AGGREGATE_CTOR_NAME_BODY_field_(name_) , pybind11::arg(MRBind::pb11::AdjustPythonKeywords(MRBIND_STR(name_)).c_str())


// Bind a class.
#define MB_CLASS(kind_, name_, qualname_, ns_stack_, is_aggregate_, comment_, bases_, members_) \
    MRBind::pb11::GetRegistry().type_entries.try_emplace( \
        typeid(MRBIND_IDENTITY qualname_), \
        /* Is parsed? */\
        true, \
        /* Parent namespace or class. */\
        typeid(_pb11_this_ns), \
        /* Comment: */\
        DETAIL_MB_PB11_COMMENT_PTR(comment_), \
        /* Emit docstrings? */\
        true, \
        /* C++ type name: */\
        +MRBIND_STR(MRBIND_IDENTITY qualname_), \
        /* Init lambda. */\
        +[](MRBind::pb11::ModuleOrClassRef _pb11_m, const char *_pb11_n) -> std::unique_ptr<MRBind::pb11::BasicPybindType> \
        { \
            using _pb11_C = MRBIND_IDENTITY qualname_; \
            using _pb11_T = MRBind::pb11::SpecificPybindType<pybind11::class_<_pb11_C, MRBind::pb11::SelectPybindHolder<_pb11_C> DETAIL_MB_PB11_BASE_TYPES(bases_)>>; \
            return std::make_unique<_pb11_T>(*_pb11_m.handle, _pb11_n); \
        }, \
        /* Members lamdba. */\
        +[](MRBind::pb11::BasicPybindType &_pb11_b, MRBind::pb11::TypeEntry::AddClassMembersState &_pb11_state, [[maybe_unused]] MRBind::pb11::FuncAliasRegistrationFuncs *_pb11_func_alias_registration_funcs) \
        { \
            using _pb11_C = MRBIND_IDENTITY qualname_; \
            using _pb11_T = MRBind::pb11::SpecificPybindType<pybind11::class_<_pb11_C, MRBind::pb11::SelectPybindHolder<_pb11_C> DETAIL_MB_PB11_BASE_TYPES(bases_)>>; \
            auto &_pb11_c = static_cast<_pb11_T *>(&_pb11_b)->type; \
            DETAIL_MB_PB11_DISPATCH_MEMBERS(qualname_, members_) \
            /* Finalize at the end of pass 1, before adding greedy function overloads accepting `pybind11::object` (like iostreams). */\
            if (_pb11_state.pass_number == 1) \
            { \
                (MRBind::pb11::FinalizeClass<_pb11_C>)(_pb11_c, _pb11_state.func_scope_state); \
                /* Add the aggregate constructor if needed. */\
                DETAIL_MB_PB11_ADD_AGGREGATE_CTOR(is_aggregate_, bases_, members_) \
            } \
        }, \
        MRBind::pb11::MakeBaseTypeids<MRBIND_STRIP_LEADING_COMMA(DETAIL_MB_PB11_BASE_TYPES(bases_))>() \
    ); \
    \
    { \
        using _pb11_this_ns [[maybe_unused]] = MRBIND_IDENTITY qualname_; \

#define MB_END_CLASS(name_) \
    }

// A helper for `MB_CLASS` that handles different kinds of class members.
#define DETAIL_MB_PB11_DISPATCH_MEMBERS(classname, seq) SF_FOR_EACH1(DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY, SF_STATE, SF_NULL, classname, seq)
#define DETAIL_MB_PB11_DISPATCH_MEMBERS_BODY(n, d, kind_, ...) \
    MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_, kind_)(d, __VA_ARGS__)

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a field.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field(qualname_, static_, type_, name_, fullname_, comment_) \
    if (_pb11_state.pass_number == 0) \
    { \
        MRBind::pb11::MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_,static_)(TryAddMemberVarStatic, TryAddMemberVar)< \
            /* Accessor lambda or pointer. */\
            MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_,static_)(qualname_, fullname_),\
            /* Type. */\
            MRBIND_IDENTITY type_ \
        >(\
            _pb11_c,\
            /* Name. */\
            MRBind::pb11::ToPythonName(MRBIND_STR(MRBIND_IDENTITY fullname_)).c_str()\
            /* Comment, if any. */\
            DETAIL_MB_PB11_PREPEND_COMMA_PLUS(comment_)\
        ); \
        /* Add `offsetof` static variables. */\
        MRBIND_CAT(DETAIL_MB_PB11_DISPATCH_MEMBER_field_OFFSETOF_,static_)(qualname_, name_) \
    }

#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_(class_qualname_, fullname_) [](_pb11_C &_pb11_o)->auto&&{return _pb11_o.MRBIND_IDENTITY fullname_;}
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_LAMBDA_static(class_qualname_, fullname_) &(MRBIND_IDENTITY class_qualname_::MRBIND_IDENTITY fullname_)

// Add an `_offsetof_X` static variable for every non-static data member.
// Note, `using _self` is here to allow commas in `class_qualname_`.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_OFFSETOF_(class_qualname_, name_) _pb11_c.def_property_readonly_static(+"_offsetof_" #name_, +[](const pybind11::object &){using _self = MRBIND_IDENTITY class_qualname_; return MB_PB11_OFFSETOF(_self, name_);});
#define DETAIL_MB_PB11_DISPATCH_MEMBER_field_OFFSETOF_static(class_qualname_, name_)

#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor(...) DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(__VA_ARGS__) // Need an extra level of nesting for the Clang's dumb MSVC preprocessor imitation.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_ctor_0(qualname_, explicit_, copy_move_kind_, deprecated_, comment_, params_) \
    MRBind::pb11::TryAddCtor<\
        /* Copy/move kind. */\
        MRBind::pb11::CopyMoveKind::copy_move_kind_, \
        /* Default argument counter, to detect converting constructors. */\
        DETAIL_MB_PB11_NUM_DEF_ARGS(params_),\
        /* Explicit? */\
        MRBIND_CAT(DETAIL_MB_PB11_IS_EXPLICIT_, explicit_)()\
        /* Parameter types. */\
        DETAIL_MB_PB11_PARAM_ENTRIES_WITH_LEADING_COMMA(params_)\
    >( \
        _pb11_c, \
        &_pb11_state.func_scope_state, _pb11_state.pass_number \
        /* Parameters. */\
        DETAIL_MB_PB11_MAKE_PARAMS(params_) \
        /* Comment, if any. */\
        DETAIL_MB_PB11_PREPEND_COMMA_PLUS(comment_) \
    );

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a method.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_method(qualname_, static_, assignment_kind_, ret_, name_, simplename_, fullname_, const_, deprecated_, comment_, params_) \
    MRBind::pb11::TryAddFunc< \
        /* Is this function static? */\
        MRBind::pb11::FuncKind:: MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(nonmember_or_static, member_nonstatic),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        DETAIL_MB_PB11_DEPRECATION_WRAPPER( MRBIND_STR(MRBIND_IDENTITY fullname_), deprecated_, static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_CAT(DETAIL_MB_PB11_IF_STATIC_, static_)(,MRBIND_IDENTITY qualname_::)*)(DETAIL_MB_PB11_PARAM_TYPES(params_)) const_>(&MRBIND_IDENTITY qualname_:: name_) ) \
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
        MRBIND_STR(name_), \
        /* Full name with template arguments. */\
        MRBIND_STR(MRBIND_IDENTITY fullname_), \
        /* Pybind signature. */\
        DETAIL_MB_PB11_PARAM_PB_SIGNATURE(params_), \
        /* State information. */\
        &_pb11_state.NextFuncState(), &_pb11_state.func_scope_state, _pb11_state.pass_number, \
        /* Func alias information. */\
        _pb11_func_alias_registration_funcs, \
        /* Pybind extras: */\
        [](auto _pb11_f){_pb11_f(MRBIND_STRIP_LEADING_COMMA( \
            /* Parameters. */\
            DETAIL_MB_PB11_MAKE_PARAMS(params_) \
            /* Comment, if any. */ \
            MRBIND_PREPEND_COMMA(comment_) \
        ));} \
    ); \
    /* If this is `__getitem__`, also generate `__setitem__`. */\
    DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT(simplename_, params_, const_)

// `DETAIL_MB_PB11_DISPATCH_MEMBER_method` calls this to generate the assigning overload of `[]`. The normal non-assigning overload is generated the normal way.
// Only has effect if `simplename_` == `_Subscript`. Then calls `TryAddMutableSubscriptOperator()`.
#define DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT(simplename_, params_, const_) DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_A(MRBIND_CAT(DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_CHECK, simplename_)())(params_, const_)
#define DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_CHECK_Subscript() x,
#define DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_A(...) DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_B(__VA_ARGS__, DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_MAKE, MRBIND_NULL)
#define DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_B(a, b, c, ...) c
#define DETAIL_MB_PB11_MAYBE_MAKE_INDEX_ASSIGNMENT_MAKE(params_, const_) \
    if (_pb11_state.pass_number == 0) \
        MRBind::pb11::TryAddMutableSubscriptOperator<_pb11_C const_, DETAIL_MB_PB11_PARAM_TYPES(params_)>(_pb11_c);

// A helper for `DETAIL_MB_PB11_DISPATCH_MEMBERS` that generates a conversion function.
#define DETAIL_MB_PB11_DISPATCH_MEMBER_conv_op(qualname_, explicit_, ret_, const_, deprecated_, comment_) \
    if (_pb11_state.pass_number == 0) \
    MRBind::pb11::TryAddFuncSimple< \
        /* Function kind: a conversion operator, possibly explicit. */\
        MRBIND_CAT(DETAIL_MB_PB11_CONV_OP_KIND_, explicit_)(),\
        /* Member pointer. */\
        /* Cast to the correct type to handle overloads correctly. Interestingly, the cast can cast away `noexcept` just fine. I don't think we care about it? */\
        static_cast<std::type_identity_t<MRBIND_IDENTITY ret_>(MRBIND_IDENTITY qualname_::*)() const_>(&MRBIND_IDENTITY qualname_::operator MRBIND_IDENTITY ret_), \
        /* The only parameter, which is the class itself. */\
        _pb11_C & \
    >( \
        _pb11_c, \
        /* Operator name. */\
        MRBind::pb11::GetConversionFuncName<MRBIND_IDENTITY ret_>(MRBIND_STR(MRBIND_IDENTITY ret_)).c_str(), \
        /* Func alias information. */\
        _pb11_func_alias_registration_funcs, \
        /* Pybind extras: */\
        [](auto _pb11_f){_pb11_f( \
            /* Comment, if any. */ \
            comment_ \
        );} \
    );

#define MB_REGISTER_TYPE(i_, name_source_, ...) \
    /* Just in case, register identity spelling. */\
    DETAIL_MB_PB11_ALT_SPELLING((__VA_ARGS__), (__VA_ARGS__));

#define MB_REGISTER_TYPE_RETURNED(i_, name_source_, ...) (void)MRBind::pb11::RegisterReturnType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_PARAM(i_, name_source_, ...)    (void)MRBind::pb11::RegisterParamType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_PARSED(i_, name_source_, ...)   (void)MRBind::pb11::RegisterTypesWithCustomBindingIfApplicable<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_BASE(i_, name_source_, ...)                  MB_REGISTER_TYPE_PARSED(i_, name_source_, __VA_ARGS__)
#define MB_REGISTER_TYPE_NONSTATIC_DATA_MEMBER(i_, name_source_, ...) (void)MRBind::pb11::RegisterFieldType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_STATIC_DATA_MEMBER(i_, name_source_, ...)    (void)MRBind::pb11::RegisterFieldType<__VA_ARGS__>{};
#define MB_REGISTER_TYPE_TYPEDEF_TARGET(i_, name_source_, ...)        MB_REGISTER_TYPE_PARSED(i_, name_source_, __VA_ARGS__)

#define MB_ALT_TYPE_SPELLING(i_, name_source_, type_, spelling_) // Base version is empty, we check the specific usecases.

#define MB_ALT_TYPE_SPELLING_RETURNED(i_, name_source_, type_, spelling_)              DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_PARAM(i_, name_source_, type_, spelling_)                 DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_PARSED(i_, name_source_, type_, spelling_)                DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_BASE(i_, name_source_, type_, spelling_)                  DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_NONSTATIC_DATA_MEMBER(i_, name_source_, type_, spelling_) DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_STATIC_DATA_MEMBER(i_, name_source_, type_, spelling_)    DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_TYPEDEF_TARGET(i_, name_source_, type_, spelling_)        DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_)
#define MB_ALT_TYPE_SPELLING_TYPEDEF_NAME(i_, name_source_, type_, spelling_)          DETAIL_MB_PB11_ALT_SPELLING              (              type_, spelling_)

// This one registers the spelling only if `name_source_` is empty. Because if it's `custom` instead, it means the canonical name comes from
// a `preferred_name` attribute, and we don't want to alias that
#define DETAIL_MB_PB11_ALT_SPELLING(type_, spelling_) MRBind::pb11::RegisterTypeAlias<MRBIND_IDENTITY type_>(MRBIND_STR(MRBIND_IDENTITY spelling_));
#define DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM(name_source_, type_, spelling_) MRBIND_CAT(DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM_, name_source_)(type_, spelling_)
#define DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM_(type_, spelling_) DETAIL_MB_PB11_ALT_SPELLING(type_, spelling_)
#define DETAIL_MB_PB11_ALT_SPELLING_IF_NOT_CUSTOM_custom(type_, spelling_)


// Add missing macros.
#include <mrbind/helpers/define_missing_macros.h>

#endif

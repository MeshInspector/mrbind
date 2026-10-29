#pragma once

#include "generators/c_interop/c_output_desc.h"

#include <cstddef>
#include <map>
#include <optional>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace mrbind::Python
{
    // Generates a CPython extension module (C++ source, limited API) from the C bindings description JSON.
    // The module calls the C bindings, and mimics the Python API that the pybind11 target produces for the same headers:
    //   the same class/function/field names, the same overloads with keyword arguments and default arguments, the same docstrings.
    // The C bindings must be generated with the same parser flags as for pybind11, except `--copy-inherited-members` is fine (the copies are skipped).
    struct Generator
    {
        // Input: [
        CInterop::OutputDesc c_desc;
        // The name of the extension module, e.g. `mrmeshpy`. The init function is `PyInit_<name>`.
        std::string module_name;
        // The name the module is imported as, for the type names in the docstrings, e.g. `meshlib.mrmeshpy`. Defaults to `module_name`.
        std::string module_qualname;
        // Like `--replace-namespace` in the other generators: an empty `second` removes the namespace, so its contents go directly into the module.
        // This is what `MB_PB11_STRIPPED_NAMESPACES` does for pybind11.
        std::vector<std::pair<std::vector<std::string>, std::vector<std::string>>> replaced_namespaces;
        // Regex replacements applied to the C++ type names before making the Python names from them, like `MB_PB11_ADJUST_NAMES`.
        std::vector<std::pair<std::string, std::string>> name_adjustments;
        // Extra Python names, like `RegisterCustomAlias()` in the pybind11 target: (alias, target), both dotted paths in the module.
        std::vector<std::pair<std::string, std::string>> aliases;
        // Fields hidden from Python by name, e.g. the ones made public only for the C bindings.
        std::set<std::string> hidden_fields;
        // `MR_BIND_IGNORE_PY` isn't visible in the C bindings: regexes on the C++ names (also the `typeid` spellings) of the entities to skip.
        std::vector<std::string> ignored_for_python;
        // ]

        // Output: relative paths to file contents.
        std::map<std::string, std::string> output_files;

        void Generate();

        // Statistics.
        std::size_t num_funcs_total = 0;
        std::size_t num_funcs_skipped = 0;
        std::vector<std::string> skipped_funcs; // With the reasons.

      private:
        // A Python scope: the module, a namespace (a class in pybind11), or a class.
        struct Scope
        {
            std::string qualname; // Empty for the module.
            std::string var; // The C++ variable holding the scope object in the generated code.
            std::vector<std::string> ns_parts; // For namespaces.
        };

        struct TypeInfo
        {
            std::string cpp_name;
            const CInterop::TypeKinds::Class *class_desc = nullptr;
            const CInterop::TypeKinds::Enum *enum_desc = nullptr;
            const CInterop::TypeTraits *traits = nullptr;
            std::string c_name;
            std::string py_name; // Unqualified.
            std::string py_qualname; // Relative to the module, e.g. `MR.Widget`.
            std::string scope_var; // Where the class is stored.
            std::string var; // `T_<n>` for classes (a `TypeRecord`), `E_<n>` for enums (a `PyObject *`).
            std::vector<const TypeInfo *> bases; // Direct bases.
            bool is_std_function = false;
            bool is_vector = false; // `std::vector<T>`, gets the API of `pybind11::bind_vector()`.
            bool is_array = false; // `std::array<T, N>`, an exposed struct with `elems`.
            bool is_map = false; // A hash map or a map, gets the API of `pybind11::bind_map()`.
            bool no_class = false; // No Python class, e.g. `std::string` is a `str`.
            bool callable_unsupported = false;
            // `std::shared_ptr<T>`: no Python class, the instances of `T` are used instead (pybind11 uses it as the holder).
            const TypeInfo *pointee = nullptr;
            bool pointee_const = false;
            // `expected<T, E>`: no Python class, the functions return `T` or throw.
            bool is_expected = false;
            std::string expected_value, expected_error; // C++ types.
            bool has_implicit = false;
            // `std::pair<A, B>`: no Python class, a `tuple` (C++ types).
            std::string pair_first, pair_second;
            // `std::optional<T>`: no Python class, `None` or `T`.
            std::string optional_value; // C++ type, empty if not an optional. // Has `implicit_<var>()`, the implicit conversions from the non-explicit constructors. // A `std::function` that can't wrap a Python callable, because of its parameter or return types.
            bool is_signed_enum = true;
            std::string enum_c_underlying;

            [[nodiscard]] bool IsClass() const {return class_desc != nullptr;}
            [[nodiscard]] bool IsEnum() const {return enum_desc != nullptr;}
            [[nodiscard]] bool IsExposedStruct() const {return class_desc && class_desc->kind == CInterop::ClassKind::exposed_struct;}
        };

        std::map<std::string, TypeInfo> types; // By the C++ name.
        std::unordered_map<std::string, TypeInfo *> types_by_c_name;
        std::vector<TypeInfo *> class_order; // Bases before derived, scopes before members.

        // The namespaces seen in the input, by C++ qualified name (`MR`, `MR::Nested`), to their Python scope.
        std::map<std::string, Scope> namespaces;
        std::vector<std::string> namespace_order;

        // The generated code.
        std::string out_decls; // Type records, forward declarations.
        std::string out_impls; // Overload implementations, groups, method tables.
        std::string out_init; // The body of the init function, after the classes are created.
        std::string out_init_classes; // Creating the classes.
        std::set<std::string> c_includes;
        std::size_t counter = 0;

        [[nodiscard]] std::string NewId(std::string_view prefix) {return std::string(prefix) + std::to_string(counter++);}

        // One Python parameter of a wrapper.
        struct PyParam
        {
            std::string name; // Empty if unnamed.
            std::string type; // For the docs.
            std::string default_repr; // Empty if no default.
        };

        // A prepared overload: the implementation function plus what the docs need.
        struct PreparedOverload
        {
            std::string impl; // The implementation function name.
            std::vector<PyParam> params; // Including `self`.
            std::string ret_type; // For the docs.
            std::string comment; // Processed, may be empty.
            std::size_t num_required = 0;
            std::string cpp_signature; // To skip the inherited copies.
            std::string template_py_name; // The name with the template arguments, for the disambiguation of the overloads.
        };

        struct GroupEntry
        {
            std::string py_name;
            std::vector<PreparedOverload> overloads;
        };

        // Converts a C++ type to how pybind11 spells it in the signatures.
        [[nodiscard]] std::string DocTypeName(std::string cpp_type, bool is_return);
        [[nodiscard]] std::string DefaultArgRepr(const CInterop::FuncParam &param);
        // Statements converting the C value `expr` (of a C++ type `cpp_type`) to a new `PyObject *out`. `owner` is kept alive by the returned references.
        // `borrowed` is for the callback parameters: the objects by value are the caller's, so they are copied or referenced, never owned.
        [[nodiscard]] std::optional<std::string> CToPy(const std::string &cpp_type, const std::string &c_type, const std::string &expr, const std::string &owner, const std::string &out, bool borrowed = false);
        // For the callback trampolines: converts the Python result `py` to the C value `out`, or throws with the GIL state `gil_`.
        [[nodiscard]] std::optional<std::string> PyToCReturn(const std::string &cpp_type, const std::string &c_type, const std::string &py, const std::string &out);
        // `require_generated_from`: the C generator appends `Generated from ...` to the comments of the entities parsed from C++,
        //   so the comments without it are invented by the C generator, and pybind11 has nothing there.
        [[nodiscard]] static std::string ProcessComment(const std::string &c_style, bool require_generated_from = true);

        // Generates the implementation of one overload. `this_type` is null for free functions.
        // `self_kind`: 0 = no self, 1 = a method (`this` is slot 0), 2 = a constructor (slot 0 is the instance being initialized).
        // `swap_first_two` is for the reflected operators (`__rmul__`): Python passes the class instance first.
        [[nodiscard]] std::optional<PreparedOverload> PrepareOverload(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, int self_kind, bool swap_first_two = false);

        // Emits a dispatch group and returns the `PyMethodDef` variable name.
        [[nodiscard]] std::string EmitGroup(const GroupEntry &group, const TypeInfo *cls, bool is_method, bool is_init, int py_flags_extra = 0);
        [[nodiscard]] static std::string MakeDocString(const GroupEntry &group, bool is_method_self_visible);
        // Like `DisambiguatePythonName()` of the pybind11 target: if a name has overloads with the same Python signature, the template instances
        //   in it move to their names with the template arguments.
        static void DisambiguateTemplates(std::vector<GroupEntry> &groups);
        [[nodiscard]] std::string TemplatePyName(const std::string &full_name);

        void CollectTypes();
        void EmitClassMembers(TypeInfo &info);
        void EmitFreeFunctions();
        void EmitStdFunction(TypeInfo &info);
        void EmitStdFunctionMembers(TypeInfo &info);
        void EmitVectorMembers(TypeInfo &info);
        void EmitArrayMembers(TypeInfo &info);
        void EmitMapMembers(TypeInfo &info);
        void EmitOptionalMembers(TypeInfo &info);
        [[nodiscard]] bool IsIgnoredForPython(const std::string &cpp_name);
        // A primitive for the Python parts of the container APIs: a builtin taking `num_params` positional arguments, `body` uses `a[i]`.
        // Returns the `PyMethodDef` variable.
        [[nodiscard]] std::string CustomPrim(const std::string &body, std::size_t num_params);
        // Statements printing the C object at `ptr` (of C++ type `cpp_type`) to `ss_` like `operator<<` in C++, or null if not printable.
        [[nodiscard]] std::optional<std::string> PrintElem(const std::string &cpp_type, const std::string &ptr);
        // Statements assigning the Python object `py` to the C object at `dst`. On failure they set an error and return null.
        [[nodiscard]] std::optional<std::string> AssignFromPy(const std::string &cpp_type, const std::string &dst, const std::string &py);
        // Statements converting `py` to a pointer `var` to a C object of C++ type `cpp_type` (for `const T &` parameters).
        [[nodiscard]] std::optional<std::string> ArgToPtr(const std::string &cpp_type, const std::string &py, const std::string &var);
        // `IsListConstructibleSequence` of the pybind11 target: gets a constructor from a `list` and the implicit conversion.
        [[nodiscard]] bool IsListConstructible(const TypeInfo &info);
        bool views_created = false;
        // The `<T>_output` classes in use: C++ scalar type -> the `TypeRecord` variable.
        std::map<std::string, std::string> output_types;
        [[nodiscard]] std::string RequireOutputType(const std::string &scalar);
        [[nodiscard]] std::string OutputTypeName(const std::string &scalar);
        // The fields of exposed structs, which are accessed directly.
        void EmitExposedField(TypeInfo &info, const CInterop::ClassField &f);
        // Finds a method by the C name suffix, e.g. `_size`.
        [[nodiscard]] static const CInterop::ClassMethod *FindMethod(const TypeInfo &info, std::string_view c_name_suffix);

        [[nodiscard]] std::string AdjustName(std::string name) const;
        // Spells a C++ type like the demangled `typeid()` that pybind11 makes the names from: typedefs expanded, `T const`.
        [[nodiscard]] std::string TypeidSpelling(std::string name);
        // `typeid(T)` drops the references and the top-level constness, but keeps the pointers.
        [[nodiscard]] std::string TypeidArg(std::string type);
        std::unordered_map<std::string, std::string> typedef_targets; // For `TypeidSpelling()`.
        // The typedef names as aliases of the classes.
        void EmitAliases();
        // From `type_aliases`: the aliases by target type (in the order of the spellings, as in the docs), computed before the classes.
        struct AliasEntry {std::string scope_var, name, qualname; bool doc_only = false;};
        std::map<const TypeInfo *, std::vector<AliasEntry>> aliases_by_type;
        void CollectAliases();
        // The implicit conversions: `static bool implicit_T(PyObject *src, PyObject *&tmp)`.
        void EmitImplicitConversions();
        std::string out_implicit;
        // The check of an object, then the implicit conversion in the second pass. `a` is the argument, `v` receives the pointer.
        [[nodiscard]] std::string ArgObjectWithImplicit(const TypeInfo &cls, const std::string &a, const std::string &v, bool allow_none, bool optional_arg);
        // A new `std::shared_ptr<const void>` (as `void *`) sharing the ownership with the `std::shared_ptr` `expr` of type `sp`.
        [[nodiscard]] std::string HolderFromSharedPtr(const TypeInfo &sp, const std::string &expr);
        [[nodiscard]] const TypeInfo *FindType(const std::string &cpp_name) const;
        // pybind11's generic extras of every class: `__iter__` (from `begin()`/`end()`), `__len__` (contiguous sequences), `__repr__` (from `operator<<`).
        // Returns the prepared overloads by Python name.
        [[nodiscard]] std::vector<std::pair<std::string, PreparedOverload>> MakeGenericExtras(const TypeInfo &info);
        // An element of a pointer range, stepped by `step` (`+ 1` or an `OffsetPtr()` call).
        [[nodiscard]] std::optional<std::string> PointerStep(const std::string &ptr_c_type, const std::string &expr);
                [[nodiscard]] std::vector<std::string> ApplyNamespaceReplacements(std::vector<std::string> parts) const;
        [[nodiscard]] Scope &GetNamespaceScope(const std::vector<std::string> &cpp_parts);
    };

    // pybind11's `ToPythonName()`: non-identifier characters become `_`, `*` becomes `ptr`, keywords get adjusted.
    [[nodiscard]] std::string ToPythonName(std::string_view name);
    [[nodiscard]] std::string AdjustPythonKeywords(std::string name);
    // Escapes a string for a C++ string literal.
    [[nodiscard]] std::string CppStringLiteral(std::string_view str);
}

#pragma once

#include "common/strings.h"
#include "generators/c_interop/c_output_desc.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

#include <map>
#include <span>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

namespace mrbind::CSharp
{
    [[nodiscard]] std::string CppdeclToCode(const auto &value)
    {
        return cppdecl::ToCode(value, {});
    }
    [[nodiscard]] std::string CppdeclToIdentifier(const auto &value)
    {
        return cppdecl::ToString(value, cppdecl::ToStringFlags::identifier);
    }

    struct OutputFile
    {
        std::string contents;

        struct ScopeFrame
        {
            cppdecl::UnqualifiedName name; // The internal name, this isn't emitted.
            std::string close_string; // This will be used to close the scope.
        };

        // The current class and namespace stack. This is based on the assumption that
        //   we'll never have both a class and a namespace in the same scope with the same name,
        // This also affects the indentation depth.
        std::vector<ScopeFrame> current_scope;

        void DumpToOstream(std::ostream &out) const;

        // Writes the string with automatic indentation.
        // `extra_indent` is how many additional levels of indentation to add or remove from this string.
        void WriteString(std::string_view input, int extra_indent = 0);

        // Writes a separating newline, but only if the previous line doesn't end with `{`.
        void WriteSeparatingNewline();

        // Writes `}` and pops one scope from `current_scope`.
        void PopScope();

        // Writes `code_header` to the file and pushes one scope called `cpp_name` to `current_scope`. Will eventually write `close_scope` to close this scope.
        // `open_scope` and `close_scope` should have trailing newlines.
        // You can pass an empty `cpp_name` for temporary scopes.
        void PushScope(cppdecl::UnqualifiedName cpp_name, std::string_view open_scope, std::string close_scope);

        // Repeatedly calls `PushScope()` and `PopScope()` to end up in the desired namespace.
        void EnsureNamespace(std::span<const cppdecl::UnqualifiedName> new_namespace);
    };

    struct TypeBinding
    {
        struct ParamUsage
        {
            struct Strings
            {
                // An extra comment to be added on the function. Should end with a newline, and should usually have the form `/// Parameter `x` ...`.
                std::string extra_comment = "";

                // A comma-separated list of parameter declarations for the `DllImport` C# function declaration, or empty if none.
                std::string dllimport_decl_params;

                // A comma-separated list of parameter declarations for the public C# function declaration, or empty if none.
                std::string csharp_decl_params;

                // Optional. If specified, the return statement is wrapped in a scope, where this string opens it, and `scope_close` closes.
                // If not empty, must end with a newline. No indentation is needed.
                // Unlike `extra_statements[_after]`, this scope will end after the return statement.
                std::string scope_open = "";

                // Optional. The additional statements to insert for this parameter before calling the C function.
                // If not empty, must end with a newline. No indentation is needed.
                std::string extra_statements = "";

                // A comma-separated list of arguments that will be passed to the `DllImport`ed C function, or empty if none.
                std::string dllimport_args;

                // Optional. The additional statements to insert for this parameter after calling the C function.
                // If not empty, must end with a newline. No indentation is needed.
                // Those are emitted in reverse order, the opposite of `extra_statements`.
                std::string extra_statements_after = "";

                // Optional. Closes the scope opened by `scope_open`, see that for more details.
                // If not empty, must end with a newline. No indentation is needed.
                // Those are emitted in reverse order, the opposite of `scope_open`.
                std::string scope_close = "";
            };

            // Generate all the necessary strings.
            // You can ignore `have_useless_defarg` by default, unless this type can have default arguments that don't affect parameter passing style.
            // In this case, `param_usage` (not `_with_default_arg`) can receive this as `true`. In that case, you must add the default argument
            //   and reset it back to false, to indicate that you've handled it. Typically all you need to do is to add the `= null` default argument.
            std::function<Strings(const std::string &name, bool &/*have_useless_defarg*/)> make_strings;
        };

        // Unlike in C, those don't fall back to each other. Both need to be implemented separately.
        // The correct usage of those two must be chosen based on `FuncParam::default_arg_affects_parameter_passing`.
        std::optional<ParamUsage> param_usage{};
        std::optional<ParamUsage> param_usage_with_default_arg{};

        struct ReturnUsage
        {
            // If true, the returned result will always be saved to a temporary variable, and `make_return_expr` will receive that variable.
            // This is needed if `make_return_expr` wants to use the expression multiple times.
            bool needs_temporary_variable = false;

            // The return type for the `DllImport` C# function declaration.
            std::string dllimport_return_type;

            // The public C# return type.
            std::string csharp_return_type;

            // Given an expression, creates a return statement for it. If null, defaults to `"return " + expr + ";"`.
            // You can embed newlines into this, no trailing newline is needed.
            // You must not use `expr` more than once, unless you also set `needs_temporary_variable`.
            // Don't call directly, use `MakeReturnExpr()`.
            // Need `= nullptr` to tell Clang that this is optional in designated initialization.
            std::function<std::string(const std::string &expr)> make_return_expr = nullptr;

            [[nodiscard]] std::string MakeReturnExpr(const std::string &expr) const
            {
                if (make_return_expr)
                    return make_return_expr(expr);
                else
                    return "return " + expr + ';';
            }
        };

        std::optional<ReturnUsage> return_usage{};
    };

    struct Generator
    {
        Generator() {}
        // Need stable addresses for lambda captures.
        Generator(const Generator &) = delete;
        Generator &operator=(const Generator &) = delete;

        // Input: [

        // The result of parsing the input JSON.
        // Don't modify this, since we need pointer stability in a few places.
        CInterop::OutputDesc c_desc;

        // The library name to pass to `DllImport`.
        std::string imported_lib_name;

        // The C# namespace to store the additional generated utilties.
        cppdecl::QualifiedName helpers_namespace;

        // ]

        // Maps relative file paths (without extensions) to the file descriptions and contents.
        // Don't access directly, prefer `GetOutputFile()`.
        std::unordered_map<std::string, OutputFile> output_files;

        // Creates a new output file struct in memory (or returns an existing one), corresponding to `interop_file`.
        [[nodiscard]] OutputFile &GetOutputFile(const CInterop::OutputFile &interop_file);

        // Caches `cppdecl::Type` parsing. Don't access directly, this is for `ParseTypeOrThrow`.
        std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;
        // Same, but for `QualifiedName`s.
        std::unordered_map<std::string, cppdecl::QualifiedName> cached_parsed_names;

        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str);
        [[nodiscard]] const cppdecl::QualifiedName &ParseNameOrThrow(const std::string &str);

        // Translates a primitive C type to C#. This intentionally rejects pointers.
        // `is_indirect` affects how `bool` is mapped. If true, returns `bool` as is, and otherwise returns `byte`.
        // This is needed since passing `bool` by value internally uses `int32_t` in C#, but passing it by reference seems to work correctly.
        [[nodiscard]] std::optional<std::string_view> CToCSharpPrimitiveTypeOpt(std::string_view c_type, bool is_indirect);

        // Converts a C++ qualified enum name to a C# name.
        [[nodiscard]] std::string CppToCSharpEnumName(const cppdecl::QualifiedName &name);

        // Converts a C++ qualified class name to a C# name. Since we split classes into const and non-const halves, we need a bool to specify which half we want.
        [[nodiscard]] std::string CppToCSharpClassName(const cppdecl::QualifiedName &name, bool is_const);
        // Same, but for unqualified names.
        // Using `std::string_view` instead of `cppsharp::UnqualifiedName` here for simplicity.
        [[nodiscard]] std::string CppToCSharpUnqualClassName(std::string_view name, bool is_const);

        // Converts a C++ qualified class name to a C# helper interface name for this class.
        [[nodiscard]] std::string CppToCSharpInterfaceName(const cppdecl::QualifiedName &name, bool is_const);
        // Same, but for unqualified names.
        // Using `std::string_view` instead of `cppsharp::UnqualifiedName` here for simplicity.
        [[nodiscard]] std::string CppToCSharpUnqualInterfaceName(std::string_view name, bool is_const);

        // Given a C++ class name, returns the "GetUnderlying..." method that's used in classes derived from this to return pointers to the underlying C instance.
        [[nodiscard]] std::string CppClassToCSharpGetUnderlyingMethodName(const cppdecl::QualifiedName &name);

        // Caches bindings for the types. Don't access directly, this is for `GetTypeBinding()`.
        // Using the plain `map` instead of `unordered_map` because of the `pair`, which isn't hashable by default.
        std::map<std::pair<std::string, bool/*enable_sugar*/>, TypeBinding> cached_type_bindings;

        // Returns the binding for a C++ type.
        [[nodiscard]] const TypeBinding &GetTypeBinding(const cppdecl::Type &cpp_type, bool enable_sugar);
        // This version returns null instead of throwing on unknown types.
        // It can still throw if something goes seriously wrong.
        [[nodiscard]] const TypeBinding *GetTypeBindingOpt(const cppdecl::Type &cpp_type, bool enable_sugar);

        // You should almost never use this directly, prefer `RequestHelper()`.
        // This is set once when we start generating.
        // This is a prefix of the form `Foo.Bar.`, matching `helpers_namespace` of the form `Foo::Bar`.
        // Use it in the generated C# to refer to members of that namespace (which is actually a class, hence the `.`, which C# uses even for static members).
        std::string helpers_prefix;

        // `RequestHelper()` accumulates the requested helpers here.
        // Then, after generating everything else, we generate all helpers that were requested.
        std::unordered_set<std::string> requested_helpers;

        // Returns the helper name, which is just `helper_prefix + name`, and also adds `name` to `requested_helpers`.
        // Every name that you pass here must be known by `GenerateHelpers()`.
        // Passing an invalid name name will initially succeed, but then will cause an error at the end of generation, in `GenerateHelpers()`.
        [[nodiscard]] std::string RequestHelper(const std::string &name);

        using AnyFuncLikePtr = std::variant<const CInterop::Function *, const CInterop::ClassMethod *, const CInterop::ClassField::Accessor *>;

        // A low-level function to emit a single C function.
        // Assumes that the correct namespace or class was already entered in `file`.
        // `csharp_name` is used as the C# function name. Can be `operator ....` for an overloaded operator or a conversion operator.
        void EmitCFuncLike(OutputFile &file, AnyFuncLikePtr func_like, std::string_view csharp_name);

        // Determine a suitable unqualified C# name for a method.
        [[nodiscard]] std::string MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method);

        struct InheritedMethodStrings
        {
            // This is the function declaration, without the body.
            std::string header;

            // This is the function body. Paste it immediately after `header` with no separator.
            // This will have a trailing newline.
            std::string body;

            // This is the comment, if any. If not empty, it'll have the trailing newline and the necessary slashes.
            // Paste it before the header, without an additional newline.
            std::string comment;
        };
        // Generate the stub function declaration that forwards the call to the interface or base class `base_name`.
        // In C#, when you implement a method directly in the interface, it can't be called on a derived class without manually upcasting it
        //   to the interface, unless you explicitly reimplement it in the derived class.
        // This function generates a stub implementation that propagates the specified interface.
        [[nodiscard]] InheritedMethodStrings MakeInheritedMethod(const CInterop::ClassMethod &method, std::string_view base_name);

        // Create a C# comment for a parsed function.
        // This will always end with a newline if not empty, and will include slashes.
        [[nodiscard]] std::string MakeFuncComment(AnyFuncLikePtr any_func_like);

        struct ParameterBinding
        {
            // This is null only for `this` parameters.
            const TypeBinding::ParamUsage *usage = nullptr;

            TypeBinding::ParamUsage::Strings strings;
        };
        // A helper function that returns various binding information about a function parameter, or throws on failure.
        // Passing `method_like` is only needed if this parameter belongs to a class member (and then it's only used if it's the `this` parameter).
        [[nodiscard]] ParameterBinding GetParameterBinding(const CInterop::FuncParam &param, const CInterop::BasicClassMethodLike *method_like);

        struct CFuncDeclStrings
        {
            // This is the entire C function declaration with a trailing newline.
            std::string dllimport_decl;

            // This is the C# name that we declare in `c_decl`. Usually it the C name you specified with some underscores prepended just in case.
            std::string csharp_name;

            // If true, the caller should be marked `unsafe`.
            // We don't add `unsafe` to `c_decl` because having it in the caller is enough.
            bool is_unsafe = false;
        };

        // Creates a C function declaration for C# code.
        // `c_name` is the underlying C function name. `return_type` is the return type as it should be spelled in C#.
        // `params` is a comma-separated list as it should be spelled in C#.
        [[nodiscard]] CFuncDeclStrings MakeDllImportDecl(std::string_view c_name, std::string_view return_type, std::string_view params);

        // A low-level function to emit a wrapper for a single C enum.
        // Assumes that the correct namespace or class was already entered in `file`.
        // `csharp_name` is used as the C# enum name.
        // `prefix` is pasted before the declaration, separated with a space if not empty.
        void EmitCEnum(OutputFile &file, const CInterop::TypeKinds::Enum &enum_desc, std::string_view prefix, std::string_view csharp_name);

        // Since we duplicate each class and its corresponding interface into const and non-const versions,
        //   we need an extra bool to describe which half of the class is being operated on.
        struct MaybeConstClass
        {
            // Qualified C++ class name.
            std::string class_name;

            bool is_const = false;

            friend auto operator<=>(const MaybeConstClass &, const MaybeConstClass &) = default;
        };

        struct EmittedClassInfo
        {
            // The C++ name of the base class (as opposed to interfaces), if any.
            std::optional<MaybeConstClass> base_class;

            // The C++ names of the classes, which corresponding interfaces we inherit.
            std::vector<MaybeConstClass> base_interfaces;

            // The methods that come directly from this class, not counting the inherited ones.
            std::vector<const CInterop::ClassMethod *> direct_methods;

            struct MaybeInheritedMethod
            {
                InheritedMethodStrings method;

                // If false, this method is automatically inherited from the parent, so we don't need to paste it into this class.
                bool need_implementation = false;
            };

            // The methods directly either defined by this class or inherited.
            // The keys are `.header`s of the values, so there is some duplication.
            OrderedMap<std::string, MaybeInheritedMethod> combined_methods;
        };

        // Don't access directly, this is for `GetEmittedClassInfo()`.
        std::map<MaybeConstClass, EmittedClassInfo> cached_emitted_class_info;

        [[nodiscard]] const EmittedClassInfo &GetEmittedClassInfo(const MaybeConstClass &cl);

        // A low-level function to emit a wrapper for a single half (either const or non-const) of a C "class".
        // Assumes that the correct namespace or class was already entered in `file`.
        void EmitMaybeConstCClass(OutputFile &file, const MaybeConstClass &cl);

        void Generate();

        // This is called once by `Generate()`, and generates the helpers queried by `RequestHelper()`.
        void GenerateHelpers();
    };
}

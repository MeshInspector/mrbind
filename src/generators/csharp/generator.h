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
    [[nodiscard]] std::string CppdeclToCode(const auto &value);

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
                // If set to true, the enclosing C# function gets marked `unsafe`.
                bool needs_unsafe = false;

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
                std::string csharp_args_for_c;

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
        std::optional<ParamUsage> param_usage{};
        std::optional<ParamUsage> param_usage_with_default_arg{};

        struct ReturnUsage
        {
            // If set to true, the enclosing C# function gets marked `unsafe`.
            bool needs_unsafe = false;

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

        // Converts a C++ qualified name to a C# name.
        [[nodiscard]] std::string CppToCSharpName(const cppdecl::QualifiedName &name);

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

        // A low-level function to emit a single C function.
        // Assumes that the correct namespace or class was already entered in `file`.
        // `csharp_name` is used as the C# function name. Can be `operator ....` for an overloaded operator or a conversion operator.
        // `prefix` is pasted before the return type, separated with a space if not empty.
        void EmitCFuncLike(OutputFile &file, const CInterop::BasicFuncLike &func_like, std::string_view prefix, std::string_view csharp_name);

        // A low-level function to emit a wrapper for a single C enum.
        // Assumes that the correct namespace or class was already entered in `file`.
        // `csharp_name` is used as the C# enum name.
        // `prefix` is pasted before the declaration, separated with a space if not empty.
        void EmitCEnum(OutputFile &file, const CInterop::TypeKinds::Enum &enum_desc, std::string_view prefix, std::string_view csharp_name);

        void Generate();

        // This is called once by `Generate()`, and generates the helpers queried by `RequestHelper()`.
        void GenerateHelpers();
    };
}

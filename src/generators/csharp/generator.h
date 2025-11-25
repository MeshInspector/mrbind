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
    using AnyFuncLikePtr = std::variant<const CInterop::Function *, const CInterop::ClassMethod *, const CInterop::ClassField::Accessor *>;
    using AnyMethodLikePtr = std::variant<const CInterop::ClassMethod *, const CInterop::ClassField::Accessor *>;

    [[nodiscard]] std::string CppdeclToCode(const auto &value)
    {
        return cppdecl::ToCode(value, {});
    }

    // Transforms a single C++ string (usually a type name or a qualified name) to C# style.
    [[nodiscard]] std::string CppStringToCsharpIdentifier(std::string_view cpp_ident);

    // Transforms any C++ entity to a C#-style name.
    [[nodiscard]] std::string CppToCsharpIdentifier(const auto &value)
    {
        return CppStringToCsharpIdentifier(cppdecl::ToCode(value, {}));
    }

    struct Generator;

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
        void EnsureNamespace(const Generator &generator, cppdecl::QualifiedName new_namespace);
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

                struct CSharpParam
                {
                    std::string type;
                    std::string name;
                    std::optional<std::string> default_arg = {};

                    [[nodiscard]] std::string ToString() const
                    {
                        assert(!type.empty() && !type.starts_with(' ') && !type.ends_with(' '));
                        assert(!name.empty() && !name.starts_with(' ') && !name.ends_with(' '));

                        std::string ret = type;
                        if (!ret.ends_with('*'))
                            ret += ' ';
                        ret += name;
                        if (default_arg)
                        {
                            assert(!default_arg->empty() && !default_arg->starts_with(' ') && !default_arg->ends_with(' '));
                            ret += " = ";
                            ret += *default_arg;
                        }
                        return ret;
                    }
                };

                // A list of parameter declarations for the public C# function declaration, or empty if none.
                // This one needs to be an actual vector, because we apply non-trivial transformations to it, and splitting a string
                //   wouldn't be trivial, since we'd have to ignore commas in `<...>` generic argument lists.
                std::vector<CSharpParam> csharp_decl_params;

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
            // In this case, `param_usage` (not `_with_default_arg`) can receive this as `true`. In that case, you must emit the default argument.
            // Typically all you need to do is to add the `= null` default argument.
            // Failing to emit the default argument in this case will error, so if you don't expect your type to have default arguments that don't affect
            //   parameter passing, you can just ignore this parameter, and if this assumption is wrong, you'll just get this error.
            std::function<Strings(const std::string &name, bool /*have_useless_defarg*/)> make_strings;
        };

        // Unlike in C, those don't fall back to each other. Both need to be implemented separately.
        // The correct usage of those two must be chosen based on `FuncParam::default_arg_affects_parameter_passing`.
        std::optional<ParamUsage> param_usage{};
        std::optional<ParamUsage> param_usage_with_default_arg{};

        struct ReturnUsage
        {
            // An extra comment to be added on the function. Should end with a newline, and should usually have the form `/// Parameter `x` ...`.
            std::string extra_comment = "";

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

        // Those prefixes are replaced in all C++ names.
        std::vector<std::pair<cppdecl::QualifiedName, cppdecl::QualifiedName>> replaced_namespaces;

        // This C# namespace is added to the names that don't already start with the first unqualified part of it.
        std::optional<cppdecl::QualifiedName> forced_namespace;

        // The language version. This affects what features we can use.
        int csharp_version = -1; // This is set elsewhere.

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

        // Adjusts a name to apply any `--remove-namespace` and `--force-namespace` flags.
        [[nodiscard]] cppdecl::QualifiedName AdjustCppNamespaces(cppdecl::QualifiedName name) const;

        // Converts a C++ qualified enum name to a C# name.
        [[nodiscard]] std::string CppToCSharpEnumName(cppdecl::QualifiedName name);

        // Converts a C++ qualified class name to a C# name. Since we split classes into const and non-const halves, we need a bool to specify which half we want.
        [[nodiscard]] std::string CppToCSharpClassName(cppdecl::QualifiedName name, bool is_const);
        // Same, but for unqualified names.
        // Using `std::string_view` instead of `cppsharp::UnqualifiedName` here for simplicity.
        [[nodiscard]] std::string CppToCSharpUnqualClassName(const cppdecl::UnqualifiedName &name, bool is_const);

        enum class TypeBindingFlags
        {
            // Enable type-specific sugared passing style.
            enable_sugar = 1 << 0,
            // Treat a pointer as a pointer to an array element.
            pointer_to_array = 1 << 1,
        };
        MRBIND_FLAG_OPERATORS_IN_CLASS(TypeBindingFlags)

        // Describes flags with a string. The result will be empty if the flags are empty.
        // Otherwise will return a string of the form ` (...) (...)` (with one or more parentheses).
        [[nodiscard]] static std::string TypeBindingFlagsToString(TypeBindingFlags flags);

        [[nodiscard]] static TypeBindingFlags TypeBindingFlagsForReturn(const CInterop::FuncReturn &ret);
        [[nodiscard]] static TypeBindingFlags TypeBindingFlagsForParam(const CInterop::FuncParam &param);

        // Caches bindings for the types. Don't access directly, this is for `GetTypeBinding()`.
        // Using the plain `map` instead of `unordered_map` because of the `pair`, which isn't hashable by default.
        std::map<std::pair<std::string, TypeBindingFlags>, TypeBinding> cached_type_bindings;

        // Returns the binding for a C++ type.
        [[nodiscard]] const TypeBinding &GetTypeBinding(const cppdecl::Type &cpp_type, TypeBindingFlags flags);
        // This version returns null instead of throwing on unknown types.
        // It can still throw if something goes seriously wrong.
        [[nodiscard]] const TypeBinding *GetTypeBindingOpt(const cppdecl::Type &cpp_type, TypeBindingFlags flags);

        // Given a C++ class name, returns the string with the additional contents for this class.
        // If not empty, it must have a trailing newline and no leading newline.
        [[nodiscard]] std::string GetExtraContentsForParsedClass(const cppdecl::QualifiedName &cpp_name, bool is_const);


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

        // This stores all functions declared in a class, and is used to track shadowing and insert `new` as needed.
        struct ClassShadowingData
        {
            // Here we check functions but not properties, since our `EmitCppField()` will automatically insert `new` for properties, since that's simple enough.

            std::unordered_set<std::string> functions;
        };

        // Those are alternative function variants that can be emitted by `FuncLikeEmitter`.
        enum class EmitVariant
        {
            regular,

            // Non-static operators `++` and `--` are a new feature in C# 14, allowing you to modify an instance in place instead of returning a copy,
            //   like a static version would, which was the only valid approach in older C#.
            // But we emit this even before C# 14, but in that case we make it a simple function.
            // When we emit those, we must still keep the static ones, since when the result of `x++` isn't unused, the non-static version isn't considered at all,
            //   since it must return void.
            // By default we emit the non-static version, because it looks nicer and we want it to be first (even before C# 14 when it's just a function),
            //   and then we follow up with the static one.
            static_incr_or_decr,

            // `!=` being defined in terms of `==`.
            negated_comparison_operator,

            // `>` being defined in terms of `<`.
            less_to_greater,
            // `<=` being defined in terms of `<`.
            less_to_less_eq,
            // `>=` being defined in terms of `<`.
            less_to_greater_eq,
        };

        // For class methods, sometimes a single C++ method gets split into multiple C# methods.
        // Then this function will return more than one enum element, and you must apply `FuncLikeEmitter` separately to each of them.
        [[nodiscard]] std::vector<EmitVariant> GetMethodVariants(const CInterop::ClassMethod &method);

        // This is used to emit C# functions.
        // This is a class to do the emitting in two phases, preparing it first (and allowing you to read some prepared data), and only then emitting.
        // This separation was originally done to query `.is_unsafe` of the dllimported function in a getter or setter before emitting it,
        //   to plop it on the enclosing property.
        struct FuncLikeEmitter
        {
            Generator &generator;
            const AnyFuncLikePtr any_func_like;
            const std::string csharp_name;
            const EmitVariant emit_variant;

            const CInterop::BasicFuncLike &func_like;
            const CInterop::BasicClassMethodLike *method_like;
            const CInterop::ClassMethod *method;

            const bool is_ctor;
            const bool is_property_get;
            const bool is_property_set;
            const bool is_property;

            const bool ctor_class_backed_by_shared_ptr;

            const bool is_overloaded_op;
            const bool is_incr_or_decr;
            const bool acts_on_copy_of_this;

            const TypeBinding::ReturnUsage *ret_binding = nullptr;

            CFuncDeclStrings dllimport_strings;

            std::string dllimport_param_string;
            std::vector<const TypeBinding::ParamUsage *> param_usages;
            std::vector<TypeBinding::ParamUsage::Strings> param_strings;


            // `csharp_name` is used as the C# function name. Can be `operator ....` for an overloaded operator or a conversion operator.
            // `csharp_name` can be "get" or "set" if we're creating a property, in that case we won't emit the return type or the parameters,
            //   and the parameter name (of the setter) will be replaced with "value".
            FuncLikeEmitter(Generator &generator, AnyFuncLikePtr any_func_like, std::string csharp_name, EmitVariant emit_variant = Generator::EmitVariant::regular);

            struct ShadowingDesc
            {
                // This must not be null.
                ClassShadowingData *shadowing_data = nullptr;

                // If true, only write to `shadowing_data` and don't read from it. If false, only read and don't write.
                bool write = false;
            };

            // Assumes that the correct namespace or class was already entered in `file`.
            void Emit(OutputFile &file, std::optional<ShadowingDesc> shadowing_desc = {});

            // Get the string that can be used for function shadowing checks. This emits the name and C# parameter types (not names). The return type is skipped.
            // It seems that in C# the shadowing warning is based on the name and the parameter types, and ignores the return type.
            // Interestingly, it's possible to call the shadowed base function using explicit parameter names (if they're different), but this doesn't stop the warning.
            [[nodiscard]] std::string GetDescForShadowing() const;

            [[nodiscard]] bool IsUnsafe() const
            {
                // This will eventually take into account the unsafety of the array size getter.
                return dllimport_strings.is_unsafe;
            }
        };

        // Determine a suitable unqualified C# name for a method.
        // `is_const` should be set to true if we're in a const half of a class, or to false otherwise.
        [[nodiscard]] std::string MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method, bool is_const, EmitVariant emit_variant);

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
        // `is_static_method` only matters if this is a `this` parameter.
        // If `override_name` is passed, it replaces the parameter name recoded in the parameter itself.
        [[nodiscard]] ParameterBinding GetParameterBinding(const CInterop::FuncParam &param, bool is_static_method, std::optional<std::string> override_name = {});

        // Returns the binding information for a function return type.
        [[nodiscard]] const TypeBinding::ReturnUsage &GetReturnBinding(const CInterop::FuncReturn &ret);

        // Creates a C function declaration for C# code.
        // `c_name` is the underlying C function name. `return_type` is the return type as it should be spelled in C#.
        // `params` is a comma-separated list as it should be spelled in C#.
        [[nodiscard]] CFuncDeclStrings MakeDllImportDecl(std::string_view c_name, std::string_view return_type, std::string_view params);

        // A low-level function to emit a wrapper for a single C enum.
        // Assumes that the correct namespace or class was already entered in `file`.
        void EmitCppEnum(OutputFile &file, const std::string &cpp_name_str);

        [[nodiscard]] bool IsConstOrStaticMethodLike(const cppdecl::QualifiedName &cpp_class_name, const CInterop::TypeDesc &class_type_desc, AnyMethodLikePtr any_method_like, EmitVariant emit_variant);

        // Checks if `token` is a compound assignment operator, common between C++ and C#.
        [[nodiscard]] static bool IsCompoundAssignmentToken(std::string_view token);

        // Returns true if this C++ operator can be overloaded as a C# operator.
        // The choice isn't necessarily based only on the operator token.
        // If this returns true, you can usually use the same token as you did in C++, since they are the same in C#.
        [[nodiscard]] bool IsOverloadableOperator(std::variant<const CInterop::Function *, const CInterop::ClassMethod *> func_or_method);

        // Since we duplicate each class into const and non-const versions,
        //   we need an extra bool to describe which half of the class is being operated on.
        struct MaybeConstClass
        {
            // Qualified C++ class name.
            std::string class_name;

            bool is_const = false;

            friend auto operator<=>(const MaybeConstClass &, const MaybeConstClass &) = default;
        };

        // A low-level function to emit a wrapper for a single half (either const or non-const) of a C "class".
        // Assumes that the correct namespace or class was already entered in `file`.
        // `shadowing_data` is used for the shadowing check (to automatically insert `new` on certain members). To enable this,
        //   pass the same `ClassShadowingData` instance to both the const and the non-const halves of the class (the const one must be emitted first).
        //   The `ClassShadowingData` object must initially be empty.
        void EmitMaybeConstCppClass(OutputFile &file, const MaybeConstClass &cl, ClassShadowingData *shadowing_data);

        // Emit a type unconditionally (you should check `ShouldEmitCppType()` yourself).
        // Assumes that the correct namespace or class was already entered in `file`.
        void EmitCppTypeUnconditionally(OutputFile &file, const std::string &cpp_type);

        // Returns true if this C++ type maps to a managed type in C#, e.g. a class (so force heap-allocated), as opposed to scalars and structs.
        // Throws if this isn't a known type.
        // Ignores constness on the type.
        [[nodiscard]] bool IsManagedTypeInCSharp(cppdecl::Type cpp_type);

        // If our input has a binding for `std::shared_ptr<T>` (where `T` is `cpp_type`), returns that binding. Otherwise null.
        // This can be used to check if a class is backed by a shared pointer or not.
        [[nodiscard]] const CInterop::TypeDesc *GetSharedPtrTypeDescForCppTypeOpt(const std::string &cpp_type);

        // If this returns false, this C++ type (usually a class or enum) will not be emitted.
        [[nodiscard]] bool ShouldEmitCppType(const cppdecl::Type &cpp_type);

        // Emits a single class field. Either as several accessor methods, or as a C# property if possible.
        // `is_const` determines if we're considered to be inside of a const half of a class or not.
        void EmitCppField(OutputFile &file, const cppdecl::QualifiedName &cpp_class_name, const CInterop::TypeDesc &class_type_desc, const CInterop::ClassField &field, bool is_const, ClassShadowingData *shadowing_data);

        void Generate();

        // This is called once by `Generate()`, and generates the helpers queried by `RequestHelper()`.
        void GenerateHelpers();
    };
}

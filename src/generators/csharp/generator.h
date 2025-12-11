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
    [[nodiscard]] std::string CppIdentifierToCSharpIdentifier(std::string_view cpp_ident);

    // Transforms any C++ entity to a C#-style name.
    [[nodiscard]] std::string CppToCSharpIdentifier(auto value)
    {
        // Adjust qualified names first.

        (void)value.template VisitEachComponent<cppdecl::UnqualifiedName, cppdecl::QualifiedName>({}, Overload{
            [](cppdecl::UnqualifiedName &name)
            {
                std::string ret = CppIdentifierToCSharpIdentifier(cppdecl::ToString(name.var, cppdecl::ToStringFlags::identifier));

                if (name.template_args)
                {
                    for (const auto &targ : name.template_args->args)
                    {
                        if (!ret.empty() && !ret.ends_with(char(1)))
                            ret += char(1); // `CppIdentifierToCSharpIdentifier()` will preserve this, and later we'll replace it with `_`.
                        ret += CppIdentifierToCSharpIdentifier(cppdecl::ToString(targ, cppdecl::ToStringFlags::identifier));
                    }
                }

                // `FromSingleWord()` doesn't like our `char(1)` placeholders, so avoid it.
                name = cppdecl::UnqualifiedName{.var = std::move(ret), .template_args = {}};

                return false;
            },
            [](cppdecl::QualifiedName &name)
            {
                std::string ret;

                for (auto &part : name.parts)
                {
                    // Due to post-order traversal, this should already be a single word.
                    std::string_view word = part.AsSingleWord();
                    if (word.empty())
                        throw std::logic_error("Internal error: Converting name to C# style failed to produce a single word for an unqualified name part.");

                    if (!ret.empty() && !ret.ends_with(char(1)))
                        ret += char(1); // `CppIdentifierToCSharpIdentifier()` will preserve this, and later we'll replace it with `_`.

                    ret += word;
                }

                // `QualifiedName::FromSingleWord()` doesn't like our `char(1)` placeholders, so avoid it.

                name = cppdecl::QualifiedName::FromSinglePart(cppdecl::UnqualifiedName{.var = std::move(ret), .template_args = {}});

                return false;
            },
        });

        // Convert to identifier using cppdecl, and then apply `CppIdentifierToCSharpIdentifier()` again to handle things like `const` and such,
        //   which the code above doesn't handle.
        std::string ret = CppIdentifierToCSharpIdentifier(cppdecl::ToString(value, cppdecl::ToStringFlags::identifier));

        // Lastly, replace our `char(1)` placeholders back with `_`.
        std::replace(ret.begin(), ret.end(), char(1), '_');

        return ret;
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

        // This is similar to `EnsureNamespace(..., {});`, but not the same thing, since that can adjust the global namespace into something else
        //   due to command-line flags, while this always resolves to the true C# global namespace.
        void ExitAllScopes();
    };

    struct TypeBinding
    {
        struct ParamUsage
        {
            struct Strings
            {
                // An extra comment to be added on the function. Should end with a newline, and should usually have the form `/// Parameter `x` ...`.
                std::string extra_comment = "";

                // Forces the enclosing function to be `unsafe`. This happens automatically if you have `*` in the types.
                bool force_unsafe = false;

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

            // Forces the enclosing function to be `unsafe`. This happens automatically if you have `*` in the types.
            bool force_unsafe = false;

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
        // `out_sizeof` receives the type size (respects `is_indirect` for `bool`), or zero on failure.s
        [[nodiscard]] std::optional<std::string_view> CToCSharpPrimitiveTypeOpt(std::string_view c_type, bool is_indirect, std::size_t *out_sizeof = nullptr);

        // This is mostly for internal use by `CppToCSharpKnownSizeType()` and `RequestCSharpArrayType()`.
        // Given an array type (asserts otherwise), returns a suitable qualified C# name for it.
        // Respects constness on the element type.
        // Apply `CppToCSharpHelperName()` to the resulting name to get a C# name.
        [[nodiscard]] cppdecl::QualifiedName CppToCSharpArrayHelperName(cppdecl::Type cpp_array_type);

        struct RequestedPlainArray
        {
            cppdecl::QualifiedName qual_array_name; // Apply `CppToCSharpHelperName()` to this.
            std::string csharp_elem_type;
            std::size_t num_elems = 0; // Must be larger than zero, like in plain C arrays.
        };

        // All array types passed to `CppToCSharpKnownSizeType()`, accumulated for later generation.
        // The keys are qualified C# type names for the whole arrays (unqualified).
        // This is intentionally an ordered map, to emit consistent C# code.
        std::map<std::string, RequestedPlainArray> requested_plain_arrays;

        // Like `CToCSharpPrimitiveTypeOpt()`, but also permits plain fixed-size arrays of those types, for which it generates helpers in the common file.
        // Also permits exposed structs, and arrays of those.
        // This ignores constness on the type.
        // Writes the type size to `out_sizeof` on success, or writes `0` on failure.
        [[nodiscard]] std::optional<std::string> CppToCSharpKnownSizeType(const cppdecl::Type &cpp_type, std::size_t *out_sizeof = nullptr);

        struct ArrayStrings
        {
            // This may include `ref` or `ref readonly`, but not necessarily.
            std::string csharp_type;

            std::string csharp_underlying_ptr_target_type;

            // This constructs an instance of `csharp_type` from a pointer to the first element of the array.
            std::function<std::string(const std::string &ptr)> construct;
        };

        struct RequestedMaybeOpaqueArray
        {
            ArrayStrings strings;

            cppdecl::QualifiedName qual_array_name;

            std::string csharp_elem_type;

            std::size_t num_elems = 0; // Must be larger than zero.

            enum class ElemKind
            {
                // The element type is `ref` or `ref readonly`.
                ref,
                // Return the element type as as is, constructing it from the pointer to the first element of the array.
                ptr,
                // Same, but the element type constructor also takes `bool is_owning`.
                ptr_maybeowning,
            };
            ElemKind kind{};

            // If null, use `size_for_ptr_offsets` to directly compute pointer offsets.
            // If set, multiply the offset by `size_for_ptr_offsets` and then pass it to this function.
            std::optional<std::string> ptr_offset_func;

            // Used in pointer offset calculation, see `ptr_offset_func`.
            std::size_t size_for_ptr_offsets = 1;
        };

        // The custom types that `RequestCSharpSpanType()` wants to generate.
        // The keys are the C# type names for the whole span classes.
        // This is intentionally an ordered map, to emit consistent C# code.
        std::map<std::string, RequestedMaybeOpaqueArray> requested_maybe_opaque_arrays;

        // Returns an array-like type, suitable to hold a fixed-size array of some C++ type.
        // This is more capable than `CppToCSharpKnownSizeType()`, supporting also arrays of opaque classes,
        //   and const arrays (sometimes the constness is expressed as `ref` vs `ref readonly`, and otherwise doesn't affect the type).
        // `cpp_array_type` must be an array type, throws otherwise.
        // Throws on failure (if can't handle this element type).
        [[nodiscard]] ArrayStrings RequestCSharpArrayType(const cppdecl::Type &cpp_array_type, const RequestedMaybeOpaqueArray **desc = nullptr);


        // The cache for `RequestCSharpEmptyTagType()`.
        // The keys are the C# names, and the values are the unmodified input C++ types.
        // The C# names are determined as if by `CppToCSharpHelperName()`.
        std::map<std::string, cppdecl::QualifiedName> requested_empty_tag_types;

        // Requests an empty tag type. Returns its C# name.
        // The C# names are determined as if by `CppToCSharpHelperName()`.
        [[nodiscard]] std::string RequestCSharpEmptyTagType(const cppdecl::QualifiedName &cpp_name);


        // Adjusts a name to apply any `--remove-namespace` and `--force-namespace` flags.
        [[nodiscard]] cppdecl::QualifiedName AdjustCppNamespaces(cppdecl::QualifiedName name) const;

        // Converts a C++ qualified helper class name to a C# name.
        // Only apply it to the names that are explicitly documented to be usable with this funuction.
        // This is guaranteed to handle the final unqualified part as if by `CppToCSharpIdentifier()`.
        [[nodiscard]] std::string CppToCSharpHelperName(cppdecl::QualifiedName name);

        // Converts a C++ qualified enum name to a C# name.
        [[nodiscard]] std::string CppToCSharpEnumName(cppdecl::QualifiedName name);
        [[nodiscard]] std::string CppToCSharpUnqualEnumName(const cppdecl::QualifiedName &name);

        // Converts a C++ qualified class name to a C# name. Since we split classes into const and non-const halves, we need a bool to specify which half we want.
        [[nodiscard]] std::string CppToCSharpClassName(cppdecl::QualifiedName name, bool is_const);
        // Same, but produces an unqualified name. This still needs a full name on input,
        //   since the result can be affected by the properties of the class.
        [[nodiscard]] std::string CppToCSharpUnqualClassName(const cppdecl::QualifiedName &name, bool is_const);

        // Converts a C++ qualified class name to a C# name. This is only for exposed structs, and returns the name of the corresponding C# `ref struct`.
        [[nodiscard]] std::string CppToCSharpExposedStructName(cppdecl::QualifiedName name);
        // Same, but produces an unqualified name. This still needs a full name on input,
        //   since the result can be affected by the properties of the class.
        [[nodiscard]] std::string CppToCSharpUnqualExposedStructName(const cppdecl::QualifiedName &name);

        // Converts a C++ qualified class name to a C# name of its helper that's used to pass it by value.
        // This only makes sense for classes that use the pass-by enum.
        [[nodiscard]] std::string CppToCSharpByValueHelperName(cppdecl::QualifiedName name);
        // Same, but for unqualified names.
        [[nodiscard]] std::string CppToCSharpUnqualByValueHelperName(const cppdecl::UnqualifiedName &name);

        // Like `CppToCSharpByValueHelperName`, but for `std::optional
        [[nodiscard]] std::string CppToCSharpByValueOptOptHelperName(cppdecl::QualifiedName name);
        // Same, but for unqualified names.
        [[nodiscard]] std::string CppToCSharpUnqualByValueOptOptHelperName(const cppdecl::UnqualifiedName &name);

        // Converts a C++ qualified exposed struct name to a C# name of its helper that's used to pass this struct by value with an optional parameter.
        // This only makes sense for classes that use the pass-by enum.
        [[nodiscard]] std::string CppToCSharpInOptStructHelperName(cppdecl::QualifiedName name);
        // Same, but for unqualified names.
        [[nodiscard]] std::string CppToCSharpUnqualInOptStructHelperName(const cppdecl::UnqualifiedName &name);

        // Converts a C++ qualified class name to a C# name of its helper that's used to pass it by an optional mutable pointer.
        [[nodiscard]] std::string CppToCSharpInOptMutNontrivialHelperName(cppdecl::QualifiedName name);
        // Same, but for unqualified names.
        [[nodiscard]] std::string CppToCSharpUnqualInOptMutNontrivialHelperName(const cppdecl::UnqualifiedName &name);

        // Converts a C++ qualified class name to a C# name of its helper that's used to pass it by an optional const pointer.
        [[nodiscard]] std::string CppToCSharpInOptConstNontrivialHelperName(cppdecl::QualifiedName name);
        // Same, but for unqualified names.
        [[nodiscard]] std::string CppToCSharpUnqualInOptConstNontrivialHelperName(const cppdecl::UnqualifiedName &name);


        // Calls `func` on each unqualified name of a part of a class `cpp_class`.
        // If `func` returns true, stops and also returns true.
        bool ForEachClassPartName(const cppdecl::QualifiedName &cpp_class, std::function<bool(const std::string &part)> func);

        struct UsedMemberNamesInClass
        {
            // All keys and values here are C#-style names.

            std::unordered_set<std::string> self_names;

            std::unordered_set<std::string> nested_types;
            std::unordered_set<std::string> fields;
            std::unordered_set<std::string> methods;

            std::unordered_map<std::string, std::string> field_adjustments;
            std::unordered_map<std::string, std::string> method_adjustments;
        };

        // The cache for `GetUsedMemberNamesInClass()`.
        // The keys are C++ qualified class names.
        std::unordered_map<std::string, UsedMemberNamesInClass> cached_used_member_names_in_class;

        [[nodiscard]] const UsedMemberNamesInClass &GetUsedMemberNamesInClass(const cppdecl::QualifiedName &cpp_class);

        // Iterate over all types nested in `cpp_class`, which should be classes and enums.
        // Don't forget to check `ShouldEmitCppType()` on the types you get.
        void ForEachNestedType(const std::string &cpp_class, std::function<void(const std::string &nested_type)> func);

        // Converts a C++ class field name to C# as if by `CppToCSharpIdentifier(ParseNameOrThrow(cpp_field))`,
        //   but additionally adjusts the name if it conflicts with the enclosing class name (if `adjust_to_disambiguate == true`).
        [[nodiscard]] std::string CppToCSharpFieldName(const cppdecl::QualifiedName &cpp_class, const std::string &cpp_field, bool adjust_to_disambiguate = true);


        enum class TypeBindingFlags
        {
            // Enable type-specific sugared passing style.
            enable_sugar = 1 << 0,
            // Treat a pointer as a pointer to an array element.
            pointer_to_array = 1 << 1,
            // When returning stuff by value, don't wrap it in the "_Moved<...>" wrapper.
            // This is useful e.g. for binding the return types of constructors.
            no_move_in_by_value_return = 1 << 2,
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

        struct ExtraClassContents
        {
            // This is used as is.
            std::string text;

            struct ConvOp
            {
                std::string csharp_param_type;
                std::string csharp_param_name;
            };

            // Those implicit conversions are added to the class itself and to various wrappers for it.
            // Those are assumed to correspond to already existing constructors of the same class (that should probably be in `.text` above).
            // Return this for the const half of the class, it's ignored on its other parts.
            std::vector<ConvOp> implicit_conversions;

            [[nodiscard]] bool IsEmpty() const
            {
                return text.empty() && implicit_conversions.empty();
            }
        };

        // Given a C++ class name, returns the string with the additional contents for this class.
        // If not empty, it must have a trailing newline and no leading newline.
        // `class_part_kind == true` means we're in the const half of the class, `== false` means the non-const half,
        //   and null means we're in an exposed `ref struct`.
        [[nodiscard]] ExtraClassContents GetExtraContentsForParsedClass(const cppdecl::QualifiedName &cpp_name, std::optional<bool> class_part_kind);


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

            // A constructor getting rewritten as a conversion operator.
            conv_op_for_ctor,
            // Same, but this one is emitted in the `ByValue...` helpers.
            conv_op_for_ctor_for_by_value_helper,
            // Same, but this one is emitted in the `ByValueOptOpt...` helpers.
            conv_op_for_ctor_for_by_value_opt_opt_helper,
            // Same, but this one is emitted in the `InOptConst...` helpers.
            conv_op_for_ctor_for_in_opt_const_helper,
            // Same, but this one is emitted in the `_InOpt...` helpers. (Those are only for exposed structs.)
            conv_op_for_ctor_for_in_opt_struct_helper,

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

        // Returns true if this is one of `conv_op_for_ctor...` enum constants, including exactly `conv_op_for_ctor`.
        [[nodiscard]] static bool IsConvOpForCtor(EmitVariant emit_variant);

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
            const bool is_conv_op_rewritten_from_ctor;
            const bool is_property_get;
            const bool is_property_set;
            const bool is_property;

            const bool ctor_class_backed_by_shared_ptr;
            const bool in_exposed_struct;

            const bool is_overloaded_op_or_conv_op_from_this;
            const bool is_op_with_symmetric_self_args;
            const bool is_incr_or_decr;
            const bool acts_on_copy_of_this;

            const TypeBinding::ReturnUsage *ret_binding = nullptr;

            CFuncDeclStrings dllimport_strings;
            bool forced_unsafe = false;

            std::string dllimport_param_string;
            std::vector<TypeBinding::ParamUsage::Strings> param_strings;


            // `csharp_name` is used as the C# function name. Can be `operator ....` for an overloaded operator or a conversion operator.
            // `csharp_name` can be "get" or "set" if we're creating a property, in that case we won't emit the return type or the parameters,
            //   and the parameter name (of the setter) will be replaced with "value".
            // Pass `in_exposed_struct == true` if this is a method inside an exposed struct. This only matters for constructors.
            FuncLikeEmitter(Generator &generator, AnyFuncLikePtr any_func_like, std::string csharp_name, bool in_exposed_struct, EmitVariant emit_variant = Generator::EmitVariant::regular);

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

                // Ctors are always unsafe due to having to call the parent ctor with a null pointer, and having to manipulate pointers in general.
                return dllimport_strings.is_unsafe || is_ctor || forced_unsafe;
            }
        };

        // Is this an overloaded operator that's impossible to implement as an operator in exposed structs due to having a non-const reference argument to the enclosing class?
        [[nodiscard]] bool IsMutatingOverloadedOperatorThatMustBeFuncInExposedStruct(const CInterop::ClassMethod &method);

        // Determine a suitable unqualified C# name for a method.
        // `class_part_kind == true` means we're in the const half of the class, `== false` means the non-const half,
        //   and null means we're in an exposed `ref struct`.
        [[nodiscard]] std::string MakeUnqualCSharpMethodName(const CInterop::ClassMethod &method, std::optional<bool> class_part_kind, EmitVariant emit_variant, bool adjust_to_disambiguate = true);

        // Create a C# comment for a parsed function.
        // This will always end with a newline if not empty, and will include slashes.
        [[nodiscard]] std::string MakeFuncComment(AnyFuncLikePtr any_func_like);

        // A helper function that returns various binding information about a function parameter, or throws on failure.
        // `is_static_method` only matters if this is a `this` parameter.
        // If `override_name` is passed, it replaces the parameter name recoded in the parameter itself.
        // Set `in_exposed_struct == true` when in a method of an exposed struct. This only matters for non-static methods.
        [[nodiscard]] TypeBinding::ParamUsage::Strings GetParameterBinding(const CInterop::FuncParam &param, bool is_static_method, std::optional<std::string> override_name = {}, bool in_exposed_struct = false);

        // Returns the binding information for a function return type.
        [[nodiscard]] const TypeBinding::ReturnUsage &GetReturnBinding(const CInterop::FuncReturn &ret, TypeBindingFlags extra_flags = {});

        // Creates a C function declaration for C# code.
        // `c_name` is the underlying C function name. `return_type` is the return type as it should be spelled in C#.
        // `params` is a comma-separated list as it should be spelled in C#.
        [[nodiscard]] CFuncDeclStrings MakeDllImportDecl(std::string_view c_name, std::string_view return_type, std::string_view params);

        // A low-level function to emit a wrapper for a single C enum.
        // Assumes that the correct namespace or class was already entered in `file`.
        void EmitCppEnum(OutputFile &file, const std::string &cpp_name_str);

        // This controls whether the method goes into the const half of the class (if this returns true), or the non-const one (if this returns false).
        [[nodiscard]] bool IsConstOrStaticMethodLike(const cppdecl::QualifiedName &cpp_class_name, const CInterop::TypeDesc &class_type_desc, AnyMethodLikePtr any_method_like, EmitVariant emit_variant);

        // Checks if `token` is a compound assignment operator, common between C++ and C#.
        [[nodiscard]] static bool IsCompoundAssignmentToken(std::string_view token);

        // Returns true if this C++ operator can be overloaded as a C# operator.
        // The choice isn't necessarily based only on the operator token.
        // If this returns true, you can usually use the same token as you did in C++, since they are the same in C#.
        [[nodiscard]] bool IsOverloadableOpOrConvOp(std::variant<const CInterop::Function *, const CInterop::ClassMethod *> func_or_method);

        struct ShouldEmitResult
        {
            // At least one of those will always be true.
            // For exposed struct parts, ignore those and emit unconditionally.

            bool emit_in_const = false;
            bool emit_in_mut = false;
        };

        [[nodiscard]] std::optional<ShouldEmitResult> ShouldEmitMethod(const cppdecl::QualifiedName &class_name, const CInterop::TypeDesc &type_desc, const CInterop::ClassMethod &method, EmitVariant emit_variant);

        // Emit a type unconditionally (you should check `ShouldEmitCppType()` yourself).
        // Assumes that the correct namespace or class was already entered in `file`.
        void EmitCppTypeUnconditionally(OutputFile &file, const std::string &cpp_type);

        // Returns true if this C++ type maps to a class in C# (which we could make hold `std::shared_ptr` internally, among other things).
        // This also returns true for exposed structs, since in C# they get both a proper `ref struct` and the class wrappers.
        // Returns false for unknown types. (If you only want to check if a type exists, but not necessarily is a class, instead use `c_desc.FindTypeOpt(...)`.)
        // Ignores constness on the type.
        [[nodiscard]] bool TypeIsCppClass(cppdecl::Type cpp_type);

        enum class ManagedKind
        {
            managed, // This is a managed class.
            never_managed, // This is a `ref struct` that can never be on the managed heap.
            unmanaged, // This is a struct or e.g. a scalar, that can be on the heap but doesn't have to be.
            unsure, // We don't know what this is, probably isn't a managed class.
        };

        // Given a C++ type, possibly const and/or a reference, try to determine if it's a managed type or not.
        // This this only reliable for classes and references to them. For everything else, for now it always returns `probably_unmanged`.
        // We can improve this later.
        [[nodiscard]] ManagedKind ClassifyParamManagedKind(const cppdecl::Type &cpp_type);

        // If our input has a binding for `std::shared_ptr<T>` (where `T` is `cpp_type`), returns that binding. Otherwise null.
        // This can be used to check if a class is backed by a shared pointer or not.
        [[nodiscard]] const CInterop::TypeDesc *GetSharedPtrTypeDescForCppTypeOpt(const std::string &cpp_type);

        // If this returns false, this C++ type (usually a class or enum) will not be emitted.
        [[nodiscard]] bool ShouldEmitCppType(const cppdecl::Type &cpp_type);

        // Emits a single class field. Either as several accessor methods, or as a C# property if possible.
        // `is_const` determines if we're considered to be inside of a const half of a class or not.
        // This can't be applied to fields of exposed structs.
        void EmitCppField(OutputFile &file, const cppdecl::QualifiedName &cpp_class, const CInterop::ClassField &field, bool is_const, ClassShadowingData *shadowing_data);

        void Generate();

        // This is called once by `Generate()`, and generates the helpers queried by `RequestHelper()`.
        void GenerateHelpers();
    };
}

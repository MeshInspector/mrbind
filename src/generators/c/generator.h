#pragma once

#include "common/parsed_data.h"

#include <cppdecl/declarations/data.h>

#include <filesystem>
#include <functional>
#include <set>
#include <span>
#include <string_view>
#include <string>
#include <unordered_set>

namespace mrbind::CBindings
{
    struct Module;

    struct Generator
    {
        Generator();

        // This needs a stable address, at least because some `forward_declare_or_include_header` callbacks store a pointer to it.
        Generator(const Generator &) = delete;
        Generator &operator=(const Generator &) = delete;

        // This needs to be implemented in the `.cpp` because we don't see the definition of `Module` at this point.
        ~Generator();

        // Input: [

        // We rely on the contents having stable addresses (see `ParsedTypeInfo`), so don't mess with this too much.
        ParsedFile data;

        std::string output_header_dir;
        std::filesystem::path output_header_dir_path;

        std::string output_source_dir;
        std::filesystem::path output_source_dir_path;

        // Keys are canonicalized filenames.
        // We amend this to include all filenames we see.
        std::unordered_map<std::string, std::string> path_mappings;

        // Known input file extensions that we should strip.
        std::unordered_set<std::string> known_input_exts_to_strip = {".h", ".hpp", ".cpp"};

        // Additional helper headers are generated here. This is relative to `output_header_dir_path`. Defaults to that directory as is.
        std::filesystem::path helper_header_relative_dir = ".";

        // The prefix to add to the names that we generate, as opposed to parsing (since the parsed names naturally use the namespace prefix).
        // Do not access directly! Use `MakePublicHelperName()` instead. That throws if this is not specified.
        std::string helper_name_prefix_opt;

        // ]

        // Constants: [
        std::string extension_header = ".h";
        std::string extension_source = ".cpp";
        std::string extension_internal_header = ".detail.hpp";

        // This is added after `helper_name_prefix_opt` to internal names.
        std::string detail_helper_name_extra_prefix = "DETAIL_";
        // ]


        // The extra modules that we load.
        std::vector<std::unique_ptr<Module>> modules;


        // Prefixes the name with whatever was passed to `--custom-name-prefix`.
        // This is for the custom names, as opposed to the parsed ones.
        [[nodiscard]] std::string MakePublicHelperName(std::string_view name)
        {
            std::string ret = helper_name_prefix_opt;
            ret += name;
            return ret;
        }
        [[nodiscard]] std::string MakeDetailHelperName(std::string_view name)
        {
            std::string ret = helper_name_prefix_opt;
            ret += detail_helper_name_extra_prefix;
            ret += name;
            return ret;
        }


        // Describes one header and its source file that we're generating.
        struct OutputFile
        {
            // The identifier of this file. Basically a relative path without an extension.
            std::string relative_name;

            // This sets `relative_name` and all the fields above.
            void InitRelativeName(CBindings::Generator &self, std::string new_relative_name, bool is_public);


            struct SpecificFileContents
            {
                // Where the file will be written.
                std::string full_output_path;

                // If this is a header, this is a file name to be used to include it.
                // This is empty for `.source` (the source file).
                std::string path_for_inclusion;

                // The contents are pasted in this order: [

                // This is pasted before the rest of the contents. It's in a separate variable to simplify generation.
                // `#pragma once` goes here. And for `.cpp` files, the inclusion of the respective header (and only that header).
                std::string preamble;

                // The headers from `forward_declarations_and_inclusions` are appended to this.
                // Prefer that variable instead of adding things here.
                // This stores header names without `#include <...>`, which is added automatically.
                // Harcoded standard library can also go in `preamble`.
                std::set<std::string> custom_headers;

                // The header names from the standard library. Those are separate just for the cooler looks.
                std::set<std::string> stdlib_headers;

                // `extern "C" {` goes here (the brace is closed in the footer). Maybe something else.
                std::string after_includes;

                // The forward declarations from `forward_declarations_and_inclusions` are appended to this.
                // Prefer that variable instead of adding things here.
                std::set<std::string> custom_forward_declarations;

                // This is the primary content.
                std::string contents;
                // This is pasted after everything else.
                // The closing brace of `extern "C"` goes here.
                std::string footer;

                // ]

                struct ForwardDeclarationOrInclusion
                {
                    // If false we'll just forward-declare.
                    bool need_header = false;
                };
                // Lists all type names that are needed here, and whether we should include headers for them for forward-decare them.
                // Those are keys for `FindTypeBindableWithSameAddress()`.
                std::unordered_map<std::string, ForwardDeclarationOrInclusion> forward_declarations_and_inclusions;


                // If this is true, we will write this file.
                [[nodiscard]] bool HasUsefulContents() const {return !contents.empty();}
            };

            SpecificFileContents header;
            SpecificFileContents source;

            // An internal C++ header.
            // Like all other files, this gets created only if it has non-empty contents.
            // This is automatically included into `source` only if it's non-empty.
            SpecificFileContents internal_header;

            enum class InitFlags
            {
                no_extern_c = 1 << 0,
            };
            MRBIND_FLAG_OPERATORS_IN_CLASS(InitFlags)

            void InitDefaultContents(InitFlags flags = {});
        };
        // The output file contents. This is what we're generating. The keys are the paths as reported by the parser (which canonicalizes them automatically).
        // We rely on those having stable addresses.
        std::unordered_map<std::string, OutputFile> outputs;

        // What directories we need to create in the output.
        std::unordered_set<std::filesystem::path> directories_to_create;


        // Which directories are expected added via the `-I` flags. We use this to decide what filenames to pass to `#include`.
        // This is solely for the parsed files. Not for the generated files.
        // All of those are already canonicalized. Those are set from the `--assume-include-dir` flags.
        std::unordered_set<std::filesystem::path> assumed_include_directories;

        // Figures out how to properly include a parsed file.
        // Returns the name that you should include, not the entire include directive.
        [[nodiscard]] std::string ParsedFilenameToRelativeNameForInclusion(const DeclFileName &input);


        // Returns the output file (which includes both header and source) for the given input file.
        // Initializes it on the first access.
        [[nodiscard]] OutputFile &GetOutputFile(const DeclFileName &source);

        // Returns a special output file that holds the internal implementation details.
        // It is created lazily only if this is called.
        [[nodiscard]] OutputFile &GetInternalDetailsFile();

        // Returns a public helper header with this name. It gets created on the first use.
        [[nodiscard]] OutputFile &GetPublicHelperFile(std::string_view name, bool *is_new = nullptr, OutputFile::InitFlags init_flags = {});

        // Returns the appropriate export macro for the specified output file.
        // Also modifies that file to include the header where the macro is declared, and creates that header on the first use too.
        // If `for_internal_header` is false, acts on the public C header. If true, acts on the internal C++ header.
        [[nodiscard]] std::string GetExportMacroForFile(OutputFile &target_file, bool for_internal_header);

        // Returns true if this is a built-in C type.
        [[nodiscard]] bool TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name) const;


        // Those types are a subset of `IsSimplyBindableIndirectReinterpret()` for pure qualified names (without cvref/ptr-qualifiers).
        // That is, thoses are bindable by passing their address, possibly with a cast.
        // All parsed types (classes and enums) go here, and SOME of the custom types as well.
        struct TypeBindableWithSameAddress
        {
            // At least one of those two must not be null in your custom types.
            // Both are null only in built-in types, which indicates that they don't need any forward-declarations or headers.
            // [

            // In what header this type is declared. Can be null if none.
            // This a function to allow the header be created lazily.
            std::function<OutputFile &()> declared_in_file;

            // If specified, this type can be forward-declared by pasting this string. Otherwise the only option is to include the header `declared_in_file`.
            // Don't include the trailing newline here.
            std::optional<std::string> forward_declaration;

            // ]

            [[nodiscard]] bool IsBuiltInType() const {return !declared_in_file && !forward_declaration;}
        };
        // The keys are strings produced by `cppdecl` from C++ types. Don't feed the input type names to this directly.
        // This is write-only! This is initially populated with the parsed types, and then the custom types are added lazily by `FindTypeBindableWithSameAddress[Opt]`.
        // Call that function instead of reading this directly.
        std::unordered_map<std::string, TypeBindableWithSameAddress> types_bindable_with_same_address;

        [[nodiscard]] TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name);
        [[nodiscard]] TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name);
        // The name must come from `cppdecl::ToCode(..., canonical_c_style)`.
        [[nodiscard]] TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const std::string &type_name_str);
        [[nodiscard]] TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const std::string &type_name_str);


        struct ParsedTypeInfo
        {
            struct EnumDesc
            {
                const EnumEntity *parsed = nullptr;

                // Need this for the variant to realize this is default-constructible, because this is a nested class.
                EnumDesc() {}
            };

            struct ClassDesc
            {
                const ClassEntity *parsed = nullptr;

                // All of those imply destructible.
                bool is_default_constructible = false;
                bool is_copy_constructible = false;
                bool is_move_constructible = false;

                // Do we have any constructor, possibly not default/copy/move?
                bool is_any_constructible = false;

                // Currently if this is false, all the other constructors are hidden and set to `false` too.
                bool is_destructible = false;

                // Is this type trivially copy- or move-constructible?
                // If this is true, we don't need
                bool is_trivially_copy_or_move_constructible = false;

                bool is_copy_assignable = false;
                bool is_move_assignable = false;

                bool is_trivially_default_constructible = false;
                bool is_trivially_copy_constructible = false;
                bool is_trivially_move_constructible = false;
                bool is_trivially_copy_assignable = false;
                bool is_trivially_move_assignable = false;

                // Only set if `NeedsPassByEnum()` (see below).
                // This is a C enum that lets you select between one of the predefined constructors.
                std::string pass_by_enum_name;

                // Only set if `is_destructible`.
                // This is the name of the cleanup (destruction) function.
                std::string cleanup_func_name;

                // For consistency with `EnumDesc`. This one doesn't seem to be strictly necessary.
                ClassDesc() {}

                [[nodiscard]] bool IsDefaultOrCopyOrMoveConstructible() const
                {
                    return is_default_constructible || is_copy_constructible || is_move_constructible;
                }

                [[nodiscard]] bool NeedsPassByEnum() const
                {
                    return IsDefaultOrCopyOrMoveConstructible() && !is_trivially_copy_or_move_constructible;
                }

                [[nodiscard]] bool UnifyCopyMoveConstructors() const
                {
                    return is_trivially_copy_constructible && is_trivially_move_constructible;
                }
                [[nodiscard]] bool UnifyCopyMoveAssignments() const
                {
                    return is_trivially_copy_assignable && is_trivially_move_assignable;
                }
            };

            using InputTypeVariant = std::variant<EnumDesc, ClassDesc>;
            InputTypeVariant input_type;

            // The type name for our C bindings.
            cppdecl::Type c_type;
            std::string c_type_str;

            [[nodiscard]] bool IsEnum() const {return std::holds_alternative<EnumDesc>(input_type);}
            [[nodiscard]] bool IsClass() const {return std::holds_alternative<ClassDesc>(input_type);}
        };
        // The keys are strings produced by `cppdecl` from C++ types. Don't feed the input type names to this directly.
        std::unordered_map<std::string, ParsedTypeInfo> parsed_type_info;


        // Given a type, iterates over every non-builtin type dependency that it has (which will have zero modifiers, and no `SimpleTypeFlags`,
        //   so no signedness and such).
        // This is the default behavior, `BindableType` entries can customize it.
        void DefaultForEachTypeBindableWithSameAddressNeededByType(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name)> func);


        // Type classification: [

        // The arrows mean implication (they point towards supersets).
        //                                                                                  ---
        //       IsSimplyBindableIndirectReinterpret   <---   IsSimplyBindableIndirect            Can by passed by pointer.
        //                    ^                                         ^                   ---
        //                    |                                         |
        //                    |                                         |                   ---
        //       IsSimplyBindableDirectCast            <---   IsSimplyBindableDirect              Can be passed by value (and by pointer).
        //                                                                                  ---
        //
        //    | Passing requires a cast (reinterpret |   | Can be passed without a cast. |
        //    |   or C-style respectively)           |   |                               |

        // Pointers and refs to those can be passed freely with only a `reinterpret_cast`.
        [[nodiscard]] bool IsSimplyBindableIndirectReinterpret(const cppdecl::Type &type);

        // Pointers and refs to those can be passed freely.
        [[nodiscard]] bool IsSimplyBindableIndirect(const cppdecl::Type &type);

        // Those can be passed by value with only a C-style cast.
        [[nodiscard]] bool IsSimplyBindableDirectCast(const cppdecl::Type &type);

        // Those can be passed by value with only a `static_cast`.
        [[nodiscard]] bool IsSimplyBindableDirect(const cppdecl::Type &type);

        // ]


        struct ExtraHeaders
        {
            // Separately the entirely custom ones and stdlib ones, which currently is purely decorative.

            std::unordered_set<std::string> stdlib_in_source_file;
            std::unordered_set<std::string> stdlib_in_header_file;

            // Those are functions to allow them to be lazy (to avoid generating unneeded custom headers).
            std::function<std::unordered_set<std::string>()> custom_in_source_file;
            std::function<std::unordered_set<std::string>()> custom_in_header_file;

            void InsertToFile(OutputFile &file) const;
        };

        struct BindableType
        {
            // Only makes sense if the type is a pure qualified name without cvref/ptr-qualifiers.
            // Setting any field in this to non-null indicates that that pointers to this type can be passed freely between C and C++ with at most a cast.
            // This is equivalent to inserting this type into `types_bindable_with_same_address`, and indeed it will be automatically inserted there
            //   the first time `FindTypeBindableWithSameAddress()` is called on it.
            // Note, this is WRITE-ONLY (because there are other ways of achieving this). Read using `FindTypeBindableWithSameAddress()`.
            TypeBindableWithSameAddress bindable_with_same_address;

            [[nodiscard]] bool IsBindableWithSameAddress() const {return bindable_with_same_address.declared_in_file || bindable_with_same_address.forward_declaration;}


            struct SameAddrBindableTypeDependency
            {
                // If false, then will forward-declare this type if possible, instead of including its header.
                // If true, will always include the header.
                bool need_header = false;
            };

            struct ParamUsage
            {
                struct CParam
                {
                    cppdecl::Type c_type;

                    // This is only needed if `param_usage.size() > 1` (see below). This gets added to the name of the function parameter.
                    // Typically this should be empty for at exactly one of the parameters,
                    //   since e.g. the generated default argument comment will refer to the parameter without the suffix.
                    // Adding `""` to mark this as optional for Clang's designated init.
                    std::string name_suffix = "";
                };

                // Must not be empty. Usually this will have size 1.
                // If this has more than one element, then the C function must have MORE THAN ONE parameter per this one C++ type.
                std::vector<CParam> c_params;

                // Defaults to an identity function if null.
                // Given a C++ parameter name (which normally matches the C name, but see `CParam::name_suffix` above), generates the argument for it.
                // The source `file` is also provided to allow inserting additional includes and what not, but normally you shouldn't touch it. Prefer
                //   `same_addr_bindable_type_dependencies` or `extra_headers` for that purpose.
                // `default_arg` is the default argument or empty if none. Note that depending on where this `ParamUsage` is,
                //   this might never receive default arguments.
                std::function<std::string(OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)> c_params_to_cpp;

                // Which types-bindable-with-same-address do we need to include or forward-declare? The keys are C++ type names.
                // By default you can fill this using `DefaultForEachTypeBindableWithSameAddressNeededByType()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // When this type is returned, this string is appended to the comment.
                // Don't include line breaks before and after, we add them automatically.
                // Do include the leading slashes, normally `///`.
                // This receives a flag on whether we have a default argument or not, but not the default argument itself,
                //   because we automatically generate another comment line stating its value, and don't want to accidentally do it here.
                std::function<std::string(std::string_view cpp_param_name, bool has_default_arg)> append_to_comment;

                // Calls `c_params_to_cpp` if not null, otherwise returns the string unchanged.
                // `default_arg` should be empty if there's no default argument.
                [[nodiscard]] std::string CParamsToCpp(OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg) const
                {
                    if (c_params_to_cpp)
                        return c_params_to_cpp(file, cpp_param_name, default_arg);
                    else
                        return std::string(cpp_param_name);
                }
            };

            // One of those must be non-null for this type to be usable as a parameter: [

            // If only this one is set, the type can't handle default arguments.
            // If both are set, this one is used when there's no default argument.
            // Either way, `.c_params_to_cpp` here never receives default arguments.
            std::optional<ParamUsage> param_usage;

            // If only this one is set, this is used for params both with default arguments and without.
            // If `param_usage` is also set, then this one handles only the parameters with default arguments.
            std::optional<ParamUsage> param_usage_with_default_arg;

            // ]


            struct ReturnUsage
            {
                cppdecl::Type c_type;

                // Generates a return statement to return a value of this type.
                // If null, defaults to `"return "+expr+";"`.
                // You can generate more than one statement here.
                // Providing the source `file` so you can add some extra headers or whatever. Note that this is intentionally redundant,
                //   as we also have `extra_headers` below.
                std::function<std::string(OutputFile::SpecificFileContents &file, std::string_view expr)> make_return_statement;

                // Which types-bindable-with-same-address do we need to include or forward-declare?
                // By default you can fill this using `DefaultForEachTypeBindableWithSameAddressNeededByType()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // When this type is returned, this string is appended to the comment.
                // Don't include line breaks before and after, we add them automatically.
                // Do include the leading slashes, normally `///`.
                std::string append_to_comment;

                // Calls `make_return_statement` if not null, otherwise returns `"return "+expr+";"`.
                [[nodiscard]] std::string MakeReturnStatement(OutputFile::SpecificFileContents &file, std::string_view expr) const
                {
                    if (make_return_statement)
                        return make_return_statement(file, expr);
                    else
                        return "return " + std::string(expr) + ";";
                }
            };
            // If this is null, this type is unusable as a return type.
            std::optional<ReturnUsage> return_usage;


            BindableType() {}

            // Sets the default parameters for a simple type that can be passed directly.
            // This doesn't allow the default arguments by default.
            explicit BindableType(cppdecl::Type c_type);
        };
        // The types that we know how to bind.
        // Don't access this directly! Use `FindBindableType` because that will lazily insert the missing types here.
        std::unordered_map<std::string, BindableType> bindable_cpp_types;

        enum class FindBindableTypeFlags
        {
            // Primarily for internal use. Refuses to invent new bindable types based on our various heuristics.
            // Still accepts existing types, and notably also accepts the types reported by modules.
            // We need this flag to avoid infinite recursion.
            no_invent_new_types = 1 << 0,
        };
        MRBIND_FLAG_OPERATORS_IN_CLASS(FindBindableTypeFlags)

        // Finds a type in `bindable_cpp_types`. If no such type,
        //   tries to generate the binding information for it (and inserts it into the map), or throws on failure.
        [[nodiscard]] const BindableType &FindBindableType(const cppdecl::Type &type, FindBindableTypeFlags flags = {});
        // This version returns null on failure.
        [[nodiscard]] const BindableType *FindBindableTypeOpt(const cppdecl::Type &type, FindBindableTypeFlags flags = {});


        // This acts as a cache when parsing C++ types.
        mutable std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;

        // Parses a cppdecl type from `str`, throws on failure or if there was unparsed junk at the end of input.
        // Pass the CANONICAL types to this.
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str) const;

        mutable std::unordered_map<std::string, cppdecl::QualifiedName> cached_parsed_qual_names;
        [[nodiscard]] const cppdecl::QualifiedName &ParseQualNameOrThrow(const std::string &str) const;


        // Simplies a string to be a valid C identifier.
        [[nodiscard]] static std::string StringToCIdentifier(std::string_view str);

        // Applies `StringToCIdentifier()` recursively to every name in a type.
        // Not all types should be processed this way, but this is the default behavior,
        static void ReplaceAllNamesInTypeWithCIdentifiers(cppdecl::Type &type);

        // Indents a string by the number of `levels` (each is currently 4 whitespaces).
        // Inserts them after each `\n`, and additionally, if `indent_first_line`, at the very beginning.
        [[nodiscard]] static std::string IndentString(std::string_view str, int levels, bool indent_first_line);


        // Deduplicating overload names: [
        struct OverloadedName
        {
            // The resulting C name. Initially can have duplicates, but we modify it to make the names unique.
            std::string name;

            // This is the fallback C name. If the original one is ambiguous, we replace `name` with this one and make this empty.
            // If that fails, we then proceed to adding `params` to the name.
            std::string fallback_name;

            // How many parameter types we already added to the `name`.
            std::size_t num_params_consumed = 0;

            struct Param
            {
                // We could use C types here, but C++ types are easier to obtain, and I THINK will look better in the names.
                // But who knows, we can change this later.
                cppdecl::Type cpp_type;
            };
            std::vector<Param> params;

            void AddParams(CBindings::Generator &self, const std::vector<FuncParam> &new_params)
            {
                params.reserve(params.size() + new_params.size());

                for (const FuncParam &new_param : new_params)
                    params.push_back({.cpp_type = self.ParseTypeOrThrow(new_param.type.canonical)});
            }
        };
        // Points to various parsed
        std::unordered_map<const BasicFunc *, OverloadedName> overloaded_names;

        // ] -- Deduplicating overload names


        struct EmitFuncParams
        {
            // The C name of this function.
            std::string c_name;

            // The C++ return type. We'll translate it to C automatically.
            cppdecl::Type cpp_return_type;


            // Additional statements before `return`, if any.
            // Do not add trailing newline. Do not add indentation.
            std::string cpp_extra_statements;

            // What function are we calling on the C++ side.
            // Will usually have a trailing `(`. The arguments are pasted after it, and then `cpp_called_func_end`.
            // If this is empty, the return statement isn't generated at all, and `cpp_called_func_end` is ignored.
            std::string cpp_called_func_begin;
            // This is pasted after the arguments.
            std::string cpp_called_func_end = ")";

            // Comment to add on the C side. Do add leading slashes. Don't add the trailing newline.
            // Leave empty for no comment.
            std::string c_comment;

            // The current stack of namespaces to emit as a bunch of `using namespace ...;` inside of the function body.
            // This is only useful for parsed default arguments, because I don't know how to canonicalize them to include the full namespace qualifiers.
            std::span<const NamespaceEntity *const> using_namespace_stack;

            // The extra header files to include.
            ExtraHeaders extra_headers;

            struct Param
            {
                // Empty if unnamed.
                std::string name;

                // We translate this to C types automatically.
                cppdecl::Type cpp_type;

                // If true, do not attempt to translate the type to C, paste it as is.
                // This conflicts with `default_arg` (will trigger an internal error when emitting).
                bool emit_as_is = false;

                struct DefaultArg
                {
                    std::string cpp_expr; // Spelled as a C++ expression.
                    std::string original_spelling; // Spelled in a user-friendly manner (as originally written in the C++ source).
                };
                std::optional<DefaultArg> default_arg{}; // Adding `{}` to avoid Clang warning when this field is omitted in designated init.

                // If this is false, this argument will not be added to the call expression in the implementation,
                //   and you need to manually use it for something (typically in `.cpp_called_func_begin`).
                bool add_to_call = true;

                [[nodiscard]] bool IsPointerWithNullptrDefaultArgument() const;
            };
            std::vector<Param> params;

            // Appends the parsed parameters to this function.
            // Appends to the existing parameters, doesn't remove them.
            void AddParamsFromParsedFunc(const CBindings::Generator &self, const std::vector<FuncParam> &new_params);

            void AddThisParam(const CBindings::Generator &self, const ClassEntity &new_class, bool is_const);

            void SetReturnTypeFromParsedFunc(const CBindings::Generator &self, const BasicReturningFunc &new_func);

            void SetFromParsedFunc(const CBindings::Generator &self, const FuncEntity &new_func, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassCtor(const CBindings::Generator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassDtor(const CBindings::Generator &self, const ClassEntity &new_class, const ClassDtor &new_dtor, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassMethod(const CBindings::Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassConvOp(const CBindings::Generator &self, const ClassEntity &new_class, const ClassConvOp &new_conv_op, std::span<const NamespaceEntity *const> new_using_namespace_stack);

            // Makes a const or mutable getter (depending on `is_const`).
            // Returns false if the getter can't be generated (if it's mutable and the member is read-only).
            bool SetAsFieldGetter(CBindings::Generator &self, const ClassEntity &new_class, const ClassField &new_field, bool is_const);
        };
        void EmitFunction(OutputFile &file, const EmitFuncParams &params);

        void EmitClassMemberAccessors(OutputFile &file, const ClassEntity &new_class, const ClassField &new_field);


        struct Visitor
        {
            virtual ~Visitor() = default;

            virtual void Visit(const ClassEntity &cl) {(void)cl;}
            virtual void Visit(const FuncEntity &func) {(void)func;}
            virtual void Visit(const EnumEntity &en) {(void)en;}
            virtual void Visit(const TypedefEntity &td) {(void)td;}

            void Process(const ClassEntity &cl)
            {
                class_stack.push_back(&cl);
                struct Guard
                {
                    Visitor &self;
                    ~Guard()
                    {
                        self.class_stack.pop_back();
                    }
                };
                Guard guard{*this};

                Visit(cl);
                Process(static_cast<const mrbind::EntityContainer &>(cl));
            }
            void Process(const FuncEntity &func) {Visit(func);}
            void Process(const EnumEntity &en) {Visit(en);}
            void Process(const TypedefEntity &td) {Visit(td);}
            void Process(const NamespaceEntity &ns)
            {
                namespace_stack.push_back(&ns);
                struct Guard
                {
                    Visitor &self;
                    ~Guard()
                    {
                        self.namespace_stack.pop_back();
                    }
                };
                Guard guard{*this};

                Process(static_cast<const mrbind::EntityContainer &>(ns));
            }
            void Process(const EntityContainer &c) {for (const Entity &e : c.nested) Process(e);}
            void Process(const Entity &e) {std::visit([&](const auto &elem){Process(elem);}, *e.variant);}

          protected:
            // Those are "stacked" on top of each other. First the namespace stack gets filled, then the class stack.
            [[nodiscard]] const std::vector<const NamespaceEntity *> &GetNamespaceStack() const {return namespace_stack;}
            [[nodiscard]] const std::vector<const ClassEntity *> &GetClassStack() const {return class_stack;}

          private:
            std::vector<const NamespaceEntity *> namespace_stack;
            std::vector<const ClassEntity *> class_stack;
        };

        // This fills `parsed_type_info` with the knowledge about all parsed types.
        struct VisitorRegisterKnownTypes;

        // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
        struct VisitorRegisterOverloadedNames;

        void ResolveOverloadAmbiguities();

        // This actually emits the code for the parsed entities.
        struct VisitorEmit;

        void Generate();


        void DumpFileToOstream(const OutputFile &context, const OutputFile::SpecificFileContents &file, std::ostream &out);
    };
}

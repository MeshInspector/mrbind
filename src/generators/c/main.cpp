#include "common/filesystem.h"
#include "common/meta.h"
#include "common/parsed_data.h"
#include "common/set_error_handlers.h"
#include "generators/common/command_line_args_as_utf8.h"
#include "generators/common/data_from_file.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/to_string.h>

#include <filesystem>
#include <fstream>
#include <functional>
#include <iostream>
#include <ranges>
#include <set>
#include <unordered_set>

namespace mrbind
{
    namespace
    {
        struct CBindingGenerator
        {
            CBindingGenerator() {}

            // This needs a stable address, at least because some `forward_declare_or_include_header` callbacks store a pointer to it.
            CBindingGenerator(const CBindingGenerator &) = delete;
            CBindingGenerator &operator=(const CBindingGenerator &) = delete;

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
            // ]

            // Constants: [
            std::string extension_header = ".h";
            std::string extension_source = ".cpp";
            // ]


            struct ParsedTypeInfo;

            // Describes one header and its source file that we're generating.
            struct OutputFile
            {
                // Names of the output files: [
                std::string header_path_full;
                std::string source_path_full;
                // ]
                std::string header_path_for_inclusion;

                // The identifier of this file. Basically a relative path without an extension.
                std::string relative_name;

                // This sets `relative_name` and all the fields above.
                void InitRelativeName(CBindingGenerator &self, std::string new_relative_name, bool is_public)
                {
                    relative_name = std::move(new_relative_name);

                    std::filesystem::path relative_output_path = MakePath(relative_name);

                    const auto &header_dir = is_public ? self.output_header_dir_path : self.output_source_dir_path;

                    header_path_full = PathToString((header_dir                  / relative_output_path).lexically_normal()) + self.extension_header;
                    source_path_full = PathToString((self.output_source_dir_path / relative_output_path).lexically_normal()) + self.extension_source;
                    header_path_for_inclusion = PathToString(relative_output_path.lexically_normal()) + self.extension_header;

                    { // Decide what directories to create.
                        std::filesystem::path cur_path = relative_output_path.lexically_normal();
                        while (true)
                        {
                            cur_path = cur_path.parent_path();
                            if (cur_path.empty() || cur_path == ".")
                                break;
                            self.directories_to_create.insert((header_dir                  / cur_path).lexically_normal());
                            self.directories_to_create.insert((self.output_source_dir_path / cur_path).lexically_normal());
                        }
                    }
                }


                struct SpecificFileContents
                {
                    // The contents are pasted in this order: [

                    // This is pasted before the rest of the contents. It's in a separate variable to simplify generation.
                    std::string preamble;

                    // The headers from `forward_declarations_and_inclusions` are appended to this.
                    // Prefer that variable instead of adding things here.
                    // This stores header names without `#include <...>`, which is added automatically.
                    // Harcoded standard library can also go in `preamble`.
                    std::set<std::string> custom_headers;

                    // The header names from the standard library. Those are separate just for the cool looks.
                    std::set<std::string> stdlib_headers;

                    // `extern "C" {` goes here (the brace is closed in the footer). Maybe something else.
                    std::string after_includes;

                    // The forward declarations from `forward_declarations_and_inclusions` are appended to this.
                    // Prefer that variable instead of adding things here.
                    std::set<std::string> custom_forward_declarations;

                    // This is the primary content.
                    std::string contents;
                    // This is pasted after everything else.
                    std::string footer;

                    // ]

                    struct ForwardDeclarationOrInclusion
                    {
                        // If false we'll just forward-declare.
                        bool need_header = false;
                    };
                    // Lists all type names that are needed here, and whether we should include headers for them for forward-decare them.
                    std::unordered_map<std::string, ForwardDeclarationOrInclusion> forward_declarations_and_inclusions;
                };

                SpecificFileContents header;
                SpecificFileContents source;

                void InitDefaultContents()
                {
                    header.preamble += "#pragma once\n";
                    source.preamble += "#include \"" + header_path_for_inclusion + "\"\n";

                    header.after_includes += "#ifdef __cplusplus\nextern \"C\" {\n#endif\n";
                    header.footer += "#ifdef __cplusplus\n} // extern \"C\"\n#endif\n";
                }
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

            // Figures out how to prop
            [[nodiscard]] std::string ParsedFilenameToRelativeNameForInclusion(const DeclFileName &input)
            {
                std::filesystem::path input_path = std::filesystem::weakly_canonical(MakePath(input.canonical));

                std::filesystem::path ret;
                for (const auto &elem : assumed_include_directories)
                {
                    std::filesystem::path candidate = input_path.lexically_relative(elem);
                    if (ret.empty() || (candidate.native().size() < ret.native().size()))
                        ret = std::move(candidate);
                }

                if (ret.empty())
                    throw std::runtime_error("I want to include the parsed file `" + input.canonical + "` but there is no matching `--assume-include-dir`.");

                return PathToString(ret);
            }


            // Returns the output file (which includes both header and source) for the given input file.
            // Initializes it on the first access.
            [[nodiscard]] OutputFile &GetOutputFile(const DeclFileName &source)
            {
                auto [iter, is_new] = outputs.try_emplace(source.canonical);
                OutputFile &file = iter->second;
                if (!is_new)
                    return file; // Already exists.

                // Get the filename relative to the output directory, without extension.
                std::string rel_name;
                auto prefix_it = path_mappings.find(source.canonical);
                if (prefix_it != path_mappings.end())
                {
                    rel_name = prefix_it->second; // Direct match.
                }
                else
                {
                    std::filesystem::path source_copy_path = MakePath(source.canonical).parent_path();

                    while (true)
                    {
                        std::string source_copy_str = source_copy_path.string();
                        auto it = path_mappings.find(source_copy_str);
                        if (it != path_mappings.end())
                        {
                            rel_name = it->second;
                            rel_name += source.canonical.substr(source_copy_str.size());

                            // Strip some known extensions.
                            for (const auto &ext : known_input_exts_to_strip)
                            {
                                if (rel_name.ends_with(ext))
                                {
                                    rel_name.resize(rel_name.size() - ext.size());
                                    break;
                                }
                            }
                            break; // Success.
                        }

                        // Sic! `.has_parent_path()` seems to always return true, it has a weird spec.
                        if (!source_copy_path.has_relative_path())
                            throw std::runtime_error("Couldn't map parsed filename `" + source.canonical + "` to an output filename, no matching `--map-path` found.");

                        source_copy_path = source_copy_path.parent_path();
                    }
                }

                file.InitRelativeName(*this, std::move(rel_name), true);
                file.InitDefaultContents();
                return file;
            }

            // Returns a special output file that holds the internal implementation details.
            // This is created lazily only if this is called.
            [[nodiscard]] OutputFile &GetInternalDetailsFile()
            {
                static const std::string id = "__mrbind_c_details";
                auto [iter, is_new] = outputs.try_emplace(id);
                OutputFile &file = iter->second;

                if (!is_new)
                    return iter->second;

                file.InitRelativeName(*this, id, false);
                file.header.preamble += "#pragma once\n\n";
                file.header.stdlib_headers.insert("stdexcept");

                // Class default arguments.
                file.header.contents += "namespace mrbindc_details\n";
                file.header.contents += "{\n";
                file.header.contents += "    // Those are used to handle by-value arguments of class types,\n";
                file.header.contents += "    //   which are passed as a pointer plus a enum explaining how to handle it.\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_DEF_CTOR(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_DefaultConstruct ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `PassBy_DefaultConstruct` was used.\") : cpptype_{}) :\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_COPY(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_Copy ? cpptype_(*(cpptype_ *)param_) :\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_MOVE(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_Move ? cpptype_(std::move(*(cpptype_ *)param_)) :\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_DEF_ARG(param_, cpptype_, pass_by_enum_, ...) param_##_pass_by == pass_by_enum_##_DefaultArgument ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `PassBy_DefaultArgument` was used.\") : cpptype_(__VA_ARGS__)) :\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_NO_DEF_ARG(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_DefaultArgument ? throw std::runtime_error(\"Function parameter `\" #param_ \" has no default argument, yet `PassBy_DefaultArgument` was used for it.\") :\n";
                file.header.contents += "    #define MRBINDC_CLASSARG_END(param_, cpptype_) true ? throw std::runtime_error(\"Invalid `PassBy` enum value specified for function parameter `\" #param_ \".\") : ::mrbindc_details::declval<cpptype_>() // We need the dumb fallback to `mrbindc_details::declval()` to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.\n";
                file.header.contents += "\n";
                file.header.contents += "    // Need this instead of `std::declval()` because we actually are going to instantiate it (which `std::declval()` can `static_assert` on).\n";
                file.header.contents += "    // We rely on the compiler not emitting a reference to it.\n";
                file.header.contents += "    template <typename T> T declval();\n";
                file.header.contents += "} // namespace mrbindc_details \n";
                return file;
            }


            struct ParsedTypeInfo
            {
                OutputFile *declared_in_file = nullptr;

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

                    // Only set if `IsDefaultCopyOrMoveConstructible()` is true.
                    // This is a C enum that lets you select between one of the predefined constructors.
                    std::string predefined_ctor_enum_name;

                    // Only set if `is_destructible`.
                    // This is the name of the cleanup (destruction) function.
                    std::string cleanup_func_name;

                    // For consistency with `EnumDesc`. This one doesn't seem to be strictly necessary.
                    ClassDesc() {}

                    [[nodiscard]] bool IsDefaultCopyOrMoveConstructible() const
                    {
                        return is_default_constructible || is_copy_constructible || is_move_constructible;
                    }
                };

                using InputTypeVariant = std::variant<EnumDesc, ClassDesc>;
                InputTypeVariant input_type;

                // The type name for our C bindings.
                cppdecl::Type c_type;
                std::string c_type_str;

                std::optional<std::string> forward_declaration;

                [[nodiscard]] bool IsEnum() const {return std::holds_alternative<EnumDesc>(input_type);}
                [[nodiscard]] bool IsClass() const {return std::holds_alternative<ClassDesc>(input_type);}
            };
            // The keys are strings produced by `cppdecl` from C++ types. Don't feed the input type names to this directly.
            std::unordered_map<std::string, ParsedTypeInfo> parsed_type_info;


            // Given a type, iterates over every non-builtin type dependency that it has (which will have zero modifiers, and no `SimpleTypeFlags`,
            //   so no signedness and such).
            // This is the default behavior, `BindableType` entries can customize it.
            static void DefaultForEachParsedTypeNeededByType(const cppdecl::Type &type, const std::function<void(const std::string &)> func)
            {
                type.VisitEachQualifiedName(
                    cppdecl::VisitEachQualifiedNameFlags::only_types | cppdecl::VisitEachQualifiedNameFlags::no_recurse_into_qualified_names,
                    [&](const cppdecl::QualifiedName &name)
                    {
                        if (!name.IsEmpty() && !name.IsBuiltInTypeName())
                            func(cppdecl::ToCode(name, cppdecl::ToCodeFlags::canonical_c_style));
                    }
                );
            }


            // Type classification: [

            // The arrows mean implication (they point towards supersets).
            //                                                                                  ---
            //       IsBindableAsIsIndirectReinterpret   <---   IsBindableAsIsIndirect            Can by passed by pointer.
            //                    ^                                       ^                     ---
            //                    |                                       |
            //                    |                                       |                     ---
            //       IsBindableAsIsDirectCast            <---   IsBindableAsIsDirect              Can be passed by value (and by pointer).
            //                                                                                  ---
            //
            //    | Passing requires a cast (reinterpret |   | Can be passed without a cast. |
            //    |   or C-style respectively)           |   |                               |

            // Pointers and refs to those can be passed freely with only a `reinterpret_cast`.
            [[nodiscard]] bool IsBindableAsIsIndirectReinterpret(const cppdecl::Type &type)
            {
                // `type.simple_type` can be anything.

                for (const auto &mod : type.modifiers)
                {
                    bool ok = std::visit(Overload{
                        [&](const cppdecl::Pointer &)
                        {
                            return true; // Ok.
                        },
                        [&](const cppdecl::Reference &)
                        {
                            return false; // Nah, no references in C.
                        },
                        [&](const cppdecl::MemberPointer &)
                        {
                            return false; // Nah, no member pointers in C.
                        },
                        [&](const cppdecl::Array &elem)
                        {
                            return true; // Ok. Hopefully the array size is hardcoded.
                        },
                        [&](const cppdecl::Function &elem)
                        {
                            if (elem.noexcept_ || elem.cv_quals != cppdecl::CvQualifiers{} || elem.ref_quals != cppdecl::RefQualifiers::none)
                                return false; // C++-style qualifiers not allowed.

                            // Trailing return type is fine, because we can just not use it by passing a flag to `ToCode`.

                            // Check all parameters.
                            return std::all_of(elem.params.begin(), elem.params.end(), [&](const auto &param){return IsBindableAsIsDirect(param.type);});
                        },
                    }, mod.var);

                    if (!ok)
                        return false;
                }

                return true;
            }

            // Pointers and refs to those can be passed freely.
            [[nodiscard]] bool IsBindableAsIsIndirect(const cppdecl::Type &type)
            {
                return IsBindableAsIsIndirectReinterpret(type) && type.simple_type.name.IsBuiltInTypeName();
            }

            // Those can be passed by value with only a C-style cast.
            [[nodiscard]] bool IsBindableAsIsDirectCast(const cppdecl::Type &type)
            {
                if (type.Is<cppdecl::Pointer>() && IsBindableAsIsIndirectReinterpret(type))
                    return true;

                if (type.modifiers.empty())
                {
                    // Is a parsed enum?
                    if (auto iter = parsed_type_info.find(cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style));
                        iter != parsed_type_info.end() && iter->second.IsEnum()
                    )
                    {
                        return true;
                    }

                    // Is a builtin type?
                    if (type.simple_type.name.IsBuiltInTypeName())
                        return true;
                }

                return false; // Nope.
            }

            // Those can be passed by value with only a `static_cast`.
            [[nodiscard]] bool IsBindableAsIsDirect(const cppdecl::Type &type)
            {
                bool ret = IsBindableAsIsDirectCast(type) && type.simple_type.name.IsBuiltInTypeName();
                assert(!ret || IsBindableAsIsIndirect(type)); // This being true should automatically imply `IsBindableAsIsIndirect` in all cases.
                return ret;
            }

            // ]


            struct BindableType
            {
                struct TypeDependency
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
                        // Adding `""` to mark this as optional for Clang's designated init.
                        std::string name_suffix = "";
                    };

                    // Must not be empty. Usually this will have size 1.
                    // If this has more than one element, then the C function must have MORE THAN ONE parameter per this one C++ type.
                    std::vector<CParam> c_params;

                    // Defaults to an identity function if null.
                    // Given a C++ parameter name (which normally matches the C name, but see `CParam::name_suffix` above), generates the argument for it.
                    // The `file` is also provided to allow inserting additional includes and what not, but normally you shouldn't touch it. Prefer
                    //   `type_dependencies` for that purpose.
                    // `default_arg` is the default argument or empty if none. Note that depending on where this `ParamUsage` is,
                    //   this might never receive default arguments.
                    std::function<std::string(OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)> c_params_to_cpp;

                    // Which parsed types do we need to include or forward-declare? The keys are C++ type names.
                    // By default you can fill this using `DefaultForEachParsedTypeNeededByType()`.
                    std::unordered_map<std::string, TypeDependency> type_dependencies;

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
                    std::function<std::string(std::string_view expr)> make_return_statement;

                    // Which parsed types do we need to include or forward-declare?
                    // By default you can fill this using `DefaultForEachParsedTypeNeededByType()`.
                    std::unordered_map<std::string, TypeDependency> type_dependencies;

                    // When this type is returned, this string is appended to the comment.
                    // Don't include line breaks before and after, we add them automatically.
                    // Do include the leading slashes, normally `///`.
                    std::string append_to_comment;

                    // Calls `make_return_statement` if not null, otherwise returns `"return "+expr+";"`.
                    [[nodiscard]] std::string MakeReturnStatement(std::string_view expr) const
                    {
                        if (make_return_statement)
                            return make_return_statement(expr);
                        else
                            return "return " + std::string(expr) + ";";
                    }
                };
                // If this is null, this type is unusable as a return type.
                std::optional<ReturnUsage> return_usage;


                BindableType() {}

                // Sets the default parameters for a simple type that can be passed directly.
                // This doesn't allow the default arguments by default.
                explicit BindableType(cppdecl::Type c_type)
                {
                    ParamUsage &param = param_usage.emplace();
                    param.c_params.push_back({.c_type = c_type, .name_suffix = ""});

                    ReturnUsage &ret = return_usage.emplace();

                    // For `void` omit `return` for clarity.
                    if (c_type.AsSingleWord() == "void")
                        return_usage->make_return_statement = [](std::string_view expr){return std::string(expr) + ";";};

                    ret.c_type = std::move(c_type); // Here we can move the type.
                }
            };
            // The types that we know how to bind.
            // Don't access this directly! Use `FindBindableType` because that will lazily insert the missing types here.
            std::unordered_map<std::string, BindableType> bindable_cpp_types;

            // Finds a type in `bindable_cpp_types`. If no such type,
            //   tries to generate the binding information for it (and inserts it into the map), or throws on failure.
            [[nodiscard]] const BindableType &FindBindableType(const cppdecl::Type &type)
            {
                const std::string type_str = ToCode(type, cppdecl::ToCodeFlags::canonical_c_style);

                { // Find existing type.
                    // Here we don't use `.try_emplace()` because we might throw later, and in that case we don't want to insert anything.
                    auto iter = bindable_cpp_types.find(type_str);
                    if (iter != bindable_cpp_types.end())
                        return iter->second;
                }

                auto FillDefaultTypeDependencies = [&](BindableType &new_type)
                {
                    DefaultForEachParsedTypeNeededByType(type, [&](const std::string &str)
                    {
                        // Could validated `parsed_type_info.contains(str)` here, but for now I'd rather do it lazily on use.
                        // Not sure which way is better. Doing it lazily sounds a tiny bit more flexible?

                        if (new_type.param_usage)
                            new_type.param_usage->type_dependencies.try_emplace(str);
                        if (new_type.param_usage_with_default_arg)
                            new_type.param_usage_with_default_arg->type_dependencies.try_emplace(str);
                        if (new_type.return_usage)
                            new_type.return_usage->type_dependencies.try_emplace(str);
                    });
                };


                // Bindable without a cast?
                if (IsBindableAsIsDirect(type))
                {
                    auto type_c_style = type;
                    ReplaceAllNamesInTypeWithCIdentifiers(type_c_style);

                    BindableType new_type(type_c_style);

                    // Allow default arguments via pointers.
                    auto &param_def_arg = new_type.param_usage_with_default_arg.emplace();
                    param_def_arg.c_params.push_back({
                        .c_type = type_c_style.AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})
                    });
                    param_def_arg.append_to_comment = [](auto &&...){return "///   To use the default argument, pass a null pointer.";};
                    param_def_arg.c_params_to_cpp = [type_str](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                    {
                        std::string ret;
                        ret += cpp_param_name;
                        ret += " ? *";
                        ret += cpp_param_name;
                        ret += " : (";
                        ret += type_str;
                        ret += ")";
                        ret += default_arg;
                        return ret;
                    };

                    // I THINK this isn't gonna add anything in this case, but just in case.
                    FillDefaultTypeDependencies(new_type);

                    return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                }
                // Bindable with a C-style cast?
                if (IsBindableAsIsDirectCast(type))
                {
                    auto type_c_style = type;
                    ReplaceAllNamesInTypeWithCIdentifiers(type_c_style);

                    BindableType new_type(type_c_style);

                    // Add the casts!
                    new_type.return_usage->make_return_statement = [type_str_c = ToCode(type_c_style, cppdecl::ToCodeFlags::canonical_c_style)](std::string_view expr){return "return (" + type_str_c + ")" + std::string(expr) + ";";};
                    new_type.param_usage->c_params_to_cpp = [type_str](OutputFile::SpecificFileContents &, std::string_view cpp_param_name, std::string_view default_arg)
                    {
                        return "(" + type_str + ")" + std::string(cpp_param_name);
                    };

                    // Allow default arguments via pointers.
                    auto &param_def_arg = new_type.param_usage_with_default_arg.emplace();
                    param_def_arg.c_params.push_back({
                        .c_type = type_c_style.AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})
                    });
                    param_def_arg.append_to_comment = [](auto &&...){return "///   To use the default argument, pass a null pointer.";};
                    param_def_arg.c_params_to_cpp = [type_str](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                    {
                        std::string ret;
                        ret += cpp_param_name;
                        ret += " ? (";
                        ret += type_str;
                        ret += ")*";
                        ret += cpp_param_name;
                        ret += " : ";
                        ret += type_str;
                        ret += "(";
                        ret += default_arg;
                        ret += ")";
                        return ret;
                    };

                    // Definitely needed here.
                    FillDefaultTypeDependencies(new_type);

                    return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                }


                const bool is_ref = type.Is<cppdecl::Reference>();
                cppdecl::Type ref_target_type;
                if (is_ref)
                    ref_target_type = cppdecl::Type(type).RemoveTopLevelModifier();

                // A reference to `IsBindableAsIsIndirect[Reinterpret]`?
                if (is_ref)
                {
                    const bool without_cast = IsBindableAsIsIndirect(ref_target_type);
                    const bool with_cast = !without_cast && IsBindableAsIsIndirectReinterpret(ref_target_type);

                    if (without_cast || with_cast)
                    {
                        auto type_c_style = type;
                        ReplaceAllNamesInTypeWithCIdentifiers(type_c_style);

                        BindableType new_type(type_c_style);

                        new_type.param_usage_with_default_arg = std::move(new_type.param_usage);
                        new_type.param_usage.reset();

                        auto &param_def_arg = *new_type.param_usage_with_default_arg;

                        param_def_arg.c_params.front().c_type.modifiers.front().var = cppdecl::Pointer{};
                        param_def_arg.append_to_comment = [](std::string_view cpp_param_name, bool has_default_arg) -> std::string
                        {
                            if (has_default_arg)
                                // Two spaces because this goes after a message about the default argument.
                                return "///   To use the default argument, pass a null pointer.";
                            else
                                return "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";
                        };

                        param_def_arg.c_params_to_cpp = [
                            type_str,
                            type_str_noref = ToCode(ref_target_type, cppdecl::ToCodeFlags::canonical_cpp_style),
                            with_cast
                        ](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                        {
                            std::string ret;
                            ret += cpp_param_name;
                            ret += " ? *";
                            if (with_cast)
                            {
                                file.custom_headers.insert("type_traits");
                                ret += "reinterpret_cast<std::add_pointer_t<";
                                ret += type_str_noref;
                                ret += ">>(";
                                ret += cpp_param_name;
                                ret += ")";
                            }
                            else
                            {
                                ret += cpp_param_name;
                            }
                            ret += " : ";
                            if (default_arg.empty())
                            {
                                file.custom_headers.insert("stdexcept");
                                ret += "throw std::runtime_error(\"Parameter `";
                                ret += cpp_param_name;
                                ret += "` can not be null.\")";
                            }
                            else
                            {
                                ret += "static_cast<";
                                ret += type_str;
                                ret += ">(";
                                ret += default_arg;
                                ret += ")";
                            }
                            return ret;
                        };

                        FillDefaultTypeDependencies(new_type);

                        return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                    }
                }




                // Maybe a class?
                if (type.modifiers.empty())
                {
                    if (auto iter = parsed_type_info.find(type_str); iter != parsed_type_info.end())
                    {
                        if (auto class_desc = std::get_if<ParsedTypeInfo::ClassDesc>(&iter->second.input_type))
                        {
                            if (!class_desc->IsDefaultCopyOrMoveConstructible())
                                throw std::runtime_error("Can't bind class type `" + type_str + "` by value because it doesn't have a default nor copy nor move constructor, or isn't destructible.");

                            BindableType new_type;

                            // Here we only fill the `_with_default_arg` version, because that handles both.
                            BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                            param_usage.type_dependencies[type_str].need_header = true; // We need the constructor selection enum.

                            param_usage.c_params.emplace_back().c_type.simple_type.name.parts.emplace_back(class_desc->predefined_ctor_enum_name);
                            param_usage.c_params.back().name_suffix = "_pass_by";
                            param_usage.c_params.emplace_back().c_type = iter->second.c_type;
                            param_usage.c_params.back().c_type.modifiers.emplace_back(cppdecl::Pointer{}); // This should be the only modifier at this point.

                            param_usage.c_params_to_cpp = [
                                this,
                                type_str,
                                pass_by_enum = class_desc->predefined_ctor_enum_name,
                                is_default_constructible = class_desc->is_default_constructible,
                                is_copy_constructible = class_desc->is_copy_constructible,
                                is_move_constructible = class_desc->is_move_constructible
                            ](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                            {
                                std::string ret;

                                // Insert the defails file for the `PassBy` macros.
                                file.custom_headers.insert(GetInternalDetailsFile().header_path_for_inclusion);

                                if (is_default_constructible)
                                {
                                    ret += "MRBINDC_CLASSARG_DEF_CTOR(";
                                    ret += cpp_param_name;
                                    ret += ", ";
                                    ret += type_str;
                                    ret += ", ";
                                    ret += pass_by_enum;
                                    ret += ") ";
                                }

                                if (is_copy_constructible)
                                {
                                    ret += "MRBINDC_CLASSARG_COPY(";
                                    ret += cpp_param_name;
                                    ret += ", ";
                                    ret += type_str;
                                    ret += ", ";
                                    ret += pass_by_enum;
                                    ret += ") ";
                                }

                                if (is_move_constructible)
                                {
                                    ret += "MRBINDC_CLASSARG_MOVE(";
                                    ret += cpp_param_name;
                                    ret += ", ";
                                    ret += type_str;
                                    ret += ", ";
                                    ret += pass_by_enum;
                                    ret += ") ";
                                }

                                if (default_arg.empty())
                                {
                                    ret += "MRBINDC_CLASSARG_NO_DEF_ARG(";
                                    ret += cpp_param_name;
                                    ret += ", ";
                                    ret += type_str;
                                    ret += ", ";
                                    ret += pass_by_enum;
                                    ret += ") ";
                                }
                                else
                                {
                                    ret += "MRBINDC_CLASSARG_DEF_ARG(";
                                    ret += cpp_param_name;
                                    ret += ", ";
                                    ret += type_str;
                                    ret += ", ";
                                    ret += pass_by_enum;
                                    ret += ", ";
                                    ret += default_arg;
                                    ret += ") ";
                                }

                                ret += "MRBINDC_CLASSARG_END(";
                                ret += cpp_param_name;
                                ret += ", ";
                                ret += type_str;
                                ret += ") ";

                                return ret;
                            };

                            param_usage.append_to_comment = [pass_by_enum = class_desc->predefined_ctor_enum_name](std::string_view cpp_param_name, bool has_default_arg)
                            {
                                (void)cpp_param_name;
                                std::string ret;
                                if (has_default_arg)
                                {
                                    ret += "///   To use the default argument, pass `";
                                    ret += pass_by_enum;
                                    ret += "_DefaultArgument` and a null pointer.";
                                }
                                return ret;
                            };

                            BindableType::ReturnUsage &return_usage = new_type.return_usage.emplace();

                            return_usage.c_type = iter->second.c_type;
                            return_usage.c_type.modifiers.emplace_back(cppdecl::Pointer{});
                            return_usage.type_dependencies.try_emplace(type_str); // Only the forward declaration is needed.
                            return_usage.append_to_comment = "/// Returns an instance allocated on the heap! Must call `";
                            return_usage.append_to_comment += class_desc->cleanup_func_name;
                            return_usage.append_to_comment += "()` to free it when you're done using it.";
                            return_usage.make_return_statement = [type_str, type_str_c_style = iter->second.c_type_str](std::string_view expr){return "return (" + type_str_c_style + " *)new " + type_str + "(" + std::string(expr) + ");";};

                            return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                        }
                    }
                }

                throw std::runtime_error("Don't know how to bind type `" + type_str + "`.");
            }

            // Parses a cppdecl type from `str`, throws on failure or if there was unparsed junk at the end of input.
            // Pass the CANONICAL types to this.
            [[nodiscard]] static cppdecl::Type ParseTypeOrThrow(std::string_view str)
            {
                const std::string_view orig_str = str;
                auto ret = cppdecl::ParseType(str);
                if (auto error = std::get_if<cppdecl::ParseError>(&ret))
                    throw std::runtime_error("Unable to parse type `" + std::string(orig_str) + "`, error at offset " + std::to_string(str.data() - orig_str.data()) + ": " + error->message);
                if (!str.empty())
                    throw std::runtime_error("Unable to parse type `" + std::string(orig_str) + "`, junk starting at offset " + std::to_string(str.data() - orig_str.data()) + ".");
                return std::get<cppdecl::Type>(ret);
            }

            // Simplies a string to be a valid C identifier.
            [[nodiscard]] static std::string StringToCIdentifier(std::string_view str)
            {
                std::string ret;
                ret.reserve(str.size());
                bool prev_char_is_special = false;
                std::size_t last_good_size = 0;
                for (char ch : str)
                {
                    // Somewhat in doubt here. I don't want to treat `_` as a special character, to preserve multiple underscores in input.
                    if (cppdecl::IsIdentifierChar(ch))
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
                return ret;
            }

            // Applies `StringToCIdentifier()` recursively to every name in a type.
            // Not all types should be processed this way, but this is the default behavior,
            static void ReplaceAllNamesInTypeWithCIdentifiers(cppdecl::Type &type)
            {
                type.VisitEachQualifiedName(
                    cppdecl::VisitEachQualifiedNameFlags::only_types | cppdecl::VisitEachQualifiedNameFlags::no_recurse_into_qualified_names,
                    [&](cppdecl::QualifiedName &name)
                    {
                        std::string str = StringToCIdentifier(ToCode(name, cppdecl::ToCodeFlags::canonical_c_style));
                        name.parts.clear();
                        name.parts.emplace_back(std::move(str));
                    }
                );
            }

            // Indents a string by the number of `levels` (each is currently 4 whitespaces).
            // Only inserts them after each `\n`. Not at the beginning.
            [[nodiscard]] static std::string IndentString(std::string_view str, int levels)
            {
                std::string ret;
                for (char ch : str)
                {
                    ret += ch;

                    if (ch == '\n')
                    {
                        for (int i = 0; i < levels; i++)
                            ret += "    ";
                    }
                }
                return ret;
            }


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

                void AddParams(CBindingGenerator &self, const std::vector<FuncParam> &new_params)
                {
                    params.reserve(params.size() + new_params.size());

                    for (const FuncParam &new_param : new_params)
                        params.push_back({.cpp_type = ParseTypeOrThrow(new_param.type.canonical)});
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

                // What function are we calling on the C++ side.
                // Will usually have a trailing `(`. The arguments are pasted after it.
                std::string cpp_called_func_begin;
                // This is pasted after the arguments.
                std::string cpp_called_func_end = ")";

                // Comment to add on the C side. Do add leading slashes. Don't add the trailing newline.
                // Leave empty for no comment.
                std::string c_comment;

                // The current stack of namespaces to emit as a bunch of `using namespace ...;`.
                std::span<const NamespaceEntity *const> namespace_stack;

                struct Param
                {
                    // Empty if unnamed.
                    std::string name;

                    // We translate this to C types automatically.
                    cppdecl::Type cpp_type;

                    struct DefaultArg
                    {
                        std::string cpp_expr; // Spelled as a C++ expression.
                        std::string user_friendly; // Spelled in a user-friendly manner.
                    };
                    std::optional<DefaultArg> default_arg;

                    // If this is false, this argument will not be added to the call expression in the implementation,
                    //   and you need to manually use it for something (typically in `.cpp_called_func_begin`).
                    bool add_to_call = true;
                };
                std::vector<Param> params;

                // Appends the parsed parameters to this function.
                // Appends to the existing parameters, doesn't remove them.
                void AddParamsFromParsedFunc(const std::vector<FuncParam> &new_params)
                {
                    params.reserve(params.size() + new_params.size());
                    for (const FuncParam &new_param : new_params)
                    {
                        Param &param = params.emplace_back();
                        param.name = new_param.name ? *new_param.name : "";
                        param.cpp_type = ParseTypeOrThrow(new_param.type.canonical);

                        if (new_param.default_argument)
                        {
                            Param::DefaultArg &arg = param.default_arg.emplace();
                            arg.cpp_expr = new_param.default_argument->as_cpp_expression;
                            arg.user_friendly = new_param.default_argument->original_spelling;
                        }
                    }
                }

                void SetFromParsedFunc(const CBindingGenerator &self, const FuncEntity &new_func, std::span<const NamespaceEntity *const> new_namespace_stack)
                {
                    AddParamsFromParsedFunc(new_func.params);

                    c_name = self.overloaded_names.at(&new_func).name;

                    cpp_return_type = ParseTypeOrThrow(new_func.return_type.canonical);

                    cpp_called_func_begin = new_func.full_qual_name;
                    cpp_called_func_begin += '(';

                    if (new_func.comment)
                        c_comment = new_func.comment->text_with_slashes;

                    namespace_stack = new_namespace_stack;
                }

                void SetFromParsedClassCtor(const CBindingGenerator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_namespace_stack)
                {
                    AddParamsFromParsedFunc(new_ctor.params);

                    cppdecl::Type cpp_type = ParseTypeOrThrow(new_class.full_type);
                    std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);
                    const ParsedTypeInfo &info = self.parsed_type_info.at(cpp_type_str);

                    c_name = self.overloaded_names.at(&new_ctor).name;
                    c_name += "_Construct";

                    cpp_return_type = cpp_type;

                    cpp_called_func_begin = cpp_type_str;
                    cpp_called_func_begin += '(';

                    if (new_ctor.comment)
                        c_comment = new_ctor.comment->text_with_slashes;

                    namespace_stack = new_namespace_stack;
                }
            };
            void EmitFunction(OutputFile &file, const EmitFuncParams &params)
            {
                cppdecl::Function new_func;

                std::string body = params.cpp_called_func_begin;

                std::string comment;
                if (!params.c_comment.empty())
                {
                    comment += params.c_comment;
                    comment += '\n';
                }

                // Assemble the parameter and argument lists.
                std::size_t i = 0;
                for (const auto &param : params.params)
                {
                    try
                    {
                        const BindableType &bindable_param_type = FindBindableType(param.cpp_type);
                        if (!bindable_param_type.param_usage && !bindable_param_type.param_usage_with_default_arg)
                            throw std::runtime_error("Unable to bind this function because this type can't be bound as a parameter.");
                        if (param.default_arg && !bindable_param_type.param_usage_with_default_arg)
                            throw std::runtime_error("Unable to bind this function because this parameter type does't support default arguments.");

                        const auto &param_usage =
                            param.default_arg || !bindable_param_type.param_usage
                            ? bindable_param_type.param_usage_with_default_arg
                            : bindable_param_type.param_usage;


                        // Declare or include type dependencies of the parameter.
                        for (const auto &dep : param_usage->type_dependencies)
                        {
                            auto iter = parsed_type_info.find(dep.first);
                            if (iter == parsed_type_info.end())
                                throw std::runtime_error("Using this type as a parameter requires `" + dep.first + "` to be declared, but I don't know how to forward-declare it or what header to include to get its declaration.");

                            if (iter->second.declared_in_file != &file)
                            {
                                file.header.forward_declarations_and_inclusions[dep.first].need_header |= dep.second.need_header;
                            }
                        }

                        std::string param_name = !param.name.empty() ? param.name : "_" + std::to_string(i);

                        for (const auto &param_usage : param_usage->c_params)
                        {
                            auto &new_param = new_func.params.emplace_back();
                            new_param.type = param_usage.c_type;
                            new_param.name.parts.emplace_back(param_name + param_usage.name_suffix);
                        }

                        if (i > 0)
                            body += ',';
                        body += "\n        ";
                        body += param_usage->CParamsToCpp(file.source, param_name, param.default_arg ? param.default_arg->cpp_expr : "");

                        // Comment about the default argument.
                        if (param.default_arg)
                        {
                            comment += "/// Parameter `";
                            comment += param_name;
                            comment += "` has a default argument: `";
                            comment += param.default_arg->user_friendly;
                            comment += "`.\n";
                        }

                        // Custom comment?
                        if (param_usage->append_to_comment)
                        {
                            comment += param_usage->append_to_comment(param.name, bool(param.default_arg));
                            comment += '\n';
                        }

                        i++;
                    }
                    catch (...)
                    {
                        std::throw_with_nested(std::runtime_error("While processing parameter " + std::to_string(i) + ":"));
                    }
                }
                if (!params.params.empty())
                    body += "\n    ";
                body += params.cpp_called_func_end;


                cppdecl::Decl new_decl;
                new_decl.name.parts.emplace_back(params.c_name);

                new_decl.type.modifiers.emplace_back(std::move(new_func));

                try
                {
                    // Figure out the return type.
                    const BindableType &bindable_return_type = FindBindableType(params.cpp_return_type);
                    if (!bindable_return_type.return_usage)
                        throw std::runtime_error("Unable to bind this function because this type can't be bound as a return type.");

                    // Declare or include the type dependencies of the return type.
                    for (const auto &dep : bindable_return_type.return_usage->type_dependencies)
                    {
                        auto iter = parsed_type_info.find(dep.first);
                        if (iter == parsed_type_info.end())
                            throw std::runtime_error("Using this type as a return type requires `" + dep.first + "` to be declared, but I don't know how to forward-declare it or what header to include to get its declaration.");

                        if (iter->second.declared_in_file != &file)
                        {
                            file.header.forward_declarations_and_inclusions[dep.first].need_header |= dep.second.need_header;
                        }
                    }

                    // Custom comment?
                    if (!bindable_return_type.return_usage->append_to_comment.empty())
                    {
                        comment += bindable_return_type.return_usage->append_to_comment;
                        comment += '\n';
                    }

                    new_decl.type.AppendType(bindable_return_type.return_usage->c_type);
                    body = bindable_return_type.return_usage->MakeReturnStatement(body);
                }
                catch (...)
                {
                    std::throw_with_nested(std::runtime_error("While processing the return type:"));
                }


                std::string new_decl_str = ToCode(new_decl, cppdecl::ToCodeFlags::canonical_c_style);

                file.header.contents += '\n';
                file.header.contents += comment;
                file.header.contents += new_decl_str;
                file.header.contents += ";\n";

                file.source.contents += '\n';
                file.source.contents += new_decl_str;
                file.source.contents += "\n{\n    ";

                for (const NamespaceEntity *ns : params.namespace_stack)
                {
                    if (!ns->name)
                        continue; // An anonymous namespace.
                    file.source.contents += "using namespace ";
                    file.source.contents += *ns->name;
                    file.source.contents += ";\n    ";
                }

                file.source.contents += body;
                file.source.contents += "\n}\n";
            }


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
            struct VisitorRegisterKnownTypes : Visitor
            {
                CBindingGenerator &self;
                VisitorRegisterKnownTypes(CBindingGenerator &self) : self(self) {}

                void Visit(const ClassEntity &cl) override
                {
                    cppdecl::Type parsed_type = ParseTypeOrThrow(cl.full_type);

                    auto [iter, is_new] = self.parsed_type_info.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
                    if (!is_new)
                        throw std::logic_error("Internal error: Duplicate type in input: " + cl.full_type);

                    ParsedTypeInfo &info = iter->second;
                    info.declared_in_file = &self.GetOutputFile(cl.declared_in_file);

                    info.c_type = parsed_type;
                    ReplaceAllNamesInTypeWithCIdentifiers(info.c_type);
                    info.c_type_str = ToCode(info.c_type, cppdecl::ToCodeFlags::canonical_c_style);
                    info.forward_declaration = "typedef struct " + info.c_type_str + " " + info.c_type_str + ";";

                    ParsedTypeInfo::ClassDesc &class_info = info.input_type.emplace<ParsedTypeInfo::ClassDesc>();
                    class_info.parsed = &cl;

                    // Check what constructors we have.
                    for (const auto &member_var : cl.members)
                    {
                        std::visit(Overload{
                            [&](const ClassField &) {},
                            [&](const ClassCtor &ctor)
                            {
                                class_info.is_any_constructible = true;
                                if (ctor.kind == CopyMoveKind::copy)
                                    class_info.is_copy_constructible = true;
                                else if (ctor.kind == CopyMoveKind::move)
                                    class_info.is_move_constructible = true;
                                // Do all parameters have default arguments? Having zero parameters satisfies this too.
                                else if (std::all_of(ctor.params.begin(), ctor.params.end(), [](const FuncParam &param){return bool(param.default_argument);}))
                                    class_info.is_default_constructible = true;
                            },
                            [&](const ClassMethod &) {},
                            [&](const ClassConvOp &) {},
                            [&](const ClassDtor &)
                            {
                                class_info.is_destructible = true;
                            },
                        }, member_var);
                    }

                    // If not destructible, assume we're not constructible either.
                    if (!class_info.is_destructible)
                    {
                        class_info.is_default_constructible = false;
                        class_info.is_copy_constructible = false;
                        class_info.is_move_constructible = false;
                        class_info.is_any_constructible = false;
                    }


                    if (class_info.IsDefaultCopyOrMoveConstructible())
                        class_info.predefined_ctor_enum_name = info.c_type_str + "_PassBy";

                    if (class_info.is_destructible)
                        class_info.cleanup_func_name = info.c_type_str + "_Destroy";
                }

                // void Visit(const FuncEntity &func) override
                // {

                // }

                void Visit(const EnumEntity &en) override
                {
                    cppdecl::Type parsed_type = ParseTypeOrThrow(en.full_type);

                    auto [iter, is_new] = self.parsed_type_info.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
                    if (!is_new)
                        throw std::logic_error("Internal error: Duplicate type in input: " + en.full_type);

                    ParsedTypeInfo &info = iter->second;

                    info.declared_in_file = &self.GetOutputFile(en.declared_in_file);
                    info.c_type = parsed_type;
                    ReplaceAllNamesInTypeWithCIdentifiers(info.c_type);
                    info.c_type_str = ToCode(info.c_type, cppdecl::ToCodeFlags::canonical_c_style);

                    ParsedTypeInfo::EnumDesc &enum_info = info.input_type.emplace<ParsedTypeInfo::EnumDesc>();
                    enum_info.parsed = &en;
                }

                // void Visit(const TypedefEntity &td) override
                // {

                // }
            };

            // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
            struct VisitorRegisterOverloadedNames : Visitor
            {
                CBindingGenerator &self;
                VisitorRegisterOverloadedNames(CBindingGenerator &self) : self(self) {}

                void Visit(const ClassEntity &cl) override
                {
                    const std::string c_type_str = self.parsed_type_info.at(ToCode(ParseTypeOrThrow(cl.full_type), cppdecl::ToCodeFlags::canonical_c_style)).c_type_str;

                    auto AddFunc = [&](const BasicFunc &func, std::string name, std::string fallback_name = "")
                    {
                        auto [iter, is_new] = self.overloaded_names.try_emplace(&func);
                        if (!is_new)
                            throw std::logic_error("Internal error: Duplicate overloaded function pointer.");

                        OverloadedName &ovl = iter->second;
                        ovl.name = std::move(name);
                        ovl.fallback_name = std::move(fallback_name);
                        ovl.AddParams(self, func.params);
                    };

                    for (const ClassMemberVariant &var : cl.members)
                    {
                        std::visit(Overload{
                            [&](const ClassField &elem)
                            {
                                // Nothing to do.
                                (void)elem;
                            },
                            [&](const ClassCtor &elem)
                            {
                                std::string fallback_name;
                                if (elem.template_args)
                                    fallback_name = c_type_str + '_' + StringToCIdentifier(*elem.template_args);
                                AddFunc(elem, c_type_str, std::move(fallback_name));
                            },
                            [&](const ClassMethod &elem)
                            {
                                std::string fallback_name;
                                if (elem.HasTemplateArguments())
                                    fallback_name = c_type_str + '_' + elem.simple_name + '_' + StringToCIdentifier(elem.TemplateArguments());
                                AddFunc(elem, elem.simple_name, std::move(fallback_name));
                            },
                            [&](const ClassConvOp &elem)
                            {
                                // Doesn't need registration, we assume the target type will be unique enough.
                                (void)elem;
                            },
                            [&](const ClassDtor &elem)
                            {
                                // Nope. And this doesn't inherit from `BasicFunc` anyway.
                                (void)elem;
                            },
                        }, var);
                    }
                }

                void Visit(const FuncEntity &func) override
                {
                    auto [iter, is_new] = self.overloaded_names.try_emplace(&func);
                    if (!is_new)
                        throw std::logic_error("Internal error: duplicate overloaded function pointer.");

                    OverloadedName &ovl = iter->second;
                    ovl.name = StringToCIdentifier(func.qual_name);
                    ovl.fallback_name = StringToCIdentifier(func.full_qual_name);
                    ovl.AddParams(self, func.params);
                }
            };

            void ResolveOverloadAmbiguities()
            {
                bool already_tried_fallback_names = false;
                bool already_tried_num_params_suffix = false;

                while (true)
                {
                    // All names are added here.
                    std::unordered_map<std::string, decltype(overloaded_names)::value_type *> all_names;
                    // Only the ambiguous ones go here (if we find a duplicate when trying to insert into `all_names`).
                    // The vectors will always have size 2+.
                    std::unordered_map<std::string, std::vector<decltype(overloaded_names)::value_type *>> ambig_names;

                    // Collect all names that need resolving.
                    for (auto &elem : overloaded_names)
                    {
                        auto [iter, is_new] = all_names.try_emplace(elem.second.name, &elem);
                        if (!is_new)
                        {
                            auto [iter2, is_new2] = ambig_names.try_emplace(elem.second.name);

                            // If this is a new element in `ambig_names`, transfer the first pointer from `all_names`.
                            if (is_new2)
                                iter2->second.push_back(iter->second);

                            iter2->second.push_back(&elem);
                        }
                    }

                    if (ambig_names.empty())
                        break; // No ambiguities, nothing else to do.


                    // First, try to use the fallback names.
                    if (!already_tried_fallback_names)
                    {
                        already_tried_fallback_names = true;
                        bool found_any_fallback = false;

                        for (const auto &elem : ambig_names)
                        {
                            { // First, see if this step makes sense for this function group.
                                std::string_view first_fallback_name = elem.second.front()->second.fallback_name;
                                bool have_different_fallbacks = false;
                                for (const auto &subelem : elem.second | std::views::drop(1))
                                {
                                    if (subelem->second.fallback_name != first_fallback_name)
                                    {
                                        have_different_fallbacks = true;
                                        break;
                                    }
                                }

                                // Skip this name group if all fallbacks are the same.
                                // Note that we're intentionally considering the lack of fallbacks to be different to any other fallbacks here
                                //   (by not doing any special handling for empty `fallback_name`s above).
                                if (!have_different_fallbacks)
                                    continue;
                            }

                            for (const auto &subelem : elem.second)
                            {
                                if (!subelem->second.fallback_name.empty())
                                {
                                    subelem->second.name = std::move(subelem->second.fallback_name);
                                    subelem->second.fallback_name = "";
                                    found_any_fallback = true;
                                }
                            }
                        }

                        if (found_any_fallback)
                            continue; // Need another iteration.
                    }


                    // Now try appending the number of parameters.
                    if (!already_tried_num_params_suffix)
                    {
                        already_tried_num_params_suffix = true;

                        for (const auto &elem : ambig_names)
                        {
                            { // Check if the sizes are different.
                                std::size_t first_size = elem.second.front()->second.params.size();
                                bool have_different_sizes = false;
                                for (const auto &subelem : elem.second | std::views::drop(1))
                                {
                                    if (subelem->second.params.size() != first_size)
                                    {
                                        have_different_sizes = true;
                                        break;
                                    }
                                }

                                // If all parameter counts are the same, appending them is useless, so we skip this name group.
                                if (!have_different_sizes)
                                    continue;
                            }

                            for (const auto &subelem : elem.second)
                            {
                                subelem->second.name += '_';
                                subelem->second.name += std::to_string(subelem->second.params.size());
                            }
                        }

                        // Need another iteration.
                        continue;
                    }


                    // Now try appending parameter TYPES.
                    bool any_progress = false;
                    for (const auto &elem : ambig_names)
                    {
                        auto ParamTypeToString = [&](const cppdecl::Type &type)
                        {
                            return cppdecl::ToString(type, cppdecl::ToStringFlags::identifier);
                        };

                        { // Check if it makes sense for this name group.
                            std::string first_type_str;
                            const auto &first_elem = *elem.second.front();
                            if (first_elem.second.num_params_consumed < first_elem.second.params.size())
                                first_type_str = ParamTypeToString(first_elem.second.params[first_elem.second.num_params_consumed].cpp_type);

                            bool have_different_types = false;
                            for (const auto &subelem : elem.second | std::views::drop(1))
                            {
                                bool subelem_has_more_params = subelem->second.num_params_consumed < subelem->second.params.size();
                                if (subelem_has_more_params == first_type_str.empty())
                                {
                                    // One string is empty (because no more parameters to consume) and another isn't. This is good enough.
                                    have_different_types = true;
                                    break;
                                }

                                if (
                                    // At this point `first_type_str.empty()` implies `!first_type_str.empty()`.
                                    subelem_has_more_params &&
                                    // Now make sure the strings are different.
                                    ParamTypeToString(subelem->second.params[subelem->second.num_params_consumed].cpp_type) != first_type_str
                                )
                                {
                                    // Both strings are non-empty and different.
                                    have_different_types = true;
                                    break;
                                }
                            }

                            if (!have_different_types)
                                continue; // Nothing to do here.
                        }

                        for (const auto &subelem : elem.second)
                        {
                            if (subelem->second.num_params_consumed < subelem->second.params.size())
                            {
                                subelem->second.name += '_';
                                subelem->second.name += ParamTypeToString(subelem->second.params[subelem->second.num_params_consumed++].cpp_type);
                                any_progress = true;
                            }
                        }
                    }

                    // Throw if we still have ambiguous names but aren't making any progress.
                    if (!any_progress)
                        throw std::runtime_error("Can't come up with unique names for some of the overloaded functions. Currently stuck at: `" + ambig_names.begin()->second.front()->second.name + "`.");
                }
            }

            // This actually emits the code for the parsed entities.
            struct VisitorEmit : Visitor
            {
                CBindingGenerator &self;
                VisitorEmit(CBindingGenerator &self) : self(self) {}

                void Visit(const ClassEntity &cl) override
                {
                    OutputFile &file = self.GetOutputFile(cl.declared_in_file);

                    // Include the C++ header where this class is declared.
                    file.source.custom_headers.insert(self.ParsedFilenameToRelativeNameForInclusion(cl.declared_in_file));

                    const std::string type_str = ToCode(ParseTypeOrThrow(cl.full_type), cppdecl::ToCodeFlags::canonical_c_style);

                    const ParsedTypeInfo &type_info = self.parsed_type_info.at(type_str);
                    const ParsedTypeInfo::ClassDesc &class_info = std::get<ParsedTypeInfo::ClassDesc>(type_info.input_type);

                    // Forward-declaring in the middle of the file, not in the forward-declarations section.
                    // Also because we're inserting a comment, and wouldn't look good in the dense forward declarations list.

                    // Forward-declare.
                    file.header.contents += '\n';
                    if (cl.comment)
                    {
                        file.header.contents += cl.comment->text_with_slashes;
                        file.header.contents += '\n';
                    }
                    file.header.contents += type_info.forward_declaration.value();
                    file.header.contents += '\n';

                    // Constructor selector enum?
                    if (class_info.IsDefaultCopyOrMoveConstructible())
                    {
                        file.header.contents += "\nenum ";
                        file.header.contents += class_info.predefined_ctor_enum_name;
                        file.header.contents += "\n{\n";
                        if (class_info.is_default_constructible)
                        {
                            file.header.contents += "    ";
                            file.header.contents += class_info.predefined_ctor_enum_name;
                            file.header.contents += "_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.\n";
                        }
                        if (class_info.is_copy_constructible)
                        {
                            file.header.contents += "    ";
                            file.header.contents += class_info.predefined_ctor_enum_name;
                            file.header.contents += "_Copy, // Copy the object into the function.\n";
                        }
                        if (class_info.is_move_constructible)
                        {
                            file.header.contents += "    ";
                            file.header.contents += class_info.predefined_ctor_enum_name;
                            file.header.contents += "_Move, // Move the object into the function. You must still manually destroy your copy.\n";
                        }

                        file.header.contents += "    ";
                        file.header.contents += class_info.predefined_ctor_enum_name;
                        file.header.contents += "_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.\n";

                        file.header.contents += "};\n";
                    }

                    for (const ClassMemberVariant &var : cl.members)
                    {
                        std::visit(Overload{
                            [&](const ClassField &elem)
                            {
                                (void)elem;
                            },
                            [&](const ClassCtor &elem)
                            {
                                EmitFuncParams params;
                                params.SetFromParsedClassCtor(self, cl, elem, GetNamespaceStack());
                                self.EmitFunction(file, params);
                            },
                            [&](const ClassMethod &elem)
                            {
                                (void)elem;
                            },
                            [&](const ClassConvOp &elem)
                            {
                                (void)elem;
                            },
                            [&](const ClassDtor &elem)
                            {
                                (void)elem;
                            },
                        }, var);
                    }
                }

                void Visit(const FuncEntity &func) override
                {
                    try
                    {
                        OutputFile &file = self.GetOutputFile(func.declared_in_file);

                        // Include the C++ header where this function is declared.
                        file.source.custom_headers.insert(self.ParsedFilenameToRelativeNameForInclusion(func.declared_in_file));

                        EmitFuncParams params;
                        params.SetFromParsedFunc(self, func, GetNamespaceStack());
                        self.EmitFunction(self.GetOutputFile(func.declared_in_file), params);
                    }
                    catch (...)
                    {
                        std::throw_with_nested(std::runtime_error("While binding function: " + func.full_qual_name));
                    }
                }

                void Visit(const EnumEntity &en) override
                {
                    OutputFile &file = self.GetOutputFile(en.declared_in_file);

                    const std::string parsed_type_str = ToCode(ParseTypeOrThrow(en.full_type), cppdecl::ToCodeFlags::canonical_c_style);

                    const auto &c_type_str = self.parsed_type_info.at(parsed_type_str).c_type_str;

                    file.header.contents += '\n';

                    if (en.comment)
                    {
                        file.header.contents += en.comment->text_with_slashes;
                        file.header.contents += '\n';
                    }

                    file.header.contents += "enum ";
                    file.header.contents += c_type_str;
                    file.header.contents += "\n{\n";

                    for (const EnumElem &elem : en.elems)
                    {
                        if (elem.comment)
                        {
                            file.header.contents += "    ";
                            file.header.contents += IndentString(elem.comment->text_with_slashes, 1);
                            file.header.contents += '\n';
                        }

                        file.header.contents += "    ";
                        file.header.contents += c_type_str;
                        file.header.contents += '_';
                        file.header.contents += elem.name;
                        file.header.contents += " = ";
                        file.header.contents += en.is_signed ? std::to_string(std::int64_t(elem.unsigned_value)) : std::to_string(elem.unsigned_value);
                        file.header.contents += ",\n";
                    }

                    file.header.contents += "};\n";
                }

                // void Visit(const TypedefEntity &td) override
                // {

                // }
            };

            void Generate()
            {
                { // Register known types.
                    VisitorRegisterKnownTypes v(*this);
                    v.Process(data.entities);
                }

                { // Collect the names for overloading.
                    VisitorRegisterOverloadedNames v(*this);
                    v.Process(data.entities);
                }

                // Resolve ambiguous function names.
                ResolveOverloadAmbiguities();

                { // Emit.
                    VisitorEmit v(*this);
                    v.Process(data.entities);
                }
            }


            void DumpFileToOstream(const OutputFile::SpecificFileContents &file, std::ostream &out)
            {
                if (out)
                    out << file.preamble << '\n';

                // Should we include a header to declare this type, as opposed to forward-declaring it?
                auto UseHeader = [this](const std::pair<const std::string, OutputFile::SpecificFileContents::ForwardDeclarationOrInclusion> &target)
                {
                    return target.second.need_header || !parsed_type_info.at(target.first).forward_declaration;
                };

                { // Generate and write the list of headers.
                    std::set<std::string> headers = file.custom_headers;
                    for (const auto &elem : file.forward_declarations_and_inclusions)
                    {
                        if (UseHeader(elem))
                        {
                            const auto &parsed_type = parsed_type_info.at(elem.first);

                            if (!parsed_type.declared_in_file) // Normally this can't be null.
                            {
                                if (elem.second.need_header)
                                    throw std::runtime_error("Need to include a header for type `" + elem.first + "`, but don't what header to include.");
                                else
                                    throw std::runtime_error("Need to include a header or forward-declare type `" + elem.first + "`, but don't know how.");
                            }

                            headers.insert(parsed_type.declared_in_file->header_path_for_inclusion);
                        }
                    }

                    for (const auto &header : headers)
                    {
                        if (out)
                            out << "#include <" << header << ">\n";
                    }
                    if (!headers.empty() && out)
                        out << '\n';
                }

                for (const auto &elem : file.stdlib_headers)
                    out << "#include <" << elem << ">\n";
                if (out && !file.stdlib_headers.empty())
                    out << '\n';

                if (out && !file.after_includes.empty())
                    out << file.after_includes << '\n';

                { // Generate and write the list of forward declarations.
                    std::set<std::string> fwd_decls = file.custom_forward_declarations;
                    for (const auto &elem : file.forward_declarations_and_inclusions)
                    {
                        if (!UseHeader(elem))
                        {
                            const auto &fwd_decl = parsed_type_info.at(elem.first).forward_declaration;

                            if (!fwd_decl)
                                throw std::runtime_error("Need to forward-declare type `" + elem.first + "`, but don't know how.");

                            fwd_decls.insert(*fwd_decl);
                        }
                    }

                    for (const auto &header : fwd_decls)
                    {
                        if (out)
                            out << header << '\n';
                    }
                    if (!fwd_decls.empty() && out)
                        out << '\n';
                }

                if (out)
                    out << file.contents << '\n';
                if (out)
                    out << file.footer;
            }
        };
    }
}

int main(int raw_argc, char **raw_argv)
{
    mrbind::SetErrorHandlers();

    mrbind::CommandLineArgsAsUtf8 args(raw_argc, raw_argv);

    std::string input_filename;
    bool clean_output_dirs = false;

    bool verbose = false;

    mrbind::CBindingGenerator generator;

    { // Parse arguments.
        bool seen_input_filename = false;
        bool seen_output_header_dir = false;
        bool seen_output_source_dir = false;
        bool seen_clean_output_dirs = false;
        bool seen_verbose = false;

        for (int i = 1; i < args.argc; i++)
        {
            std::string_view view = args.argv[i];

            if (view == "--help")
            {
                std::cout <<
                    "Usage:\n"
                    "    --input               <filename.json>  - Input JSON file, as produced by `mrbind --format=json`.\n"
                    "    --output-header-dir   <dir>            - Output directory for headers. Must be empty or not exist, unless you pass `--clean-output-dirs` too. It's always an error if it exists and is not a directory.\n"
                    "    --output-source-dir   <dir>            - Output directory for sources. Same rules are for `--output-header-dir`.\n"
                    "    --map-path            <from> <to>      - How to transform parsed filenames to their respective generated filenames. Can be repeated. `<from>` is a directory or file name, it gets canonicalized automatically. `<to>` is a suffix relative to the output directories. Every filename in the parsed data must match some prefix. Longer prefixes get priority.\n"
                    "    --clean-output-dirs                    - Destroy the contents of the output directory before writing to it. Without this flag, it's an error for it to not be empty.\n"
                    "    --strip-filename-suffix  <ext>         - If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are added automatically.\n"
                    "    --assume-include-dir  <dir>            - When including the parsed files, assume that this directory will be passed to the compiler as `-I`, so we can spell filenames relative to it. Can be repeated. More deeply nested directories get priority. Probably shouldn't be set to the exact same directory as passed to `--map-path`, but rather to it's parent, or you're risking name conflicts between your C++ and generated C headers, if you've been using the `.h` extension for your C++ headers too.\n"
                    "    --verbose                              - Write some logs.\n"
                    "\n"
                    "A minimal usage might look like this:\n"
                    "    mrbind_gen_c --input test/build/parsed.json --output-header-dir test/build/include --clean-output-dirs --output-source-dir test/build/source --map-path test/input . --assume-include-dir test\n"
                    "With `--clean-output-dirs` being optional.\n"
                    ;
                return 0;
            }

            auto ConsumeFlagWithNoArgs = [&](std::string_view name, bool &out, bool *dupe_check) -> bool
            {
                if (view == name)
                {
                    if (dupe_check)
                    {
                        if (*dupe_check)
                            throw std::runtime_error("More than one `" + std::string(name) + "` not allowed.");
                        *dupe_check = true;
                    }

                    out = true;
                    return true;
                }

                return false;
            };
            auto ConsumeFlagWithStringArg = [&](std::string_view name, std::string &out, bool *dupe_check) -> bool
            {
                if (view == name)
                {
                    if (dupe_check)
                    {
                        if (*dupe_check)
                            throw std::runtime_error("More than one `" + std::string(name) + "` not allowed.");
                        *dupe_check = true;
                    }

                    if (i + 1 >= args.argc)
                        throw std::runtime_error("Expected an argument after `" + std::string(name) + "`.");

                    out = args.argv[++i];
                    return true;
                }

                return false;
            };
            auto ConsumeFlagWithTwoStringArgs = [&](std::string_view name, std::string &out1, std::string &out2, bool *dupe_check) -> bool
            {
                if (view == name)
                {
                    if (dupe_check)
                    {
                        if (*dupe_check)
                            throw std::runtime_error("More than one `" + std::string(name) + "` not allowed.");
                        *dupe_check = true;
                    }

                    if (i + 2 >= args.argc)
                        throw std::runtime_error("Expected two arguments after `" + std::string(name) + "`.");

                    out1 = args.argv[++i];
                    out2 = args.argv[++i];
                    return true;
                }

                return false;
            };

            if (ConsumeFlagWithStringArg("--input", input_filename, &seen_input_filename))
                continue;
            if (ConsumeFlagWithStringArg("--output-header-dir", generator.output_header_dir, &seen_output_header_dir))
                continue;
            if (ConsumeFlagWithStringArg("--output-source-dir", generator.output_source_dir, &seen_output_source_dir))
                continue;
            if (ConsumeFlagWithNoArgs("--clean-output-dirs", clean_output_dirs, &seen_clean_output_dirs))
                continue;
            { // --map-path
                std::string from, to;
                if (ConsumeFlagWithTwoStringArgs("--map-path", from, to, nullptr))
                {
                    from = mrbind::PathToString(std::filesystem::weakly_canonical(mrbind::MakePath(from)));

                    if (!mrbind::MakePath(to).is_relative())
                        throw std::runtime_error("The second argument of `--map-path` must be a relative path.");

                    // Don't check for duplicates, who cares.
                    // If you decide to add the check, keep in mind that different input paths can canonicalize to the same string.
                    generator.path_mappings.try_emplace(from, to);
                    continue;
                }
            }
            { // --strip-filename-suffix
                std::string ext;
                if (ConsumeFlagWithStringArg("--strip-filename-suffix", ext, nullptr))
                {
                    generator.known_input_exts_to_strip.insert(std::move(ext));
                    continue;
                }
            }
            { // --assume-include-dir
                std::string tmp;
                if (ConsumeFlagWithStringArg("--assume-include-dir", tmp, nullptr))
                {
                    generator.assumed_include_directories.insert(std::filesystem::weakly_canonical(mrbind::MakePath(tmp)));
                    continue;
                }
            }

            if (ConsumeFlagWithNoArgs("--verbose", verbose, &seen_verbose))
                continue;

            throw std::runtime_error("Unknown argument: `" + std::string(view) + "`. Consult `--help` for usage.");
        }

        if (!seen_input_filename)
            throw std::runtime_error("Missing `--input`, consult `--help` for usage.");
        if (!seen_output_header_dir)
            throw std::runtime_error("Missing `--output-header-dir`, consult `--help` for usage.");
        if (!seen_output_source_dir)
            throw std::runtime_error("Missing `--output-source-dir`, consult `--help` for usage.");
    }

    generator.output_header_dir_path = mrbind::MakePath(generator.output_header_dir);
    generator.output_source_dir_path = mrbind::MakePath(generator.output_source_dir);

    // Parse the input file.
    generator.data = mrbind::LoadDataFromFile(input_filename.c_str());

    { // Prepare the output directories.
        for (const auto &path : {&generator.output_header_dir_path, &generator.output_source_dir_path})
        {
            auto stat = std::filesystem::status(*path);

            // Complain if the output path already exists but isn't a directory.
            if (stat.type() != std::filesystem::file_type::not_found && stat.type() != std::filesystem::file_type::directory)
                throw std::runtime_error("Output path `" + mrbind::PathToString(*path) + "` already exists but is not a directory.");

            if (stat.type() == std::filesystem::file_type::not_found)
            {
                // Create the missing output directory.
                std::filesystem::create_directories(*path);
            }
            else
            {
                // Destroy everything in the output directory or complain if `--clean-output-dirs` isn't specified.
                for (const std::filesystem::directory_entry &e : std::filesystem::directory_iterator(*path))
                {
                    if (!clean_output_dirs)
                        throw std::runtime_error("Output directory `" + mrbind::PathToString(*path) + "` is not empty, and `--clean-output-dirs` wasn't specfied.");

                    std::filesystem::remove_all(e);
                }
            }
        }
    }

    // Generate all sources, in memory for now.
    generator.Generate();

    // Create subdirectories in the output directory, if needed.
    for (const auto &elem : generator.directories_to_create)
        std::filesystem::create_directories(elem);

    // Write the generated files.
    for (const auto &elem : generator.outputs)
    {
        if (elem.second.header.contents.empty())
            continue; // This looks empty, skip. The source file should be empty at this point too, presumably.

        { // Write header.
            if (verbose)
                std::cerr << "mrbind_gen_c: Writing header: " << elem.second.header_path_full << '\n';

            std::ofstream output(mrbind::MakePath(elem.second.header_path_full));
            if (output)
                generator.DumpFileToOstream(elem.second.header, output);
            if (!output)
                throw std::runtime_error("Failed to write to the output file: `" + elem.second.header_path_full + "`.");
        }

        if (elem.second.source.contents.empty())
            continue; // Looks header-only. Write the header but not the source file.

        { // Write source.
            if (verbose)
                std::cerr << "mrbind_gen_c: Writing source: " << elem.second.source_path_full << '\n';

            std::ofstream output(mrbind::MakePath(elem.second.source_path_full));
            if (output)
                generator.DumpFileToOstream(elem.second.source, output);
            if (!output)
                throw std::runtime_error("Failed to write to the output file: `" + elem.second.source_path_full + "`.");
        }
    }
}

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
#include <set>
#include <unordered_set>

namespace mrbind
{
    namespace
    {
        struct CBindingGenerator
        {
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

                struct SpecificFileContents
                {
                    // The contents are pasted in this order:

                    // This is pasted before the rest of the contents. It's in a separate variable to simplify generation.
                    std::string preamble;
                    // This is pasted after the preamble. Use it to deduplicate includes. Using a plain `std::set` to get sorting for free.
                    std::set<std::string> include_set;
                    // `extern "C" {` goes here (the brace is closed in the footer). Maybe something else.
                    std::string after_includes;
                    // Those are pasted after the preamble set. Put your forward declarations set.
                    std::set<std::string> forward_declaration_set;
                    // This is the primary content.
                    std::string contents;
                    // This is pasted after everything else.
                    std::string footer;

                    void DumpToOstream(std::ostream &out) const
                    {
                        if (out)
                            out << preamble << '\n';

                        for (const auto &elem : include_set)
                        {
                            if (out)
                                out << elem << '\n';
                        }
                        if (out && !include_set.empty())
                            out << '\n';

                        if (out)
                            out << after_includes;

                        for (const auto &elem : forward_declaration_set)
                        {
                            if (out)
                                out << elem << '\n';
                        }
                        if (out && !forward_declaration_set.empty())
                            out << '\n';

                        if (out)
                            out << contents << '\n';
                        if (out)
                            out << footer;
                    }
                };

                SpecificFileContents header;
                SpecificFileContents source;

                void Initialize()
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
                auto prefix_it = path_mappings.find(source.canonical);
                if (prefix_it != path_mappings.end())
                {
                    file.relative_name = prefix_it->second; // Direct match.
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
                            file.relative_name = it->second;
                            file.relative_name += source.canonical.substr(source_copy_str.size());

                            // Strip some known extensions.
                            for (const auto &ext : known_input_exts_to_strip)
                            {
                                if (file.relative_name.ends_with(ext))
                                {
                                    file.relative_name.resize(file.relative_name.size() - ext.size());
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

                std::filesystem::path relative_output_path = MakePath(file.relative_name);

                // Compute the final paths.
                file.header_path_full = PathToString((output_header_dir_path / relative_output_path).lexically_normal()) + extension_header;
                file.source_path_full = PathToString((output_source_dir_path / relative_output_path).lexically_normal()) + extension_source;
                file.header_path_for_inclusion = PathToString(relative_output_path.lexically_normal()) + extension_header;

                { // Decide what directories to create.
                    std::filesystem::path cur_path = relative_output_path.lexically_normal();
                    while (true)
                    {
                        cur_path = cur_path.parent_path();
                        if (cur_path.empty() || cur_path == ".")
                            break;
                        directories_to_create.insert((output_header_dir_path / cur_path).lexically_normal());
                        directories_to_create.insert((output_source_dir_path / cur_path).lexically_normal());
                    }
                }

                file.Initialize();
                return file;
            }


            struct ParsedTypeInfo
            {
                OutputFile *declared_in_file = nullptr;

                using InputTypeVariant = std::variant<const EnumEntity *>;
                InputTypeVariant input_type;

                // Modifies the output file to provide a forward declaration of this type, or includes a header (our C header) that declares it.
                // This should never be null.
                std::function<void(OutputFile::SpecificFileContents &)> forward_declare_or_include_header;

                [[nodiscard]] bool IsEnum() const {return std::holds_alternative<const EnumEntity *>(input_type);}
            };
            // The keys are strings produced by `cppdecl`. Don't feed the input type names to this directly.
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
                struct ParamUsage
                {
                    struct CParam
                    {
                        cppdecl::Type c_type;

                        // This is only needed if `param_usage.size() > 1` (see below). This gets added to the name of the function parameter.
                        std::string name_suffix;
                    };

                    // Must not be empty. Usually this will have size 1.
                    // If this has more than one element, then the C function must have MORE THAN ONE parameter per this one C++ type.
                    std::vector<CParam> c_params;

                    // Defaults to an identity function if null.
                    // Given a C++ parameter name (which normally matches the C name, but see `CParam::name_suffix` above),
                    //   generates the argument for it.
                    std::function<std::string(std::string_view cpp_param_name)> c_params_to_cpp;

                    // Which parsed types do we need to include or forward-declare?
                    // By default you can fill this using `DefaultForEachParsedTypeNeededByType()`.
                    std::unordered_set<std::string> parsed_type_dependencies;

                    // Calls `c_params_to_cpp` if not null, otherwise returns the string unchanged.
                    [[nodiscard]] std::string CParamsToCpp(std::string_view cpp_param_name) const
                    {
                        if (c_params_to_cpp)
                            return c_params_to_cpp(cpp_param_name);
                        else
                            return std::string(cpp_param_name);
                    }
                };
                // If this is null, this type is unusable as a parameter.
                std::optional<ParamUsage> param_usage;

                struct ReturnUsage
                {
                    cppdecl::Type c_type;

                    // Generates a return statement to return a value of this type.
                    // If null, defaults to `"return "+expr+";"`.
                    // You can generate more than one statement here.
                    std::function<std::string(std::string_view expr)> make_return_statement;

                    // Which parsed types do we need to include or forward-declare?
                    // By default you can fill this using `DefaultForEachParsedTypeNeededByType()`.
                    std::unordered_set<std::string> parsed_type_dependencies;

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
                explicit BindableType(cppdecl::Type c_type)
                {
                    ParamUsage &param = param_usage.emplace();
                    param.c_params.push_back({.c_type = c_type, .name_suffix = ""});

                    ReturnUsage &ret = return_usage.emplace();
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
                            new_type.param_usage->parsed_type_dependencies.insert(str);
                        if (new_type.return_usage)
                            new_type.return_usage->parsed_type_dependencies.insert(str);
                    });
                };


                // Try various type archetypes. The strongest ones first.
                if (IsBindableAsIsDirect(type))
                {
                    auto type_c_style = type;
                    ReplaceAllNamesInTypeWithCIdentifiers(type_c_style);

                    BindableType new_type(type_c_style);

                    // For `void` omit `return` for clarity.
                    if (type.AsSingleWord() == "void")
                        new_type.return_usage->make_return_statement = [](std::string_view expr){return std::string(expr) + ";";};

                    // I THINK this isn't gonna add anything in this case, but just in case.
                    FillDefaultTypeDependencies(new_type);

                    return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                }
                if (IsBindableAsIsDirectCast(type))
                {
                    auto type_c_style = type;
                    ReplaceAllNamesInTypeWithCIdentifiers(type_c_style);

                    BindableType new_type(type_c_style);

                    // Add the casts!
                    new_type.return_usage->make_return_statement = [type_str](std::string_view expr){return "return (" + type_str + ")" + std::string(expr) + ";";};
                    new_type.param_usage->c_params_to_cpp = [type_str](std::string_view cpp_param_name){return "(" + type_str + ")" + std::string(cpp_param_name);};

                    // Definitely needed here.
                    FillDefaultTypeDependencies(new_type);

                    return bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                }
                // Don't test the "indirect" archetypes. We're only interested in stuff that can be passed by value!

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


            struct Visitor
            {
                virtual ~Visitor() = default;

                virtual void Visit(const ClassEntity &cl) {(void)cl;}
                virtual void Visit(const FuncEntity &func) {(void)func;}
                virtual void Visit(const EnumEntity &en) {(void)en;}
                virtual void Visit(const TypedefEntity &td) {(void)td;}

                void Process(const ClassEntity &cl) {Visit(cl); Process(static_cast<const mrbind::EntityContainer &>(cl));}
                void Process(const FuncEntity &func) {Visit(func);}
                void Process(const EnumEntity &en) {Visit(en);}
                void Process(const TypedefEntity &td) {Visit(td);}
                void Process(const NamespaceEntity &ns) {Process(static_cast<const mrbind::EntityContainer &>(ns));}
                void Process(const EntityContainer &c) {for (const Entity &e : c.nested) Process(e);}
                void Process(const Entity &e) {std::visit([&](const auto &elem){Process(elem);}, *e.variant);}
            };

            // This fills `parsed_type_info` with the knowledge about all parsed types.
            struct VisitorRegisterKnown : Visitor
            {
                CBindingGenerator &self;
                VisitorRegisterKnown(CBindingGenerator &self) : self(self) {}

                void Visit(const EnumEntity &en) override
                {
                    auto [iter, is_new] = self.parsed_type_info.try_emplace(ToCode(ParseTypeOrThrow(en.full_type), cppdecl::ToCodeFlags::canonical_c_style));
                    if (!is_new)
                        throw std::logic_error("Internal error: Expected this type to not exist in `parsed_type_info` at this point.");

                    ParsedTypeInfo &info = iter->second;

                    info.declared_in_file = &self.GetOutputFile(en.declared_in_file);
                    info.input_type = &en;

                    info.forward_declare_or_include_header = [header = info.declared_in_file->header_path_for_inclusion](OutputFile::SpecificFileContents &target)
                    {
                        target.include_set.insert("#include <" + header + ">");
                    };
                }
            };

            // This actually emits the code for the parsed entities.
            struct VisitorEmit : Visitor
            {
                CBindingGenerator &self;
                VisitorEmit(CBindingGenerator &self) : self(self) {}

                // void Visit(const ClassEntity &cl) override
                // {

                // }

                void Visit(const FuncEntity &func) override
                {
                    OutputFile &file = self.GetOutputFile(func.declared_in_file);


                    cppdecl::Function new_func;

                    std::string body = func.full_qual_name + "(";

                    // Assemble the parameter and argument lists.
                    std::size_t i = 0;
                    for (const auto &param : func.params)
                    {
                        const BindableType &bindable_param_type = self.FindBindableType(ParseTypeOrThrow(param.type.canonical));
                        if (!bindable_param_type.param_usage)
                            throw std::runtime_error("Unable to bind this function because this type can't be bound as a parameter.");

                        // Declare or include type dependencies of the parameter.
                        for (const auto &dep : bindable_param_type.param_usage->parsed_type_dependencies)
                        {
                            auto iter = self.parsed_type_info.find(dep);
                            if (iter == self.parsed_type_info.end())
                                throw std::runtime_error("Using this type as a parameter requires `" + dep + "` to be declared, but I don't know how to forward-declare it or what header to include to get its declaration.");

                            iter->second.forward_declare_or_include_header(file.header);
                        }

                        std::string param_name = param.name ? *param.name : "_" + std::to_string(i);

                        for (const auto &param_usage : bindable_param_type.param_usage->c_params)
                        {
                            auto &new_param = new_func.params.emplace_back();
                            new_param.type = param_usage.c_type;
                            new_param.name.parts.emplace_back(param_name + param_usage.name_suffix);
                        }

                        if (i > 0)
                            body += ", ";
                        body += bindable_param_type.param_usage->CParamsToCpp(param_name);

                        i++;
                    }
                    body += ')';

                    // Figure out the return type.
                    const BindableType &bindable_return_type = self.FindBindableType(ParseTypeOrThrow(func.return_type.canonical));
                    if (!bindable_return_type.return_usage)
                        throw std::runtime_error("Unable to bind this function because this type can't be bound as a return type.");

                    // Declare or include the type dependencies of the return type.
                    for (const auto &dep : bindable_return_type.return_usage->parsed_type_dependencies)
                    {
                        auto iter = self.parsed_type_info.find(dep);
                        if (iter == self.parsed_type_info.end())
                            throw std::runtime_error("Using this type as a return type requires `" + dep + "` to be declared, but I don't know how to forward-declare it or what header to include to get its declaration.");

                        iter->second.forward_declare_or_include_header(file.header);
                    }

                    cppdecl::Decl new_decl;
                    new_decl.name.parts.emplace_back(StringToCIdentifier(func.full_qual_name));

                    new_decl.type.modifiers.emplace_back(std::move(new_func));
                    new_decl.type.AppendType(bindable_return_type.return_usage->c_type);

                    body = bindable_return_type.return_usage->MakeReturnStatement(body);


                    std::string new_decl_str = ToCode(new_decl, cppdecl::ToCodeFlags::canonical_c_style);

                    file.source.include_set.insert("#include <" + self.ParsedFilenameToRelativeNameForInclusion(func.declared_in_file) + ">");

                    file.header.contents += '\n';
                    if (func.comment)
                    {
                        file.header.contents += func.comment->text_with_slashes;
                        file.header.contents += '\n';
                    }
                    file.header.contents += new_decl_str;
                    file.header.contents += ";\n";

                    file.source.contents += '\n';
                    file.source.contents += new_decl_str;
                    file.source.contents += "\n{\n    ";
                    file.source.contents += body;
                    file.source.contents += "\n}\n";
                }

                void Visit(const EnumEntity &en) override
                {
                    OutputFile &file = self.GetOutputFile(en.declared_in_file);

                    file.header.contents += '\n';

                    if (en.comment)
                    {
                        file.header.contents += en.comment->text_with_slashes;
                        file.header.contents += '\n';
                    }

                    file.header.contents += "enum ";
                    file.header.contents += StringToCIdentifier(en.full_type);
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
                    VisitorRegisterKnown v(*this);
                    v.Process(data.entities);
                }

                { // Emit.
                    VisitorEmit v(*this);
                    v.Process(data.entities);
                }
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
                    "    --assume-include-dir  <dir>            - When including the parsed files, assume that this directory will be passed to the compiler as `-I`, so we can spell filenames relative to it. Can be repeated. More deeply nested directories get priority.\n"
                    "    --verbose                              - Write some logs.\n"
                    "\n"
                    "A minimal usage might look like this:\n"
                    "    mrbind_gen_c --input test/build/parsed.json --output-header-dir test/build/include --clean-output-dirs --output-source-dir test/build/source --map-path test/input . --assume-include-dir test/input\n"
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
                elem.second.header.DumpToOstream(output);
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
                elem.second.source.DumpToOstream(output);
            if (!output)
                throw std::runtime_error("Failed to write to the output file: `" + elem.second.source_path_full + "`.");
        }
    }
}

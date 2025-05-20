#include "generator.h"

#include "common/filesystem.h"
#include "common/meta.h"
#include "common/parsed_data.h"
#include "generators/c/binding_helpers.h"
#include "generators/c/module.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/to_string.h>

#include <filesystem>
#include <functional>
#include <ranges>
#include <set>
#include <unordered_set>

namespace mrbind::CBindings
{
    Generator::Generator() {}

    Generator::~Generator() {}

    void Generator::OutputFile::InitRelativeName(Generator &self, std::string new_relative_name, bool is_public)
    {
        relative_name = std::move(new_relative_name);

        std::filesystem::path relative_output_path = MakePath(relative_name);

        const auto &header_dir = is_public ? self.output_header_dir_path : self.output_source_dir_path;

        header         .full_output_path = PathToString((header_dir                  / relative_output_path).lexically_normal()) + self.extension_header;
        source         .full_output_path = PathToString((self.output_source_dir_path / relative_output_path).lexically_normal()) + self.extension_source;
        internal_header.full_output_path = PathToString((self.output_source_dir_path / relative_output_path).lexically_normal()) + self.extension_internal_header;

        header         .path_for_inclusion = PathToString(relative_output_path.lexically_normal()) + self.extension_header;
        internal_header.path_for_inclusion = PathToString(relative_output_path.lexically_normal()) + self.extension_internal_header;

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

    void Generator::OutputFile::InitDefaultContents(InitFlags flags)
    {
        header.preamble += "#pragma once\n";
        source.preamble += "#include \"" + header.path_for_inclusion + "\"\n";

        if (!bool(flags & InitFlags::no_extern_c))
        {
            header.after_includes += "#ifdef __cplusplus\nextern \"C\" {\n#endif\n";
            header.footer += "#ifdef __cplusplus\n} // extern \"C\"\n#endif\n";
        }


        internal_header.preamble += "#pragma once\n";
        internal_header.preamble += "#include \"" + header.path_for_inclusion + "\"\n";
    }

    std::string Generator::ParsedFilenameToRelativeNameForInclusion(const DeclFileName &input)
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
    Generator::OutputFile &Generator::GetOutputFile(const DeclFileName &source)
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

    Generator::OutputFile &Generator::GetInternalDetailsFile()
    {
        auto [iter, is_new] = outputs.try_emplace("//mrbind_c_details");
        if (!is_new)
            return iter->second;

        OutputFile &file = iter->second;

        file.InitRelativeName(*this, "__mrbind_c_details", false);
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
        file.header.contents += "    #define MRBINDC_CLASSARG_END(param_, cpptype_) true ? throw std::runtime_error(\"Invalid `PassBy` enum value specified for function parameter `\" #param_ \".\") : ((cpptype_ (*)())0)() // We need the dumb fallback to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.\n";
        file.header.contents += "\n";
        file.header.contents += "    // Converts an rvalue to an lvalue.\n";
        file.header.contents += "    template <typename T> T &unmove(T &&value) {return static_cast<T &>(value);}";
        file.header.contents += "} // namespace mrbindc_details \n";
        return file;
    }

    Generator::OutputFile &Generator::GetPublicHelperFile(std::string_view name, bool *is_new, OutputFile::InitFlags init_flags)
    {
        auto [iter, iter_is_new] = outputs.try_emplace("//" + std::string(name));
        if (is_new)
            *is_new = iter_is_new;

        if (!iter_is_new)
            return iter->second;

        OutputFile &file = iter->second;

        file.InitRelativeName(*this, PathToString(helper_header_relative_dir / name), true);
        file.InitDefaultContents(init_flags);

        return file;
    }

    std::string Generator::GetExportMacroForFile(OutputFile &target_file, bool for_internal_header)
    {
        // This function could be changed later to depend on the `target_file` path, e.g. if we want multiple separate export files for multiple libraries in the output.
        // Then we could also use different macro names, and so on.

        bool file_is_new = false;
        OutputFile &file = GetPublicHelperFile("exports", &file_is_new, OutputFile::InitFlags::no_extern_c);

        OutputFile::SpecificFileContents &contents = for_internal_header ? target_file.internal_header : target_file.header;
        contents.custom_headers.insert(file.header.path_for_inclusion);

        std::string macro_name = MakePublicHelperName("API");

        if (file_is_new)
        {
            file.header.contents += "#ifndef " + macro_name + "\n";
            file.header.contents += "#  ifdef _WIN32\n";
            file.header.contents += "#    if " + MakePublicHelperName("BUILD") + "\n";
            file.header.contents += "#      define " + macro_name + " __declspec(dllexport)\n";
            file.header.contents += "#    else\n";
            file.header.contents += "#      define " + macro_name + " __declspec(dllimport)\n";
            file.header.contents += "#    endif\n";
            file.header.contents += "#  else\n";
            file.header.contents += "#    define " + macro_name + " __attribute__((__visibility__(\"default\")))\n";
            file.header.contents += "#  endif\n";
            file.header.contents += "#endif\n";
        }

        return macro_name;
    }

    bool Generator::TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name) const
    {
        return name.IsBuiltInTypeName();
    }

    Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name)
    {
        if (auto ret = FindTypeBindableWithSameAddressOpt(type_name))
            return *ret;
        else
            throw std::runtime_error("Don't know what to do with type `" + cppdecl::ToCode(type_name, cppdecl::ToCodeFlags::canonical_c_style) + "`: how to forward-declare it or what header to include.");
    }

    Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name)
    {
        std::string type_name_str = cppdecl::ToCode(type_name, cppdecl::ToCodeFlags::canonical_c_style);

        auto iter = types_bindable_with_same_address.find(type_name_str);
        if (iter != types_bindable_with_same_address.end())
            return &iter->second;

        // Register built-in types.
        if (TypeNameIsCBuiltIn(type_name))
            return &types_bindable_with_same_address.try_emplace(type_name_str).first->second;

        // Try find a regular bindable type, maybe it has the `binding_preserves_address` flag set.
        if (auto bindable_type = FindBindableTypeOpt(ParseTypeOrThrow(type_name_str)))
        {
            if (bindable_type->IsBindableWithSameAddress())
                return &types_bindable_with_same_address.try_emplace(type_name_str, bindable_type->bindable_with_same_address).first->second;
        }

        // Ask the modules.
        for (const auto &m : modules)
        {
            if (auto opt = m->GetTypeBindableWithSameAddress(*this, type_name, type_name_str))
                return &types_bindable_with_same_address.try_emplace(type_name_str, *opt).first->second;
        }

        return nullptr;
    }

    Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const std::string &type_name_str)
    {
        return FindTypeBindableWithSameAddress(ParseQualNameOrThrow(type_name_str));
    }

    Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const std::string &type_name_str)
    {
        return FindTypeBindableWithSameAddressOpt(ParseQualNameOrThrow(type_name_str));
    }

    void Generator::DefaultForEachTypeBindableWithSameAddressNeededByType(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name)> func)
    {
        type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](const cppdecl::QualifiedName &name)
            {
                if (!name.IsEmpty() && !TypeNameIsCBuiltIn(name))
                    func(name);
            }
        );
    }

    bool Generator::IsSimplyBindableIndirectReinterpret(const cppdecl::Type &type)
    {
        if (type.IsOnlyQualifiedName() && !FindTypeBindableWithSameAddressOpt(type.simple_type.name))
            return false; // Some weird-ass type that can't be reinterpreted into a C type.

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
                [&](const cppdecl::Array &)
                {
                    return true; // Ok. Hopefully the array size is hardcoded.
                },
                [&](const cppdecl::Function &elem)
                {
                    if (elem.noexcept_ || elem.cv_quals != cppdecl::CvQualifiers{} || elem.ref_qual != cppdecl::RefQualifier::none)
                        return false; // C++-style qualifiers not allowed.

                    // Trailing return type is fine, because we can just not use it by passing a flag to `ToCode`.

                    // Check all parameters.
                    return std::all_of(elem.params.begin(), elem.params.end(), [&](const auto &param){return IsSimplyBindableDirect(param.type);});
                },
            }, mod.var);

            if (!ok)
                return false;
        }

        return true;
    }

    bool Generator::IsSimplyBindableIndirect(const cppdecl::Type &type)
    {
        return IsSimplyBindableIndirectReinterpret(type) && TypeNameIsCBuiltIn(type.simple_type.name);
    }

    // Those can be passed by value with only a C-style cast.
    bool Generator::IsSimplyBindableDirectCast(const cppdecl::Type &type)
    {
        if (type.Is<cppdecl::Pointer>() && IsSimplyBindableIndirectReinterpret(type))
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
            if (TypeNameIsCBuiltIn(type.simple_type.name))
                return true;
        }

        return false; // Nope.
    }

    // Those can be passed by value with only a `static_cast`.
    bool Generator::IsSimplyBindableDirect(const cppdecl::Type &type)
    {
        bool ret = IsSimplyBindableDirectCast(type) && TypeNameIsCBuiltIn(type.simple_type.name);
        assert(!ret || IsSimplyBindableIndirect(type)); // This being true should automatically imply `IsSimplyBindableIndirect` in all cases.
        return ret;
    }

    // ]


    void Generator::ExtraHeaders::InsertToFile(OutputFile &file) const
    {
        file.header.stdlib_headers.insert(stdlib_in_header_file.begin(), stdlib_in_header_file.end());
        file.source.stdlib_headers.insert(stdlib_in_source_file.begin(), stdlib_in_source_file.end());

        std::unordered_set<std::string> header_custom;
        if (custom_in_header_file)
            header_custom = custom_in_header_file();
        file.header.custom_headers.insert(std::make_move_iterator(header_custom.begin()), std::make_move_iterator(header_custom.end()));

        std::unordered_set<std::string> source_custom;
        if (custom_in_source_file)
            source_custom = custom_in_source_file();
        file.source.custom_headers.insert(std::make_move_iterator(source_custom.begin()), std::make_move_iterator(source_custom.end()));
    }


    Generator::BindableType::BindableType(cppdecl::Type c_type)
    {
        ParamUsage &param = param_usage.emplace();
        param.c_params.push_back({.c_type = c_type, .name_suffix = ""});

        ReturnUsage &ret = return_usage.emplace();

        // For `void` omit `return` for clarity.
        if (c_type.AsSingleWord() == "void")
        {
            return_usage->make_return_statement = [](OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
            {
                (void)file;

                // Don't add the `;` if the expression is empty.
                // This doesn't happen during normal usage, but some custom functions that have all the code in `cpp_extra_statements`
                //   and no actual return statement do need this.
                if (expr.empty())
                    return "";

                return std::string(expr) + ";";
            };
        }

        ret.c_type = std::move(c_type); // Here we can move the type.
    }

    const Generator::BindableType &Generator::FindBindableType(const cppdecl::Type &type)
    {
        if (auto *ret = FindBindableTypeOpt(type))
            return *ret;
        else
            throw std::runtime_error("Don't know how to bind type `" + cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style) + "`.");
    }

    const Generator::BindableType *Generator::FindBindableTypeOpt(const cppdecl::Type &type)
    {
        const std::string type_str = ToCode(type, cppdecl::ToCodeFlags::canonical_c_style);

        { // Find existing type.
            // Here we don't use `.try_emplace()` because we might throw later, and in that case we don't want to insert anything.
            auto iter = bindable_cpp_types.find(type_str);
            if (iter != bindable_cpp_types.end())
                return &iter->second;
        }


        // Ask the modules first.
        // We need this to be able to override the default bindings in some cases, for the types otherwise handled by `MakeSimpleTypeBinding()`.
        for (const auto &m : modules)
        {
            if (auto opt = m->GetBindableType(*this, type, cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style)))
                return &bindable_cpp_types.try_emplace(type_str, *opt).first->second;
        }


        { // Invent a new binding.
            // This handles all the `IsSimplyBindable{Direct{,Cast},Indirect{,Reinterpret}}` types.
            if (auto opt = MakeSimpleTypeBinding(*this, type))
                return &bindable_cpp_types.try_emplace(type_str, *opt).first->second;

            // Maybe a class?
            if (type.modifiers.empty())
            {
                if (auto iter = parsed_type_info.find(type_str); iter != parsed_type_info.end())
                {
                    if (auto class_desc = std::get_if<ParsedTypeInfo::ClassDesc>(&iter->second.input_type))
                    {
                        BindableType new_type;

                        // Parameter passing strategy.
                        if (class_desc->is_trivially_copy_or_move_constructible)
                        {
                            // For trivialy-copy/move-constructible classes, just pass a pointer.

                            // Here we only fill the `_with_default_arg` version, because that handles both.
                            BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                            param_usage.same_addr_bindable_type_dependencies[type_str].need_header = true; // We need the constructor selection enum.

                            param_usage.c_params.emplace_back().c_type = iter->second.c_type;
                            param_usage.c_params.back().c_type.AddQualifiers(cppdecl::CvQualifiers::const_);
                            param_usage.c_params.back().c_type.AddModifier(cppdecl::Pointer{}); // This should be the only modifier at this point.

                            param_usage.c_params_to_cpp = [
                                type_str,
                                only_trivially_move_constructible = class_desc->is_trivially_move_constructible && !class_desc->is_trivially_copy_constructible
                            ](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                            {
                                std::string ret;

                                ret += cpp_param_name;
                                ret += " ? ";
                                ret += type_str;
                                ret += "(";
                                if (only_trivially_move_constructible)
                                {
                                    // A bit jank, and probably rarely useful, but why not.
                                    file.custom_forward_declarations.insert("utility");
                                    ret += "std::move(";
                                }
                                ret += "*(";
                                ret += type_str;
                                ret += " *)";
                                ret += cpp_param_name;
                                if (only_trivially_move_constructible)
                                    ret += ")";
                                ret += ")";
                                ret += " : ";

                                if (!default_arg.empty())
                                {
                                    ret += "(";
                                    ret += type_str;
                                    ret += ")(";
                                    ret += default_arg;
                                    ret += ")";
                                }
                                else
                                {
                                    file.stdlib_headers.insert("stdexcept");
                                    ret += "throw std::runtime_error(\"Parameter `";
                                    ret += cpp_param_name;
                                    ret += "` can not be null.\")";
                                }

                                return ret;
                            };

                            param_usage.append_to_comment = [pass_by_enum = class_desc->pass_by_enum_name](std::string_view cpp_param_name, bool has_default_arg)
                            {
                                (void)cpp_param_name;
                                std::string ret;
                                if (has_default_arg)
                                    // Two spaces because this goes after a message about the default argument.
                                    ret = "///   To use the default argument, pass a null pointer.";
                                else
                                    ret = "/// Parameter `" + std::string(cpp_param_name) + "` can not be null.";
                                return ret;
                            };
                        }
                        else if (class_desc->IsDefaultOrCopyOrMoveConstructible())
                        {
                            // With the pass-by enum.

                            // Here we only fill the `_with_default_arg` version, because that handles both.
                            BindableType::ParamUsage &param_usage = new_type.param_usage_with_default_arg.emplace();
                            param_usage.same_addr_bindable_type_dependencies[type_str].need_header = true; // We need the constructor selection enum.

                            param_usage.c_params.emplace_back().c_type.simple_type.name.parts.emplace_back(class_desc->pass_by_enum_name);
                            param_usage.c_params.back().name_suffix = "_pass_by";
                            param_usage.c_params.emplace_back().c_type = iter->second.c_type;
                            param_usage.c_params.back().c_type.AddModifier(cppdecl::Pointer{}); // This should be the only modifier at this point.

                            param_usage.c_params_to_cpp = [
                                this,
                                type_str,
                                pass_by_enum = class_desc->pass_by_enum_name,
                                is_default_constructible = class_desc->is_default_constructible,
                                is_copy_constructible = class_desc->is_copy_constructible,
                                is_move_constructible = class_desc->is_move_constructible
                            ](OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
                            {
                                std::string ret;

                                // Insert the defails file for the `PassBy` macros.
                                file.custom_headers.insert(GetInternalDetailsFile().header.path_for_inclusion);

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

                            param_usage.append_to_comment = [pass_by_enum = class_desc->pass_by_enum_name](std::string_view cpp_param_name, bool has_default_arg)
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
                        }

                        // Return strategy.

                        ClassBinder class_binder;
                        class_binder.cpp_type_name = type.simple_type.name;
                        class_binder.c_type_name = iter->second.c_type_str;
                        class_binder.c_func_name_destroy = class_desc->cleanup_func_name;

                        new_type.return_usage = class_binder.MakeReturnUsage();

                        return &bindable_cpp_types.try_emplace(type_str, new_type).first->second;
                    }
                }
            }
        }


        // Don't know how to bind this.
        return nullptr;
    }

    void Generator::FillDefaultTypeDependencies(const cppdecl::Type &source, BindableType &target)
    {
        DefaultForEachTypeBindableWithSameAddressNeededByType(source, [&](const cppdecl::QualifiedName &cpp_type_name)
        {
            // Could validate that the type is known here here, but for now I'd rather do it lazily on use.
            // Not sure which way is better. Doing it lazily sounds a tiny bit more flexible?

            std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

            if (target.param_usage)
                target.param_usage->same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);
            if (target.param_usage_with_default_arg)
                target.param_usage_with_default_arg->same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);
            if (target.return_usage)
                target.return_usage->same_addr_bindable_type_dependencies.try_emplace(cpp_type_str);
        });
    }

    const cppdecl::Type &Generator::ParseTypeOrThrow(const std::string &str) const
    {
        auto [iter, is_new] = cached_parsed_types.try_emplace(str);
        if (!is_new)
            return iter->second;

        std::string_view view = str;
        auto ret = cppdecl::ParseType(view);
        if (auto error = std::get_if<cppdecl::ParseError>(&ret))
            throw std::runtime_error("Unable to parse type `" + str + "`, error at offset " + std::to_string(view.data() - str.data()) + ": " + error->message);
        if (!view.empty())
            throw std::runtime_error("Unable to parse type `" + str + "`, junk starting at offset " + std::to_string(view.data() - str.data()) + ".");
        iter->second = std::move(std::get<cppdecl::Type>(ret));
        return iter->second;
    }

    const cppdecl::QualifiedName &Generator::ParseQualNameOrThrow(const std::string &str) const
    {
        auto [iter, is_new] = cached_parsed_qual_names.try_emplace(str);
        if (!is_new)
            return iter->second;

        std::string_view view = str;
        auto ret = cppdecl::ParseQualifiedName(view);
        if (auto error = std::get_if<cppdecl::ParseError>(&ret))
            throw std::runtime_error("Unable to parse qualified name `" + str + "`, error at offset " + std::to_string(view.data() - str.data()) + ": " + error->message);
        if (!view.empty())
            throw std::runtime_error("Unable to parse qualified name `" + str + "`, junk starting at offset " + std::to_string(view.data() - str.data()) + ".");
        iter->second = std::move(std::get<cppdecl::QualifiedName>(ret));
        return iter->second;
    }


    // Simplies a string to be a valid C identifier.
    std::string Generator::StringToCIdentifier(std::string_view str)
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
    void Generator::ReplaceAllNamesInTypeWithCNames(cppdecl::Type &type)
    {
        type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](cppdecl::QualifiedName &name)
            {
                const auto &info = FindTypeBindableWithSameAddress(name);
                name = cppdecl::QualifiedName::FromSingleWord(!info.c_type_name.empty() ? info.c_type_name : StringToCIdentifier(ToCode(name, cppdecl::ToCodeFlags::canonical_c_style)));
            }
        );
    }

    // Indents a string by the number of `levels` (each is currently 4 whitespaces).
    // Only inserts them after each `\n`. Not at the beginning.
    std::string Generator::IndentString(std::string_view str, int levels, bool indent_first_line)
    {
        std::string ret;
        if (indent_first_line)
        {
            for (int i = 0; i < levels; i++)
                ret += "    ";
        }

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


    bool Generator::EmitFuncParams::Param::IsPointerWithNullptrDefaultArgument() const
    {
        return
            default_arg && cpp_type.Is<cppdecl::Pointer>() &&
            (
                default_arg->original_spelling == "nullptr" ||
                default_arg->original_spelling == "NULL" ||
                default_arg->original_spelling == "0" ||
                default_arg->original_spelling == "{}" // I guess?
            );
    }

    void Generator::EmitFuncParams::AddParamsFromParsedFunc(const Generator &self, const std::vector<FuncParam> &new_params)
    {
        params.reserve(params.size() + new_params.size());
        for (const FuncParam &new_param : new_params)
        {
            Param &param = params.emplace_back();
            param.name = new_param.name ? *new_param.name : "";
            param.cpp_type = self.ParseTypeOrThrow(new_param.type.canonical);

            if (new_param.default_argument)
            {
                Param::DefaultArg &arg = param.default_arg.emplace();
                arg.cpp_expr = new_param.default_argument->as_cpp_expression;
                arg.original_spelling = new_param.default_argument->original_spelling;
            }
        }
    }

    void Generator::EmitFuncParams::AddThisParam(cppdecl::Type new_class, bool is_const)
    {
        Param &param = params.emplace_back();
        param.add_to_call = false;
        param.cpp_type = std::move(new_class);
        if (is_const)
            param.cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_);
        param.cpp_type.AddModifier(cppdecl::Pointer{});
        param.name = "_this";
    }

    void Generator::EmitFuncParams::AddThisParamFromParsedClass(const Generator &self, const ClassEntity &new_class, bool is_const)
    {
        Param &param = params.emplace_back();
        param.add_to_call = false;
        param.cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        if (is_const)
            param.cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_);
        param.cpp_type.AddModifier(cppdecl::Pointer{});
        param.name = "_this";
    }

    void Generator::EmitFuncParams::SetReturnTypeFromParsedFunc(const Generator &self, const BasicReturningFunc &new_func)
    {
        cpp_return_type = self.ParseTypeOrThrow(new_func.return_type.canonical);
    }

    void Generator::EmitFuncParams::SetFromParsedFunc(const Generator &self, const FuncEntity &new_func, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        AddParamsFromParsedFunc(self, new_func.params);

        c_name = self.overloaded_names.at(&new_func).name;

        SetReturnTypeFromParsedFunc(self, new_func);

        cpp_called_func = new_func.full_qual_name;

        if (new_func.comment)
        {
            c_comment = new_func.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from function `";
        c_comment += new_func.full_qual_name;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassCtor(const Generator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        AddParamsFromParsedFunc(self, new_ctor.params);

        // Fallback parameter name for implicitly generated copy/move assignments.
        if (new_ctor.kind != CopyMoveKind::none && params.at(0).name.empty())
            params.at(0).name = "_other";

        const cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        const std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        c_name = self.overloaded_names.at(&new_ctor).name;

        cpp_return_type = cpp_type;

        cpp_called_func = cpp_type_str;

        if (new_ctor.comment)
        {
            c_comment = new_ctor.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a constructor of class `";
        c_comment += cpp_type_str;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassDtor(const Generator &self, const ClassEntity &new_class, const ClassDtor &new_dtor, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);
        const ParsedTypeInfo &info = self.parsed_type_info.at(cpp_type_str);

        AddThisParamFromParsedClass(self, new_class, false);
        params.front().add_to_call = true; // Force add `this` to the call expression.

        c_name = std::get<ParsedTypeInfo::ClassDesc>(info.input_type).cleanup_func_name;

        cpp_called_func = "delete";
        cpp_called_func_parens = {};

        if (new_dtor.comment)
        {
            c_comment = new_dtor.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a destructor of class `" + cpp_type_str + "`. Destroys the heap-allocated instances.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassMethod(const Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        if (!new_method.is_static)
            AddThisParamFromParsedClass(self, new_class, new_method.is_const);
        AddParamsFromParsedFunc(self, new_method.params);

        // Fallback parameter name for implicitly generated assignment operators.
        if (new_method.assignment_kind != CopyMoveKind::none && params.at(1).name.empty())
            params.at(1).name = "_other";

        c_name = self.overloaded_names.at(&new_method).name;

        SetReturnTypeFromParsedFunc(self, new_method);

        if (!new_method.is_static)
        {
            if (new_method.ref_qualifier == RefQualifier::rvalue)
            {
                extra_headers.stdlib_in_source_file.insert("utility");
                cpp_called_func = "std::move";
            }
            cpp_called_func += "(*(";
            cpp_called_func += cpp_type_str;
            cpp_called_func += " *)_this).";
        }
        else
        {
            cpp_called_func = cpp_type_str;
            cpp_called_func += "::";
        }

        cpp_called_func += new_method.full_name;

        if (new_method.comment)
        {
            c_comment = new_method.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a method of class `";
        c_comment += cpp_type_str;
        c_comment += "` named `";
        c_comment += new_method.full_name;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassConvOp(const Generator &self, const ClassEntity &new_class, const ClassConvOp &new_conv_op, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        AddThisParamFromParsedClass(self, new_class, new_conv_op.is_const);

        // Check that this is callable with no arguments.
        // The actual C++ at the time of writing doesn't allow any parameters at all, even with default arguments,
        //   but logically it makes no sense for me to require that, so I don't.
        if (!new_conv_op.IsCallableWithNumArgs(0))
            throw std::runtime_error("The conversion operator should have no parameters, but the parsed data has some.");

        SetReturnTypeFromParsedFunc(self, new_conv_op);
        const std::string target_cpp_type_str = cppdecl::ToCode(cpp_return_type, cppdecl::ToCodeFlags::canonical_c_style);

        c_name = self.overloaded_names.at(&new_conv_op).name;

        if (new_conv_op.ref_qualifier == RefQualifier::rvalue)
        {
            extra_headers.stdlib_in_source_file.insert("utility");
            cpp_called_func = "std::move";
        }

        cpp_called_func += '(';
        cpp_called_func += target_cpp_type_str;
        cpp_called_func += ")(";
        if (new_conv_op.ref_qualifier == RefQualifier::rvalue)
        {
            extra_headers.stdlib_in_source_file.insert("utility");
            cpp_called_func += "std::move(";
        }
        cpp_called_func += "*(";
        cpp_called_func += cpp_type_str;
        cpp_called_func += " *)_this)";
        if (new_conv_op.ref_qualifier == RefQualifier::rvalue)
        {
            cpp_called_func += ")"; // Close `std::move(...)`.
        }

        cpp_called_func_parens = {};

        if (new_conv_op.comment)
        {
            c_comment = new_conv_op.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a conversion operator of class `";
        c_comment += cpp_type_str;
        c_comment += "` to type `";
        c_comment += target_cpp_type_str;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    bool Generator::EmitFuncParams::SetAsFieldGetter(Generator &self, const ClassEntity &new_class, const ClassField &new_field, bool is_const)
    {
        cpp_return_type = self.ParseTypeOrThrow(new_field.type.canonical);

        if (!is_const && cpp_return_type.IsConstOrReference())
            return false; // No mutable getter for a const (or reference) field.

        if (!new_field.is_static)
            AddThisParamFromParsedClass(self, new_class, is_const);

        const std::string class_cpp_type_str = cppdecl::ToCode(self.ParseTypeOrThrow(new_class.full_type), cppdecl::ToCodeFlags::canonical_c_style);
        c_name = self.parsed_type_info.at(class_cpp_type_str).c_type_str;
        c_name += is_const ? "_GetConst_" : "_GetMutable_";
        c_name += StringToCIdentifier(new_field.full_name);


        // Make the return type a const reference if not already a reference.
        if (!cpp_return_type.Is<cppdecl::Reference>())
        {
            if (is_const)
            {
                if (auto quals = cpp_return_type.GetQualifiersMut())
                    *quals |= cppdecl::CvQualifiers::const_;
            }
            cpp_return_type.AddModifier(cppdecl::Reference{});
        }


        if (!new_field.is_static)
        {
            cpp_called_func += "(*(";
            cpp_called_func += class_cpp_type_str;
            cpp_called_func += " *)_this).";
        }
        else
        {
            cpp_called_func = class_cpp_type_str;
            cpp_called_func += "::";
        }
        cpp_called_func += new_field.full_name;

        if (new_field.comment)
        {
            c_comment = new_field.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a member variable of C++ class `";
        c_comment += class_cpp_type_str;
        c_comment += "` named `";
        c_comment += new_field.full_name;
        c_comment += "`.";

        // No namespace stack is needed, because there are no default arguments involved.

        return true;
    }

    void Generator::EmitFunction(OutputFile &file, const EmitFuncParams &params)
    {
        cppdecl::Function new_func;
        cppdecl::Function new_func_decl;

        std::string comment;
        if (!params.c_comment.empty())
        {
            comment += params.c_comment;
            comment += '\n';
        }

        std::string body_pre;
        if (!params.cpp_extra_statements.empty())
        {
            body_pre += IndentString(params.cpp_extra_statements, 1, false);
        }

        std::string body_return;
        bool need_whitespace_before_first_arg = false;
        if (!params.cpp_called_func.empty())
        {
            body_return += params.cpp_called_func;

            if (params.cpp_called_func_parens.begin.empty() && !body_return.ends_with('(') && !body_return.ends_with('[') && !body_return.ends_with('{'))
                need_whitespace_before_first_arg = true;
            else
                body_return += params.cpp_called_func_parens.begin;
        }

        // Assemble the parameter and argument lists.
        std::size_t i = 0;
        bool first_arg_in_call_expr = true;
        for (const auto &param : params.params)
        {
            try
            {
                std::string param_name_fixed = !param.name.empty() ? param.name : "_" + std::to_string(i);
                std::string arg_expr;

                if (!param.emit_as_is)
                {
                    const BindableType &bindable_param_type = FindBindableType(param.cpp_type);
                    if (!bindable_param_type.param_usage && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this type can't be bound as a parameter.");

                    const bool is_ptr_with_nullptr_default_arg = param.IsPointerWithNullptrDefaultArgument();
                    const bool has_useful_default_arg = param.default_arg && !is_ptr_with_nullptr_default_arg;

                    if (has_useful_default_arg && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this parameter type does't support default arguments.");

                    const auto &param_usage =
                        has_useful_default_arg || !bindable_param_type.param_usage
                        ? bindable_param_type.param_usage_with_default_arg
                        : bindable_param_type.param_usage;


                    // Declare or include type dependencies of the parameter.
                    for (const auto &dep : param_usage->same_addr_bindable_type_dependencies)
                    {
                        auto &dep_info = FindTypeBindableWithSameAddress(dep.first);

                        // Adding `!dep.second.need_header` to avoid evaluating the header if it's not needed.
                        if (!dep_info.declared_in_file || &dep_info.declared_in_file() != &file)
                            file.header.forward_declarations_and_inclusions[dep.first].need_header |= dep.second.need_header;
                    }

                    for (const auto &c_param : param_usage->c_params)
                    {
                        auto &new_param = new_func.params.emplace_back();
                        new_param.type = c_param.c_type;
                        new_param.name.parts.emplace_back(param_name_fixed + c_param.name_suffix);

                        auto &new_param_decl = new_func_decl.params.emplace_back();
                        new_param_decl.type = c_param.c_type;
                        // Skip the parameter name in the declarator if it's unnamed in the input AND it doesn't correspond to multiple parameters in the output.
                        // The latter requirement is solely for our sanity, as otherwise it becomes difficult to understand what the multiple parameters are doing in there.
                        if (!param.name.empty() || param_usage->c_params.size() > 1)
                            new_param_decl.name = new_param.name;
                    }

                    // Comment about the default argument.
                    if (has_useful_default_arg)
                    {
                        comment += "/// Parameter `";
                        comment += param_name_fixed;
                        comment += "` has a default argument: `";
                        comment += param.default_arg->original_spelling;
                        comment += "`.\n";
                    }
                    else if (is_ptr_with_nullptr_default_arg)
                    {
                        comment += "/// Parameter `";
                        comment += param_name_fixed;
                        comment += "` defaults to `NULL` in C++.\n";
                    }

                    // Custom comment?
                    if (param_usage->append_to_comment)
                    {
                        std::string str = param_usage->append_to_comment(param_name_fixed, has_useful_default_arg);
                        if (!str.empty())
                        {
                            comment += str;
                            comment += '\n';
                        }
                    }

                    if (param.add_to_call)
                        arg_expr = param_usage->CParamsToCpp(file.source, param_name_fixed, has_useful_default_arg ? param.default_arg->cpp_expr : "");

                    // Insert the extra includes.
                    param_usage->extra_headers.InsertToFile(file);
                }
                else
                {
                    if (param.default_arg)
                        throw std::logic_error("Internal error: Bad usage: `EmitFuncParams::Param::emit_as_is == true` is incompatible with a non-null `default_arg`.");

                    if (param.add_to_call)
                        arg_expr = param_name_fixed;

                    auto &new_param = new_func.params.emplace_back();
                    new_param.type = param.cpp_type;
                    new_param.name = cppdecl::QualifiedName::FromSingleWord(param_name_fixed);
                }

                // Append the argument to the call, if enabled.
                if (!params.cpp_called_func.empty() && param.add_to_call)
                {
                    if (first_arg_in_call_expr)
                    {
                        first_arg_in_call_expr = false;

                        if (need_whitespace_before_first_arg)
                            body_return += ' ';
                    }
                    else
                    {
                        body_return += ',';
                    }

                    body_return += "\n        ";
                    body_return += arg_expr;
                }

                i++;
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While processing parameter " + std::to_string(i) + ":"));
            }
        }
        if (!params.cpp_called_func.empty())
        {
            if (!first_arg_in_call_expr)
                body_return += "\n    ";
            body_return += params.cpp_called_func_parens.end;
        }


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
            for (const auto &dep : bindable_return_type.return_usage->same_addr_bindable_type_dependencies)
            {
                auto &dep_info = FindTypeBindableWithSameAddress(dep.first);

                // Adding `!dep.second.need_header` to avoid evaluating the header if it's not needed.
                if (!dep_info.declared_in_file || &dep_info.declared_in_file() != &file)
                    file.header.forward_declarations_and_inclusions[dep.first].need_header |= dep.second.need_header;
            }

            // Custom comment?
            if (!bindable_return_type.return_usage->append_to_comment.empty())
            {
                comment += bindable_return_type.return_usage->append_to_comment;
                comment += '\n';
            }

            new_decl.type.AppendType(bindable_return_type.return_usage->c_type);
            body_return = bindable_return_type.return_usage->MakeReturnStatement(file.source, body_return);

            // Insert the extra includes.
            bindable_return_type.return_usage->extra_headers.InsertToFile(file);
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While processing the return type:"));
        }


        std::string new_decl_str = ToCode(new_decl, cppdecl::ToCodeFlags::canonical_c_style);

        file.header.contents += '\n';
        file.header.contents += comment;
        file.header.contents += GetExportMacroForFile(file, false);
        file.header.contents += ' ';
        file.header.contents += new_decl_str;
        file.header.contents += ";\n";

        file.source.contents += '\n';
        file.source.contents += new_decl_str;
        file.source.contents += "\n{\n";

        for (const NamespaceEntity *ns : params.using_namespace_stack)
        {
            if (!ns->name)
                continue; // An anonymous namespace.
            file.source.contents += "    using namespace ";
            file.source.contents += *ns->name;
            file.source.contents += ";\n";
        }

        if (!body_pre.empty())
        {
            file.source.contents += "    ";
            file.source.contents += body_pre;
            file.source.contents += "\n";
        }

        if (!body_return.empty())
        {
            file.source.contents += "    ";
            file.source.contents += body_return;
            file.source.contents += "\n";
        }

        file.source.contents += "}\n";


        // Insert the function-wide extra includes.
        params.extra_headers.InsertToFile(file);
    }

    void Generator::EmitClassMemberAccessors(OutputFile &file, const ClassEntity &new_class, const ClassField &new_field)
    {
        // At the time or writing, the first condition should always be true.
        // Only the mutable getter can be omitted (if the field is const or is a reference).

        EmitFuncParams getter;
        if (getter.SetAsFieldGetter(*this, new_class, new_field, true))
            EmitFunction(file, getter);

        EmitFuncParams setter;
        if (setter.SetAsFieldGetter(*this, new_class, new_field, false))
            EmitFunction(file, setter);
    }

    // This fills `parsed_type_info` with the knowledge about all parsed types.
    struct Generator::VisitorRegisterKnownTypes : Visitor
    {
        Generator &self;
        VisitorRegisterKnownTypes(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            cppdecl::Type parsed_type = self.ParseTypeOrThrow(cl.full_type);

            auto [iter, is_new] = self.parsed_type_info.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate type in `parsed_type_info`: " + cl.full_type);

            ParsedTypeInfo &info = iter->second;

            // Not using ReplaceAllNamesInTypeWithCNames()` here, because it's an overkill and requires the information that we're about to generate (though we could probably reorder things here).
            info.c_type_str = StringToCIdentifier(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
            info.c_type = cppdecl::Type::FromSingleWord(info.c_type_str);

            { // Add this type to `types_bindable_with_same_address`.
                auto [iter2, is_new2] = self.types_bindable_with_same_address.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
                if (!is_new2)
                    throw std::logic_error("Internal error: Duplicate type in `types_bindable_with_same_address`: " + cl.full_type);

                TypeBindableWithSameAddress &info2 = iter2->second;
                info2.declared_in_file = [&ret = self.GetOutputFile(cl.declared_in_file)]() -> auto & {return ret;}; // No point in being lazy here.
                info2.forward_declaration = MakeStructForwardDeclaration(info.c_type_str);
            }

            ParsedTypeInfo::ClassDesc &class_info = info.input_type.emplace<ParsedTypeInfo::ClassDesc>();
            class_info.parsed = &cl;

            // Check what constructors and assignments we have.
            for (const auto &member_var : cl.members)
            {
                std::visit(Overload{
                    [&](const ClassField &) {},
                    [&](const ClassCtor &ctor)
                    {
                        class_info.is_any_constructible = true;
                        if (ctor.kind == CopyMoveKind::copy)
                        {
                            class_info.is_copy_constructible = true;
                            if (ctor.is_trivial)
                            {
                                class_info.is_trivially_copy_constructible = true;
                                class_info.is_trivially_copy_or_move_constructible = true;
                            }
                        }
                        else if (ctor.kind == CopyMoveKind::move)
                        {
                            class_info.is_move_constructible = true;
                            if (ctor.is_trivial)
                            {
                                class_info.is_trivially_move_constructible = true;
                                class_info.is_trivially_copy_or_move_constructible = true;
                            }
                        }
                        else if (ctor.IsCallableWithNumArgs(0))
                        {
                            class_info.is_default_constructible = true;
                        }
                    },
                    [&](const ClassMethod &method)
                    {
                        if (method.assignment_kind == CopyMoveKind::copy)
                        {
                            class_info.is_copy_assignable = true;
                            if (method.is_trivial_assignment)
                                class_info.is_trivially_copy_assignable = true;
                        }
                        else if (method.assignment_kind == CopyMoveKind::move)
                        {
                            class_info.is_move_assignable = true;
                            if (method.is_trivial_assignment)
                                class_info.is_trivially_move_assignable = true;
                        }
                    },
                    [&](const ClassConvOp &) {},
                    [&](const ClassDtor &)
                    {
                        class_info.is_destructible = true;
                    },
                }, member_var);
            }

            // If not destructible, assume we're not constructible/assignable either.
            if (!class_info.is_destructible)
            {
                class_info.is_default_constructible = false;
                class_info.is_copy_constructible = false;
                class_info.is_move_constructible = false;
                class_info.is_any_constructible = false;

                class_info.is_copy_assignable = false;
                class_info.is_move_assignable = false;

                class_info.is_trivially_copy_or_move_constructible = false;
                class_info.is_trivially_default_constructible = false;
                class_info.is_trivially_copy_constructible = false;
                class_info.is_trivially_move_constructible = false;
                class_info.is_trivially_copy_assignable = false;
                class_info.is_trivially_move_assignable = false;
            }


            if (class_info.NeedsPassByEnum())
                class_info.pass_by_enum_name = info.c_type_str + "_PassBy";

            if (class_info.is_destructible)
                class_info.cleanup_func_name = info.c_type_str + "_Destroy";
        }

        // void Visit(const FuncEntity &func) override
        // {

        // }

        void Visit(const EnumEntity &en) override
        {
            cppdecl::Type parsed_type = self.ParseTypeOrThrow(en.full_type);

            auto [iter, is_new] = self.parsed_type_info.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate type in input: " + en.full_type);

            ParsedTypeInfo &info = iter->second;

            // Not using ReplaceAllNamesInTypeWithCNames()` here, because it's an overkill and requires the information that we're about to generate (though we could probably reorder things here).
            info.c_type_str = StringToCIdentifier(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
            info.c_type = cppdecl::Type::FromSingleWord(info.c_type_str);

            { // Add this type to `types_bindable_with_same_address`.
                auto [iter2, is_new2] = self.types_bindable_with_same_address.try_emplace(ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style));
                if (!is_new2)
                    throw std::logic_error("Internal error: Duplicate type in `types_bindable_with_same_address`: " + en.full_type);

                TypeBindableWithSameAddress &info2 = iter2->second;
                info2.declared_in_file = [&ret = self.GetOutputFile(en.declared_in_file)]() -> auto & {return ret;}; // No point in being lazy here.
            }

            ParsedTypeInfo::EnumDesc &enum_info = info.input_type.emplace<ParsedTypeInfo::EnumDesc>();
            enum_info.parsed = &en;
        }

        // void Visit(const TypedefEntity &td) override
        // {

        // }
    };

    // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
    struct Generator::VisitorRegisterOverloadedNames : Visitor
    {
        Generator &self;
        VisitorRegisterOverloadedNames(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            const auto &info = self.parsed_type_info.at(ToCode(self.ParseTypeOrThrow(cl.full_type), cppdecl::ToCodeFlags::canonical_c_style));
            const auto &class_desc = std::get<ParsedTypeInfo::ClassDesc>(info.input_type);
            const auto &c_type_str = info.c_type_str;

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
                        if (class_desc.UnifyCopyMoveConstructors() && elem.kind == CopyMoveKind::move)
                            return;

                        std::string name = c_type_str;
                        if (elem.kind == CopyMoveKind::copy)
                            name += "_CopyConstruct";
                        else if (elem.kind == CopyMoveKind::move)
                            name += "_MoveConstruct";
                        else if (elem.IsCallableWithNumArgs(0))
                            name += "_DefaultConstruct";
                        else
                            name += "_Construct";

                        std::string fallback_name;
                        if (elem.template_args)
                            fallback_name = name + '_' + StringToCIdentifier(*elem.template_args);
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassMethod &elem)
                    {
                        if (class_desc.UnifyCopyMoveAssignments() && elem.assignment_kind == CopyMoveKind::move)
                            return;

                        std::string name = c_type_str;
                        name += '_';

                        if (elem.assignment_kind == CopyMoveKind::copy)
                        {
                            name += "CopyAssign";
                        }
                        else if (elem.assignment_kind == CopyMoveKind::move)
                        {
                            name += "MoveAssign";
                        }
                        else if (elem.IsOverloadedOperator())
                        {
                            std::string_view view = elem.name;
                            if (!cppdecl::ConsumeWord(view, "operator"))
                                throw std::logic_error("Expected `" + elem.name + "` to begin with the word `operator` since it looks like an overloaded operator, but it doesn't.");
                            cppdecl::TrimLeadingWhitespace(view); // Just in case.
                            name += cppdecl::TokenToIdentifier(view, true);
                        }
                        else
                        {
                            name += elem.name;
                        }

                        std::string fallback_name;
                        if (elem.HasTemplateArguments())
                            fallback_name = name + '_' + StringToCIdentifier(elem.TemplateArguments());
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassConvOp &elem)
                    {
                        std::string name = c_type_str;
                        name += "_ConvertTo_";
                        name += StringToCIdentifier(cppdecl::ToCode(self.ParseTypeOrThrow(elem.return_type.canonical), cppdecl::ToCodeFlags::canonical_c_style));

                        AddFunc(elem, std::move(name));
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

    void Generator::ResolveOverloadAmbiguities()
    {
        bool already_tried_fallback_names = false;
        bool already_tried_member_cvref_quals = false;
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

            // Now try adding cvref-qualifiers for class members.
            if (!already_tried_member_cvref_quals)
            {
                already_tried_member_cvref_quals = true;

                bool used_any = false;

                for (const auto &elem : ambig_names)
                {
                    auto CvrefQualsToString = [&](const BasicFunc &func)
                    {
                        std::string ret;
                        if (auto member = dynamic_cast<const BasicReturningClassFunc *>(&func))
                        {
                            if (member->is_const)
                                ret = "const";

                            if (member->ref_qualifier != RefQualifier::none)
                            {
                                if (!ret.empty())
                                    ret += '_';

                                if (member->ref_qualifier == RefQualifier::rvalue)
                                    ret += "rvalue";
                                else
                                    ret += "lvalue";
                            }
                        }
                        return ret;
                    };

                    { // Check if the qualifiers are different.
                        std::string first_quals = CvrefQualsToString(*elem.second.front()->first);
                        bool have_different_quals = false;
                        for (const auto &subelem : elem.second | std::views::drop(1))
                        {
                            if (CvrefQualsToString(*subelem->first) != first_quals)
                            {
                                have_different_quals = true;
                                break;
                            }
                        }

                        // If all qualifiers are the same, then appending them is useless.
                        if (!have_different_quals)
                            continue;
                    }

                    used_any = true;

                    for (const auto &subelem : elem.second)
                    {
                        std::string str = CvrefQualsToString(*subelem->first);

                        if (!str.empty())
                        {
                            subelem->second.name += '_';
                            subelem->second.name += str;
                        }
                    }
                }

                // Need another iteration.
                if (used_any)
                    continue;
            }

            // Now try appending the number of parameters.
            if (!already_tried_num_params_suffix)
            {
                already_tried_num_params_suffix = true;
                bool used_any = false;

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

                    used_any = true;

                    for (const auto &subelem : elem.second)
                    {
                        subelem->second.name += '_';
                        subelem->second.name += std::to_string(subelem->second.params.size());
                    }
                }

                // Need another iteration.
                if (used_any)
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
    struct Generator::VisitorEmit : Visitor
    {
        Generator &self;
        VisitorEmit(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            try
            {
                OutputFile &file = self.GetOutputFile(cl.declared_in_file);

                // Include the C++ header where this class is declared.
                file.source.custom_headers.insert(self.ParsedFilenameToRelativeNameForInclusion(cl.declared_in_file));

                const std::string type_str = ToCode(self.ParseTypeOrThrow(cl.full_type), cppdecl::ToCodeFlags::canonical_c_style);

                // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
                const TypeBindableWithSameAddress &sa_bindable_info = self.types_bindable_with_same_address.at(type_str);

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
                file.header.contents += sa_bindable_info.forward_declaration.value();
                file.header.contents += '\n';

                // Constructor selector enum?
                if (class_info.NeedsPassByEnum())
                {
                    file.header.contents += "\nenum ";
                    file.header.contents += class_info.pass_by_enum_name;
                    file.header.contents += "\n{\n";
                    if (class_info.is_default_constructible)
                    {
                        file.header.contents += "    ";
                        file.header.contents += class_info.pass_by_enum_name;
                        file.header.contents += "_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.\n";
                    }
                    if (class_info.is_copy_constructible)
                    {
                        file.header.contents += "    ";
                        file.header.contents += class_info.pass_by_enum_name;
                        file.header.contents += "_Copy, // Copy the object into the function.\n";
                    }
                    if (class_info.is_move_constructible)
                    {
                        file.header.contents += "    ";
                        file.header.contents += class_info.pass_by_enum_name;
                        file.header.contents += "_Move, // Move the object into the function. You must still manually destroy your copy.\n";
                    }

                    file.header.contents += "    ";
                    file.header.contents += class_info.pass_by_enum_name;
                    file.header.contents += "_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.\n";

                    file.header.contents += "};\n";
                }

                for (const ClassMemberVariant &var : cl.members)
                {
                    std::visit(Overload{
                        [&](const ClassField &elem)
                        {
                            try
                            {
                                self.EmitClassMemberAccessors(file, cl, elem);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding field `" + elem.full_name + "`:"));
                            }
                        },
                        [&](const ClassCtor &elem)
                        {
                            try
                            {
                                if (elem.kind == CopyMoveKind::move && class_info.UnifyCopyMoveConstructors())
                                    return;

                                EmitFuncParams params;
                                params.SetFromParsedClassCtor(self, cl, elem, GetNamespaceStack());
                                self.EmitFunction(file, params);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding constructor:"));
                            }
                        },
                        [&](const ClassMethod &elem)
                        {
                            try
                            {
                                if (elem.assignment_kind == CopyMoveKind::move && class_info.UnifyCopyMoveAssignments())
                                    return;

                                EmitFuncParams params;
                                params.SetFromParsedClassMethod(self, cl, elem, GetNamespaceStack());
                                self.EmitFunction(file, params);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding destructor:"));
                            }
                        },
                        [&](const ClassConvOp &elem)
                        {
                            try
                            {
                                EmitFuncParams params;
                                params.SetFromParsedClassConvOp(self, cl, elem, GetNamespaceStack());
                                self.EmitFunction(file, params);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding conversion operator to `" + elem.return_type.canonical + "`:"));
                            }
                        },
                        [&](const ClassDtor &elem)
                        {
                            try
                            {
                                EmitFuncParams params;
                                params.SetFromParsedClassDtor(self, cl, elem, GetNamespaceStack());
                                self.EmitFunction(file, params);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding destructor:"));
                            }
                        },
                    }, var);
                }
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While binding class `" + cl.full_type + "`:"));
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
                std::throw_with_nested(std::runtime_error("While binding function `" + func.full_qual_name + "`:"));
            }
        }

        void Visit(const EnumEntity &en) override
        {
            OutputFile &file = self.GetOutputFile(en.declared_in_file);

            const std::string parsed_type_str = ToCode(self.ParseTypeOrThrow(en.full_type), cppdecl::ToCodeFlags::canonical_c_style);

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
                    file.header.contents += IndentString(elem.comment->text_with_slashes, 1, true);
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

    void Generator::Generate()
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

    void Generator::DumpFileToOstream(const OutputFile &context, const OutputFile::SpecificFileContents &file, std::ostream &out)
    {
        if (out)
            out << file.preamble << '\n';

        // If this is the source file and we also have a non-empty internal header, include it.
        if (out && &file == &context.source && context.internal_header.HasUsefulContents())
        {
            out << "#include <" << context.internal_header.path_for_inclusion << ">\n\n";
        }

        // Should we include a header to declare this type, as opposed to forward-declaring it?
        auto UseHeader = [this](const std::pair<const std::string, OutputFile::SpecificFileContents::ForwardDeclarationOrInclusion> &target)
        {
            return target.second.need_header || !FindTypeBindableWithSameAddress(target.first).forward_declaration;
        };

        // We're gonna append to this.
        std::set<std::string> stdlib_headers = file.stdlib_headers;

        { // Generate and write the list of headers.
            std::set<std::string> headers = file.custom_headers;
            for (const auto &elem : file.forward_declarations_and_inclusions)
            {
                if (UseHeader(elem))
                {
                    const auto &type_info = FindTypeBindableWithSameAddress(elem.first);

                    if (!type_info.KnowHeaderOrForwardDeclaration())
                        continue; // Nothing to do for built-in types.

                    if (!type_info.declared_in_file && !type_info.declared_in_stdlib_file) // This should never happen?
                    {
                        if (elem.second.need_header)
                            throw std::runtime_error("Need to include a header for type `" + elem.first + "`, but don't what header to include.");
                        else
                            throw std::runtime_error("Need to include a header or forward-declare type `" + elem.first + "`, but don't know how.");
                    }

                    assert(bool(type_info.declared_in_stdlib_file) + bool(type_info.declared_in_file) == 1 && "Must specify exactly one of the two: a custom header or a standard library header.");

                    if (type_info.declared_in_stdlib_file)
                        stdlib_headers.insert(*type_info.declared_in_stdlib_file);
                    else
                        headers.insert(type_info.declared_in_file().header.path_for_inclusion);
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

        for (const auto &elem : stdlib_headers)
            out << "#include <" << elem << ">\n";
        if (out && !stdlib_headers.empty())
            out << '\n';

        if (out && !file.after_includes.empty())
            out << file.after_includes << '\n';

        { // Generate and write the list of forward declarations.
            std::set<std::string> fwd_decls = file.custom_forward_declarations;
            for (const auto &elem : file.forward_declarations_and_inclusions)
            {
                if (!UseHeader(elem))
                {
                    const auto &type_info = FindTypeBindableWithSameAddress(elem.first);

                    if (!type_info.KnowHeaderOrForwardDeclaration())
                        continue; // Nothing to do for built-in types.

                    if (!type_info.forward_declaration)
                        throw std::runtime_error("Need to forward-declare type `" + elem.first + "`, but don't know how.");

                    fwd_decls.insert(*type_info.forward_declaration);
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
}

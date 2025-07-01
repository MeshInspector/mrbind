#include "generator.h"

#include "common/filesystem.h"
#include "common/meta.h"
#include "common/parsed_data.h"
#include "common/strings.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/to_string.h>

#include <filesystem>
#include <functional>
#include <iostream>
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

    bool Generator::InheritanceInfo::HaveAny(bool derived, Kind kind) const
    {
        const auto &map = derived ? derived_indirect : bases_indirect;
        return std::any_of(map.begin(), map.end(), [&](const auto &elem){return elem.second == kind;});
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

        std::string pass_by_enum_name = GetPassByEnumName();

        // Class by-value argument helpers.
        file.header.contents += "namespace mrbindc_details\n";
        file.header.contents += "{\n";
        file.header.contents += "    #define MRBINDC_IDENTITY(...) __VA_ARGS__\n";
        file.header.contents += "\n";
        file.header.contents += "    #if defined(_MSC_VER) && !defined(__clang__)\n";
        file.header.contents += "    #define MRBINDC_IGNORE_DEPRECATION(...) _Pragma(\"warning(push)\") _Pragma(\"warning(disable: 4996)\") __VA_ARGS__ _Pragma(\"warning(pop)\")\n";
        file.header.contents += "    #else\n";
        file.header.contents += "    #define MRBINDC_IGNORE_DEPRECATION(...) _Pragma(\"GCC diagnostic push\") _Pragma(\"GCC diagnostic ignored \\\"-Wdeprecated-declarations\\\"\") __VA_ARGS__ _Pragma(\"GCC diagnostic pop\")\n";
        file.header.contents += "    #endif\n";
        file.header.contents += "\n";
        file.header.contents += "    // Those are used to handle by-value arguments of class types, which are passed as a pointer plus a enum explaining how to handle it.\n";
        file.header.contents += "    // The `cpp_type_without_wrapper_` vs `cpp_type_` are different for optionals: `cpp_type_` is either `T` or `std::optional<T>`, while `cpp_type_without_wrapper_` is always the `T` itself.\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_DEF_CTOR(param_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_DefaultConstruct ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `" + pass_by_enum_name + "_DefaultConstruct` was used.\") : __VA_ARGS__{}) :\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_COPY(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_Copy ? __VA_ARGS__(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_) :\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_MOVE(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_Move ? __VA_ARGS__(std::move(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_)) :\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_DEF_ARG(param_, enum_constant_, default_arg_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `\" #enum_constant_ \"` was used.\") : __VA_ARGS__(default_arg_)) :\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_NO_DEF_ARG(param_, enum_constant_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? throw std::runtime_error(\"Function parameter `\" #param_ \" doesn't support `\" #enum_constant_ \"`.\") :\n";
        file.header.contents += "    #define MRBINDC_CLASSARG_END(param_, .../*cpp_type_*/) true ? throw std::runtime_error(\"Invalid `" + pass_by_enum_name + "` enum value specified for function parameter `\" #param_ \".\") : ((__VA_ARGS__ (*)())0)() // We need the dumb fallback to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.\n";
        file.header.contents += "\n";
        file.header.contents += "    // Converts an rvalue to an lvalue.\n";
        file.header.contents += "    template <typename T> T &unmove(T &&value) {return static_cast<T &>(value);}\n";
        file.header.contents += "} // namespace mrbindc_details \n";
        return file;
    }

    std::string Generator::GetPassByEnumName()
    {
        return MakePublicHelperName("PassBy");
    }

    std::string Generator::GetMemoryDeallocFuncName(bool is_array, OutputFile *file)
    {
        if (file)
            file->header.custom_headers.insert(GetCommonPublicHelpersFile().header.path_for_inclusion);
        return MakePublicHelperName(is_array ? "FreeArray" : "Free");
    }

    std::string Generator::GetMemoryAllocFuncName(bool is_array, OutputFile *file)
    {
        if (file)
            file->header.custom_headers.insert(GetCommonPublicHelpersFile().header.path_for_inclusion);
        return MakePublicHelperName(is_array ? "AllocArray" : "Alloc");
    }

    Generator::OutputFile &Generator::GetCommonPublicHelpersFile()
    {
        bool is_new = false;
        OutputFile &file = GetPublicHelperFile("common", &is_new, OutputFile::InitFlags::no_extern_c);
        if (!is_new)
            return file;

        { // The pass-by enum.
            std::string name = GetPassByEnumName();

            file.header.contents += "\ntypedef enum " + name + "\n";
            file.header.contents += "{\n";
            file.header.contents += "    " + name + "_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.\n";
            file.header.contents += "    " + name + "_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.\n";
            file.header.contents += "    " + name + "_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.\n";
            file.header.contents += "    " + name + "_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.\n";
            file.header.contents += "    " + name + "_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.\n";
            file.header.contents += "} " + name + ";\n";
        }

        { // Memory management functions.
            for (bool is_array : {false, true})
            {
                { // Allocate.
                    EmitFuncParams emit;

                    emit.c_comment = "/// Allocates `n` bytes of memory, which can then be freed using `" + GetMemoryDeallocFuncName(is_array, nullptr) + "()`.";
                    if (is_array)
                    {
                        emit.c_comment +=
                            "\n/// For all purposes this is equivalent to `" + GetMemoryAllocFuncName(false, nullptr) + "()` and `" + GetMemoryDeallocFuncName(false, nullptr) + "()`, but the deallocation functions are not interchangable."
                            "\n/// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise."
                            "\n/// So the allocation functions must be provided separately for both too.";
                    }

                    emit.c_name = GetMemoryAllocFuncName(is_array, nullptr);

                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});

                    emit.params.push_back({
                        .name = "num_bytes",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });

                    emit.cpp_called_func = "operator new";
                    if (is_array)
                        emit.cpp_called_func += "[]";

                    EmitFunction(file, emit);
                }

                { // Deallocate.
                    EmitFuncParams emit;

                    emit.c_comment = "/// Deallocates memory that was previously allocated with `" + GetMemoryAllocFuncName(is_array, nullptr) + "()`. Does nothing if the pointer is null.";

                    emit.c_name = GetMemoryDeallocFuncName(is_array, nullptr);

                    emit.params.push_back({
                        .name = "ptr",
                        .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}),
                    });

                    emit.cpp_called_func = "operator delete";
                    if (is_array)
                        emit.cpp_called_func += "[]";

                    EmitFunction(file, emit);
                }
            }
        }

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

    bool Generator::TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name, cppdecl::IsBuiltInTypeNameFlags flags) const
    {
        return name.IsBuiltInTypeName(flags);
    }

    std::string Generator::GetClassDestroyFuncName(std::string_view c_type_name, bool is_array) const
    {
        return std::string(c_type_name) + (is_array ? "_DestroyArray" : "_Destroy");
    }

    std::string Generator::GetClassPtrOffsetFuncName(std::string_view c_type_name, bool is_const) const
    {
        return std::string(c_type_name) + (is_const ? "_OffsetPtr" : "_OffsetMutablePtr");
    }

    const Generator::TypeBindableWithSameAddress &Generator::AddNewTypeBindableWithSameAddress(const cppdecl::QualifiedName &cpp_type_name, TypeBindableWithSameAddress desc)
    {
        // We used to have some extra logic here, but now this just inserts into the map, and checks for duplicates.

        std::string cpp_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);
        auto [iter, is_new] = types_bindable_with_same_address.try_emplace(std::move(cpp_str), std::move(desc));
        if (!is_new)
            throw std::runtime_error("Duplicate type-bindable-with-same_address: " + cpp_str); // The key is not moved on failure.

        return iter->second;
    }

    const Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name)
    {
        if (auto ret = FindTypeBindableWithSameAddressOpt(type_name))
            return *ret;
        else
            throw std::runtime_error("Don't know what to do with type `" + cppdecl::ToCode(type_name, cppdecl::ToCodeFlags::canonical_c_style) + "`: how to forward-declare it or what header to include.");
    }

    const Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name)
    {
        std::string type_name_str = cppdecl::ToCode(type_name, cppdecl::ToCodeFlags::canonical_c_style);

        auto iter = types_bindable_with_same_address.find(type_name_str);
        if (iter != types_bindable_with_same_address.end())
            return &iter->second;

        // Bool.
        // This intentionally excludes the `_Bool` spelling. We simply don't bind it for now, who needs it anyway?
        // And the parser should rewrite it to `bool` regardless.
        if (type_name.AsSingleWord() == "bool")
            return &AddNewTypeBindableWithSameAddress(type_name, TypeBindableWithSameAddress{.declared_in_c_stdlib_file = "stdbool.h"});
        // Built-in types.
        if (TypeNameIsCBuiltIn(type_name, cppdecl::IsBuiltInTypeNameFlags::allow_all & ~cppdecl::IsBuiltInTypeNameFlags::allow_bool))
            return &AddNewTypeBindableWithSameAddress(type_name, {});

        // Try find a regular bindable type, maybe it has the `binding_preserves_address` flag set.
        if (auto bindable_type = FindBindableTypeOpt(ParseTypeOrThrow(type_name_str)))
        {
            if (bindable_type->IsBindableWithSameAddress())
                return &AddNewTypeBindableWithSameAddress(type_name, bindable_type->bindable_with_same_address);
        }

        // Ask the modules.
        for (const auto &m : modules)
        {
            if (auto opt = m->GetTypeBindableWithSameAddress(*this, type_name, type_name_str))
                return &AddNewTypeBindableWithSameAddress(type_name, *opt);
        }

        return nullptr;
    }

    const Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const std::string &type_name_str)
    {
        return FindTypeBindableWithSameAddress(ParseQualNameOrThrow(type_name_str));
    }

    const Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const std::string &type_name_str)
    {
        return FindTypeBindableWithSameAddressOpt(ParseQualNameOrThrow(type_name_str));
    }

    void Generator::ForEachNonBuiltInQualNameInTypeName(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name)> func)
    {
        type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](const cppdecl::QualifiedName &name)
            {
                if (!name.IsEmpty() && !TypeNameIsCBuiltIn(name, cppdecl::IsBuiltInTypeNameFlags::allow_all & ~cppdecl::IsBuiltInTypeNameFlags::allow_bool))
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
                    return std::all_of(elem.params.begin(), elem.params.end(), [&](const auto &param)
                    {
                        // Some trivially bindable type?
                        return IsSimplyBindableDirect(param.type);
                    });
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
            // A parsed enum?
            if (auto iter = parsed_type_info.find(cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style));
                iter != parsed_type_info.end() && iter->second.IsEnum()
            )
            {
                return true;
            }

            // A builtin type?
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

    void Generator::ExtraHeaders::MergeFrom(const ExtraHeaders &other)
    {
        stdlib_in_header_file.insert(other.stdlib_in_header_file.begin(), other.stdlib_in_header_file.end());
        stdlib_in_source_file.insert(other.stdlib_in_source_file.begin(), other.stdlib_in_source_file.end());

        for (auto m : {&ExtraHeaders::custom_in_header_file, &ExtraHeaders::custom_in_source_file})
        {
            if (!(this->*m))
            {
                this->*m = other.*m;
            }
            else
            {
                this->*m = [n1 = std::move(this->*m), n2 = std::move(other.*m)]
                {
                    auto ret = n1();
                    auto extra = n2();
                    ret.insert(std::make_move_iterator(extra.begin()), std::make_move_iterator(extra.end()));
                    return ret;
                };
            }
        }
    }

    const Generator::BindableType &Generator::FindBindableType(const cppdecl::Type &type, bool remove_sugar)
    {
        if (auto *ret = FindBindableTypeOpt(type, remove_sugar))
            return *ret;
        else
            throw std::runtime_error("Don't know how to bind type `" + cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style) + "`" + (remove_sugar ? " (with syntax sugar removed)" : "") + ".");
    }

    const Generator::BindableType *Generator::FindBindableTypeOpt(const cppdecl::Type &type, bool remove_sugar)
    {
        const std::string type_str = cppdecl::ToCode(type, cppdecl::ToCodeFlags::canonical_c_style);

        auto &map = remove_sugar ? bindable_cpp_types_nosugar : bindable_cpp_types;

        { // Find existing type.
            // Here we don't use `.try_emplace()` because we might throw later, and in that case we don't want to insert anything.
            auto iter = map.find(type_str);
            if (iter != map.end())
                return &iter->second;
        }


        // Ask the modules first.
        // We need this to be able to override the default bindings in some cases, for the types otherwise handled by `MakeSimpleTypeBinding()`.
        // For now we don't even ask the modules about desugared types, that seems unnecessary. If one day it turns out to be necessary,
        //   `Module::GetBindableType()` will need a `bool remove_sugar`, OR alternatively we'd need a second function for that.
        for (const auto &m : modules)
        {
            if (!remove_sugar)
            {
                // Strictly with sugar.
                if (auto opt = m->GetBindableType(*this, type, type_str))
                    return &map.try_emplace(type_str, *opt).first->second;
            }

            // Maybe without sugar.
            if (auto opt = m->GetBindableTypeMaybeWithoutSugar(*this, type, type_str, remove_sugar))
                return &map.try_emplace(type_str, *opt).first->second;
        }


        { // Invent a new binding.
            // This handles all the `IsSimplyBindable{Direct{,Cast},Indirect{,Reinterpret}}` types.
            if (auto opt = MakeSimpleTypeBinding(*this, type))
                return &map.try_emplace(type_str, *opt).first->second;

            // Maybe a class?
            // This binds the same way regardless of sugar.
            if (type.IsOnlyQualifiedName())
            {
                // A parsed class?
                if (auto iter = parsed_type_info.find(type_str); iter != parsed_type_info.end())
                {
                    if (auto class_desc = std::get_if<ParsedTypeInfo::ClassDesc>(&iter->second.input_type))
                        return &map.try_emplace(type_str, MakeByValueClassBinding(*this, type.simple_type.name, iter->second.c_type_str, class_desc->traits)).first->second;
                }
                // A custom desugared class based on a sugared one?
                else if (remove_sugar)
                {
                    if (auto opt = FindBindableTypeOpt(type); opt && opt->is_heap_allocated_class)
                    {
                        cppdecl::Type c_type = type;
                        ReplaceAllNamesInTypeWithCNames(c_type);
                        return &map.try_emplace(type_str, MakeByValueClassBinding(*this, type.simple_type.name, cppdecl::ToCode(c_type, cppdecl::ToCodeFlags::canonical_c_style), opt->traits.value())).first->second;
                    }
                }
            }
        }


        // Don't know how to bind this.
        return nullptr;
    }

    void Generator::FillDefaultTypeDependencies(const cppdecl::Type &source, BindableType &target)
    {
        ForEachNonBuiltInQualNameInTypeName(source, [&](const cppdecl::QualifiedName &cpp_type_name)
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

    void Generator::ApplyTypeDependenciesToFile(OutputFile &file, const std::unordered_map<std::string, BindableType::SameAddrBindableTypeDependency> &deps)
    {
        for (const auto &dep : deps)
        {
            auto &dep_info = FindTypeBindableWithSameAddress(dep.first);

            // Calling `declared_in_file()` might create the file that defines this type, which is a good thing.
            if (dep_info.declared_in_file)
                (void)dep_info.declared_in_file();

            auto [iter, is_new] = file.header.forward_declarations_and_inclusions.try_emplace(dep.first);
            iter->second.need_header |= dep.second.need_header;
            if (is_new)
                iter->second.declared_in_same_file = dep_info.declared_in_file && &dep_info.declared_in_file() == &file;
        }
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

    std::string Generator::CppTypeNameToCTypeName(const cppdecl::QualifiedName &cpp_name)
    {
        if (auto ret = CppTypeNameToCTypeNameOpt(cpp_name))
            return std::move(*ret);
        else
            throw std::runtime_error("Unable to translate C++ type name to C, this type isn't known: `" + cppdecl::ToCode(cpp_name, cppdecl::ToCodeFlags::canonical_c_style) + "`.");
    }

    std::optional<std::string> Generator::CppTypeNameToCTypeNameOpt(const cppdecl::QualifiedName &cpp_name)
    {
        const auto *info = FindTypeBindableWithSameAddressOpt(cpp_name);
        if (!info)
            return {};

        if (info->custom_c_type_name.empty())
            return cppdecl::ToString(cpp_name, cppdecl::ToStringFlags::identifier);
        else
            return info->custom_c_type_name;
    }


    void Generator::ReplaceAllNamesInTypeWithCNames(cppdecl::Type &type)
    {
        type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](cppdecl::QualifiedName &name)
            {
                name = cppdecl::QualifiedName::FromSingleWord(CppTypeNameToCTypeName(name));
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

    void Generator::EmitFuncParams::AddThisParam(cppdecl::Type new_class, ThisParamKind kind)
    {
        Param &param = params.emplace_back();
        param.kind = kind.kind;
        param.remove_sugar = true;
        param.cpp_type = std::move(new_class);
        if (kind.is_const)
            param.cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_);
        param.cpp_type.AddModifier(cppdecl::Reference{.kind = kind.is_rvalue ? cppdecl::RefQualifier::rvalue : cppdecl::RefQualifier::lvalue});
        param.name = "_this";
    }

    void Generator::EmitFuncParams::AddThisParamFromParsedClass(const Generator &self, const ClassEntity &new_class, ThisParamKind kind)
    {
        Param &param = params.emplace_back();
        param.kind = kind.kind;
        param.remove_sugar = true;
        param.cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        if (kind.is_const)
            param.cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_);
        param.cpp_type.AddModifier(cppdecl::Reference{.kind = kind.is_rvalue ? cppdecl::RefQualifier::rvalue : cppdecl::RefQualifier::lvalue});
        param.name = "_this";
    }

    void Generator::EmitFuncParams::SetReturnTypeFromParsedFunc(const Generator &self, const BasicReturningFunc &new_func)
    {
        cpp_return_type = self.ParseTypeOrThrow(new_func.return_type.canonical);
    }

    void Generator::EmitFuncParams::SetFromParsedFunc(const Generator &self, const FuncEntity &new_func, bool is_class_friend, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        AddParamsFromParsedFunc(self, new_func.params);

        c_name = self.overloaded_names.at(&new_func).name;

        SetReturnTypeFromParsedFunc(self, new_func);

        if (is_class_friend)
            cpp_called_func = new_func.name; // Do we need the template arguments here? I assume not, in the sane cases.
        else
            cpp_called_func = "::" + new_func.full_qual_name; // Adding leading `::` to avoid ADL, just in case.

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

        // A pretty fallback parameter name for copy/move ctors (especially useful if they are generated implicitly, since those don't have a parameter name).
        if (new_ctor.kind != CopyMoveKind::none && params.at(0).name.empty())
            params.at(0).name = "_other";

        const cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        const std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        if (new_ctor.kind != CopyMoveKind::none)
        {
            // Special member functions have fixed names.

            // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
            c_name = cppdecl::ToString(self.ParseTypeOrThrow(new_class.full_type), cppdecl::ToStringFlags::identifier);
            // Yes, not the nicest names if the user chooses `PassBy_DefaultConstruct`, but that's not a likely case, since we emit the default constructor separately for clarity.
            c_name += "_ConstructFromAnother";

            // Rewrite the parameter to be a non-reference.
            assert(params.at(0).cpp_type.Is<cppdecl::Reference>());
            params.at(0).cpp_type.RemoveModifier();
            params.at(0).cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_); // Just in case. Normally this should never happen, becuase we emit only the move constructors, not the copy constructors.
        }
        else
        {
            c_name = self.overloaded_names.at(&new_ctor).name;
        }

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

    void Generator::EmitFuncParams::SetFromParsedClassMethod(const Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        std::string cpp_type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style);

        if (!new_method.is_static)
            AddThisParamFromParsedClass(self, new_class, {new_method.is_const, new_method.ref_qualifier == RefQualifier::rvalue, new_method.is_static});
        AddParamsFromParsedFunc(self, new_method.params);

        // A pretty fallback parameter name for copy/move assignments (especially useful if they are generated implicitly, since those don't have a parameter name).
        if (new_method.assignment_kind != CopyMoveKind::none && params.at(1).name.empty())
            params.at(1).name = "_other";

        if (new_method.assignment_kind != CopyMoveKind::none)
        {
            // Special member functions have fixed names.

            // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
            c_name = cppdecl::ToString(self.ParseTypeOrThrow(new_class.full_type), cppdecl::ToStringFlags::identifier);
            // Yes, not the nicest names if the user chooses `PassBy_DefaultConstruct`, but that's not a likely case, since we emit the default constructor separately for clarity.
            c_name += "_AssignFromAnother";

            // Rewrite the parameter to be a non-reference.
            // Note that here (unlike in the constructors) this has to be conditional, because assignments take accept parameters by value.
            if (params.at(1).cpp_type.Is<cppdecl::Reference>())
            {
                params.at(1).cpp_type.RemoveModifier();
                params.at(1).cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_); // Just in case. Normally this should never happen, becuase we emit only the move constructors, not the copy constructors.
            }
        }
        else
        {
            c_name = self.overloaded_names.at(&new_method).name;
        }

        SetReturnTypeFromParsedFunc(self, new_method);

        cpp_called_func = new_method.full_name;

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

        AddThisParamFromParsedClass(self, new_class, {new_conv_op.is_const, new_conv_op.ref_qualifier == RefQualifier::rvalue});

        // Check that this is callable with no arguments.
        // The actual C++ at the time of writing doesn't allow any parameters at all, even with default arguments,
        //   but logically it makes no sense for me to require that, so I don't.
        if (!new_conv_op.IsCallableWithNumArgs(0))
            throw std::runtime_error("The conversion operator should have no parameters, but the parsed data has some.");

        SetReturnTypeFromParsedFunc(self, new_conv_op);
        const std::string target_cpp_type_str = cppdecl::ToCode(cpp_return_type, cppdecl::ToCodeFlags::canonical_c_style);

        c_name = self.overloaded_names.at(&new_conv_op).name;

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
        c_name += cppdecl::ToString(self.ParseQualNameOrThrow(new_field.full_name), cppdecl::ToStringFlags::identifier);


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


        cpp_called_func = new_field.full_name;
        cpp_called_func_parens = {};

        if (new_field.comment)
        {
            c_comment = new_field.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from a member variable of class `";
        c_comment += class_cpp_type_str;
        c_comment += "` named `";
        c_comment += new_field.full_name;
        c_comment += "`.";

        // No namespace stack is needed, because there are no default arguments involved.

        return true;
    }

    Generator::EmittedFunctionStrings Generator::EmitFunctionAsStrings(OutputFile &file, const EmitFuncParams &params)
    {
        EmittedFunctionStrings ret;

        cppdecl::Function new_func;
        cppdecl::Function new_func_decl;

        if (!params.c_comment.empty())
        {
            ret.comment += params.c_comment;
            ret.comment += '\n';
        }

        std::string body_pre;
        if (!params.cpp_extra_statements.empty())
        {
            body_pre += IndentString(params.cpp_extra_statements, 1, false);
        }

        std::string body_return = params.cpp_called_func;

        // Assemble the parameter and argument lists.
        std::size_t i = 1; // This counter doesn't increment on `this` parameters. It is 1-based for user-friendliness.
        bool first_arg_in_call_expr = true;
        bool seen_this_param = false;
        bool seen_any_placeholders = false;

        auto AppendArgument = [&](std::string_view arg_expr)
        {
            if (first_arg_in_call_expr)
            {
                first_arg_in_call_expr = false;
                body_return += params.cpp_called_func_parens.begin;
            }
            else
                body_return += ',';

            body_return += "\n        ";
            body_return += arg_expr;
        };

        // Extra args before.
        for (const auto &arg : params.extra_args_before)
            AppendArgument(arg);

        // At least one default C++ argument, not counting the ones we skip because of being trivial (null pointers and such).
        bool has_any_useful_default_args = false;

        // For each C++ parameter...
        for (const auto &param : params.params)
        {
            const bool is_this_param = param.kind != EmitFuncParams::Param::Kind::normal;

            try
            {
                std::string param_name_fixed = !param.name.empty() ? param.name : is_this_param ? "_this" : "_" + std::to_string(i);

                std::string arg_expr;
                if (param.custom_argument_spelling)
                    arg_expr = param.custom_argument_spelling(param_name_fixed);

                // Remove top-level constness from parameter types, to simplify the rest of the code.
                // It seems we don't need to decay the params manually, the parser seems to already emit them in the decayed form.
                const cppdecl::Type param_cpp_type_fixed = cppdecl::Type(param.cpp_type).RemoveQualifiers(cppdecl::CvQualifiers::const_);

                if (!param.use_type_as_is)
                {
                    const BindableType &bindable_param_type = FindBindableType(param_cpp_type_fixed, param.remove_sugar);
                    if (!bindable_param_type.param_usage && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this type can't be bound as a parameter.");

                    if (param.default_arg && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this parameter type does't support default arguments.");

                    const std::string useless_default_arg_message =
                        param.default_arg && bindable_param_type.param_usage_with_default_arg->is_useless_default_argument
                        ? bindable_param_type.param_usage_with_default_arg->is_useless_default_argument(param.default_arg->original_spelling)
                        : "";

                    const bool has_useful_default_arg = param.default_arg && useless_default_arg_message.empty();
                    if (has_useful_default_arg)
                        has_any_useful_default_args = true;

                    const BindableType::ParamUsageWithDefaultArg *const param_usage_defarg = has_useful_default_arg || !bindable_param_type.param_usage ? &bindable_param_type.param_usage_with_default_arg.value() : nullptr;
                    const auto &param_usage = param_usage_defarg ? *param_usage_defarg : bindable_param_type.param_usage.value();

                    // Declare or include type dependencies of the parameter.
                    ApplyTypeDependenciesToFile(file, param_usage.same_addr_bindable_type_dependencies);

                    for (const auto &c_param : param_usage.c_params)
                    {
                        auto &new_param = new_func.params.emplace_back();
                        new_param.type = c_param.c_type;
                        new_param.name.parts.emplace_back(param_name_fixed + c_param.name_suffix);

                        auto &new_param_decl = new_func_decl.params.emplace_back();
                        new_param_decl.type = c_param.c_type;
                        // Skip the parameter name in the declarator if it's unnamed in the input AND it doesn't correspond to multiple parameters in the output.
                        // The latter requirement is solely for our sanity, as otherwise it becomes difficult to understand what the multiple parameters are doing in there.
                        if (!param.name.empty() || param_usage.c_params.size() > 1)
                            new_param_decl.name = new_param.name;
                    }

                    // Custom comment?
                    // This seems to look better when inserted before the explanation about the default argument.
                    if (param_usage.append_to_comment)
                    {
                        std::string str = param_usage.append_to_comment(param_name_fixed, has_useful_default_arg, false);
                        if (!str.empty())
                        {
                            ret.comment += str;
                            ret.comment += '\n';
                        }
                    }

                    // Comment about the default argument.
                    if (has_useful_default_arg)
                    {
                        ret.comment += "/// Parameter `";
                        ret.comment += param_name_fixed;
                        ret.comment += "` has a default argument: `";
                        ret.comment += param.default_arg->original_spelling;
                        ret.comment += "`, ";
                        if (!param_usage_defarg->explanation_how_to_use_default_arg)
                            throw std::logic_error("Internal error: Bad usage: `ParamUsageWithDefaultArg::explanation_how_to_use_default_arg` is not set.");
                        ret.comment += param_usage_defarg->explanation_how_to_use_default_arg(param_name_fixed, false, false); // Always passing `use_wrapper = false, is_returned_from_callback = false` here. Something else can be passed by wrappers, or something else.
                        ret.comment += " to use it.\n";
                    }
                    else if (!useless_default_arg_message.empty())
                    {
                        ret.comment += "/// Parameter `" + param_name_fixed + "` defaults to " + useless_default_arg_message + " in C++.\n";
                    }

                    if (!param.custom_argument_spelling && param.kind != EmitFuncParams::Param::Kind::static_ && param.kind != EmitFuncParams::Param::Kind::not_added_to_call)
                        arg_expr = param_usage.CParamsToCpp(file.source, param_name_fixed, has_useful_default_arg ? BindableType::ParamUsage::DefaultArgVar(param.default_arg->cpp_expr) : BindableType::ParamUsage::DefaultArgNone{});

                    // Insert the extra includes.
                    param_usage.extra_headers.InsertToFile(file);
                }
                else
                {
                    if (param.default_arg)
                        throw std::logic_error("Internal error: Bad usage: `EmitFuncParams::Param::use_type_as_is == true` is incompatible with a non-null `default_arg`.");

                    if (!param.custom_argument_spelling && param.kind != EmitFuncParams::Param::Kind::static_ && param.kind != EmitFuncParams::Param::Kind::not_added_to_call)
                        arg_expr = param_name_fixed;

                    auto &new_param = new_func.params.emplace_back();
                    new_param.type = param_cpp_type_fixed;
                    new_param.name = cppdecl::QualifiedName::FromSingleWord(param_name_fixed);
                }

                switch (param.kind)
                {
                  case EmitFuncParams::Param::Kind::normal:
                    // Keep `arg_expr` as is.
                    break;
                  case EmitFuncParams::Param::Kind::not_added_to_call:
                    assert(arg_expr.empty());
                    break;
                  case EmitFuncParams::Param::Kind::this_ref:
                    assert(!arg_expr.empty());
                    break;
                  case EmitFuncParams::Param::Kind::static_:
                    assert(arg_expr.empty());
                    // Emit the type instead.
                    arg_expr = cppdecl::ToCode(param.cpp_type, cppdecl::ToCodeFlags::canonical_c_style);
                    break;
                }

                // Append the argument to the call, if enabled.
                if (param.kind != EmitFuncParams::Param::Kind::not_added_to_call)
                {
                    if (is_this_param)
                    {
                        if (seen_this_param)
                            throw std::logic_error("Internal error: Bad usage: More than one `this` parameter in the function to emit.");
                        else if (i > 1)
                            throw std::logic_error("Internal error: Bad usage: `this` parameter must be the first parameter in the function to emit.");
                        else
                            seen_this_param = true;
                    }

                    std::string placeholder = is_this_param ? "@this@" : "@" + std::to_string(i) + "@";

                    if (params.cpp_called_func.find(placeholder) != std::string::npos || body_pre.find(placeholder) != std::string::npos)
                    {
                        body_return = Strings::Replace(body_return, placeholder, arg_expr);
                        body_pre = Strings::Replace(body_pre, placeholder, arg_expr);
                        seen_any_placeholders = true;
                    }
                    else if (!params.cpp_called_func.empty())
                    {
                        if (param.kind == EmitFuncParams::Param::Kind::static_)
                        {
                            body_return = arg_expr + "::" + body_return;
                        }
                        else if (param.kind == EmitFuncParams::Param::Kind::this_ref)
                        {
                            body_return = arg_expr + "." + body_return;
                        }
                        else
                        {
                            AppendArgument(arg_expr);
                        }
                    }
                }

                if (!is_this_param)
                    i++; // Don't count the this parameter.
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While processing parameter " + (is_this_param ? "`this`" : std::to_string(i) + (seen_this_param ? " (not counting `this`)" : "")) + ":"));
            }
        }

        // Extra args after.
        for (const auto &arg : params.extra_args_after)
            AppendArgument(arg);

        // Finalize arguments.
        if (
            !params.cpp_called_func.empty() &&
            // If every argument uses a placeholder, and there is at least one placeholder, don't bother adding the `()` at the end.
            (!seen_any_placeholders || !first_arg_in_call_expr)
        )
        {
            if (first_arg_in_call_expr)
                body_return += params.cpp_called_func_parens.begin;
            else
                body_return += "\n    ";
            body_return += params.cpp_called_func_parens.end;
        }


        ret.decl.name.parts.emplace_back(params.c_name);
        ret.decl.type.modifiers.emplace_back(std::move(new_func));

        try
        {
            cppdecl::Type c_return_type;

            if (!params.use_return_type_as_is)
            {
                // Remove top-level constness from the return type, to simplify the rest of the code.
                const cppdecl::Type cpp_return_type_fixed = cppdecl::Type(params.cpp_return_type).RemoveQualifiers(cppdecl::CvQualifiers::const_);

                // Figure out the return type.
                const BindableType &bindable_return_type = FindBindableType(cpp_return_type_fixed, params.remove_return_type_sugar);
                if (!bindable_return_type.return_usage)
                    throw std::runtime_error("Unable to bind this function because this type can't be bound as a return type.");

                // Declare or include the type dependencies of the return type.
                ApplyTypeDependenciesToFile(file, bindable_return_type.return_usage->same_addr_bindable_type_dependencies);

                // Custom comment?
                if (bindable_return_type.return_usage->append_to_comment)
                {
                    ret.comment += bindable_return_type.return_usage->append_to_comment(""); // This is not a callback, so we pass an empty string.
                    ret.comment += '\n';
                }

                body_return = bindable_return_type.return_usage->MakeReturnExpr(file.source, body_return);

                c_return_type = bindable_return_type.return_usage->c_type;

                // Insert the extra includes.
                bindable_return_type.return_usage->extra_headers.InsertToFile(file);
            }
            else
            {
                c_return_type = params.cpp_return_type;

                // Remove top-level constness from the return type, to simplify the rest of the code.
                c_return_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
            }

            ret.decl.type.AppendType(c_return_type);

            if (params.make_return_expr)
            {
                body_return = params.make_return_expr(body_return);
            }
            else if (!body_return.empty())
            {
                if (c_return_type.AsSingleWord() != "void")
                    body_return = "return " + body_return; // The `return` is optional only for clarity. We could make unconditional.

                body_return += ';';
            }
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While processing the return type:"));
        }

        // The trailing custom comment, if any.
        if (!params.c_comment_trailing.empty())
        {
            ret.comment += params.c_comment_trailing;
            ret.comment += '\n';
        }

        // Insert the function-wide extra includes.
        params.extra_headers.InsertToFile(file);


        { // Assemble the returned body.
            ret.body += "{\n";

            // Add the `using namespace`s, just in case the default arguments miss some qualifiers. (Can this still happen?)
            if (has_any_useful_default_args)
            {
                for (const NamespaceEntity *ns : params.using_namespace_stack)
                {
                    if (!ns->name)
                        continue; // An anonymous namespace.
                    ret.body += "    using namespace ";
                    ret.body += *ns->name;
                    ret.body += ";\n";
                }
            }

            if (!body_pre.empty())
            {
                ret.body += "    ";
                ret.body += body_pre;
                ret.body += "\n";
            }

            if (!body_return.empty())
            {
                ret.body += "    ";
                ret.body += body_return;
                ret.body += "\n";
            }

            ret.body += "}";
        }

        return ret;
    }

    void Generator::EmitFunction(OutputFile &file, const EmitFuncParams &params)
    {
        try
        {
            EmittedFunctionStrings strings = EmitFunctionAsStrings(file, params);

            std::string new_decl_str = ToCode(strings.decl, cppdecl::ToCodeFlags::canonical_c_style);

            file.header.contents += '\n';
            file.header.contents += strings.comment;
            file.header.contents += GetExportMacroForFile(file, false);
            file.header.contents += ' ';
            file.header.contents += new_decl_str;
            file.header.contents += ";\n";

            file.source.contents += '\n';
            file.source.contents += new_decl_str;
            file.source.contents += '\n';
            file.source.contents += strings.body;
            file.source.contents += '\n';
        }
        catch (std::exception &e)
        {
            std::throw_with_nested(std::runtime_error("While emitting C function `" + params.c_name + "`:"));
        }
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
            const std::string cpp_type_name = cppdecl::ToCode(parsed_type, cppdecl::ToCodeFlags::canonical_c_style);

            auto [iter, is_new] = self.parsed_type_info.try_emplace(cpp_type_name);
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate type in `parsed_type_info`: " + cl.full_type);

            ParsedTypeInfo &info = iter->second;

            // Not using ReplaceAllNamesInTypeWithCNames()` here, because it's an overkill and requires the information that we're about to generate (though we could probably reorder things here).
            info.c_type_str = cppdecl::ToString(parsed_type, cppdecl::ToStringFlags::identifier);
            info.c_type = cppdecl::Type::FromSingleWord(info.c_type_str);

            { // Add this type to `types_bindable_with_same_address`.
                if (!parsed_type.IsOnlyQualifiedName())
                    throw std::runtime_error("Expected a parsed class type name to be only a qualified name, but got: `" + cl.full_type + "`.");

                self.AddNewTypeBindableWithSameAddress(parsed_type.simple_type.name, {
                    .declared_in_file = [&ret = self.GetOutputFile(cl.declared_in_file)]() -> auto & {return ret;}, // No point in being lazy here.
                    .forward_declaration = MakeStructForwardDeclaration(info.c_type_str),
                });
            }

            ParsedTypeInfo::ClassDesc &class_info = info.input_type.emplace<ParsedTypeInfo::ClassDesc>();
            class_info.parsed = &cl;
            class_info.is_polymorphic = cl.is_polymorphic;

            bool has_by_value_assignment = false;

            // Check what constructors and assignments we have.
            for (const auto &member_var : cl.members)
            {
                std::visit(Overload{
                    [&](const ClassField &) {},
                    [&](const ClassCtor &ctor)
                    {
                        class_info.traits.is_any_constructible = true;
                        if (ctor.kind == CopyMoveKind::copy)
                        {
                            class_info.traits.is_copy_constructible = true;
                            if (ctor.is_trivial)
                                class_info.traits.is_trivially_copy_constructible = true;
                            if (!self.ParseTypeOrThrow(ctor.params.at(0).type.canonical).IsConst(1))
                                class_info.traits.copy_constructor_takes_nonconst_ref = true;
                        }
                        else if (ctor.kind == CopyMoveKind::move)
                        {
                            class_info.traits.is_move_constructible = true;
                            if (ctor.is_trivial)
                                class_info.traits.is_trivially_move_constructible = true;
                        }
                        else if (ctor.IsCallableWithNumArgs(0))
                        {
                            class_info.traits.is_default_constructible = true;
                        }
                    },
                    [&](const ClassMethod &method)
                    {
                        if (method.assignment_kind == CopyMoveKind::copy)
                        {
                            class_info.traits.is_copy_assignable = true;
                            if (method.is_trivial_assignment)
                                class_info.traits.is_trivially_copy_assignable = true;
                        }
                        else if (method.assignment_kind == CopyMoveKind::move)
                        {
                            class_info.traits.is_move_assignable = true;
                            if (method.is_trivial_assignment)
                                class_info.traits.is_trivially_move_assignable = true;
                        }
                        else if (method.assignment_kind == CopyMoveKind::by_value_assignment)
                        {
                            // Note that those are never trivial.
                            has_by_value_assignment = true;
                        }
                    },
                    [&](const ClassConvOp &) {},
                    [&](const ClassDtor &dtor)
                    {
                        class_info.traits.is_destructible = true;
                        if (dtor.is_trivial)
                            class_info.traits.is_trivially_destructible = true;
                    },
                }, member_var);
            }

            if (has_by_value_assignment)
            {
                // Since this assignment operator in practice causes overload resolution conflicts with any other copy/move assignment, we don't have to be very accurate about overwriting exiting copy/move assignability data.
                // Here we OR it, but it probably doesn't matter too much.

                if (class_info.traits.is_copy_constructible)
                {
                    class_info.traits.is_copy_assignable = true;
                    class_info.traits.is_trivially_copy_assignable = false; // Because by-value assignments can't be trivial.
                }

                if (class_info.traits.is_move_constructible)
                {
                    class_info.traits.is_move_assignable = true;
                    class_info.traits.is_trivially_move_assignable = false; // Because by-value assignments can't be trivial.
                }
            }

            { // Collect inheritance information.
                auto [iter, is_new] = self.parsed_class_inheritance_info.try_emplace(cpp_type_name);
                if (!is_new)
                    throw std::logic_error("Internal error: Duplicate class in `parsed_class_inheritance_info`: `" + cpp_type_name + "`.");

                for (const ClassBase &parsed_base : cl.bases)
                {
                    auto &set = parsed_base.is_virtual ? iter->second.bases_indirect_virtual : iter->second.bases_direct_nonvirtual;
                    set.insert(cppdecl::ToCode(self.ParseTypeOrThrow(parsed_base.type.canonical), cppdecl::ToCodeFlags::canonical_c_style));
                }
            }
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
            info.c_type_str = cppdecl::ToString(parsed_type, cppdecl::ToStringFlags::identifier);
            info.c_type = cppdecl::Type::FromSingleWord(info.c_type_str);

            { // Add this type to `types_bindable_with_same_address`.
                // Note that this IS legal for enums, because if they have a custom underlying type, we make their name a typedef for that type, instead of binding directly (and risking getting a different size).

                if (!parsed_type.IsOnlyQualifiedName())
                    throw std::runtime_error("Expected a parsed enum type name to be only a qualified name, but got: `" + en.full_type + "`.");

                self.AddNewTypeBindableWithSameAddress(parsed_type.simple_type.name, {
                    .declared_in_file = [&ret = self.GetOutputFile(en.declared_in_file)]() -> auto & {return ret;}, // No point in being lazy here.
                });
            }

            ParsedTypeInfo::EnumDesc &enum_info = info.input_type.emplace<ParsedTypeInfo::EnumDesc>();
            enum_info.parsed = &en;
        }

        // void Visit(const TypedefEntity &td) override
        // {

        // }
    };

    void Generator::ConstructInheritanceGraph()
    {
        for (auto &info : parsed_class_inheritance_info)
        {
            // Fill the reverse direct non-virtual mapping:
            for (const auto &base : info.second.bases_direct_nonvirtual)
            {
                auto base_info_iter = parsed_class_inheritance_info.find(base);
                if (base_info_iter == parsed_class_inheritance_info.end())
                    throw std::runtime_error("Parsed class `" + info.first + "` has base `" + base + "`, but that base wasn't parsed. Either feed the header that defines it to the parser, or use `--skip-base`.");

                base_info_iter->second.derived_direct_nonvirtual.insert(info.first);
            }

            // Fill indirect non-virtual bases.

            auto lambda = [&](auto &lambda, const std::string &derived, const std::string &base) -> void
            {
                auto [iter, is_new] = info.second.bases_indirect_nonvirtual.try_emplace(base);
                if (!is_new)
                {
                    iter->second = true; // An ambiguous base.
                    return;
                }

                auto base_info_iter = parsed_class_inheritance_info.find(base);
                if (base_info_iter == parsed_class_inheritance_info.end())
                    throw std::runtime_error("Parsed class `" + derived + "` has base `" + base + "`, but that base wasn't parsed. Either feed the header that defines it to the parser, or use `--skip-base`.");

                // Recurse.
                for (const auto &base_of_base : base_info_iter->second.bases_direct_nonvirtual)
                    lambda(lambda, base, base_of_base);
            };
            for (const auto &base : info.second.bases_direct_nonvirtual)
                lambda(lambda, info.first, base);

            // Copy that information to the combined virtual/non-virtual list.
            for (const auto &elem : info.second.bases_indirect_nonvirtual)
                info.second.bases_indirect.try_emplace(elem.first, elem.second ? Generator::InheritanceInfo::Kind::ambiguous : Generator::InheritanceInfo::Kind::non_virt);

            // Add the virtual bases.
            for (auto &base : info.second.bases_indirect_virtual)
            {
                auto [iter, is_new] = info.second.bases_indirect.try_emplace(base, Generator::InheritanceInfo::Kind::virt);
                if (!is_new)
                    iter->second = InheritanceInfo::Kind::ambiguous;
            }

            // For each virtual base, add its indirect non-virtual bases.
            for (auto &base : info.second.bases_indirect_virtual)
            {
                // At this point `.at()` should never throw, because the loop above did the necessary validation.
                for (const auto &base_of_base : parsed_class_inheritance_info.at(base).bases_indirect_nonvirtual)
                {
                    auto [iter, is_new] = info.second.bases_indirect.try_emplace(base_of_base.first, base_of_base.second ? Generator::InheritanceInfo::Kind::ambiguous : Generator::InheritanceInfo::Kind::virt);
                    if (!is_new)
                        iter->second = InheritanceInfo::Kind::ambiguous;
                }
            }

            // Fill the reverse mapping (list the derived classes).
            for (const auto &base : info.second.bases_indirect)
            {
                auto &target_map = parsed_class_inheritance_info.at(base.first).derived_indirect;

                target_map.try_emplace(info.first, base.second);
            }
        }
    }

    // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
    struct Generator::VisitorRegisterOverloadedNames : Visitor
    {
        Generator &self;
        VisitorRegisterOverloadedNames(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            const auto &info = self.parsed_type_info.at(ToCode(self.ParseTypeOrThrow(cl.full_type), cppdecl::ToCodeFlags::canonical_c_style));
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
                        // Special member functions have fixed names.
                        // Note that the same goes for the default constructors. But here we intentionally only handle the ones with actually zero parameters, and not the ones with all arguments defaulted.
                        // Note that this logic must be synced with how the default constructors are emitted.
                        if (elem.kind != CopyMoveKind::none || elem.params.empty())
                            return;

                        std::string name = c_type_str + "_Construct";

                        std::string fallback_name;
                        if (elem.template_args)
                            fallback_name = cppdecl::ToString(self.ParseQualNameOrThrow(name + *elem.template_args), cppdecl::ToStringFlags::identifier);
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassMethod &elem)
                    {
                        if (elem.assignment_kind != CopyMoveKind::none) // Special member functions have fixed names.
                            return;

                        std::string name = c_type_str;
                        name += '_';

                        if (elem.IsOverloadedOperator())
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
                            fallback_name = cppdecl::ToString(self.ParseQualNameOrThrow(name + std::string(elem.TemplateArguments())), cppdecl::ToStringFlags::identifier);
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassConvOp &elem)
                    {
                        std::string name = c_type_str;
                        name += "_ConvertTo_";
                        name += cppdecl::ToString(self.ParseTypeOrThrow(elem.return_type.canonical), cppdecl::ToStringFlags::identifier);

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
            ovl.name = cppdecl::ToString(self.ParseQualNameOrThrow(func.qual_name), cppdecl::ToStringFlags::identifier);
            ovl.fallback_name = cppdecl::ToString(self.ParseQualNameOrThrow(func.full_qual_name), cppdecl::ToStringFlags::identifier);
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

                const cppdecl::QualifiedName cpp_class_name = self.ParseQualNameOrThrow(cl.full_type);
                const std::string cpp_class_name_str = cppdecl::ToCode(cpp_class_name, cppdecl::ToCodeFlags::canonical_c_style);

                // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
                const TypeBindableWithSameAddress &same_addr_bindable_info = self.types_bindable_with_same_address.at(cpp_class_name_str);

                const ParsedTypeInfo &parsed_type_info = self.parsed_type_info.at(cpp_class_name_str);
                const ParsedTypeInfo::ClassDesc &parsed_class_info = std::get<ParsedTypeInfo::ClassDesc>(parsed_type_info.input_type);


                // Forward-declaring in the middle of the file, not in the forward-declarations section.
                // Firstly it looks better. But also because we're inserting a comment, and wouldn't look good in the dense forward declarations list.

                // The comment on the forward-declaration.
                file.header.contents += '\n';
                if (cl.comment)
                {
                    file.header.contents += cl.comment->text_with_slashes;
                    file.header.contents += '\n';
                }
                file.header.contents += "/// Generated from class `" + cpp_class_name_str + "`.\n";

                const InheritanceInfo &inheritance_info = self.parsed_class_inheritance_info.at(cpp_class_name_str);

                { // The part of the comment explaning the inheritance graph.
                    auto iter = self.parsed_class_inheritance_info.find(cpp_class_name_str);
                    if (iter == self.parsed_class_inheritance_info.end())
                        throw std::logic_error("Internal error: The parsed class `" + cpp_class_name_str + "` is missing from the `.parsed_class_inheritance_info`.");

                    auto PrintBasesOrDerived = [&](bool print_derived)
                    {
                        const auto &indirect_map = (print_derived ? iter->second.derived_indirect : iter->second.bases_indirect);
                        const auto &direct_nonvirtual_map = (print_derived ? iter->second.derived_direct_nonvirtual : iter->second.bases_direct_nonvirtual);

                        if (!indirect_map.empty())
                        {
                            file.header.contents += (print_derived ? "/// Classes derived from this:\n" : "/// Inherits from:\n");

                            if (iter->second.HaveAny(print_derived, InheritanceInfo::Kind::virt))
                            {
                                file.header.contents += "///   Virtually:\n";

                                for (const auto &other : indirect_map)
                                {
                                    if (other.second != InheritanceInfo::Kind::virt)
                                        continue;
                                    file.header.contents += "///     `" + other.first + "`\n";
                                }
                            }

                            if (iter->second.HaveAny(print_derived, InheritanceInfo::Kind::non_virt))
                            {
                                std::string dir;
                                std::string indir;

                                for (const auto &other : indirect_map)
                                {
                                    if (other.second != InheritanceInfo::Kind::non_virt)
                                        continue;

                                    std::string &str = direct_nonvirtual_map.contains(other.first) ? dir : indir;

                                    str += "///     `" + other.first + "`\n";
                                }

                                if (!dir.empty())
                                    file.header.contents += "///   Directly: (non-virtually)\n" + dir;
                                if (!indir.empty())
                                    file.header.contents += "///   Indirectly: (non-virtually)\n" + indir;
                            }

                            if (iter->second.HaveAny(print_derived, InheritanceInfo::Kind::ambiguous))
                            {
                                file.header.contents += "///   Ambiguously:\n";

                                for (const auto &other : indirect_map)
                                {
                                    if (other.second != InheritanceInfo::Kind::ambiguous)
                                        continue;

                                    file.header.contents += "///     `" + other.first + "`\n";
                                }
                            }
                        }
                    };

                    PrintBasesOrDerived(false);
                    PrintBasesOrDerived(true);
                }

                // The forward-declaration itself.
                file.header.contents += same_addr_bindable_info.forward_declaration.value() + '\n';


                auto MakeBinder = [&]
                {
                    HeapAllocatedClassBinder binder;
                    binder.cpp_type_name = cpp_class_name;
                    binder.c_type_name = parsed_type_info.c_type_str;
                    return binder;
                };


                // We need to do stuff on the first default ctor emitted (there can be multiple such ctors, because of default arguments).
                bool emitted_any_default_ctor = false;

                bool emitted_misc_functions = false;

                // This emits some additional functions. Repeated calls have no effect.
                auto EmitMiscFunctionsOnce = [&]
                {
                    if (emitted_misc_functions)
                        return;

                    emitted_misc_functions = true;

                    auto binder = MakeBinder();

                    { // Pointer offsetting.
                        self.EmitFunction(file, binder.PrepareFuncOffsetPtr(self, true));
                        self.EmitFunction(file, binder.PrepareFuncOffsetPtr(self, false));
                    }

                    { // Upcasts and downcasts.
                        for (bool is_downcast : {false, true})
                        {
                            for (const auto &target : is_downcast ? inheritance_info.derived_indirect : inheritance_info.bases_indirect)
                            {
                                if (target.second == InheritanceInfo::Kind::ambiguous)
                                    continue;

                                // The C type name of the target.
                                const cppdecl::QualifiedName target_cpp_qual_name = self.ParseQualNameOrThrow(target.first);
                                const std::string target_c_name = self.CppTypeNameToCTypeName(target_cpp_qual_name);

                                // Do not reorder, because we stop on the first successfully generated upcast, and the static one should have precedence.
                                for (bool is_dynamic : {false, true})
                                {
                                    // Virtual downcasts must be dynamic.
                                    if (is_downcast && !is_dynamic && target.second == InheritanceInfo::Kind::virt)
                                        continue;

                                    // If this is a dynamic cast, then the source type must be polymorphic.
                                    // Note that the target type doesn't have to be polymorphic.
                                    if (is_dynamic && !parsed_class_info.is_polymorphic)
                                        continue;

                                    // Do not reorder, because we stop on the first successfully generated upcast, and the ptr one should have precedence.
                                    for (bool acts_on_ref : {false, true})
                                    {
                                        if (acts_on_ref && !is_dynamic)
                                            continue; // Only dynamic casts need a separate version that acts on references.

                                        for (bool is_const : {true, false})
                                        {
                                            Generator::EmitFuncParams emit;

                                            emit.c_comment = "/// " + std::string(is_downcast ? "Downcasts" : "Upcasts") + " an instance of `" + cpp_class_name_str + "` to " + (is_downcast ? "a derived class" : "its base class") + " `" + target.first + "`.";
                                            if (is_downcast)
                                            {
                                                if (is_dynamic)
                                                {
                                                    if (acts_on_ref)
                                                        emit.c_comment += "\n/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.";
                                                    else
                                                        emit.c_comment += "\n/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.";
                                                }
                                                else
                                                {
                                                    emit.c_comment += "\n/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.";
                                                }
                                            }

                                            if (is_const)
                                                emit.c_comment += "\n/// This version is acting on mutable pointers.";

                                            // The upcasts don't need the static-vs-dynamic part in the name, because there is always at most one anyway.
                                            emit.c_name = binder.MakeMemberFuncName(
                                                std::string(is_const ? "" : "Mutable") +
                                                (!is_downcast ? "UpcastTo" : is_downcast ? "DynamicDowncastTo" : "StaticDowncastTo") +
                                                "_" +
                                                target_c_name
                                            );

                                            // Will add a pointer or a reference later.
                                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(target_cpp_qual_name).AddQualifiers(is_const * cppdecl::CvQualifiers::const_);

                                            // This is not a `this` parameter, because for some of the casts it's a nullable pointer,
                                            //   and our `this` params are intended to be non-nullable.
                                            // And also because it's passed as a cast argument, not prepended as `this->` on the left.
                                            emit.params.push_back({
                                                .name = "object",
                                                // Will add a pointer or a reference later.
                                                .cpp_type = cppdecl::Type::FromQualifiedName(cpp_class_name).AddQualifiers(is_const * cppdecl::CvQualifiers::const_),
                                            });

                                            if (acts_on_ref)
                                            {
                                                emit.cpp_return_type.AddModifier(cppdecl::Reference{});
                                                emit.params.back().cpp_type.AddModifier(cppdecl::Reference{});
                                            }
                                            else
                                            {
                                                emit.cpp_return_type.AddModifier(cppdecl::Pointer{});
                                                emit.params.back().cpp_type.AddModifier(cppdecl::Pointer{});
                                            }

                                            emit.cpp_called_func = std::string(is_dynamic ? "dynamic_cast" : "static_cast") + "<" + cppdecl::ToCode(emit.cpp_return_type, cppdecl::ToCodeFlags::canonical_c_style) + ">";
                                            self.EmitFunction(file, emit);
                                        }

                                        // Don't need more than one valid upcast.
                                        // Among other things, this means that a dynamic upcast acting on references (as opposed to pointers)
                                        //   will never be generated.
                                        if (!is_downcast)
                                            break;
                                    }
                                }
                            }
                        }
                    }
                };

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
                                // The copy constructors are not emitted. Instead the move constructors are rewritten as if they were accepting the parameter by value.
                                if (elem.kind == CopyMoveKind::copy)
                                    return;

                                // Custom behavior for default constructors.
                                // Note that here we intentionally only handle the ones with actually zero parameters, and not the ones with all arguments defaulted.
                                // This logic must be synced with how the overloaded names are collected.
                                if (elem.params.empty())
                                {
                                    HeapAllocatedClassBinder binder = MakeBinder();
                                    self.EmitFunction(file, binder.PrepareFuncDefaultCtor(self));
                                }
                                else
                                {
                                    // Any other constructor.

                                    EmitFuncParams params;
                                    params.SetFromParsedClassCtor(self, cl, elem, GetNamespaceStack());
                                    self.EmitFunction(file, params);
                                }

                                // When seeing a default constructor for the first time, emit the array constructor too.
                                // This time respecting the constructors with all arguments defaulted, in case there are no true default constructors in this class.
                                if (!emitted_any_default_ctor && elem.IsCallableWithNumArgs(0))
                                {
                                    emitted_any_default_ctor = true;

                                    HeapAllocatedClassBinder binder = MakeBinder();
                                    self.EmitFunction(file, binder.PrepareFuncDefaultCtorArray(self));
                                }

                                // Try to emit those next to the default ctor if possible.
                                // If not, we'll emit them later, after all the members.
                                EmitMiscFunctionsOnce();
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
                                // The copy assignments are not emitted. Instead the move assignments are rewritten as if they were accepting the parameter by value.
                                // We treat the (parsed) by-value assignments exactly the same as move assignments, generating the same code for both.
                                // We expect at most one of them (move and by-value) to exist, since having both leads to overload resolution errors when calling them anyway.
                                if (elem.assignment_kind == CopyMoveKind::copy)
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
                            (void)elem;

                            try
                            {
                                HeapAllocatedClassBinder binder = MakeBinder();
                                self.EmitFunction(file, binder.PrepareFuncDestroy(self));
                                self.EmitFunction(file, binder.PrepareFuncDestroyArray(self));
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding destructor:"));
                            }
                        },
                    }, var);
                }

                // If didn't emit those earlier, do it now.
                EmitMiscFunctionsOnce();
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
                params.SetFromParsedFunc(self, func, GetClassStack().size() > 0, GetNamespaceStack());
                self.EmitFunction(self.GetOutputFile(func.declared_in_file), params);
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While binding free function `" + func.full_qual_name + "`:"));
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

            const bool is_default_underlying_type = en.canonical_underlying_type == "int";

            if (is_default_underlying_type)
            {
                file.header.contents += "typedef enum " + c_type_str + "\n";
            }
            else
            {
                // If the underlying type isn't `int`, we need special care to keep the type size same in C and C++.

                file.header.contents += "typedef " + en.canonical_underlying_type + " " + c_type_str + ";\n";
                file.header.contents += "enum // " + c_type_str + "\n";
            }

            file.header.contents += "{\n";

            if (en.elems.empty())
            {
                // No empty enums in C, so we need a placeholder element.
                file.header.contents += "    ";
                file.header.contents += c_type_str;
                file.header.contents += "_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.\n";
            }
            else
            {
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
            }

            if (is_default_underlying_type)
                file.header.contents += "} " + c_type_str + ";\n";
            else
                file.header.contents += "};\n";
        }

        // void Visit(const TypedefEntity &td) override
        // {

        // }
    };

    void Generator::Generate()
    {
        { // Construct the `type_alt_spelling_to_canonical` mapping.
            for (const auto &elem : data.type_info)
            {
                for (const auto &sub_elem : elem.second)
                {
                    const cppdecl::Type sub_elem_type = ParseTypeOrThrow(sub_elem.first);

                    for (const auto &spelling : sub_elem.second.alt_spellings)
                    {
                        std::string spelling_str = cppdecl::ToCode(ParseTypeOrThrow(spelling.first), cppdecl::ToCodeFlags::canonical_c_style);
                        if (!type_alt_spelling_to_canonical.try_emplace(std::move(spelling_str), sub_elem_type).second)
                            throw std::runtime_error("Internal error: In input data, different types have the same non-canonical spelling: `" + spelling_str + "`."); // The `spelling_str` isn't moved on failure, so this is safe.
                    }
                }
            }
        }

        { // Register known types.
            VisitorRegisterKnownTypes v(*this);
            v.Process(data.entities);
        }

        // Construct the full inheritance graph.
        ConstructInheritanceGraph();

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
            return !target.second.declared_in_same_file && (target.second.need_header || !FindTypeBindableWithSameAddress(target.first).forward_declaration);
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

                    if (!type_info.declared_in_file && !type_info.declared_in_c_stdlib_file) // This should never happen?
                    {
                        if (elem.second.need_header)
                            throw std::runtime_error("Need to include a header for type `" + elem.first + "`, but don't what header to include.");
                        else
                            throw std::runtime_error("Need to include a header or forward-declare type `" + elem.first + "`, but don't know how.");
                    }

                    assert(bool(type_info.declared_in_c_stdlib_file) + bool(type_info.declared_in_file) == 1 && "Must specify exactly one of the two: a custom header or a standard library header.");

                    if (type_info.declared_in_c_stdlib_file)
                        stdlib_headers.insert(*type_info.declared_in_c_stdlib_file);
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

                    // We can't forward-declare this, but it's declared in the same file anyway. This happens for enums, we don't mind.
                    // We need the forward-declarations for things defined in the same file only for classes, because those can reference
                    //   classes defined below themselves, in their upcast/downcast functions.
                    if (elem.second.declared_in_same_file && !type_info.forward_declaration)
                        continue;

                    if (!type_info.KnowHeaderOrForwardDeclaration())
                        continue; // Nothing to do for built-in types.

                    if (!type_info.forward_declaration)
                        throw std::runtime_error("Need to forward-declare type `" + elem.first + "`, but don't know how.");

                    std::string fwd_decl = *type_info.forward_declaration;
                    if (elem.second.declared_in_same_file)
                        fwd_decl += " // Defined below in this file.";
                    else if (type_info.declared_in_file)
                        fwd_decl += " // Defined in `#include <" + type_info.declared_in_file().header.path_for_inclusion + ">`.";

                    fwd_decls.insert(std::move(fwd_decl));
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

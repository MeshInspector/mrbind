#include "generator.h"

#include "common/filesystem.h"
#include "common/hash.h"
#include "common/meta.h"
#include "common/parsed_data.h"
#include "common/string_escape.h"
#include "common/strings.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse.h>
#include <cppdecl/declarations/simplify.h>
#include <cppdecl/declarations/to_string.h>

#include <cstdio>
#include <exception>
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
        if (relative_name.starts_with("./"))
            relative_name = relative_name.substr(2);

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

        { // Also come up with the name for the include guard, if we want one.
            // By default we use `#pragma once`, but adding convenience includes is incompatible with it.
            if (self.add_convenience_includes)
            {
                auto ProcessSpecificFile = [&](SpecificFileContents &file)
                {
                    std::string_view view = file.path_for_inclusion;

                    // Sanitizer the original path a bit.
                    // This part is specifically for our `__mrbind_c_details`.
                    while (view.starts_with('_'))
                        view.remove_prefix(1);

                    file.include_guard_name = view;

                    // Convert to uppercase and remove special characters;
                    for (char &ch : file.include_guard_name)
                    {
                        if (cppdecl::IsIdentifierChar(ch)) // Should be close enough.
                        {
                            ch = cppdecl::ToUpper(ch);
                        }
                        else
                        {
                            ch = '_';
                        }
                    }

                    // Add some prefixes.
                    file.include_guard_name = self.MakeDetailHelperMacroName("INCLUDED_" + file.include_guard_name);
                };

                ProcessSpecificFile(header);
                ProcessSpecificFile(internal_header);
            }
        }
    }

    void Generator::OutputFile::InitDefaultContents(InitFlags flags)
    {
        source.preamble += "#include \"" + header.path_for_inclusion + "\"\n";

        if (!bool(flags & InitFlags::no_extern_c))
        {
            header.after_includes += "#ifdef __cplusplus\nextern \"C\" {\n#endif\n";
            header.footer += "#ifdef __cplusplus\n} // extern \"C\"\n#endif\n";
        }

        internal_header.preamble += "#include \"" + header.path_for_inclusion + "\"\n";
    }

    std::set<std::string, std::less<>> Generator::ParsedFilenameToRelativeNamesForInclusion(const DeclFileName &input)
    {
        std::set<std::string, std::less<>> ret;

        auto HandleString = [&](const std::string &str, bool is_primary)
        {
            std::filesystem::path input_path = std::filesystem::weakly_canonical(MakePath(str));

            std::filesystem::path new_path;
            for (const auto &elem : assumed_include_directories)
            {
                std::filesystem::path candidate = input_path.lexically_relative(elem);

                // Skip this directory if the path is somehow empty, or importantly if the candidate starts with `..`. This apparently can happen.
                if (candidate.empty() || *candidate.begin() == "..")
                    continue;

                if (new_path.empty() || (candidate.native().size() < new_path.native().size()))
                    new_path = std::move(candidate);
            }

            // Check that we found something.
            if (new_path.empty())
            {
                if (is_primary)
                    throw std::runtime_error("I want to include the parsed file `" + str + "` but there is no matching `--assume-include-dir`.");
                else
                    return; // Silently skip unhandled secondary headers. We can have stuff like the standard library headers in there, and we don't want to handle them.
            }

            ret.insert(PathToString(new_path));
        };

        HandleString(input.primary.canonical, true);
        for (const auto &elem : input.extra)
            HandleString(elem.canonical, false);

        return ret;
    }

    // Returns the output file (which includes both header and source) for the given input file.
    // Initializes it on the first access.
    Generator::OutputFile &Generator::GetOutputFile(const DeclFileName &source)
    {
        auto [iter, is_new] = outputs.try_emplace(source.primary.canonical);
        OutputFile &file = iter->second;
        if (!is_new)
            return file; // Already exists.

        // Get the filename relative to the output directory, without extension.
        std::string rel_name;
        auto prefix_it = path_mappings.find(source.primary.canonical);
        if (prefix_it != path_mappings.end())
        {
            rel_name = prefix_it->second; // Direct match.
        }
        else
        {
            std::filesystem::path source_copy_path = MakePath(source.primary.canonical).parent_path();

            while (true)
            {
                std::string source_copy_str = source_copy_path.string();
                auto it = path_mappings.find(source_copy_str);
                if (it != path_mappings.end())
                {
                    rel_name = it->second;
                    rel_name += source.primary.canonical.substr(source_copy_str.size());

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
                    throw std::runtime_error("Couldn't map parsed filename `" + source.primary.canonical + "` to an output filename, no matching `--map-path` found.");

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
        file.header.stdlib_headers.insert("stdexcept");

        std::string pass_by_enum_name = GetPassByEnumName();

        // Class by-value argument helpers.
        file.header.contents +=
            "namespace mrbindc_details\n"
            "{\n"
            "    // Those are used to handle by-value arguments of class types, which are passed as a pointer plus a enum explaining how to handle it.\n"
            "    // The `cpp_type_without_wrapper_` vs `cpp_type_` are different for optionals: `cpp_type_` is either `T` or `std::optional<T>`, while `cpp_type_without_wrapper_` is always the `T` itself.\n"
            "    #define MRBINDC_CLASSARG_DEF_CTOR(param_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_DefaultConstruct ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `" + pass_by_enum_name + "_DefaultConstruct` was used.\") : __VA_ARGS__{}) :\n"
            "    #define MRBINDC_CLASSARG_COPY(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_Copy ? __VA_ARGS__(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_) :\n"
            "    #define MRBINDC_CLASSARG_MOVE(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == " + pass_by_enum_name + "_Move ? __VA_ARGS__(std::move(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_)) :\n"
            "    #define MRBINDC_CLASSARG_DEF_ARG(param_, enum_constant_, default_arg_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? (param_ ? throw std::runtime_error(\"Expected a null pointer to be passed to `\" #param_ \" because `\" #enum_constant_ \"` was used.\") : __VA_ARGS__(default_arg_)) :\n"
            "    #define MRBINDC_CLASSARG_NO_DEF_ARG(param_, enum_constant_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? throw std::runtime_error(\"Function parameter `\" #param_ \" doesn't support `\" #enum_constant_ \"`.\") :\n"
            "    #define MRBINDC_CLASSARG_END(param_, .../*cpp_type_*/) true ? throw std::runtime_error(\"Invalid `" + pass_by_enum_name + "` enum value specified for function parameter `\" #param_ \".\") : ((__VA_ARGS__ (*)())0)() // We need the dumb fallback to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.\n"
            "\n"
            "    // Converts an rvalue to an lvalue.\n"
            "    template <typename T> constexpr T &unmove(T &&value) {return static_cast<T &>(value);}\n"
            "} // namespace mrbindc_details\n"
            "\n"
            "\n"
            "#define MRBINDC_IDENTITY(...) __VA_ARGS__\n"
            "\n"
            "#if defined(_MSC_VER) && !defined(__clang__)\n"
            "#define MRBINDC_IGNORE_DEPRECATION(...) _Pragma(\"warning(push)\") _Pragma(\"warning(disable: 4996)\") __VA_ARGS__ _Pragma(\"warning(pop)\")\n"
            "#else\n"
            "#define MRBINDC_IGNORE_DEPRECATION(...) _Pragma(\"GCC diagnostic push\") _Pragma(\"GCC diagnostic ignored \\\"-Wdeprecated-declarations\\\"\") __VA_ARGS__ _Pragma(\"GCC diagnostic pop\")\n"
            "#endif\n"
            "\n"
            "\n"
            "// Define `MRBINDC_BIT_CAST()`. We have several implementations to choose from.\n"
            "// [\n"
            "\n"
            "// std::bit_cast\n"
            "#ifndef MRBINDC_BIT_CAST\n"
            "#if __has_include(<version>)\n"
            "#include <version>\n"
            "#ifdef __cpp_lib_bit_cast\n"
            "#include <bit>\n"
            "#define MRBINDC_BIT_CAST(p_type_, ...) std::bit_cast<MRBINDC_IDENTITY p_type_>(__VA_ARGS__)\n"
            "#endif\n"
            "#endif\n"
            "#endif\n"
            "\n"
            "// __builtin_bit_cast\n"
            "#ifndef MRBINDC_BIT_CAST\n"
            "#ifdef __has_builtin\n"
            "#if __has_builtin(__builtin_bit_cast)\n"
            "#define MRBINDC_BIT_CAST(p_type_, ...) __builtin_bit_cast(MRBINDC_IDENTITY p_type_, __VA_ARGS__) // How this handles commas in the first argument is a mystery, but it does.\n"
            "#endif\n"
            "#endif\n"
            "#endif\n"
            "\n"
            "// reinterpret_cast\n"
            "#ifndef MRBINDC_BIT_CAST\n"
            "#include <type_traits>\n"
            "#define MRBINDC_BIT_CAST(p_type_, ...) (MRBINDC_IDENTITY p_type_ (reinterpret_cast<std::add_lvalue_reference_t<std::add_const_t<MRBINDC_IDENTITY p_type_>>>(mrbindc_details::unmove(__VA_ARGS__))))\n"
            "#endif\n"
            "\n"
            "// ]\n"
        ;

        return file;
    }

    std::string Generator::GetPassByEnumName()
    {
        return MakePublicHelperName("PassBy");
    }

    Generator::OutputFile *Generator::GetCommonPublicHelpersFile(bool can_create)
    {
        bool is_new = false;
        OutputFile *file = GetPublicHelperFile("common", &is_new, OutputFile::InitFlags::no_extern_c, can_create);
        if (!file)
            return nullptr;
        if (!is_new)
            return file;

        // The custom 64-bit typedefs.
        if (custom_typedef_for_uint64_t_pointing_to_size_t)
        {
            file->header.contents +=
                "#ifdef __APPLE__\n"
                "#include <stddef.h>\n"
                "typedef ptrdiff_t " + MakePublicHelperName("int64_t") + ";\n"
                "typedef size_t " + MakePublicHelperName("uint64_t") + ";\n"
                "#else\n"
                "#include <stdint.h>\n"
                "typedef int64_t " + MakePublicHelperName("int64_t") + ";\n"
                "typedef uint64_t " + MakePublicHelperName("uint64_t") + ";\n"
                "#endif\n"
                "\n"
            ;
        }

        { // The pass-by enum.
            std::string name = GetPassByEnumName();

            file->header.contents +=
                "\ntypedef enum " + name + "\n"
                "{\n"
                // This must be synced with `CInterop::PassBy`. (Which in turn needs to be synced with more stuff.)
                // The ABI of this enum is important at least for C#.
                "    " + name + "_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.\n"
                "    " + name + "_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.\n"
                "    " + name + "_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.\n"
                "    " + name + "_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.\n"
                "    " + name + "_NoObject, // This is used to pass no object to the function (functions supporting this will document this fact). This is used e.g. for C++ `std::optional<T>` parameters.\n"
                "} " + name + ";\n"
            ;
        }

        { // Memory management functions.
            for (bool is_array : {false, true})
            {
                { // Allocate.
                    EmitFuncParams emit;

                    emit.c_comment = "/// Allocates `n` bytes of memory, which can then be freed using `" + GetMemoryDeallocFuncName(is_array, nullptr).c + "()`.";
                    if (is_array)
                    {
                        emit.c_comment +=
                            "\n/// For all purposes this is equivalent to `" + GetMemoryAllocFuncName(false, nullptr).c + "()` and `" + GetMemoryDeallocFuncName(false, nullptr).c + "()`, but the deallocation functions are not interchangable."
                            "\n/// This is a bit weird, but we have to have separate deallocation functions for arrays and non-arrays, because ASAN complains otherwise."
                            "\n/// So the allocation functions must be provided separately for both too.";
                    }

                    emit.name = GetMemoryAllocFuncName(is_array, nullptr);

                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{});

                    emit.params.push_back({
                        .name = "num_bytes",
                        .cpp_type = cppdecl::Type::FromSingleWord("size_t"),
                    });

                    emit.cpp_called_func = "operator new";
                    if (is_array)
                        emit.cpp_called_func += "[]";

                    EmitFunction(*file, emit);
                }

                { // Deallocate.
                    EmitFuncParams emit;

                    emit.c_comment = "/// Deallocates memory that was previously allocated with `" + GetMemoryAllocFuncName(is_array, nullptr).c + "()`. Does nothing if the pointer is null.";

                    emit.name = GetMemoryDeallocFuncName(is_array, nullptr);

                    emit.params.push_back({
                        .name = "ptr",
                        .cpp_type = cppdecl::Type::FromSingleWord("void").AddModifier(cppdecl::Pointer{}),
                    });

                    emit.cpp_called_func = "operator delete";
                    if (is_array)
                        emit.cpp_called_func += "[]";

                    EmitFunction(*file, emit);
                }
            }
        }

        { // The deprecation macro.
            const std::string deprecated_macro = GetDeprecationMacroName(false);
            const std::string deprecated_macro_reason = GetDeprecationMacroName(true);

            file->header.contents +=
                "\n"
                "// The deprecation attribute.\n"
                "#if !defined(" + deprecated_macro + ") && !defined(" + deprecated_macro_reason + ")\n"
                "#  if defined(__cplusplus) // C++:\n"
                "#    ifdef __has_cpp_attribute\n"
                "#      if __has_cpp_attribute(deprecated)\n"
                "#        define " + deprecated_macro + " [[deprecated]]\n"
                "#        ifdef _MSC_VER\n"
                "#          define " + deprecated_macro_reason + "(str) [[deprecated(\"is deprecated: \" str)]] // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.\n"
                "#        else\n"
                "#          define " + deprecated_macro_reason + "(str) [[deprecated(str)]]\n"
                "#        endif\n"
                "#      endif\n"
                "#    endif\n"
                "#  elif defined(_MSC_VER) // C in MSVC. It has a buggy `__has_c_attribute`, so needs to be special-cased.\n"
                "#    if _MSC_VER >= 1937 && __STDC_VERSION__ >= 202312 // Funnily enough, MSVC doesn't even define `__STDC_VERSION__` in `/std:clatest` mode in 1936, but does define it in if you pass `/std:c17`. 1937 does define it in both cases (through the value for C23 is supposed to be one less than what it reports, `202311`). This also coincides with `[[deprecated]]` getting implemented in C.\n"
                "#      define " + deprecated_macro + " [[deprecated]]\n"
                "#      define " + deprecated_macro_reason + "(str) [[deprecated(\"is deprecated: \" str)]] // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.\n"
                "#    else // Fall back to the non-standard syntax.\n"
                "#      define " + deprecated_macro + " __declspec(deprecated)\n"
                "#      define " + deprecated_macro_reason + "(str) __declspec(deprecated(\"is deprecated: \" str)) // When using this form, MSVC just dumps the entity name and the message, without telling you that it is a deprecation warning. So we add this part ourselves.\n"
                "#    endif\n"
                "#  else // C not in MSVC:\n"
                "#    if defined(__has_c_attribute) && (__STDC_VERSION__ >= 202311 || !defined(__GNUC__)) // Don't trust the `__has_c_attribute()` alone, as new attributes might warn when used in old C, even if the compiler reports them as supported. So if we have `__GNUC__` and an old C version, prefer the non-standard syntax instead. If the C version is old, but this isn't `__GNUC__`, then we have no syntax to fall back to, so we just use this one.\n"
                "#      if __has_c_attribute(deprecated)\n"
                "#        define " + deprecated_macro + " [[deprecated]]\n"
                "#        define " + deprecated_macro_reason + "(str) [[deprecated(str)]]\n"
                "#      endif\n"
                "#    endif\n"
                "#    if !defined(" + deprecated_macro + ") && defined(__GNUC__)\n"
                "#      define " + deprecated_macro + " __attribute__((__deprecated__))\n"
                "#      define " + deprecated_macro_reason + "(str) __attribute__((__deprecated__(str)))\n"
                "#    endif\n"
                "#  endif\n"
                "#  ifndef " + deprecated_macro + " // If nothing above has worked, just expand to nothing.\n"
                "#    define " + deprecated_macro + "\n"
                "#  endif\n"
                "#  ifndef " + deprecated_macro_reason + "\n"
                "#    define " + deprecated_macro_reason + "(str) " + deprecated_macro + "\n"
                "#  endif\n"
                "#endif\n";
        }

        return file;
    }

    bool Generator::IsCommonPublicHelpersHeader(std::string_view path_for_inclusion)
    {
        auto header = GetCommonPublicHelpersFile(false);
        return header && header->header.path_for_inclusion == path_for_inclusion;
    }

    Generator::OutputFile *Generator::GetPublicHelperFile(std::string_view name, bool *is_new, OutputFile::InitFlags init_flags, bool can_create)
    {
        const std::string map_key = "//" + std::string(name);

        if (!can_create && !outputs.contains(map_key)) // Double map access, but oh well!
            return nullptr;

        auto [iter, iter_is_new] = outputs.try_emplace(map_key);
        if (is_new)
            *is_new = iter_is_new;

        if (!iter_is_new)
            return &iter->second;

        OutputFile &file = iter->second;

        std::string full_name = PathToString(helper_header_relative_dir / name);

        // Shorten the name if needed.
        if (max_output_filename_len != 0 && full_name.size() > max_output_filename_len)
        {
            // Only hashing the suffix for no particular reason. Except perhaps if you have similar filenames that are too long (with different prefixes
            //   of the same length), this will give them the same hashes, which is good for consistency between them?
            auto hash = Hash(std::string_view(full_name).substr(max_output_filename_len));

            full_name.resize(max_output_filename_len);
            full_name += "__";

            // Add the hash.
            char buffer[100];
            std::snprintf(buffer, sizeof buffer, "%x", (unsigned int)hash);
            std::string_view view = buffer;
            if (view.size() > hash_len_in_long_output_filenames)
                view.remove_prefix(view.size() - hash_len_in_long_output_filenames);
            full_name += view;
        }

        file.InitRelativeName(*this, std::move(full_name), true);
        file.InitDefaultContents(init_flags);

        return &file;
    }

    static Generator::OutputFile *GetGlobalExportsHeader(Generator &generator, bool *file_is_new, bool can_create)
    {
        return generator.GetPublicHelperFile("exports", file_is_new, Generator::OutputFile::InitFlags::no_extern_c, can_create);
    }

    std::string Generator::GetExportMacroForFile(OutputFile &target_file, bool for_internal_header)
    {
        // This function could be changed later to depend on the `target_file` path, e.g. if we want multiple separate export files for multiple libraries in the output.
        // Then we could also use different macro names, and so on.

        bool file_is_new = false;
        OutputFile &file = *GetGlobalExportsHeader(*this, &file_is_new, true);

        OutputFile::SpecificFileContents &contents = for_internal_header ? target_file.internal_header : target_file.header;
        contents.custom_headers.insert(file.header.path_for_inclusion);

        std::string macro_name = MakePublicHelperMacroName("API");

        if (file_is_new)
        {
            file.header.contents +=
                "#ifndef " + macro_name + "\n"
                "#  ifdef _WIN32\n"
                "#    ifdef " + GetBuildLibraryMacroForFile(target_file) + "\n"
                "#      define " + macro_name + " __declspec(dllexport)\n"
                "#    else\n"
                "#      define " + macro_name + " __declspec(dllimport)\n"
                "#    endif\n"
                "#  else\n"
                "#    define " + macro_name + " __attribute__((__visibility__(\"default\")))\n"
                "#  endif\n"
                "#endif\n"
            ;
        }

        return macro_name;
    }

    bool Generator::IsExportHeader(std::string_view path_for_inclusion)
    {
        // If we make multiple export headers, this won't work anymore, and we'll need some flags in them or something.
        auto header = GetGlobalExportsHeader(*this, nullptr, false);
        return header && header->header.path_for_inclusion == path_for_inclusion;
    }

    std::string Generator::GetBuildLibraryMacroForFile(const OutputFile &target_file)
    {
        // This function could be changed later to depend on the `target_file` path, e.g. if we want multiple separate export files for multiple libraries in the output.
        // Then we could also use different macro names, and so on.

        (void)target_file;
        return MakePublicHelperMacroName("BUILD_LIBRARY");
    }

    std::string Generator::GetDisableConvenienceIncludesMacro()
    {
        return MakePublicHelperMacroName("DISABLE_CONVENIENCE_INCLUDES");
    }

    std::string Generator::GetDeprecationMacroName(bool with_message)
    {
        return MakePublicHelperMacroName(with_message ? "DEPRECATED_REASON" : "DEPRECATED");
    }

    std::string Generator::GetDeprecationMacro(OutputFile &target_file, std::string_view message)
    {
        target_file.header.custom_headers.insert(GetCommonPublicHelpersFile()->header.path_for_inclusion);
        return message.empty() ? GetDeprecationMacroName(false) : GetDeprecationMacroName(true) + "(" + EscapeQuoteString(message) + ")";
    }

    bool Generator::TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name, cppdecl::IsBuiltInTypeNameFlags flags, bool allow_scalar_typedefs) const
    {
        if (name.IsBuiltInTypeName(flags))
            return true;

        if (allow_scalar_typedefs && bool(flags & cppdecl::IsBuiltInTypeNameFlags::allow_integral))
        {
            // Not handling the `std::` namespace on those typedefs. Firstly because the parser doesn't emit it anyway in the canonical types
            //   (and those typedefs should only appear in the canonical types when `--canonicalize-to-fixed-size-typedefs` is used).
            // And secondly because this function is called "C builtin" after all, and is supposed to exclude C++.
            const std::string_view word = name.AsSingleWord();

            // If you decide to add `size_t` and such here, then `FindTypeBindableWithSameAddressOpt()` will probably need a change of logic
            //   to use `stddef.h` for those, since now it only uses `stdint.h` for those.

            if (
                word == "int8_t"  || word == "uint8_t" ||
                word == "int16_t" || word == "uint16_t" ||
                word == "int32_t" || word == "uint32_t" ||
                word == "int64_t" || word == "uint64_t"
            )
            {
                return true;
            }
        }

        return false;
    }

    const Generator::TypeBindableWithSameAddress &Generator::AddNewTypeBindableWithSameAddress(const cppdecl::QualifiedName &cpp_type_name, TypeBindableWithSameAddress desc)
    {
        // We used to have some extra logic here, but now there isn't much.

        CheckForBannedTypes(cppdecl::Type::FromQualifiedName(cpp_type_name));

        std::string cpp_str = CppdeclToCode(cpp_type_name);
        auto [iter, is_new] = types_bindable_with_same_address.try_emplace(std::move(cpp_str), std::move(desc));
        if (!is_new)
            throw std::runtime_error("Duplicate type-bindable-with-same_address: " + cpp_str); // The key is not moved on failure.

        return iter->second;
    }

    const Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name, bool can_invent_new_bindings)
    {
        if (auto ret = FindTypeBindableWithSameAddressOpt(type_name, can_invent_new_bindings))
            return *ret;
        else
            throw std::runtime_error("Don't know what to do with type `" + CppdeclToCode(type_name) + "`: how to forward-declare it or what header to include.");
    }

    const Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name, bool can_invent_new_bindings)
    {
        std::string type_name_str = CppdeclToCode(type_name);

        auto iter = types_bindable_with_same_address.find(type_name_str);
        if (iter != types_bindable_with_same_address.end())
            return &iter->second;


        CheckForBannedTypes(cppdecl::Type::FromQualifiedName(type_name));


        // Bool.
        // This intentionally excludes the `_Bool` spelling. We simply don't bind it for now, who needs it anyway?
        // And the parser should rewrite it to `bool` regardless.
        if (type_name.AsSingleWord() == "bool")
            return &AddNewTypeBindableWithSameAddress(type_name, {.declared_in_c_stdlib_file = "stdbool.h", .needs_reinterpret_cast = false});
        // Built-in types.
        if (TypeNameIsCBuiltIn(type_name, cppdecl::IsBuiltInTypeNameFlags::allow_all & ~cppdecl::IsBuiltInTypeNameFlags::allow_bool))
        {
            // Need to specify `custom_c_type_name` here for `long long` to be correctly printed with a space, instead of being replaced with `long_long`.
            return &AddNewTypeBindableWithSameAddress(type_name, {.custom_c_type_name = type_name_str, .needs_reinterpret_cast = false});
        }

        // Try find a regular bindable type, maybe it has `IsBindableWithSameAddress() == true`.
        if (auto bindable_type = FindBindableTypeOpt(ParseTypeOrThrow(type_name_str), false, can_invent_new_bindings))
        {
            if (bindable_type->IsBindableWithSameAddress())
                return &AddNewTypeBindableWithSameAddress(type_name, bindable_type->bindable_with_same_address);
        }

        // `FindBindableTypeOpt()` can accidentally instantiate the binding for us, despite returning false.
        // So re-test that we still have no binding. Failure to do so will cause `AddNewTypeBindableWithSameAddress()` below to complain
        //   about duplicate bindings. (E.g. about `std::ostream`, so seemingly only for the same-addr-only ones? But maybe a coincidence.)
        // This is lame, but I don't see any other way (since our `IsSimplyBindable...()` must call `FindTypeBindableWithSameAddressOpt()` to support
        //   types like `int32_t` for our `--expose-as-struct`).
        iter = types_bindable_with_same_address.find(type_name_str);
        if (iter != types_bindable_with_same_address.end())
            return &iter->second;

        // Ask the modules.
        for (const auto &m : modules)
        {
            if (auto opt = m->GetTypeBindableWithSameAddress(*this, type_name, type_name_str))
                return &AddNewTypeBindableWithSameAddress(type_name, *opt);
        }

        return nullptr;
    }

    const Generator::TypeBindableWithSameAddress &Generator::FindTypeBindableWithSameAddress(const std::string &type_name_str, bool can_invent_new_bindings)
    {
        return FindTypeBindableWithSameAddress(ParseQualNameOrThrow(type_name_str), can_invent_new_bindings);
    }

    const Generator::TypeBindableWithSameAddress *Generator::FindTypeBindableWithSameAddressOpt(const std::string &type_name_str, bool can_invent_new_bindings)
    {
        return FindTypeBindableWithSameAddressOpt(ParseQualNameOrThrow(type_name_str), can_invent_new_bindings);
    }

    void Generator::ForEachNonBuiltInNestedTypeInType(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name, bool need_definition)> func)
    {
        // The reason why this visits `Type` instead of `QualifiedName` is because we need to know if a type is an array or not,
        //   because arrays in C (unlike in C++) need their element types to be complete, which is something `FillDefaultTypeDependencies()` needs to know.
        (void)type.VisitEachComponent<cppdecl::Type>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](const cppdecl::Type &simple_type)
            {
                if (!simple_type.simple_type.name.IsEmpty() && !TypeNameIsCBuiltIn(simple_type.simple_type.name, cppdecl::IsBuiltInTypeNameFlags::allow_all & ~cppdecl::IsBuiltInTypeNameFlags::allow_bool))
                    func(simple_type.simple_type.name, simple_type.Is<cppdecl::Array>(simple_type.modifiers.size() - 1)); // The underflow is fine here, because `Is()` silently returns false on out-of-range indices.
                return false;
            }
        );
    }

    bool Generator::IsSimplyBindableIndirectReinterpret(const cppdecl::Type &type)
    {
        if (!FindTypeBindableWithSameAddressOpt(type.simple_type.name))
            return false; // Some weird-ass type that can't be reinterpreted into a C type.

        bool already_checked_arrays = false;

        for (std::size_t i = 0; const auto &mod : type.modifiers)
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
                    // Make sure the array element size has a known size.

                    if (already_checked_arrays)
                        return true; // Ok.

                    // This isn't strictly necessary, but is purely an optimization.
                    already_checked_arrays = true;

                    cppdecl::Type elem_type = type;
                    // Remove the modifiers that we've already visited.
                    elem_type.modifiers.erase(elem_type.modifiers.begin(), elem_type.modifiers.begin() + std::ptrdiff_t(i));

                    // The size needs to match for the array to be bindable.
                    return bool(FindSameSizeAndAlignmentOpt(elem_type));
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

            i++;
        }

        return true;
    }

    bool Generator::IsSimplyBindableIndirect(const cppdecl::Type &type)
    {
        if (!IsSimplyBindableIndirectReinterpret(type))
            return false;

        if (auto opt = FindTypeBindableWithSameAddressOpt(type.simple_type.name, false))
            return !opt->needs_reinterpret_cast;

        return false; // This should be unreachable.
    }

    bool Generator::IsSimplyBindableDirectCast(const cppdecl::Type &type)
    {
        if (type.Is<cppdecl::Pointer>() && IsSimplyBindableIndirectReinterpret(type))
            return true;

        if (type.modifiers.empty())
        {
            // A parsed enum?
            if (auto iter = parsed_type_info.find(CppdeclToCode(type));
                iter != parsed_type_info.end() && iter->second.IsEnum()
            )
            {
                return true;
            }

            // A builtin type? Or something like `int32_t`.
            // A bit sketchy, but this needs to pass for `int32_t` for it to work as a member of an `--expose-as-struct` struct.
            if (!FindTypeBindableWithSameAddress(type.simple_type.name, false).needs_reinterpret_cast)
                return true;
        }

        return false; // Nope.
    }

    bool Generator::IsSimplyBindableDirect(const cppdecl::Type &type)
    {
        bool ret = IsSimplyBindableDirectCast(type);

        // This is a bit sketchy, but we need to allow both the built-in types AND things like `int32_t` (for `--expose-as-struct` struct members).
        if (ret && FindTypeBindableWithSameAddress(type.simple_type.name, false).needs_reinterpret_cast)
            ret = false;

        assert(!ret || IsSimplyBindableIndirect(type)); // This being true should automatically imply `IsSimplyBindableIndirect` in all cases.
        return ret;
    }

    void Generator::CheckForBannedTypes(const cppdecl::Type &type)
    {
        if (reject_long_and_long_long)
        {
            (void)type.VisitEachComponent<cppdecl::QualifiedName>(
                cppdecl::VisitEachComponentFlags::no_visit_nontype_names,
                [](const cppdecl::QualifiedName &name)
                {
                    std::string_view word = name.AsSingleWord();
                    if (word == "long" || word == "long long")
                    {
                        throw std::runtime_error("`--reject-long-and-long-long` was specified, but the type `" + std::string(word) + "` fas found in the input. Assuming you run the parser with `--canonicalize-to-fixed-size-typedefs`, this means you should replace `" + std::string(word) + "` in the parsed code with a standard typedef of the same size.");
                    }

                    return false;
                }
            );
        }
    }

    void Generator::ExtraHeaders::InsertToFile(OutputFile &file, InsertHeadersMode mode) const
    {
        if (bool(mode & InsertHeadersMode::insert_to_header))
            file.header.stdlib_headers.insert(stdlib_in_header_file.begin(), stdlib_in_header_file.end());
        if (bool(mode & InsertHeadersMode::insert_to_source))
            file.source.stdlib_headers.insert(stdlib_in_source_file.begin(), stdlib_in_source_file.end());

        if (bool(mode & InsertHeadersMode::insert_to_header))
        {
            std::unordered_set<std::string> header_custom;
            if (custom_in_header_file)
                header_custom = custom_in_header_file();
            file.header.custom_headers.insert(std::make_move_iterator(header_custom.begin()), std::make_move_iterator(header_custom.end()));
        }

        if (bool(mode & InsertHeadersMode::insert_to_source))
        {
            std::unordered_set<std::string> source_custom;
            if (custom_in_source_file)
                source_custom = custom_in_source_file();
            file.source.custom_headers.insert(std::make_move_iterator(source_custom.begin()), std::make_move_iterator(source_custom.end()));
        }
    }

    void Generator::ExtraHeaders::MergeFrom(const ExtraHeaders &other)
    {
        stdlib_in_header_file.insert(other.stdlib_in_header_file.begin(), other.stdlib_in_header_file.end());
        stdlib_in_source_file.insert(other.stdlib_in_source_file.begin(), other.stdlib_in_source_file.end());

        for (auto m : {&ExtraHeaders::custom_in_header_file, &ExtraHeaders::custom_in_source_file})
        {
            if (!(other.*m))
            {
                // Nothing.
            }
            else if (!(this->*m))
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

    const Generator::BindableType &Generator::FindBindableType(const cppdecl::Type &type, bool remove_sugar, bool can_invent_new_bindings)
    {
        return FindBindableType_Mutable(type, remove_sugar, can_invent_new_bindings);
    }

    const Generator::BindableType *Generator::FindBindableTypeOpt(const cppdecl::Type &type, bool remove_sugar, bool can_invent_new_bindings)
    {
        return FindBindableTypeOpt_Mutable(type, remove_sugar, can_invent_new_bindings);
    }

    Generator::BindableType &Generator::FindBindableType_Mutable(const cppdecl::Type &type, bool remove_sugar, bool can_invent_new_bindings)
    {
        if (auto *ret = FindBindableTypeOpt_Mutable(type, remove_sugar, can_invent_new_bindings))
            return *ret;
        else
            throw std::runtime_error("Don't know how to bind type `" + CppdeclToCode(type) + "`" + (remove_sugar ? " (with syntax sugar removed)" : "") + ".");
    }

    Generator::BindableType *Generator::FindBindableTypeOpt_Mutable(const cppdecl::Type &type, bool remove_sugar, bool can_invent_new_bindings)
    {
        // Complain if we've got a top-level const type.
        // I don't think this ever happens for the parsed code alone, since `EmitFunction()` automatically strips top-level constness
        //   from the return types and the parameter types.
        // The one place where this did happen is in our custom binding for `std::shared_ptr<const T>`, and even there it wasn't intended.
        // So I think it's better to make this a hard error here, to catch any other such cases in custom bindings.
        if (type.IsConst())
            throw std::logic_error("Internal error: `Generator::FindBindableType()` shouldn't be given top-level const types. This shouldn't happen regardless of the input C++ code.");

        const std::string type_str = CppdeclToCode(type);

        auto &map = remove_sugar ? bindable_cpp_types_nosugar : bindable_cpp_types;

        { // Find existing type.
            // Here we don't use `.try_emplace()` because we might throw later, and in that case we don't want to insert anything.
            auto iter = map.FindMutable(type_str);
            if (iter != map.Map().end())
                return &iter->second;
        }

        // Make sure the type is legal.
        CheckForBannedTypes(type);

        auto InsertNewType = [&](BindableType new_binding) -> BindableType *
        {
            return &map.TryEmplace(type_str, std::move(new_binding)).first;
        };

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
                    return InsertNewType(*opt);
            }

            // Maybe without sugar.
            if (auto opt = m->GetBindableTypeMaybeWithoutSugar(*this, type, type_str, remove_sugar))
                return InsertNewType(*opt);
        }


        // Invent a new binding.
        if (can_invent_new_bindings)
        {
            // This handles all the `IsSimplyBindable{Direct{,Cast},Indirect{,Reinterpret}}` types.
            if (auto opt = MakeSimpleTypeBinding(*this, type))
            {
                // If we're dumping the interop JSON, as a courtesy also generate bindings for the pointer/reference target types.
                // Hopefully this doesn't have any unforeseen side effects...
                if (type.Is<cppdecl::Pointer>() || type.Is<cppdecl::Reference>())
                {
                    cppdecl::Type type_copy = type;

                    // Remove all modifiers at the same time. We don't need intermediate pointers and references, since those are emitted to the JSON anyway.
                    type_copy.modifiers.clear();

                    // Remove `const` at the same time, since `FindBindableType()` considers top-level const types an internal error.
                    type_copy.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                    // Not sure if propagating `remove_sugar` makes sense here, so I won't by default. It'll probably never matter.
                    // This is opt because we have types that are not bindable directly, e.g. `std::istream`,`std::ostream`.
                    //   I could come up with a fancy way of rejecting them here, but it's easier to ignore the errors.
                    (void)FindBindableTypeOpt(type_copy);
                }

                return InsertNewType(*opt);
            }

            // Maybe a class?
            // This binds the same way regardless of sugar.
            if (type.IsOnlyQualifiedName())
            {
                // A parsed class?
                if (auto iter = parsed_type_info.find(type_str); iter != parsed_type_info.end())
                {
                    if (auto class_desc = std::get_if<ParsedTypeInfo::ClassDesc>(&iter->second.input_type))
                    {
                        if (!class_desc->is_same_layout_struct)
                            return InsertNewType(MakeByValueParsedClassBinding(*this, type.simple_type.name, iter->second.c_type_str, class_desc->traits));
                        else
                            return InsertNewType(MakeBitCastClassBinding(*this, type.simple_type.name, iter->second.c_type_str, class_desc->traits, {.size = class_desc->parsed->type_size, .alignment = class_desc->parsed->type_alignment}));
                    }
                }
                // A custom desugared class based on a sugared one?
                else if (remove_sugar)
                {
                    if (auto opt = FindBindableTypeOpt(type); opt && opt->is_heap_allocated_class)
                    {
                        cppdecl::Type c_type = type;
                        ReplaceAllNamesInTypeWithCNames(c_type);
                        return InsertNewType(MakeByValueParsedClassBinding(*this, type.simple_type.name, CppdeclToCode(c_type), opt->traits.value()));
                    }
                }
            }
        }


        // Don't know how to bind this.
        return nullptr;
    }

    Generator::TypeTraits Generator::FindTypeTraits(cppdecl::Type type)
    {
        auto ret = FindTypeTraitsOpt(type);
        if (!ret)
            throw std::runtime_error("The type traits for type `" + CppdeclToCode(type) + "` were queried, but I don't know this type.");
        return *ret;
    }

    std::optional<Generator::TypeTraits> Generator::FindTypeTraitsOpt(cppdecl::Type type)
    {
        // Remove any array extents.
        bool was_array = type.Is<cppdecl::Array>();
        while (type.Is<cppdecl::Array>())
            type.RemoveModifier();

        auto binding = FindBindableTypeOpt(cppdecl::Type(type).RemoveQualifiers(cppdecl::CvQualifiers::const_));
        if (!binding)
            return {};

        // If the `.traits` is null, this is intentionally a hard error, since it should never be null.
        Generator::TypeTraits ret = binding->traits.value();

        // Make const and array types non-assignable.
        if (type.IsConst() || was_array)
            ret.MakeNonAssignable();

        return ret;
    }

    Generator::TypeSizeAndAlignment Generator::FindSameSizeAndAlignment(cppdecl::Type type)
    {
        if (auto opt = FindSameSizeAndAlignmentOpt(type))
            return *opt;
        else
            throw std::runtime_error("Unable to determine the size and alignment (shared between C and C++) of type: `" + CppdeclToCode(type) + "`.");
    }

    std::optional<Generator::TypeSizeAndAlignment> Generator::FindSameSizeAndAlignmentOpt(cppdecl::Type type)
    {
        // Custom behavior for pointers.
        if (type.Is<cppdecl::Pointer>())
        {
            if (!IsSimplyBindableDirect(type))
                return {}; // Just in case, abort if this point is to some weird type.

            return TypeSizeAndAlignment{.size = data.platform_info.pointer_size, .alignment = data.platform_info.pointer_alignment};
        }

        // Custom behavior for arrays.
        if (auto arr = type.As<cppdecl::Array>())
        {
            // Make sure we know the size.
            if (arr->size.tokens.size() != 1)
                return {};
            auto size_lit = std::get_if<cppdecl::NumericLiteral>(&arr->size.tokens.front());
            if (!size_lit)
                return {};
            auto size = size_lit->ToInteger();
            if (!size)
                return {};
            if (*size == 0)
                return {}; // Can't determine anything for empty arrays, since on libc++ they copy the size and alignment from `T`, instead of using an empty type.

            // Remove the array.
            type.RemoveModifier();

            auto opt = FindSameSizeAndAlignmentOpt(type);
            if (!opt)
                return {};
            opt->size *= *size; // Multiply the size by the number of elements.
            return opt;
        }

        // Strip const and reference.
        if (type.Is<cppdecl::Reference>())
            type.RemoveModifier();
        type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

        // Check the resulting type.
        auto opt = FindBindableTypeOpt(type);
        if (!opt)
            return {};
        return opt->c_cpp_size_and_alignment; // This is also an optional.
    }

    void Generator::FillDefaultTypeDependencies(const cppdecl::Type &source, BindableType &target)
    {
        ForEachNonBuiltInNestedTypeInType(source, [&](const cppdecl::QualifiedName &cpp_type_name, bool need_definition)
        {
            // Could validate that the type is known here here, but for now I'd rather do it lazily on use.
            // Not sure which way is better. Doing it lazily sounds a tiny bit more flexible?

            std::string cpp_type_str = CppdeclToCode(cpp_type_name);

            if (target.param_usage)
                target.param_usage->same_addr_bindable_type_dependencies[cpp_type_str].need_header |= need_definition;
            if (target.param_usage_with_default_arg)
                target.param_usage_with_default_arg->same_addr_bindable_type_dependencies[cpp_type_str].need_header |= need_definition;
            if (target.return_usage)
                target.return_usage->same_addr_bindable_type_dependencies[cpp_type_str].need_header |= need_definition;
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

    static void UnadjustFixedSizeTypedefsInCppdeclEntityAfterParsing(const Generator &generator, auto &input)
    {
        if (!generator.custom_typedef_for_uint64_t_pointing_to_size_t)
            return; // Nothing to do.

        // Unadjust our own typedefs back to `[u]int64_t`, for `--canonicalize-size_t-to-uint64_t`.

        std::string signed_name = generator.MakePublicHelperName("int64_t");
        std::string unsigned_name = generator.MakePublicHelperName("uint64_t");

        (void)input.template VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names,
            [&](cppdecl::QualifiedName &name)
            {
                const std::string_view word = name.AsSingleWord();

                if (word == signed_name)
                    name = cppdecl::QualifiedName::FromSingleWord("int64_t");
                if (word == unsigned_name)
                    name = cppdecl::QualifiedName::FromSingleWord("uint64_t");

                return false;
            }
        );
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
        auto &ret_type = std::get<cppdecl::Type>(ret);
        UnadjustFixedSizeTypedefsInCppdeclEntityAfterParsing(*this, ret_type);
        iter->second = std::move(ret_type);
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
        auto &ret_name = std::get<cppdecl::QualifiedName>(ret);
        UnadjustFixedSizeTypedefsInCppdeclEntityAfterParsing(*this, ret_name);
        iter->second = std::move(ret_name);
        return iter->second;
    }

    template <typename T>
    static const T &AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(const Generator &generator, const T &input, T &storage)
    {
        if (!generator.custom_typedef_for_uint64_t_pointing_to_size_t)
            return input; // Nothing to do.

        // Adjust `[u]int64_t` to our own typedefs, for `--canonicalize-size_t-to-uint64_t`.

        storage = input;

        (void)storage.template VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names,
            [&](cppdecl::QualifiedName &name)
            {
                const std::string_view word = name.AsSingleWord();

                if (word == "int64_t")
                    name = cppdecl::QualifiedName::FromSingleWord(generator.MakePublicHelperName("int64_t"));
                else if (word == "uint64_t")
                    name = cppdecl::QualifiedName::FromSingleWord(generator.MakePublicHelperName("uint64_t"));

                return false;
            }
        );

        return storage;
    }

    std::string Generator::CppdeclToCode(const cppdecl::Type &input, cppdecl::ToCodeFlags extra_flags, std::size_t skip_first_modifiers) const
    {
        cppdecl::Type storage;
        return cppdecl::ToCode(AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(*this, input, storage), cppdecl::ToCodeFlags::canonical_c_style | extra_flags, skip_first_modifiers);
    }

    std::string Generator::CppdeclToCode(const cppdecl::QualifiedName &input, cppdecl::ToCodeFlags extra_flags) const
    {
        cppdecl::QualifiedName storage;
        return cppdecl::ToCode(AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(*this, input, storage), cppdecl::ToCodeFlags::canonical_c_style | extra_flags);
    }

    std::string Generator::CppdeclToCode(const cppdecl::Decl &input, cppdecl::ToCodeFlags extra_flags) const
    {
        cppdecl::Decl storage;
        return cppdecl::ToCode(AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(*this, input, storage), cppdecl::ToCodeFlags::canonical_c_style | extra_flags);
    }

    std::string Generator::CppdeclToCode(const cppdecl::PseudoExpr &input, cppdecl::ToCodeFlags extra_flags) const
    {
        cppdecl::PseudoExpr storage;
        return cppdecl::ToCode(AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(*this, input, storage), cppdecl::ToCodeFlags::canonical_c_style | extra_flags);
    }

    std::string Generator::CppdeclToCode(const cppdecl::SimpleType &input, cppdecl::ToCodeFlags extra_flags, cppdecl::CvQualifiers ignore_cv_quals) const
    {
        cppdecl::SimpleType storage;
        return cppdecl::ToCode(AdjustFixedSizeTypedefsInCppdeclEntityBeforeToCode(*this, input, storage), cppdecl::ToCodeFlags::canonical_c_style | extra_flags, ignore_cv_quals);
    }

    std::string Generator::CppdeclToCodeForComments(cppdecl::Type input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return CppdeclToCode(input);
    }

    std::string Generator::CppdeclToCodeForComments(cppdecl::QualifiedName input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return CppdeclToCode(input);
    }

    std::string Generator::CppdeclToCodeForComments(cppdecl::Decl input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return CppdeclToCode(input);
    }

    std::string Generator::CppdeclToCodeForComments(cppdecl::PseudoExpr input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return CppdeclToCode(input);
    }

    static void CppdeclAdjustForPrettyPrintingLow(const Generator &generator, auto &target)
    {
        for (const auto &m : generator.modules)
            m->AdjustForPrettyPrinting(generator, target);
    }

    void Generator::CppdeclAdjustForCommentsAndIdentifiers(cppdecl::Type &target) const
    {
        CppdeclAdjustForPrettyPrintingLow(*this, target);
    }

    void Generator::CppdeclAdjustForCommentsAndIdentifiers(cppdecl::QualifiedName &target) const
    {
        CppdeclAdjustForPrettyPrintingLow(*this, target);
    }

    void Generator::CppdeclAdjustForCommentsAndIdentifiers(cppdecl::Decl &target) const
    {
        CppdeclAdjustForPrettyPrintingLow(*this, target);
    }

    void Generator::CppdeclAdjustForCommentsAndIdentifiers(cppdecl::PseudoExpr &target) const
    {
        CppdeclAdjustForPrettyPrintingLow(*this, target);
    }

    std::string Generator::CppdeclToIdentifier(cppdecl::Type input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return cppdecl::ToString(input, cppdecl::ToStringFlags::identifier);
    }

    std::string Generator::CppdeclToIdentifier(cppdecl::QualifiedName input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return cppdecl::ToString(input, cppdecl::ToStringFlags::identifier);
    }

    std::string Generator::CppdeclToIdentifier(cppdecl::Decl input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return cppdecl::ToString(input, cppdecl::ToStringFlags::identifier);
    }

    std::string Generator::CppdeclToIdentifier(cppdecl::PseudoExpr input) const
    {
        CppdeclAdjustForCommentsAndIdentifiers(input);
        return cppdecl::ToString(input, cppdecl::ToStringFlags::identifier);
    }

    std::string Generator::CppTypeNameToCTypeName(const cppdecl::QualifiedName &cpp_name)
    {
        if (auto ret = CppTypeNameToCTypeNameOpt(cpp_name))
            return std::move(*ret);
        else
            throw std::runtime_error("Unable to translate C++ type name to C, this type isn't known: `" + CppdeclToCode(cpp_name) + "`.");
    }

    std::optional<std::string> Generator::CppTypeNameToCTypeNameOpt(const cppdecl::QualifiedName &cpp_name)
    {
        const auto *info = FindTypeBindableWithSameAddressOpt(cpp_name);
        if (!info)
            return {};

        if (info->custom_c_type_name.empty())
            return CppdeclToIdentifier(cpp_name);
        else
            return info->custom_c_type_name;
    }


    void Generator::ReplaceAllNamesInTypeWithCNames(cppdecl::Type &type)
    {
        (void)type.VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_names,
            [&](cppdecl::QualifiedName &name)
            {
                name = cppdecl::QualifiedName::FromSingleWord(CppTypeNameToCTypeName(name));
                return false;
            }
        );
    }

    // Indents a string by the number of `levels` (each is currently 4 whitespaces).
    // Only inserts them after each `\n`. Not at the beginning.
    std::string Generator::IndentString(std::string_view str, int levels, bool indent_first_line, bool indent_trailing_newline)
    {
        std::string ret;
        if (indent_first_line)
        {
            for (int i = 0; i < levels; i++)
                ret += "    ";
        }

        for (const char &ch : str)
        {
            ret += ch;

            if (ch == '\n' && (indent_trailing_newline || &ch != &str.back()))
            {
                for (int i = 0; i < levels; i++)
                    ret += "    ";
            }
        }
        return ret;
    }

    bool Generator::OverloadedOperatorShouldBeEmittedAsFreeFunction(std::string_view name) const
    {
        const std::string_view original_name = name;

        if (!cppdecl::ConsumeWord(name, "operator"))
            throw std::logic_error("Internal error: Expected `" + std::string(original_name) + "` to be the name of an overloaded operator and begin with the word `operator`, but it doesn't.");
        cppdecl::TrimLeadingWhitespace(name); // Just in case.

        if (
            name == "->" ||
            name == "->*" ||
            name == "()" ||
            name == "[]" ||
            (
                // Any assignment, including the simple `=` assignment.
                name.ends_with('=') &&
                // But excluding comparisons!
                name != "==" &&
                name != "!=" &&
                name != "<=" &&
                name != ">="
            )
        )
        {
            // Those should be the class methods.
            return false;
        }

        return true;
    }

    std::string Generator::MakeFreeFuncNameForOverloadedOperator(const ClassEntity *enclosing_class, std::variant<const FuncEntity *, const ClassMethod *> parsed_func, bool fallback) const
    {
        return std::visit([&](const auto &elem)
        {
            static constexpr bool is_method = std::is_same_v<std::remove_cvref_t<decltype(elem)>, const ClassMethod *>;
            assert(bool(enclosing_class) == is_method);

            // There should be at least one parameter at this point, possibly `this`.
            assert(elem->IsOverloadedOperator());
            // This function should only handle operators that should be free functions
            assert(elem->params.size() <= 2);

            const std::string_view op_token = elem->GetOverloadedOperatorToken();

            // Later in this function we'll call `MakePublicHelperName()` on this.
            std::string ret;

            bool is_iostream_shift = false;

            // Unary operators that can also be binary need custom names to avoid conflicts with their binary versions.
            if (ret.empty() && (elem->params.size() + is_method) == 1)
            {
                if (op_token == "+")
                    ret = "pos";
                else if (op_token == "-")
                    ret = "neg";
                else if (op_token == "*")
                    ret = "deref";
                else if (op_token == "&")
                    ret = "addressof"; // Ugh! Who overloads this?
            }
            // Left-shifting to an ostream reference should have a custom pretty name.
            static const cppdecl::Type ostream_ref_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
            static const cppdecl::Type istream_ref_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("istream")).AddModifier(cppdecl::Reference{});
            if (ret.empty() && !is_method && op_token == "<<" && ParseTypeOrThrow(elem->params.front().type.canonical) == ostream_ref_type)
            {
                ret = "print";
                is_iostream_shift = true;
            }
            // Similarly right-shifting from an istream reference.
            else if (ret.empty() && !is_method && op_token == ">>" && ParseTypeOrThrow(elem->params.front().type.canonical) == istream_ref_type)
            {
                ret = "input";
                is_iostream_shift = true;
            }
            // If none of the above applied, proceed normally.
            if (ret.empty())
            {
                ret = cppdecl::TokenToIdentifier(op_token, true);

                // Post-increments/decrements need custom names too.
                // We consider the pre-increments/decrements the base versions that don't need any prefixes.
                if (elem->IsPostIncrOrDecr())
                    ret = "post_" + ret;
            }

            // Add the parameter types to the name, including the `this` parameter.

            std::string first_type_str;
            bool first = true;
            auto HandleParamType = [&](cppdecl::Type param_type)
            {
                const bool this_is_first = first;
                first = false;

                // Skip the `int` parameter of the post-increments/decrements.
                if (!this_is_first && elem->IsPostIncrOrDecr())
                    return;
                // Skip the first parameter of `<<`/`>>` applied to iostreams.
                if (this_is_first && is_iostream_shift)
                    return;

                // Remove cvref from the parameter type. This shouldn't introduce any ambiguities, but will make the name look a lot nicer.
                if (!fallback)
                {
                    if (param_type.Is<cppdecl::Reference>())
                        param_type.RemoveModifier();
                    param_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);
                }

                std::string param_type_str = CppdeclToIdentifier(param_type);

                if (this_is_first)
                    first_type_str = param_type_str;
                // If the second operand has the same type as the first, don't emit it.
                // Note that we can have at most two parameters here, as asserted above.
                else if (first_type_str == param_type_str)
                    return;

                ret += '_';
                ret += param_type_str;
            };

            if constexpr (is_method)
            {
                if (enclosing_class)
                {
                    cppdecl::Type this_param_type = ParseTypeOrThrow(enclosing_class->full_type);

                    // Add the proper constness to the `this` parameter.
                    if (elem->is_const)
                        this_param_type.AddQualifiers(cppdecl::CvQualifiers::const_);

                    // Add referenceness.
                    // Is it possible that neither condition triggers? Not sure, but this way of handling it should be fine.
                    if (elem->ref_qualifier == RefQualifier::rvalue)
                        this_param_type.AddModifier(cppdecl::Reference{.kind = cppdecl::RefQualifier::rvalue});
                    else // `lvalue` or `none` (which counts as lvalue for our purposes)
                        this_param_type.AddModifier(cppdecl::Reference{});

                    HandleParamType(this_param_type);
                }
            }

            for (const FuncParam &param : elem->params)
                HandleParamType(ParseTypeOrThrow(param.type.canonical));

            return MakePublicHelperName(ret);
        }, parsed_func);
    }

    bool Generator::FieldTypeUsableInSameLayoutStruct(const cppdecl::Type &cpp_type)
    {
        if (!FindSameSizeAndAlignmentOpt(cpp_type))
            return false;

        return true;
    }

    void Generator::AddDependenciesToFileForFieldOfSameLayoutStruct(cppdecl::Type cpp_type, OutputFile &file)
    {
        // Remove all array extents.
        while (cpp_type.Is<cppdecl::Array>())
            cpp_type.RemoveModifier();

        // If `FieldTypeUsableInSameLayoutStruct()` returned true, I assume we can just grab some random usage and get the dependency information from it.
        // I'm arbitrarily picking the return usage. Those shouldn't throw at this point, if `FieldTypeUsableInSameLayoutStruct()` has returned true.
        const BindableType &binding = FindBindableType(cpp_type);
        binding.return_usage.value().AddDependenciesToFile(*this, file);
    }

    static Generator::ExtraHeaders TryFindCppHeaders(Generator &generator, const auto &entity)
    {
        Generator::ExtraHeaders ret;

        std::unordered_set<std::string> custom_in_source_file;

        // Can't use `Generator::ForEachNonBuiltInNestedTypeInType()` here, because that uses `no_recurse_into_names`, while here we need only `no_recurse_into_nontype_names`.
        // Consider e.g. how we process `std::vector<T>`. Here we do need to visit `T`, and `no_recurse_into_names` would prevent that.
        (void)entity.template VisitEachComponent<cppdecl::QualifiedName>(
            cppdecl::VisitEachComponentFlags::no_visit_nontype_names | cppdecl::VisitEachComponentFlags::no_recurse_into_nontype_names,
            [&](const cppdecl::QualifiedName &name)
            {
                // Those checks are here as a little optimization. Even if we remove them, `parsed_type_info.find()` below should find nothing for those types.
                if (!name.IsEmpty() && !generator.TypeNameIsCBuiltIn(name))
                {
                    auto [cache_iter, is_new] = generator.cached_cpp_includes_for_cpp_type_names.try_emplace(generator.CppdeclToCode(name));

                    if (is_new)
                    {
                        if (auto parsed_iter = generator.parsed_type_info.find(generator.CppdeclToCode(name)); parsed_iter != generator.parsed_type_info.end())
                        {
                            // A parsed type.

                            auto headers = generator.ParsedFilenameToRelativeNamesForInclusion(parsed_iter->second.GetParsedFileName());
                            cache_iter->second.generated.insert(std::make_move_iterator(headers.begin()), std::make_move_iterator(headers.end()));
                        }
                        else
                        {
                            // Perhaps a custom type? Ask the modules.
                            // Most of the time this is completely useless, since those headers will be already included by the parsed C++ headers
                            //   that we are including in our source files.
                            // Not always though. This fails for template instantiations, which are all collected into one generated header
                            //   corresponding to the C++ header that has the template declaration, and that might not include all the necessary
                            //   headers for all the specializations.

                            for (const auto &m : generator.modules)
                            {
                                if (auto header_name = m->GetCppIncludeForQualifiedName(generator, name))
                                {
                                    cache_iter->second.stdlib.insert(*header_name);
                                    break;
                                }
                            }

                            // If we don't find anything, jsut ignore this name.
                        }
                    }

                    custom_in_source_file.insert(cache_iter->second.generated.begin(), cache_iter->second.generated.end());
                    ret.stdlib_in_source_file.insert(cache_iter->second.stdlib.begin(), cache_iter->second.stdlib.end());
                }

                return false;
            }
        );

        ret.custom_in_source_file = [value = std::move(custom_in_source_file)]{return value;};
        return ret;
    }

    Generator::ExtraHeaders Generator::TryFindHeadersForCppTypeForSourceFile(const cppdecl::Type &type)
    {
        return TryFindCppHeaders(*this, type);
    }

    Generator::ExtraHeaders Generator::TryFindHeadersForCppNameForSourceFile(const cppdecl::QualifiedName &name)
    {
        return TryFindCppHeaders(*this, name);
    }

    void Generator::EmitFuncParams::AddParamsFromParsedFunc(Generator &self, const std::vector<FuncParam> &new_params)
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

    void Generator::EmitFuncParams::RemoveIntParamFromPostIncrOrDecr()
    {
        params.pop_back();
        // I'd rather have a custom type of parameter for this purpose, instead of somethinng completely separate.
        extra_args_after.push_back("0");
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

    void Generator::EmitFuncParams::AddThisParamFromParsedClass(Generator &self, const ClassEntity &new_class, ThisParamKind kind)
    {
        Param &param = params.emplace_back();
        param.kind = kind.kind;
        param.remove_sugar = true;
        param.cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        if (kind.is_const)
            param.cpp_type.AddQualifiers(cppdecl::CvQualifiers::const_);
        if (kind.kind != Param::Kind::static_)
            param.cpp_type.AddModifier(cppdecl::Reference{.kind = kind.is_rvalue ? cppdecl::RefQualifier::rvalue : cppdecl::RefQualifier::lvalue});
        param.name = "_this";
    }

    void Generator::EmitFuncParams::SetReturnTypeFromParsedFunc(Generator &self, const BasicReturningFunc &new_func)
    {
        cpp_return_type = self.ParseTypeOrThrow(new_func.return_type.canonical);
    }

    void Generator::EmitFuncParams::SetFromParsedFunc(Generator &self, const FuncEntity &new_func, bool is_class_friend, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        mark_deprecated = new_func.deprecation_message;
        silence_deprecation |= bool(new_func.deprecation_message);

        AddParamsFromParsedFunc(self, new_func.params);
        if (new_func.IsPostIncrOrDecr())
            RemoveIntParamFromPostIncrOrDecr();

        name.c = self.overloaded_names.at(&new_func).name;

        if (new_func.IsOverloadedOperator())
        {
            name.cpp_for_interop = CInterop::FuncKinds::Operator{
                .token = std::string(new_func.GetOverloadedOperatorToken()),
                .name = new_func.qual_name,
                .full_name = new_func.full_qual_name,
            };
        }
        else
        {
            name.cpp_for_interop = CInterop::FuncKinds::Regular{
                .name = new_func.qual_name,
                .full_name = new_func.full_qual_name,
            };
        }

        SetReturnTypeFromParsedFunc(self, new_func);

        cppdecl::QualifiedName full_qual_name = self.ParseQualNameOrThrow(new_func.full_qual_name);

        // Need this for `custom_typedef_for_uint64_t_pointing_to_size_t` to kick in.
        const std::string full_qual_name_fixed = self.CppdeclToCode(full_qual_name);
        const std::string full_qual_name_fixed_deco = self.CppdeclToCodeForComments(full_qual_name);

        // Might need this at least for the custom `[u]int64_t` typedefs.
        extra_headers.MergeFrom(self.TryFindHeadersForCppNameForSourceFile(full_qual_name));

        if (is_class_friend)
        {
            // Skip the qualifiers, but keep the template arguments. The template arguments might matter in some cases.
            // The qualifiers must be skipped because friend functions are normally only reachable via ADL.
            // Roundtrip the name through cppdecl to adjust the template arguments, if necessary.
            cpp_called_func = self.CppdeclToCode(self.ParseQualNameOrThrow(new_func.name + std::string(new_func.TemplateArguments())));
        }
        else if (new_func.IsOverloadedOperator())
        {
            // Skip the template arguments, as they could cause some unwanted instantiations.
            // We could also skip the qualifiers, and but that doesn't do anything useful (other than looking nice), and could break
            //   some poorly written code.
            // We don't roundtrip this through cppdecl, since there are no template arguments to adjust.
            cpp_called_func = new_func.qual_name;
        }
        else
        {
            cpp_called_func = "::" + full_qual_name_fixed; // Adding leading `::` to avoid ADL, just in case.
        }

        if (new_func.comment)
        {
            c_comment = new_func.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from function `";
        c_comment += full_qual_name_fixed_deco;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassCtor(Generator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        mark_deprecated = new_ctor.deprecation_message;
        silence_deprecation |= bool(new_ctor.deprecation_message);

        AddParamsFromParsedFunc(self, new_ctor.params);

        // A pretty fallback parameter name for copy/move ctors (especially useful if they are generated implicitly, since those don't have a parameter name).
        if (new_ctor.kind != CopyMoveKind::none && params.at(0).name.empty())
            params.at(0).name = "_other";

        const cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        const std::string cpp_type_str = self.CppdeclToCode(cpp_type);
        const std::string cpp_type_str_deco = self.CppdeclToCodeForComments(cpp_type);

        if (new_ctor.kind != CopyMoveKind::none)
        {
            // Special member functions have fixed names.

            // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
            name.c = self.CppdeclToIdentifier(self.ParseTypeOrThrow(new_class.full_type));
            // Yes, not the nicest names if the user chooses `PassBy_DefaultConstruct`, but that's not a likely case, since we emit the default constructor separately for clarity.
            name.c += "_ConstructFromAnother";

            // Rewrite the parameter to be a non-reference.
            assert(params.at(0).cpp_type.Is<cppdecl::Reference>());
            params.at(0).cpp_type.RemoveModifier();
            params.at(0).cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_); // Just in case. Normally this should never happen, becuase we emit only the move constructors, not the copy constructors.
        }
        else
        {
            name.c = self.overloaded_names.at(&new_ctor).name;
        }
        name.cpp_for_interop = CInterop::MethodKinds::Constructor{
            .is_copying_ctor = new_ctor.kind != CopyMoveKind::none,
            .template_args = new_ctor.template_args.value_or(""),
        };

        cpp_return_type = cpp_type;

        cpp_called_func = cpp_type_str;

        if (new_ctor.comment)
        {
            c_comment = new_ctor.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from constructor `";
        c_comment += cpp_type_str_deco;
        c_comment += "::";
        c_comment += self.CppdeclToCodeForComments(cppdecl::QualifiedName::FromSinglePart(cppdecl::UnqualifiedName{.var = cpp_type.simple_type.name.parts.back().var, .template_args = {}}));
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassMethod(Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        mark_deprecated = new_method.deprecation_message;
        silence_deprecation |= bool(new_method.deprecation_message);

        mark_virtual = new_method.is_virtual;

        cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        const std::string cpp_type_str = self.CppdeclToCode(cpp_type);
        const std::string cpp_type_str_deco = self.CppdeclToCodeForComments(cpp_type);

        AddThisParamFromParsedClass(self, new_class, {new_method.is_const, new_method.ref_qualifier == RefQualifier::rvalue, new_method.is_static});
        AddParamsFromParsedFunc(self, new_method.params);
        if (new_method.IsPostIncrOrDecr())
            RemoveIntParamFromPostIncrOrDecr();

        // A pretty fallback parameter name for copy/move assignments (especially useful if they are generated implicitly, since those don't have a parameter name).
        if (new_method.assignment_kind != CopyMoveKind::none && params.at(1).name.empty())
            params.at(1).name = "_other";

        // Special assignments have fixed names.
        if (new_method.assignment_kind != CopyMoveKind::none)
        {
            // Intentionally not using `FindTypeBindableWithSameAddress()` here, since this is only for parsed types.
            name.c = self.CppdeclToIdentifier(self.ParseTypeOrThrow(new_class.full_type));
            // Yes, not the nicest names if the user chooses `PassBy_DefaultConstruct`, but that's not a likely case, since we emit the default constructor separately for clarity.
            name.c += "_AssignFromAnother";

            name.cpp_for_interop = CInterop::MethodKinds::Operator{.token = "=", .is_copying_assignment = true};

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
            name.c = self.overloaded_names.at(&new_method).name;

            if (new_method.IsOverloadedOperator())
                name.cpp_for_interop = CInterop::MethodKinds::Operator{.token = std::string(new_method.GetOverloadedOperatorToken()), .is_post_incr_or_decr = new_method.IsPostIncrOrDecr()};
            else
                name.cpp_for_interop = CInterop::MethodKinds::Regular{.name = new_method.name, .full_name = new_method.full_name};
        }

        SetReturnTypeFromParsedFunc(self, new_method);

        cppdecl::QualifiedName full_name_parsed = self.ParseQualNameOrThrow(new_method.full_name);

        // Need this for `custom_typedef_for_uint64_t_pointing_to_size_t` to kick in.
        const std::string full_name_fixed = self.CppdeclToCode(full_name_parsed);
        const std::string full_name_fixed_deco = self.CppdeclToCodeForComments(full_name_parsed);

        // Might need this at least for the custom `[u]int64_t` typedefs.
        extra_headers.MergeFrom(self.TryFindHeadersForCppNameForSourceFile(full_name_parsed));

        if (new_method.IsOverloadedOperator())
            cpp_called_func = new_method.name; // Skip template arguments. We don't roundtrip this through cppdecl, since there are no template arguments to adjust.
        else
            cpp_called_func = full_name_fixed;

        if (new_method.comment)
        {
            c_comment = new_method.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from method `";
        c_comment += cpp_type_str_deco;
        c_comment += "::";
        c_comment += full_name_fixed_deco;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    void Generator::EmitFuncParams::SetFromParsedClassConvOp(Generator &self, const ClassEntity &new_class, const ClassConvOp &new_conv_op, std::span<const NamespaceEntity *const> new_using_namespace_stack)
    {
        mark_deprecated = new_conv_op.deprecation_message;
        silence_deprecation |= bool(new_conv_op.deprecation_message);

        mark_virtual = new_conv_op.is_virtual;

        const cppdecl::Type cpp_type = self.ParseTypeOrThrow(new_class.full_type);
        const std::string cpp_type_str = self.CppdeclToCode(cpp_type);
        const std::string cpp_type_str_deco = self.CppdeclToCodeForComments(cpp_type);

        AddThisParamFromParsedClass(self, new_class, {new_conv_op.is_const, new_conv_op.ref_qualifier == RefQualifier::rvalue});

        // Check that this is callable with no arguments.
        // The actual C++ at the time of writing doesn't allow any parameters at all, even with default arguments,
        //   but logically it makes no sense for me to require that, so I don't.
        if (!new_conv_op.IsCallableWithNumArgs(0))
            throw std::runtime_error("The conversion operator should have no parameters, but the parsed data has some.");

        SetReturnTypeFromParsedFunc(self, new_conv_op);
        const std::string target_cpp_type_str = self.CppdeclToCode(cpp_return_type);
        const std::string target_cpp_type_str_deco = self.CppdeclToCodeForComments(cpp_return_type);

        name.c = self.parsed_type_info.at(cpp_type_str).c_type_str;
        name.c += "_ConvertTo_";
        name.c += self.CppdeclToIdentifier(self.ParseTypeOrThrow(new_conv_op.return_type.canonical));

        name.cpp_for_interop = CInterop::MethodKinds::ConversionOperator{};

        cpp_called_func = "(" + target_cpp_type_str + ")(@this@)";

        if (new_conv_op.comment)
        {
            c_comment = new_conv_op.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// Generated from conversion operator `";
        c_comment += cpp_type_str_deco;
        c_comment += "::operator ";
        c_comment += target_cpp_type_str_deco;
        c_comment += "`.";

        using_namespace_stack = new_using_namespace_stack;
    }

    bool Generator::EmitFuncParams::SetAsFieldAccessor(Generator &self, const ClassEntity &new_class, const ClassField &new_field, FieldAccessorKind kind, CInterop::ClassField *interop_field)
    {
        const cppdecl::Type field_type = self.ParseTypeOrThrow(new_field.type.canonical);
        const cppdecl::QualifiedName class_cpp_type = self.ParseQualNameOrThrow(new_class.full_type);
        const std::string class_cpp_type_str = self.CppdeclToCode(class_cpp_type);
        const std::string class_cpp_type_str_deco = self.CppdeclToCodeForComments(class_cpp_type);

        cppdecl::QualifiedName full_name_parsed = self.ParseQualNameOrThrow(new_field.full_name);

        // Need this for `custom_typedef_for_uint64_t_pointing_to_size_t` to kick in.
        const std::string full_name_fixed = self.CppdeclToCode(full_name_parsed);
        const std::string full_name_fixed_deco = self.CppdeclToCodeForComments(full_name_parsed);

        extra_headers.MergeFrom(self.TryFindHeadersForCppNameForSourceFile(full_name_parsed));

        // Store the interop info.
        if (interop_field)
        {
            field_accessor.emplace();
            field_accessor->interop_field = interop_field;
            field_accessor->kind = kind;
        }

        auto SetFuncName = [&](std::string_view new_name)
        {
            name.c = self.parsed_type_info.at(class_cpp_type_str).c_type_str;
            name.c += '_';
            name.c += new_name;
            name.c += '_';
            name.c += self.CppdeclToIdentifier(full_name_parsed);
        };

        // Special handling for the function returning the array size, if this is an array.
        if (kind == FieldAccessorKind::array_size)
        {
            if (!field_type.Is<cppdecl::Array>())
                return false;

            AddThisParamFromParsedClass(self, new_class, ThisParamKind::Static{});

            // Not `int64_t`, that would be a bit silly, even if we use `--canonicalize-to-fixed-size-typedefs`.
            // In our standard containers we also use `size_t`. That's intended.
            cpp_return_type = cppdecl::Type::FromSingleWord("size_t");

            SetFuncName("GetSize");

            // I guess we could hardcode the returned size instead, but this looks better to me.
            extra_headers.stdlib_in_source_file.insert("type_traits"); // For `std::extent_v`.
            cpp_called_func = "std::extent_v<decltype(@this@::" + full_name_fixed + ")>";

            c_comment += "/// Returns the size of the array member of class `";
            c_comment += class_cpp_type_str_deco;
            c_comment += "` named `";
            c_comment += full_name_fixed_deco;
            c_comment += "`. The size is `";
            c_comment += self.CppdeclToCodeForComments(field_type.As<cppdecl::Array>()->size);
            c_comment += "`.";

            return true;
        }

        const bool is_const = kind == FieldAccessorKind::getter;
        if (!is_const && field_type.IsConstOrReference())
            return false; // No setters and mutable getters for const (and reference) fields.

        const bool is_setter = kind == FieldAccessorKind::setter;
        if (!is_setter)
            cpp_return_type = field_type;

        // Setters additionally need assignability.
        // This kinda makes the `.IsConstOrReference()` check above redundant, but I guess it's still an optimization, so let's keep it.
        // Also reject arrays, because those obviously can't be assigned, but `FindTypeTraits()` will throw on them.
        if (is_setter && (field_type.Is<cppdecl::Array>() || !self.FindTypeTraits(field_type).is_move_assignable))
            return false;

        AddThisParamFromParsedClass(self, new_class, {is_const, false, new_field.is_static});

        SetFuncName(is_setter ? "Set" : is_const ? "Get" : "GetMutable");

        const bool is_array = field_type.Is<cppdecl::Array>();

        if (is_setter)
        {
            // Add the parameter for the setter.
            params.push_back({
                .name = "value",
                .cpp_type = field_type,
            });

            // Not using `@this@.` here because this can be a static data member too!
            // And it's inserted automatically anyway.
            cpp_called_func = full_name_fixed + " = @1@";
        }
        else
        {
            // Replace arrays with references to their first elements.
            // Using a reference instead of a pointer here to get a nice comment telling the user that it'll never be null (which is true).

            if (is_array)
                cpp_return_type.RemoveModifier();

            // Make the return type a (possibly const) reference if not already a reference.
            if (!cpp_return_type.Is<cppdecl::Reference>())
            {
                if (is_const)
                {
                    // Arrays need to have constness inserted in the element type.
                    if (cpp_return_type.Is<cppdecl::Array>())
                        cpp_return_type.AddQualifiers(cppdecl::CvQualifiers::const_, 1);
                    else if (auto quals = cpp_return_type.GetQualifiersMut())
                        *quals |= cppdecl::CvQualifiers::const_;
                }
                cpp_return_type.AddModifier(cppdecl::Reference{});
            }

            cpp_called_func = full_name_fixed;
            if (is_array)
                cpp_called_func += "[0]";

            cpp_called_func_parens = {};
        }


        if (new_field.comment)
        {
            c_comment = new_field.comment->text_with_slashes;
            c_comment += '\n';
        }
        c_comment += "/// " + std::string(is_setter ? "Modifies" : is_const ? "Returns a pointer to" : "Returns a mutable pointer to") + " a member variable of class `";
        c_comment += class_cpp_type_str_deco;
        c_comment += "` named `";
        c_comment += full_name_fixed_deco;
        c_comment += "`.";
        if (is_array)
            c_comment += " This is a pointer to the first element of an array.";

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

        // Should we wrap the entire function body in deprecation-silencing pragmas?
        // We need to it for the entire body, because GCC apprently doesn't support injecting `_Pragma()` into arbitrary places in expressions (duh!).
        // We additionally update this variable based on the parameter types and the return type. If any of them needs this, we add the pragmas.
        bool should_silence_deprecation = params.silence_deprecation;

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
                EmittedFunctionStrings::ParamInfo &out_param_info = ret.params_info.emplace_back();

                out_param_info.fixed_name = !param.name.empty() ? param.name : is_this_param ? "_this" : "_" + std::to_string(i);
                const auto &param_name_fixed = out_param_info.fixed_name;

                std::string arg_expr;
                if (param.custom_argument_spelling)
                    arg_expr = param.custom_argument_spelling(param_name_fixed);

                // Remove top-level constness from parameter types, to simplify the rest of the code.
                // It seems we don't need to decay the params manually, the parser seems to already emit them in the decayed form.
                out_param_info.fixed_type = cppdecl::Type(param.cpp_type).RemoveQualifiers(cppdecl::CvQualifiers::const_);
                const cppdecl::Type param_cpp_type_fixed = out_param_info.fixed_type;

                if (param.kind == EmitFuncParams::Param::Kind::static_)
                {
                    // Nothing.
                }
                else if (!param.use_type_as_is)
                {
                    const BindableType &bindable_param_type = FindBindableType(param_cpp_type_fixed, param.remove_sugar);
                    if (!bindable_param_type.param_usage && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this type can't be bound as a parameter.");

                    const std::optional<std::string> useless_default_arg_message =
                        param.default_arg && bindable_param_type.is_useless_default_argument
                        ? bindable_param_type.is_useless_default_argument(param.default_arg->original_spelling)
                        : std::nullopt;

                    const bool has_useful_default_arg = param.default_arg && !useless_default_arg_message;
                    out_param_info.has_useful_default_arg = has_useful_default_arg;

                    if (has_useful_default_arg && !bindable_param_type.param_usage_with_default_arg)
                        throw std::runtime_error("Unable to bind this function because this parameter has a default argument, but the binding for its type doesn't support default arguments.");

                    if (has_useful_default_arg)
                        has_any_useful_default_args = true;

                    // Include C++ headers for the C++ parameter type. This usually isn't necessary, but helps
                    //   if the parsed code is sloppy about what headers it includes, and perhaps in some other cases
                    TryFindHeadersForCppTypeForSourceFile(param.cpp_type).InsertToFile(file);

                    const BindableType::ParamUsageWithDefaultArg *const param_usage_defarg = has_useful_default_arg || !bindable_param_type.param_usage ? &bindable_param_type.param_usage_with_default_arg.value() : nullptr;
                    const auto &param_usage = param_usage_defarg ? *param_usage_defarg : bindable_param_type.param_usage.value();

                    // Declare or include the dependencies of the parameter.
                    param_usage.AddDependenciesToFile(*this, file);

                    // Update the deprecation flag.
                    if (param_usage.silence_deprecation)
                        should_silence_deprecation = true;

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
                    else if (useless_default_arg_message && !useless_default_arg_message->empty())
                    {
                        // Note, this isn't printed if `useless_default_arg_message()` returns an empty string, which is a legal way to indicate
                        //   a useless default argument (as opposed to an empty optional, which marks the default argument as useful instead).
                        ret.comment += "/// Parameter `" + param_name_fixed + "` defaults to " + *useless_default_arg_message + " in C++.\n";
                    }

                    if (!param.custom_argument_spelling && param.kind != EmitFuncParams::Param::Kind::static_ && !param.omit_from_call)
                        arg_expr = param_usage.CParamsToCpp(file.source, param_name_fixed, has_useful_default_arg ? BindableType::ParamUsage::DefaultArgVar(param.default_arg->cpp_expr) : BindableType::ParamUsage::DefaultArgNone{});
                }
                else
                {
                    if (param.default_arg)
                        throw std::logic_error("Internal error: Bad usage: `EmitFuncParams::Param::use_type_as_is == true` is incompatible with a non-null `default_arg`.");

                    if (!param.custom_argument_spelling && param.kind != EmitFuncParams::Param::Kind::static_ && !param.omit_from_call)
                        arg_expr = param_name_fixed;

                    auto &new_param = new_func.params.emplace_back();
                    new_param.type = param_cpp_type_fixed;
                    new_param.name = cppdecl::QualifiedName::FromSingleWord(param_name_fixed);
                }

                if (param.omit_from_call)
                {
                    assert(arg_expr.empty());
                }
                else
                {
                    switch (param.kind)
                    {
                      case EmitFuncParams::Param::Kind::normal:
                        // Keep `arg_expr` as is.
                        break;
                      case EmitFuncParams::Param::Kind::this_ref:
                        assert(!arg_expr.empty());
                        break;
                      case EmitFuncParams::Param::Kind::static_:
                        assert(arg_expr.empty());
                        // Emit the type instead.
                        {
                            cppdecl::Type type_fixed = param.cpp_type;
                            // Remove reference-ness. At the time of writing this, those should always be references, but just in case,
                            //   I'm making this conditional and handle pointers too. Shrug.
                            if (type_fixed.Is<cppdecl::Reference>() || type_fixed.Is<cppdecl::Pointer>())
                                type_fixed.RemoveModifier();
                            arg_expr = CppdeclToCode(type_fixed);
                        }
                        break;
                    }
                }

                // Append the argument to the call, if enabled.
                if (!param.omit_from_call)
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


        ret.decl.name.parts.emplace_back(params.name.c);
        ret.decl.type.modifiers.emplace_back(std::move(new_func));

        // Handle the return type.
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

                // Include C++ headers for the C++ return type. This usually isn't necessary, but helps
                //   if the parsed code is sloppy about what headers it includes, and perhaps in some other cases.
                TryFindHeadersForCppTypeForSourceFile(params.cpp_return_type).InsertToFile(file);

                // Declare or include the dependencies of the return type.
                bindable_return_type.return_usage->AddDependenciesToFile(*this, file);

                // Update the deprecation flag.
                if (bindable_return_type.return_usage->silence_deprecation)
                    should_silence_deprecation = true;

                // Custom comment?
                if (bindable_return_type.return_usage->append_to_comment)
                {
                    ret.comment += bindable_return_type.return_usage->append_to_comment(""); // This is not a callback, so we pass an empty string.
                    ret.comment += '\n';
                }

                body_return = bindable_return_type.return_usage->MakeReturnExpr(file.source, body_return);

                c_return_type = bindable_return_type.return_usage->c_type;
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

            // Silence deprecation if needed.
            if (should_silence_deprecation)
            {
                ret.body += "    MRBINDC_IGNORE_DEPRECATION(\n";
                file.source.custom_headers.insert(GetInternalDetailsFile().header.path_for_inclusion);
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

            // End silencing deprecation.
            if (should_silence_deprecation)
                ret.body += "    ) // MRBINDC_IGNORE_DEPRECATION\n";

            ret.body += "}";
        }

        // Adjust the comment.
        generated_comments_adjuster.Adjust(ret.comment);

        { // Assemble the attributes.
            // The deprecation attribute.
            if (params.mark_deprecated)
            {
                ret.attributes += GetDeprecationMacro(file, *params.mark_deprecated);
                ret.attributes += params.mark_deprecated->empty() ? ' ' : '\n'; // Line break only if we have a message.
            }
        }

        return ret;
    }

    Generator::EmitFuncParams::Name Generator::GetMemoryDeallocFuncName(bool is_array, OutputFile *file)
    {
        if (file)
            file->header.custom_headers.insert(GetCommonPublicHelpersFile()->header.path_for_inclusion);
        EmitFuncParams::Name ret;
        ret.c = MakePublicHelperName(is_array ? "FreeArray" : "Free");
        ret.ignore_in_interop = true;
        return ret;
    }

    Generator::EmitFuncParams::Name Generator::GetMemoryAllocFuncName(bool is_array, OutputFile *file)
    {
        if (file)
            file->header.custom_headers.insert(GetCommonPublicHelpersFile()->header.path_for_inclusion);
        EmitFuncParams::Name ret;
        ret.c = MakePublicHelperName(is_array ? "AllocArray" : "Alloc");
        ret.ignore_in_interop = true;
        return ret;
    }

    Generator::EmitFuncParams::Name Generator::MakeMemberFuncName(std::string_view c_type_name, std::string func_name, std::optional<CInterop::MethodKindVar> interop_var) const
    {
        Generator::EmitFuncParams::Name ret;
        ret.c = c_type_name;
        ret.c += '_';
        ret.c += func_name;
        ret.cpp_for_interop = interop_var ? std::move(*interop_var) : CInterop::MethodKinds::Regular{.name = func_name, .full_name = std::move(func_name)};
        return ret;
    }

    Generator::EmitFuncParams::Name Generator::GetClassDestroyFuncName(std::string_view c_type_name, bool is_array) const
    {
        auto ret = MakeMemberFuncName(c_type_name, (is_array ? "DestroyArray" : "Destroy"));
        ret.ignore_in_interop = true;
        return ret;
    }

    Generator::EmitFuncParams::Name Generator::GetClassPtrOffsetFuncName(std::string_view c_type_name, bool is_const) const
    {
        auto ret = MakeMemberFuncName(c_type_name, (is_const ? "OffsetPtr" : "OffsetMutablePtr"));
        ret.ignore_in_interop = true;
        return ret;
    }

    Generator::EmitFuncParams::Name Generator::MakeFreeFuncName(std::string name, std::optional<CInterop::FuncKindVar> var) const
    {
        EmitFuncParams::Name ret;
        ret.c = MakePublicHelperName(name);
        ret.cpp_for_interop = var ? std::move(*var) : CInterop::FuncKinds::Regular{.name = name, .full_name = std::move(name)};
        return ret;
    }

    void Generator::EmitFunction(OutputFile &file, const EmitFuncParams &params)
    {
        try
        {
            EmittedFunctionStrings strings = EmitFunctionAsStrings(file, params);

            std::string new_decl_str = CppdeclToCode(strings.decl);

            file.header.contents += '\n';
            file.header.contents += strings.comment;
            file.header.contents += strings.attributes;
            file.header.contents += GetExportMacroForFile(file, false);
            file.header.contents += ' ';
            file.header.contents += new_decl_str;
            file.header.contents += ";\n";

            file.source.contents += '\n';
            file.source.contents += new_decl_str;
            file.source.contents += '\n';
            file.source.contents += strings.body;
            file.source.contents += '\n';

            // Some validation for interop that should happen even if we don't dump the interop description.
            if (!params.name.ignore_in_interop)
            {
                if (params.mark_as_returning_pointer_to_array && !params.cpp_return_type.Is<cppdecl::Pointer>())
                    throw std::runtime_error("The function is marked as returning a pointer to an array element, but the return type isn't a pointer.");

                for (std::size_t i = 0; i < params.params.size(); i++)
                {
                    if (params.params[i].mark_as_pointer_to_array && !params.params[i].cpp_type.Is<cppdecl::Pointer>())
                        throw std::runtime_error("The parameter " + std::to_string(i) + " is marked as a pointer to an array element, but the parameter type isn't a pointer.");
                }
            }

            // Dump function description!
            if (output_desc && !params.name.ignore_in_interop)
            {
                const bool is_member = !params.params.empty() && (params.params.front().kind == EmitFuncParams::Param::Kind::this_ref || params.params.front().kind == EmitFuncParams::Param::Kind::static_);

                if (!is_member && params.mark_virtual)
                    throw std::runtime_error("Only class member functions can be marked virtual.");

                CInterop::BasicFuncLike *func_like = nullptr;

                if (is_member)
                {
                    // A member function, or possibly a field accessor.

                    CInterop::BasicClassMethodLike *method_like = nullptr;

                    if (params.field_accessor)
                    {
                        std::optional<CInterop::ClassField::Accessor> CInterop::ClassField::* accessor_memptr = nullptr;

                        switch (params.field_accessor->kind)
                        {
                            case EmitFuncParams::FieldAccessorKind::getter:         accessor_memptr = &CInterop::ClassField::getter_const;      break;
                            case EmitFuncParams::FieldAccessorKind::mutable_getter: accessor_memptr = &CInterop::ClassField::getter_mutable;    break;
                            case EmitFuncParams::FieldAccessorKind::setter:         accessor_memptr = &CInterop::ClassField::setter;            break;
                            case EmitFuncParams::FieldAccessorKind::array_size:     accessor_memptr = &CInterop::ClassField::getter_array_size; break;
                        }

                        std::optional<CInterop::ClassField::Accessor> &new_accessor = params.field_accessor->interop_field->*accessor_memptr;
                        if (new_accessor)
                            throw std::runtime_error("This function is a duplicate field accessor.");

                        method_like = &new_accessor.emplace();
                        func_like = method_like;
                    }
                    else
                    {
                        CInterop::ClassMethod &new_method = FindClassDescForInterop(params.params.front().cpp_type).methods.emplace_back();
                        func_like = &new_method;
                        method_like = &new_method;

                        new_method.var = std::get<CInterop::MethodKindVar>(params.name.cpp_for_interop); // If this throws, someone has set the wrong `cpp_for_interop` type.
                    }

                    assert(!params.params.empty());
                    method_like->is_static = params.params.front().kind == EmitFuncParams::Param::Kind::static_;
                    method_like->is_virtual = params.mark_virtual;
                }
                else if (auto method = std::get_if<CInterop::MethodKindVar>(&params.name.cpp_for_interop); method && std::holds_alternative<CInterop::MethodKinds::Constructor>(*method))
                {
                    // Custom behavior for constructors. Let them work without the static-member-function-like dummy function parameters.
                    // Determine the target class from the constructor return type.

                    CInterop::ClassMethod &new_method = FindClassDescForInterop(params.cpp_return_type).methods.emplace_back();
                    func_like = &new_method;

                    // Force insert the static-method-like dummy `this` parameter, for consistency.
                    func_like->params.insert(func_like->params.begin(), CInterop::FuncParam{
                        .cpp_type = CppdeclToCode(params.cpp_return_type),
                        .name = "_this",
                        .name_or_placeholder = "_this",
                        .is_this_param = true,
                    });

                    new_method.var = std::get<CInterop::MethodKindVar>(params.name.cpp_for_interop); // If this throws, someone has set the wrong `cpp_for_interop` type.
                    new_method.is_static = true; // Constructors are considered static.
                }
                else
                {
                    // A non-member function.

                    CInterop::Function &new_func = output_desc->functions.emplace_back();
                    func_like = &new_func;

                    new_func.output_file = MakeOutputFileDescForInterop(file);

                    // If this throws, someone has set the wrong `cpp_for_interop` type.
                    // If you get this on a constructor, you probably forgot to pass `CInterop::MethodKinds::Constructor{}` to `MakeMemberFuncName()`.
                    new_func.var = std::get<CInterop::FuncKindVar>(params.name.cpp_for_interop);
                }

                { // The comment.
                    assert(!params.c_comment.starts_with('\n'));
                    assert(!params.c_comment.ends_with('\n'));

                    func_like->comment.c_style = params.c_comment;
                    func_like->comment.c_style += '\n';
                }

                func_like->c_name = params.name.c;

                func_like->ret.cpp_type = CppdeclToCode(params.cpp_return_type);
                func_like->ret.uses_sugar = !params.remove_return_type_sugar && FindBindableType(params.cpp_return_type).return_usage.value().considered_sugar_for_interop;
                func_like->ret.is_array_pointer = params.mark_as_returning_pointer_to_array;

                // Parameters.
                func_like->params.reserve(params.params.size());
                assert(strings.params_info.size() == params.params.size());

                for (std::size_t i = 0; const EmitFuncParams::Param &input_param : params.params)
                {
                    CInterop::FuncParam &new_param = func_like->params.emplace_back();

                    const auto &fixed_param_type = strings.params_info[i].fixed_type;

                    new_param.cpp_type = CppdeclToCode(fixed_param_type);
                    new_param.name = input_param.name;
                    new_param.name_or_placeholder = strings.params_info[i].fixed_name;

                    if (input_param.default_arg)
                    {
                        new_param.default_arg_spelling = input_param.default_arg->original_spelling;
                        new_param.default_arg_affects_parameter_passing = strings.params_info[i].has_useful_default_arg;
                    }

                    // Here we need `!input_param.use_type_as_is`, otherwise `FindBindableType()` chokes on some C types (while it should be fed only C++ types),
                    //   that appear e.g. in the custom bindings of `std::function`.
                    new_param.uses_sugar = !input_param.remove_sugar && !input_param.use_type_as_is && FindBindableType(fixed_param_type).GetParamUsage(new_param.default_arg_affects_parameter_passing).considered_sugar_for_interop;

                    new_param.is_this_param = input_param.kind == EmitFuncParams::Param::Kind::this_ref || input_param.kind == EmitFuncParams::Param::Kind::static_;

                    new_param.is_array_pointer = params.params[i].mark_as_pointer_to_array;

                    i++;
                }

                // Deprecation attribute?
                func_like->is_deprecated = params.mark_deprecated;
            }
        }
        catch (std::exception &e)
        {
            std::throw_with_nested(std::runtime_error("While emitting C function `" + params.name.c + "`:"));
        }
    }

    void Generator::EmitClassMemberAccessors(OutputFile &file, const ClassEntity &new_class, const ClassField &new_field)
    {
        // Write the interop info.
        CInterop::ClassField *interop_field = nullptr;
        if (output_desc)
        {
            auto &class_desc = FindClassDescForInterop(ParseTypeOrThrow(new_class.full_type));
            interop_field = &class_desc.fields.emplace_back();

            interop_field->comment = MakeCommentForInterop(new_field.comment ? new_field.comment->text_with_slashes + '\n' : "");
            interop_field->is_static = new_field.is_static;
            interop_field->type = CppdeclToCode(ParseTypeOrThrow(new_field.type.canonical)); // Roundtrip the type to canonicalize it.
            interop_field->name = new_field.name;
            interop_field->full_name = new_field.full_name;
            // We COULD set `layout` too, but who needs it for opaque fields?
            // If you decide to write to it here, don't forget to change the comment on it to reflect that it can be set for opaque fields too.
        }

        for (auto kind :
            {
                EmitFuncParams::FieldAccessorKind::getter,
                EmitFuncParams::FieldAccessorKind::setter,
                EmitFuncParams::FieldAccessorKind::mutable_getter,
                EmitFuncParams::FieldAccessorKind::array_size,
            }
        )
        {
            EmitFuncParams emit;
            if (emit.SetAsFieldAccessor(*this, new_class, new_field, kind, interop_field))
                EmitFunction(file, emit);
        }
    }

    void Generator::EmitExposedStruct(OutputFile &file, std::string comment, const cppdecl::QualifiedName &cpp_type_name, std::string_view c_type_str, TypeSizeAndAlignment expected_size_and_alignment, std::function<void(EmitExposedStructFieldFunc emit_field)> func)
    {
        // Emit the comment, if any. This works fine even if the comment is empty, in which case it just inserts a separating newline.
        assert(!comment.starts_with('\n'));
        comment = '\n' + comment;
        EmitCommentLow(file.header, comment);

        // Generate description for interop.
        CInterop::TypeKinds::Class *class_desc = nullptr;
        if (output_desc)
        {
            class_desc = &CreateClassDescForInterop(cpp_type_name);
            class_desc->output_file = MakeOutputFileDescForInterop(file);
            class_desc->comment = MakeCommentForInterop(comment);
            class_desc->c_name = c_type_str;
            class_desc->kind = CInterop::ClassKind::exposed_struct;
            // `inheritance_info` remains empty, we don't support inheritance for exposed structs for now.
            // `fields` is set blow.
            // `methods` is filled when you call `EmitFunction()`.
            // `size_and_alignment` is set at the end, in case we need to compute it.
        }

        file.header.contents += "typedef struct " + std::string(c_type_str) + '\n';
        file.header.contents += "{\n";

        std::size_t total_size = 0;
        std::size_t total_alignment = 0;

        func([&](const cppdecl::Type &field_cpp_type, std::string field_comment, std::string field_name, TypeSizeAndAlignment field_expected_size_and_alignment, std::size_t field_expected_offset)
        {
            const bool is_first = total_size == 0;

            // Validate the field type.
            if (!FieldTypeUsableInSameLayoutStruct(field_cpp_type))
                throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: its member `" + field_name + "` has type `" + CppdeclToCode(field_cpp_type) + "` that's not suitable for being used directly in a C struct.");

            // Add the headers and/or forward-declarations for this field type.
            AddDependenciesToFileForFieldOfSameLayoutStruct(field_cpp_type, file);

            // Check size and alignment of the type against the reference values, if any.
            auto field_info = FindSameSizeAndAlignment(field_cpp_type);
            if (field_expected_size_and_alignment.size != std::size_t(-1) && field_expected_size_and_alignment.size != field_info.size)
                throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The byte size of member `" + field_name + "` doesn't match the expected value (expected " + std::to_string(field_expected_size_and_alignment.size) + " but got " + std::to_string(field_info.size) + ").");
            if (field_expected_size_and_alignment.alignment != std::size_t(-1) && field_expected_size_and_alignment.alignment != field_info.alignment)
                throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The alignment of member `" + field_name + "` doesn't match the expected value (expected " + std::to_string(field_expected_size_and_alignment.alignment) + " but got " + std::to_string(field_info.alignment) + ").");

            // Update the offset, and optionally check it against the expected value.
            total_size = (total_size + (field_info.alignment - 1)) / field_info.alignment * field_info.alignment;
            // Need to save this for later, to write into the interop description.
            const std::size_t field_offset = total_size;
            if (field_expected_offset != std::size_t(-1) && field_offset != field_expected_offset)
                throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The byte offset of member `" + field_name + "` doesn't match the expected value (expected " + std::to_string(field_expected_offset) + " but got " + std::to_string(field_offset) + ").");
            total_size += field_info.size;

            // Update the final alignment.
            if (field_info.alignment > total_alignment)
                total_alignment = field_info.alignment;


            // Actually emit the field:

            // The comment if any.
            if (!field_comment.empty())
            {
                assert(!field_comment.starts_with('\n'));
                field_comment = IndentString(field_comment, 1, true, false);
                // Insert the leading blank line if this isn't the first field. This makes things look nicer.
                if (!is_first)
                    field_comment = '\n' + field_comment;
                EmitCommentLow(file.header, field_comment);
            }

            cppdecl::Decl field_decl;
            // Don't care about `full_name`, that's only for static member variables anyway, and we only deal with non-static ones here.
            field_decl.name = cppdecl::QualifiedName::FromSingleWord(field_name);

            field_decl.type = field_cpp_type;
            ReplaceAllNamesInTypeWithCNames(field_decl.type);

            file.header.contents += "    " + CppdeclToCode(field_decl) + ";\n";


            // Save the description.
            if (class_desc)
            {
                CInterop::ClassField &new_field = class_desc->fields.emplace_back();
                new_field.comment = MakeCommentForInterop(field_comment);
                new_field.is_static = false;
                new_field.type = CppdeclToCode(field_cpp_type);
                new_field.name = field_name;
                new_field.full_name = field_name; // Same.
                // No accessors.
                new_field.layout.emplace();
                new_field.layout->byte_size = field_info.size;
                new_field.layout->byte_alignment = field_info.alignment;
                new_field.layout->byte_offset = field_offset;
            }
        });

        // Complain if no fields. C doesn't have empty structs.
        if (total_size == 0)
            throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The struct has no known fields. C doesn't support empty structures.");

        // Check the final alignment, if specified.
        if (expected_size_and_alignment.alignment != std::size_t(-1) && total_alignment != expected_size_and_alignment.alignment)
            throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The estimated alignment of the struct doesn't match the expected value (expected " + std::to_string(expected_size_and_alignment.alignment) + " but got " + std::to_string(total_alignment) + ").");

        // Check the final size, if specified.
        total_size = (total_size + (total_alignment - 1)) / total_alignment * total_alignment;
        if (expected_size_and_alignment.size != std::size_t(-1) && total_size != expected_size_and_alignment.size)
            throw std::runtime_error("In exposed C struct `" + std::string(c_type_str) + "`: The estimated byte size of the struct doesn't match the expected value (expected " + std::to_string(expected_size_and_alignment.size) + " but got " + std::to_string(total_size) + ").");

        file.header.contents += "} " + std::string(c_type_str) + ";\n";

        // Lastly, finalize the interop description.
        if (class_desc)
        {
            auto &size_and_alignment = class_desc->size_and_alignment.emplace();
            size_and_alignment.size = total_size;
            size_and_alignment.alignment = total_alignment;
        }
    }

    void Generator::EmitEnum(OutputFile &file, std::string comment, const cppdecl::QualifiedName &cpp_enum_type, std::string_view c_enum_name, std::string_view cpp_underlying_type, std::function<void(EmitEnumFunc emit_elem)> func)
    {
        // Emit the comment, if any. This works fine even if the comment is empty, in which case it just inserts a separating newline.
        assert(!comment.starts_with('\n'));
        comment = '\n' + comment;
        EmitCommentLow(file.header, comment);

        const cppdecl::Type parsed_cpp_underlying_type = ParseTypeOrThrow(std::string(cpp_underlying_type));
        const std::string cpp_underlying_type_str = CppdeclToCode(parsed_cpp_underlying_type); // Roundtrip to canonicalize the name.


        // Should we also handle `[u]int32_t` here somehow? Maybe not.
        const bool is_default_underlying_type = cpp_underlying_type_str == "int" || cpp_underlying_type_str == "unsigned int";

        // This can crash if the underlying type isn't a known un
        auto underlying_type_info = data.platform_info.FindPrimitiveType(cpp_underlying_type_str);
        if (!underlying_type_info)
            throw std::runtime_error("Unknown underlying type `" + cpp_underlying_type_str + "` for enum `" + std::string(c_enum_name) + "`.");
        const bool is_signed = underlying_type_info->kind == PrimitiveTypeInfo::Kind::signed_integral;

        // Emit the interop description.
        CInterop::TypeKinds::Enum *enum_desc = nullptr;
        if (output_desc)
        {
            BindableType *bindable_type = FindBindableTypeOpt_Mutable(cppdecl::Type::FromQualifiedName(cpp_enum_type));
            if (!bindable_type)
                throw std::runtime_error("Trying to fill the interop description for enum `" + CppdeclToCode(cpp_enum_type) + "`, but it doesn't have a `BindableType` generated for it yet. That must be done first.");

            if (!std::holds_alternative<CInterop::TypeKinds::Invalid>(bindable_type->interop_info))
                throw std::runtime_error("Trying to fill the interop description for enum `" + CppdeclToCode(cpp_enum_type) + "`, but it already has some existing interop information associated with it.");

            enum_desc = &bindable_type->interop_info.emplace<CInterop::TypeKinds::Enum>();

            enum_desc->output_file = MakeOutputFileDescForInterop(file);
            enum_desc->comment = MakeCommentForInterop(comment);
            enum_desc->c_name = c_enum_name;
            enum_desc->underlying_type = cpp_underlying_type_str;
        }

        // Emit the enum header.
        if (is_default_underlying_type)
        {
            file.header.contents += "typedef enum " + std::string(c_enum_name) + "\n{\n";
        }
        else
        {
            // If the underlying type isn't `[unsigned] int`, we need special care to keep the type size same in C and C++.

            // Since the underlying type can be a `[u]int??_t` typedef (because of `--canonicalize-to-fixed-size-typedefs`), we might need a header!
            // The type must be parsed as a type, not a qualified name, because e.g. `unsigned int` isn't one.
            // Here I'm arbitrarily picking the return usage, it should be present for all the types that are simple enough to be used as underlying.
            auto usage = FindBindableType(parsed_cpp_underlying_type).return_usage.value();
            // Add the necessary headers. Maybe this is a standard typedef, or ours?
            usage.AddDependenciesToFile(*this, file, InsertHeadersMode::insert_to_header);

            // Can't use `en.canonical_underlying_type` here, because we might need to convert `[u]int64_t` to our own typedef.
            file.header.contents += "typedef " + CppdeclToCode(usage.c_type) + " " + std::string(c_enum_name) + ";\n";
        }

        bool first = true;
        func([&](std::string elem_comment, std::string_view elem_name, std::uint64_t elem_unsigned_value)
        {
            if (first)
            {
                first = false;

                if (!is_default_underlying_type)
                {
                    file.header.contents += "enum // " + std::string(c_enum_name) + "\n";
                    file.header.contents += "{\n";
                }
            }

            // The element comment, if any.
            if (!elem_comment.empty())
            {
                assert(!elem_comment.starts_with('\n'));
                EmitCommentLow(file.header, IndentString(elem_comment, 1, true, false));
            }

            file.header.contents += "    ";
            file.header.contents += c_enum_name;
            file.header.contents += '_';
            file.header.contents += elem_name;
            file.header.contents += " = ";
            file.header.contents += is_signed ? std::to_string(std::int64_t(elem_unsigned_value)) : std::to_string(elem_unsigned_value);
            file.header.contents += ",\n";

            // Add to the interop description.
            if (enum_desc)
            {
                CInterop::EnumElem &new_elem = enum_desc->elems.emplace_back();
                new_elem.comment = MakeCommentForInterop(elem_comment);
                new_elem.name = elem_name;
                new_elem.unsigned_value = elem_unsigned_value;
            }
        });

        // The dummy element if there are no real elements, because C enums can't be empty.
        if (first && is_default_underlying_type)
        {
            first = false;
            file.header.contents += "    ";
            file.header.contents += c_enum_name;
            file.header.contents += "_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.\n";
        }

        // Close the body.
        if (!first)
        {
            if (is_default_underlying_type)
                file.header.contents += "} " + std::string(c_enum_name) + ";\n";
            else
                file.header.contents += "};\n";
        }
    }

    HeapAllocatedClassBinder Generator::MakeParsedClassBinder(const std::string &parsed_full_type)
    {
        // Need to roundtrip the type string through cppdecl.
        const cppdecl::QualifiedName cpp_class_name = ParseQualNameOrThrow(parsed_full_type);
        const std::string cpp_class_name_str = CppdeclToCode(cpp_class_name);

        const ParsedTypeInfo &parsed_info = parsed_type_info.at(cpp_class_name_str);

        HeapAllocatedClassBinder binder;

        const auto &class_desc = std::get<ParsedTypeInfo::ClassDesc>(parsed_info.input_type);

        // We don't fill everything for now, just the bare minimum.
        binder.cpp_type_name = cpp_class_name;
        binder.c_type_name = parsed_info.c_type_str;
        binder.traits = class_desc.traits;

        // Fill the inheritance information.
        binder.inheritance_info = parsed_class_inheritance_info.at(cpp_class_name_str);

        binder.mark_polymorphic = class_desc.is_polymorphic;

        return binder;
    }

    CInterop::TypeKinds::Class &Generator::CreateClassDescForInterop(const cppdecl::QualifiedName &cpp_name)
    {
        if (!output_desc)
            throw std::logic_error("Internal error: Must not call `CreateClassDescForInterop()` when not emitting the output description for interop.");

        Generator::BindableType *bindable_type = FindBindableTypeOpt_Mutable(cppdecl::Type::FromQualifiedName(cpp_name));
        if (!bindable_type)
            throw std::runtime_error("Trying to fill the interop description for class `" + CppdeclToCode(cpp_name) + "` (heap-allocated opaque), but it doesn't have a `BindableType` generated for it yet. That must be done first.");

        if (!std::holds_alternative<CInterop::TypeKinds::Invalid>(bindable_type->interop_info))
            throw std::runtime_error("Trying to fill the interop description for class `" + CppdeclToCode(cpp_name) + "` (heap-allocated opaque), but it already has some existing interop information associated with it.");

        return bindable_type->interop_info.emplace<CInterop::TypeKinds::Class>();
    }

    CInterop::TypeKinds::Class &Generator::FindClassDescForInterop(cppdecl::Type cpp_type)
    {
        // Remove constness and reference-ness.
        if (cpp_type.Is<cppdecl::Reference>())
            cpp_type.RemoveModifier();
        cpp_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

        try
        {
            auto &binding = FindBindableType_Mutable(cpp_type);
            if (std::holds_alternative<CInterop::TypeKinds::Invalid>(binding.interop_info))
                throw std::logic_error("Internal error: The interop information for this type wasn't populated yet. Was this function called too early?");

            auto class_info = std::get_if<CInterop::TypeKinds::Class>(&binding.interop_info);
            if (!class_info)
                throw std::runtime_error("This type isn't a class.");

            return *class_info;
        }
        catch (...)
        {
            std::throw_with_nested(std::runtime_error("While trying to find a description of type `" + CppdeclToCode(cpp_type) + "` for interop purposes:"));
        }
    }

    // This fills `parsed_type_info` with the knowledge about all parsed types.
    struct Generator::VisitorRegisterKnownTypes : Visitor
    {
        Generator &self;
        VisitorRegisterKnownTypes(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            cppdecl::Type parsed_type = self.ParseTypeOrThrow(cl.full_type);
            const std::string cpp_type_name = self.CppdeclToCode(parsed_type);

            auto [iter, is_new] = self.parsed_type_info.try_emplace(cpp_type_name);
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate type in `parsed_type_info`: " + cl.full_type);

            ParsedTypeInfo &info = iter->second;

            // Not using ReplaceAllNamesInTypeWithCNames()` here, because it's an overkill and requires the information that we're about to generate (though we could probably reorder things here).
            info.c_type_str = self.CppdeclToIdentifier(parsed_type);
            info.c_type = cppdecl::Type::FromSingleWord(info.c_type_str);

            { // Add this type to `types_bindable_with_same_address`.
                if (!parsed_type.IsOnlyQualifiedName())
                    throw std::runtime_error("Expected a parsed class type name to be only a qualified name, but got: `" + cl.full_type + "`.");

                self.AddNewTypeBindableWithSameAddress(parsed_type.simple_type.name, {
                    .declared_in_file = [&ret = self.GetOutputFile(cl.declared_in_file)]() -> auto & {return ret;}, // No point in being lazy here.
                    .forward_declaration = MakeStructForwardDeclarationNoReg(info.c_type_str),
                });
            }

            ParsedTypeInfo::ClassDesc &class_info = info.input_type.emplace<ParsedTypeInfo::ClassDesc>();
            class_info.parsed = &cl;
            class_info.is_polymorphic = cl.is_polymorphic;
            class_info.is_abstract = cl.is_abstract;
            class_info.is_standard_layout = cl.is_standard_layout;
            class_info.is_trivially_copyable = cl.is_trivially_copyable;
            class_info.is_same_layout_struct = self.same_layout_struct_filter.Contains(cpp_type_name);

            if (class_info.is_same_layout_struct)
            {
                // If the class wants the matching layout, make sure it qualifies for that.
                // We do some basic checks here, and later we'll also check the non-static data member types.

                // Must be trivially copyable.
                if (!class_info.is_trivially_copyable)
                    throw std::runtime_error("The class `" + cpp_type_name + "` is whitelisted by `--expose-as-struct`, but it doesn't qualify for that because it is not trivially-copyable.");
                // Must be standard-layout.
                if (!class_info.is_standard_layout)
                    throw std::runtime_error("The class `" + cpp_type_name + "` is whitelisted by `--expose-as-struct`, but it doesn't qualify for that because it doesn't satisfy `std::is_standard_layout`.");
                // Must have no bases. I ain't dealing with those.
                if (!class_info.parsed->bases.empty())
                    throw std::runtime_error("The class `" + cpp_type_name + "` is whitelisted by `--expose-as-struct`, but it has a base class. This flag only supports the structs/classes with no base classes.");
            }

            bool has_by_value_assignment = false;

            // Check what constructors and assignments we have.
            for (const auto &member_var : cl.members)
            {
                std::visit(Overload{
                    [&](const ClassField &) {},
                    [&](const ClassCtor &ctor)
                    {
                        if (class_info.is_abstract)
                            return; // Abstract classes always count as non-constructible.

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
                            if (ctor.is_trivial)
                                class_info.traits.is_trivially_default_constructible = true;
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
                        if (class_info.is_abstract && !dtor.is_virtual)
                            return; // Don't allow calling non-virtual destructors on abstract classes.

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
        }

        // void Visit(const FuncEntity &func) override
        // {

        // }

        void Visit(const EnumEntity &en) override
        {
            cppdecl::Type parsed_type = self.ParseTypeOrThrow(en.full_type);

            auto [iter, is_new] = self.parsed_type_info.try_emplace(self.CppdeclToCode(parsed_type));
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate type in input: " + en.full_type);

            ParsedTypeInfo &info = iter->second;

            // Not using ReplaceAllNamesInTypeWithCNames()` here, because it's an overkill and requires the information that we're about to generate (though we could probably reorder things here).
            info.c_type_str = self.CppdeclToIdentifier(parsed_type);
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
        // This fills `most_derived_info.bases_indirect` and `most_derived_info.bases_indirect_true_virtual`.
        auto RecurseIntoDirectBase = [&](auto &self, CInterop::InheritanceInfo &most_derived_info, const std::string &cpp_base_name, CInterop::InheritanceInfo::Kind kind) -> void
        {
            if (kind == CInterop::InheritanceInfo::Kind::true_virt)
            {
                if (!most_derived_info.bases_indirect_true_virtual.Insert(cpp_base_name))
                    return; // Duplicate true virtual base, don't recurse further.
            }

            const CInterop::InheritanceInfo &base_info = parsed_class_inheritance_info.at(cpp_base_name);

            // Recurse.
            for (const auto &cpp_base_of_base_name : base_info.bases_direct_combined.Vec())
            {
                self(
                    self,
                    most_derived_info,
                    cpp_base_of_base_name,
                    kind == CInterop::InheritanceInfo::Kind::ambiguous ? CInterop::InheritanceInfo::Kind::ambiguous :
                        base_info.bases_direct_combined.Map().at(cpp_base_of_base_name) ? CInterop::InheritanceInfo::Kind::true_virt :
                        kind == CInterop::InheritanceInfo::Kind::true_virt || kind == CInterop::InheritanceInfo::Kind::virt_path ? CInterop::InheritanceInfo::Kind::virt_path :
                        CInterop::InheritanceInfo::Kind::non_virt
                );
            }

            { // Handle self. This can be done before or after recursion to affect the (purely decorative) base class order reported to the user. Currently I like this order more.
                auto [kind_ref, is_new] = most_derived_info.bases_indirect.TryEmplace(cpp_base_name, kind);

                // Make ambiguous on inheritance kind mismatch.
                // When `kind == ambiguous`, this ends up unconditionally setting the resulting kind to `ambiguous` as well, which is what we want.
                // When `kind == true_virt`, we've already checked above that we aren't revisiting a true virtual base, so we don't need any custom behavior here.
                if (!is_new || kind_ref != kind)
                    kind_ref = CInterop::InheritanceInfo::Kind::ambiguous;
            }
        };

        // At most one of `cl`, `cpp_type_name` can be empty. Then it's reconstructed from the other parameter.
        auto InsertNewClass = [&](auto &self, const ClassEntity *cl, std::string cpp_type_name) -> void
        {
            // Reconstruct the missing parameter from another one, either one or the other.
            if (!cl)
            {
                auto iter = parsed_type_info.find(cpp_type_name);
                if (iter == parsed_type_info.end())
                    throw std::runtime_error("Unknown class in the inheritance hierarchy: `" + cpp_type_name + "`.");

                auto class_desc = std::get_if<ParsedTypeInfo::ClassDesc>(&iter->second.input_type);
                if (!class_desc)
                    throw std::runtime_error("Found a type in the inheritance hierarchy that isn't a class: `" + cpp_type_name + "`.");

                cl = class_desc->parsed;
            }
            else if (cpp_type_name.empty())
            {
                // Roundtrip the type name through cppdecl.
                cppdecl::Type parsed_type = ParseTypeOrThrow(cl->full_type);
                cpp_type_name = CppdeclToCode(parsed_type);
            }

            auto [info_iter, info_is_new] = parsed_class_inheritance_info.try_emplace(cpp_type_name);
            if (!info_is_new)
                return;

            CInterop::InheritanceInfo &info = info_iter->second;

            // Set up `info.bases_direct_combined`, and also recursively initialize the bases.
            for (const ClassBase &parsed_base : cl->bases)
            {
                const std::string cpp_base_name = CppdeclToCode(ParseTypeOrThrow(parsed_base.type.canonical));

                // Initialize recursively.
                self(self, nullptr, cpp_base_name);

                // Add to the direct map. (This one doesn't depend on the base being visited.)
                info.bases_direct_combined.TryEmplace(cpp_base_name, parsed_base.is_virtual);

                // Visit bases recursively.
                // This is a separate purely for simplicity. We could merge them, even though this one isn't limited to process each class once
                //   (we could keep track of that still, and only run a part of the code when revisiting a class).
                RecurseIntoDirectBase(RecurseIntoDirectBase, info, cpp_base_name, parsed_base.is_virtual ? CInterop::InheritanceInfo::Kind::true_virt : CInterop::InheritanceInfo::Kind::non_virt);
            }
        };

        // The first pass fills the bases information.
        for (const auto &[name, info] : parsed_type_info)
        {
            if (const auto &cl = std::get_if<ParsedTypeInfo::ClassDesc>(&info.input_type))
                InsertNewClass(InsertNewClass, cl->parsed, "");
        }

        // As a second pass, set the reverse mappings.
        for (const auto &[name, info] : parsed_class_inheritance_info)
        {
            // Direct.
            for (const auto &[base, is_virt] : info.bases_direct_combined.Map()) // The iteration order doesn't matter here.
            {
                if (!is_virt)
                    parsed_class_inheritance_info.at(base).derived_direct_nonvirtual.insert(name);
            }

            // Indirect.
            for (const auto &[base, kind] : info.bases_indirect.Map()) // The iteration order doesn't matter here.
                parsed_class_inheritance_info.at(base).derived_indirect.try_emplace(name, kind);
        }
    }

    // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
    struct Generator::VisitorRegisterOverloadedNames : Visitor
    {
        Generator &self;
        VisitorRegisterOverloadedNames(Generator &self) : self(self) {}

        void Visit(const ClassEntity &cl) override
        {
            const auto &info = self.parsed_type_info.at(self.CppdeclToCode(self.ParseTypeOrThrow(cl.full_type)));
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
                        // Don't emit constructors for abstract classes.
                        // We've already set the `is_..._constructable` bools in their traits to false, but we must also disable those separately.
                        // Not only here, but also when emitting them later. Sync the two.
                        if (std::get<ParsedTypeInfo::ClassDesc>(info.input_type).is_abstract)
                            return;

                        // Special member functions have fixed names.
                        // Note that the same goes for the default constructors. But here we intentionally only handle the ones with actually zero parameters, and not the ones with all arguments defaulted.
                        // Note that this logic must be synced with how the default constructors are emitted.
                        if (elem.kind != CopyMoveKind::none || elem.params.empty())
                            return;

                        std::string name = c_type_str + "_Construct";

                        std::string fallback_name;
                        if (elem.template_args)
                            fallback_name = self.CppdeclToIdentifier(self.ParseQualNameOrThrow(name + *elem.template_args));
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassMethod &elem)
                    {
                        // Special assignments have fixed names.
                        if (elem.assignment_kind != CopyMoveKind::none)
                            return;

                        // Custom logic for overloaded operators that should be emitted as free functions.
                        if (elem.IsOverloadedOperator() && self.OverloadedOperatorShouldBeEmittedAsFreeFunction(elem.name))
                        {
                            auto [iter, is_new] = self.overloaded_names.try_emplace(&elem);
                            if (!is_new)
                                throw std::logic_error("Internal error: Duplicate overloaded function pointer.");

                            OverloadedName &ovl = iter->second;
                            ovl.name = self.MakeFreeFuncNameForOverloadedOperator(&cl, &elem, false);
                            ovl.fallback_name = self.MakeFreeFuncNameForOverloadedOperator(&cl, &elem, true);
                            // Don't set the parameters for those, as we already embed their types in those names.
                            return;
                        }

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
                            fallback_name = self.CppdeclToIdentifier(self.ParseQualNameOrThrow(name + std::string(elem.TemplateArguments())));
                        AddFunc(elem, std::move(name), std::move(fallback_name));
                    },
                    [&](const ClassConvOp &elem)
                    {
                        // Those have fixed names.
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
            // Custom logic for overloaded operators.
            if (func.IsOverloadedOperator())
            {
                auto [iter, is_new] = self.overloaded_names.try_emplace(&func);
                if (!is_new)
                    throw std::logic_error("Internal error: Duplicate overloaded function pointer.");

                OverloadedName &ovl = iter->second;
                ovl.name = self.MakeFreeFuncNameForOverloadedOperator(nullptr, &func, false);
                ovl.fallback_name = self.MakeFreeFuncNameForOverloadedOperator(nullptr, &func, true);
                // Don't set the parameters for those, as we already embed their types in those names.
                return;
            }

            auto [iter, is_new] = self.overloaded_names.try_emplace(&func);
            if (!is_new)
                throw std::logic_error("Internal error: Duplicate overloaded function pointer.");

            OverloadedName &ovl = iter->second;
            ovl.name = self.CppdeclToIdentifier(self.ParseQualNameOrThrow(func.qual_name));
            ovl.fallback_name = self.CppdeclToIdentifier(self.ParseQualNameOrThrow(func.full_qual_name));
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
                bool need_cvref = false;

                auto ParamTypeToString = [&](const cppdecl::Type &type)
                {
                    if (need_cvref)
                    {
                        return CppdeclToIdentifier(type);
                    }
                    else
                    {
                        // Remove cvref. (Intentionally only const? Don't even want to think about how I should handle volatiile.)
                        cppdecl::Type fixed_type = type;
                        if (fixed_type.Is<cppdecl::Reference>())
                            fixed_type.RemoveModifier();
                        fixed_type.RemoveQualifiers(cppdecl::CvQualifiers::const_);

                        return CppdeclToIdentifier(fixed_type);
                    }
                };

                // First try without cvref.
                bool have_different_types = true;
                {
                    // Somewhat unusually, here we need ALL parameter types to be unique (ignoring cvref), not just some.
                    // If only some of them are unique, it's still possible to get an ambiguity later. See the testcase `f()` in `test_overloads.h`.

                    std::unordered_set<std::string> type_strings;

                    for (const auto &subelem : elem.second)
                    {
                        std::string this_type_string;
                        if (subelem->second.num_params_consumed < subelem->second.params.size())
                            this_type_string = ParamTypeToString(subelem->second.params[subelem->second.num_params_consumed].cpp_type);

                        // Still insert even if the string is empty.

                        if (!type_strings.insert(std::move(this_type_string)).second)
                        {
                            have_different_types = false;
                            break;
                        }
                    }
                }

                if (!have_different_types)
                {
                    // Try again with cvref.
                    need_cvref = true;

                    std::string first_type_str;
                    const auto &first_elem = *elem.second.front();
                    if (first_elem.second.num_params_consumed < first_elem.second.params.size())
                        first_type_str = ParamTypeToString(first_elem.second.params[first_elem.second.num_params_consumed].cpp_type);

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
                }

                // Can't `continue;` here yet even if `have_different_types == false`. We still need to increment `num_params_consumed` below.

                for (const auto &subelem : elem.second)
                {
                    if (subelem->second.num_params_consumed < subelem->second.params.size())
                    {
                        if (have_different_types)
                        {
                            subelem->second.name += '_';
                            subelem->second.name += ParamTypeToString(subelem->second.params[subelem->second.num_params_consumed].cpp_type);
                        }
                        any_progress = true;
                    }

                    subelem->second.num_params_consumed++;
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

        // This visitors has to act in two passes.
        // The first pass defines enums and declares (or defines when using `--expose-as-struct`) structs.
        // The second pass declares "member" functions.
        // The two-pass solution seems to be the only option, because of the following:
        //     struct A
        //     {
        //         struct B
        //         {
        //             A a();
        //         };
        //
        //         B b();
        //     };
        //
        // Here, assuming `--expose-as-struct` whitelists both structs, both need to be defined before both member functions are declared.
        //
        // I initially tried to run the two passes separately for each non-nested class, but this breaks on the following usecase:
        //     template <bool X>
        //     struct C
        //     {
        //         int bleh;
        //         C<!X> blah();
        //     };
        //
        // So instead we have to run those two passes separately over the entire input.

        void VisitEarly(const ClassEntity &cl) override
        {
            try
            {
                OutputFile &file = self.GetOutputFile(cl.declared_in_file);

                { // In the source file, include the C++ header where this class is declared.
                    auto headers = self.ParsedFilenameToRelativeNamesForInclusion(cl.declared_in_file);
                    file.source.custom_headers.insert(std::make_move_iterator(headers.begin()), std::make_move_iterator(headers.end()));
                }

                const cppdecl::QualifiedName cpp_class_name = self.ParseQualNameOrThrow(cl.full_type);
                const std::string cpp_class_name_str = self.CppdeclToCode(cpp_class_name);
                const std::string cpp_class_name_str_deco = self.CppdeclToCodeForComments(cpp_class_name);

                const ParsedTypeInfo &parsed_type_info = self.parsed_type_info.at(cpp_class_name_str);
                const ParsedTypeInfo::ClassDesc &parsed_class_info = std::get<ParsedTypeInfo::ClassDesc>(parsed_type_info.input_type);

                // Forward-declaring in the middle of the file, not in the forward-declarations section.
                // Firstly it looks better. But also because we're inserting a comment, and wouldn't look good in the dense forward declarations list.

                std::string class_comment_str;
                { // Make the comment for the class.
                    if (cl.comment)
                    {
                        class_comment_str += cl.comment->text_with_slashes;
                        class_comment_str += '\n';
                    }

                    class_comment_str += "/// Generated from class `" + cpp_class_name_str_deco + "`.\n";

                    const CInterop::InheritanceInfo &inheritance_info = self.parsed_class_inheritance_info.at(cpp_class_name_str);

                    { // The part of the comment explaning the inheritance graph.
                        auto PrintBasesOrDerived = [&](bool print_derived)
                        {
                            auto MakeNameDecorative = [&](const std::string &name)
                            {
                                return self.CppdeclToCodeForComments(self.ParseQualNameOrThrow(name));
                            };

                            if (inheritance_info.HaveAnyIndirect(print_derived))
                            {
                                class_comment_str += (print_derived ? "/// Derived classes:\n" : "/// Base classes:\n");

                                { // Virtual bases, or along a virtual path.
                                    std::string true_virt;
                                    std::string virt_path;

                                    inheritance_info.ForEachIndirect(print_derived, [&](const auto &other)
                                    {
                                        if (other.second != CInterop::InheritanceInfo::Kind::true_virt && other.second != CInterop::InheritanceInfo::Kind::virt_path)
                                            return;

                                        (other.second == CInterop::InheritanceInfo::Kind::true_virt ? true_virt : virt_path) += "///     `" + MakeNameDecorative(other.first) + "`\n";
                                    });

                                    if (!true_virt.empty())
                                        class_comment_str += "///   Virtual:\n" + true_virt;
                                    if (!virt_path.empty())
                                        class_comment_str += "///   Non-virtual along a virtual path:\n" + virt_path;
                                }

                                { // Non-virtual bases.
                                    std::string dir;
                                    std::string indir;

                                    inheritance_info.ForEachIndirect(print_derived, [&](const auto &other)
                                    {
                                        if (other.second != CInterop::InheritanceInfo::Kind::non_virt)
                                            return;

                                        std::string &str = inheritance_info.HaveDirectNonVirtualNamed(print_derived, other.first) ? dir : indir;

                                        str += "///     `" + MakeNameDecorative(other.first) + "`\n";
                                    });

                                    if (!dir.empty())
                                        class_comment_str += "///   Direct: (non-virtual)\n" + dir;
                                    if (!indir.empty())
                                        class_comment_str += "///   Indirect: (non-virtual)\n" + indir;
                                }

                                // Ambiguous.
                                if (inheritance_info.HaveIndirectOfKind(print_derived, CInterop::InheritanceInfo::Kind::ambiguous))
                                {
                                    class_comment_str += "///   Ambiguous:\n";

                                    inheritance_info.ForEachIndirect(print_derived, [&](const auto &other)
                                    {
                                        if (other.second != CInterop::InheritanceInfo::Kind::ambiguous)
                                            return;

                                        class_comment_str += "///     `" + MakeNameDecorative(other.first) + "`\n";
                                    });
                                }
                            }
                        };

                        PrintBasesOrDerived(false);
                        PrintBasesOrDerived(true);
                    }
                }

                if (!parsed_class_info.is_same_layout_struct)
                {
                    // The forward-declaration.
                    self.MakeParsedClassBinder(cl.full_type).EmitForwardDeclaration(self, file, class_comment_str);
                }
                else
                {
                    self.EmitExposedStruct(
                        file,
                        class_comment_str,
                        cpp_class_name,
                        parsed_type_info.c_type_str,
                        {.size = cl.type_size, .alignment = cl.type_alignment},
                        [&](EmitExposedStructFieldFunc emit_field)
                        {
                            for (const auto &member : cl.members)
                            {
                                const ClassField *field = std::get_if<ClassField>(&member);
                                if (!field || field->is_static)
                                    continue;

                                emit_field(
                                    self.ParseTypeOrThrow(field->type.canonical),
                                    field->comment ? field->comment->text_with_slashes + '\n' : "",
                                    field->name,
                                    {.size = field->type_size, .alignment = field->type_alignment},
                                    field->byte_offset
                                );
                            }
                        }
                    );
                }
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While binding class `" + cl.full_type + "` (early pass):"));
            }
        }

        void Visit(const ClassEntity &cl) override
        {
            try
            {
                OutputFile &file = self.GetOutputFile(cl.declared_in_file);

                { // In the source file, include the C++ header where this class is declared.
                    auto headers = self.ParsedFilenameToRelativeNamesForInclusion(cl.declared_in_file);
                    file.source.custom_headers.insert(std::make_move_iterator(headers.begin()), std::make_move_iterator(headers.end()));
                }

                const cppdecl::QualifiedName cpp_class_name = self.ParseQualNameOrThrow(cl.full_type);
                const std::string cpp_class_name_str = self.CppdeclToCode(cpp_class_name);
                const std::string cpp_class_name_str_deco = self.CppdeclToCodeForComments(cpp_class_name);

                const ParsedTypeInfo &parsed_type_info = self.parsed_type_info.at(cpp_class_name_str);
                const ParsedTypeInfo::ClassDesc &parsed_class_info = std::get<ParsedTypeInfo::ClassDesc>(parsed_type_info.input_type);

                const CInterop::InheritanceInfo &inheritance_info = self.parsed_class_inheritance_info.at(cpp_class_name_str);


                // If this is a same-layout struct that is trivially-default-constructible, we don't want the default constructor (and its array version).
                const bool skip_trivial_default_ctor = parsed_class_info.is_same_layout_struct && parsed_class_info.traits.is_trivially_default_constructible;

                // We need to do stuff on the first default ctor emitted (there can be multiple such ctors, because of default arguments).
                bool emitted_any_default_ctor = false;

                bool emitted_misc_functions = false;

                // This emits some additional functions. Repeated calls have no effect.
                auto EmitMiscFunctionsOnce = [&]
                {
                    if (emitted_misc_functions)
                        return;

                    emitted_misc_functions = true;

                    auto binder = self.MakeParsedClassBinder(cl.full_type);

                    // Elementwise constructor for aggregates.
                    if (
                        cl.is_aggregate &&
                        // If some of the fields are missing from the parser output, we won't be able to initialize elementwise anyway.
                        // The parser could in theory still emit them with some flag, and then here, if they are default-constructible, we could
                        //   emit `{}` placeholders for them here (or use designated initialization and skip them here). But all this sounds too complicated,
                        //   and currently we have no need for this.
                        !cl.some_nonstatic_data_members_skipped &&
                        // We reject same-layout structs because the C users can construct those directly.
                        !parsed_class_info.is_same_layout_struct &&
                        // For now we reject classes with any bases, for simplicity.
                        cl.bases.empty()
                    )
                    {
                        bool all_members_ok = true;

                        struct MemberDesc
                        {
                            cppdecl::Type type;
                            std::string name;
                        };
                        std::vector<MemberDesc> member_descs;

                        for (const ClassMemberVariant &var : cl.members)
                        {
                            std::visit(Overload{
                                [&](const ClassField &elem)
                                {
                                    try
                                    {
                                        if (elem.is_static)
                                            return; // Don't care about the static ones.

                                        cppdecl::Type member_type = self.ParseTypeOrThrow(elem.type.canonical);

                                        // `FindTypeTraits()` chokes on arrays, so check for them here.
                                        if (member_type.Is<cppdecl::Array>())
                                        {
                                            all_members_ok = false;
                                            return;
                                        }

                                        // Check that this field type is possible to pass in the first place. If not, there's nothing we can do.
                                        TypeTraits traits = self.FindTypeTraits(member_type);
                                        if (!traits.IsDefaultOrCopyOrMoveConstructible())
                                        {
                                            all_members_ok = false;
                                            return;
                                        }

                                        member_descs.push_back({.type = std::move(member_type), .name = elem.name});
                                    }
                                    catch (...)
                                    {
                                        std::throw_with_nested(std::runtime_error("While checking field `" + elem.full_name + "` of an aggregate class:"));
                                    }
                                },
                                [&](const ClassCtor &) {},
                                [&](const ClassMethod &) {},
                                [&](const ClassConvOp &) {},
                                [&](const ClassDtor &) {},
                            }, var);

                            if (!all_members_ok)
                                break;
                        }

                        // Emit the elementwise constructor, if...
                        if (
                            // All members can be passed via parameters,
                            all_members_ok &&
                            // and we have at least one member (because otherwise the default ctor is sufficient),
                            !member_descs.empty() &&
                            // and we either either don't have too many fields, OR the class isn't default constructible, so we have to ignore the limit.
                            // This limit is configurable with a command-line flag.
                            (
                                !parsed_class_info.traits.is_default_constructible ||
                                member_descs.size() <= self.max_num_fields_for_default_constructible_aggregate_init
                            )
                        )
                        {
                            EmitFuncParams emit;
                            emit.c_comment = "/// Constructs `" + cpp_class_name_str_deco + "` elementwise.";
                            emit.name = binder.MakeMemberFuncName(self, "ConstructFrom", CInterop::MethodKinds::Constructor{});
                            emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_class_name);
                            for (const MemberDesc &member_desc : member_descs)
                            {
                                // I'm not entirely sure if I should desugar those parameters, or if sugared ones are fine.
                                // I think they are fine, they definitely look more convenient to me.
                                emit.params.push_back({
                                    .name = member_desc.name,
                                    .cpp_type = member_desc.type,
                                });
                            }
                            emit.cpp_called_func = cpp_class_name_str;
                            emit.cpp_called_func_parens = {"{", "}"}; // Don't rely on C++20 `(...)` aggregate initialization syntax.
                            self.EmitFunction(file, emit);
                        }
                    }

                    // Pointer offsetting.
                    // Don't need it for the same-layout structs, as the user can do that manually.
                    if (!parsed_class_info.is_same_layout_struct)
                    {
                        self.EmitFunction(file, binder.PrepareFuncOffsetPtr(self, true));
                        self.EmitFunction(file, binder.PrepareFuncOffsetPtr(self, false));
                    }

                    { // Upcasts and downcasts.
                        for (bool is_downcast : {false, true})
                        {
                            inheritance_info.ForEachIndirect(is_downcast, [&](const auto &target)
                            {
                                if (target.second == CInterop::InheritanceInfo::Kind::ambiguous)
                                    return;

                                // The C type name of the target.
                                const cppdecl::QualifiedName target_cpp_qual_name = self.ParseQualNameOrThrow(target.first);
                                const std::string target_c_name = self.CppTypeNameToCTypeName(target_cpp_qual_name);

                                // Do not reorder, because we stop on the first successfully generated upcast, and the static one should have precedence.
                                for (bool is_dynamic : {false, true})
                                {
                                    // Virtual downcasts must be dynamic.
                                    if (is_downcast && !is_dynamic && (target.second == CInterop::InheritanceInfo::Kind::true_virt || target.second == CInterop::InheritanceInfo::Kind::virt_path))
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
                                        if (acts_on_ref && !is_downcast)
                                            continue; // Upcasts shouldn't need a separate version that acts on references, since those should never fail.

                                        // Must include the type definition in the implementation file.
                                        // Otherwise the C++ type might not even be declared. We only automatically declare the C type in the public header.
                                        self.TryFindHeadersForCppNameForSourceFile(target_cpp_qual_name).InsertToFile(file);

                                        for (bool is_const : {true, false})
                                        {
                                            EmitFuncParams emit;

                                            emit.c_comment = "/// " + std::string(is_downcast ? "Downcasts" : "Upcasts") + " an instance of `" + cpp_class_name_str_deco + "` to " + (is_downcast ? "a derived class" : "its base class") + " `" + target.first + "`.";
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
                                            emit.name = binder.MakeMemberFuncName(
                                                self,
                                                std::string(is_const ? "" : "Mutable") +
                                                (!is_downcast ? "UpcastTo" : is_dynamic ? (acts_on_ref ? "DynamicDowncastToOrFail" : "DynamicDowncastTo") : "StaticDowncastTo") +
                                                "_" +
                                                target_c_name
                                            );
                                            // Hide from interop. Call those functions directly by their names if you need them.
                                            emit.name.ignore_in_interop = true;

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

                                            emit.cpp_called_func = std::string(is_dynamic ? "dynamic_cast" : "static_cast") + "<" + self.CppdeclToCode(emit.cpp_return_type) + ">";
                                            self.EmitFunction(file, emit);
                                        }
                                    }

                                    // Don't need more than one valid upcast.
                                    // Among other things, this means that a dynamic upcast acting on references (as opposed to pointers)
                                    //   will never be generated.
                                    if (!is_downcast)
                                        break;
                                }
                            });
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
                                if (parsed_class_info.is_same_layout_struct && !elem.is_static)
                                    return; // Don't need accessors for non-static fields if we've already emitted the proper struct above.

                                self.EmitClassMemberAccessors(file, cl, elem);
                            }
                            catch (...)
                            {
                                std::throw_with_nested(std::runtime_error("While binding field `" + elem.full_name + "`:"));
                            }
                        },
                        [&](const ClassCtor &elem)
                        {
                            // Don't emit constructors for abstract classes.
                            // We've already set the `is_..._constructable` bools in their traits to false, but we must also disable those separately.
                            // Not only here, but also when collecting the overload names. Sync the two.
                            if (parsed_class_info.is_abstract)
                                return;

                            // Skip the copy/move constructors for same-layout structs. This is mentioned in the `--help` page.
                            // I guess the other constructors can be useful?
                            if (parsed_class_info.is_same_layout_struct && elem.kind != CopyMoveKind{})
                                return;

                            // Skip trivial default ctors for same-layout structs.
                            // Note that we only skip the true default ctors and not those with default arguments. This sounds like the most sensible thing to do.
                            if (skip_trivial_default_ctor && elem.params.empty())
                                return;

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
                                    HeapAllocatedClassBinder binder = self.MakeParsedClassBinder(cl.full_type);
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

                                    HeapAllocatedClassBinder binder = self.MakeParsedClassBinder(cl.full_type);
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
                                // Complain if a same-layout struct has a non-trivial assignment.
                                // We could support those, but it's easier not to.
                                if (parsed_class_info.is_same_layout_struct && elem.assignment_kind != CopyMoveKind{})
                                {
                                    if (elem.is_trivial_assignment)
                                        return;
                                    throw std::runtime_error("The type `" + cpp_class_name_str + "` is whitelisted by `--expose-as-struct`, but has a non-trivial assignment.");
                                }

                                // The copy assignments are not emitted. Instead the move assignments are rewritten as if they were accepting the parameter by value.
                                // We treat the (parsed) by-value assignments exactly the same as move assignments, generating the same code for both.
                                // We expect at most one of them (move and by-value) to exist, since having both leads to overload resolution errors when calling them anyway.
                                if (elem.assignment_kind == CopyMoveKind::copy)
                                    return;

                                // Don't emit assignments for abstract classes, since the way we bind them (with passing the class by value)
                                //   requires it to be copyable or movable.
                                // Maybe we could create alternative bindings for static classes, but honestly who cares about those, right?
                                if (elem.assignment_kind != CopyMoveKind::none && parsed_class_info.is_abstract)
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
                            // Complain if a same-layout struct has a non-trivial destructor.
                            // We could support those, but it's easier not to.
                            if (parsed_class_info.is_same_layout_struct)
                            {
                                if (elem.is_trivial)
                                    return;
                                throw std::runtime_error("The type `" + cpp_class_name_str + "` is whitelisted by `--expose-as-struct`, but has a non-trivial destructor.");
                            }

                            // Don't emit non-virtual destructors for abstract classes.
                            // This matches the fact that we set the `is_destructable` trait to false for those.
                            if (parsed_class_info.is_abstract && !elem.is_virtual)
                                return;

                            try
                            {
                                HeapAllocatedClassBinder binder = self.MakeParsedClassBinder(cl.full_type);
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

                // If we didn't emit those earlier, do it now.
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

                { // Include the C++ header where this function is declared.
                    auto headers = self.ParsedFilenameToRelativeNamesForInclusion(func.declared_in_file);
                    file.source.custom_headers.insert(std::make_move_iterator(headers.begin()), std::make_move_iterator(headers.end()));
                }

                EmitFuncParams params;
                params.SetFromParsedFunc(self, func, GetClassStack().size() > 0, GetNamespaceStack());
                self.EmitFunction(self.GetOutputFile(func.declared_in_file), params);
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While binding free function `" + func.full_qual_name + "`:"));
            }
        }

        void VisitEarly(const EnumEntity &en) override
        {
            OutputFile &file = self.GetOutputFile(en.declared_in_file);

            const cppdecl::QualifiedName parsed_type = self.ParseQualNameOrThrow(en.full_type);
            const std::string parsed_type_str = self.CppdeclToCode(parsed_type);

            const auto &c_type_str = self.parsed_type_info.at(parsed_type_str).c_type_str;

            self.EmitEnum(
                file,
                en.comment ? en.comment->text_with_slashes + '\n' : "",
                parsed_type,
                c_type_str,
                en.canonical_underlying_type,
                [&](EmitEnumFunc emit_elem)
                {
                    for (const auto &elem : en.elems)
                    {
                        emit_elem(
                            elem.comment ? elem.comment->text_with_slashes + '\n' : "",
                            elem.name,
                            elem.unsigned_value
                        );
                    }
                }
            );
        }

        // void Visit(const TypedefEntity &td) override
        // {

        // }
    };

    void Generator::Generate()
    {
        // If we're creating a desc json, fill it with basic platform information.
        if (output_desc)
        {
            output_desc->platform_info = data.platform_info;
        }

        { // Construct the `type_alt_spelling_to_canonical` mapping.
            for (const auto &elem : data.type_info)
            {
                for (const auto &sub_elem : elem.second)
                {
                    const cppdecl::Type sub_elem_type = ParseTypeOrThrow(sub_elem.first);

                    for (const auto &spelling : sub_elem.second.alt_spellings)
                    {
                        std::string spelling_str = CppdeclToCode(ParseTypeOrThrow(spelling.first));
                        if (!type_alt_spelling_to_canonical.try_emplace(std::move(spelling_str), sub_elem_type).second)
                            throw std::logic_error("Internal error: In input data, different types have the same non-canonical spelling: `" + spelling_str + "`."); // The `spelling_str` isn't moved on failure, so this is safe.
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

        // Lastly, dump all known bindable types into the desc json.
        if (output_desc)
        {
            try
            {
                // It's tempting to filter out ALL pointers and references from this, but it's not so simple.
                // We can't filter e.g. `std::monostate *` because that maps to `bool` in return types, and you wouldn't know this
                //   if we didn't emit an entry for it.
                // The pointers and references that don't have any custom meaning are marked as `TypeKinds::Invalid`, so we only filter out those.
                for (const auto &cpp_name : bindable_cpp_types.Vec())
                {
                    try
                    {
                        const BindableType &input_type = bindable_cpp_types.Map().at(cpp_name);

                        // Skip pointers and references with no special meaning (see above). Those have their kind set to `TypeKinds::Invalid`.
                        if (std::holds_alternative<CInterop::TypeKinds::Invalid>(input_type.interop_info))
                        {
                            cppdecl::Type cpp_type = ParseTypeOrThrow(cpp_name);
                            if (cpp_type.Is<cppdecl::Pointer>() || cpp_type.Is<cppdecl::Reference>())
                                continue;
                        }

                        CInterop::TypeDesc &new_type = output_desc->cpp_types.TryEmplace(cpp_name).first;

                        { // Dump the traits.
                            if (input_type.traits)
                            {
                                CInterop::TypeTraits::TieSimilarType(new_type.traits.emplace()) = CInterop::TypeTraits::TieSimilarType(*input_type.traits);
                            }
                            else
                            {
                                // If the traits are missing, complain if the type kind is not `Invalid`.
                                if (!std::holds_alternative<CInterop::TypeKinds::Invalid>(input_type.interop_info))
                                    throw std::runtime_error("The type traits are not specified.");
                            }
                        }


                        // Dump the type itself.

                        new_type.var = input_type.interop_info;
                    }
                    catch (...)
                    {
                        std::throw_with_nested(std::runtime_error("While processing type `" + cpp_name + "`:"));
                    }
                }
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While generating the output description JSON:"));
            }
        }
    }

    void Generator::DumpFileToOstream(const OutputFile &context, const OutputFile::SpecificFileContents &file, std::ostream &out)
    {
        const bool is_header = &file != &context.source;

        const bool convenience_includes_in_this_file = is_header && add_convenience_includes && !file.include_guard_name.empty();

        // Open the include guard.
        if (out && is_header)
        {
            if (file.include_guard_name.empty())
            {
                out << "#pragma once\n\n";
            }
            else
            {
                out << "#ifndef " << file.include_guard_name << "\n";
                out << "#define " << file.include_guard_name << "\n\n";
            }
        }

        // Define the macro to dllexport our functions, only in the source files.
        if (out && !is_header)
            out << "#define " << GetBuildLibraryMacroForFile(context) << '\n';
        // Define the macro to disable convenience includes in the source files, to speed up compilation.
        if (out && !is_header && add_convenience_includes) // Not `convenience_includes_in_this_file`, because that's only for headers.
            out << "#define " << GetDisableConvenienceIncludesMacro() << '\n';

        if (out && !file.preamble.empty())
            out << file.preamble << '\n';

        // If this is the source file and we also have a non-empty internal header, include it.
        if (out && !is_header && context.internal_header.HasUsefulContents())
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

        std::set<std::string> late_custom_headers;
        std::set<std::string> late_stdlib_headers; // Not sure if this one will ever actually get used.

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

            // Begin `--add-convenience-includes` magic.
            if (out && convenience_includes_in_this_file && !headers.empty())
            {
                out << "#pragma push_macro(\"" << GetDisableConvenienceIncludesMacro() << "\")\n";

                // This prevents circular inclusion. We include the same headers again at the end of the file.
                // I don't want to print this comment to the file, because maybe we don't happen to actually include anything at the end, which can happen if the only
                //   headers we have are the "common" and/or "exports" ones.
                out << "#define " << GetDisableConvenienceIncludesMacro() << "\n";
            }

            for (const auto &header : headers)
            {
                if (out)
                    out << "#include <" << header << ">\n";

                late_custom_headers.insert(header);
            }
            if (!headers.empty() && out)
            {
                // End `--add-convenience-includes` magic.
                if (convenience_includes_in_this_file)
                    out << "#pragma pop_macro(\"" << GetDisableConvenienceIncludesMacro() << "\")\n";

                out << '\n';
            }
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

                    // Right now we don't declare anything defined in the same file, because our declaration order makes this unnecessary.
                    if (elem.second.declared_in_same_file /*&& !type_info.forward_declaration*/)
                        continue;

                    if (!type_info.KnowHeaderOrForwardDeclaration())
                        continue; // Nothing to do for built-in types.

                    if (!type_info.forward_declaration)
                        throw std::runtime_error("Need to forward-declare type `" + elem.first + "`, but don't know how.");

                    std::string fwd_decl = *type_info.forward_declaration;
                    // if (elem.second.declared_in_same_file)
                    //     fwd_decl += " // Defined below in this file.";
                    // else
                    if (type_info.declared_in_file)
                        fwd_decl += " // Defined in `#include <" + type_info.declared_in_file().header.path_for_inclusion + ">`.";

                    fwd_decls.insert(std::move(fwd_decl));


                    { // Also append this to the late headers list, as a convenience for the user. We could make this optional (add a flag to disable this).
                        if (type_info.declared_in_c_stdlib_file)
                            late_stdlib_headers.insert(*type_info.declared_in_c_stdlib_file);
                        else if (type_info.declared_in_file)
                            late_custom_headers.insert(type_info.declared_in_file().header.path_for_inclusion);
                    }
                }
            }

            for (const auto &fwd_decl : fwd_decls)
            {
                if (out)
                    out << fwd_decl << '\n';
            }
            if (!fwd_decls.empty() && out)
                out << '\n';
        }

        if (out)
            out << file.contents << '\n';
        if (out)
            out << file.footer;

        // Close the include guard, if not using `#pragma once`.
        if (out && !file.include_guard_name.empty())
            out << "\n#endif // " << file.include_guard_name << '\n';

        // The late convenience headers. They are this late to avoid circular includes.
        if (out && convenience_includes_in_this_file)
        {
            const std::string secondary_include_guard_name = file.include_guard_name + "_2";

            bool first = true;
            auto MakeCommentOnce = [&]
            {
                if (first)
                {
                    first = false;

                    // We both check the macro and add a second include guard here.
                    out << "\n#if !defined(" << GetDisableConvenienceIncludesMacro() << ") && !defined(" << secondary_include_guard_name << ")\n";
                    out << "#define " << secondary_include_guard_name << "\n";
                    out << "\n";
                    out << "// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.\n";
                }
            };

            if (out && !late_custom_headers.empty())
            {
                bool first_custom = true;
                for (const auto &header : late_custom_headers)
                {
                    // Reject some special headers that don't have anything interesting in them.
                    if (IsExportHeader(header) || IsCommonPublicHelpersHeader(header))
                        continue;

                    MakeCommentOnce();

                    if (first_custom)
                    {
                        first_custom = false;
                        out << '\n';
                    }

                    out << "#include <" << header << ">\n";
                }
            }
            if (out && !late_stdlib_headers.empty())
            {
                MakeCommentOnce();
                out << '\n';
                for (const auto &header : late_stdlib_headers)
                    out << "#include <" << header << ">\n";
            }

            // End phase two.
            if (out && !first)
            {
                out << "\n#endif // !defined(" << GetDisableConvenienceIncludesMacro() << ") && !defined(" << secondary_include_guard_name << ")\n";
            }
        }
    }
}

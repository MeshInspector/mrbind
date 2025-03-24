#include "common/filesystem.h"
#include "common/parsed_data.h"
#include "common/set_error_handlers.h"
#include "generators/common/command_line_args_as_utf8.h"
#include "generators/common/data_from_file.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <unordered_set>

namespace mrbind
{
    namespace
    {
        struct CBindingGenerator
        {
            // Input: [
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

            struct OutputFile
            {
                // Names of the output files: [
                std::string header_path_full;
                std::string source_path_full;
                // ]
                std::string header_path_for_inclusion;

                // The identifier of this file. Basically a relative path without an extension.
                std::string relative_name;

                std::string header_contents;
                std::string source_contents;

                void Initialize()
                {
                    header_contents += "#pragma once\n\n";

                    source_contents += "#include \"" + header_path_for_inclusion + "\"\n\n";
                }
            };
            // The keys are canonical input paths.
            std::unordered_map<std::string, OutputFile> outputs;

            std::unordered_set<std::filesystem::path> directories_to_create;

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


            void Handle(const ClassEntity &cl)
            {
                (void)GetOutputFile(cl.declared_in_file);

                HandleNested(cl);
            }

            void Handle(const FuncEntity &func)
            {
                (void)GetOutputFile(func.declared_in_file);
            }

            void Handle(const EnumEntity &en)
            {
                (void)GetOutputFile(en.declared_in_file);
            }

            void Handle(const TypedefEntity &td)
            {
                (void)GetOutputFile(td.declared_in_file);
            }

            void Handle(const NamespaceEntity &ns)
            {
                HandleNested(ns);
            }

            void HandleEntity(const Entity &e)
            {
                std::visit([&](const auto &elem){Handle(elem);}, *e.variant);
            }

            void HandleNested(const EntityContainer &c)
            {
                for (const Entity &e : c.nested)
                    HandleEntity(e);
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
                    "    --input              <filename.json>  - Input JSON file, as produced by `mrbind --format=json`.\n"
                    "    --output-header-dir  <dir>            - Output directory for headers. Must be empty or not exist, unless you pass `--clean-output-dirs` too. It's always an error if it exists and is not a directory.\n"
                    "    --output-source-dir  <dir>            - Output directory for sources. Same rules are for `--output-header-dir`.\n"
                    "    --map-path           <from> <to>      - Specifies filename mapping, can be repeated. `<from>` is a directory or file name, it gets canonicalized automatically. `<to>` is a suffix relative to the output directories. Every filename in the parsed data must match some prefix. Longer prefixes get priority.\n"
                    "    --clean-output-dirs                   - Destroy the contents of the output directory before writing to it. Without this flag, it's an error for it to not be empty.\n"
                    "    --strip-filename-suffix  <ext>        - If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are added automatically.\n"
                    "    --verbose                             - Write some logs.\n"
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
    generator.HandleNested(generator.data.entities);

    // Create subdirectories in the output directory, if needed.
    for (const auto &elem : generator.directories_to_create)
        std::filesystem::create_directories(elem);

    // Write the generated files.
    for (const auto &elem : generator.outputs)
    {
        { // Write header.
            if (verbose)
                std::cerr << "mrbind_gen_c: Writing header: " << elem.second.header_path_full << '\n';

            std::ofstream output(mrbind::MakePath(elem.second.header_path_full));
            if (output)
                output << elem.second.header_contents;
            if (!output)
                throw std::runtime_error("Failed to write to the output file: `" + elem.second.header_path_full + "`.");
        }

        { // Write source.
            if (verbose)
                std::cerr << "mrbind_gen_c: Writing source: " << elem.second.source_path_full << '\n';

            std::ofstream output(mrbind::MakePath(elem.second.source_path_full));
            if (output)
                output << elem.second.source_contents;
            if (!output)
                throw std::runtime_error("Failed to write to the output file: `" + elem.second.source_path_full + "`.");
        }
    }
}

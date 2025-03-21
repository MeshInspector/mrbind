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

            std::string output_dir;
            std::filesystem::path output_dir_path;

            // Keys are canonicalized filenames.
            // We amend this to include all filenames we see.
            std::unordered_map<std::string, std::string> path_mappings;

            // Known input file extensions that we should strip.
            std::unordered_set<std::string> known_input_exts_to_strip = {".h", ".hpp", ".cpp"};
            // ]

            // Constants: [
            std::string output_extension = ".h";
            // ]

            // This caches exactly which input filenames (canonical, as spelled in input) map
            //   to which output filenames (not necessarily canonical).
            std::unordered_map<std::string, std::string> filename_mappings_cache;

            struct OutputFile
            {
                std::string contents;

                void Initialize()
                {
                    contents += "#pragma once\n\n";
                }
            };
            std::unordered_map<std::string, OutputFile> outputs;

            std::unordered_set<std::filesystem::path> directories_to_create;

            [[nodiscard]] OutputFile &GetOutputFile(const DeclFileName &source)
            {
                auto cache_it = filename_mappings_cache.find(source.canonical);
                if (cache_it != filename_mappings_cache.end())
                    return outputs[cache_it->second]; // Cached.

                std::string relative_output_name;

                // Get the filename relative to the output directory.
                auto prefix_it = path_mappings.find(source.canonical);
                if (prefix_it != path_mappings.end())
                {
                    relative_output_name = prefix_it->second; // Direct match.
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
                            relative_output_name = it->second;
                            relative_output_name += source.canonical.substr(source_copy_str.size());

                            // Strip some known extensions.
                            for (const auto &ext : known_input_exts_to_strip)
                            {
                                if (relative_output_name.ends_with(ext))
                                {
                                    relative_output_name.resize(relative_output_name.size() - ext.size());
                                    break;
                                }
                            }
                            relative_output_name += output_extension;
                            break; // Success.
                        }

                        // Sic! `.has_parent_path()` seems to always return true, it has a weird spec.
                        if (!source_copy_path.has_relative_path())
                            throw std::runtime_error("Couldn't map parsed filename `" + source.canonical + "` to an output filename, no matching `--map-path` found.");

                        source_copy_path = source_copy_path.parent_path();
                    }
                }

                // Now rewrite it to begin with `output_dir`.

                std::filesystem::path relative_output_path = MakePath(relative_output_name);
                std::filesystem::path full_output_path = (output_dir_path / relative_output_path).lexically_normal();

                { // Decide what directories to create.
                    std::filesystem::path cur_path = relative_output_path;
                    while (true)
                    {
                        cur_path = cur_path.parent_path();
                        if (cur_path.empty() || cur_path == ".")
                            break;
                        directories_to_create.insert((output_dir_path / cur_path).lexically_normal());
                    }
                }

                std::string full_output_name = PathToString(full_output_path);
                filename_mappings_cache.try_emplace(source.canonical, full_output_name);

                OutputFile &ret = outputs[full_output_name];
                ret.Initialize();
                return ret;
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
    bool clean_output_dir = false;

    mrbind::CBindingGenerator generator;

    { // Parse arguments.
        bool seen_input_filename = false;
        bool seen_output_dir = false;
        bool seen_clean_output_dir = false;

        for (int i = 1; i < args.argc; i++)
        {
            std::string_view view = args.argv[i];

            if (view == "--help")
            {
                std::cout <<
                    "Usage:\n"
                    "    --input       <filename.json>   - Input JSON file, as produced by `mrbind --format=json`.\n"
                    "    --output-dir  <dir>             - Output directory. Must be empty or not exist, unless you pass `--clean-output-dir` too. It's always an error if it exists and is not a directory.\n"
                    "    --map-path    <from> <to>       - Specifies filename mapping, can be repeated. `<from>` is a directory or file name, it gets canonicalized automatically. `<to>` is a suffix relative to `--output-dir`. Every filename in the parsed data must match some prefix. Longer prefixes get priority.\n"
                    "    --clean-output-dir              - Destroy the contents of the output directory before writing to it. Without this flag, it's an error for it to not be empty.\n"
                    "    --strip-filename-suffix  <ext>  - If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are added automatically.\n"
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
            if (ConsumeFlagWithStringArg("--output-dir", generator.output_dir, &seen_output_dir))
                continue;
            if (ConsumeFlagWithNoArgs("--clean-output-dir", clean_output_dir, &seen_clean_output_dir))
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

            throw std::runtime_error("Unknown argument: `" + std::string(view) + "`. Consult `--help` for usage.");
        }

        if (!seen_input_filename)
            throw std::runtime_error("Missing `--input`, consult `--help` for usage.");
        if (!seen_output_dir)
            throw std::runtime_error("Missing `--output-dir`, consult `--help` for usage.");
    }

    generator.output_dir_path = mrbind::MakePath(generator.output_dir);

    // Parse the input file.
    generator.data = mrbind::LoadDataFromFile(input_filename.c_str());

    { // Prepare the output directory.
        std::filesystem::path output_dir_path = mrbind::MakePath(generator.output_dir);
        auto stat = std::filesystem::status(output_dir_path);

        // Complain if the output path already exists but isn't a directory.
        if (stat.type() != std::filesystem::file_type::not_found && stat.type() != std::filesystem::file_type::directory)
            throw std::runtime_error("Output path `" + generator.output_dir + "` already exists but is not a directory.");

        if (stat.type() == std::filesystem::file_type::not_found)
        {
            // Create the missing output directory.
            std::filesystem::create_directories(output_dir_path);
        }
        else
        {
            // Destroy everything in the output directory or complain if `--clean-output-dir` isn't specified.
            for (const std::filesystem::directory_entry &e : std::filesystem::directory_iterator(output_dir_path))
            {
                if (!clean_output_dir)
                    throw std::runtime_error("Output directory `" + generator.output_dir + "` is not empty, and `--clean-output-dir` wasn't specfied.");

                std::filesystem::remove_all(e);
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
        std::ofstream output(mrbind::MakePath(elem.first));
        if (output)
            output << elem.second.contents;
        if (!output)
            throw std::runtime_error("Failed to write to the output file: `" + elem.first + "`.");
    }
}

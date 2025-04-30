#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c/generator.h"
#include "generators/common/command_line_args_as_utf8.h"
#include "generators/common/data_from_file.h"

#include <fstream>
#include <iostream>

int main(int raw_argc, char **raw_argv)
{
    mrbind::SetErrorHandlers();

    mrbind::CommandLineArgsAsUtf8 args(raw_argc, raw_argv);

    std::string input_filename;
    bool clean_output_dirs = false;

    bool verbose = false;

    mrbind::CBindings::Generator generator;

    { // Parse arguments.
        bool seen_input_filename = false;
        bool seen_output_header_dir = false;
        bool seen_output_source_dir = false;
        bool seen_helper_header_dir = false;
        bool seen_helper_name_prefix = false;
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
                    "    --helper-header-dir  <dir>            - Where to generate the additional helper files, relative to `--output-header-dir`. Unless your entire output directory is named after your library, you probably to pass the library name to this flag, something like `--helper-header-dir=MyLib_helpers`.\n"
                    "    --helper-name-prefix  <string>         - This is a prefix for the names of some helpers that we sometimes need to generate. This will typically be your library name, possibly followed by an underscore. This is technically optional, but you'll get an error if this turns out to be necessary for something, which is almost guaranteed for any non-trivial input.\n"
                    "    --strip-filename-suffix  <ext>         - If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are added automatically.\n"
                    "    --assume-include-dir  <dir>            - When including the parsed files, assume that this directory will be passed to the compiler as `-I`, so we can spell filenames relative to it. Can be repeated. More deeply nested directories get priority. You might need to tune this or `--map-path` if you get conflicts between your C++ headers and the generated C headers.\n"
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
            { // --helper-header-dir
                std::string tmp;
                if (ConsumeFlagWithStringArg("--helper-header-dir", tmp, &seen_helper_header_dir))
                {
                    generator.helper_header_relative_dir = mrbind::MakePath(tmp);
                    if (!generator.helper_header_relative_dir.is_relative())
                        throw std::runtime_error("The argument of `--helper-header-dir` must be a relative path.");
                    continue;
                }
            }
            if (ConsumeFlagWithStringArg("--helper-name-prefix", generator.helper_name_prefix_opt, &seen_helper_name_prefix))
                continue;
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

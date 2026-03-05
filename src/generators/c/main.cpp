#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/c/generator.h"
#include "generators/c/module.h"
#include "generators/common/data_from_json.h"

#include <fstream>
#include <iomanip>
#include <iostream>

int main(int raw_argc, char **raw_argv)
{
    mrbind::SetErrorHandlers();

    std::string input_filename;
    std::string output_json_desc_filename;

    bool clean_output_dirs = false;

    bool verbose = false;

    mrbind::C::Generator generator;

    { // Load the generator modules.
        const auto &avail_modules = mrbind::C::GetRegisteredModules();
        generator.modules.reserve(avail_modules.size());
        for (const auto &elem : avail_modules)
            generator.modules.push_back(elem.second());
    }

    { // Parse arguments.
        mrbind::CommandLineParser args_parser;

        args_parser.help_footer =
            "\n"
            "A minimal usage might look like this:\n"
            "    mrbind_gen_c --input test/build/parsed.json --output-header-dir test/build/include --clean-output-dirs --output-source-dir test/build/source --map-path test/input . --assume-include-dir test\n"
            "With `--clean-output-dirs` being optional.\n";

        args_parser.AddFlag("--input", {
            .arg_names = {"filename.json"},
            .desc = "Input JSON file, as produced by `mrbind --format=json`.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                input_filename = args.front();
            },
        });

        args_parser.AddFlag("--output-header-dir", {
            .arg_names = {"dir"},
            .desc = "Output directory for headers. Must be empty or not exist, unless you pass `--clean-output-dirs` too. It's always an error if it exists and is not a directory.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.output_header_dir = args.front();
            },
        });

        args_parser.AddFlag("--output-source-dir", {
            .arg_names = {"dir"},
            .desc = "Output directory for sources. Same rules are for `--output-header-dir`.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.output_source_dir = args.front();
            },
        });

        args_parser.AddFlag("--clean-output-dirs", {
            .desc = "Destroy the contents of the output directory before writing to it. Without this flag, it's an error for it to not be empty.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                clean_output_dirs = true;
            },
        });

        args_parser.AddFlag("--output-desc-json", {
            .arg_names = {"filename.json"},
            .desc = "Optional. Outputs an additional JSON describing the generated C code, which is useful for building bindings for other languages on top of the C ones.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                output_json_desc_filename = args.front();
                generator.output_desc.emplace(); // Tell the generator to begin collecting the description.
            },
        });

        args_parser.AddFlag("--map-path", {
            .allow_repeat = true,
            .arg_names = {"from", "to"},
            .desc = "How to transform parsed filenames to their respective generated filenames. Can be repeated. `<from>` is a directory or file name, it gets canonicalized automatically. `<to>` is a suffix relative to the output directories. Every filename in the parsed data must match some prefix. Longer prefixes get priority.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                std::string from = mrbind::PathToString(std::filesystem::weakly_canonical(mrbind::MakePath(args[0])));
                std::string to(args[1]);

                std::filesystem::path to_path = mrbind::MakePath(to).lexically_normal();

                if (!to_path.is_relative())
                    throw std::runtime_error("The second argument of `--map-path` must be a relative path.");

                // Don't check for duplicates, who cares.
                // If you decide to add the check, keep in mind that different input paths can canonicalize to the same string.
                generator.path_mappings.try_emplace(from, mrbind::PathToString(to));
            },
        });

        args_parser.AddFlag("--helper-header-dir", {
            .arg_names = {"dir"},
            .desc = "Where to generate the additional helper files, relative to `--output-header-dir`. Unless your entire output directory is named after your library, you probably to pass the library name to this flag, something like `--helper-header-dir=MyLib_helpers`.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.helper_header_relative_dir = mrbind::MakePath(args.front()).lexically_normal();
                if (!generator.helper_header_relative_dir.is_relative())
                    throw std::runtime_error("The argument of `--helper-header-dir` must be a relative path.");
            },
        });

        args_parser.AddFlag("--helper-name-prefix", {
            .arg_names = {"string"},
            .desc = "This is a prefix for the names of some helpers that we sometimes need to generate. This will typically be your library name, followed by an underscore. This is technically optional, but you'll get an error if this turns out to be necessary for something, which is almost guaranteed for any non-trivial input.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.helper_name_prefix_opt = args.front();
            },
        });

        args_parser.AddFlag("--helper-macro-name-prefix", {
            .arg_names = {"string"},
            .desc = "Optional. If specified, it overrides `--helper-name-prefix` specifically for macro names.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.helper_macro_name_prefix_opt = args.front();
            },
        });

        args_parser.AddFlag("--split-library", {
            .allow_repeat = true,
            .arg_names = {"macro_prefix", "dirs"},
            .desc = "Optional, can be repeated. If specified, gives a custom export macro to a certain part of the output files, using `<macro_prefix>` instead of `--helper[-macro]-name-prefix`. `dirs` is a `:`-separated list of output directories relative to `--output-{header,source}-dir`. Always use forward slashes in those directory names; the trailing slash is ignored. The export header will be placed into the first directory in the list (which doesn't necessarily need to exist otherwise, if you only want to store the exports header there).",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                const std::size_t group_index = generator.output_groups.size();

                generator.output_groups.emplace_back().helper_macro_name_prefix = args[0];

                bool first = true;
                mrbind::Strings::Split(args[1], ":", [&](std::string_view part)
                {
                    std::string_view fixed_part = part;

                    while (fixed_part.ends_with('/'))
                        fixed_part.remove_suffix(1);

                    std::filesystem::path path = mrbind::MakePath(fixed_part);

                    if (!path.is_relative())
                        throw std::runtime_error("The second argument of `--split-library` only accepts relative paths, but got `" + std::string(part) + "`.");

                    path = path.lexically_normal(); // Just in case.

                    if (std::exchange(first, false))
                        generator.output_groups.back().primary_relative_file_dir = path;

                    generator.output_group_indices.insert_or_assign(mrbind::PathToString(path) + "/", group_index);

                    return false;
                });
            },
        });

        args_parser.AddFlag("--strip-filename-suffix", {
            .allow_repeat = true,
            .arg_names = {".ext"},
            .desc = "If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are handled automatically.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.known_input_exts_to_strip.insert(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--assume-include-dir", {
            .allow_repeat = true,
            .arg_names = {"dir"},
            .desc = "When including the parsed files, assume that this directory will be passed to the compiler as `-I`, so we can spell filenames relative to it. Can be repeated. More deeply nested directories get priority. You might need to tune this or `--map-path` if you get conflicts between your C++ headers and the generated C headers.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.assumed_include_directories.insert(std::filesystem::weakly_canonical(mrbind::MakePath(args.front())));
            },
        });

        args_parser.AddFlag("--max-header-name-length", {
            .arg_names = {"n"},
            .desc = "Shorten the generated header names to this length. This doesn't count the output directory/prefix, only the relative name of the header. This is also inexact, not counting the extensions, nor the hash that gets added to the filename in those cases. This seems to be more important on Windows with it's smaller default path length limits. A value around 100 should work well enough.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.max_output_filename_len = mrbind::CommandLineParser::ParseSizeT(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--no-handle-exceptions", {
            .desc = "Don't try to handle exceptions. Note that you don't have to pass this to build with exceptions disabled, since the exception handling code is wrapped in `#if`s.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                generator.enable_exceptions_support = false;
            },
        });

        args_parser.AddFlag("--add-convenience-includes", {
            .desc = "Add more include directives to the output, that are not strictly necessary, but might help the user. This isn't enabled by default because it add too much bloat in large projects. Even if this is enabled, you can define a macro to revert to the default behavior when consuming the headers.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                generator.add_convenience_includes = true;
            },
        });

        args_parser.AddFlag("--preferred-max-num-aggregate-init-fields", {
            .arg_names = {"n"},
            .desc = "Don't generate aggregate initialization constructors for structures with more than this number of members. The default is no limit. This limit is ignored if the aggregate is not default-constructible, because that would make it impossible to construct from C.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.max_num_fields_for_default_constructible_aggregate_init = mrbind::CommandLineParser::ParseSizeT(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--reject-long-and-long-long", {
            .desc = "Fail if the input contains `long` or `long long`, possibly unsigned. This is intended to be used with the parser's `--canonicalize-to-fixed-size-typedefs`, to make sure the input didn't contain types that couldn't be canonicalized due to width conflict. If this trips, stop using `long` and `long long` in your code directly, and use the standard typedefs instead.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                generator.reject_long_and_long_long = true;
            },
        });

        args_parser.AddFlag("--use-size_t-typedef-for-uint64_t", {
            .desc = "This is intended to be used with the parser's `--canonicalize-size_t-to-uint64_t`. When the input contains `[u]int64_t`, we'll bind them as `size_t` and `ptrdiff_t` (or our own typedefs for them, rather), instead of the standard `[u]int64_t` typedefs.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                generator.custom_typedef_for_uint64_t_pointing_to_size_t = true;
            },
        });

        args_parser.AddFlag("--force-emit-common-helpers", {
            .desc = "Always emit the header with some basic helpers, even if not otherwise needed. It includes, among other things, C++-compatible memory allocation/deallocation functions. This usually doesn't matter, as anything remotely complex will get this header anyway. This flag is useful for wrapping C bindings in another language, if you need those functions to exist there.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                generator.force_emit_helpers_file = true;
            },
        });

        args_parser.AddFlag("--expose-as-struct", {
            .allow_repeat = true,
            .arg_names = {"type"},
            .desc = "Bind this C++ class or struct as an actual C struct with the same member layout, instead of an opaque pointer. The argument is either the exact name (with template arguments if any), or a regex enclosed in slashes `/.../`. If there is no such struct, does nothing. If the struct exists, but isn't simple enough for such binding, will emit an error. The struct must be trivally-copyable and standard-layout to qualify.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.same_layout_struct_filter.Insert(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--adjust-comments", {
            .allow_repeat = true,
            .arg_names = {"s/A/B/g"},
            .desc = "Adjusts all generated comments in C code with a sed-like rule, which is either `s/A/B/g` or `s/A/B/`. The separator can be any character, not necessarily a slash, but it can't appear in `A` and `B`, even escaped. This flag can be used multiple times to apply several rules.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                generator.generated_comments_adjuster.AddRule(args.front());
            },
        });

        args_parser.AddFlag("--skip-template-args-on-func", {
            .allow_repeat = true,
            .arg_names = {"func"},
            .desc = "When calling those functions, we won't put template arguments after the function name. This helps handle certain overloaded functions that don't behave well when used with template arguments, which causes them to instantiate templates with unwanted template arguments, causing hard errors. This is enabled by default for `begin`, `end`, `swap` (can be disabled with `--no-...`), and for all overloaded operators (can't be disabled). This takes a function name as a single identifier, which will match those functions regardless of the namespace. This can be specified multiple times to apply to specify multiple functions.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                if (!cppdecl::IsValidIdentifier(args.front()))
                    throw std::runtime_error("Not a valid identifier: `" + std::string(args.front()) + "`.");
                generator.skip_template_arguments_on_functions.insert(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--no-skip-template-args-on-func", {
            .allow_repeat = true,
            .arg_names = {"func"},
            .desc = "Has the opposite effect compared to `--skip-template-args-on-func`. This primarily makes sense for identifiers for which it's enabled by default, as documented in that flag.",
            .func = [&](mrbind::CommandLineParser::ArgSpan args)
            {
                if (!cppdecl::IsValidIdentifier(args.front()))
                    throw std::runtime_error("Not a valid identifier: `" + std::string(args.front()) + "`.");
                generator.skip_template_arguments_on_functions.erase(std::string(args.front()));
            },
        });

        args_parser.AddFlag("--verbose", {
            .desc = "Write some logs.",
            .func = [&](mrbind::CommandLineParser::ArgSpan)
            {
                verbose = true;
            },
        });

        for (const auto &m : generator.modules)
            m->RegisterCommandLineFlags(args_parser);

        mrbind::CommandLineArgsAsUtf8 utf8_args(raw_argc, raw_argv);
        args_parser.Parse(utf8_args.argc, utf8_args.argv);
    }

    if (input_filename.empty())
        throw std::runtime_error("Missing `--input`, consult `--help` for usage.");
    if (generator.output_header_dir.empty())
        throw std::runtime_error("Missing `--output-header-dir`, consult `--help` for usage.");
    if (generator.output_source_dir.empty())
        throw std::runtime_error("Missing `--output-source-dir`, consult `--help` for usage.");

    generator.output_header_dir_path = mrbind::MakePath(generator.output_header_dir);
    generator.output_source_dir_path = mrbind::MakePath(generator.output_source_dir);

    // Parse the input file.
    generator.data = mrbind::LoadDataFromFile(input_filename.c_str());

    { // Prepare the output directories.
        for (const auto &path : {&generator.output_header_dir_path, &generator.output_source_dir_path})
            mrbind::PrepareOutputDir(*path, clean_output_dirs ? "" : "--clean-output-dirs");
    }

    { // Adjust the platform type information if we're using custom `[u]int64_t` typedefs.
        if (generator.custom_typedef_for_uint64_t_pointing_to_size_t)
        {
            for (std::string_view name : {"int64_t", "uint64_t"})
                generator.data.platform_info.primitive_types.try_emplace(generator.MakePublicHelperName(name), generator.data.platform_info.primitive_types.at(std::string(name)));
        }
    }

    // Initialize the modules.
    for (const auto &m : generator.modules)
        m->Init(generator);

    // Generate all sources, in memory for now.
    generator.Generate();

    // Write the output description JSON.
    if (generator.output_desc)
    {
        std::ofstream out(mrbind::MakePath(output_json_desc_filename));
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + output_json_desc_filename + "`.");
        mrbind::CInterop::OutputDescToJson(*generator.output_desc, out);
        if (!out)
            throw std::runtime_error("Failed to write to file: `" + output_json_desc_filename + "`.");
    }

    // Create subdirectories in the output directory, if needed.
    for (const auto &elem : generator.directories_to_create)
        std::filesystem::create_directories(elem);

    // Write the generated files.
    for (auto &elem : generator.outputs)
    {
        // Write files.
        for (auto file : {&elem.second.header, &elem.second.internal_header, &elem.second.source})
        {
            if (file->HasUsefulContents())
            {
                if (verbose)
                    std::cerr << "mrbind_gen_c: Writing file: " << file->full_output_path << '\n';

                std::ofstream out(mrbind::MakePath(file->full_output_path));
                if (!out)
                    throw std::runtime_error("Failed to open file for writing: `" + file->full_output_path + "`. Is the filename too long? In that case consider using `--max-header-name-length <n>`.");

                generator.DumpFileToOstream(elem.second, *file, out);
                if (!out)
                    throw std::runtime_error("Failed to write to file: `" + file->full_output_path + "`.");
            }
        }
    }
}

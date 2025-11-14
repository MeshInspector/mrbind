#include "common/command_line_args_as_utf8.h"
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

    mrbind::CommandLineArgsAsUtf8 args(raw_argc, raw_argv);

    std::string input_filename;
    std::string output_json_desc_filename;

    bool clean_output_dirs = false;

    bool verbose = false;

    mrbind::CBindings::Generator generator;

    { // Load the generator modules.
        const auto &avail_modules = mrbind::CBindings::GetRegisteredModules();
        generator.modules.reserve(avail_modules.size());
        for (const auto &elem : avail_modules)
            generator.modules.push_back(elem.second());
    }

    { // Parse arguments.
        bool seen_input_filename = false;
        bool seen_output_header_dir = false;
        bool seen_output_source_dir = false;
        bool seen_output_json_desc_filename = false;
        bool seen_helper_header_dir = false;
        bool seen_helper_name_prefix = false;
        bool seen_helper_macro_name_prefix = false;
        bool seen_clean_output_dirs = false;
        bool seen_max_output_filename_length = false;
        bool seen_add_convenience_includes = false;
        bool seen_max_num_fields_for_default_constructible_aggregate_init = false;
        bool seen_reject_long_and_long_long = false;
        bool seen_custom_typedef_for_uint64_t_pointing_to_size_t = false;
        bool seen_verbose = false;

        for (int i = 1; i < args.argc; i++)
        {
            std::string_view view = args.argv[i];

            if (view == "--help")
            {
                static constexpr int flag_column_width = 38; // Sync with the whitespaces below.
                std::cout <<
                    "Usage:\n"
                    "    --input               <filename.json>  - Input JSON file, as produced by `mrbind --format=json`.\n"
                    "    --output-header-dir   <dir>            - Output directory for headers. Must be empty or not exist, unless you pass `--clean-output-dirs` too. It's always an error if it exists and is not a directory.\n"
                    "    --output-source-dir   <dir>            - Output directory for sources. Same rules are for `--output-header-dir`.\n"
                    "    --clean-output-dirs                    - Destroy the contents of the output directory before writing to it. Without this flag, it's an error for it to not be empty.\n"
                    "    --output-desc-json    <filename.json>  - Optional. Outputs an additional JSON describing the generated C code, which is useful for building bindings for other languages on top of the C ones.\n"
                    "    --map-path            <from> <to>      - How to transform parsed filenames to their respective generated filenames. Can be repeated. `<from>` is a directory or file name, it gets canonicalized automatically. `<to>` is a suffix relative to the output directories. Every filename in the parsed data must match some prefix. Longer prefixes get priority.\n"
                    "    --helper-header-dir         <dir>      - Where to generate the additional helper files, relative to `--output-header-dir`. Unless your entire output directory is named after your library, you probably to pass the library name to this flag, something like `--helper-header-dir=MyLib_helpers`.\n"
                    "    --helper-name-prefix        <string>   - This is a prefix for the names of some helpers that we sometimes need to generate. This will typically be your library name, followed by an underscore. This is technically optional, but you'll get an error if this turns out to be necessary for something, which is almost guaranteed for any non-trivial input.\n"
                    "    --helper-macro-name-prefix  <string>   - Optional. If specified, it overrides `--helper-name-prefix` specifically for macro names.\n"
                    "    --strip-filename-suffix     <ext>      - If any of the filenames of the parsed files mentioned in the input JSON end with this suffix (which should start with a dot), they'll be removed. All common C++ source extensions are added automatically.\n"
                    "    --assume-include-dir        <dir>      - When including the parsed files, assume that this directory will be passed to the compiler as `-I`, so we can spell filenames relative to it. Can be repeated. More deeply nested directories get priority. You might need to tune this or `--map-path` if you get conflicts between your C++ headers and the generated C headers.\n"
                    "    --max-header-name-length    <n>        - Shorten the generated header names to this length. This doesn't count the output directory/prefix, only the relative name of the header. This is also inexact, not counting the extensions, nor the hash that gets added to the filename in those cases. This seems to be more important on Windows with it's smaller default path length limits. A value around 100 should work well enough.\n"
                    "    --add-convenience-includes             - Add more include directives to the output, that are not strictly necessary, but might help the user. This isn't enabled by default because it add too much bloat in large projects.\n"
                    "    --preferred-max-num-aggregate-init-fields <n> - Don't generate aggregate initialization constructors for structures with more than this number of members. The default is no limit. This limit is ignored if the aggregate is not default-constructible, because that would make it impossible to construct from C.\n"
                    "    --reject-long-and-long-long            - Fail if the input contains `long` or `long long`, possibly unsigned. This is intended to be used with the parser's `--canonicalize-to-fixed-size-typedefs`, to make sure the input didn't contain types that couldn't be canonicalized due to width conflict. If this trips, stop using `long` and `long long` in your code directly, and use the standard typedefs instead.\n"
                    "    --use-size_t-typedef-for-uint64_t      - This is intended to be used with the parser's `--canonicalize-size_t-to-uint64_t`. When the input contains `[u]int64_t`, we'll bind them as `size_t` and `ptrdiff_t` (or our own typedefs for them, rather), instead of the standard `[u]int64_t` typedefs.\n"
                    "    --expose-as-struct          <type>     - Bind this C++ class or struct as an actual C struct with the same member layout, instead of an opaque pointer. The argument is either the exact name (with template arguments if any), or a regex enclosed in slashes `/.../`. If there is no such struct, does nothing. If the struct exists, but isn't simple enough for such binding, will emit an error. The struct must be trivally-copyable and standard-layout to qualify.\n"
                    "    --adjust-comments           s/A/B/g    - Adjusts all generated comments in C code with a sed-like rule, which is either `s/A/B/g` or `s/A/B/`. The separator can be any character, not necessarily a slash, but it can't appear in `A` and `B`, even escaped. This flag can be used multiple times to apply several rules.\n"
                    "    --verbose                              - Write some logs.\n";

                { // Ask modules for thier flags.
                    // This fake implementation just prints the flags that the modules know about.
                    struct FlagPrinter : mrbind::CBindings::Module::FlagInterface
                    {
                        bool FlagNameMatches(std::string_view name, std::string_view args, std::string_view description) override
                        {
                            std::string name_with_args(name);
                            if (!args.empty())
                            {
                                name_with_args += ' ';
                                name_with_args += args;
                            }

                            std::cout << "    " << std::left << std::setw(flag_column_width) << name_with_args << " - " << description << '\n';
                            return false;
                        }

                        std::string_view GetStringArgument() override
                        {
                            throw std::runtime_error("Bad usage of `FlagInterface`: must not call `GetStringArgument()` before `FlagNameMatches()` returns true.");
                        }
                    };
                    FlagPrinter printer;

                    for (const auto &m : generator.modules)
                        m->ConsumeFlag(printer);
                }

                std::cout <<
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
            auto ConsumeFlagWithSizeTArg = [&](std::string_view name, std::size_t &out, bool *dupe_check) -> bool
            {
                std::string str;
                if (ConsumeFlagWithStringArg(name, str, dupe_check))
                {
                    if (str.empty() || !cppdecl::IsDigit(str.front()))
                        throw std::runtime_error("`" + str + "` is not a valid number.");

                    char *end = nullptr;

                    static_assert(sizeof(out) == sizeof(long long));
                    errno = 0;
                    unsigned long long ll = std::strtoull(str.data(), &end, 10);
                    if (end != str.data() + str.size() || errno != 0)
                        throw std::runtime_error("`" + str + "` is not a valid number.");

                    out = std::size_t(ll);

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
            if (ConsumeFlagWithStringArg("--output-desc-json", output_json_desc_filename, &seen_output_json_desc_filename))
            {
                generator.output_desc.emplace(); // Tell the generator to begin collecting the description.
                continue;
            }

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
            if (ConsumeFlagWithStringArg("--helper-macro-name-prefix", generator.helper_macro_name_prefix_opt, &seen_helper_macro_name_prefix))
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
            if (ConsumeFlagWithSizeTArg("--max-header-name-length", generator.max_output_filename_len, &seen_max_output_filename_length))
                continue;

            if (ConsumeFlagWithNoArgs("--add-convenience-includes", generator.add_convenience_includes, &seen_add_convenience_includes))
                continue;

            if (ConsumeFlagWithSizeTArg("--preferred-max-num-aggregate-init-fields", generator.max_num_fields_for_default_constructible_aggregate_init, &seen_max_num_fields_for_default_constructible_aggregate_init))
                continue;

            if (ConsumeFlagWithNoArgs("--reject-long-and-long-long", generator.reject_long_and_long_long, &seen_reject_long_and_long_long))
                continue;

            if (ConsumeFlagWithNoArgs("--use-size_t-typedef-for-uint64_t", generator.custom_typedef_for_uint64_t_pointing_to_size_t, &seen_custom_typedef_for_uint64_t_pointing_to_size_t))
                continue;

            { // --expose-as-struct
                std::string tmp;
                if (ConsumeFlagWithStringArg("--expose-as-struct", tmp, nullptr))
                {
                    generator.same_layout_struct_filter.Insert(std::move(tmp));
                    continue;
                }
            }

            { // --adjust-comments
                std::string tmp;
                if (ConsumeFlagWithStringArg("--adjust-comments", tmp, nullptr))
                {
                    generator.generated_comments_adjuster.AddRule(tmp);
                    continue;
                }
            }

            if (ConsumeFlagWithNoArgs("--verbose", verbose, &seen_verbose))
                continue;


            { // Lastly, ask the modules.
                struct FlagHandler : mrbind::CBindings::Module::FlagInterface
                {
                    int argc = 0;
                    char **argv = nullptr;
                    int *i = nullptr;

                    enum class State
                    {
                        not_handled,
                        handled_by_this_module,
                        handled_by_previous_module,
                    };
                    State state = State::not_handled;

                    std::string_view current_flag;

                    void HandleModule(mrbind::CBindings::Module &m)
                    {
                        current_flag = argv[*i];
                        m.ConsumeFlag(*this);
                        if (state == State::handled_by_this_module)
                            state = State::handled_by_previous_module;
                    }

                    bool FlagNameMatches(std::string_view name, std::string_view args, std::string_view description) override
                    {
                        (void)args;
                        (void)description;

                        if (state == State::handled_by_this_module)
                            throw std::runtime_error("Bad usage of `FlagInterface`: must not call `FlagNameMatches()` again after it returned true.");
                        if (name != current_flag)
                            return false;
                        if (state == State::handled_by_previous_module)
                            throw std::runtime_error("Bad usage of `FlagInterface`: attempting to handle flag `" + std::string(current_flag) + "` after some other module has already handled it.");
                        state = State::handled_by_this_module;
                        return true;
                    }

                    std::string_view GetStringArgument() override
                    {
                        if (state != State::handled_by_this_module)
                            throw std::runtime_error("Bad usage of `FlagInterface`: must not call `GetStringArgument()` before `FlagNameMatches()` returns true.");

                        if (*i + 1 >= argc)
                            throw std::runtime_error("Not enough arguments for `" + std::string(current_flag) + "`.");

                        return argv[++*i];
                    }
                };
                FlagHandler handler;
                handler.argc = args.argc;
                handler.argv = args.argv;
                handler.i = &i;

                // We don't stop this loop early when the flag is handled. Instead we check all other modules,
                //   to make sure that no one else tries to handle the same flag. If that happens, we emit an error.
                for (const auto &m : generator.modules)
                    handler.HandleModule(*m);

                if (handler.state != FlagHandler::State::not_handled)
                    continue; // Some module has handled the flag.
            }

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
    for (const auto &elem : generator.outputs)
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

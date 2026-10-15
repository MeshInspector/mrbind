#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/rust/generator.h"

#include <cstdio>
#include <exception>
#include <fstream>
#include <optional>
#include <string>

int main(int argc, char **argv)
{
    mrbind::SetErrorHandlers();

    std::optional<std::string> input_json_path;
    std::optional<std::string> output_dir_path;
    bool clean_output_dir = false;
    bool verbose = false;

    mrbind::Rust::Generator generator;

    mrbind::CommandLineParser args_parser;

    args_parser.AddFlag("--input-json", {
        .arg_names = {"filename.json"},
        .desc = "Path to the input json as produced by `mrbind_gen_c --output-desc-json`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            input_json_path = args.front();
        },
    });
    args_parser.AddFlag("--output-dir", {
        .arg_names = {"dir"},
        .desc = "Output directory path, which becomes the `src` directory of your crate. This directory is created if it doesn't exist. Otherwise it must be already empty, or you must specify `--clean-output-dir`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            output_dir_path = args.front();
        },
    });
    args_parser.AddFlag("--clean-output-dir", {
        .desc = "Destroys the contents of `--output-dir` before generating the new files. If this is not specified, `--output-dir` must be empty.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            clean_output_dir = true;
        },
    });
    args_parser.AddFlag("--imported-lib-name", {
        .arg_names = {"name"},
        .desc = "Mandatory. The name of the shared library compiled from the generated C bindings, without the `lib` prefix and the extension. It's used in `#[link(name = ...)]`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.imported_lib_names.insert_or_assign("", args.front());
        },
    });
    args_parser.AddFlag("--imported-split-lib-name", {
        .allow_repeat = true,
        .arg_names = {"macro_prefix", "name"},
        .desc = "Optional, can be repeated. Replaces the value of `--imported-lib-name` for some of the generated files. This should be used with the `--split-library <macro_prefix> ...' flag of the C generator. Pass the same macro prefixes that you passed to the C generator, each with the name of the library those files are compiled into.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.imported_lib_names.insert_or_assign(std::string(args[0]), args[1]);
        },
    });
    // Splits a C++-style `Foo::Bar` namespace name into parts.
    auto ParseNamespace = [](std::string_view name)
    {
        std::vector<std::string> ret;
        std::string_view str = name;
        while (!str.empty())
        {
            std::size_t sep = str.find("::");
            std::string_view part = str.substr(0, sep);
            if (part.empty())
                throw std::runtime_error("Bad namespace name: `" + std::string(name) + "`.");
            ret.emplace_back(part);
            str = sep == std::string_view::npos ? std::string_view{} : str.substr(sep + 2);
        }
        return ret;
    };
    args_parser.AddFlag("--force-namespace", {
        .arg_names = {"name"},
        .desc = "A C++-style `Foo::Bar` namespace name. The entities of the global namespace (including the `std::` types) are put into the module of this namespace. Without this they go to the crate root, where they can clash with the modules of the C files.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.forced_namespace = ParseNamespace(args.front());
        },
    });
    args_parser.AddFlag("--root-namespace", {
        .arg_names = {"name"},
        .desc = "A C++-style `Foo::Bar` namespace name. The entities of this namespace go to the crate root instead of the `foo::bar` module, and its nested namespaces become top-level modules. Use it for the namespace of the whole library, so that the users write `mylib::Mesh` and not `mylib::foo::bar::Mesh`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.root_namespace = ParseNamespace(args.front());
        },
    });
    args_parser.AddFlag("--no-windows-raw-dylib", {
        .desc = "By default, on Windows the library is linked with `kind = \"raw-dylib\"`, which needs no import library. This flag disables that, then you need to provide the import library yourself.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.windows_raw_dylib = false;
        },
    });
    args_parser.AddFlag("--verbose", {
        .desc = "List the functions that got skipped because their C types can't be spelled in Rust.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            verbose = true;
        },
    });

    mrbind::CommandLineArgsAsUtf8 args(argc, argv);
    args_parser.Parse(args.argc, args.argv);

    if (!input_json_path)
        throw std::runtime_error("`--input-json` is required.");
    generator.c_desc = mrbind::CInterop::LoadOutputDescFromFile(input_json_path->c_str());

    if (!output_dir_path)
        throw std::runtime_error("`--output-dir` is required.");
    const std::filesystem::path output_dir_fs_path = mrbind::MakePath(*output_dir_path);
    mrbind::PrepareOutputDir(output_dir_fs_path, clean_output_dir ? "" : "--clean-output-dir");

    if (!generator.imported_lib_names.contains(""))
        throw std::runtime_error("`--imported-lib-name` is required.");

    generator.Generate();

    for (const auto &[relative_path, contents] : generator.output_files)
    {
        std::filesystem::path out_path = output_dir_fs_path / mrbind::MakePath(relative_path);
        std::filesystem::create_directories(out_path.parent_path());

        if (std::filesystem::exists(out_path))
            throw std::runtime_error("Output file already exists: `" + relative_path + "`.");

        std::ofstream out(out_path, std::ios_base::out | std::ios_base::binary); // Binary, for LF line endings on Windows too.
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + mrbind::PathToString(out_path) + "`.");
        out << contents;
        if (!out)
            throw std::runtime_error("Failed to write to file: `" + mrbind::PathToString(out_path) + "`.");
    }

    std::fprintf(stderr, "Generated Rust bindings: %zu functions, %zu of them with raw C types, %zu skipped.\n", generator.num_funcs_total, generator.num_funcs_raw, generator.num_funcs_skipped);
    if (verbose)
    {
        for (const auto &name : generator.skipped_funcs)
            std::fprintf(stderr, "  skipped: %s\n", name.c_str());
    }
}

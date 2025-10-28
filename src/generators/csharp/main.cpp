#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/csharp/generator.h"

#include <fstream>
#include <optional>
#include <span>
#include <string>
#include <unordered_set>
#include <vector>

int main(int argc, char **argv)
{
    mrbind::SetErrorHandlers();

    std::optional<std::string> input_json_path;
    std::optional<std::string> output_dir_path;
    bool clean_output_dir = false;
    std::optional<std::string> imported_lib_name;
    std::optional<std::string> helpers_namespace;

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
        .desc = "Output directory path. This directory is created if it doesn't exist. Otherwise it must be already empty, or you must specify `--clean-output-dir`.",
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
        .desc = "Mandatory. Sets the shared library name that the C# code should load. This must match the library you compiled from the generated C bindings. To make the result cross-platform, omit the `.dll`/`.so` suffix and the `lib` prefix if any.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            imported_lib_name = args.front();
        },
    });
    args_parser.AddFlag("--helpers-namespace", {
        .arg_names = {"name"},
        .desc = "Mandatory. The parameter is a C++-style `Foo::Bar` namespace name. This will be used in the generated C# to store some additional utilities. This namespace doesn't have to exist in the C++ input. In C# this will be generated as a static class, rather than an actual namespace.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            helpers_namespace = args.front();
        },
    });

    mrbind::CommandLineArgsAsUtf8 args(argc, argv);
    args_parser.Parse(args.argc, args.argv);

    mrbind::CSharp::Generator generator;

    // Load input JSON.
    if (!input_json_path)
        throw std::runtime_error("`--input-json` is required.");
    generator.c_desc = mrbind::CInterop::LoadOutputDescFromFile(input_json_path->c_str());

    // Prepare output dir.
    if (!output_dir_path)
        throw std::runtime_error("`--output-dir` is required.");
    const std::filesystem::path output_dir_fs_path = mrbind::MakePath(*output_dir_path);
    mrbind::PrepareOutputDir(output_dir_fs_path, clean_output_dir ? "" : "--clean-output-dir");

    if (!imported_lib_name)
        throw std::runtime_error("`--imported-lib-name` is required.");
    generator.imported_lib_name = *imported_lib_name;

    if (!helpers_namespace)
        throw std::runtime_error("`--helpers-namespace` is required.");
    generator.helpers_namespace = generator.ParseNameOrThrow(*helpers_namespace);

    // Generate.
    generator.Generate();

    { // Create the output directories.
        std::unordered_set<std::filesystem::path> created_dirs;
        for (auto &[relative_path, file_desc] : generator.output_files)
        {
            std::filesystem::path dir_path = (output_dir_fs_path / mrbind::MakePath(relative_path)).parent_path();
            if (!created_dirs.insert(dir_path).second)
                continue; // Already created.
            std::filesystem::create_directories(dir_path);
        }
    }

    // Write the files.
    for (auto &[relative_path, file_desc] : generator.output_files)
    {
        std::filesystem::path out_path = output_dir_fs_path / mrbind::MakePath(relative_path + ".cs");
        std::ofstream out(out_path);
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + mrbind::PathToString(out_path) + "`.");

        file_desc.DumpToOstream(out);

        if (!out)
            throw std::runtime_error("Failed to write to file: `" + mrbind::PathToString(out_path) + "`.");
    }
}

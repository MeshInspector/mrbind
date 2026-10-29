#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/python/generator.h"

#include <cppdecl/declarations/parse.h>

#include <cstdio>
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

    mrbind::Python::Generator generator;

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
        .desc = "Output directory: `<module>.cpp` and `mrbind_py_runtime.h`. Created if it doesn't exist. Otherwise it must be empty, or you must specify `--clean-output-dir`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            output_dir_path = args.front();
        },
    });
    args_parser.AddFlag("--clean-output-dir", {
        .desc = "Destroys the contents of `--output-dir` before generating the new files.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            clean_output_dir = true;
        },
    });
    args_parser.AddFlag("--module-name", {
        .arg_names = {"name"},
        .desc = "The extension module name, e.g. `mrmeshpy`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.module_name = args.front();
        },
    });
    args_parser.AddFlag("--module-qualname", {
        .arg_names = {"name"},
        .desc = "The name the module is imported as, for the docstrings, e.g. `meshlib.mrmeshpy`. Defaults to `--module-name`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.module_qualname = args.front();
        },
    });
    // Parses a C++-style `Foo::Bar` namespace name into its parts, like the other generators do.
    auto ParseNamespace = [](std::string_view name)
    {
        std::string_view view = name;
        auto parsed = cppdecl::ParseQualifiedName(view);
        if (auto error = std::get_if<cppdecl::ParseError>(&parsed))
            throw std::runtime_error("Unable to parse the namespace name `" + std::string(name) + "`, error at offset " + std::to_string(view.data() - name.data()) + ": " + error->message);
        if (!view.empty())
            throw std::runtime_error("Unable to parse the namespace name `" + std::string(name) + "`, junk starting at offset " + std::to_string(view.data() - name.data()) + ".");
        std::vector<std::string> ret;
        for (const auto &part : std::get<cppdecl::QualifiedName>(parsed).parts)
        {
            auto str = std::get_if<std::string>(&part.var);
            if (!str || part.template_args)
                throw std::runtime_error("Not a namespace name: `" + std::string(name) + "`.");
            ret.push_back(*str);
        }
        return ret;
    };
    args_parser.AddFlag("--replace-namespace", {
        .allow_repeat = true,
        .arg_names = {"from", "to"},
        .desc = "Takes two C++-style namespace names. Replaces the leading namespaces of the entities, which decides their Python scopes. `--replace-namespace MR ::` puts the contents of `MR` directly into the module, like `MB_PB11_STRIPPED_NAMESPACES` in the pybind11 target.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            if (args[0].empty())
                throw std::runtime_error("The first argument of `--replace-namespace` can't be empty.");
            generator.replaced_namespaces.emplace_back(ParseNamespace(args[0]), args[1] == "::" ? std::vector<std::string>{} : ParseNamespace(args[1]));
        },
    });
    args_parser.AddFlag("--alias", {
        .allow_repeat = true,
        .arg_names = {"alias", "target"},
        .desc = "An extra Python name for an entity, both dotted paths in the module, e.g. `--alias saveMesh MeshSave.toAnySupportedFormat`. Like `RegisterCustomAlias()` in the pybind11 target.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.aliases.emplace_back(args[0], args[1]);
        },
    });
    args_parser.AddFlag("--ignore-for-python", {
        .allow_repeat = true,
        .arg_names = {"regex"},
        .desc = "Skip the entities whose C++ names match this regex, for the `MR_BIND_IGNORE_PY`-like annotations that the C bindings don't see.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.ignored_for_python.push_back(std::string(args[0]));
        },
    });
    args_parser.AddFlag("--hide-field", {
        .allow_repeat = true,
        .arg_names = {"name"},
        .desc = "Don't expose the fields with this name, e.g. the ones that are public only for the C bindings.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.hidden_fields.insert(std::string(args[0]));
        },
    });
    args_parser.AddFlag("--adjust-name", {
        .allow_repeat = true,
        .arg_names = {"regex", "replacement"},
        .desc = "A regex replacement applied to the C++ type names before making the Python names from them, like `MB_PB11_ADJUST_NAMES` in the pybind11 target. E.g. `--adjust-name '\\bMR::' ''`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.name_adjustments.emplace_back(args[0], args[1]);
        },
    });
        args_parser.AddFlag("--verbose", {
        .desc = "List the functions that got skipped.",
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
    if (generator.module_name.empty())
        throw std::runtime_error("`--module-name` is required.");
    generator.c_desc = mrbind::CInterop::LoadOutputDescFromFile(input_json_path->c_str());

    if (!output_dir_path)
        throw std::runtime_error("`--output-dir` is required.");
    const std::filesystem::path output_dir_fs_path = mrbind::MakePath(*output_dir_path);
    mrbind::PrepareOutputDir(output_dir_fs_path, clean_output_dir ? "" : "--clean-output-dir");
    generator.Generate();

    for (const auto &[relative_path, contents] : generator.output_files)
    {
        std::filesystem::path out_path = output_dir_fs_path / mrbind::MakePath(relative_path);
        std::filesystem::create_directories(out_path.parent_path());
        // Binary mode, for LF line endings on Windows too.
        std::ofstream out(out_path, std::ios_base::out | std::ios_base::binary);
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + mrbind::PathToString(out_path) + "`.");
        out << contents;
        if (!out)
            throw std::runtime_error("Failed to write to file: `" + mrbind::PathToString(out_path) + "`.");
    }

    std::fprintf(stderr, "Generated Python bindings: %zu functions, %zu skipped.\n", generator.num_funcs_total, generator.num_funcs_skipped);
    if (verbose)
    {
        for (const auto &name : generator.skipped_funcs)
            std::fprintf(stderr, "  skipped: %s\n", name.c_str());
    }
}

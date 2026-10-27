#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/js/generator.h"

#include <cppdecl/declarations/parse.h>

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

    mrbind::Js::Generator generator;

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
        .desc = "Output directory path, the root of the JS sources (`index.mjs`, `ffi.mjs`, `lib/`, `ns/`, and the link flags for Emscripten). This directory is created if it doesn't exist. Otherwise it must be already empty, or you must specify `--clean-output-dir`.",
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
    args_parser.AddFlag("--wasm-module", {
        .arg_names = {"specifier"},
        .desc = "The import specifier of the Emscripten module factory (the `.mjs` produced by `emcc -sMODULARIZE -sEXPORT_ES6`), relative to the output directory, e.g. `./MyLib.mjs`. `index.mjs` imports it for `init()`. Without this, only `initWithModule()` is available.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.wasm_module_import = args.front();
        },
    });
    args_parser.AddFlag("--wasm-module-node", {
        .arg_names = {"specifier"},
        .desc = "Optional. The import specifier of a second build of the module for Node (e.g. with `-sENVIRONMENT=node -sNODERAWFS=1`), which `init()` imports instead of `--wasm-module` when running in Node. Both are then imported dynamically.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.wasm_module_import_node = args.front();
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
    args_parser.AddFlag("--force-namespace", {
        .arg_names = {"name"},
        .desc = "A C++-style `Foo::Bar` namespace name. The entities of the global namespace (including the `std::` types) are put into the module of this namespace. Without this they go directly to the root module.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.forced_namespace = ParseNamespace(args.front());
        },
    });
    args_parser.AddFlag("--replace-namespace", {
        .allow_repeat = true,
        .arg_names = {"from", "to"},
        .desc = "Takes two C++-style namespace names. Replaces the leading namespaces of the entities, which decides their modules. The flag can be specified multiple times, the replacements are applied in the same order. The second argument can be `::` to remove a namespace entirely, e.g. `--replace-namespace MyLib ::` exports the entities of `MyLib` from the root module, so the users write `lib.Foo` and not `lib.MyLib.Foo`. Like in the other generators.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            if (args[0].empty())
                throw std::runtime_error("The first argument of `--replace-namespace` can't be empty, use `--force-namespace` instead.");
            generator.replaced_namespaces.emplace_back(ParseNamespace(args[0]), args[1] == "::" ? std::vector<std::string>{} : ParseNamespace(args[1]));
        },
    });
    args_parser.AddFlag("--no-deref-expected", {
        .desc = "When a C++ function returns `std/tl::expected`, don't automatically dereference it and throw on failure, and instead return the `expected` object as is. Like in the C# and Java generators.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.deref_expected = false;
        },
    });
    args_parser.AddFlag("--no-string-conversion", {
        .desc = "When a C++ function returns `std::string` by value, return the `std_string` wrapper instead of a JS string.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.convert_strings = false;
        },
    });
    args_parser.AddFlag("--wasm64", {
        .desc = "The module is linked with `-sMEMORY64`: the pointers, `size_t` and `long` are 64-bit. The JS side still uses numbers for them, converting to `bigint` at the wasm boundary.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.wasm64 = true;
        },
    });
    args_parser.AddFlag("--max-file-name-length", {
        .arg_names = {"n"},
        .desc = "Shorten the generated file names to this length, plus a hash. Windows has a small default path length limit. The default is 100, 0 disables this.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.max_file_name_length = mrbind::CommandLineParser::ParseSizeT(std::string(args.front()));
        },
    });
    args_parser.AddFlag("--verbose", {
        .desc = "List the functions that got skipped because their C types can't be spelled in JS.",
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
    generator.Generate();

    for (const auto &[relative_path, contents] : generator.output_files)
    {
        std::filesystem::path out_path = output_dir_fs_path / mrbind::MakePath(relative_path);
        std::filesystem::create_directories(out_path.parent_path());

        if (std::filesystem::exists(out_path))
            throw std::runtime_error("Output file already exists: `" + relative_path + "`.");

        // Binary mode, for LF line endings on Windows too.
        std::ofstream out(out_path, std::ios_base::out | std::ios_base::binary);
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + mrbind::PathToString(out_path) + "`.");
        out << contents;
        if (!out)
            throw std::runtime_error("Failed to write to file: `" + mrbind::PathToString(out_path) + "`.");
    }

    std::fprintf(stderr, "Generated JS bindings: %zu functions, %zu of them with raw C types, %zu skipped.\n", generator.num_funcs_total, generator.num_funcs_raw, generator.num_funcs_skipped);
    if (verbose)
    {
        for (const auto &name : generator.skipped_funcs)
            std::fprintf(stderr, "  skipped: %s\n", name.c_str());
    }
}

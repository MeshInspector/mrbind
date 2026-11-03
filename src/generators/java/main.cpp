#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/java/generator.h"

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

    mrbind::Java::Generator generator;

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
        .desc = "Output directory path, the root of the Java sources (the package directories are created in it). This directory is created if it doesn't exist. Otherwise it must be already empty, or you must specify `--clean-output-dir`.",
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
    args_parser.AddFlag("--package", {
        .arg_names = {"name"},
        .desc = "Mandatory. The base Java package, e.g. `com.example.mylib`. The runtime classes go directly into it, the C++ namespaces become its subpackages, and the raw downcall handles go to its `ffi` subpackage.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.base_package = args.front();
        },
    });
    args_parser.AddFlag("--imported-lib-name", {
        .arg_names = {"name"},
        .desc = "Mandatory. The name of the shared library compiled from the generated C bindings, without the `lib` prefix and the extension. It's loaded with `System.loadLibrary()`.",
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
    // Parses a C++-style `Foo::Bar` namespace name into its parts, like the C# generator does.
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
        .desc = "A C++-style `Foo::Bar` namespace name. The entities of the global namespace (including the `std::` types) are put into the package of this namespace. Without this they go directly to the base package.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.forced_namespace = ParseNamespace(args.front());
        },
    });
    args_parser.AddFlag("--replace-namespace", {
        .allow_repeat = true,
        .arg_names = {"from", "to"},
        .desc = "Takes two C++-style namespace names. Replaces the leading namespaces of the entities, which decides their packages. The flag can be specified multiple times, the replacements are applied in the same order. The second argument can be `::` to remove a namespace entirely, e.g. `--replace-namespace MyLib ::` puts the entities of `MyLib` directly into the base package, so the users write `mylib.Foo` and not `mylib.mylib.Foo`. Like in the C# and Rust generators.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            // The second argument specifically can be `::`, which is otherwise not a valid namespace name.
            if (args[0].empty())
                throw std::runtime_error("The first argument of `--replace-namespace` can't be empty, use `--force-namespace` instead.");
            generator.replaced_namespaces.emplace_back(ParseNamespace(args[0]), args[1] == "::" ? std::vector<std::string>{} : ParseNamespace(args[1]));
        },
    });
    args_parser.AddFlag("--no-deref-expected", {
        .desc = "When a C++ function returns `std/tl::expected`, don't automatically dereference it and throw on failure, and instead return the `expected` object as is. Like in the C# generator.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.deref_expected = false;
        },
    });
    args_parser.AddFlag("--download-native-libraries", {
        .desc = "If the jar bundles no native libraries for the current platform, download them on the first use from the locations listed in the resource `native/native.txt` next to `Ffi`: the line `url <base URL>`, then `<sha256> <archive name>` per platform, the archive names ending with `_<os>-<arch>.zip`. See `docs/generating_java.md`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.download_native_libraries = true;
        },
    });
    args_parser.AddFlag("--max-class-name-length", {
        .arg_names = {"n"},
        .desc = "Shorten the generated class names to this length, plus a hash. Each class is a file, and Windows has a small default path length limit. The default is 100, 0 disables this.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.max_class_name_length = mrbind::CommandLineParser::ParseSizeT(std::string(args.front()));
        },
    });
    args_parser.AddFlag("--verbose", {
        .desc = "List the functions that got skipped because their C types can't be spelled in Java.",
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

    if (generator.base_package.empty())
        throw std::runtime_error("`--package` is required.");
    if (!generator.imported_lib_names.contains(""))
        throw std::runtime_error("`--imported-lib-name` is required.");

    generator.Generate();

    for (const auto &[relative_path, contents] : generator.output_files)
    {
        std::filesystem::path out_path = output_dir_fs_path / mrbind::MakePath(relative_path);
        std::filesystem::create_directories(out_path.parent_path());

        if (std::filesystem::exists(out_path))
            throw std::runtime_error("Output file already exists: `" + relative_path + "`.");

        std::ofstream out(out_path, std::ios_base::out);
        if (!out)
            throw std::runtime_error("Failed to open file for writing: `" + mrbind::PathToString(out_path) + "`.");
        out << contents;
        if (!out)
            throw std::runtime_error("Failed to write to file: `" + mrbind::PathToString(out_path) + "`.");
    }

    std::fprintf(stderr, "Generated Java bindings: %zu functions, %zu of them with raw C types, %zu skipped.\n", generator.num_funcs_total, generator.num_funcs_raw, generator.num_funcs_skipped);
    if (verbose)
    {
        for (const auto &name : generator.skipped_funcs)
            std::fprintf(stderr, "  skipped: %s\n", name.c_str());
    }
}

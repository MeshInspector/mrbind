#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/c_interop/desc_to_and_from_json.h"
#include "generators/csharp/generator.h"

#include <exception>
#include <fstream>
#include <optional>
#include <span>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

int main(int argc, char **argv)
{
    mrbind::SetErrorHandlers();

    std::optional<std::string> input_json_path;
    std::optional<std::string> output_dir_path;
    bool clean_output_dir = false;

    mrbind::CSharp::Generator generator;

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
            generator.imported_lib_name = args.front();
        },
    });
    args_parser.AddFlag("--helpers-namespace", {
        .arg_names = {"name"},
        .desc = "Mandatory. The parameter is a C++-style `Foo::Bar` namespace name. This will be used in the generated C# to store some additional utilities. This namespace doesn't have to exist in the C++ input. In C# this will be generated as a static class, rather than an actual namespace.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.helpers_namespace = generator.ParseNameOrThrow(std::string(args.front()));
        },
    });
    args_parser.AddFlag("--replace-namespace", {
        .allow_repeat = true,
        .arg_names = {"from", "to"},
        .desc = "Takes two C++-style namespace names. Applies a replacement to the prefixes of all C++ names in the input. The flag can be specified multiple times, the replacements will be applied in the same order. The second argument can be `::` to remove a namespace entirely.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            // The second parameter specifically can be `::`, so we special-case it here, since `::` is otherwise not a valid qualified name.
            cppdecl::QualifiedName second;
            if (args[1] != "::")
                second = generator.ParseNameOrThrow(std::string(args[1]));

            generator.replaced_namespaces.emplace_back(generator.ParseNameOrThrow(std::string(args[0])), std::move(second));
        },
    });
    args_parser.AddFlag("--force-namespace", {
        .arg_names = {"name"},
        .desc = "The parameter is a C++-style `Foo::Bar` namespace name. Any C++ names that don't start with the first component of this namespae (`Foo` in this example) will have this namespace prepended to them.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            generator.forced_namespace = generator.ParseNameOrThrow(std::string(args.front()));
        },
    });
    args_parser.AddFlag("--begin-func-names-with-lowercase", {
        .desc = "Name C# functions in the style `fooBar()` instead of the default `FooBar()`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.begin_func_names_with_lowercase = true;
        },
    });
    args_parser.AddFlag("--wrap-doc-comments-in-summary-tag", {
        .desc = "A simple way to expose documentation comments (usually Doxygen style) to C# IDEs that only show doc comments if they are annotated with XML tags. This wraps every documentation comment in a `<summary>` tag, which is enough to display it to the user, but any Doxygen tags will be pasted as is, rather than parsed.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.wrap_doc_comments_in_summary_tag = true;
        },
    });
    args_parser.AddFlag("--csharp-version", {
        .arg_names = {"number"},
        .desc = "Tune the generated bindings for a specific C# version. Defaults to " + std::to_string(generator.csharp_version) + ".",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            if (args.front().size() > 2 || !std::all_of(args.front().begin(), args.front().end(), cppdecl::IsDigit))
                throw std::runtime_error("Not a valid C# version: " + std::string(args.front()));

            generator.csharp_version = std::atoi(args.front().data()); // We guarantee that those are null-terminated.
        },
    });
    args_parser.AddFlag("--dotnet-version", {
        .arg_names = {"number"},
        .desc = "Tune the generated bindings for a specific .NET framework version. Pass e.g. `8` for .NET 8, or `2.1` for .NET Core 2.1, or `std2.0` for .NET Standard 2.0.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            try
            {
                std::string_view arg = args.front();

                bool is_std = false;
                if (arg.starts_with("std"))
                {
                    arg.remove_prefix(3);
                    is_std = true;
                }

                if (arg.empty())
                    throw std::runtime_error("Expected the version number but reached the end of string.");
                if (!cppdecl::IsDigit(arg.front()))
                    throw std::runtime_error("Expected a version digit but got character `" + std::string(1, arg.front()) + "`.");

                generator.dotnet_version = 0;
                do
                {
                    generator.dotnet_version = generator.dotnet_version * 10 + (arg.front() - '0');
                    arg.remove_prefix(1);
                }
                while (!arg.empty() && cppdecl::IsDigit(arg.front()));

                // The smallest digit is reserved for the minor version.
                generator.dotnet_version *= 10;

                if (!arg.empty())
                {
                    if (!arg.starts_with('.'))
                        throw std::runtime_error("Expected `.` or end of string after the first digit of the version.");
                    arg.remove_prefix(1);

                    if (arg.empty() || !cppdecl::IsDigit(arg.front()))
                        throw std::runtime_error("Expected the minor version digit after the `.`.");

                    generator.dotnet_version += (arg.front() - '0');
                    arg.remove_prefix(1);
                }

                if (!arg.empty())
                    throw std::runtime_error("Unexpected junk after the version: `" + std::string(arg) + "`.");

                if (is_std)
                    generator.dotnet_version = -generator.dotnet_version;
            }
            catch (...)
            {
                std::throw_with_nested(std::runtime_error("While parsing .NET version `" + std::string(args.front()) + "`:"));
            }
        },
    });
    args_parser.AddFlag("--no-csharp-spans", {
        .desc = "Don't use C# classes `Span<T>` and `ReadOnlySpan<T> in generated code, including for strings. This is done automatically for older `--dotnet-version` values, or you can force it via this flag if you prever `string`s in function parameters and return types.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.allow_csharp_spans = false;
        },
    });
    args_parser.AddFlag("--no-deref-expected", {
        .desc = "When a C++ function returns `std/tl::expected`, don't automatically dereference it and throw failure, and instead return the `expected` object as is.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.deref_expected = false;
        },
    });
    args_parser.AddFlag("--move-classes-returned-by-value", {
        .desc = "Apply the `_Moved<T>` wrapper to non-trivial classes returned from functions by value. This helps to emulate C++ value categories, at the cost of making the bindings harder to understand and use, since now you either have to use `.Value` all the time to access the underlying `T` in the returned `_Moved<T>`, or save the function call result to an explicitly typed variable (not `var`).",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            (void)args;
            generator.move_in_by_value_return = true;
        },
    });

    mrbind::CommandLineArgsAsUtf8 args(argc, argv);
    args_parser.Parse(args.argc, args.argv);

    // Load input JSON.
    if (!input_json_path)
        throw std::runtime_error("`--input-json` is required.");
    generator.c_desc = mrbind::CInterop::LoadOutputDescFromFile(input_json_path->c_str());

    // Prepare output dir.
    if (!output_dir_path)
        throw std::runtime_error("`--output-dir` is required.");
    const std::filesystem::path output_dir_fs_path = mrbind::MakePath(*output_dir_path);
    mrbind::PrepareOutputDir(output_dir_fs_path, clean_output_dir ? "" : "--clean-output-dir");

    if (generator.imported_lib_name.empty())
        throw std::runtime_error("`--imported-lib-name` is required.");

    if (generator.helpers_namespace.IsEmpty())
        throw std::runtime_error("`--helpers-namespace` is required.");

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

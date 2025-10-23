#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "common/strings.h"
#include "generators/c_interop/c_output_desc.h"
#include "generators/c_interop/desc_to_and_from_json.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

#include <fstream>
#include <optional>
#include <span>
#include <string>
#include <unordered_set>
#include <vector>

namespace mrbind::CSharp
{
    [[nodiscard]] std::string CppdeclToCode(const auto &value)
    {
        return cppdecl::ToCode(value, {});
    }

    struct OutputFile
    {
        std::string contents;

        // The current class and namespace stack.
        // This also affects the indentation depth.
        std::vector<cppdecl::UnqualifiedName> current_scope;

        void DumpToOstream(std::ostream &out) const
        {
            out << contents;
        }

        // Writes the string with automatic indentation.
        void WriteString(std::string_view input)
        {
            bool first = true;
            Strings::Split(input, "\n", [&](std::string_view part)
            {
                if (first)
                    first = false;
                else
                    contents += '\n';

                // Only indent non-empty strings.
                if (!part.empty() && part.find_first_not_of(' ') != std::string_view::npos)
                {
                    for (std::size_t i = 0; i < current_scope.size(); i++)
                        contents += "    ";

                    contents += part;
                }

                return false;
            });
        }

        // Writes `}` and pops one scope from `current_scope`.
        void PopScope()
        {
            assert(!current_scope.empty());
            current_scope.pop_back();
            WriteString("}\n");
        }

        // Writes `code_header {` to the file and pushes one scope called `cpp_name` to `current_scope`.
        void PushScope(cppdecl::UnqualifiedName cpp_name, std::string_view code_header)
        {
            WriteString(code_header);
            WriteString("\n{\n");
            current_scope.push_back(std::move(cpp_name));
        }

        // Repeatedly calls `PushScope()` and `PopScope()` to end up in the desired namespace.
        void EnsureNamespace(std::span<const cppdecl::UnqualifiedName> new_namespace)
        {
            if (new_namespace.empty())
            {
                // Pop any existing namespaces.
                while (!current_scope.empty())
                    PopScope();
                return;
            }

            for (std::size_t i = 0; i < new_namespace.size(); i++)
            {
                if (i < current_scope.size() && current_scope[i] == new_namespace[i])
                    continue; // This namespace is already open, nothing to do.

                // Pop any existing namespaces.
                while (i < current_scope.size())
                    PopScope();

                // Push new ones, assuming those are plain namespaces.
                PushScope(new_namespace[i], "namespace " + CppdeclToCode(new_namespace[i]));
            }
        }
    };

    struct Generator
    {
        CInterop::OutputDesc c_desc;

        // Maps relative file paths (without extensions) to the file descriptions and contents.
        std::unordered_map<std::string, OutputFile> output_files;

        void Generate()
        {
            auto &file = output_files.try_emplace("MR/blah").first->second;
            file.EnsureNamespace({{cppdecl::UnqualifiedName{.var = "MR", .template_args = {}}, cppdecl::UnqualifiedName{.var = "NS", .template_args = {}}}});

            file.WriteString("public void foo() {}\n");

            file.EnsureNamespace({});
        }
    };
}

int main(int argc, char **argv)
{
    mrbind::SetErrorHandlers();

    std::optional<std::string> input_json_path;
    std::optional<std::string> output_dir_path;
    bool clean_output_dir = false;

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

#include "common/command_line_args_as_utf8.h"
#include "common/command_line_parser.h"
#include "common/filesystem.h"
#include "common/set_error_handlers.h"
#include "generators/common/data_from_json.h"
#include "generators/js/generator.h"

#include <fstream>
#include <optional>
#include <stdexcept>
#include <string>

int main(int argc, char **argv)
{
    mrbind::SetErrorHandlers();

    std::optional<std::string> input_json_path;
    std::optional<std::string> output_source_path;

    mrbind::JS::Generator generator;

    mrbind::CommandLineParser args_parser;

    args_parser.AddFlag("--input", {
        .arg_names = {"in.json"},
        .desc = "Input JSON file, as produced by `mrbind --format=json`.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            input_json_path = args.front();
        },
    });
    args_parser.AddFlag("--output", {
        .arg_names = {"out.cpp"},
        .desc = "Output C++ source path.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            output_source_path = args.front();
        },
    });
    args_parser.AddFlag("--replace-name-prefix", {
        .allow_repeat = true,
        .arg_names = {"A::B", "C::D"},
        .desc = "Replaces the `A::B` prefix (if any) with `C::D` in every C++ name, before converting them to JS names. Pass `::` as either of the arguments to use an empty prefix. This flag can act on both namespaces and on specific type/function names (the template arguments on which can be omitted). This flag can be used multiple times.",
        .func = [&](mrbind::CommandLineParser::ArgSpan args)
        {
            auto &pair = generator.replaced_name_prefixes.emplace_back();
            if (args[0] != "::")
                pair.first = generator.name_parser(std::string(args[0]));
            if (args[1] != "::")
                pair.first = generator.name_parser(std::string(args[1]));
        },
    });

    mrbind::CommandLineArgsAsUtf8 args(argc, argv);
    args_parser.Parse(args.argc, args.argv);

    // Check for missing mandatory arguments.
    if (!input_json_path)
        throw std::runtime_error("Missing `--input`, consult `--help` for usage.");
    if (!output_source_path)
        throw std::runtime_error("Missing `--output`, consult `--help` for usage.");

    // Parse the input file.
    generator.data = mrbind::LoadDataFromFile(input_json_path->c_str());

    // Generate!
    generator.Generate();

    { // Write to the output file.
        std::ofstream out(mrbind::MakePath(*output_source_path));
        if (!out)
            throw std::runtime_error("Unable to open the output file: `" + *output_source_path + "`.");
        out << generator.output_text;
        if (!out)
            throw std::runtime_error("Failed to write to the output file: `" + *output_source_path + "`.");
    }
}

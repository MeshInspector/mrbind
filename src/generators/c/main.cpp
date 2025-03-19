#include "common/parsed_data.h"
#include "common/set_error_handlers.h"
#include "generators/common/command_line_args_as_utf8.h"
#include "generators/common/data_from_json.h"
#include "generators/common/load_file.h"
#include <iostream>

int main(int raw_argc, char **raw_argv)
{
    mrbind::SetErrorHandlers();

    mrbind::CommandLineArgsAsUtf8 args(raw_argc, raw_argv);

    if (args.argc != 2)
        throw std::runtime_error("Usage: mrbind_gen_c <input.json>");

    mrbind::ParsedFile data = mrbind::JsonToParsedFile(args.argv[1], mrbind::LoadTextFile(args.argv[1]));
}

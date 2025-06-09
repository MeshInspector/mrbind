#pragma once

#include "common/parsed_data.h"

namespace mrbind
{
    // Parses the JSON string and returns the data. Throws on failure.
    // `input` is the JSON string. If you have a file, consider using `LoadTextFile()` to load the contents from it.
    // `input_filename_for_errors` is the input filename that will be shown in the error messages. Can be anything.
    [[nodiscard]] ParsedFile JsonToParsedFile(std::string input_filename_for_errors, std::string_view input);
}

#pragma once

#include "common/parsed_data.h"

namespace mrbind::CInterop
{
    struct OutputDesc;
    void OutputDescToJson(const OutputDesc &file, std::ofstream &out);

    // Parses the JSON string. Throws on failure.
    // `input` is the JSON string. If you have a file, consider using `LoadTextFile()` to load the contents from it.
    // `input_filename_for_errors` is the input filename that will be shown in the error messages. Can be anything.
    [[nodiscard]] OutputDesc JsonToOutputDesc(std::string_view input_filename_for_errors, std::string_view input);

    // Loads the description from a JSON. `filename` is in UTF-8. Throws in failure.
    [[nodiscard]] OutputDesc LoadOutputDescFromFile(const char *filename);
}

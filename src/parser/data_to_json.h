#pragma once

#include "common/parsed_data.h"

namespace mrbind
{
    struct ParsedFile;
    void ParsedFileToJson(const ParsedFile &file, std::ofstream &out);
}

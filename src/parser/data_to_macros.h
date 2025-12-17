#pragma once

#include "common/parsed_data.h"

#include <fstream>

namespace mrbind
{
    void ParsedFileToMacros(const ParsedFile &file, std::ofstream &out);
}

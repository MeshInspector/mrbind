#pragma once

#include <string>

namespace mrbind
{
    // Loads the contents of the specified text file, throws on failure.
    // The name is always treated as UTF-8.
    // `mode` is the `std::fopen`-style file access mode.
    std::string LoadTextFile(const char *filename);
}

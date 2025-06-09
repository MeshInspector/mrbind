#include "load_file.h"

#include "common/filesystem.h"

#include <filesystem>
#include <fstream>
#include <sstream>

namespace mrbind
{
    std::string LoadTextFile(const char *filename)
    {
        #ifdef _WIN32
        std::ifstream input(MakePath(filename));
        #else
        std::ifstream input(filename);
        #endif

        if (!input)
            throw std::runtime_error(std::string("Unable to open file at: ") + filename);

        std::ostringstream ss;
        ss << input.rdbuf();
        if (!input)
            throw std::runtime_error(std::string("Unable to read from file at: ") + filename);
        return std::move(ss).str();
    }
}

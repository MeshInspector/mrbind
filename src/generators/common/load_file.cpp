#include "load_file.h"

#include <filesystem>
#include <fstream>
#include <sstream>

namespace mrbind
{
    std::string LoadTextFile(const char *filename)
    {
        #ifndef _WIN32

        #ifdef __GNUC__
        #pragma GCC diagnostic push
        #pragma GCC diagnostic ignored "-Wdeprecated-declarations"
        #endif
        // No good alternative to this deprecated function.
        std::ifstream input(std::filesystem::u8path(filename));
        #ifdef __GNUC__
        #pragma GCC diagnostic pop
        #endif

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

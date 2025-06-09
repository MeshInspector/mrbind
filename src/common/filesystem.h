#pragma once

#include <filesystem>

namespace mrbind
{
    // Make path from a UTF-8 string.
    [[nodiscard]] inline std::filesystem::path MakePath(std::string_view string)
    {
        #ifdef __GNUC__
        #pragma GCC diagnostic push
        #pragma GCC diagnostic ignored "-Wdeprecated-declarations"
        #endif
        // No good alternative to the deprecated `u8path()`.
        return std::filesystem::u8path(string);
        #ifdef __GNUC__
        #pragma GCC diagnostic pop
        #endif
    }

    // Convert a path to an UTF-8 string.
    [[nodiscard]] inline std::string PathToString(const std::filesystem::path &path)
    {
        auto ret = path.u8string();
        return std::string(std::string_view(reinterpret_cast<const char *>(ret.c_str()), ret.size()));
    }
}

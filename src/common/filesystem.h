#pragma once

#include <filesystem>
#include <optional>

namespace mrbind
{
    // Make path from a UTF-8 string.
    [[nodiscard]] std::filesystem::path MakePath(std::string_view string);

    // Convert a path to an UTF-8 string.
    [[nodiscard]] std::string PathToString(const std::filesystem::path &path);

    // Prepares an output directory. If it doesn't exist, creates it.
    // If it already exists but isn't a directory, throws.
    // If it already exists but isn't empty, either destroys the content if `flag_to_clean` is empty,
    //   or otherwise throws and says that this flag is needed to clean the directory.
    void PrepareOutputDir(const std::filesystem::path &dir_path, std::string_view flag_to_clean);
}

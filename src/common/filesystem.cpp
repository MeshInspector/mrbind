#include "filesystem.h"

namespace mrbind
{
    std::filesystem::path MakePath(std::string_view string)
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

    std::string PathToString(const std::filesystem::path &path)
    {
        auto ret_u8 = path.u8string();
        std::string str(std::string_view(reinterpret_cast<const char *>(ret_u8.c_str()), ret_u8.size()));

        // On Windows, replace `\` -> `/`.
        // This helps us with the generated `#include` paths in C bindings, among other things.
        #ifdef _WIN32
        for (char &ch : str)
        {
            if (ch == '\\')
                ch = '/';
        }
        #endif

        return str;
    }

    void PrepareOutputDir(const std::filesystem::path &dir_path, std::string_view flag_to_clean)
    {
        auto stat = std::filesystem::status(dir_path);

        // Complain if the output path already exists but isn't a directory.
        if (stat.type() != std::filesystem::file_type::not_found && stat.type() != std::filesystem::file_type::directory)
            throw std::runtime_error("Output path `" + mrbind::PathToString(dir_path) + "` already exists but is not a directory.");

        if (stat.type() == std::filesystem::file_type::not_found)
        {
            // Create the missing output directory.
            std::filesystem::create_directories(dir_path);
        }
        else
        {
            // Destroy everything in the output directory or complain if `--clean-output-dirs` isn't specified.
            for (const std::filesystem::directory_entry &e : std::filesystem::directory_iterator(dir_path))
            {
                if (!flag_to_clean.empty())
                    throw std::runtime_error("Output directory `" + mrbind::PathToString(dir_path) + "` is not empty, and `" + std::string(flag_to_clean) + "` wasn't specfied.");

                std::filesystem::remove_all(e);
            }
        }
    }
}

#pragma once

#include <filesystem>

namespace MR::StdFilesystem
{
    inline std::filesystem::path GetPath() {return {};}
    inline void SetPath(std::filesystem::path) {}
    inline void SetPathConstRef(const std::filesystem::path &) {}
    inline void SetPathDefTrivial(std::filesystem::path = {}) {}
    inline void SetPathDef(std::filesystem::path = "hmm") {}
}

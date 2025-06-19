#include "MR/test_std_filesystem.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_filesystem.h>

#include <stdexcept>


MR_C_std_filesystem_path *MR_StdFilesystem_GetPath(void)
{
    using namespace MR;
    using namespace StdFilesystem;
    return (MR_C_std_filesystem_path *)new std::filesystem::path(MR::StdFilesystem::GetPath());
}

void MR_StdFilesystem_SetPath(const char *_1, const char *_1_end)
{
    using namespace MR;
    using namespace StdFilesystem;
    MR::StdFilesystem::SetPath(
        (_1 ? (_1_end ? MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1, _1_end)) : MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1))) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdFilesystem_SetPathConstRef(const MR_C_std_filesystem_path *_1)
{
    using namespace MR;
    using namespace StdFilesystem;
    MR::StdFilesystem::SetPathConstRef(
        (_1 ? *(const std::filesystem::path *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdFilesystem_SetPathDefTrivial(const char *_1, const char *_1_end)
{
    using namespace MR;
    using namespace StdFilesystem;
    MR::StdFilesystem::SetPathDefTrivial(
        (_1 ? (_1_end ? MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1, _1_end)) : MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1))) : std::filesystem::path(std::filesystem::path{}))
    );
}

void MR_StdFilesystem_SetPathDef(const char *_1, const char *_1_end)
{
    using namespace MR;
    using namespace StdFilesystem;
    MR::StdFilesystem::SetPathDef(
        (_1 ? (_1_end ? MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1, _1_end)) : MRBINDC_IGNORE_DEPRECATION(std::filesystem::u8path(_1))) : std::filesystem::path("hmm"))
    );
}


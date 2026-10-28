#define MR_C_BUILD_LIBRARY
#include "MR/test_std_filesystem.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_filesystem.h>

#include <filesystem>
#include <stdexcept>


MR_C_std_filesystem_path *MR_StdFilesystem_GetPath(void)
{
    MRBINDC_TRY(
    return (MR_C_std_filesystem_path *)new std::filesystem::path(::MR::StdFilesystem::GetPath());
    ) // MRBINDC_TRY
}

void MR_StdFilesystem_SetPath(const char *_1, const char *_1_end)
{
    MRBINDC_TRY(
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::StdFilesystem::SetPath(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), (_1_end ? std::filesystem::u8path(_1, _1_end) : std::filesystem::u8path(_1)))
    );
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

void MR_StdFilesystem_SetPathConstRef(const char *_1, const char *_1_end)
{
    MRBINDC_TRY(
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::StdFilesystem::SetPathConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), (_1_end ? std::filesystem::u8path(_1, _1_end) : std::filesystem::u8path(_1)))
    );
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

void MR_StdFilesystem_SetPathDefTrivial(const char *_1, const char *_1_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdFilesystem;
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::StdFilesystem::SetPathDefTrivial(
        (_1 ? (_1_end ? std::filesystem::u8path(_1, _1_end) : std::filesystem::u8path(_1)) : std::filesystem::path(std::filesystem::path{}))
    );
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

void MR_StdFilesystem_SetPathDef(const char *_1, const char *_1_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdFilesystem;
    MRBINDC_IGNORE_DEPRECATION(
    ::MR::StdFilesystem::SetPathDef(
        (_1 ? (_1_end ? std::filesystem::u8path(_1, _1_end) : std::filesystem::u8path(_1)) : std::filesystem::path("hmm"))
    );
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}


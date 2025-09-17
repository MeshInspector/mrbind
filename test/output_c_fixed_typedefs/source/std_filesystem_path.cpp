#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_filesystem_path.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <filesystem>
#include <stdexcept>
#include <string>


MR_C_std_filesystem_path *MR_C_std_filesystem_path_DefaultConstruct(void)
{
    return (MR_C_std_filesystem_path *)new std::filesystem::path(std::filesystem::path());
}

MR_C_std_filesystem_path *MR_C_std_filesystem_path_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_filesystem_path *)(new std::filesystem::path[num_elems]{});
}

MR_C_std_filesystem_path *MR_C_std_filesystem_path_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_filesystem_path *other)
{
    return (MR_C_std_filesystem_path *)new std::filesystem::path(std::filesystem::path(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::filesystem::path) MRBINDC_CLASSARG_COPY(other, (std::filesystem::path), std::filesystem::path) MRBINDC_CLASSARG_MOVE(other, (std::filesystem::path), std::filesystem::path) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::filesystem::path) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::filesystem::path) MRBINDC_CLASSARG_END(other, std::filesystem::path))
    ));
}

MR_C_std_filesystem_path *MR_C_std_filesystem_path_ConstructFrom(const char *other, const char *other_end)
{
    MRBINDC_IGNORE_DEPRECATION(
    return (MR_C_std_filesystem_path *)new std::filesystem::path(std::filesystem::path(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), (other_end ? std::filesystem::u8path(other, other_end) : std::filesystem::u8path(other)))
    ));
    ) // MRBINDC_IGNORE_DEPRECATION
}

void MR_C_std_filesystem_path_AssignFromAnother(MR_C_std_filesystem_path *_this, MR_C_PassBy other_pass_by, MR_C_std_filesystem_path *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::filesystem::path *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::filesystem::path) MRBINDC_CLASSARG_COPY(other, (std::filesystem::path), std::filesystem::path) MRBINDC_CLASSARG_MOVE(other, (std::filesystem::path), std::filesystem::path) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::filesystem::path) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::filesystem::path) MRBINDC_CLASSARG_END(other, std::filesystem::path))
    );
}

void MR_C_std_filesystem_path_AssignFrom(MR_C_std_filesystem_path *_this, const char *other, const char *other_end)
{
    MRBINDC_IGNORE_DEPRECATION(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::filesystem::path *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), (other_end ? std::filesystem::u8path(other, other_end) : std::filesystem::u8path(other)))
    );
    ) // MRBINDC_IGNORE_DEPRECATION
}

void MR_C_std_filesystem_path_Destroy(const MR_C_std_filesystem_path *_this)
{
    delete ((const std::filesystem::path *)_this);
}

void MR_C_std_filesystem_path_DestroyArray(const MR_C_std_filesystem_path *_this)
{
    delete[] ((const std::filesystem::path *)_this);
}

const MR_C_std_filesystem_path *MR_C_std_filesystem_path_OffsetPtr(const MR_C_std_filesystem_path *ptr, ptrdiff_t i)
{
    return (const MR_C_std_filesystem_path *)(((const std::filesystem::path *)ptr) + i);
}

MR_C_std_filesystem_path *MR_C_std_filesystem_path_OffsetMutablePtr(MR_C_std_filesystem_path *ptr, ptrdiff_t i)
{
    return (MR_C_std_filesystem_path *)(((std::filesystem::path *)ptr) + i);
}

MR_C_std_string *MR_C_std_filesystem_path_GetString(const MR_C_std_filesystem_path *_this)
{
    auto ret = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::filesystem::path *)(_this)).u8string();
    return (MR_C_std_string *)new std::string(std::string(reinterpret_cast<const char *>(ret.c_str()), ret.size()));
}


#define MR_C_BUILD_LIBRARY
#include "std_string_view.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <stdexcept>
#include <string_view>


MR_C_std_string_view *MR_C_std_string_view_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)new std::string_view(std::string_view());
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_C_std_string_view_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)(new std::string_view[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_C_std_string_view_ConstructFromAnother(const MR_C_std_string_view *other)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)new std::string_view(std::string_view(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::string_view(*(std::string_view *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_C_std_string_view_ConstructFrom(const char *other, const char *other_end)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)new std::string_view(std::string_view(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), (other_end ? std::string_view(other, other_end) : std::string_view(other)))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_string_view_AssignFromAnother(MR_C_std_string_view *_this, const MR_C_std_string_view *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::string_view *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::string_view(*(std::string_view *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_string_view_AssignFrom(MR_C_std_string_view *_this, const char *other, const char *other_end)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::string_view *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), (other_end ? std::string_view(other, other_end) : std::string_view(other)))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_string_view_Destroy(const MR_C_std_string_view *_this)
{
    MRBINDC_TRY(
    delete ((const std::string_view *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_string_view_DestroyArray(const MR_C_std_string_view *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::string_view *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_string_view *MR_C_std_string_view_OffsetPtr(const MR_C_std_string_view *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_string_view *)(((const std::string_view *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_C_std_string_view_OffsetMutablePtr(MR_C_std_string_view *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)(((std::string_view *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_string_view_size(const MR_C_std_string_view *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::string_view *)(_this)).size();
    ) // MRBINDC_TRY
}

const char *MR_C_std_string_view_data(const MR_C_std_string_view *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::string_view *)(_this)).data();
    ) // MRBINDC_TRY
}

const char *MR_C_std_string_view_data_end(const MR_C_std_string_view *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::string_view *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::string_view *)(_this)).size();
    ) // MRBINDC_TRY
}


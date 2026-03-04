#define MR_C_BUILD_LIBRARY
#include "std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <stdexcept>
#include <string>


MR_C_std_string *MR_C_std_string_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)new std::string(std::string());
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_string_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)(new std::string[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::string);
    return (MR_C_std_string *)new std::string(std::string(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, (std::string), std::string) MRBINDC_CLASSARG_MOVE(other, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(other, std::string))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_string_ConstructFrom(const char *other, const char *other_end)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)new std::string(std::string(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), (other_end ? std::string(other, other_end) : std::string(other)))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_string_AssignFromAnother(MR_C_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::string);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::string *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, (std::string), std::string) MRBINDC_CLASSARG_MOVE(other, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(other, std::string))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_string_AssignFrom(MR_C_std_string *_this, const char *other, const char *other_end)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::string *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), (other_end ? std::string(other, other_end) : std::string(other)))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_string_Destroy(const MR_C_std_string *_this)
{
    MRBINDC_TRY(
    delete ((const std::string *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_string_DestroyArray(const MR_C_std_string *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::string *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_C_std_string_OffsetPtr(const MR_C_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_string *)(((const std::string *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_string_OffsetMutablePtr(MR_C_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)(((std::string *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_string_size(const MR_C_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::string *)(_this)).size();
    ) // MRBINDC_TRY
}

const char *MR_C_std_string_data(const MR_C_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::string *)(_this)).data();
    ) // MRBINDC_TRY
}

const char *MR_C_std_string_data_mut(MR_C_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::string *)(_this)).data();
    ) // MRBINDC_TRY
}

const char *MR_C_std_string_data_end(const MR_C_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::string *)(_this)).data() + ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::string *)(_this)).size();
    ) // MRBINDC_TRY
}

char *MR_C_std_string_data_end_mut(MR_C_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::string *)(_this)).data() + ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::string *)(_this)).size();
    ) // MRBINDC_TRY
}


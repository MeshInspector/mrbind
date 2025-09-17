#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "expected_int32_t_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <expected>
#include <stdexcept>
#include <string>


MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_DefaultConstruct(void)
{
    return (MR_C_expected_int32_t_std_string *)new std::expected<int32_t, std::string>(std::expected<int32_t, std::string>());
}

MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_expected_int32_t_std_string *)(new std::expected<int32_t, std::string>[num_elems]{});
}

MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_expected_int32_t_std_string *other)
{
    return (MR_C_expected_int32_t_std_string *)new std::expected<int32_t, std::string>(std::expected<int32_t, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int32_t, std::string>))
    ));
}

MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_ConstructFrom(MR_C_PassBy other_pass_by, MR_C_expected_int32_t_std_string *other)
{
    return (MR_C_expected_int32_t_std_string *)new std::expected<int32_t, std::string>(std::expected<int32_t, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int32_t, std::string>))
    ));
}

void MR_C_expected_int32_t_std_string_AssignFromAnother(MR_C_expected_int32_t_std_string *_this, MR_C_PassBy other_pass_by, MR_C_expected_int32_t_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int32_t, std::string>))
    );
}

void MR_C_expected_int32_t_std_string_AssignFrom(MR_C_expected_int32_t_std_string *_this, MR_C_PassBy other_pass_by, MR_C_expected_int32_t_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int32_t, std::string>), std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int32_t, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int32_t, std::string>))
    );
}

void MR_C_expected_int32_t_std_string_Destroy(const MR_C_expected_int32_t_std_string *_this)
{
    delete ((const std::expected<int32_t, std::string> *)_this);
}

void MR_C_expected_int32_t_std_string_DestroyArray(const MR_C_expected_int32_t_std_string *_this)
{
    delete[] ((const std::expected<int32_t, std::string> *)_this);
}

const MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_OffsetPtr(const MR_C_expected_int32_t_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_expected_int32_t_std_string *)(((const std::expected<int32_t, std::string> *)ptr) + i);
}

MR_C_expected_int32_t_std_string *MR_C_expected_int32_t_std_string_OffsetMutablePtr(MR_C_expected_int32_t_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_expected_int32_t_std_string *)(((std::expected<int32_t, std::string> *)ptr) + i);
}

const int32_t *MR_C_expected_int32_t_std_string_GetValue(const MR_C_expected_int32_t_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int32_t, std::string> *)(_this));
    return _self ? &*_self : nullptr;
}

const MR_C_std_string *MR_C_expected_int32_t_std_string_GetError(const MR_C_expected_int32_t_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int32_t, std::string> *)(_this));
    return (const MR_C_std_string *)(_self ? nullptr : &_self.error());
}

int32_t *MR_C_expected_int32_t_std_string_GetMutableValue(MR_C_expected_int32_t_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, std::string> *)(_this));
    return _self ? &*_self : nullptr;
}

MR_C_std_string *MR_C_expected_int32_t_std_string_GetMutableError(MR_C_expected_int32_t_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, std::string> *)(_this));
    return (MR_C_std_string *)(_self ? nullptr : &_self.error());
}


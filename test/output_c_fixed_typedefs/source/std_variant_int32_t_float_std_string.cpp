#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_variant_int32_t_float_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <variant>


MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_DefaultConstruct(void)
{
    return (MR_C_std_variant_int32_t_float_std_string *)new std::variant<int32_t, float, std::string>(std::variant<int32_t, float, std::string>());
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_variant_int32_t_float_std_string *)(new std::variant<int32_t, float, std::string>[num_elems]{});
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_variant_int32_t_float_std_string *other)
{
    return (MR_C_std_variant_int32_t_float_std_string *)new std::variant<int32_t, float, std::string>(std::variant<int32_t, float, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_COPY(other, (std::variant<int32_t, float, std::string>), std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::variant<int32_t, float, std::string>), std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int32_t, float, std::string>))
    ));
}

void MR_C_std_variant_int32_t_float_std_string_AssignFromAnother(MR_C_std_variant_int32_t_float_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_variant_int32_t_float_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_COPY(other, (std::variant<int32_t, float, std::string>), std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::variant<int32_t, float, std::string>), std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::variant<int32_t, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int32_t, float, std::string>))
    );
}

void MR_C_std_variant_int32_t_float_std_string_Destroy(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    delete ((const std::variant<int32_t, float, std::string> *)_this);
}

void MR_C_std_variant_int32_t_float_std_string_DestroyArray(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    delete[] ((const std::variant<int32_t, float, std::string> *)_this);
}

const MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_OffsetPtr(const MR_C_std_variant_int32_t_float_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_variant_int32_t_float_std_string *)(((const std::variant<int32_t, float, std::string> *)ptr) + i);
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_OffsetMutablePtr(MR_C_std_variant_int32_t_float_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_variant_int32_t_float_std_string *)(((std::variant<int32_t, float, std::string> *)ptr) + i);
}

size_t MR_C_std_variant_int32_t_float_std_string_Index(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, std::string> *)(_this)).index();
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t(int32_t value)
{
    return (MR_C_std_variant_int32_t_float_std_string *)new std::variant<int32_t, float, std::string>(std::variant<int32_t, float, std::string>(std::in_place_index<0>, value));
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_float(float value)
{
    return (MR_C_std_variant_int32_t_float_std_string *)new std::variant<int32_t, float, std::string>(std::variant<int32_t, float, std::string>(std::in_place_index<1>, value));
}

MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string(const char *value, const char *value_end)
{
    return (MR_C_std_variant_int32_t_float_std_string *)new std::variant<int32_t, float, std::string>(std::variant<int32_t, float, std::string>(std::in_place_index<2>, ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)))));
}

void MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t(MR_C_std_variant_int32_t_float_std_string *_this, int32_t value)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this));
    if (_self.index() == 0)
        std::get<0>(_self) = value;
    else
        _self.emplace<0>(value);
}

void MR_C_std_variant_int32_t_float_std_string_AssignAs_float(MR_C_std_variant_int32_t_float_std_string *_this, float value)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this));
    if (_self.index() == 1)
        std::get<1>(_self) = value;
    else
        _self.emplace<1>(value);
}

void MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string(MR_C_std_variant_int32_t_float_std_string *_this, const char *value, const char *value_end)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this));
    if (_self.index() == 2)
        std::get<2>(_self) = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
    else
        _self.emplace<2>(((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value))));
}

const int32_t *MR_C_std_variant_int32_t_float_std_string_Get_int32_t(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    return std::get_if<0>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, std::string> *)(_this)));
}

int32_t *MR_C_std_variant_int32_t_float_std_string_GetMutable_int32_t(MR_C_std_variant_int32_t_float_std_string *_this)
{
    return std::get_if<0>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this)));
}

const float *MR_C_std_variant_int32_t_float_std_string_Get_float(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, std::string> *)(_this)));
}

float *MR_C_std_variant_int32_t_float_std_string_GetMutable_float(MR_C_std_variant_int32_t_float_std_string *_this)
{
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this)));
}

const MR_C_std_string *MR_C_std_variant_int32_t_float_std_string_Get_std_string(const MR_C_std_variant_int32_t_float_std_string *_this)
{
    return (const MR_C_std_string *)(std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, std::string> *)(_this))));
}

MR_C_std_string *MR_C_std_variant_int32_t_float_std_string_GetMutable_std_string(MR_C_std_variant_int32_t_float_std_string *_this)
{
    return (MR_C_std_string *)(std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, std::string> *)(_this))));
}


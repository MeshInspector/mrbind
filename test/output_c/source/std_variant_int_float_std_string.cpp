#include "std_variant_int_float_std_string.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <variant>


MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_DefaultConstruct(void)
{
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>());
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other)
{
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_COPY(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_MOVE(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int, float, std::string>))
    ));
}

void MR_C_std_variant_int_float_std_string_AssignFromAnother(MR_C_std_variant_int_float_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other)
{
    (_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_COPY(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_MOVE(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int, float, std::string>))
    );
}

void MR_C_std_variant_int_float_std_string_Destroy(MR_C_std_variant_int_float_std_string *_this)
{
    delete &(_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

size_t MR_C_std_variant_int_float_std_string_Index(const MR_C_std_variant_int_float_std_string *_this)
{
    return (_this ? *(const std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).index();
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_int(int value)
{
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<0>, value));
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_float(float value)
{
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<1>, value));
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_std_string(const char *value, const char *value_end)
{
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<2>, (value ? (value_end ? std::string(value, value_end) : std::string(value)) : throw std::runtime_error("Parameter `value` can not be null."))));
}

void MR_C_std_variant_int_float_std_string_AssignAs_int(MR_C_std_variant_int_float_std_string *_this, int value)
{
    auto &self = (_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 0)
        std::get<0>(self) = value;
    else
        self.emplace<0>(value);
}

void MR_C_std_variant_int_float_std_string_AssignAs_float(MR_C_std_variant_int_float_std_string *_this, float value)
{
    auto &self = (_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 1)
        std::get<1>(self) = value;
    else
        self.emplace<1>(value);
}

void MR_C_std_variant_int_float_std_string_AssignAs_std_string(MR_C_std_variant_int_float_std_string *_this, const char *value, const char *value_end)
{
    auto &self = (_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (self.index() == 2)
        std::get<2>(self) = (value ? (value_end ? std::string(value, value_end) : std::string(value)) : throw std::runtime_error("Parameter `value` can not be null."));
    else
        self.emplace<2>((value ? (value_end ? std::string(value, value_end) : std::string(value)) : throw std::runtime_error("Parameter `value` can not be null.")));
}

const int *MR_C_std_variant_int_float_std_string_Get_int(const MR_C_std_variant_int_float_std_string *_this)
{
    return std::get_if<0>(&(_this ? *(const std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

int *MR_C_std_variant_int_float_std_string_GetMutable_int(MR_C_std_variant_int_float_std_string *_this)
{
    return std::get_if<0>(&(_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const float *MR_C_std_variant_int_float_std_string_Get_float(const MR_C_std_variant_int_float_std_string *_this)
{
    return std::get_if<1>(&(_this ? *(const std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

float *MR_C_std_variant_int_float_std_string_GetMutable_float(MR_C_std_variant_int_float_std_string *_this)
{
    return std::get_if<1>(&(_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const MR_C_std_string *MR_C_std_variant_int_float_std_string_Get_std_string(const MR_C_std_variant_int_float_std_string *_this)
{
    return (const MR_C_std_string *)(std::get_if<2>(&(_this ? *(const std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

MR_C_std_string *MR_C_std_variant_int_float_std_string_GetMutable_std_string(MR_C_std_variant_int_float_std_string *_this)
{
    return (MR_C_std_string *)(std::get_if<2>(&(_this ? *(std::variant<int, float, std::string>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}


#define MR_C_BUILD_LIBRARY
#include "std_variant_int_float_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <stdexcept>
#include <string>
#include <variant>


MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>());
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)(new std::variant<int, float, std::string>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::variant<int, float, std::string>);
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_COPY(other, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::variant<int, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int, float, std::string>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_AssignFromAnother(MR_C_std_variant_int_float_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::variant<int, float, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::variant<int, float, std::string>) MRBINDC_CLASSARG_COPY(other, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::variant<int, float, std::string>) MRBINDC_CLASSARG_END(other, std::variant<int, float, std::string>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_Destroy(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    delete ((const std::variant<int, float, std::string> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_DestroyArray(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::variant<int, float, std::string> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_OffsetPtr(const MR_C_std_variant_int_float_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_variant_int_float_std_string *)(((const std::variant<int, float, std::string> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_OffsetMutablePtr(MR_C_std_variant_int_float_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)(((std::variant<int, float, std::string> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_variant_int_float_std_string_index(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::variant<int, float, std::string> *)(_this)).index();
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_int(int value)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<0>, value));
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_float(float value)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<1>, value));
    ) // MRBINDC_TRY
}

MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_std_string(const char *value, const char *value_end)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_int_float_std_string *)new std::variant<int, float, std::string>(std::variant<int, float, std::string>(std::in_place_index<2>, ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), (value_end ? std::string(value, value_end) : std::string(value)))));
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_AssignAs_int(MR_C_std_variant_int_float_std_string *_this, int value)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this));
    if (_self.index() == 0)
        std::get<0>(_self) = value;
    else
        _self.emplace<0>(value);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_AssignAs_float(MR_C_std_variant_int_float_std_string *_this, float value)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this));
    if (_self.index() == 1)
        std::get<1>(_self) = value;
    else
        _self.emplace<1>(value);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_int_float_std_string_AssignAs_std_string(MR_C_std_variant_int_float_std_string *_this, const char *value, const char *value_end)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this));
    if (_self.index() == 2)
        std::get<2>(_self) = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), (value_end ? std::string(value, value_end) : std::string(value)));
    else
        _self.emplace<2>(((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), (value_end ? std::string(value, value_end) : std::string(value))));
    ) // MRBINDC_TRY
}

const int *MR_C_std_variant_int_float_std_string_get_int(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return std::get_if<0>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::variant<int, float, std::string> *)(_this)));
    ) // MRBINDC_TRY
}

int *MR_C_std_variant_int_float_std_string_get_int_mut(MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return std::get_if<0>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this)));
    ) // MRBINDC_TRY
}

const float *MR_C_std_variant_int_float_std_string_get_float(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return std::get_if<1>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::variant<int, float, std::string> *)(_this)));
    ) // MRBINDC_TRY
}

float *MR_C_std_variant_int_float_std_string_get_float_mut(MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return std::get_if<1>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_C_std_variant_int_float_std_string_get_std_string(const MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_string *)(std::get_if<2>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::variant<int, float, std::string> *)(_this))));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_variant_int_float_std_string_get_std_string_mut(MR_C_std_variant_int_float_std_string *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)(std::get_if<2>(&((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::variant<int, float, std::string> *)(_this))));
    ) // MRBINDC_TRY
}


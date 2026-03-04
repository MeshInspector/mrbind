#define MR_C_BUILD_LIBRARY
#include "std_variant_std_monostate_int_float_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <stdexcept>
#include <variant>


MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>());
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)(new std::variant<std::monostate, int, float, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_ConstructFromAnother(const MR_C_std_variant_std_monostate_int_float_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::variant<std::monostate, int, float, float>(*(std::variant<std::monostate, int, float, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_AssignFromAnother(MR_C_std_variant_std_monostate_int_float_float *_this, const MR_C_std_variant_std_monostate_int_float_float *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::variant<std::monostate, int, float, float>(*(std::variant<std::monostate, int, float, float> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_Destroy(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::variant<std::monostate, int, float, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_DestroyArray(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::variant<std::monostate, int, float, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_OffsetPtr(const MR_C_std_variant_std_monostate_int_float_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_variant_std_monostate_int_float_float *)(((const std::variant<std::monostate, int, float, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_OffsetMutablePtr(MR_C_std_variant_std_monostate_int_float_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)(((std::variant<std::monostate, int, float, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_variant_std_monostate_int_float_float_index(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<std::monostate, int, float, float> *)(_this)).index();
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_ConstructAs_std_monostate(void)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>(std::in_place_index<0>, std::monostate{}));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_ConstructAs_int(int value)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>(std::in_place_index<1>, value));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_2(float value)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>(std::in_place_index<2>, value));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_3(float value)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(std::variant<std::monostate, int, float, float>(std::in_place_index<3>, value));
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_AssignAs_std_monostate(MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this));
    if (_self.index() == 0)
        std::get<0>(_self) = std::monostate{};
    else
        _self.emplace<0>(std::monostate{});
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_AssignAs_int(MR_C_std_variant_std_monostate_int_float_float *_this, int value)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this));
    if (_self.index() == 1)
        std::get<1>(_self) = value;
    else
        _self.emplace<1>(value);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_2(MR_C_std_variant_std_monostate_int_float_float *_this, float value)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this));
    if (_self.index() == 2)
        std::get<2>(_self) = value;
    else
        _self.emplace<2>(value);
    ) // MRBINDC_TRY
}

void MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_3(MR_C_std_variant_std_monostate_int_float_float *_this, float value)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this));
    if (_self.index() == 3)
        std::get<3>(_self) = value;
    else
        _self.emplace<3>(value);
    ) // MRBINDC_TRY
}

bool MR_C_std_variant_std_monostate_int_float_float_get_std_monostate(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<0>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

const int *MR_C_std_variant_std_monostate_int_float_float_get_int(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

int *MR_C_std_variant_std_monostate_int_float_float_get_int_mut(MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

const float *MR_C_std_variant_std_monostate_int_float_float_get_float_2(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

float *MR_C_std_variant_std_monostate_int_float_float_get_float_2_mut(MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

const float *MR_C_std_variant_std_monostate_int_float_float_get_float_3(const MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<3>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}

float *MR_C_std_variant_std_monostate_int_float_float_get_float_3_mut(MR_C_std_variant_std_monostate_int_float_float *_this)
{
    MRBINDC_TRY(
    return std::get_if<3>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<std::monostate, int, float, float> *)(_this)));
    ) // MRBINDC_TRY
}


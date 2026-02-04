#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_variant_int32_t_float_float.h"

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <variant>


MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_DefaultConstruct(void)
{
    return (MR_C_std_variant_int32_t_float_float *)new std::variant<int32_t, float, float>(std::variant<int32_t, float, float>());
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_variant_int32_t_float_float *)(new std::variant<int32_t, float, float>[num_elems]{});
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_ConstructFromAnother(const MR_C_std_variant_int32_t_float_float *other)
{
    return (MR_C_std_variant_int32_t_float_float *)new std::variant<int32_t, float, float>(std::variant<int32_t, float, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::variant<int32_t, float, float>(*(std::variant<int32_t, float, float> *)other))
    ));
}

void MR_C_std_variant_int32_t_float_float_AssignFromAnother(MR_C_std_variant_int32_t_float_float *_this, const MR_C_std_variant_int32_t_float_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::variant<int32_t, float, float>(*(std::variant<int32_t, float, float> *)other))
    );
}

void MR_C_std_variant_int32_t_float_float_Destroy(const MR_C_std_variant_int32_t_float_float *_this)
{
    delete ((const std::variant<int32_t, float, float> *)_this);
}

void MR_C_std_variant_int32_t_float_float_DestroyArray(const MR_C_std_variant_int32_t_float_float *_this)
{
    delete[] ((const std::variant<int32_t, float, float> *)_this);
}

const MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_OffsetPtr(const MR_C_std_variant_int32_t_float_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_variant_int32_t_float_float *)(((const std::variant<int32_t, float, float> *)ptr) + i);
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_OffsetMutablePtr(MR_C_std_variant_int32_t_float_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_variant_int32_t_float_float *)(((std::variant<int32_t, float, float> *)ptr) + i);
}

size_t MR_C_std_variant_int32_t_float_float_index(const MR_C_std_variant_int32_t_float_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, float> *)(_this)).index();
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_ConstructAs_int32_t(int32_t value)
{
    return (MR_C_std_variant_int32_t_float_float *)new std::variant<int32_t, float, float>(std::variant<int32_t, float, float>(std::in_place_index<0>, value));
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_ConstructAs_float_1(float value)
{
    return (MR_C_std_variant_int32_t_float_float *)new std::variant<int32_t, float, float>(std::variant<int32_t, float, float>(std::in_place_index<1>, value));
}

MR_C_std_variant_int32_t_float_float *MR_C_std_variant_int32_t_float_float_ConstructAs_float_2(float value)
{
    return (MR_C_std_variant_int32_t_float_float *)new std::variant<int32_t, float, float>(std::variant<int32_t, float, float>(std::in_place_index<2>, value));
}

void MR_C_std_variant_int32_t_float_float_AssignAs_int32_t(MR_C_std_variant_int32_t_float_float *_this, int32_t value)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this));
    if (_self.index() == 0)
        std::get<0>(_self) = value;
    else
        _self.emplace<0>(value);
}

void MR_C_std_variant_int32_t_float_float_AssignAs_float_1(MR_C_std_variant_int32_t_float_float *_this, float value)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this));
    if (_self.index() == 1)
        std::get<1>(_self) = value;
    else
        _self.emplace<1>(value);
}

void MR_C_std_variant_int32_t_float_float_AssignAs_float_2(MR_C_std_variant_int32_t_float_float *_this, float value)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this));
    if (_self.index() == 2)
        std::get<2>(_self) = value;
    else
        _self.emplace<2>(value);
}

const int32_t *MR_C_std_variant_int32_t_float_float_get_int32_t(const MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<0>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, float> *)(_this)));
}

int32_t *MR_C_std_variant_int32_t_float_float_get_int32_t_mut(MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<0>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this)));
}

const float *MR_C_std_variant_int32_t_float_float_get_float_1(const MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, float> *)(_this)));
}

float *MR_C_std_variant_int32_t_float_float_get_float_1_mut(MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<1>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this)));
}

const float *MR_C_std_variant_int32_t_float_float_get_float_2(const MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::variant<int32_t, float, float> *)(_this)));
}

float *MR_C_std_variant_int32_t_float_float_get_float_2_mut(MR_C_std_variant_int32_t_float_float *_this)
{
    return std::get_if<2>(&((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::variant<int32_t, float, float> *)(_this)));
}


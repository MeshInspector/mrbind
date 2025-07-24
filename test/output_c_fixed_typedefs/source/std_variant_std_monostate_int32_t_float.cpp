#define MR_C_BUILD_LIBRARY
#include "std_variant_std_monostate_int32_t_float.h"

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <variant>


MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)new std::variant<std::monostate, int32_t, float>(std::variant<std::monostate, int32_t, float>());
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)(new std::variant<std::monostate, int32_t, float>[num_elems]{});
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_ConstructFromAnother(const MR_C_std_variant_std_monostate_int32_t_float *other)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)new std::variant<std::monostate, int32_t, float>(std::variant<std::monostate, int32_t, float>(
        (other ? std::variant<std::monostate, int32_t, float>(*(std::variant<std::monostate, int32_t, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_variant_std_monostate_int32_t_float_AssignFromAnother(MR_C_std_variant_std_monostate_int32_t_float *_this, const MR_C_std_variant_std_monostate_int32_t_float *other)
{
    (_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::variant<std::monostate, int32_t, float>(*(std::variant<std::monostate, int32_t, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_variant_std_monostate_int32_t_float_Destroy(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    delete ((const std::variant<std::monostate, int32_t, float> *)_this);
}

void MR_C_std_variant_std_monostate_int32_t_float_DestroyArray(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    delete[] ((const std::variant<std::monostate, int32_t, float> *)_this);
}

const MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_OffsetPtr(const MR_C_std_variant_std_monostate_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_variant_std_monostate_int32_t_float *)(((const std::variant<std::monostate, int32_t, float> *)ptr) + i);
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_OffsetMutablePtr(MR_C_std_variant_std_monostate_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)(((std::variant<std::monostate, int32_t, float> *)ptr) + i);
}

size_t MR_C_std_variant_std_monostate_int32_t_float_Index(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return (_this ? *(const std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).index();
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_ConstructAs_std_monostate(void)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)new std::variant<std::monostate, int32_t, float>(std::variant<std::monostate, int32_t, float>(std::in_place_index<0>, std::monostate{}));
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_ConstructAs_int32_t(int32_t value)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)new std::variant<std::monostate, int32_t, float>(std::variant<std::monostate, int32_t, float>(std::in_place_index<1>, value));
}

MR_C_std_variant_std_monostate_int32_t_float *MR_C_std_variant_std_monostate_int32_t_float_ConstructAs_float(float value)
{
    return (MR_C_std_variant_std_monostate_int32_t_float *)new std::variant<std::monostate, int32_t, float>(std::variant<std::monostate, int32_t, float>(std::in_place_index<2>, value));
}

void MR_C_std_variant_std_monostate_int32_t_float_AssignAs_std_monostate(MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    auto &_self = (_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (_self.index() == 0)
        std::get<0>(_self) = std::monostate{};
    else
        _self.emplace<0>(std::monostate{});
}

void MR_C_std_variant_std_monostate_int32_t_float_AssignAs_int32_t(MR_C_std_variant_std_monostate_int32_t_float *_this, int32_t value)
{
    auto &_self = (_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (_self.index() == 1)
        std::get<1>(_self) = value;
    else
        _self.emplace<1>(value);
}

void MR_C_std_variant_std_monostate_int32_t_float_AssignAs_float(MR_C_std_variant_std_monostate_int32_t_float *_this, float value)
{
    auto &_self = (_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (_self.index() == 2)
        std::get<2>(_self) = value;
    else
        _self.emplace<2>(value);
}

bool MR_C_std_variant_std_monostate_int32_t_float_Get_std_monostate(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return std::get_if<0>(&(_this ? *(const std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const int32_t *MR_C_std_variant_std_monostate_int32_t_float_Get_int32_t(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return std::get_if<1>(&(_this ? *(const std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

int32_t *MR_C_std_variant_std_monostate_int32_t_float_GetMutable_int32_t(MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return std::get_if<1>(&(_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const float *MR_C_std_variant_std_monostate_int32_t_float_Get_float(const MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return std::get_if<2>(&(_this ? *(const std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

float *MR_C_std_variant_std_monostate_int32_t_float_GetMutable_float(MR_C_std_variant_std_monostate_int32_t_float *_this)
{
    return std::get_if<2>(&(_this ? *(std::variant<std::monostate, int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}


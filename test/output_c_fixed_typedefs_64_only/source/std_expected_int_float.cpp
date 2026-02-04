#define MR_C_BUILD_LIBRARY
#include "std_expected_int_float.h"

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_std_expected_int_float *MR_C_std_expected_int_float_DefaultConstruct(void)
{
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(std::expected<int, float>());
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_expected_int_float *)(new std::expected<int, float>[num_elems]{});
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_ConstructFromAnother(const MR_C_std_expected_int_float *other)
{
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(std::expected<int, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)other))
    ));
}

void MR_C_std_expected_int_float_AssignFromAnother(MR_C_std_expected_int_float *_this, const MR_C_std_expected_int_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)other))
    );
}

void MR_C_std_expected_int_float_Destroy(const MR_C_std_expected_int_float *_this)
{
    delete ((const std::expected<int, float> *)_this);
}

void MR_C_std_expected_int_float_DestroyArray(const MR_C_std_expected_int_float *_this)
{
    delete[] ((const std::expected<int, float> *)_this);
}

const MR_C_std_expected_int_float *MR_C_std_expected_int_float_OffsetPtr(const MR_C_std_expected_int_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_expected_int_float *)(((const std::expected<int, float> *)ptr) + i);
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_OffsetMutablePtr(MR_C_std_expected_int_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_expected_int_float *)(((std::expected<int, float> *)ptr) + i);
}

bool MR_C_std_expected_int_float_success(const MR_C_std_expected_int_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this)));
}

const int *MR_C_std_expected_int_float_value(const MR_C_std_expected_int_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this));
    return _self ? &*_self : nullptr;
}

const float *MR_C_std_expected_int_float_error(const MR_C_std_expected_int_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this));
    return _self ? nullptr : &_self.error();
}

int *MR_C_std_expected_int_float_value_mut(MR_C_std_expected_int_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this));
    return _self ? &*_self : nullptr;
}

float *MR_C_std_expected_int_float_error_mut(MR_C_std_expected_int_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this));
    return _self ? nullptr : &_self.error();
}


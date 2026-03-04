#define MR_C_BUILD_LIBRARY
#include "std_expected_int_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_std_expected_int_float *MR_C_std_expected_int_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(std::expected<int, float>());
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_int_float *)(new std::expected<int, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_ConstructFromAnother(const MR_C_std_expected_int_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(std::expected<int, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_expected_int_float_AssignFromAnother(MR_C_std_expected_int_float *_this, const MR_C_std_expected_int_float *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_expected_int_float_Destroy(const MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::expected<int, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_expected_int_float_DestroyArray(const MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::expected<int, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_expected_int_float *MR_C_std_expected_int_float_OffsetPtr(const MR_C_std_expected_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_expected_int_float *)(((const std::expected<int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_C_std_expected_int_float_OffsetMutablePtr(MR_C_std_expected_int_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_int_float *)(((std::expected<int, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_expected_int_float_success(const MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this)));
    ) // MRBINDC_TRY
}

const int *MR_C_std_expected_int_float_value(const MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this));
    return _self ? &*_self : nullptr;
    ) // MRBINDC_TRY
}

const float *MR_C_std_expected_int_float_error(const MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}

int *MR_C_std_expected_int_float_value_mut(MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this));
    return _self ? &*_self : nullptr;
    ) // MRBINDC_TRY
}

float *MR_C_std_expected_int_float_error_mut(MR_C_std_expected_int_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "std_expected_void_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_std_expected_void_float *MR_C_std_expected_void_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_void_float *)new std::expected<void, float>(std::expected<void, float>());
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_C_std_expected_void_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_void_float *)(new std::expected<void, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_C_std_expected_void_float_ConstructFromAnother(const MR_C_std_expected_void_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_void_float *)new std::expected<void, float>(std::expected<void, float>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::expected<void, float>(*(std::expected<void, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_expected_void_float_AssignFromAnother(MR_C_std_expected_void_float *_this, const MR_C_std_expected_void_float *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::expected<void, float> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::expected<void, float>(*(std::expected<void, float> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_expected_void_float_Destroy(const MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::expected<void, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_expected_void_float_DestroyArray(const MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::expected<void, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_expected_void_float *MR_C_std_expected_void_float_OffsetPtr(const MR_C_std_expected_void_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_expected_void_float *)(((const std::expected<void, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_C_std_expected_void_float_OffsetMutablePtr(MR_C_std_expected_void_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_void_float *)(((std::expected<void, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_expected_void_float_success(const MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::expected<void, float> *)(_this)));
    ) // MRBINDC_TRY
}

bool MR_C_std_expected_void_float_value(const MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::expected<void, float> *)(_this)));
    ) // MRBINDC_TRY
}

const float *MR_C_std_expected_void_float_error(const MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::expected<void, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}

float *MR_C_std_expected_void_float_error_mut(MR_C_std_expected_void_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::expected<void, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "std_expected_MR_CSharp_ExposedLayoutSh_float.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)new std::expected<MR::CSharp::ExposedLayoutSh, float>(std::expected<MR::CSharp::ExposedLayoutSh, float>());
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(new std::expected<MR::CSharp::ExposedLayoutSh, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_ConstructFromAnother(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *other)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)new std::expected<MR::CSharp::ExposedLayoutSh, float>(std::expected<MR::CSharp::ExposedLayoutSh, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_AssignFromAnother(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_Destroy(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_DestroyArray(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_OffsetPtr(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_OffsetMutablePtr(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(((std::expected<MR::CSharp::ExposedLayoutSh, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_success(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayoutSh *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_value(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this));
    return (const MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

const float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_error(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_value_mut(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this));
    return (MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

float *MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float_error_mut(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(_this));
    return _self ? nullptr : &_self.error();
    ) // MRBINDC_TRY
}


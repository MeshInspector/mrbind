#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "expected_MR_CSharp_ExposedLayout_float.h"

#include <input/MR/test_csharp.h>

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_expected_MR_CSharp_ExposedLayout_float *MR_C_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct(void)
{
    return (MR_C_expected_MR_CSharp_ExposedLayout_float *)new std::expected<MR::CSharp::ExposedLayout, float>(std::expected<MR::CSharp::ExposedLayout, float>());
}

MR_C_expected_MR_CSharp_ExposedLayout_float *MR_C_expected_MR_CSharp_ExposedLayout_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_expected_MR_CSharp_ExposedLayout_float *)(new std::expected<MR::CSharp::ExposedLayout, float>[num_elems]{});
}

MR_C_expected_MR_CSharp_ExposedLayout_float *MR_C_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother(const MR_C_expected_MR_CSharp_ExposedLayout_float *other)
{
    return (MR_C_expected_MR_CSharp_ExposedLayout_float *)new std::expected<MR::CSharp::ExposedLayout, float>(std::expected<MR::CSharp::ExposedLayout, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)other))
    ));
}

void MR_C_expected_MR_CSharp_ExposedLayout_float_AssignFromAnother(MR_C_expected_MR_CSharp_ExposedLayout_float *_this, const MR_C_expected_MR_CSharp_ExposedLayout_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayout, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)other))
    );
}

void MR_C_expected_MR_CSharp_ExposedLayout_float_Destroy(const MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    delete ((const std::expected<MR::CSharp::ExposedLayout, float> *)_this);
}

void MR_C_expected_MR_CSharp_ExposedLayout_float_DestroyArray(const MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    delete[] ((const std::expected<MR::CSharp::ExposedLayout, float> *)_this);
}

const MR_C_expected_MR_CSharp_ExposedLayout_float *MR_C_expected_MR_CSharp_ExposedLayout_float_OffsetPtr(const MR_C_expected_MR_CSharp_ExposedLayout_float *ptr, ptrdiff_t i)
{
    return (const MR_C_expected_MR_CSharp_ExposedLayout_float *)(((const std::expected<MR::CSharp::ExposedLayout, float> *)ptr) + i);
}

MR_C_expected_MR_CSharp_ExposedLayout_float *MR_C_expected_MR_CSharp_ExposedLayout_float_OffsetMutablePtr(MR_C_expected_MR_CSharp_ExposedLayout_float *ptr, ptrdiff_t i)
{
    return (MR_C_expected_MR_CSharp_ExposedLayout_float *)(((std::expected<MR::CSharp::ExposedLayout, float> *)ptr) + i);
}

bool MR_C_expected_MR_CSharp_ExposedLayout_float_Success(const MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayout, float> *)(_this)));
}

const MR_CSharp_ExposedLayout *MR_C_expected_MR_CSharp_ExposedLayout_float_GetValue(const MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayout, float> *)(_this));
    return (const MR_CSharp_ExposedLayout *)(_self ? &*_self : nullptr);
}

const float *MR_C_expected_MR_CSharp_ExposedLayout_float_GetError(const MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayout, float> *)(_this));
    return _self ? nullptr : &_self.error();
}

MR_CSharp_ExposedLayout *MR_C_expected_MR_CSharp_ExposedLayout_float_GetMutableValue(MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayout, float> *)(_this));
    return (MR_CSharp_ExposedLayout *)(_self ? &*_self : nullptr);
}

float *MR_C_expected_MR_CSharp_ExposedLayout_float_GetMutableError(MR_C_expected_MR_CSharp_ExposedLayout_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::ExposedLayout, float> *)(_this));
    return _self ? nullptr : &_self.error();
}


#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "expected_int32_t_float.h"

#include <cstddef>
#include <cstdint>
#include <expected>
#include <stdexcept>


MR_C_expected_int32_t_float *MR_C_expected_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_expected_int32_t_float *)new std::expected<int32_t, float>(std::expected<int32_t, float>());
}

MR_C_expected_int32_t_float *MR_C_expected_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_expected_int32_t_float *)(new std::expected<int32_t, float>[num_elems]{});
}

MR_C_expected_int32_t_float *MR_C_expected_int32_t_float_ConstructFromAnother(const MR_C_expected_int32_t_float *other)
{
    return (MR_C_expected_int32_t_float *)new std::expected<int32_t, float>(std::expected<int32_t, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int32_t, float>(*(std::expected<int32_t, float> *)other))
    ));
}

void MR_C_expected_int32_t_float_AssignFromAnother(MR_C_expected_int32_t_float *_this, const MR_C_expected_int32_t_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<int32_t, float>(*(std::expected<int32_t, float> *)other))
    );
}

void MR_C_expected_int32_t_float_Destroy(const MR_C_expected_int32_t_float *_this)
{
    delete ((const std::expected<int32_t, float> *)_this);
}

void MR_C_expected_int32_t_float_DestroyArray(const MR_C_expected_int32_t_float *_this)
{
    delete[] ((const std::expected<int32_t, float> *)_this);
}

const MR_C_expected_int32_t_float *MR_C_expected_int32_t_float_OffsetPtr(const MR_C_expected_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_expected_int32_t_float *)(((const std::expected<int32_t, float> *)ptr) + i);
}

MR_C_expected_int32_t_float *MR_C_expected_int32_t_float_OffsetMutablePtr(MR_C_expected_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_expected_int32_t_float *)(((std::expected<int32_t, float> *)ptr) + i);
}

bool MR_C_expected_int32_t_float_Success(const MR_C_expected_int32_t_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int32_t, float> *)(_this)));
}

const int32_t *MR_C_expected_int32_t_float_GetValue(const MR_C_expected_int32_t_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int32_t, float> *)(_this));
    return _self ? &*_self : nullptr;
}

const float *MR_C_expected_int32_t_float_GetError(const MR_C_expected_int32_t_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int32_t, float> *)(_this));
    return _self ? nullptr : &_self.error();
}

int32_t *MR_C_expected_int32_t_float_GetMutableValue(MR_C_expected_int32_t_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, float> *)(_this));
    return _self ? &*_self : nullptr;
}

float *MR_C_expected_int32_t_float_GetMutableError(MR_C_expected_int32_t_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int32_t, float> *)(_this));
    return _self ? nullptr : &_self.error();
}


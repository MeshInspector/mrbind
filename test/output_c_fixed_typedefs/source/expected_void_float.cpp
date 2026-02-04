#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "expected_void_float.h"

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_expected_void_float *MR_C_expected_void_float_DefaultConstruct(void)
{
    return (MR_C_expected_void_float *)new std::expected<void, float>(std::expected<void, float>());
}

MR_C_expected_void_float *MR_C_expected_void_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_expected_void_float *)(new std::expected<void, float>[num_elems]{});
}

MR_C_expected_void_float *MR_C_expected_void_float_ConstructFromAnother(const MR_C_expected_void_float *other)
{
    return (MR_C_expected_void_float *)new std::expected<void, float>(std::expected<void, float>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<void, float>(*(std::expected<void, float> *)other))
    ));
}

void MR_C_expected_void_float_AssignFromAnother(MR_C_expected_void_float *_this, const MR_C_expected_void_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<void, float> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::expected<void, float>(*(std::expected<void, float> *)other))
    );
}

void MR_C_expected_void_float_Destroy(const MR_C_expected_void_float *_this)
{
    delete ((const std::expected<void, float> *)_this);
}

void MR_C_expected_void_float_DestroyArray(const MR_C_expected_void_float *_this)
{
    delete[] ((const std::expected<void, float> *)_this);
}

const MR_C_expected_void_float *MR_C_expected_void_float_OffsetPtr(const MR_C_expected_void_float *ptr, ptrdiff_t i)
{
    return (const MR_C_expected_void_float *)(((const std::expected<void, float> *)ptr) + i);
}

MR_C_expected_void_float *MR_C_expected_void_float_OffsetMutablePtr(MR_C_expected_void_float *ptr, ptrdiff_t i)
{
    return (MR_C_expected_void_float *)(((std::expected<void, float> *)ptr) + i);
}

bool MR_C_expected_void_float_success(const MR_C_expected_void_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<void, float> *)(_this)));
}

bool MR_C_expected_void_float_value(const MR_C_expected_void_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<void, float> *)(_this)));
}

const float *MR_C_expected_void_float_error(const MR_C_expected_void_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<void, float> *)(_this));
    return _self ? nullptr : &_self.error();
}

float *MR_C_expected_void_float_error_mut(MR_C_expected_void_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<void, float> *)(_this));
    return _self ? nullptr : &_self.error();
}


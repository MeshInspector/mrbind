#include "expected_void_float.h"

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
        (other ? std::expected<void, float>(*(std::expected<void, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_expected_void_float *MR_C_expected_void_float_ConstructFrom(const MR_C_expected_void_float *other)
{
    return (MR_C_expected_void_float *)new std::expected<void, float>(std::expected<void, float>(
        (other ? std::expected<void, float>(*(std::expected<void, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_expected_void_float_AssignFromAnother(MR_C_expected_void_float *_this, const MR_C_expected_void_float *other)
{
    (_this ? *(std::expected<void, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::expected<void, float>(*(std::expected<void, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_expected_void_float_AssignFrom(MR_C_expected_void_float *_this, const MR_C_expected_void_float *other)
{
    (_this ? *(std::expected<void, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::expected<void, float>(*(std::expected<void, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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

bool MR_C_expected_void_float_GetValue(const MR_C_expected_void_float *_this)
{
    return bool((_this ? *(const std::expected<void, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

const float *MR_C_expected_void_float_GetError(const MR_C_expected_void_float *_this)
{
    auto &_self = (_this ? *(const std::expected<void, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return _self ? nullptr : &_self.error();
}

float *MR_C_expected_void_float_GetMutableError(MR_C_expected_void_float *_this)
{
    auto &_self = (_this ? *(std::expected<void, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return _self ? nullptr : &_self.error();
}


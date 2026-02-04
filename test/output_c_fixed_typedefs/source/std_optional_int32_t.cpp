#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_int32_t.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <stdexcept>


MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_optional_int32_t *)new std::optional<int32_t>(std::optional<int32_t>());
}

MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_int32_t *)(new std::optional<int32_t>[num_elems]{});
}

MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_ConstructFromAnother(const MR_C_std_optional_int32_t *other)
{
    return (MR_C_std_optional_int32_t *)new std::optional<int32_t>(std::optional<int32_t>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<int32_t>(*(std::optional<int32_t> *)other))
    ));
}

MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_ConstructFrom(const int32_t *other)
{
    return (MR_C_std_optional_int32_t *)new std::optional<int32_t>(std::optional<int32_t>(
        (other ? std::optional<int32_t>(*other) : std::nullopt)
    ));
}

void MR_C_std_optional_int32_t_AssignFromAnother(MR_C_std_optional_int32_t *_this, const MR_C_std_optional_int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int32_t> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<int32_t>(*(std::optional<int32_t> *)other))
    );
}

void MR_C_std_optional_int32_t_AssignFrom(MR_C_std_optional_int32_t *_this, const int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int32_t> *)(_this)).operator=(
        (other ? std::optional<int32_t>(*other) : std::nullopt)
    );
}

void MR_C_std_optional_int32_t_Destroy(const MR_C_std_optional_int32_t *_this)
{
    delete ((const std::optional<int32_t> *)_this);
}

void MR_C_std_optional_int32_t_DestroyArray(const MR_C_std_optional_int32_t *_this)
{
    delete[] ((const std::optional<int32_t> *)_this);
}

const MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_OffsetPtr(const MR_C_std_optional_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_int32_t *)(((const std::optional<int32_t> *)ptr) + i);
}

MR_C_std_optional_int32_t *MR_C_std_optional_int32_t_OffsetMutablePtr(MR_C_std_optional_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_int32_t *)(((std::optional<int32_t> *)ptr) + i);
}

const int32_t *MR_C_std_optional_int32_t_value(const MR_C_std_optional_int32_t *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<int32_t> *)(_this));
    return _self ? &*_self : nullptr;
}

int32_t *MR_C_std_optional_int32_t_value_mut(MR_C_std_optional_int32_t *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int32_t> *)(_this));
    return _self ? &*_self : nullptr;
}


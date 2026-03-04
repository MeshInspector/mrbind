#define MR_C_BUILD_LIBRARY
#include "std_optional_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_C_std_optional_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)(new std::optional<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFromAnother(const MR_C_std_optional_int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<int>(*(std::optional<int> *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_C_std_optional_int_ConstructFrom(const int *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)new std::optional<int>(std::optional<int>(
        (other ? std::optional<int>(*other) : std::nullopt)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_int_AssignFromAnother(MR_C_std_optional_int *_this, const MR_C_std_optional_int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<int>(*(std::optional<int> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_int_AssignFrom(MR_C_std_optional_int *_this, const int *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int> *)(_this)).operator=(
        (other ? std::optional<int>(*other) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_int_Destroy(const MR_C_std_optional_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_int_DestroyArray(const MR_C_std_optional_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_int *MR_C_std_optional_int_OffsetPtr(const MR_C_std_optional_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_int *)(((const std::optional<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_C_std_optional_int_OffsetMutablePtr(MR_C_std_optional_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)(((std::optional<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_int_has_value(const MR_C_std_optional_int *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<int> *)(_this)));
    ) // MRBINDC_TRY
}

const int *MR_C_std_optional_int_value(const MR_C_std_optional_int *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<int> *)(_this));
    return _self ? &*_self : nullptr;
    ) // MRBINDC_TRY
}

int *MR_C_std_optional_int_value_mut(MR_C_std_optional_int *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<int> *)(_this));
    return _self ? &*_self : nullptr;
    ) // MRBINDC_TRY
}


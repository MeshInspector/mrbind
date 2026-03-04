#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_StdOptional_E.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)(new std::optional<MR::StdOptional::E>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_E *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFrom(const MR_StdOptional_E *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>(
        (other ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*other)) : std::nullopt)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(MR_C_std_optional_MR_StdOptional_E *_this, const MR_C_std_optional_MR_StdOptional_E *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_E_AssignFrom(MR_C_std_optional_MR_StdOptional_E *_this, const MR_StdOptional_E *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this)).operator=(
        (other ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*other)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_E_Destroy(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<MR::StdOptional::E> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_E_DestroyArray(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<MR::StdOptional::E> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetPtr(const MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_MR_StdOptional_E *)(((const std::optional<MR::StdOptional::E> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)(((std::optional<MR::StdOptional::E> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_MR_StdOptional_E_has_value(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::StdOptional::E> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_value(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::StdOptional::E> *)(_this));
    return (const MR_StdOptional_E *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_value_mut(MR_C_std_optional_MR_StdOptional_E *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this));
    return (MR_StdOptional_E *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}


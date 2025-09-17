#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_MR_StdOptional_E.h"

#include <input/MR/test_std_optional.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>());
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_StdOptional_E *)(new std::optional<MR::StdOptional::E>[num_elems]{});
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_E *other)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other))
    ));
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFrom(const MR_StdOptional_E *other)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>(
        (other ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*other)) : std::nullopt)
    ));
}

void MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(MR_C_std_optional_MR_StdOptional_E *_this, const MR_C_std_optional_MR_StdOptional_E *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other))
    );
}

void MR_C_std_optional_MR_StdOptional_E_AssignFrom(MR_C_std_optional_MR_StdOptional_E *_this, const MR_StdOptional_E *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this)).operator=(
        (other ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_StdOptional_E_Destroy(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    delete ((const std::optional<MR::StdOptional::E> *)_this);
}

void MR_C_std_optional_MR_StdOptional_E_DestroyArray(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    delete[] ((const std::optional<MR::StdOptional::E> *)_this);
}

const MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetPtr(const MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_StdOptional_E *)(((const std::optional<MR::StdOptional::E> *)ptr) + i);
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_E *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_StdOptional_E *)(((std::optional<MR::StdOptional::E> *)ptr) + i);
}

const MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_Value(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::StdOptional::E> *)(_this));
    return (const MR_StdOptional_E *)(_self ? &*_self : nullptr);
}

MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_MutableValue(MR_C_std_optional_MR_StdOptional_E *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::E> *)(_this));
    return (MR_StdOptional_E *)(_self ? &*_self : nullptr);
}


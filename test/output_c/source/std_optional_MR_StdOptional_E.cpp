#include "std_optional_MR_StdOptional_E.h"

#include <input/MR/test_std_optional.h>

#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>());
}

MR_C_std_optional_MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_E *other)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(std::optional<MR::StdOptional::E>(
        (other ? std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
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
    (_this ? *(std::optional<MR::StdOptional::E> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_optional_MR_StdOptional_E_AssignFrom(MR_C_std_optional_MR_StdOptional_E *_this, const MR_StdOptional_E *other)
{
    (_this ? *(std::optional<MR::StdOptional::E> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_StdOptional_E_Destroy(MR_C_std_optional_MR_StdOptional_E *_this)
{
    delete &(_this ? *(std::optional<MR::StdOptional::E> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_Value(const MR_C_std_optional_MR_StdOptional_E *_this)
{
    auto &self = (_this ? *(const std::optional<MR::StdOptional::E> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (const MR_StdOptional_E *)(self ? &*self : nullptr);
}

MR_StdOptional_E *MR_C_std_optional_MR_StdOptional_E_MutableValue(MR_C_std_optional_MR_StdOptional_E *_this)
{
    auto &self = (_this ? *(std::optional<MR::StdOptional::E> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (MR_StdOptional_E *)(self ? &*self : nullptr);
}


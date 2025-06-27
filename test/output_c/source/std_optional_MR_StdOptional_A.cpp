#include "std_optional_MR_StdOptional_A.h"

#include <input/MR/test_std_optional.h>

#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_StdOptional_A *)new std::optional<MR::StdOptional::A>(std::optional<MR::StdOptional::A>());
}

MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_StdOptional_A *)(new std::optional<MR::StdOptional::A>[num_elems]{});
}

MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(const MR_C_std_optional_MR_StdOptional_A *other)
{
    return (MR_C_std_optional_MR_StdOptional_A *)new std::optional<MR::StdOptional::A>(std::optional<MR::StdOptional::A>(
        (other ? std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_ConstructFrom(const MR_StdOptional_A *other)
{
    return (MR_C_std_optional_MR_StdOptional_A *)new std::optional<MR::StdOptional::A>(std::optional<MR::StdOptional::A>(
        (other ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)other)) : std::nullopt)
    ));
}

void MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(MR_C_std_optional_MR_StdOptional_A *_this, const MR_C_std_optional_MR_StdOptional_A *other)
{
    (_this ? *(std::optional<MR::StdOptional::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_optional_MR_StdOptional_A_AssignFrom(MR_C_std_optional_MR_StdOptional_A *_this, const MR_StdOptional_A *other)
{
    (_this ? *(std::optional<MR::StdOptional::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_StdOptional_A_Destroy(MR_C_std_optional_MR_StdOptional_A *_this)
{
    delete ((std::optional<MR::StdOptional::A> *)_this);
}

void MR_C_std_optional_MR_StdOptional_A_DestroyArray(MR_C_std_optional_MR_StdOptional_A *_this)
{
    delete[] ((std::optional<MR::StdOptional::A> *)_this);
}

const MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_OffsetPtr(const MR_C_std_optional_MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_StdOptional_A *)(((const std::optional<MR::StdOptional::A> *)ptr) + i);
}

MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_StdOptional_A *)(((std::optional<MR::StdOptional::A> *)ptr) + i);
}

const MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_Value(const MR_C_std_optional_MR_StdOptional_A *_this)
{
    auto &_self = (_this ? *(const std::optional<MR::StdOptional::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (const MR_StdOptional_A *)(_self ? &*_self : nullptr);
}

MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_MutableValue(MR_C_std_optional_MR_StdOptional_A *_this)
{
    auto &_self = (_this ? *(std::optional<MR::StdOptional::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (MR_StdOptional_A *)(_self ? &*_self : nullptr);
}


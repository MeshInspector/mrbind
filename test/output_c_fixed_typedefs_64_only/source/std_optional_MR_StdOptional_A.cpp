#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_StdOptional_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <cstddef>
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
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)other))
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
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::StdOptional::A> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)other))
    );
}

void MR_C_std_optional_MR_StdOptional_A_AssignFrom(MR_C_std_optional_MR_StdOptional_A *_this, const MR_StdOptional_A *other)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::StdOptional::A> *)(_this)).operator=(
        (other ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_StdOptional_A_Destroy(const MR_C_std_optional_MR_StdOptional_A *_this)
{
    delete ((const std::optional<MR::StdOptional::A> *)_this);
}

void MR_C_std_optional_MR_StdOptional_A_DestroyArray(const MR_C_std_optional_MR_StdOptional_A *_this)
{
    delete[] ((const std::optional<MR::StdOptional::A> *)_this);
}

const MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_OffsetPtr(const MR_C_std_optional_MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_StdOptional_A *)(((const std::optional<MR::StdOptional::A> *)ptr) + i);
}

MR_C_std_optional_MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_StdOptional_A *)(((std::optional<MR::StdOptional::A> *)ptr) + i);
}

bool MR_C_std_optional_MR_StdOptional_A_has_value(const MR_C_std_optional_MR_StdOptional_A *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::StdOptional::A> *)(_this)));
}

const MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_value(const MR_C_std_optional_MR_StdOptional_A *_this)
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::StdOptional::A> *)(_this));
    return (const MR_StdOptional_A *)(_self ? &*_self : nullptr);
}

MR_StdOptional_A *MR_C_std_optional_MR_StdOptional_A_value_mut(MR_C_std_optional_MR_StdOptional_A *_this)
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::StdOptional::A> *)(_this));
    return (MR_StdOptional_A *)(_self ? &*_self : nullptr);
}


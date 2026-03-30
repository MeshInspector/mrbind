#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_CSharp_Trivial.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_Trivial *)(new std::optional<MR::CSharp::Trivial>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_Trivial *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(const MR_CSharp_Trivial *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>(
        (other ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)other)) : std::nullopt)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_C_std_optional_MR_CSharp_Trivial *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::Trivial> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::Trivial> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)other)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_Trivial_Destroy(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<MR::CSharp::Trivial> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_Trivial_DestroyArray(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<MR::CSharp::Trivial> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetPtr(const MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_MR_CSharp_Trivial *)(((const std::optional<MR::CSharp::Trivial> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_Trivial *)(((std::optional<MR::CSharp::Trivial> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_MR_CSharp_Trivial_has_value(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::Trivial> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_value(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::Trivial> *)(_this));
    return (const MR_CSharp_Trivial *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_value_mut(MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::Trivial> *)(_this));
    return (MR_CSharp_Trivial *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_CSharp_SA.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_SA *)(new std::optional<MR::CSharp::SA>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_SA *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_ConstructFrom(const MR_CSharp_SA *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>(
        (other ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)other)) : std::nullopt)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_SA_AssignFromAnother(MR_C_std_optional_MR_CSharp_SA *_this, const MR_C_std_optional_MR_CSharp_SA *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::SA> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_SA_AssignFrom(MR_C_std_optional_MR_CSharp_SA *_this, const MR_CSharp_SA *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::SA> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)other)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_SA_Destroy(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<MR::CSharp::SA> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_SA_DestroyArray(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<MR::CSharp::SA> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_OffsetPtr(const MR_C_std_optional_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_MR_CSharp_SA *)(((const std::optional<MR::CSharp::SA> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_SA *)(((std::optional<MR::CSharp::SA> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_MR_CSharp_SA_has_value(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::SA> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_value(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::SA> *)(_this));
    return (const MR_CSharp_SA *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_value_mut(MR_C_std_optional_MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::SA> *)(_this));
    return (MR_CSharp_SA *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_CSharp_ExposedLayoutSh.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(new std::optional<MR::CSharp::ExposedLayoutSh>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(const MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>(
        (other ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *other)) : std::nullopt)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFromAnother(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFrom(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *other)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<MR::CSharp::ExposedLayoutSh> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DestroyArray(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<MR::CSharp::ExposedLayoutSh> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_OffsetPtr(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(((const std::optional<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(((std::optional<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_MR_CSharp_ExposedLayoutSh_has_value(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::ExposedLayoutSh> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_value(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::optional<MR::CSharp::ExposedLayoutSh> *)(_this));
    return (const MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_value_mut(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this));
    return (MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}


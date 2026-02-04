#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_MR_CSharp_ExposedLayoutSh.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>());
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(new std::optional<MR::CSharp::ExposedLayoutSh>[num_elems]{});
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *other)
{
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)other))
    ));
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(const MR_CSharp_ExposedLayoutSh *other)
{
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(std::optional<MR::CSharp::ExposedLayoutSh>(
        (other ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *other)) : std::nullopt)
    ));
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFromAnother(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)other))
    );
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFrom(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    delete ((const std::optional<MR::CSharp::ExposedLayoutSh> *)_this);
}

void MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DestroyArray(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    delete[] ((const std::optional<MR::CSharp::ExposedLayoutSh> *)_this);
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_OffsetPtr(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(((const std::optional<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(((std::optional<MR::CSharp::ExposedLayoutSh> *)ptr) + i);
}

const MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_value(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::CSharp::ExposedLayoutSh> *)(_this));
    return (const MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
}

MR_CSharp_ExposedLayoutSh *MR_C_std_optional_MR_CSharp_ExposedLayoutSh_value_mut(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(_this));
    return (MR_CSharp_ExposedLayoutSh *)(_self ? &*_self : nullptr);
}


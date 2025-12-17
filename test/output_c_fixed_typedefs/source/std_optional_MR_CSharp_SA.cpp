#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_MR_CSharp_SA.h"

#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>());
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_CSharp_SA *)(new std::optional<MR::CSharp::SA>[num_elems]{});
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_SA *other)
{
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)other))
    ));
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_ConstructFrom(const MR_CSharp_SA *other)
{
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(std::optional<MR::CSharp::SA>(
        (other ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)other)) : std::nullopt)
    ));
}

void MR_C_std_optional_MR_CSharp_SA_AssignFromAnother(MR_C_std_optional_MR_CSharp_SA *_this, const MR_C_std_optional_MR_CSharp_SA *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::SA> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)other))
    );
}

void MR_C_std_optional_MR_CSharp_SA_AssignFrom(MR_C_std_optional_MR_CSharp_SA *_this, const MR_CSharp_SA *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::SA> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_CSharp_SA_Destroy(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    delete ((const std::optional<MR::CSharp::SA> *)_this);
}

void MR_C_std_optional_MR_CSharp_SA_DestroyArray(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    delete[] ((const std::optional<MR::CSharp::SA> *)_this);
}

const MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_OffsetPtr(const MR_C_std_optional_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_CSharp_SA *)(((const std::optional<MR::CSharp::SA> *)ptr) + i);
}

MR_C_std_optional_MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_CSharp_SA *)(((std::optional<MR::CSharp::SA> *)ptr) + i);
}

const MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_Value(const MR_C_std_optional_MR_CSharp_SA *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::CSharp::SA> *)(_this));
    return (const MR_CSharp_SA *)(_self ? &*_self : nullptr);
}

MR_CSharp_SA *MR_C_std_optional_MR_CSharp_SA_MutableValue(MR_C_std_optional_MR_CSharp_SA *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::SA> *)(_this));
    return (MR_CSharp_SA *)(_self ? &*_self : nullptr);
}


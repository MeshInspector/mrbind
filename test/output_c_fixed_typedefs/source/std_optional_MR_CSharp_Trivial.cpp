#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_MR_CSharp_Trivial.h"

#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>());
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_CSharp_Trivial *)(new std::optional<MR::CSharp::Trivial>[num_elems]{});
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_Trivial *other)
{
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)other))
    ));
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(const MR_CSharp_Trivial *other)
{
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(std::optional<MR::CSharp::Trivial>(
        (other ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)other)) : std::nullopt)
    ));
}

void MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_C_std_optional_MR_CSharp_Trivial *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::Trivial> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)other))
    );
}

void MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::Trivial> *)(_this)).operator=(
        (other ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)other)) : std::nullopt)
    );
}

void MR_C_std_optional_MR_CSharp_Trivial_Destroy(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    delete ((const std::optional<MR::CSharp::Trivial> *)_this);
}

void MR_C_std_optional_MR_CSharp_Trivial_DestroyArray(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    delete[] ((const std::optional<MR::CSharp::Trivial> *)_this);
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetPtr(const MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_CSharp_Trivial *)(((const std::optional<MR::CSharp::Trivial> *)ptr) + i);
}

MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_CSharp_Trivial *)(((std::optional<MR::CSharp::Trivial> *)ptr) + i);
}

const MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_Value(const MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::CSharp::Trivial> *)(_this));
    return (const MR_CSharp_Trivial *)(_self ? &*_self : nullptr);
}

MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_MutableValue(MR_C_std_optional_MR_CSharp_Trivial *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::Trivial> *)(_this));
    return (MR_CSharp_Trivial *)(_self ? &*_self : nullptr);
}


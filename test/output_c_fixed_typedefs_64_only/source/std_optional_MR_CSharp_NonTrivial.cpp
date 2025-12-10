#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_CSharp_NonTrivial.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)new std::optional<MR::CSharp::NonTrivial>(std::optional<MR::CSharp::NonTrivial>());
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)(new std::optional<MR::CSharp::NonTrivial>[num_elems]{});
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_optional_MR_CSharp_NonTrivial *other)
{
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)new std::optional<MR::CSharp::NonTrivial>(std::optional<MR::CSharp::NonTrivial>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::CSharp::NonTrivial>), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::CSharp::NonTrivial>), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(other, std::optional<MR::CSharp::NonTrivial>))
    ));
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom(MR_C_PassBy other_pass_by, MR_CSharp_NonTrivial *other)
{
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)new std::optional<MR::CSharp::NonTrivial>(std::optional<MR::CSharp::NonTrivial>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(other, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(other, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(other, std::optional<MR::CSharp::NonTrivial>))
    ));
}

void MR_C_std_optional_MR_CSharp_NonTrivial_AssignFromAnother(MR_C_std_optional_MR_CSharp_NonTrivial *_this, MR_C_PassBy other_pass_by, MR_C_std_optional_MR_CSharp_NonTrivial *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::NonTrivial> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::CSharp::NonTrivial>), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::CSharp::NonTrivial>), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(other, std::optional<MR::CSharp::NonTrivial>))
    );
}

void MR_C_std_optional_MR_CSharp_NonTrivial_AssignFrom(MR_C_std_optional_MR_CSharp_NonTrivial *_this, MR_C_PassBy other_pass_by, MR_CSharp_NonTrivial *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::NonTrivial> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(other, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(other, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(other, std::optional<MR::CSharp::NonTrivial>))
    );
}

void MR_C_std_optional_MR_CSharp_NonTrivial_Destroy(const MR_C_std_optional_MR_CSharp_NonTrivial *_this)
{
    delete ((const std::optional<MR::CSharp::NonTrivial> *)_this);
}

void MR_C_std_optional_MR_CSharp_NonTrivial_DestroyArray(const MR_C_std_optional_MR_CSharp_NonTrivial *_this)
{
    delete[] ((const std::optional<MR::CSharp::NonTrivial> *)_this);
}

const MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_OffsetPtr(const MR_C_std_optional_MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_MR_CSharp_NonTrivial *)(((const std::optional<MR::CSharp::NonTrivial> *)ptr) + i);
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)(((std::optional<MR::CSharp::NonTrivial> *)ptr) + i);
}

const MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_Value(const MR_C_std_optional_MR_CSharp_NonTrivial *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::CSharp::NonTrivial> *)(_this));
    return (const MR_CSharp_NonTrivial *)(_self ? &*_self : nullptr);
}

MR_CSharp_NonTrivial *MR_C_std_optional_MR_CSharp_NonTrivial_MutableValue(MR_C_std_optional_MR_CSharp_NonTrivial *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::CSharp::NonTrivial> *)(_this));
    return (MR_CSharp_NonTrivial *)(_self ? &*_self : nullptr);
}


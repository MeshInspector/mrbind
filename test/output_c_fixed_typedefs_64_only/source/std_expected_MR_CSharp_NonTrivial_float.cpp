#define MR_C_BUILD_LIBRARY
#include "std_expected_MR_CSharp_NonTrivial_float.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <expected>
#include <stdexcept>


MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_C_std_expected_MR_CSharp_NonTrivial_float_DefaultConstruct(void)
{
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)new std::expected<MR::CSharp::NonTrivial, float>(std::expected<MR::CSharp::NonTrivial, float>());
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_C_std_expected_MR_CSharp_NonTrivial_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)(new std::expected<MR::CSharp::NonTrivial, float>[num_elems]{});
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_C_std_expected_MR_CSharp_NonTrivial_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *other)
{
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)new std::expected<MR::CSharp::NonTrivial, float>(std::expected<MR::CSharp::NonTrivial, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(other, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(other, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(other, std::expected<MR::CSharp::NonTrivial, float>))
    ));
}

void MR_C_std_expected_MR_CSharp_NonTrivial_float_AssignFromAnother(MR_C_std_expected_MR_CSharp_NonTrivial_float *_this, MR_C_PassBy other_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::NonTrivial, float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(other, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(other, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(other, std::expected<MR::CSharp::NonTrivial, float>))
    );
}

void MR_C_std_expected_MR_CSharp_NonTrivial_float_Destroy(const MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    delete ((const std::expected<MR::CSharp::NonTrivial, float> *)_this);
}

void MR_C_std_expected_MR_CSharp_NonTrivial_float_DestroyArray(const MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    delete[] ((const std::expected<MR::CSharp::NonTrivial, float> *)_this);
}

const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_C_std_expected_MR_CSharp_NonTrivial_float_OffsetPtr(const MR_C_std_expected_MR_CSharp_NonTrivial_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_expected_MR_CSharp_NonTrivial_float *)(((const std::expected<MR::CSharp::NonTrivial, float> *)ptr) + i);
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_C_std_expected_MR_CSharp_NonTrivial_float_OffsetMutablePtr(MR_C_std_expected_MR_CSharp_NonTrivial_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)(((std::expected<MR::CSharp::NonTrivial, float> *)ptr) + i);
}

bool MR_C_std_expected_MR_CSharp_NonTrivial_float_success(const MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::NonTrivial, float> *)(_this)));
}

const MR_CSharp_NonTrivial *MR_C_std_expected_MR_CSharp_NonTrivial_float_value(const MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::NonTrivial, float> *)(_this));
    return (const MR_CSharp_NonTrivial *)(_self ? &*_self : nullptr);
}

const float *MR_C_std_expected_MR_CSharp_NonTrivial_float_error(const MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<MR::CSharp::NonTrivial, float> *)(_this));
    return _self ? nullptr : &_self.error();
}

MR_CSharp_NonTrivial *MR_C_std_expected_MR_CSharp_NonTrivial_float_value_mut(MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::NonTrivial, float> *)(_this));
    return (MR_CSharp_NonTrivial *)(_self ? &*_self : nullptr);
}

float *MR_C_std_expected_MR_CSharp_NonTrivial_float_error_mut(MR_C_std_expected_MR_CSharp_NonTrivial_float *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<MR::CSharp::NonTrivial, float> *)(_this));
    return _self ? nullptr : &_self.error();
}


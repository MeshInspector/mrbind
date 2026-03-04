#define MR_C_BUILD_LIBRARY
#include "std_optional_MR_StdOptional_B.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <cstddef>
#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>());
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_B *)(new std::optional<MR::StdOptional::B>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_optional_MR_StdOptional_B *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::optional<MR::StdOptional::B>);
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_ConstructFrom(MR_C_PassBy other_pass_by, MR_StdOptional_B *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, MR::StdOptional::B);
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(MR_C_std_optional_MR_StdOptional_B *_this, MR_C_PassBy other_pass_by, MR_C_std_optional_MR_StdOptional_B *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::optional<MR::StdOptional::B>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::B> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_B_AssignFrom(MR_C_std_optional_MR_StdOptional_B *_this, MR_C_PassBy other_pass_by, MR_StdOptional_B *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, MR::StdOptional::B);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::B> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_B_Destroy(const MR_C_std_optional_MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    delete ((const std::optional<MR::StdOptional::B> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_optional_MR_StdOptional_B_DestroyArray(const MR_C_std_optional_MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::optional<MR::StdOptional::B> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_OffsetPtr(const MR_C_std_optional_MR_StdOptional_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_optional_MR_StdOptional_B *)(((const std::optional<MR::StdOptional::B> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_OffsetMutablePtr(MR_C_std_optional_MR_StdOptional_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_B *)(((std::optional<MR::StdOptional::B> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_optional_MR_StdOptional_B_has_value(const MR_C_std_optional_MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::StdOptional::B> *)(_this)));
    ) // MRBINDC_TRY
}

const MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_value(const MR_C_std_optional_MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<MR::StdOptional::B> *)(_this));
    return (const MR_StdOptional_B *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_value_mut(MR_C_std_optional_MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<MR::StdOptional::B> *)(_this));
    return (MR_StdOptional_B *)(_self ? &*_self : nullptr);
    ) // MRBINDC_TRY
}


#include "std_optional_MR_StdOptional_B.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <optional>
#include <stdexcept>


MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_DefaultConstruct(void)
{
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>());
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_optional_MR_StdOptional_B *other)
{
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    ));
}

MR_C_std_optional_MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_ConstructFrom(MR_C_PassBy other_pass_by, MR_StdOptional_B *other)
{
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(std::optional<MR::StdOptional::B>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    ));
}

void MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(MR_C_std_optional_MR_StdOptional_B *_this, MR_C_PassBy other_pass_by, MR_C_std_optional_MR_StdOptional_B *other)
{
    (_this ? *(std::optional<MR::StdOptional::B> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (std::optional<MR::StdOptional::B>), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    );
}

void MR_C_std_optional_MR_StdOptional_B_AssignFrom(MR_C_std_optional_MR_StdOptional_B *_this, MR_C_PassBy other_pass_by, MR_StdOptional_B *other)
{
    (_this ? *(std::optional<MR::StdOptional::B> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(other, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(other, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(other, std::optional<MR::StdOptional::B>))
    );
}

void MR_C_std_optional_MR_StdOptional_B_Destroy(MR_C_std_optional_MR_StdOptional_B *_this)
{
    delete &(_this ? *(std::optional<MR::StdOptional::B> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_Value(const MR_C_std_optional_MR_StdOptional_B *_this)
{
    auto &self = (_this ? *(const std::optional<MR::StdOptional::B> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (const MR_StdOptional_B *)(self ? &*self : nullptr);
}

MR_StdOptional_B *MR_C_std_optional_MR_StdOptional_B_MutableValue(MR_C_std_optional_MR_StdOptional_B *_this)
{
    auto &self = (_this ? *(std::optional<MR::StdOptional::B> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    return (MR_StdOptional_B *)(self ? &*self : nullptr);
}


#define MR_C_BUILD_LIBRARY
#include "A/a.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>
#include <input/AB_base/ab_base.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateA *MR_SeparateA_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_SeparateA *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::SeparateA);
    return (MR_SeparateA *)new MR::SeparateA(MR::SeparateA(
        (MRBINDC_CLASSARG_COPY(_other, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(_other, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(_other, MR::SeparateA))
    ));
}

const MR_SeparateA *MR_SeparateA_OffsetPtr(const MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(((const MR::SeparateA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_OffsetMutablePtr(MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(((MR::SeparateA *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CommonBaseAB *MR_SeparateA_UpcastTo_MR_CommonBaseAB(const MR_SeparateA *object)
{
    MRBINDC_TRY(
    return (const MR_CommonBaseAB *)(static_cast<const MR::CommonBaseAB *>(
        ((const MR::SeparateA *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CommonBaseAB *MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB(MR_SeparateA *object)
{
    MRBINDC_TRY(
    return (MR_CommonBaseAB *)(static_cast<MR::CommonBaseAB *>(
        ((MR::SeparateA *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_SeparateA_StaticDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(static_cast<const MR::SeparateA *>(
        ((const MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(static_cast<MR::SeparateA *>(
        ((MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(dynamic_cast<const MR::SeparateA *>(
        ((const MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(dynamic_cast<MR::SeparateA *>(
        ((MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_SeparateA_DynamicDowncastFromOrFail_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(dynamic_cast<const MR::SeparateA &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CommonBaseAB *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_MutableDynamicDowncastFromOrFail_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(dynamic_cast<MR::SeparateA &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CommonBaseAB *)(object))
    ));
    ) // MRBINDC_TRY
}

void MR_SeparateA_Destroy(const MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SeparateA *)_this);
    ) // MRBINDC_TRY
}

void MR_SeparateA_DestroyArray(const MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SeparateA *)_this);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_AssignFromAnother(MR_SeparateA *_this, MR_C_PassBy _other_pass_by, MR_SeparateA *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::SeparateA);
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateA *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(_other, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(_other, MR::SeparateA))
    ));
}

MR_C_std_vector_MR_SeparateA *MR_GetSeparateVecA(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(::MR::GetSeparateVecA());
    ) // MRBINDC_TRY
}


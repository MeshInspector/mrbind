#define MR_C_BUILD_LIBRARY
#include "B/b.h"

#include <__mrbind_c_details.h>
#include <input/AB_base/ab_base.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateB *MR_SeparateB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_SeparateB *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::SeparateB);
    return (MR_SeparateB *)new MR::SeparateB(MR::SeparateB(
        (MRBINDC_CLASSARG_COPY(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(_other, MR::SeparateB))
    ));
}

const MR_SeparateB *MR_SeparateB_OffsetPtr(const MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((const MR::SeparateB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((MR::SeparateB *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CommonBaseAB *MR_SeparateB_UpcastTo_MR_CommonBaseAB(const MR_SeparateB *object)
{
    MRBINDC_TRY(
    return (const MR_CommonBaseAB *)(static_cast<const MR::CommonBaseAB *>(
        ((const MR::SeparateB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CommonBaseAB *MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB(MR_SeparateB *object)
{
    MRBINDC_TRY(
    return (MR_CommonBaseAB *)(static_cast<MR::CommonBaseAB *>(
        ((MR::SeparateB *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_CommonBaseAB_StaticDowncastTo_MR_SeparateB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(static_cast<const MR::SeparateB *>(
        ((const MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_CommonBaseAB_MutableStaticDowncastTo_MR_SeparateB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(static_cast<MR::SeparateB *>(
        ((MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_CommonBaseAB_DynamicDowncastTo_MR_SeparateB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(dynamic_cast<const MR::SeparateB *>(
        ((const MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_CommonBaseAB_MutableDynamicDowncastTo_MR_SeparateB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(dynamic_cast<MR::SeparateB *>(
        ((MR::CommonBaseAB *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_CommonBaseAB_DynamicDowncastToOrFail_MR_SeparateB(const MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)std::addressof(dynamic_cast<const MR::SeparateB &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CommonBaseAB *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_CommonBaseAB_MutableDynamicDowncastToOrFail_MR_SeparateB(MR_CommonBaseAB *object)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)std::addressof(dynamic_cast<MR::SeparateB &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CommonBaseAB *)(object))
    ));
    ) // MRBINDC_TRY
}

void MR_SeparateB_Destroy(const MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SeparateB *)_this);
    ) // MRBINDC_TRY
}

void MR_SeparateB_DestroyArray(const MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SeparateB *)_this);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, MR_C_PassBy _other_pass_by, MR_SeparateB *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::SeparateB);
    return (MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(_other, MR::SeparateB))
    ));
}

MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(::MR::GetSeparateVecB());
    ) // MRBINDC_TRY
}


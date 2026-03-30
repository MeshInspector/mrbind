#define MR_AB_BUILD_LIBRARY
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
    return (const MR_SeparateB *)(((const MR::SeparateB *)ptr) + i);
}

MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i)
{
    return (MR_SeparateB *)(((MR::SeparateB *)ptr) + i);
}

const MR_CommonBaseAB *MR_SeparateB_UpcastTo_MR_CommonBaseAB(const MR_SeparateB *object)
{
    return (const MR_CommonBaseAB *)(static_cast<const MR::CommonBaseAB *>(
        ((const MR::SeparateB *)object)
    ));
}

MR_CommonBaseAB *MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB(MR_SeparateB *object)
{
    return (MR_CommonBaseAB *)(static_cast<MR::CommonBaseAB *>(
        ((MR::SeparateB *)object)
    ));
}

const MR_SeparateB *MR_SeparateB_StaticDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    return (const MR_SeparateB *)(static_cast<const MR::SeparateB *>(
        ((const MR::CommonBaseAB *)object)
    ));
}

MR_SeparateB *MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    return (MR_SeparateB *)(static_cast<MR::SeparateB *>(
        ((MR::CommonBaseAB *)object)
    ));
}

const MR_SeparateB *MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    return (const MR_SeparateB *)(dynamic_cast<const MR::SeparateB *>(
        ((const MR::CommonBaseAB *)object)
    ));
}

MR_SeparateB *MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    return (MR_SeparateB *)(dynamic_cast<MR::SeparateB *>(
        ((MR::CommonBaseAB *)object)
    ));
}

const MR_SeparateB *MR_SeparateB_DynamicDowncastFromOrFail_MR_CommonBaseAB(const MR_CommonBaseAB *object)
{
    return (const MR_SeparateB *)std::addressof(dynamic_cast<const MR::SeparateB &>(
        ((object ? void() : MRBINDC_THROW("Parameter `object` can not be null.", void)), *(const MR::CommonBaseAB *)(object))
    ));
}

MR_SeparateB *MR_SeparateB_MutableDynamicDowncastFromOrFail_MR_CommonBaseAB(MR_CommonBaseAB *object)
{
    return (MR_SeparateB *)std::addressof(dynamic_cast<MR::SeparateB &>(
        ((object ? void() : MRBINDC_THROW("Parameter `object` can not be null.", void)), *(MR::CommonBaseAB *)(object))
    ));
}

void MR_SeparateB_Destroy(const MR_SeparateB *_this)
{
    delete ((const MR::SeparateB *)_this);
}

void MR_SeparateB_DestroyArray(const MR_SeparateB *_this)
{
    delete[] ((const MR::SeparateB *)_this);
}

MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, MR_C_PassBy _other_pass_by, MR_SeparateB *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::SeparateB);
    return (MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SeparateB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(_other, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(_other, MR::SeparateB))
    ));
}

MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void)
{
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(::MR::GetSeparateVecB());
}


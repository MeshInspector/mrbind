#define MR_C_BUILD_LIBRARY
#include "AB_base/ab_base.h"

#include <__mrbind_c_details.h>
#include <input/AB_base/ab_base.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_CommonBaseAB *MR_CommonBaseAB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CommonBaseAB);
    return (MR_CommonBaseAB *)new MR::CommonBaseAB(MR::CommonBaseAB(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_MOVE(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CommonBaseAB) MRBINDC_CLASSARG_END(_other, MR::CommonBaseAB))
    ));
    ) // MRBINDC_TRY
}

const MR_CommonBaseAB *MR_CommonBaseAB_OffsetPtr(const MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CommonBaseAB *)(((const MR::CommonBaseAB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CommonBaseAB *MR_CommonBaseAB_OffsetMutablePtr(MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CommonBaseAB *)(((MR::CommonBaseAB *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CommonBaseAB_Destroy(const MR_CommonBaseAB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CommonBaseAB *)_this);
    ) // MRBINDC_TRY
}

void MR_CommonBaseAB_DestroyArray(const MR_CommonBaseAB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CommonBaseAB *)_this);
    ) // MRBINDC_TRY
}

MR_CommonBaseAB *MR_CommonBaseAB_AssignFromAnother(MR_CommonBaseAB *_this, MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CommonBaseAB);
    return (MR_CommonBaseAB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CommonBaseAB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_MOVE(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CommonBaseAB) MRBINDC_CLASSARG_END(_other, MR::CommonBaseAB))
    ));
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "AB_base/ab_base.h"

#include <__mrbind_c_details.h>
#include <input/AB_base/ab_base.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_CommonBaseAB *MR_CommonBaseAB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::CommonBaseAB);
    return (MR_CommonBaseAB *)new MR::CommonBaseAB(MR::CommonBaseAB(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_MOVE(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CommonBaseAB) MRBINDC_CLASSARG_END(_other, MR::CommonBaseAB))
    ));
}

const MR_CommonBaseAB *MR_CommonBaseAB_OffsetPtr(const MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    return (const MR_CommonBaseAB *)(((const MR::CommonBaseAB *)ptr) + i);
}

MR_CommonBaseAB *MR_CommonBaseAB_OffsetMutablePtr(MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    return (MR_CommonBaseAB *)(((MR::CommonBaseAB *)ptr) + i);
}

void MR_CommonBaseAB_Destroy(const MR_CommonBaseAB *_this)
{
    delete ((const MR::CommonBaseAB *)_this);
}

void MR_CommonBaseAB_DestroyArray(const MR_CommonBaseAB *_this)
{
    delete[] ((const MR::CommonBaseAB *)_this);
}

MR_CommonBaseAB *MR_CommonBaseAB_AssignFromAnother(MR_CommonBaseAB *_this, MR_C_PassBy _other_pass_by, MR_CommonBaseAB *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::CommonBaseAB);
    return (MR_CommonBaseAB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::CommonBaseAB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_MOVE(_other, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CommonBaseAB) MRBINDC_CLASSARG_END(_other, MR::CommonBaseAB))
    ));
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_mark_shared_common_base_ab(void)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(::MR::mark_shared_common_base_ab());
}


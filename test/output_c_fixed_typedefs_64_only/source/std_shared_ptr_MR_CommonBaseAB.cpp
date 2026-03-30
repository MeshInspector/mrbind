#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CommonBaseAB.h"

#include <__mrbind_c_details.h>
#include <input/AB_base/ab_base.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<MR::CommonBaseAB>());
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)(new std::shared_ptr<MR::CommonBaseAB>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CommonBaseAB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CommonBaseAB>);
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<MR::CommonBaseAB>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CommonBaseAB>), std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CommonBaseAB>), std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CommonBaseAB>))
    ));
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_AssignFromAnother(MR_C_std_shared_ptr_MR_CommonBaseAB *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CommonBaseAB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::CommonBaseAB>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CommonBaseAB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CommonBaseAB>), std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CommonBaseAB>), std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CommonBaseAB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CommonBaseAB>))
    );
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_Destroy(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    delete ((const std::shared_ptr<MR::CommonBaseAB> *)_this);
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_DestroyArray(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    delete[] ((const std::shared_ptr<MR::CommonBaseAB> *)_this);
}

const MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_OffsetPtr(const MR_C_std_shared_ptr_MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CommonBaseAB *)(((const std::shared_ptr<MR::CommonBaseAB> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CommonBaseAB *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)(((std::shared_ptr<MR::CommonBaseAB> *)ptr) + i);
}

MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_get(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    return (MR_CommonBaseAB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CommonBaseAB> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_CommonBaseAB_has_value(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CommonBaseAB> *)(_this)));
}

int MR_C_std_shared_ptr_MR_CommonBaseAB_use_count(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CommonBaseAB> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_reset(MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CommonBaseAB> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructFromValue(MR_C_PassBy value_pass_by, MR_CommonBaseAB *value)
{
    MRBINDC_CLASSARG_GUARD(value, MR::CommonBaseAB);
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::make_shared<MR::CommonBaseAB>(
        (MRBINDC_CLASSARG_COPY(value, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_MOVE(value, (MR::CommonBaseAB), MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, MR::CommonBaseAB) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, MR::CommonBaseAB) MRBINDC_CLASSARG_END(value, MR::CommonBaseAB))
    ));
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(MR_CommonBaseAB *ptr)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<MR::CommonBaseAB>(
        std::unique_ptr<MR::CommonBaseAB>((MR::CommonBaseAB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_Assign(MR_C_std_shared_ptr_MR_CommonBaseAB *_this, MR_CommonBaseAB *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CommonBaseAB> *)(_this)) = std::shared_ptr<MR::CommonBaseAB>(
        std::unique_ptr<MR::CommonBaseAB>((MR::CommonBaseAB *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructNonOwning(MR_CommonBaseAB *ptr)
{
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<void>{}, ((MR::CommonBaseAB *)ptr)));
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_AssignNonOwning(MR_C_std_shared_ptr_MR_CommonBaseAB *_this, MR_CommonBaseAB *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CommonBaseAB> *)(_this)) = std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<void>{}, ((MR::CommonBaseAB *)ptr));
}

MR_C_std_shared_ptr_MR_CommonBaseAB *MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CommonBaseAB *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_CommonBaseAB *)new std::shared_ptr<MR::CommonBaseAB>(std::shared_ptr<MR::CommonBaseAB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CommonBaseAB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_AssignAliasing(MR_C_std_shared_ptr_MR_CommonBaseAB *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CommonBaseAB *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::CommonBaseAB> *)(_this)) = std::shared_ptr<MR::CommonBaseAB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CommonBaseAB *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_CommonBaseAB_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CommonBaseAB> *)(_this))));
}

void MR_C_std_shared_ptr_MR_CommonBaseAB_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_CommonBaseAB *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::CommonBaseAB> *)(_this));
}


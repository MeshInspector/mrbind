#define MR_AB_BUILD_LIBRARY
#include "AB/common/std_shared_ptr_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::shared_ptr<MR::SeparateB>());
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_SeparateB *)(new std::shared_ptr<MR::SeparateB>[num_elems]{});
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_SeparateB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::SeparateB>);
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::shared_ptr<MR::SeparateB>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::SeparateB>), std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::SeparateB>), std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::SeparateB>))
    ));
}

void MR_C_std_shared_ptr_MR_SeparateB_AssignFromAnother(MR_C_std_shared_ptr_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_SeparateB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::shared_ptr<MR::SeparateB>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::SeparateB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::SeparateB>), std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::SeparateB>), std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::SeparateB>))
    );
}

void MR_C_std_shared_ptr_MR_SeparateB_Destroy(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    delete ((const std::shared_ptr<MR::SeparateB> *)_this);
}

void MR_C_std_shared_ptr_MR_SeparateB_DestroyArray(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    delete[] ((const std::shared_ptr<MR::SeparateB> *)_this);
}

const MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_OffsetPtr(const MR_C_std_shared_ptr_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_SeparateB *)(((const std::shared_ptr<MR::SeparateB> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_OffsetMutablePtr(MR_C_std_shared_ptr_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_SeparateB *)(((std::shared_ptr<MR::SeparateB> *)ptr) + i);
}

MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_get(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::SeparateB> *)(_this)).get());
}

bool MR_C_std_shared_ptr_MR_SeparateB_has_value(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::SeparateB> *)(_this)));
}

int MR_C_std_shared_ptr_MR_SeparateB_use_count(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    return int(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::SeparateB> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_MR_SeparateB_reset(MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::SeparateB> *)(_this)).reset();
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_ConstructFromValue(MR_C_PassBy value_pass_by, MR_SeparateB *value)
{
    MRBINDC_CLASSARG_GUARD(value, MR::SeparateB);
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::make_shared<MR::SeparateB>(
        (MRBINDC_CLASSARG_COPY(value, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(value, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(value, MR::SeparateB))
    ));
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_Construct(MR_SeparateB *ptr)
{
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::shared_ptr<MR::SeparateB>(
        std::unique_ptr<MR::SeparateB>((MR::SeparateB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_SeparateB_Assign(MR_C_std_shared_ptr_MR_SeparateB *_this, MR_SeparateB *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::SeparateB> *)(_this)) = std::shared_ptr<MR::SeparateB>(
        std::unique_ptr<MR::SeparateB>((MR::SeparateB *)ptr)
    );
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_ConstructNonOwning(MR_SeparateB *ptr)
{
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::shared_ptr<MR::SeparateB>(std::shared_ptr<void>{}, ((MR::SeparateB *)ptr)));
}

void MR_C_std_shared_ptr_MR_SeparateB_AssignNonOwning(MR_C_std_shared_ptr_MR_SeparateB *_this, MR_SeparateB *ptr)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::SeparateB> *)(_this)) = std::shared_ptr<MR::SeparateB>(std::shared_ptr<void>{}, ((MR::SeparateB *)ptr));
}

MR_C_std_shared_ptr_MR_SeparateB *MR_C_std_shared_ptr_MR_SeparateB_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_SeparateB *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    return (MR_C_std_shared_ptr_MR_SeparateB *)new std::shared_ptr<MR::SeparateB>(std::shared_ptr<MR::SeparateB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::SeparateB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_SeparateB_AssignAliasing(MR_C_std_shared_ptr_MR_SeparateB *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_SeparateB *ptr)
{
    MRBINDC_CLASSARG_GUARD(ownership, std::shared_ptr<const void>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::shared_ptr<MR::SeparateB> *)(_this)) = std::shared_ptr<MR::SeparateB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::SeparateB *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_MR_SeparateB_ConvertTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_SeparateB *_this)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::SeparateB> *)(_this))));
}

void MR_C_std_shared_ptr_MR_SeparateB_AssignTo_MR_C_std_shared_ptr_void(const MR_C_std_shared_ptr_MR_SeparateB *_this, MR_C_std_shared_ptr_void *_target)
{
    ((_target ? void() : MRBINDC_THROW("Parameter `_target` can not be null.", void)), *(std::shared_ptr<void> *)(_target)) = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::shared_ptr<MR::SeparateB> *)(_this));
}


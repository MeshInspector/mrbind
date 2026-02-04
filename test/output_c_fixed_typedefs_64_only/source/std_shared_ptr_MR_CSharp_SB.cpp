#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SB.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)new std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<MR::CSharp::SB>());
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)(new std::shared_ptr<MR::CSharp::SB>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SB *other)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)new std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<MR::CSharp::SB>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SB>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SB_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SB *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SB *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SB>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SB *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SB> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SB_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SB *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SB> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SB *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SB *)(((const std::shared_ptr<MR::CSharp::SB> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SB *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)(((std::shared_ptr<MR::CSharp::SB> *)ptr) + i);
}

MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_get(const MR_C_std_shared_ptr_MR_CSharp_SB *_this)
{
    return (MR_CSharp_SB *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SB> *)(_this)).get());
}

int MR_C_std_shared_ptr_MR_CSharp_SB_use_count(const MR_C_std_shared_ptr_MR_CSharp_SB *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SB> *)(_this)).use_count());
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_Construct(MR_CSharp_SB *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)new std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<MR::CSharp::SB>(
        std::unique_ptr<MR::CSharp::SB>((MR::CSharp::SB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SB_Assign(MR_C_std_shared_ptr_MR_CSharp_SB *_this, MR_CSharp_SB *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SB> *)(_this)) = std::shared_ptr<MR::CSharp::SB>(
        std::unique_ptr<MR::CSharp::SB>((MR::CSharp::SB *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(MR_CSharp_SB *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)new std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<void>{}, ((MR::CSharp::SB *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SB_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SB *_this, MR_CSharp_SB *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SB> *)(_this)) = std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<void>{}, ((MR::CSharp::SB *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SB *MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SB *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SB *)new std::shared_ptr<MR::CSharp::SB>(std::shared_ptr<MR::CSharp::SB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SB *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SB_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SB *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SB *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SB> *)(_this)) = std::shared_ptr<MR::CSharp::SB>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SB *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SB *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SB>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SB *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SB>), std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SB>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SB>));
}


#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_const_MR_CSharp_SA.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>());
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)(new std::shared_ptr<const MR::CSharp::SA>[num_elems]{});
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *other)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::CSharp::SA>))
    ));
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_AssignFromAnother(MR_C_std_shared_ptr_const_MR_CSharp_SA *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::CSharp::SA>))
    );
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_Destroy(const MR_C_std_shared_ptr_const_MR_CSharp_SA *_this)
{
    delete ((const std::shared_ptr<const MR::CSharp::SA> *)_this);
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_DestroyArray(const MR_C_std_shared_ptr_const_MR_CSharp_SA *_this)
{
    delete[] ((const std::shared_ptr<const MR::CSharp::SA> *)_this);
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_OffsetPtr(const MR_C_std_shared_ptr_const_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)(((const std::shared_ptr<const MR::CSharp::SA> *)ptr) + i);
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)(((std::shared_ptr<const MR::CSharp::SA> *)ptr) + i);
}

const MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_Get(const MR_C_std_shared_ptr_const_MR_CSharp_SA *_this)
{
    return (const MR_CSharp_SA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::CSharp::SA> *)(_this)).get());
}

int MR_C_std_shared_ptr_const_MR_CSharp_SA_UseCount(const MR_C_std_shared_ptr_const_MR_CSharp_SA *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::CSharp::SA> *)(_this)).use_count());
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_Construct(const MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>(
        std::unique_ptr<const MR::CSharp::SA>((const MR::CSharp::SA *)ptr)
    ));
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_Assign(MR_C_std_shared_ptr_const_MR_CSharp_SA *_this, const MR_CSharp_SA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(_this)) = std::shared_ptr<const MR::CSharp::SA>(
        std::unique_ptr<const MR::CSharp::SA>((const MR::CSharp::SA *)ptr)
    );
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_ConstructNonOwning(const MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<void>{}, ((const MR::CSharp::SA *)ptr)));
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_AssignNonOwning(MR_C_std_shared_ptr_const_MR_CSharp_SA *_this, const MR_CSharp_SA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(_this)) = std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<void>{}, ((const MR::CSharp::SA *)ptr));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::CSharp::SA>))
    ));
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_AssignFromMutable(MR_C_std_shared_ptr_const_MR_CSharp_SA *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<MR::CSharp::SA>));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_C_std_shared_ptr_const_MR_CSharp_SA_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_CSharp_SA *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(std::shared_ptr<const MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::CSharp::SA *)ptr)
    ));
}

void MR_C_std_shared_ptr_const_MR_CSharp_SA_AssignAliasing(MR_C_std_shared_ptr_const_MR_CSharp_SA *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const MR_CSharp_SA *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(_this)) = std::shared_ptr<const MR::CSharp::SA>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((const MR::CSharp::SA *)ptr)
    );
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *_other)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const MR::CSharp::SA>))
    ));
}

void MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const MR::CSharp::SA>));
}


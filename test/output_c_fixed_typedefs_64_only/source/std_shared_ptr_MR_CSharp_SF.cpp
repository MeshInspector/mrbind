#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SF.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)new std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<MR::CSharp::SF>());
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)(new std::shared_ptr<MR::CSharp::SF>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SF *other)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)new std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<MR::CSharp::SF>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SF>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SF_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SF *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SF *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SF> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SF>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SF_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SF *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SF> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SF_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SF *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SF> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SF *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SF *)(((const std::shared_ptr<MR::CSharp::SF> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SF *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)(((std::shared_ptr<MR::CSharp::SF> *)ptr) + i);
}

MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_Get(const MR_C_std_shared_ptr_MR_CSharp_SF *_this)
{
    return (MR_CSharp_SF *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SF> *)(_this)).get());
}

int MR_C_std_shared_ptr_MR_CSharp_SF_UseCount(const MR_C_std_shared_ptr_MR_CSharp_SF *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SF> *)(_this)).use_count());
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_Construct(MR_CSharp_SF *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)new std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<MR::CSharp::SF>(
        std::unique_ptr<MR::CSharp::SF>((MR::CSharp::SF *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SF_Assign(MR_C_std_shared_ptr_MR_CSharp_SF *_this, MR_CSharp_SF *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SF> *)(_this)) = std::shared_ptr<MR::CSharp::SF>(
        std::unique_ptr<MR::CSharp::SF>((MR::CSharp::SF *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_ConstructNonOwning(MR_CSharp_SF *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)new std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<void>{}, ((MR::CSharp::SF *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SF_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SF *_this, MR_CSharp_SF *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SF> *)(_this)) = std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<void>{}, ((MR::CSharp::SF *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SF *MR_C_std_shared_ptr_MR_CSharp_SF_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SF *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SF *)new std::shared_ptr<MR::CSharp::SF>(std::shared_ptr<MR::CSharp::SF>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SF *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SF_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SF *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SF *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SF> *)(_this)) = std::shared_ptr<MR::CSharp::SF>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SF *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SF *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SF>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SF(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SF *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SF>), std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SF>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SF>));
}


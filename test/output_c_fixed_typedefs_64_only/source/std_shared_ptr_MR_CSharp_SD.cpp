#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SD.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>());
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)(new std::shared_ptr<MR::CSharp::SD>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *other)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SD>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SD> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SD>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SD_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SD> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SD_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SD> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SD *)(((const std::shared_ptr<MR::CSharp::SD> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)(((std::shared_ptr<MR::CSharp::SD> *)ptr) + i);
}

MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_get(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return (MR_CSharp_SD *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SD> *)(_this)).get());
}

int MR_C_std_shared_ptr_MR_CSharp_SD_use_count(const MR_C_std_shared_ptr_MR_CSharp_SD *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SD> *)(_this)).use_count());
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_Construct(MR_CSharp_SD *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        std::unique_ptr<MR::CSharp::SD>((MR::CSharp::SD *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_Assign(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_CSharp_SD *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(
        std::unique_ptr<MR::CSharp::SD>((MR::CSharp::SD *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructNonOwning(MR_CSharp_SD *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<void>{}, ((MR::CSharp::SD *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_CSharp_SD *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<void>{}, ((MR::CSharp::SD *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SD *MR_C_std_shared_ptr_MR_CSharp_SD_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SD *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SD *)new std::shared_ptr<MR::CSharp::SD>(std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SD *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SD_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SD *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SD *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SD> *)(_this)) = std::shared_ptr<MR::CSharp::SD>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SD *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SD>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SD(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SD *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SD>), std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SD>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SD>));
}


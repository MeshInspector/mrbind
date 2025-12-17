#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_shared_ptr_MR_CSharp_SE.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>());
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)(new std::shared_ptr<MR::CSharp::SE>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *other)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SE>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SE> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SE>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SE_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SE> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SE_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SE> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SE *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SE *)(((const std::shared_ptr<MR::CSharp::SE> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SE *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)(((std::shared_ptr<MR::CSharp::SE> *)ptr) + i);
}

MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_Get(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    return (MR_CSharp_SE *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SE> *)(_this)).get());
}

int MR_C_std_shared_ptr_MR_CSharp_SE_UseCount(const MR_C_std_shared_ptr_MR_CSharp_SE *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SE> *)(_this)).use_count());
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_Construct(MR_CSharp_SE *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        std::unique_ptr<MR::CSharp::SE>((MR::CSharp::SE *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SE_Assign(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_CSharp_SE *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(
        std::unique_ptr<MR::CSharp::SE>((MR::CSharp::SE *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructNonOwning(MR_CSharp_SE *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<void>{}, ((MR::CSharp::SE *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_CSharp_SE *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<void>{}, ((MR::CSharp::SE *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_C_std_shared_ptr_MR_CSharp_SE_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SE *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SE *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SE_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SE *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SE *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SE> *)(_this)) = std::shared_ptr<MR::CSharp::SE>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SE *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SE>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SE(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SE *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SE>), std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SE>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SE>));
}


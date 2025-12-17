#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_CSharp_SC.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)new std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<MR::CSharp::SC>());
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)(new std::shared_ptr<MR::CSharp::SC>[num_elems]{});
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SC *other)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)new std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<MR::CSharp::SC>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SC>))
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SC_AssignFromAnother(MR_C_std_shared_ptr_MR_CSharp_SC *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SC *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SC> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::CSharp::SC>))
    );
}

void MR_C_std_shared_ptr_MR_CSharp_SC_Destroy(const MR_C_std_shared_ptr_MR_CSharp_SC *_this)
{
    delete ((const std::shared_ptr<MR::CSharp::SC> *)_this);
}

void MR_C_std_shared_ptr_MR_CSharp_SC_DestroyArray(const MR_C_std_shared_ptr_MR_CSharp_SC *_this)
{
    delete[] ((const std::shared_ptr<MR::CSharp::SC> *)_this);
}

const MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_OffsetPtr(const MR_C_std_shared_ptr_MR_CSharp_SC *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_CSharp_SC *)(((const std::shared_ptr<MR::CSharp::SC> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_OffsetMutablePtr(MR_C_std_shared_ptr_MR_CSharp_SC *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)(((std::shared_ptr<MR::CSharp::SC> *)ptr) + i);
}

MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_Get(const MR_C_std_shared_ptr_MR_CSharp_SC *_this)
{
    return (MR_CSharp_SC *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SC> *)(_this)).get());
}

int MR_C_std_shared_ptr_MR_CSharp_SC_UseCount(const MR_C_std_shared_ptr_MR_CSharp_SC *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<MR::CSharp::SC> *)(_this)).use_count());
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_Construct(MR_CSharp_SC *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)new std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<MR::CSharp::SC>(
        std::unique_ptr<MR::CSharp::SC>((MR::CSharp::SC *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SC_Assign(MR_C_std_shared_ptr_MR_CSharp_SC *_this, MR_CSharp_SC *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SC> *)(_this)) = std::shared_ptr<MR::CSharp::SC>(
        std::unique_ptr<MR::CSharp::SC>((MR::CSharp::SC *)ptr)
    );
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning(MR_CSharp_SC *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)new std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<void>{}, ((MR::CSharp::SC *)ptr)));
}

void MR_C_std_shared_ptr_MR_CSharp_SC_AssignNonOwning(MR_C_std_shared_ptr_MR_CSharp_SC *_this, MR_CSharp_SC *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SC> *)(_this)) = std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<void>{}, ((MR::CSharp::SC *)ptr));
}

MR_C_std_shared_ptr_MR_CSharp_SC *MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SC *ptr)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SC *)new std::shared_ptr<MR::CSharp::SC>(std::shared_ptr<MR::CSharp::SC>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SC *)ptr)
    ));
}

void MR_C_std_shared_ptr_MR_CSharp_SC_AssignAliasing(MR_C_std_shared_ptr_MR_CSharp_SC *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, MR_CSharp_SC *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<MR::CSharp::SC> *)(_this)) = std::shared_ptr<MR::CSharp::SC>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ((MR::CSharp::SC *)ptr)
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SC *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SC>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_MR_CSharp_SC *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<MR::CSharp::SC>), std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SC>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<MR::CSharp::SC>));
}


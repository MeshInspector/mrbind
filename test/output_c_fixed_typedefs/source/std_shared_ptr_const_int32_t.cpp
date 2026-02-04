#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_shared_ptr_const_int32_t.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>());
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_int32_t *)(new std::shared_ptr<const int32_t>[num_elems]{});
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int32_t *other)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int32_t>))
    ));
}

void MR_C_std_shared_ptr_const_int32_t_AssignFromAnother(MR_C_std_shared_ptr_const_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int32_t>))
    );
}

void MR_C_std_shared_ptr_const_int32_t_Destroy(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    delete ((const std::shared_ptr<const int32_t> *)_this);
}

void MR_C_std_shared_ptr_const_int32_t_DestroyArray(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    delete[] ((const std::shared_ptr<const int32_t> *)_this);
}

const MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_OffsetPtr(const MR_C_std_shared_ptr_const_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_int32_t *)(((const std::shared_ptr<const int32_t> *)ptr) + i);
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_OffsetMutablePtr(MR_C_std_shared_ptr_const_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_int32_t *)(((std::shared_ptr<const int32_t> *)ptr) + i);
}

const int32_t *MR_C_std_shared_ptr_const_int32_t_get(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int32_t> *)(_this)).get();
}

int MR_C_std_shared_ptr_const_int32_t_use_count(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int32_t> *)(_this)).use_count());
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_Construct(const int32_t *ptr)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>(
        std::unique_ptr<const int32_t>(ptr)
    ));
}

void MR_C_std_shared_ptr_const_int32_t_Assign(MR_C_std_shared_ptr_const_int32_t *_this, const int32_t *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)) = std::shared_ptr<const int32_t>(
        std::unique_ptr<const int32_t>(ptr)
    );
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_ConstructNonOwning(const int32_t *ptr)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_const_int32_t_AssignNonOwning(MR_C_std_shared_ptr_const_int32_t *_this, const int32_t *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)) = std::shared_ptr<const int32_t>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_ConstructFromMutable(MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_int32_t *ptr)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<int32_t>))
    ));
}

void MR_C_std_shared_ptr_const_int32_t_AssignFromMutable(MR_C_std_shared_ptr_const_int32_t *_this, MR_C_PassBy ptr_pass_by, MR_C_std_shared_ptr_int32_t *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(ptr, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_COPY(ptr, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_MOVE(ptr, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(ptr, MR_C_PassBy_NoObject, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_END(ptr, std::shared_ptr<int32_t>));
}

MR_C_std_shared_ptr_const_int32_t *MR_C_std_shared_ptr_const_int32_t_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const int32_t *ptr)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(std::shared_ptr<const int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_const_int32_t_AssignAliasing(MR_C_std_shared_ptr_const_int32_t *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, const int32_t *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)) = std::shared_ptr<const int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

MR_C_std_shared_ptr_const_void *MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_int32_t *_other)
{
    return (MR_C_std_shared_ptr_const_void *)new std::shared_ptr<const void>(std::shared_ptr<const void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const int32_t>))
    ));
}

void MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t(MR_C_std_shared_ptr_const_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_const_int32_t *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<const int32_t>), std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<const int32_t>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<const int32_t>));
}


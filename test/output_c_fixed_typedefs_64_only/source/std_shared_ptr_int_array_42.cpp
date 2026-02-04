#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_int_array_42.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(std::shared_ptr<int[42]>());
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_int_array_42 *)(new std::shared_ptr<int[42]>[num_elems]{});
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array_42 *other)
{
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(std::shared_ptr<int[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int[42]>))
    ));
}

void MR_C_std_shared_ptr_int_array_42_AssignFromAnother(MR_C_std_shared_ptr_int_array_42 *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array_42 *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[42]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int[42]>))
    );
}

void MR_C_std_shared_ptr_int_array_42_Destroy(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    delete ((const std::shared_ptr<int[42]> *)_this);
}

void MR_C_std_shared_ptr_int_array_42_DestroyArray(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    delete[] ((const std::shared_ptr<int[42]> *)_this);
}

const MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_OffsetPtr(const MR_C_std_shared_ptr_int_array_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int_array_42 *)(((const std::shared_ptr<int[42]> *)ptr) + i);
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_OffsetMutablePtr(MR_C_std_shared_ptr_int_array_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int_array_42 *)(((std::shared_ptr<int[42]> *)ptr) + i);
}

int *MR_C_std_shared_ptr_int_array_42_get(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int[42]> *)(_this)).get();
}

int MR_C_std_shared_ptr_int_array_42_use_count(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int[42]> *)(_this)).use_count());
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_Construct(int *ptr)
{
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(std::shared_ptr<int[42]>(std::unique_ptr<int[]>(ptr).release()));
}

void MR_C_std_shared_ptr_int_array_42_Assign(MR_C_std_shared_ptr_int_array_42 *_this, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[42]> *)(_this)) = std::shared_ptr<int[42]>(std::unique_ptr<int[]>(ptr).release());
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_ConstructNonOwning(int *ptr)
{
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(std::shared_ptr<int[42]>(std::shared_ptr<void>{}, ptr));
}

void MR_C_std_shared_ptr_int_array_42_AssignNonOwning(MR_C_std_shared_ptr_int_array_42 *_this, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[42]> *)(_this)) = std::shared_ptr<int[42]>(std::shared_ptr<void>{}, ptr);
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_ConstructAliasing(MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(std::shared_ptr<int[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    ));
}

void MR_C_std_shared_ptr_int_array_42_AssignAliasing(MR_C_std_shared_ptr_int_array_42 *_this, MR_C_PassBy ownership_pass_by, MR_C_std_shared_ptr_const_void *ownership, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[42]> *)(_this)) = std::shared_ptr<int[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(ownership, std::shared_ptr<const void>) MRBINDC_CLASSARG_COPY(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_MOVE(ownership, (std::shared_ptr<const void>), std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_DefaultArgument, std::shared_ptr<const void>) MRBINDC_CLASSARG_NO_DEF_ARG(ownership, MR_C_PassBy_NoObject, std::shared_ptr<const void>) MRBINDC_CLASSARG_END(ownership, std::shared_ptr<const void>)),
        ptr
    );
}

MR_C_std_shared_ptr_void *MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42(MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int_array_42 *_other)
{
    return (MR_C_std_shared_ptr_void *)new std::shared_ptr<void>(std::shared_ptr<void>(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<int[42]>))
    ));
}

void MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array_42(MR_C_std_shared_ptr_void *_this, MR_C_PassBy _other_pass_by, MR_C_std_shared_ptr_int_array_42 *_other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<void> *)(_this)) = (MRBINDC_CLASSARG_DEF_CTOR(_other, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(_other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(_other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(_other, std::shared_ptr<int[42]>));
}


#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_int_array.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_int_array *)new std::shared_ptr<int[]>(std::shared_ptr<int[]>());
}

MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_int_array *)(new std::shared_ptr<int[]>[num_elems]{});
}

MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array *other)
{
    return (MR_C_std_shared_ptr_int_array *)new std::shared_ptr<int[]>(std::shared_ptr<int[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int[]>))
    ));
}

void MR_C_std_shared_ptr_int_array_AssignFromAnother(MR_C_std_shared_ptr_int_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int_array *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int[]>))
    );
}

void MR_C_std_shared_ptr_int_array_Destroy(const MR_C_std_shared_ptr_int_array *_this)
{
    delete ((const std::shared_ptr<int[]> *)_this);
}

void MR_C_std_shared_ptr_int_array_DestroyArray(const MR_C_std_shared_ptr_int_array *_this)
{
    delete[] ((const std::shared_ptr<int[]> *)_this);
}

const MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_OffsetPtr(const MR_C_std_shared_ptr_int_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int_array *)(((const std::shared_ptr<int[]> *)ptr) + i);
}

MR_C_std_shared_ptr_int_array *MR_C_std_shared_ptr_int_array_OffsetMutablePtr(MR_C_std_shared_ptr_int_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int_array *)(((std::shared_ptr<int[]> *)ptr) + i);
}

int *MR_C_std_shared_ptr_int_array_Get(const MR_C_std_shared_ptr_int_array *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int[]> *)(_this)).get();
}

int *MR_C_std_shared_ptr_int_array_At(const MR_C_std_shared_ptr_int_array *_this, ptrdiff_t i)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int[]> *)(_this))[i]);
}

int MR_C_std_shared_ptr_int_array_UseCount(const MR_C_std_shared_ptr_int_array *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<int[]> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_int_array_Construct(int *ptr)
{
    std::shared_ptr<int[]>(
        std::unique_ptr<int[]>(ptr)
    );
}

void MR_C_std_shared_ptr_int_array_Assign(MR_C_std_shared_ptr_int_array *_this, int *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<int[]> *)(_this)) = std::shared_ptr<int[]>(
        std::unique_ptr<int[]>(ptr)
    );
}


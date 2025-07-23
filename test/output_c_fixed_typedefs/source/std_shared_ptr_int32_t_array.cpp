#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_int32_t_array.h"

#include <__mrbind_c_details.h>

#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_int32_t_array *)new std::shared_ptr<int32_t[]>(std::shared_ptr<int32_t[]>());
}

MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_int32_t_array *)(new std::shared_ptr<int32_t[]>[num_elems]{});
}

MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int32_t_array *other)
{
    return (MR_C_std_shared_ptr_int32_t_array *)new std::shared_ptr<int32_t[]>(std::shared_ptr<int32_t[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int32_t[]>))
    ));
}

void MR_C_std_shared_ptr_int32_t_array_AssignFromAnother(MR_C_std_shared_ptr_int32_t_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int32_t_array *other)
{
    (_this ? *(std::shared_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int32_t[]>))
    );
}

void MR_C_std_shared_ptr_int32_t_array_Destroy(const MR_C_std_shared_ptr_int32_t_array *_this)
{
    delete ((const std::shared_ptr<int32_t[]> *)_this);
}

void MR_C_std_shared_ptr_int32_t_array_DestroyArray(const MR_C_std_shared_ptr_int32_t_array *_this)
{
    delete[] ((const std::shared_ptr<int32_t[]> *)_this);
}

const MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_OffsetPtr(const MR_C_std_shared_ptr_int32_t_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int32_t_array *)(((const std::shared_ptr<int32_t[]> *)ptr) + i);
}

MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_OffsetMutablePtr(MR_C_std_shared_ptr_int32_t_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int32_t_array *)(((std::shared_ptr<int32_t[]> *)ptr) + i);
}

int32_t *MR_C_std_shared_ptr_int32_t_array_Get(const MR_C_std_shared_ptr_int32_t_array *_this)
{
    return (_this ? *(const std::shared_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

int32_t *MR_C_std_shared_ptr_int32_t_array_At(const MR_C_std_shared_ptr_int32_t_array *_this, ptrdiff_t i)
{
    return &((_this ? *(const std::shared_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))[i]);
}

int MR_C_std_shared_ptr_int32_t_array_UseCount(const MR_C_std_shared_ptr_int32_t_array *_this)
{
    return int((_this ? *(const std::shared_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count());
}

void MR_C_std_shared_ptr_int32_t_array_Construct(int32_t *ptr)
{
    std::shared_ptr<int32_t[]>(
        std::unique_ptr<int32_t[]>(ptr)
    );
}

void MR_C_std_shared_ptr_int32_t_array_Assign(MR_C_std_shared_ptr_int32_t_array *_this, int32_t *ptr)
{
    (_this ? *(std::shared_ptr<int32_t[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<int32_t[]>(
        std::unique_ptr<int32_t[]>(ptr)
    );
}


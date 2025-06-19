#include "std_shared_ptr_int_array_42.h"

#include <__mrbind_c_details.h>

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
    (_this ? *(std::shared_ptr<int[42]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int[42]>))
    );
}

void MR_C_std_shared_ptr_int_array_42_Destroy(MR_C_std_shared_ptr_int_array_42 *_this)
{
    delete ((std::shared_ptr<int[42]> *)_this);
}

void MR_C_std_shared_ptr_int_array_42_DestroyArray(MR_C_std_shared_ptr_int_array_42 *_this)
{
    delete[] ((std::shared_ptr<int[42]> *)_this);
}

const MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_OffsetPtr(const MR_C_std_shared_ptr_int_array_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int_array_42 *)(((const std::shared_ptr<int[42]> *)ptr) + i);
}

MR_C_std_shared_ptr_int_array_42 *MR_C_std_shared_ptr_int_array_42_OffsetMutablePtr(MR_C_std_shared_ptr_int_array_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int_array_42 *)(((std::shared_ptr<int[42]> *)ptr) + i);
}

int *MR_C_std_shared_ptr_int_array_42_Get(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    return (_this ? *(const std::shared_ptr<int[42]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

long MR_C_std_shared_ptr_int_array_42_UseCount(const MR_C_std_shared_ptr_int_array_42 *_this)
{
    return (_this ? *(const std::shared_ptr<int[42]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count();
}

void MR_C_std_shared_ptr_int_array_42_Construct(int *ptr)
{
    std::shared_ptr<int[42]>(std::unique_ptr<int[]>(ptr).release());
}

void MR_C_std_shared_ptr_int_array_42_Assign(MR_C_std_shared_ptr_int_array_42 *_this, int *ptr)
{
    (_this ? *(std::shared_ptr<int[42]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<int[42]>(std::unique_ptr<int[]>(ptr).release());
}


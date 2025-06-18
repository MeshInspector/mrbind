#include "std_shared_ptr_int.h"

#include <__mrbind_c_details.h>

#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>());
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_int *)(new std::shared_ptr<int>[num_elems]{});
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(std::shared_ptr<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    ));
}

void MR_C_std_shared_ptr_int_AssignFromAnother(MR_C_std_shared_ptr_int *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int *other)
{
    (_this ? *(std::shared_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<int>))
    );
}

void MR_C_std_shared_ptr_int_Destroy(MR_C_std_shared_ptr_int *_this)
{
    delete ((std::shared_ptr<int> *)_this);
}

void MR_C_std_shared_ptr_int_DestroyArray(MR_C_std_shared_ptr_int *_this)
{
    delete[] ((std::shared_ptr<int> *)_this);
}

const MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetPtr(const MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_int *)(((const std::shared_ptr<int> *)ptr) + i);
}

MR_C_std_shared_ptr_int *MR_C_std_shared_ptr_int_OffsetMutablePtr(MR_C_std_shared_ptr_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_int *)(((std::shared_ptr<int> *)ptr) + i);
}

int *MR_C_std_shared_ptr_int_Get(const MR_C_std_shared_ptr_int *_this)
{
    return (_this ? *(const std::shared_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

long MR_C_std_shared_ptr_int_UseCount(const MR_C_std_shared_ptr_int *_this)
{
    return (_this ? *(const std::shared_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count();
}

void MR_C_std_shared_ptr_int_Construct(int *ptr)
{
    std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    );
}

void MR_C_std_shared_ptr_int_Assign(MR_C_std_shared_ptr_int *_this, int *ptr)
{
    (_this ? *(std::shared_ptr<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<int>(
        std::unique_ptr<int>(ptr)
    );
}


#include "std_shared_ptr_const_int.h"

#include <__mrbind_c_details.h>

#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_int *MR_C_std_shared_ptr_const_int_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_int *)new std::shared_ptr<const int>(std::shared_ptr<const int>());
}

MR_C_std_shared_ptr_const_int *MR_C_std_shared_ptr_const_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_int *)(new std::shared_ptr<const int>[num_elems]{});
}

MR_C_std_shared_ptr_const_int *MR_C_std_shared_ptr_const_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int *other)
{
    return (MR_C_std_shared_ptr_const_int *)new std::shared_ptr<const int>(std::shared_ptr<const int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int>), std::shared_ptr<const int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int>), std::shared_ptr<const int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int>))
    ));
}

void MR_C_std_shared_ptr_const_int_AssignFromAnother(MR_C_std_shared_ptr_const_int *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_int *other)
{
    (_this ? *(std::shared_ptr<const int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const int>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const int>), std::shared_ptr<const int>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const int>), std::shared_ptr<const int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const int>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const int>))
    );
}

void MR_C_std_shared_ptr_const_int_Destroy(const MR_C_std_shared_ptr_const_int *_this)
{
    delete ((const std::shared_ptr<const int> *)_this);
}

void MR_C_std_shared_ptr_const_int_DestroyArray(const MR_C_std_shared_ptr_const_int *_this)
{
    delete[] ((const std::shared_ptr<const int> *)_this);
}

const MR_C_std_shared_ptr_const_int *MR_C_std_shared_ptr_const_int_OffsetPtr(const MR_C_std_shared_ptr_const_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_int *)(((const std::shared_ptr<const int> *)ptr) + i);
}

MR_C_std_shared_ptr_const_int *MR_C_std_shared_ptr_const_int_OffsetMutablePtr(MR_C_std_shared_ptr_const_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_int *)(((std::shared_ptr<const int> *)ptr) + i);
}

const int *MR_C_std_shared_ptr_const_int_Get(const MR_C_std_shared_ptr_const_int *_this)
{
    return (_this ? *(const std::shared_ptr<const int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get();
}

int MR_C_std_shared_ptr_const_int_UseCount(const MR_C_std_shared_ptr_const_int *_this)
{
    return int((_this ? *(const std::shared_ptr<const int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count());
}

void MR_C_std_shared_ptr_const_int_Construct(const int *ptr)
{
    std::shared_ptr<const int>(
        std::unique_ptr<const int>(ptr)
    );
}

void MR_C_std_shared_ptr_const_int_Assign(MR_C_std_shared_ptr_const_int *_this, const int *ptr)
{
    (_this ? *(std::shared_ptr<const int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<const int>(
        std::unique_ptr<const int>(ptr)
    );
}


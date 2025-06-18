#include "std_shared_ptr_MR_StdSharedPtr_A_array.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>());
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(new std::shared_ptr<MR::StdSharedPtr::A[]>[num_elems]{});
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *other)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(std::shared_ptr<MR::StdSharedPtr::A[]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A[]>))
    ));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignFromAnother(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *other)
{
    (_this ? *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    delete ((std::shared_ptr<MR::StdSharedPtr::A[]> *)_this);
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DestroyArray(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    delete[] ((std::shared_ptr<MR::StdSharedPtr::A[]> *)_this);
}

const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_OffsetPtr(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(((const std::shared_ptr<MR::StdSharedPtr::A[]> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_OffsetMutablePtr(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)(((std::shared_ptr<MR::StdSharedPtr::A[]> *)ptr) + i);
}

MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Get(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return (MR_StdSharedPtr_A *)((_this ? *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get());
}

MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_At(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, ptrdiff_t i)
{
    return (MR_StdSharedPtr_A *)&((_this ? *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))[i]);
}

long MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_UseCount(const MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this)
{
    return (_this ? *(const std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count();
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(MR_StdSharedPtr_A *ptr)
{
    std::shared_ptr<MR::StdSharedPtr::A[]>(
        std::unique_ptr<MR::StdSharedPtr::A[]>((MR::StdSharedPtr::A *)ptr)
    );
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Assign(MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_this, MR_StdSharedPtr_A *ptr)
{
    (_this ? *(std::shared_ptr<MR::StdSharedPtr::A[]> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<MR::StdSharedPtr::A[]>(
        std::unique_ptr<MR::StdSharedPtr::A[]>((MR::StdSharedPtr::A *)ptr)
    );
}


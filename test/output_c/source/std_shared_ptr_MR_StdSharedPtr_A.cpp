#define MR_C_BUILD_LIBRARY
#include "std_shared_ptr_MR_StdSharedPtr_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)new std::shared_ptr<MR::StdSharedPtr::A>(std::shared_ptr<MR::StdSharedPtr::A>());
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)(new std::shared_ptr<MR::StdSharedPtr::A>[num_elems]{});
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *other)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)new std::shared_ptr<MR::StdSharedPtr::A>(std::shared_ptr<MR::StdSharedPtr::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A>))
    ));
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_AssignFromAnother(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *other)
{
    (_this ? *(std::shared_ptr<MR::StdSharedPtr::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(other, std::shared_ptr<MR::StdSharedPtr::A>))
    );
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this)
{
    delete ((const std::shared_ptr<MR::StdSharedPtr::A> *)_this);
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_DestroyArray(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this)
{
    delete[] ((const std::shared_ptr<MR::StdSharedPtr::A> *)_this);
}

const MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetPtr(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_MR_StdSharedPtr_A *)(((const std::shared_ptr<MR::StdSharedPtr::A> *)ptr) + i);
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_OffsetMutablePtr(MR_C_std_shared_ptr_MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)(((std::shared_ptr<MR::StdSharedPtr::A> *)ptr) + i);
}

MR_StdSharedPtr_A *MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this)
{
    return (MR_StdSharedPtr_A *)((_this ? *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).get());
}

int MR_C_std_shared_ptr_MR_StdSharedPtr_A_UseCount(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this)
{
    return int((_this ? *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).use_count());
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(MR_StdSharedPtr_A *ptr)
{
    std::shared_ptr<MR::StdSharedPtr::A>(
        std::unique_ptr<MR::StdSharedPtr::A>((MR::StdSharedPtr::A *)ptr)
    );
}

void MR_C_std_shared_ptr_MR_StdSharedPtr_A_Assign(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_this, MR_StdSharedPtr_A *ptr)
{
    (_this ? *(std::shared_ptr<MR::StdSharedPtr::A> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::shared_ptr<MR::StdSharedPtr::A>(
        std::unique_ptr<MR::StdSharedPtr::A>((MR::StdSharedPtr::A *)ptr)
    );
}


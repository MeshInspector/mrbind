#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_shared_ptr_const_MR_StdSharedPtr_A_array_42.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct(void)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(new std::shared_ptr<const MR::StdSharedPtr::A[42]>[num_elems]{});
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *other)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>))
    ));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromAnother(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(other, (std::shared_ptr<const MR::StdSharedPtr::A[42]>), std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::shared_ptr<const MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(other, std::shared_ptr<const MR::StdSharedPtr::A[42]>))
    );
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Destroy(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    delete ((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)_this);
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DestroyArray(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    delete[] ((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)_this);
}

const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_OffsetPtr(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(((const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)ptr) + i);
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_OffsetMutablePtr(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *ptr, ptrdiff_t i)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)(((std::shared_ptr<const MR::StdSharedPtr::A[42]> *)ptr) + i);
}

const MR_StdSharedPtr_A *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Get(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    return (const MR_StdSharedPtr_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).get());
}

int MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_UseCount(const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)).use_count());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(const MR_StdSharedPtr_A *ptr)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr).release()));
}

void MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Assign(MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *_this, const MR_StdSharedPtr_A *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const MR::StdSharedPtr::A[42]> *)(_this)) = std::shared_ptr<const MR::StdSharedPtr::A[42]>(std::unique_ptr<const MR::StdSharedPtr::A[]>((const MR::StdSharedPtr::A *)ptr).release());
}


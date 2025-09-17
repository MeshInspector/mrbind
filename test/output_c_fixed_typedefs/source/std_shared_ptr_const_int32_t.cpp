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

const int32_t *MR_C_std_shared_ptr_const_int32_t_Get(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int32_t> *)(_this)).get();
}

int MR_C_std_shared_ptr_const_int32_t_UseCount(const MR_C_std_shared_ptr_const_int32_t *_this)
{
    return int(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::shared_ptr<const int32_t> *)(_this)).use_count());
}

void MR_C_std_shared_ptr_const_int32_t_Construct(const int32_t *ptr)
{
    std::shared_ptr<const int32_t>(
        std::unique_ptr<const int32_t>(ptr)
    );
}

void MR_C_std_shared_ptr_const_int32_t_Assign(MR_C_std_shared_ptr_const_int32_t *_this, const int32_t *ptr)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::shared_ptr<const int32_t> *)(_this)) = std::shared_ptr<const int32_t>(
        std::unique_ptr<const int32_t>(ptr)
    );
}


#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_pair_const_MR_StdContainers_NonAssignable_float.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)new std::pair<const MR::StdContainers::NonAssignable, float>(std::pair<const MR::StdContainers::NonAssignable, float>());
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(new std::pair<const MR::StdContainers::NonAssignable, float>[num_elems]{});
}

void MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    delete ((const std::pair<const MR::StdContainers::NonAssignable, float> *)_this);
}

void MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DestroyArray(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    delete[] ((const std::pair<const MR::StdContainers::NonAssignable, float> *)_this);
}

const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_OffsetPtr(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(((const std::pair<const MR::StdContainers::NonAssignable, float> *)ptr) + i);
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_OffsetMutablePtr(MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(((std::pair<const MR::StdContainers::NonAssignable, float> *)ptr) + i);
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(MR_C_PassBy first_pass_by, MR_StdContainers_NonAssignable *first, float second)
{
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)new std::pair<const MR::StdContainers::NonAssignable, float>(std::pair<const MR::StdContainers::NonAssignable, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(first, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(first, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(first, MR::StdContainers::NonAssignable)),
        second
    ));
}

const MR_StdContainers_NonAssignable *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).first);
}

const float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).second);
}

float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut(MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).second);
}


#define MR_C_BUILD_LIBRARY
#include "std_pair_const_MR_StdContainers_NonAssignable_float.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)new std::pair<const MR::StdContainers::NonAssignable, float>(std::pair<const MR::StdContainers::NonAssignable, float>());
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(new std::pair<const MR::StdContainers::NonAssignable, float>[num_elems]{});
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<const MR::StdContainers::NonAssignable, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DestroyArray(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<const MR::StdContainers::NonAssignable, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_OffsetPtr(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(((const std::pair<const MR::StdContainers::NonAssignable, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_OffsetMutablePtr(MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)(((std::pair<const MR::StdContainers::NonAssignable, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(MR_C_PassBy first_pass_by, MR_StdContainers_NonAssignable *first, float second)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(first, MR::StdContainers::NonAssignable);
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)new std::pair<const MR::StdContainers::NonAssignable, float>(std::pair<const MR::StdContainers::NonAssignable, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(first, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(first, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(first, MR::StdContainers::NonAssignable)),
        second
    ));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).first);
    ) // MRBINDC_TRY
}

const float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second(const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).second);
    ) // MRBINDC_TRY
}

float *MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut(MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<const MR::StdContainers::NonAssignable, float> *)(_this)).second);
    ) // MRBINDC_TRY
}


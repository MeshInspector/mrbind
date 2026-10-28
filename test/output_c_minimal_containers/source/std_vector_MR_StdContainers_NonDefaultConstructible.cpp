#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_StdContainers_NonDefaultConstructible.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(new std::vector<MR::StdContainers::NonDefaultConstructible>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((const std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).push_back(
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}


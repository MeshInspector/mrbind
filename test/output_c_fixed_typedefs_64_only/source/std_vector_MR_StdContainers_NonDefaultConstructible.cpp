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
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(new std::vector<MR::StdContainers::NonDefaultConstructible>[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((const std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).size();
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).clear();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).reserve(
        new_capacity
    );
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).push_back(
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position), ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem)));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position));
}


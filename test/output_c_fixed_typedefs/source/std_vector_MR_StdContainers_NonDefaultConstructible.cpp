#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
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
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).operator=(
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
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).size();
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_size, const MR_StdContainers_NonDefaultConstructible *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::StdContainers::NonDefaultConstructible *)(value))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).capacity();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).shrink_to_fit();
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).push_back(
        ((new_elem ? void() : throw std::runtime_error("Parameter `new_elem` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position), ((new_elem ? void() : throw std::runtime_error("Parameter `new_elem` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem)));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position)),
        ((new_elem ? void() : throw std::runtime_error("Parameter `new_elem` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position)),
        ((new_elem ? void() : throw std::runtime_error("Parameter `new_elem` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position))
    );
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cend());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).end());
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin();
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter))
    ));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator());
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator[num_elems]{});
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other))
    ));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other))
    );
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)b));
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this));
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)b));
}


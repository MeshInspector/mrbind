#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable *)new std::vector<MR::StdContainers::NonAssignable>(std::vector<MR::StdContainers::NonAssignable>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable *)(new std::vector<MR::StdContainers::NonAssignable>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonAssignable *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonAssignable>);
    return (MR_C_std_vector_MR_StdContainers_NonAssignable *)new std::vector<MR::StdContainers::NonAssignable>(std::vector<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonAssignable>), std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonAssignable>), std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonAssignable>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonAssignable *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonAssignable>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonAssignable>), std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonAssignable>), std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonAssignable>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonAssignable> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonAssignable> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonAssignable *)(((const std::vector<MR::StdContainers::NonAssignable> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable *)(((std::vector<MR::StdContainers::NonAssignable> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_StdContainers_NonAssignable_size(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonAssignable_empty(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_resize(MR_C_std_vector_MR_StdContainers_NonAssignable *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_clear(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_StdContainers_NonAssignable_capacity(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(MR_C_std_vector_MR_StdContainers_NonAssignable *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_at(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(MR_C_std_vector_MR_StdContainers_NonAssignable *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_front(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_back(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(MR_C_std_vector_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::StdContainers::NonAssignable);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_begin(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)new std::vector<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)new std::vector<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonAssignable_is_begin_mut(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_end(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)new std::vector<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonAssignable_is_end(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut(MR_C_std_vector_MR_StdContainers_NonAssignable *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)new std::vector<MR::StdContainers::NonAssignable>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonAssignable_is_end_mut(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonAssignable_to_index(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonAssignable_to_index_mut(const MR_C_std_vector_MR_StdContainers_NonAssignable *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)new std::vector<MR::StdContainers::NonAssignable>::const_iterator(std::vector<MR::StdContainers::NonAssignable>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)(new std::vector<MR::StdContainers::NonAssignable>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)new std::vector<MR::StdContainers::NonAssignable>::const_iterator(std::vector<MR::StdContainers::NonAssignable>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)(((const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)(((std::vector<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_from_mutable(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *)new std::vector<MR::StdContainers::NonAssignable>::const_iterator(std::vector<MR::StdContainers::NonAssignable>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)new std::vector<MR::StdContainers::NonAssignable>::iterator(std::vector<MR::StdContainers::NonAssignable>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)(new std::vector<MR::StdContainers::NonAssignable>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)new std::vector<MR::StdContainers::NonAssignable>::iterator(std::vector<MR::StdContainers::NonAssignable>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonAssignable>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonAssignable>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)(((const std::vector<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *)(((std::vector<MR::StdContainers::NonAssignable>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_incr(MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_decr(MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator(const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonAssignable_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::const_iterator(*(std::vector<MR::StdContainers::NonAssignable>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonAssignable *MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonAssignable *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::StdContainers::NonAssignable>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_incr(MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_decr(MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonAssignable_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::StdContainers::NonAssignable>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *a, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonAssignable_iterator(const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *a, const MR_C_std_vector_MR_StdContainers_NonAssignable_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::StdContainers::NonAssignable>::iterator(*(std::vector<MR::StdContainers::NonAssignable>::iterator *)b));
    ) // MRBINDC_TRY
}


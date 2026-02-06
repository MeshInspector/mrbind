#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A *)(new std::vector<MR::A>[num_elems]{});
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>))
    );
}

void MR_C_std_vector_MR_A_Destroy(const MR_C_std_vector_MR_A *_this)
{
    delete ((const std::vector<MR::A> *)_this);
}

void MR_C_std_vector_MR_A_DestroyArray(const MR_C_std_vector_MR_A *_this)
{
    delete[] ((const std::vector<MR::A> *)_this);
}

const MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetPtr(const MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A *)(((const std::vector<MR::A> *)ptr) + i);
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_OffsetMutablePtr(MR_C_std_vector_MR_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A *)(((std::vector<MR::A> *)ptr) + i);
}

size_t MR_C_std_vector_MR_A_size(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).size();
}

bool MR_C_std_vector_MR_A_empty(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty();
}

void MR_C_std_vector_MR_A_resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_A_resize_with_default_value(MR_C_std_vector_MR_A *_this, size_t new_size, const MR_A *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::A *)(value))
    );
}

void MR_C_std_vector_MR_A_clear(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_A_capacity(const MR_C_std_vector_MR_A *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).capacity();
}

void MR_C_std_vector_MR_A_reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_A_shrink_to_fit(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).shrink_to_fit();
}

const MR_A *MR_C_std_vector_MR_A_at(const MR_C_std_vector_MR_A *_this, size_t i)
{
    return (const MR_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).at(
        i
    ));
}

MR_A *MR_C_std_vector_MR_A_at_mut(MR_C_std_vector_MR_A *_this, size_t i)
{
    return (MR_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).at(
        i
    ));
}

const MR_A *MR_C_std_vector_MR_A_front(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).front());
}

MR_A *MR_C_std_vector_MR_A_front_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).front());
}

const MR_A *MR_C_std_vector_MR_A_back(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).back());
}

MR_A *MR_C_std_vector_MR_A_back_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).back());
}

void MR_C_std_vector_MR_A_push_back(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).push_back(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_pop_back(MR_C_std_vector_MR_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_A_insert(MR_C_std_vector_MR_A *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A)));
}

void MR_C_std_vector_MR_A_erase(MR_C_std_vector_MR_A *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_A_insert_at_mutable_iter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_erase_at_mutable_iter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)position))
    );
}

void MR_C_std_vector_MR_A_insert_at_iter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position)),
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(new_elem, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A))
    );
}

void MR_C_std_vector_MR_A_erase_at_iter(MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)position))
    );
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_begin(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin());
}

bool MR_C_std_vector_MR_A_is_begin(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(iter));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_begin_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).begin());
}

bool MR_C_std_vector_MR_A_is_begin_mut(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::iterator *)(iter));
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_end(const MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cend());
}

bool MR_C_std_vector_MR_A_is_end(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(iter));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_end_mut(MR_C_std_vector_MR_A *_this)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A> *)(_this)).end());
}

bool MR_C_std_vector_MR_A_is_end_mut(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::A>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_MR_A_to_index(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_A_to_index_mut(const MR_C_std_vector_MR_A *_this, const MR_C_std_vector_MR_A_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A> *)(_this)).begin();
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator());
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A_const_iterator *)(new std::vector<MR::A>::const_iterator[num_elems]{});
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_A_const_iterator *other)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)other))
    ));
}

void MR_C_std_vector_MR_A_const_iterator_AssignFromAnother(MR_C_std_vector_MR_A_const_iterator *_this, const MR_C_std_vector_MR_A_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)other))
    );
}

void MR_C_std_vector_MR_A_const_iterator_Destroy(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    delete ((const std::vector<MR::A>::const_iterator *)_this);
}

void MR_C_std_vector_MR_A_const_iterator_DestroyArray(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    delete[] ((const std::vector<MR::A>::const_iterator *)_this);
}

const MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_OffsetPtr(const MR_C_std_vector_MR_A_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A_const_iterator *)(((const std::vector<MR::A>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_A_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A_const_iterator *)(((std::vector<MR::A>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_const_iterator *MR_C_std_vector_MR_A_const_iterator_from_mutable(const MR_C_std_vector_MR_A_iterator *iter)
{
    return (MR_C_std_vector_MR_A_const_iterator *)new std::vector<MR::A>::const_iterator(std::vector<MR::A>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)iter))
    ));
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator());
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_A_iterator *)(new std::vector<MR::A>::iterator[num_elems]{});
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_ConstructFromAnother(const MR_C_std_vector_MR_A_iterator *other)
{
    return (MR_C_std_vector_MR_A_iterator *)new std::vector<MR::A>::iterator(std::vector<MR::A>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)other))
    ));
}

void MR_C_std_vector_MR_A_iterator_AssignFromAnother(MR_C_std_vector_MR_A_iterator *_this, const MR_C_std_vector_MR_A_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)other))
    );
}

void MR_C_std_vector_MR_A_iterator_Destroy(const MR_C_std_vector_MR_A_iterator *_this)
{
    delete ((const std::vector<MR::A>::iterator *)_this);
}

void MR_C_std_vector_MR_A_iterator_DestroyArray(const MR_C_std_vector_MR_A_iterator *_this)
{
    delete[] ((const std::vector<MR::A>::iterator *)_this);
}

const MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_OffsetPtr(const MR_C_std_vector_MR_A_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_A_iterator *)(((const std::vector<MR::A>::iterator *)ptr) + i);
}

MR_C_std_vector_MR_A_iterator *MR_C_std_vector_MR_A_iterator_OffsetMutablePtr(MR_C_std_vector_MR_A_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_A_iterator *)(((std::vector<MR::A>::iterator *)ptr) + i);
}

const MR_A *MR_C_std_vector_MR_A_const_iterator_deref(const MR_C_std_vector_MR_A_const_iterator *_this)
{
    return (const MR_A *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A>::const_iterator *)(_this)));
}

void MR_C_std_vector_MR_A_const_iterator_incr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_A_const_iterator_decr(MR_C_std_vector_MR_A_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_A_const_iterator_add_assign(MR_C_std_vector_MR_A_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_A_const_iterator(const MR_C_std_vector_MR_A_const_iterator *a, const MR_C_std_vector_MR_A_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_A_const_iterator(const MR_C_std_vector_MR_A_const_iterator *a, const MR_C_std_vector_MR_A_const_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::const_iterator(*(std::vector<MR::A>::const_iterator *)b));
}

MR_A *MR_C_std_vector_MR_A_iterator_deref(const MR_C_std_vector_MR_A_iterator *_this)
{
    return (MR_A *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::A>::iterator *)(_this)));
}

void MR_C_std_vector_MR_A_iterator_incr(MR_C_std_vector_MR_A_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this));
}

void MR_C_std_vector_MR_A_iterator_decr(MR_C_std_vector_MR_A_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this));
}

void MR_C_std_vector_MR_A_iterator_add_assign(MR_C_std_vector_MR_A_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::A>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_A_iterator(const MR_C_std_vector_MR_A_iterator *a, const MR_C_std_vector_MR_A_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_A_iterator(const MR_C_std_vector_MR_A_iterator *a, const MR_C_std_vector_MR_A_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::A>::iterator(*(std::vector<MR::A>::iterator *)b));
}


#define MR_C_BUILD_LIBRARY
#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int *)(new std::vector<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<int>);
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<int>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_Destroy(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_DestroyArray(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_int *MR_C_std_vector_int_OffsetPtr(const MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_int *)(((const std::vector<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_int *MR_C_std_vector_int_OffsetMutablePtr(MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int *)(((std::vector<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromRange(const int *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(ptr, ptr + size));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_AssignFromRange(MR_C_std_vector_int *_this, const int *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)) = std::vector<int>(ptr, ptr + size);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_int_size(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_int_empty(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_resize(MR_C_std_vector_int *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_resize_with_default_value(MR_C_std_vector_int *_this, size_t new_size, int value)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).resize(
        new_size,
        value
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_clear(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_int_capacity(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_reserve(MR_C_std_vector_int *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_shrink_to_fit(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const int *MR_C_std_vector_int_at(const MR_C_std_vector_int *_this, size_t i)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

int *MR_C_std_vector_int_at_mut(MR_C_std_vector_int *_this, size_t i)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_vector_int_front(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).front();
    ) // MRBINDC_TRY
}

int *MR_C_std_vector_int_front_mut(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).front();
    ) // MRBINDC_TRY
}

const int *MR_C_std_vector_int_back(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).back();
    ) // MRBINDC_TRY
}

int *MR_C_std_vector_int_back_mut(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).back();
    ) // MRBINDC_TRY
}

const int *MR_C_std_vector_int_data(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).data();
    ) // MRBINDC_TRY
}

int *MR_C_std_vector_int_data_mut(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).data();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_push_back(MR_C_std_vector_int *_this, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).push_back(
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_pop_back(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_insert(MR_C_std_vector_int *_this, size_t position, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position), new_elem);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_erase(MR_C_std_vector_int *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_insert_at_mutable_iter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)position)),
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_erase_at_mutable_iter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_insert_at_iter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position)),
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_erase_at_iter(MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_begin(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_int_is_begin(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_begin_mut(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_int_is_begin_mut(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).begin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<int>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_end(const MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_int_is_end(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_end_mut(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_int_is_end_mut(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).end() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<int>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_int_to_index(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_int_to_index_mut(const MR_C_std_vector_int *_this, const MR_C_std_vector_int_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)(new std::vector<int>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_ConstructFromAnother(const MR_C_std_vector_int_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_AssignFromAnother(MR_C_std_vector_int_const_iterator *_this, const MR_C_std_vector_int_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_Destroy(const MR_C_std_vector_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_DestroyArray(const MR_C_std_vector_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_OffsetPtr(const MR_C_std_vector_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_int_const_iterator *)(((const std::vector<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_OffsetMutablePtr(MR_C_std_vector_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)(((std::vector<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_const_iterator *MR_C_std_vector_int_const_iterator_from_mutable(const MR_C_std_vector_int_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_const_iterator *)new std::vector<int>::const_iterator(std::vector<int>::iterator(
        ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)(new std::vector<int>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_ConstructFromAnother(const MR_C_std_vector_int_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)new std::vector<int>::iterator(std::vector<int>::iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_AssignFromAnother(MR_C_std_vector_int_iterator *_this, const MR_C_std_vector_int_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_Destroy(const MR_C_std_vector_int_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<int>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_DestroyArray(const MR_C_std_vector_int_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<int>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_OffsetPtr(const MR_C_std_vector_int_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_int_iterator *)(((const std::vector<int>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_int_iterator *MR_C_std_vector_int_iterator_OffsetMutablePtr(MR_C_std_vector_int_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_int_iterator *)(((std::vector<int>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const int *MR_C_std_vector_int_const_iterator_deref(const MR_C_std_vector_int_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_incr(MR_C_std_vector_int_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_decr(MR_C_std_vector_int_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_const_iterator_add_assign(MR_C_std_vector_int_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_int_const_iterator(const MR_C_std_vector_int_const_iterator *a, const MR_C_std_vector_int_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_int_const_iterator(const MR_C_std_vector_int_const_iterator *a, const MR_C_std_vector_int_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<int>::const_iterator(*(std::vector<int>::const_iterator *)b));
    ) // MRBINDC_TRY
}

int *MR_C_std_vector_int_iterator_deref(const MR_C_std_vector_int_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_incr(MR_C_std_vector_int_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_decr(MR_C_std_vector_int_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_int_iterator_add_assign(MR_C_std_vector_int_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_int_iterator(const MR_C_std_vector_int_iterator *a, const MR_C_std_vector_int_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_int_iterator(const MR_C_std_vector_int_iterator *a, const MR_C_std_vector_int_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<int>::iterator(*(std::vector<int>::iterator *)b));
    ) // MRBINDC_TRY
}


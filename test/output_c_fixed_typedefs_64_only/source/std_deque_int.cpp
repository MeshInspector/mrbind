#define MR_C_BUILD_LIBRARY
#include "std_deque_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <deque>
#include <memory>
#include <stdexcept>


MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstruct(void)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>());
}

MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int *)(new std::deque<int>[num_elems]{});
}

MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::deque<int>);
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    ));
}

void MR_C_std_deque_int_AssignFromAnother(MR_C_std_deque_int *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::deque<int>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    );
}

void MR_C_std_deque_int_Destroy(const MR_C_std_deque_int *_this)
{
    delete ((const std::deque<int> *)_this);
}

void MR_C_std_deque_int_DestroyArray(const MR_C_std_deque_int *_this)
{
    delete[] ((const std::deque<int> *)_this);
}

const MR_C_std_deque_int *MR_C_std_deque_int_OffsetPtr(const MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int *)(((const std::deque<int> *)ptr) + i);
}

MR_C_std_deque_int *MR_C_std_deque_int_OffsetMutablePtr(MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int *)(((std::deque<int> *)ptr) + i);
}

size_t MR_C_std_deque_int_size(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).size();
}

bool MR_C_std_deque_int_empty(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).empty();
}

void MR_C_std_deque_int_resize(MR_C_std_deque_int *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_deque_int_clear(MR_C_std_deque_int *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).clear();
}

const int *MR_C_std_deque_int_at(const MR_C_std_deque_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).at(
        i
    ));
}

int *MR_C_std_deque_int_at_mut(MR_C_std_deque_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).at(
        i
    ));
}

const int *MR_C_std_deque_int_front(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).front();
}

int *MR_C_std_deque_int_front_mut(MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).front();
}

const int *MR_C_std_deque_int_back(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::deque<int> *)(_this)).back();
}

int *MR_C_std_deque_int_back_mut(MR_C_std_deque_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).back();
}

void MR_C_std_deque_int_push_back(MR_C_std_deque_int *_this, int new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_deque_int_pop_back(MR_C_std_deque_int *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).pop_back();
}

void MR_C_std_deque_int_push_front(MR_C_std_deque_int *_this, int new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).push_front(
        new_elem
    );
}

void MR_C_std_deque_int_pop_front(MR_C_std_deque_int *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).pop_front();
}

void MR_C_std_deque_int_insert(MR_C_std_deque_int *_this, size_t position, int new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_deque_int_erase(MR_C_std_deque_int *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::deque<int> *)(_this)).begin() + ptrdiff_t(position));
}


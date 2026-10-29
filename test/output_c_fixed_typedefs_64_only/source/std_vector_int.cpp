#define MR_C_BUILD_LIBRARY
#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
}

MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int *)(new std::vector<int>[num_elems]{});
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<int>);
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    ));
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<int>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(other, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>))
    );
}

void MR_C_std_vector_int_Destroy(const MR_C_std_vector_int *_this)
{
    delete ((const std::vector<int> *)_this);
}

void MR_C_std_vector_int_DestroyArray(const MR_C_std_vector_int *_this)
{
    delete[] ((const std::vector<int> *)_this);
}

const MR_C_std_vector_int *MR_C_std_vector_int_OffsetPtr(const MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int *)(((const std::vector<int> *)ptr) + i);
}

MR_C_std_vector_int *MR_C_std_vector_int_OffsetMutablePtr(MR_C_std_vector_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int *)(((std::vector<int> *)ptr) + i);
}

size_t MR_C_std_vector_int_size(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).size();
}

bool MR_C_std_vector_int_empty(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty();
}

void MR_C_std_vector_int_resize(MR_C_std_vector_int *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_int_clear(MR_C_std_vector_int *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).clear();
}

void MR_C_std_vector_int_reserve(MR_C_std_vector_int *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).reserve(
        new_capacity
    );
}

const int *MR_C_std_vector_int_at(const MR_C_std_vector_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).at(
        i
    ));
}

int *MR_C_std_vector_int_at_mut(MR_C_std_vector_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).at(
        i
    ));
}

const int *MR_C_std_vector_int_front(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).front();
}

int *MR_C_std_vector_int_front_mut(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).front();
}

const int *MR_C_std_vector_int_back(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).back();
}

int *MR_C_std_vector_int_back_mut(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).back();
}

const int *MR_C_std_vector_int_data(const MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<int> *)(_this)).data();
}

int *MR_C_std_vector_int_data_mut(MR_C_std_vector_int *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).data();
}

void MR_C_std_vector_int_push_back(MR_C_std_vector_int *_this, int new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_int_pop_back(MR_C_std_vector_int *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).pop_back();
}

void MR_C_std_vector_int_insert(MR_C_std_vector_int *_this, size_t position, int new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int_erase(MR_C_std_vector_int *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).begin() + ptrdiff_t(position));
}


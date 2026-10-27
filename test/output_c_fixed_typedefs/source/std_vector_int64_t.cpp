#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_vector_int64_t.h"

#include <__mrbind_c_details.h>

#include <common.h>
#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_DefaultConstruct(void)
{
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>());
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int64_t *)(new std::vector<MR_C_int64_t>[num_elems]{});
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int64_t *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR_C_int64_t>);
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_END(other, std::vector<MR_C_int64_t>))
    ));
}

void MR_C_std_vector_int64_t_AssignFromAnother(MR_C_std_vector_int64_t *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int64_t *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR_C_int64_t>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_END(other, std::vector<MR_C_int64_t>))
    );
}

void MR_C_std_vector_int64_t_Destroy(const MR_C_std_vector_int64_t *_this)
{
    delete ((const std::vector<MR_C_int64_t> *)_this);
}

void MR_C_std_vector_int64_t_DestroyArray(const MR_C_std_vector_int64_t *_this)
{
    delete[] ((const std::vector<MR_C_int64_t> *)_this);
}

const MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_OffsetPtr(const MR_C_std_vector_int64_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int64_t *)(((const std::vector<MR_C_int64_t> *)ptr) + i);
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_OffsetMutablePtr(MR_C_std_vector_int64_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int64_t *)(((std::vector<MR_C_int64_t> *)ptr) + i);
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_ConstructFromRange(const MR_C_int64_t *ptr, size_t size)
{
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>(ptr, ptr + size));
}

void MR_C_std_vector_int64_t_AssignFromRange(MR_C_std_vector_int64_t *_this, const MR_C_int64_t *ptr, size_t size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)) = std::vector<MR_C_int64_t>(ptr, ptr + size);
}

size_t MR_C_std_vector_int64_t_size(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).size();
}

bool MR_C_std_vector_int64_t_empty(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).empty();
}

void MR_C_std_vector_int64_t_resize(MR_C_std_vector_int64_t *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_int64_t_resize_with_default_value(MR_C_std_vector_int64_t *_this, size_t new_size, MR_C_int64_t value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_int64_t_clear(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).clear();
}

size_t MR_C_std_vector_int64_t_capacity(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).capacity();
}

void MR_C_std_vector_int64_t_reserve(MR_C_std_vector_int64_t *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int64_t_shrink_to_fit(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).shrink_to_fit();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_at(const MR_C_std_vector_int64_t *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).at(
        i
    ));
}

MR_C_int64_t *MR_C_std_vector_int64_t_at_mut(MR_C_std_vector_int64_t *_this, size_t i)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).at(
        i
    ));
}

const MR_C_int64_t *MR_C_std_vector_int64_t_front(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).front();
}

MR_C_int64_t *MR_C_std_vector_int64_t_front_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).front();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_back(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).back();
}

MR_C_int64_t *MR_C_std_vector_int64_t_back_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).back();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_data(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).data();
}

MR_C_int64_t *MR_C_std_vector_int64_t_data_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).data();
}

void MR_C_std_vector_int64_t_push_back(MR_C_std_vector_int64_t *_this, MR_C_int64_t new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_int64_t_pop_back(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).pop_back();
}

void MR_C_std_vector_int64_t_insert(MR_C_std_vector_int64_t *_this, size_t position, MR_C_int64_t new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int64_t_erase(MR_C_std_vector_int64_t *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_C_int64_t *MR_C_std_vector_int64_t_begin(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).data();
}

MR_C_int64_t *MR_C_std_vector_int64_t_begin_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).data();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_end(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR_C_int64_t> *)(_this)).size();
}

MR_C_int64_t *MR_C_std_vector_int64_t_end_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR_C_int64_t> *)(_this)).size();
}


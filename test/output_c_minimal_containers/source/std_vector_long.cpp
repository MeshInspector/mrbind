#define MR_C_BUILD_LIBRARY
#include "std_vector_long.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_long *)(new std::vector<long>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<long>);
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_AssignFromAnother(MR_C_std_vector_long *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<long>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_Destroy(const MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<long> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_DestroyArray(const MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<long> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_long *MR_C_std_vector_long_OffsetPtr(const MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_long *)(((const std::vector<long> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_long *MR_C_std_vector_long_OffsetMutablePtr(MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_long *)(((std::vector<long> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_long_size(const MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<long> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_long_empty(const MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<long> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_resize(MR_C_std_vector_long *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_clear(MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_reserve(MR_C_std_vector_long *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const long *MR_C_std_vector_long_at(const MR_C_std_vector_long *_this, size_t i)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<long> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

long *MR_C_std_vector_long_at_mut(MR_C_std_vector_long *_this, size_t i)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const long *MR_C_std_vector_long_data(const MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<long> *)(_this)).data();
    ) // MRBINDC_TRY
}

long *MR_C_std_vector_long_data_mut(MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).data();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_push_back(MR_C_std_vector_long *_this, long new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).push_back(
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_long_pop_back(MR_C_std_vector_long *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<long> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}


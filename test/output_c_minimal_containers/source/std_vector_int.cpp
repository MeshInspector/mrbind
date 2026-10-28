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

void MR_C_std_vector_int_clear(MR_C_std_vector_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<int> *)(_this)).clear();
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


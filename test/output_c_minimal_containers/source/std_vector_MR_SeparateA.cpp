#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_SeparateA.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)(new std::vector<MR::SeparateA>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_AssignFromAnother(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_Destroy(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateA> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_DestroyArray(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateA> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetPtr(const MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateA *)(((const std::vector<MR::SeparateA> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)(((std::vector<MR::SeparateA> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateA_size(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_empty(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_clear(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_reserve(MR_C_std_vector_MR_SeparateA *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_at(const MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_at_mut(MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_push_back(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_pop_back(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}


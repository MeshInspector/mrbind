#define MR_C_BUILD_LIBRARY
#include "std_pair_MR_SeparateA_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::pair<MR::SeparateA, MR::SeparateB>);
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        (MRBINDC_CLASSARG_COPY(other, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::pair<MR::SeparateA, MR::SeparateB>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::pair<MR::SeparateA, MR::SeparateB>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(other, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::pair<MR::SeparateA, MR::SeparateB>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_DestroyArray(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetPtr(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((const std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetMutablePtr(MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR_C_PassBy first_pass_by, MR_SeparateA *first, MR_C_PassBy second_pass_by, MR_SeparateB *second)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(first, MR::SeparateA);
    MRBINDC_CLASSARG_GUARD(second, MR::SeparateB);
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        (MRBINDC_CLASSARG_COPY(first, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(first, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(first, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(first, MR::SeparateA)),
        (MRBINDC_CLASSARG_COPY(second, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(second, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(second, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(second, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(second, MR::SeparateB))
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
    ) // MRBINDC_TRY
}


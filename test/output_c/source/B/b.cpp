#define MR_C_BUILD_LIBRARY
#include "B/b.h"

#include <__mrbind_c_details.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateB *MR_SeparateB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)new MR::SeparateB(MR::SeparateB());
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(new MR::SeparateB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_SeparateB_OffsetPtr(const MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((const MR::SeparateB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((MR::SeparateB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_ConstructFromAnother(const MR_SeparateB *_other)
{
    return (MR_SeparateB *)new MR::SeparateB(MR::SeparateB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateB(*(MR::SeparateB *)_other))
    ));
}

void MR_SeparateB_Destroy(const MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SeparateB *)_this);
    ) // MRBINDC_TRY
}

void MR_SeparateB_DestroyArray(const MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SeparateB *)_this);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, const MR_SeparateB *_other)
{
    return (MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateB(*(MR::SeparateB *)_other))
    ));
}

MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(::MR::GetSeparateVecB());
    ) // MRBINDC_TRY
}


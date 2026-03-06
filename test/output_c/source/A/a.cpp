#define MR_C_BUILD_LIBRARY
#include "A/a.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateA *MR_SeparateA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)new MR::SeparateA(MR::SeparateA());
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(new MR::SeparateA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_SeparateA_OffsetPtr(const MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(((const MR::SeparateA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_OffsetMutablePtr(MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(((MR::SeparateA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_ConstructFromAnother(const MR_SeparateA *_other)
{
    return (MR_SeparateA *)new MR::SeparateA(MR::SeparateA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateA(*(MR::SeparateA *)_other))
    ));
}

void MR_SeparateA_Destroy(const MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SeparateA *)_this);
    ) // MRBINDC_TRY
}

void MR_SeparateA_DestroyArray(const MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SeparateA *)_this);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_SeparateA_AssignFromAnother(MR_SeparateA *_this, const MR_SeparateA *_other)
{
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateA(*(MR::SeparateA *)_other))
    ));
}

MR_C_std_vector_MR_SeparateA *MR_GetSeparateVecA(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(::MR::GetSeparateVecA());
    ) // MRBINDC_TRY
}


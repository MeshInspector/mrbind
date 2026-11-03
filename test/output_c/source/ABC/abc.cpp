#define MR_C_BUILD_LIBRARY
#include "ABC/abc.h"

#include <__mrbind_c_details.h>
#include <input/ABC/abc.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateABC *MR_SeparateABC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)new MR::SeparateABC(MR::SeparateABC());
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_SeparateABC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(new MR::SeparateABC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_SeparateABC_OffsetPtr(const MR_SeparateABC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)(((const MR::SeparateABC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_SeparateABC_OffsetMutablePtr(MR_SeparateABC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(((MR::SeparateABC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_SeparateABC_ConstructFromAnother(const MR_SeparateABC *_other)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)new MR::SeparateABC(MR::SeparateABC(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_SeparateABC_Destroy(const MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SeparateABC *)_this);
    ) // MRBINDC_TRY
}

void MR_SeparateABC_DestroyArray(const MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SeparateABC *)_this);
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_SeparateABC_AssignFromAnother(MR_SeparateABC *_this, const MR_SeparateABC *_other)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SeparateABC *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateABC *MR_GetSeparateVecABC(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(::MR::GetSeparateVecABC());
    ) // MRBINDC_TRY
}


#define MR_ABC_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "ABC/abc.h"

#include <__mrbind_c_details.h>
#include <input/ABC/abc.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateABC *MR_SeparateABC_DefaultConstruct(void)
{
    return (MR_SeparateABC *)new MR::SeparateABC(MR::SeparateABC());
}

MR_SeparateABC *MR_SeparateABC_DefaultConstructArray(size_t num_elems)
{
    return (MR_SeparateABC *)(new MR::SeparateABC[num_elems]{});
}

const MR_SeparateABC *MR_SeparateABC_OffsetPtr(const MR_SeparateABC *ptr, ptrdiff_t i)
{
    return (const MR_SeparateABC *)(((const MR::SeparateABC *)ptr) + i);
}

MR_SeparateABC *MR_SeparateABC_OffsetMutablePtr(MR_SeparateABC *ptr, ptrdiff_t i)
{
    return (MR_SeparateABC *)(((MR::SeparateABC *)ptr) + i);
}

MR_SeparateABC *MR_SeparateABC_ConstructFromAnother(const MR_SeparateABC *_other)
{
    return (MR_SeparateABC *)new MR::SeparateABC(MR::SeparateABC(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)_other))
    ));
}

void MR_SeparateABC_Destroy(const MR_SeparateABC *_this)
{
    delete ((const MR::SeparateABC *)_this);
}

void MR_SeparateABC_DestroyArray(const MR_SeparateABC *_this)
{
    delete[] ((const MR::SeparateABC *)_this);
}

MR_SeparateABC *MR_SeparateABC_AssignFromAnother(MR_SeparateABC *_this, const MR_SeparateABC *_other)
{
    return (MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SeparateABC *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)_other))
    ));
}

MR_C_std_vector_MR_SeparateABC *MR_GetSeparateVecABC(void)
{
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(::MR::GetSeparateVecABC());
}


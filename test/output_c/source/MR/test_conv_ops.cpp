#define MR_C_BUILD_LIBRARY
#include "MR/test_conv_ops.h"

#include <input/MR/test_conv_ops.h>

#include <cstddef>
#include <stdexcept>


MR_ConvOps_A *MR_ConvOps_A_DefaultConstruct(void)
{
    return (MR_ConvOps_A *)new MR::ConvOps::A(MR::ConvOps::A());
}

MR_ConvOps_A *MR_ConvOps_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_ConvOps_A *)(new MR::ConvOps::A[num_elems]{});
}

const MR_ConvOps_A *MR_ConvOps_A_OffsetPtr(const MR_ConvOps_A *ptr, ptrdiff_t i)
{
    return (const MR_ConvOps_A *)(((const MR::ConvOps::A *)ptr) + i);
}

MR_ConvOps_A *MR_ConvOps_A_OffsetMutablePtr(MR_ConvOps_A *ptr, ptrdiff_t i)
{
    return (MR_ConvOps_A *)(((MR::ConvOps::A *)ptr) + i);
}

MR_ConvOps_A *MR_ConvOps_A_ConstructFromAnother(const MR_ConvOps_A *_other)
{
    return (MR_ConvOps_A *)new MR::ConvOps::A(MR::ConvOps::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::ConvOps::A(*(MR::ConvOps::A *)_other))
    ));
}

void MR_ConvOps_A_Destroy(const MR_ConvOps_A *_this)
{
    delete ((const MR::ConvOps::A *)_this);
}

void MR_ConvOps_A_DestroyArray(const MR_ConvOps_A *_this)
{
    delete[] ((const MR::ConvOps::A *)_this);
}

bool MR_ConvOps_A_ConvertTo_bool(const MR_ConvOps_A *_this)
{
    return (bool)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::ConvOps::A *)(_this)));
}

MR_ConvOps_A *MR_ConvOps_A_AssignFromAnother(MR_ConvOps_A *_this, const MR_ConvOps_A *_other)
{
    return (MR_ConvOps_A *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::ConvOps::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::ConvOps::A(*(MR::ConvOps::A *)_other))
    ));
}


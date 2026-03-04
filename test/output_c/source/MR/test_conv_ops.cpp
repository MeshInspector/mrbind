#define MR_C_BUILD_LIBRARY
#include "MR/test_conv_ops.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_conv_ops.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_ConvOps_A *MR_ConvOps_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_ConvOps_A *)new MR::ConvOps::A(MR::ConvOps::A());
    ) // MRBINDC_TRY
}

MR_ConvOps_A *MR_ConvOps_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_ConvOps_A *)(new MR::ConvOps::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_ConvOps_A *MR_ConvOps_A_OffsetPtr(const MR_ConvOps_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_ConvOps_A *)(((const MR::ConvOps::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_ConvOps_A *MR_ConvOps_A_OffsetMutablePtr(MR_ConvOps_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_ConvOps_A *)(((MR::ConvOps::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_ConvOps_A *MR_ConvOps_A_ConstructFromAnother(const MR_ConvOps_A *_other)
{
    MRBINDC_TRY(
    return (MR_ConvOps_A *)new MR::ConvOps::A(MR::ConvOps::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::ConvOps::A(*(MR::ConvOps::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_ConvOps_A_Destroy(const MR_ConvOps_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::ConvOps::A *)_this);
    ) // MRBINDC_TRY
}

void MR_ConvOps_A_DestroyArray(const MR_ConvOps_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::ConvOps::A *)_this);
    ) // MRBINDC_TRY
}

bool MR_ConvOps_A_ConvertTo_bool(const MR_ConvOps_A *_this)
{
    MRBINDC_TRY(
    return (bool)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::ConvOps::A *)(_this)));
    ) // MRBINDC_TRY
}

MR_ConvOps_A *MR_ConvOps_A_AssignFromAnother(MR_ConvOps_A *_this, const MR_ConvOps_A *_other)
{
    MRBINDC_TRY(
    return (MR_ConvOps_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::ConvOps::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::ConvOps::A(*(MR::ConvOps::A *)_other))
    ));
    ) // MRBINDC_TRY
}


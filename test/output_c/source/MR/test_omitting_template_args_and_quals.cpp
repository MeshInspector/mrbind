#define MR_C_BUILD_LIBRARY
#include "MR/test_omitting_template_args_and_quals.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_omitting_template_args_and_quals.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_int *)new MR::OmittingTargsAndQuals::A<int>(MR::OmittingTargsAndQuals::A<int>());
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_int *)(new MR::OmittingTargsAndQuals::A<int>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetPtr(const MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OmittingTargsAndQuals_A_int *)(((const MR::OmittingTargsAndQuals::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_int *)(((MR::OmittingTargsAndQuals::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_int *_other)
{
    return (MR_OmittingTargsAndQuals_A_int *)new MR::OmittingTargsAndQuals::A<int>(MR::OmittingTargsAndQuals::A<int>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_other))
    ));
}

void MR_OmittingTargsAndQuals_A_int_Destroy(const MR_OmittingTargsAndQuals_A_int *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OmittingTargsAndQuals::A<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_A_int_DestroyArray(const MR_OmittingTargsAndQuals_A_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OmittingTargsAndQuals::A<int> *)_this);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_AssignFromAnother(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_int *_other)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_pos_MR_OmittingTargsAndQuals_A_int(MR_OmittingTargsAndQuals_A_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator+();
    ) // MRBINDC_TRY
}

void MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_float *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MRBINDC_TRY(
    a(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_b(const MR_OmittingTargsAndQuals_A_int *_1, const MR_OmittingTargsAndQuals_A_float *_2)
{
    MRBINDC_TRY(
    b<float>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_2))
    );
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_float *)new MR::OmittingTargsAndQuals::A<float>(MR::OmittingTargsAndQuals::A<float>());
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_float *)(new MR::OmittingTargsAndQuals::A<float>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetPtr(const MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OmittingTargsAndQuals_A_float *)(((const MR::OmittingTargsAndQuals::A<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_float *)(((MR::OmittingTargsAndQuals::A<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_float *_other)
{
    return (MR_OmittingTargsAndQuals_A_float *)new MR::OmittingTargsAndQuals::A<float>(MR::OmittingTargsAndQuals::A<float>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_other))
    ));
}

void MR_OmittingTargsAndQuals_A_float_Destroy(const MR_OmittingTargsAndQuals_A_float *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OmittingTargsAndQuals::A<float> *)_this);
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_A_float_DestroyArray(const MR_OmittingTargsAndQuals_A_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OmittingTargsAndQuals::A<float> *)_this);
    ) // MRBINDC_TRY
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_AssignFromAnother(MR_OmittingTargsAndQuals_A_float *_this, const MR_OmittingTargsAndQuals_A_float *_other)
{
    MRBINDC_TRY(
    return (MR_OmittingTargsAndQuals_A_float *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<float> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_pos_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_float *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<float> *)(_this)).operator+();
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(const MR_OmittingTargsAndQuals_A_float *_1)
{
    MRBINDC_TRY(
    a(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_deref_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MRBINDC_TRY(
    ::MR::OmittingTargsAndQuals::operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_compl_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MRBINDC_TRY(
    ::MR::OmittingTargsAndQuals::operator~(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_c(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MRBINDC_TRY(
    ::MR::OmittingTargsAndQuals::c(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_d(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MRBINDC_TRY(
    ::MR::OmittingTargsAndQuals::d<int>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_OmittingTargsAndQuals_inst(void)
{
    MRBINDC_TRY(
    ::MR::OmittingTargsAndQuals::inst();
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "MR/test_omitting_template_args_and_quals.h"

#include <input/MR/test_omitting_template_args_and_quals.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstruct(void)
{
    return (MR_OmittingTargsAndQuals_A_int *)new MR::OmittingTargsAndQuals::A<int>(MR::OmittingTargsAndQuals::A<int>());
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_OmittingTargsAndQuals_A_int *)(new MR::OmittingTargsAndQuals::A<int>[num_elems]{});
}

const MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetPtr(const MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i)
{
    return (const MR_OmittingTargsAndQuals_A_int *)(((const MR::OmittingTargsAndQuals::A<int> *)ptr) + i);
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_int *ptr, ptrdiff_t i)
{
    return (MR_OmittingTargsAndQuals_A_int *)(((MR::OmittingTargsAndQuals::A<int> *)ptr) + i);
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_int *_other)
{
    return (MR_OmittingTargsAndQuals_A_int *)new MR::OmittingTargsAndQuals::A<int>(MR::OmittingTargsAndQuals::A<int>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_other))
    ));
}

void MR_OmittingTargsAndQuals_A_int_Destroy(const MR_OmittingTargsAndQuals_A_int *_this)
{
    delete ((const MR::OmittingTargsAndQuals::A<int> *)_this);
}

void MR_OmittingTargsAndQuals_A_int_DestroyArray(const MR_OmittingTargsAndQuals_A_int *_this)
{
    delete[] ((const MR::OmittingTargsAndQuals::A<int> *)_this);
}

MR_OmittingTargsAndQuals_A_int *MR_OmittingTargsAndQuals_A_int_AssignFromAnother(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_int *_other)
{
    return (MR_OmittingTargsAndQuals_A_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_other))
    ));
}

void MR_C_pos_MR_OmittingTargsAndQuals_A_int(MR_OmittingTargsAndQuals_A_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator+();
}

void MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_int *_this, const MR_OmittingTargsAndQuals_A_float *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<int> *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_1))
    );
}

void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    a(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
}

void MR_OmittingTargsAndQuals_b(const MR_OmittingTargsAndQuals_A_int *_1, const MR_OmittingTargsAndQuals_A_float *_2)
{
    b<float>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_2))
    );
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstruct(void)
{
    return (MR_OmittingTargsAndQuals_A_float *)new MR::OmittingTargsAndQuals::A<float>(MR::OmittingTargsAndQuals::A<float>());
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_OmittingTargsAndQuals_A_float *)(new MR::OmittingTargsAndQuals::A<float>[num_elems]{});
}

const MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetPtr(const MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i)
{
    return (const MR_OmittingTargsAndQuals_A_float *)(((const MR::OmittingTargsAndQuals::A<float> *)ptr) + i);
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_OffsetMutablePtr(MR_OmittingTargsAndQuals_A_float *ptr, ptrdiff_t i)
{
    return (MR_OmittingTargsAndQuals_A_float *)(((MR::OmittingTargsAndQuals::A<float> *)ptr) + i);
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(const MR_OmittingTargsAndQuals_A_float *_other)
{
    return (MR_OmittingTargsAndQuals_A_float *)new MR::OmittingTargsAndQuals::A<float>(MR::OmittingTargsAndQuals::A<float>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_other))
    ));
}

void MR_OmittingTargsAndQuals_A_float_Destroy(const MR_OmittingTargsAndQuals_A_float *_this)
{
    delete ((const MR::OmittingTargsAndQuals::A<float> *)_this);
}

void MR_OmittingTargsAndQuals_A_float_DestroyArray(const MR_OmittingTargsAndQuals_A_float *_this)
{
    delete[] ((const MR::OmittingTargsAndQuals::A<float> *)_this);
}

MR_OmittingTargsAndQuals_A_float *MR_OmittingTargsAndQuals_A_float_AssignFromAnother(MR_OmittingTargsAndQuals_A_float *_this, const MR_OmittingTargsAndQuals_A_float *_other)
{
    return (MR_OmittingTargsAndQuals_A_float *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<float> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_other))
    ));
}

void MR_C_pos_MR_OmittingTargsAndQuals_A_float(MR_OmittingTargsAndQuals_A_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::OmittingTargsAndQuals::A<float> *)(_this)).operator+();
}

void MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(const MR_OmittingTargsAndQuals_A_float *_1)
{
    a(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<float>(*(MR::OmittingTargsAndQuals::A<float> *)_1))
    );
}

void MR_C_deref_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MR::OmittingTargsAndQuals::operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
}

void MR_C_compl_MR_OmittingTargsAndQuals_A_int(const MR_OmittingTargsAndQuals_A_int *_1)
{
    MR::OmittingTargsAndQuals::operator~(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
}

void MR_OmittingTargsAndQuals_c(const MR_OmittingTargsAndQuals_A_int *_1)
{
    ::MR::OmittingTargsAndQuals::c(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
}

void MR_OmittingTargsAndQuals_d(const MR_OmittingTargsAndQuals_A_int *_1)
{
    ::MR::OmittingTargsAndQuals::d<int>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::OmittingTargsAndQuals::A<int>(*(MR::OmittingTargsAndQuals::A<int> *)_1))
    );
}

void MR_OmittingTargsAndQuals_inst(void)
{
    ::MR::OmittingTargsAndQuals::inst();
}


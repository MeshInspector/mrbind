#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_typedefs_in_templates.h"

#include <input/MR/test_typedefs_in_templates.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>


MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_A_int32_t *)new MR::TypedefsInTemplates::A<int32_t>(MR::TypedefsInTemplates::A<int32_t>());
}

MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_A_int32_t *)(new MR::TypedefsInTemplates::A<int32_t>[num_elems]{});
}

const MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_OffsetPtr(const MR_TypedefsInTemplates_A_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_A_int32_t *)(((const MR::TypedefsInTemplates::A<int32_t> *)ptr) + i);
}

MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_OffsetMutablePtr(MR_TypedefsInTemplates_A_int32_t *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_A_int32_t *)(((MR::TypedefsInTemplates::A<int32_t> *)ptr) + i);
}

MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(const MR_TypedefsInTemplates_A_int32_t *_other)
{
    return (MR_TypedefsInTemplates_A_int32_t *)new MR::TypedefsInTemplates::A<int32_t>(MR::TypedefsInTemplates::A<int32_t>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::A<int32_t>(*(MR::TypedefsInTemplates::A<int32_t> *)_other))
    ));
}

void MR_TypedefsInTemplates_A_int32_t_Destroy(const MR_TypedefsInTemplates_A_int32_t *_this)
{
    delete ((const MR::TypedefsInTemplates::A<int32_t> *)_this);
}

void MR_TypedefsInTemplates_A_int32_t_DestroyArray(const MR_TypedefsInTemplates_A_int32_t *_this)
{
    delete[] ((const MR::TypedefsInTemplates::A<int32_t> *)_this);
}

MR_TypedefsInTemplates_A_int32_t *MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(MR_TypedefsInTemplates_A_int32_t *_this, const MR_TypedefsInTemplates_A_int32_t *_other)
{
    return (MR_TypedefsInTemplates_A_int32_t *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::A<int32_t> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::A<int32_t>(*(MR::TypedefsInTemplates::A<int32_t> *)_other))
    ));
}

int32_t MR_TypedefsInTemplates_A_int32_t_foo(MR_TypedefsInTemplates_A_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::A<int32_t> *)(_this)).foo();
}

MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_B_int32_t *)new MR::TypedefsInTemplates::B<int32_t>(MR::TypedefsInTemplates::B<int32_t>());
}

MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_B_int32_t *)(new MR::TypedefsInTemplates::B<int32_t>[num_elems]{});
}

const MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_OffsetPtr(const MR_TypedefsInTemplates_B_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_B_int32_t *)(((const MR::TypedefsInTemplates::B<int32_t> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_OffsetMutablePtr(MR_TypedefsInTemplates_B_int32_t *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_B_int32_t *)(((MR::TypedefsInTemplates::B<int32_t> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(const MR_TypedefsInTemplates_B_int32_t *_other)
{
    return (MR_TypedefsInTemplates_B_int32_t *)new MR::TypedefsInTemplates::B<int32_t>(MR::TypedefsInTemplates::B<int32_t>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::B<int32_t>(*(MR::TypedefsInTemplates::B<int32_t> *)_other))
    ));
}

void MR_TypedefsInTemplates_B_int32_t_Destroy(const MR_TypedefsInTemplates_B_int32_t *_this)
{
    delete ((const MR::TypedefsInTemplates::B<int32_t> *)_this);
}

void MR_TypedefsInTemplates_B_int32_t_DestroyArray(const MR_TypedefsInTemplates_B_int32_t *_this)
{
    delete[] ((const MR::TypedefsInTemplates::B<int32_t> *)_this);
}

MR_TypedefsInTemplates_B_int32_t *MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(MR_TypedefsInTemplates_B_int32_t *_this, const MR_TypedefsInTemplates_B_int32_t *_other)
{
    return (MR_TypedefsInTemplates_B_int32_t *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::B<int32_t> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::B<int32_t>(*(MR::TypedefsInTemplates::B<int32_t> *)_other))
    ));
}

MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_B_int32_t_BB_float *)new MR::TypedefsInTemplates::B<int32_t>::BB<float>(MR::TypedefsInTemplates::B<int32_t>::BB<float>());
}

MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_B_int32_t_BB_float *)(new MR::TypedefsInTemplates::B<int32_t>::BB<float>[num_elems]{});
}

const MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetPtr(const MR_TypedefsInTemplates_B_int32_t_BB_float *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_B_int32_t_BB_float *)(((const MR::TypedefsInTemplates::B<int32_t>::BB<float> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_OffsetMutablePtr(MR_TypedefsInTemplates_B_int32_t_BB_float *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_B_int32_t_BB_float *)(((MR::TypedefsInTemplates::B<int32_t>::BB<float> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int32_t_BB_float *_other)
{
    return (MR_TypedefsInTemplates_B_int32_t_BB_float *)new MR::TypedefsInTemplates::B<int32_t>::BB<float>(MR::TypedefsInTemplates::B<int32_t>::BB<float>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::B<int32_t>::BB<float>(*(MR::TypedefsInTemplates::B<int32_t>::BB<float> *)_other))
    ));
}

void MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(const MR_TypedefsInTemplates_B_int32_t_BB_float *_this)
{
    delete ((const MR::TypedefsInTemplates::B<int32_t>::BB<float> *)_this);
}

void MR_TypedefsInTemplates_B_int32_t_BB_float_DestroyArray(const MR_TypedefsInTemplates_B_int32_t_BB_float *_this)
{
    delete[] ((const MR::TypedefsInTemplates::B<int32_t>::BB<float> *)_this);
}

MR_TypedefsInTemplates_B_int32_t_BB_float *MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int32_t_BB_float *_this, const MR_TypedefsInTemplates_B_int32_t_BB_float *_other)
{
    return (MR_TypedefsInTemplates_B_int32_t_BB_float *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::B<int32_t>::BB<float> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TypedefsInTemplates::B<int32_t>::BB<float>(*(MR::TypedefsInTemplates::B<int32_t>::BB<float> *)_other))
    ));
}

int32_t MR_TypedefsInTemplates_B_int32_t_BB_float_foo(MR_TypedefsInTemplates_B_int32_t_BB_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::B<int32_t>::BB<float> *)(_this)).foo();
}

int32_t MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(MR_TypedefsInTemplates_B_int32_t_BB_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TypedefsInTemplates::B<int32_t>::BB<float> *)(_this)).foo2();
}

void MR_TypedefsInTemplates_bar(int32_t _1)
{
    ::MR::TypedefsInTemplates::bar(
        _1
    );
}


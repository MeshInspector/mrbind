#define MR_C_BUILD_LIBRARY
#include "MR/test_typedefs_in_templates.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_typedefs_in_templates.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>());
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_A_int *)(new MR::TypedefsInTemplates::A<int>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetPtr(const MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_TypedefsInTemplates_A_int *)(((const MR::TypedefsInTemplates::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetMutablePtr(MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_A_int *)(((MR::TypedefsInTemplates::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_ConstructFromAnother(const MR_TypedefsInTemplates_A_int *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_A_int_Destroy(const MR_TypedefsInTemplates_A_int *_this)
{
    MRBINDC_TRY(
    delete ((const MR::TypedefsInTemplates::A<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_A_int_DestroyArray(const MR_TypedefsInTemplates_A_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::TypedefsInTemplates::A<int> *)_this);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_AssignFromAnother(MR_TypedefsInTemplates_A_int *_this, const MR_TypedefsInTemplates_A_int *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_A_int *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::A<int> *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_TypedefsInTemplates_A_int_foo(MR_TypedefsInTemplates_A_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::A<int> *)(_this)).foo();
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>());
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int *)(new MR::TypedefsInTemplates::B<int>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetPtr(const MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_TypedefsInTemplates_B_int *)(((const MR::TypedefsInTemplates::B<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetMutablePtr(MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int *)(((MR::TypedefsInTemplates::B<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_ConstructFromAnother(const MR_TypedefsInTemplates_B_int *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_B_int_Destroy(const MR_TypedefsInTemplates_B_int *_this)
{
    MRBINDC_TRY(
    delete ((const MR::TypedefsInTemplates::B<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_B_int_DestroyArray(const MR_TypedefsInTemplates_B_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::TypedefsInTemplates::B<int> *)_this);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_AssignFromAnother(MR_TypedefsInTemplates_B_int *_this, const MR_TypedefsInTemplates_B_int *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::B<int> *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>());
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int_BB_float *)(new MR::TypedefsInTemplates::B<int>::BB<float>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetPtr(const MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_TypedefsInTemplates_B_int_BB_float *)(((const MR::TypedefsInTemplates::B<int>::BB<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetMutablePtr(MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int_BB_float *)(((MR::TypedefsInTemplates::B<int>::BB<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_B_int_BB_float_Destroy(const MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    MRBINDC_TRY(
    delete ((const MR::TypedefsInTemplates::B<int>::BB<float> *)_this);
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_B_int_BB_float_DestroyArray(const MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::TypedefsInTemplates::B<int>::BB<float> *)_this);
    ) // MRBINDC_TRY
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int_BB_float *_this, const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    MRBINDC_TRY(
    return (MR_TypedefsInTemplates_B_int_BB_float *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_TypedefsInTemplates_B_int_BB_float_foo(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this)).foo();
    ) // MRBINDC_TRY
}

int MR_TypedefsInTemplates_B_int_BB_float_foo2(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this)).foo2();
    ) // MRBINDC_TRY
}

void MR_TypedefsInTemplates_bar(int _1)
{
    MRBINDC_TRY(
    ::MR::TypedefsInTemplates::bar(
        _1
    );
    ) // MRBINDC_TRY
}


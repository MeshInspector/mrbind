#include "MR/test_typedefs_in_templates.h"

#include <input/MR/test_typedefs_in_templates.h>

#include <stdexcept>


MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>());
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_A_int *)(new MR::TypedefsInTemplates::A<int>[num_elems]{});
}

const MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetPtr(const MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_A_int *)(((const MR::TypedefsInTemplates::A<int> *)ptr) + i);
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_OffsetMutablePtr(MR_TypedefsInTemplates_A_int *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_A_int *)(((MR::TypedefsInTemplates::A<int> *)ptr) + i);
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_ConstructFromAnother(const MR_TypedefsInTemplates_A_int *_other)
{
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>(
        (_other ? MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_AssignFromAnother(MR_TypedefsInTemplates_A_int *_this, const MR_TypedefsInTemplates_A_int *_other)
{
    return (MR_TypedefsInTemplates_A_int *)&((_this ? *(MR::TypedefsInTemplates::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_A_int_Destroy(const MR_TypedefsInTemplates_A_int *_this)
{
    delete ((const MR::TypedefsInTemplates::A<int> *)_this);
}

void MR_TypedefsInTemplates_A_int_DestroyArray(const MR_TypedefsInTemplates_A_int *_this)
{
    delete[] ((const MR::TypedefsInTemplates::A<int> *)_this);
}

int MR_TypedefsInTemplates_A_int_foo(MR_TypedefsInTemplates_A_int *_this)
{
    return (_this ? *(MR::TypedefsInTemplates::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>());
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_B_int *)(new MR::TypedefsInTemplates::B<int>[num_elems]{});
}

const MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetPtr(const MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_B_int *)(((const MR::TypedefsInTemplates::B<int> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_OffsetMutablePtr(MR_TypedefsInTemplates_B_int *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_B_int *)(((MR::TypedefsInTemplates::B<int> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_ConstructFromAnother(const MR_TypedefsInTemplates_B_int *_other)
{
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>(
        (_other ? MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_AssignFromAnother(MR_TypedefsInTemplates_B_int *_this, const MR_TypedefsInTemplates_B_int *_other)
{
    return (MR_TypedefsInTemplates_B_int *)&((_this ? *(MR::TypedefsInTemplates::B<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_B_int_Destroy(const MR_TypedefsInTemplates_B_int *_this)
{
    delete ((const MR::TypedefsInTemplates::B<int> *)_this);
}

void MR_TypedefsInTemplates_B_int_DestroyArray(const MR_TypedefsInTemplates_B_int *_this)
{
    delete[] ((const MR::TypedefsInTemplates::B<int> *)_this);
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct(void)
{
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>());
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_TypedefsInTemplates_B_int_BB_float *)(new MR::TypedefsInTemplates::B<int>::BB<float>[num_elems]{});
}

const MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetPtr(const MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i)
{
    return (const MR_TypedefsInTemplates_B_int_BB_float *)(((const MR::TypedefsInTemplates::B<int>::BB<float> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_OffsetMutablePtr(MR_TypedefsInTemplates_B_int_BB_float *ptr, ptrdiff_t i)
{
    return (MR_TypedefsInTemplates_B_int_BB_float *)(((MR::TypedefsInTemplates::B<int>::BB<float> *)ptr) + i);
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>(
        (_other ? MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int_BB_float *_this, const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    return (MR_TypedefsInTemplates_B_int_BB_float *)&((_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_B_int_BB_float_Destroy(const MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    delete ((const MR::TypedefsInTemplates::B<int>::BB<float> *)_this);
}

void MR_TypedefsInTemplates_B_int_BB_float_DestroyArray(const MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    delete[] ((const MR::TypedefsInTemplates::B<int>::BB<float> *)_this);
}

int MR_TypedefsInTemplates_B_int_BB_float_foo(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    return (_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

int MR_TypedefsInTemplates_B_int_BB_float_foo2(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    return (_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo2();
}

void MR_TypedefsInTemplates_bar(int _1)
{
    ::MR::TypedefsInTemplates::bar(
        _1
    );
}


#define MR_C_BUILD_LIBRARY
#include "MR/test_nested_class_template_inst.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_nested_class_template_inst.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>());
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int *)(new MR::NestedTemplateInst::A<int>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetPtr(const MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_NestedTemplateInst_A_int *)(((const MR::NestedTemplateInst::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetMutablePtr(MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int *)(((MR::NestedTemplateInst::A<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_ConstructFromAnother(const MR_NestedTemplateInst_A_int *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_NestedTemplateInst_A_int_Destroy(const MR_NestedTemplateInst_A_int *_this)
{
    MRBINDC_TRY(
    delete ((const MR::NestedTemplateInst::A<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_NestedTemplateInst_A_int_DestroyArray(const MR_NestedTemplateInst_A_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::NestedTemplateInst::A<int> *)_this);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_AssignFromAnother(MR_NestedTemplateInst_A_int *_this, const MR_NestedTemplateInst_A_int *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTemplateInst::A<int> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>());
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int_AA_float *)(new MR::NestedTemplateInst::A<int>::AA<float>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetPtr(const MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_NestedTemplateInst_A_int_AA_float *)(((const MR::NestedTemplateInst::A<int>::AA<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetMutablePtr(MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int_AA_float *)(((MR::NestedTemplateInst::A<int>::AA<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_NestedTemplateInst_A_int_AA_float_Destroy(const MR_NestedTemplateInst_A_int_AA_float *_this)
{
    MRBINDC_TRY(
    delete ((const MR::NestedTemplateInst::A<int>::AA<float> *)_this);
    ) // MRBINDC_TRY
}

void MR_NestedTemplateInst_A_int_AA_float_DestroyArray(const MR_NestedTemplateInst_A_int_AA_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::NestedTemplateInst::A<int>::AA<float> *)_this);
    ) // MRBINDC_TRY
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int_AA_float *_this, const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTemplateInst_A_int_AA_float *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTemplateInst::A<int>::AA<float> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other))
    ));
    ) // MRBINDC_TRY
}


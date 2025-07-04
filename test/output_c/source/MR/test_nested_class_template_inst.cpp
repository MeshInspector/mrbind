#include "MR/test_nested_class_template_inst.h"

#include <input/MR/test_nested_class_template_inst.h>

#include <stdexcept>


MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct(void)
{
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>());
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTemplateInst_A_int_AA_float *)(new MR::NestedTemplateInst::A<int>::AA<float>[num_elems]{});
}

const MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetPtr(const MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i)
{
    return (const MR_NestedTemplateInst_A_int_AA_float *)(((const MR::NestedTemplateInst::A<int>::AA<float> *)ptr) + i);
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_OffsetMutablePtr(MR_NestedTemplateInst_A_int_AA_float *ptr, ptrdiff_t i)
{
    return (MR_NestedTemplateInst_A_int_AA_float *)(((MR::NestedTemplateInst::A<int>::AA<float> *)ptr) + i);
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>(
        (_other ? MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int_AA_float *_this, const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    return (MR_NestedTemplateInst_A_int_AA_float *)&((_this ? *(MR::NestedTemplateInst::A<int>::AA<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_NestedTemplateInst_A_int_AA_float_Destroy(const MR_NestedTemplateInst_A_int_AA_float *_this)
{
    delete ((const MR::NestedTemplateInst::A<int>::AA<float> *)_this);
}

void MR_NestedTemplateInst_A_int_AA_float_DestroyArray(const MR_NestedTemplateInst_A_int_AA_float *_this)
{
    delete[] ((const MR::NestedTemplateInst::A<int>::AA<float> *)_this);
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstruct(void)
{
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>());
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTemplateInst_A_int *)(new MR::NestedTemplateInst::A<int>[num_elems]{});
}

const MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetPtr(const MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i)
{
    return (const MR_NestedTemplateInst_A_int *)(((const MR::NestedTemplateInst::A<int> *)ptr) + i);
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_OffsetMutablePtr(MR_NestedTemplateInst_A_int *ptr, ptrdiff_t i)
{
    return (MR_NestedTemplateInst_A_int *)(((MR::NestedTemplateInst::A<int> *)ptr) + i);
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_ConstructFromAnother(const MR_NestedTemplateInst_A_int *_other)
{
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>(
        (_other ? MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_AssignFromAnother(MR_NestedTemplateInst_A_int *_this, const MR_NestedTemplateInst_A_int *_other)
{
    return (MR_NestedTemplateInst_A_int *)&((_this ? *(MR::NestedTemplateInst::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_NestedTemplateInst_A_int_Destroy(const MR_NestedTemplateInst_A_int *_this)
{
    delete ((const MR::NestedTemplateInst::A<int> *)_this);
}

void MR_NestedTemplateInst_A_int_DestroyArray(const MR_NestedTemplateInst_A_int *_this)
{
    delete[] ((const MR::NestedTemplateInst::A<int> *)_this);
}


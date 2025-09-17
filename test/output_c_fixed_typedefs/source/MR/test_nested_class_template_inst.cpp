#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_nested_class_template_inst.h"

#include <input/MR/test_nested_class_template_inst.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>


MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_DefaultConstruct(void)
{
    return (MR_NestedTemplateInst_A_int32_t *)new MR::NestedTemplateInst::A<int32_t>(MR::NestedTemplateInst::A<int32_t>());
}

MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTemplateInst_A_int32_t *)(new MR::NestedTemplateInst::A<int32_t>[num_elems]{});
}

const MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_OffsetPtr(const MR_NestedTemplateInst_A_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_NestedTemplateInst_A_int32_t *)(((const MR::NestedTemplateInst::A<int32_t> *)ptr) + i);
}

MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_OffsetMutablePtr(MR_NestedTemplateInst_A_int32_t *ptr, ptrdiff_t i)
{
    return (MR_NestedTemplateInst_A_int32_t *)(((MR::NestedTemplateInst::A<int32_t> *)ptr) + i);
}

MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_ConstructFromAnother(const MR_NestedTemplateInst_A_int32_t *_other)
{
    return (MR_NestedTemplateInst_A_int32_t *)new MR::NestedTemplateInst::A<int32_t>(MR::NestedTemplateInst::A<int32_t>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int32_t>(*(MR::NestedTemplateInst::A<int32_t> *)_other))
    ));
}

void MR_NestedTemplateInst_A_int32_t_Destroy(const MR_NestedTemplateInst_A_int32_t *_this)
{
    delete ((const MR::NestedTemplateInst::A<int32_t> *)_this);
}

void MR_NestedTemplateInst_A_int32_t_DestroyArray(const MR_NestedTemplateInst_A_int32_t *_this)
{
    delete[] ((const MR::NestedTemplateInst::A<int32_t> *)_this);
}

MR_NestedTemplateInst_A_int32_t *MR_NestedTemplateInst_A_int32_t_AssignFromAnother(MR_NestedTemplateInst_A_int32_t *_this, const MR_NestedTemplateInst_A_int32_t *_other)
{
    return (MR_NestedTemplateInst_A_int32_t *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTemplateInst::A<int32_t> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int32_t>(*(MR::NestedTemplateInst::A<int32_t> *)_other))
    ));
}

MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstruct(void)
{
    return (MR_NestedTemplateInst_A_int32_t_AA_float *)new MR::NestedTemplateInst::A<int32_t>::AA<float>(MR::NestedTemplateInst::A<int32_t>::AA<float>());
}

MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_NestedTemplateInst_A_int32_t_AA_float *)(new MR::NestedTemplateInst::A<int32_t>::AA<float>[num_elems]{});
}

const MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_OffsetPtr(const MR_NestedTemplateInst_A_int32_t_AA_float *ptr, ptrdiff_t i)
{
    return (const MR_NestedTemplateInst_A_int32_t_AA_float *)(((const MR::NestedTemplateInst::A<int32_t>::AA<float> *)ptr) + i);
}

MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_OffsetMutablePtr(MR_NestedTemplateInst_A_int32_t_AA_float *ptr, ptrdiff_t i)
{
    return (MR_NestedTemplateInst_A_int32_t_AA_float *)(((MR::NestedTemplateInst::A<int32_t>::AA<float> *)ptr) + i);
}

MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int32_t_AA_float *_other)
{
    return (MR_NestedTemplateInst_A_int32_t_AA_float *)new MR::NestedTemplateInst::A<int32_t>::AA<float>(MR::NestedTemplateInst::A<int32_t>::AA<float>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int32_t>::AA<float>(*(MR::NestedTemplateInst::A<int32_t>::AA<float> *)_other))
    ));
}

void MR_NestedTemplateInst_A_int32_t_AA_float_Destroy(const MR_NestedTemplateInst_A_int32_t_AA_float *_this)
{
    delete ((const MR::NestedTemplateInst::A<int32_t>::AA<float> *)_this);
}

void MR_NestedTemplateInst_A_int32_t_AA_float_DestroyArray(const MR_NestedTemplateInst_A_int32_t_AA_float *_this)
{
    delete[] ((const MR::NestedTemplateInst::A<int32_t>::AA<float> *)_this);
}

MR_NestedTemplateInst_A_int32_t_AA_float *MR_NestedTemplateInst_A_int32_t_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int32_t_AA_float *_this, const MR_NestedTemplateInst_A_int32_t_AA_float *_other)
{
    return (MR_NestedTemplateInst_A_int32_t_AA_float *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::NestedTemplateInst::A<int32_t>::AA<float> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::NestedTemplateInst::A<int32_t>::AA<float>(*(MR::NestedTemplateInst::A<int32_t>::AA<float> *)_other))
    ));
}


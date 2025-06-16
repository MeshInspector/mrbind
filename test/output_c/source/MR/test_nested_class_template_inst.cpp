#include "MR/test_nested_class_template_inst.h"

#include <input/MR/test_nested_class_template_inst.h>

#include <stdexcept>


MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_Construct(void)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>());
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_ConstructFromAnother(const MR_NestedTemplateInst_A_int *_other)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int *)new MR::NestedTemplateInst::A<int>(MR::NestedTemplateInst::A<int>(
        (_other ? MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_NestedTemplateInst_A_int *MR_NestedTemplateInst_A_int_AssignFromAnother(MR_NestedTemplateInst_A_int *_this, const MR_NestedTemplateInst_A_int *_other)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int *)&((_this ? *(MR::NestedTemplateInst::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::NestedTemplateInst::A<int>(*(MR::NestedTemplateInst::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_NestedTemplateInst_A_int_Destroy(MR_NestedTemplateInst_A_int *_this)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    delete &(_this ? *(MR::NestedTemplateInst::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_Construct(void)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>());
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int_AA_float *)new MR::NestedTemplateInst::A<int>::AA<float>(MR::NestedTemplateInst::A<int>::AA<float>(
        (_other ? MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_NestedTemplateInst_A_int_AA_float *MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(MR_NestedTemplateInst_A_int_AA_float *_this, const MR_NestedTemplateInst_A_int_AA_float *_other)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    return (MR_NestedTemplateInst_A_int_AA_float *)&((_this ? *(MR::NestedTemplateInst::A<int>::AA<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::NestedTemplateInst::A<int>::AA<float>(*(MR::NestedTemplateInst::A<int>::AA<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_NestedTemplateInst_A_int_AA_float_Destroy(MR_NestedTemplateInst_A_int_AA_float *_this)
{
    using namespace MR;
    using namespace NestedTemplateInst;
    delete &(_this ? *(MR::NestedTemplateInst::A<int>::AA<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}


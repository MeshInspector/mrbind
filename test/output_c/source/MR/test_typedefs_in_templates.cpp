#include "MR/test_typedefs_in_templates.h"

#include <input/MR/test_typedefs_in_templates.h>

#include <stdexcept>


MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_Construct(void)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>());
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_ConstructFromAnother(const MR_TypedefsInTemplates_A_int *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_A_int *)new MR::TypedefsInTemplates::A<int>(MR::TypedefsInTemplates::A<int>(
        (_other ? MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_AssignFromAnother(MR_TypedefsInTemplates_A_int *_this, const MR_TypedefsInTemplates_A_int *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_A_int *)&((_this ? *(MR::TypedefsInTemplates::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::A<int>(*(MR::TypedefsInTemplates::A<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_A_int_Destroy(MR_TypedefsInTemplates_A_int *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    delete &(_this ? *(MR::TypedefsInTemplates::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

int MR_TypedefsInTemplates_A_int_foo(MR_TypedefsInTemplates_A_int *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (_this ? *(MR::TypedefsInTemplates::A<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_Construct(void)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>());
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_ConstructFromAnother(const MR_TypedefsInTemplates_B_int *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int *)new MR::TypedefsInTemplates::B<int>(MR::TypedefsInTemplates::B<int>(
        (_other ? MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_AssignFromAnother(MR_TypedefsInTemplates_B_int *_this, const MR_TypedefsInTemplates_B_int *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int *)&((_this ? *(MR::TypedefsInTemplates::B<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::B<int>(*(MR::TypedefsInTemplates::B<int> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_B_int_Destroy(MR_TypedefsInTemplates_B_int *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    delete &(_this ? *(MR::TypedefsInTemplates::B<int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_Construct(void)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>());
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int_BB_float *)new MR::TypedefsInTemplates::B<int>::BB<float>(MR::TypedefsInTemplates::B<int>::BB<float>(
        (_other ? MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int_BB_float *_this, const MR_TypedefsInTemplates_B_int_BB_float *_other)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (MR_TypedefsInTemplates_B_int_BB_float *)&((_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::TypedefsInTemplates::B<int>::BB<float>(*(MR::TypedefsInTemplates::B<int>::BB<float> *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_TypedefsInTemplates_B_int_BB_float_Destroy(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    delete &(_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

int MR_TypedefsInTemplates_B_int_BB_float_foo(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo();
}

int MR_TypedefsInTemplates_B_int_BB_float_foo2(MR_TypedefsInTemplates_B_int_BB_float *_this)
{
    using namespace MR;
    using namespace TypedefsInTemplates;
    return (_this ? *(MR::TypedefsInTemplates::B<int>::BB<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).foo2();
}


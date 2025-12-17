#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/1.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>


const MR_C_std_string *MR_A_Get_x(const MR_A *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::A *)(_this)).x);
}

void MR_A_Set_x(MR_A *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::A *)(_this)).x = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_A_GetMutable_x(MR_A *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::A *)(_this)).x);
}

MR_A *MR_A_DefaultConstruct(void)
{
    return (MR_A *)new MR::A(MR::A());
}

MR_A *MR_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_A *)(new MR::A[num_elems]{});
}

const MR_A *MR_A_OffsetPtr(const MR_A *ptr, ptrdiff_t i)
{
    return (const MR_A *)(((const MR::A *)ptr) + i);
}

MR_A *MR_A_OffsetMutablePtr(MR_A *ptr, ptrdiff_t i)
{
    return (MR_A *)(((MR::A *)ptr) + i);
}

MR_A *MR_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_A *_other)
{
    return (MR_A *)new MR::A(MR::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(_other, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(_other, MR::A))
    ));
}

void MR_A_Destroy(const MR_A *_this)
{
    delete ((const MR::A *)_this);
}

void MR_A_DestroyArray(const MR_A *_this)
{
    delete[] ((const MR::A *)_this);
}

MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other)
{
    return (MR_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::A *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::A) MRBINDC_CLASSARG_COPY(_other, (MR::A), MR::A) MRBINDC_CLASSARG_MOVE(_other, (MR::A), MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::A) MRBINDC_CLASSARG_END(_other, MR::A))
    ));
}

MR_C_std_vector_MR_A *MR_foo(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(::MR::foo());
}

void MR_bar(MR_C_PassBy _1_pass_by, MR_C_std_vector_MR_A *_1)
{
    ::MR::bar(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(_1, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<MR::A>), std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<MR::A>) MRBINDC_CLASSARG_END(_1, std::vector<MR::A>))
    );
}


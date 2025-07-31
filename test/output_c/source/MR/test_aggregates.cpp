#define MR_C_BUILD_LIBRARY
#include "MR/test_aggregates.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_aggregates.h>

#include <cstddef>
#include <stdexcept>
#include <string>


const int *MR_Aggregates_A_Get_x(const MR_Aggregates_A *_this)
{
    return &((_this ? *(const MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

void MR_Aggregates_A_Set_x(MR_Aggregates_A *_this, int value)
{
    (_this ? *(MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x = value;
}

int *MR_Aggregates_A_GetMutable_x(MR_Aggregates_A *_this)
{
    return &((_this ? *(MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

const MR_C_std_string *MR_Aggregates_A_Get_y(const MR_Aggregates_A *_this)
{
    return (const MR_C_std_string *)&((_this ? *(const MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).y);
}

void MR_Aggregates_A_Set_y(MR_Aggregates_A *_this, const char *value, const char *value_end)
{
    (_this ? *(MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).y = (value ? (value_end ? std::string(value, value_end) : std::string(value)) : throw std::runtime_error("Parameter `value` can not be null."));
}

MR_C_std_string *MR_Aggregates_A_GetMutable_y(MR_Aggregates_A *_this)
{
    return (MR_C_std_string *)&((_this ? *(MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).y);
}

MR_Aggregates_A *MR_Aggregates_A_DefaultConstruct(void)
{
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A());
}

MR_Aggregates_A *MR_Aggregates_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_Aggregates_A *)(new MR::Aggregates::A[num_elems]{});
}

MR_Aggregates_A *MR_Aggregates_A_ConstructFrom(int x, const char *y, const char *y_end)
{
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A{
        x,
        (y ? (y_end ? std::string(y, y_end) : std::string(y)) : throw std::runtime_error("Parameter `y` can not be null."))
    });
}

const MR_Aggregates_A *MR_Aggregates_A_OffsetPtr(const MR_Aggregates_A *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_A *)(((const MR::Aggregates::A *)ptr) + i);
}

MR_Aggregates_A *MR_Aggregates_A_OffsetMutablePtr(MR_Aggregates_A *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_A *)(((MR::Aggregates::A *)ptr) + i);
}

MR_Aggregates_A *MR_Aggregates_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other)
{
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Aggregates::A) MRBINDC_CLASSARG_COPY(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_MOVE(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Aggregates::A) MRBINDC_CLASSARG_END(_other, MR::Aggregates::A))
    ));
}

void MR_Aggregates_A_Destroy(const MR_Aggregates_A *_this)
{
    delete ((const MR::Aggregates::A *)_this);
}

void MR_Aggregates_A_DestroyArray(const MR_Aggregates_A *_this)
{
    delete[] ((const MR::Aggregates::A *)_this);
}

MR_Aggregates_A *MR_Aggregates_A_AssignFromAnother(MR_Aggregates_A *_this, MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other)
{
    return (MR_Aggregates_A *)&((_this ? *(MR::Aggregates::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Aggregates::A) MRBINDC_CLASSARG_COPY(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_MOVE(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Aggregates::A) MRBINDC_CLASSARG_END(_other, MR::Aggregates::A))
    ));
}

MR_Aggregates_B *MR_Aggregates_B_DefaultConstruct(void)
{
    return (MR_Aggregates_B *)new MR::Aggregates::B(MR::Aggregates::B());
}

MR_Aggregates_B *MR_Aggregates_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_Aggregates_B *)(new MR::Aggregates::B[num_elems]{});
}

const MR_Aggregates_B *MR_Aggregates_B_OffsetPtr(const MR_Aggregates_B *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_B *)(((const MR::Aggregates::B *)ptr) + i);
}

MR_Aggregates_B *MR_Aggregates_B_OffsetMutablePtr(MR_Aggregates_B *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_B *)(((MR::Aggregates::B *)ptr) + i);
}

MR_Aggregates_B *MR_Aggregates_B_ConstructFromAnother(const MR_Aggregates_B *_other)
{
    return (MR_Aggregates_B *)new MR::Aggregates::B(MR::Aggregates::B(
        (_other ? MR::Aggregates::B(*(MR::Aggregates::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Aggregates_B_Destroy(const MR_Aggregates_B *_this)
{
    delete ((const MR::Aggregates::B *)_this);
}

void MR_Aggregates_B_DestroyArray(const MR_Aggregates_B *_this)
{
    delete[] ((const MR::Aggregates::B *)_this);
}

MR_Aggregates_B *MR_Aggregates_B_AssignFromAnother(MR_Aggregates_B *_this, const MR_Aggregates_B *_other)
{
    return (MR_Aggregates_B *)&((_this ? *(MR::Aggregates::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Aggregates::B(*(MR::Aggregates::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}


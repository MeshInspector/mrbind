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

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(const MR_Aggregates_NonDefaultConstructible *_other)
{
    return (MR_Aggregates_NonDefaultConstructible *)new MR::Aggregates::NonDefaultConstructible(MR::Aggregates::NonDefaultConstructible(
        (_other ? MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetPtr(const MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_NonDefaultConstructible *)(((const MR::Aggregates::NonDefaultConstructible *)ptr) + i);
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetMutablePtr(MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_NonDefaultConstructible *)(((MR::Aggregates::NonDefaultConstructible *)ptr) + i);
}

void MR_Aggregates_NonDefaultConstructible_Destroy(const MR_Aggregates_NonDefaultConstructible *_this)
{
    delete ((const MR::Aggregates::NonDefaultConstructible *)_this);
}

void MR_Aggregates_NonDefaultConstructible_DestroyArray(const MR_Aggregates_NonDefaultConstructible *_this)
{
    delete[] ((const MR::Aggregates::NonDefaultConstructible *)_this);
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_AssignFromAnother(MR_Aggregates_NonDefaultConstructible *_this, const MR_Aggregates_NonDefaultConstructible *_other)
{
    return (MR_Aggregates_NonDefaultConstructible *)&((_this ? *(MR::Aggregates::NonDefaultConstructible *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const int *MR_Aggregates_C_Get_a(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

void MR_Aggregates_C_Set_a(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a = value;
}

int *MR_Aggregates_C_GetMutable_a(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

const int *MR_Aggregates_C_Get_b(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

void MR_Aggregates_C_Set_b(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b = value;
}

int *MR_Aggregates_C_GetMutable_b(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

const int *MR_Aggregates_C_Get_c(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

void MR_Aggregates_C_Set_c(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c = value;
}

int *MR_Aggregates_C_GetMutable_c(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

const int *MR_Aggregates_C_Get_d(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

void MR_Aggregates_C_Set_d(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d = value;
}

int *MR_Aggregates_C_GetMutable_d(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

const int *MR_Aggregates_C_Get_e(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

void MR_Aggregates_C_Set_e(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e = value;
}

int *MR_Aggregates_C_GetMutable_e(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

const int *MR_Aggregates_C_Get_f(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

void MR_Aggregates_C_Set_f(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f = value;
}

int *MR_Aggregates_C_GetMutable_f(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

const int *MR_Aggregates_C_Get_g(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

void MR_Aggregates_C_Set_g(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g = value;
}

int *MR_Aggregates_C_GetMutable_g(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

const int *MR_Aggregates_C_Get_h(const MR_Aggregates_C *_this)
{
    return &((_this ? *(const MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

void MR_Aggregates_C_Set_h(MR_Aggregates_C *_this, int value)
{
    (_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h = value;
}

int *MR_Aggregates_C_GetMutable_h(MR_Aggregates_C *_this)
{
    return &((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

MR_Aggregates_C *MR_Aggregates_C_DefaultConstruct(void)
{
    return (MR_Aggregates_C *)new MR::Aggregates::C(MR::Aggregates::C());
}

MR_Aggregates_C *MR_Aggregates_C_DefaultConstructArray(size_t num_elems)
{
    return (MR_Aggregates_C *)(new MR::Aggregates::C[num_elems]{});
}

MR_Aggregates_C *MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h)
{
    return (MR_Aggregates_C *)new MR::Aggregates::C(MR::Aggregates::C{
        a,
        b,
        c,
        d,
        e,
        f,
        g,
        h
    });
}

const MR_Aggregates_C *MR_Aggregates_C_OffsetPtr(const MR_Aggregates_C *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_C *)(((const MR::Aggregates::C *)ptr) + i);
}

MR_Aggregates_C *MR_Aggregates_C_OffsetMutablePtr(MR_Aggregates_C *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_C *)(((MR::Aggregates::C *)ptr) + i);
}

MR_Aggregates_C *MR_Aggregates_C_ConstructFromAnother(const MR_Aggregates_C *_other)
{
    return (MR_Aggregates_C *)new MR::Aggregates::C(MR::Aggregates::C(
        (_other ? MR::Aggregates::C(*(MR::Aggregates::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Aggregates_C_Destroy(const MR_Aggregates_C *_this)
{
    delete ((const MR::Aggregates::C *)_this);
}

void MR_Aggregates_C_DestroyArray(const MR_Aggregates_C *_this)
{
    delete[] ((const MR::Aggregates::C *)_this);
}

MR_Aggregates_C *MR_Aggregates_C_AssignFromAnother(MR_Aggregates_C *_this, const MR_Aggregates_C *_other)
{
    return (MR_Aggregates_C *)&((_this ? *(MR::Aggregates::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Aggregates::C(*(MR::Aggregates::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const int *MR_Aggregates_D_Get_a(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

void MR_Aggregates_D_Set_a(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a = value;
}

int *MR_Aggregates_D_GetMutable_a(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

const int *MR_Aggregates_D_Get_b(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

void MR_Aggregates_D_Set_b(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b = value;
}

int *MR_Aggregates_D_GetMutable_b(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

const int *MR_Aggregates_D_Get_c(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

void MR_Aggregates_D_Set_c(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c = value;
}

int *MR_Aggregates_D_GetMutable_c(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

const int *MR_Aggregates_D_Get_d(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

void MR_Aggregates_D_Set_d(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d = value;
}

int *MR_Aggregates_D_GetMutable_d(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

const int *MR_Aggregates_D_Get_e(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

void MR_Aggregates_D_Set_e(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e = value;
}

int *MR_Aggregates_D_GetMutable_e(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

const int *MR_Aggregates_D_Get_f(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

void MR_Aggregates_D_Set_f(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f = value;
}

int *MR_Aggregates_D_GetMutable_f(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

const int *MR_Aggregates_D_Get_g(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

void MR_Aggregates_D_Set_g(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g = value;
}

int *MR_Aggregates_D_GetMutable_g(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

const int *MR_Aggregates_D_Get_h(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

void MR_Aggregates_D_Set_h(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h = value;
}

int *MR_Aggregates_D_GetMutable_h(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

const int *MR_Aggregates_D_Get_i(const MR_Aggregates_D *_this)
{
    return &((_this ? *(const MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i);
}

void MR_Aggregates_D_Set_i(MR_Aggregates_D *_this, int value)
{
    (_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i = value;
}

int *MR_Aggregates_D_GetMutable_i(MR_Aggregates_D *_this)
{
    return &((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i);
}

MR_Aggregates_D *MR_Aggregates_D_DefaultConstruct(void)
{
    return (MR_Aggregates_D *)new MR::Aggregates::D(MR::Aggregates::D());
}

MR_Aggregates_D *MR_Aggregates_D_DefaultConstructArray(size_t num_elems)
{
    return (MR_Aggregates_D *)(new MR::Aggregates::D[num_elems]{});
}

MR_Aggregates_D *MR_Aggregates_D_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    return (MR_Aggregates_D *)new MR::Aggregates::D(MR::Aggregates::D{
        a,
        b,
        c,
        d,
        e,
        f,
        g,
        h,
        i
    });
}

const MR_Aggregates_D *MR_Aggregates_D_OffsetPtr(const MR_Aggregates_D *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_D *)(((const MR::Aggregates::D *)ptr) + i);
}

MR_Aggregates_D *MR_Aggregates_D_OffsetMutablePtr(MR_Aggregates_D *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_D *)(((MR::Aggregates::D *)ptr) + i);
}

MR_Aggregates_D *MR_Aggregates_D_ConstructFromAnother(const MR_Aggregates_D *_other)
{
    return (MR_Aggregates_D *)new MR::Aggregates::D(MR::Aggregates::D(
        (_other ? MR::Aggregates::D(*(MR::Aggregates::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_Aggregates_D_Destroy(const MR_Aggregates_D *_this)
{
    delete ((const MR::Aggregates::D *)_this);
}

void MR_Aggregates_D_DestroyArray(const MR_Aggregates_D *_this)
{
    delete[] ((const MR::Aggregates::D *)_this);
}

MR_Aggregates_D *MR_Aggregates_D_AssignFromAnother(MR_Aggregates_D *_this, const MR_Aggregates_D *_other)
{
    return (MR_Aggregates_D *)&((_this ? *(MR::Aggregates::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Aggregates::D(*(MR::Aggregates::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const int *MR_Aggregates_E_Get_a(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

void MR_Aggregates_E_Set_a(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a = value;
}

int *MR_Aggregates_E_GetMutable_a(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

const int *MR_Aggregates_E_Get_b(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

void MR_Aggregates_E_Set_b(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b = value;
}

int *MR_Aggregates_E_GetMutable_b(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b);
}

const int *MR_Aggregates_E_Get_c(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

void MR_Aggregates_E_Set_c(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c = value;
}

int *MR_Aggregates_E_GetMutable_c(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c);
}

const int *MR_Aggregates_E_Get_d(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

void MR_Aggregates_E_Set_d(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d = value;
}

int *MR_Aggregates_E_GetMutable_d(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d);
}

const int *MR_Aggregates_E_Get_e(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

void MR_Aggregates_E_Set_e(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e = value;
}

int *MR_Aggregates_E_GetMutable_e(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).e);
}

const int *MR_Aggregates_E_Get_f(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

void MR_Aggregates_E_Set_f(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f = value;
}

int *MR_Aggregates_E_GetMutable_f(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).f);
}

const int *MR_Aggregates_E_Get_g(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

void MR_Aggregates_E_Set_g(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g = value;
}

int *MR_Aggregates_E_GetMutable_g(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).g);
}

const int *MR_Aggregates_E_Get_h(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

void MR_Aggregates_E_Set_h(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h = value;
}

int *MR_Aggregates_E_GetMutable_h(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).h);
}

const int *MR_Aggregates_E_Get_i(const MR_Aggregates_E *_this)
{
    return &((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i);
}

void MR_Aggregates_E_Set_i(MR_Aggregates_E *_this, int value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i = value;
}

int *MR_Aggregates_E_GetMutable_i(MR_Aggregates_E *_this)
{
    return &((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).i);
}

const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_Get_j(const MR_Aggregates_E *_this)
{
    return (const MR_Aggregates_NonDefaultConstructible *)&((_this ? *(const MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).j);
}

void MR_Aggregates_E_Set_j(MR_Aggregates_E *_this, const MR_Aggregates_NonDefaultConstructible *value)
{
    (_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).j = (value ? MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)value) : throw std::runtime_error("Parameter `value` can not be null."));
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_GetMutable_j(MR_Aggregates_E *_this)
{
    return (MR_Aggregates_NonDefaultConstructible *)&((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).j);
}

MR_Aggregates_E *MR_Aggregates_E_ConstructFromAnother(const MR_Aggregates_E *_other)
{
    return (MR_Aggregates_E *)new MR::Aggregates::E(MR::Aggregates::E(
        (_other ? MR::Aggregates::E(*(MR::Aggregates::E *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_Aggregates_E *MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, const MR_Aggregates_NonDefaultConstructible *j)
{
    return (MR_Aggregates_E *)new MR::Aggregates::E(MR::Aggregates::E{
        a,
        b,
        c,
        d,
        e,
        f,
        g,
        h,
        i,
        (j ? MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)j) : throw std::runtime_error("Parameter `j` can not be null."))
    });
}

const MR_Aggregates_E *MR_Aggregates_E_OffsetPtr(const MR_Aggregates_E *ptr, ptrdiff_t i)
{
    return (const MR_Aggregates_E *)(((const MR::Aggregates::E *)ptr) + i);
}

MR_Aggregates_E *MR_Aggregates_E_OffsetMutablePtr(MR_Aggregates_E *ptr, ptrdiff_t i)
{
    return (MR_Aggregates_E *)(((MR::Aggregates::E *)ptr) + i);
}

void MR_Aggregates_E_Destroy(const MR_Aggregates_E *_this)
{
    delete ((const MR::Aggregates::E *)_this);
}

void MR_Aggregates_E_DestroyArray(const MR_Aggregates_E *_this)
{
    delete[] ((const MR::Aggregates::E *)_this);
}

MR_Aggregates_E *MR_Aggregates_E_AssignFromAnother(MR_Aggregates_E *_this, const MR_Aggregates_E *_other)
{
    return (MR_Aggregates_E *)&((_this ? *(MR::Aggregates::E *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::Aggregates::E(*(MR::Aggregates::E *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}


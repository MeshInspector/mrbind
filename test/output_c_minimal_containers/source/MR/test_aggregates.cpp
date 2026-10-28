#define MR_C_BUILD_LIBRARY
#include "MR/test_aggregates.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_aggregates.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>


const int *MR_Aggregates_A_Get_x(const MR_Aggregates_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::A *)(_this)).x);
}

void MR_Aggregates_A_Set_x(MR_Aggregates_A *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::A *)(_this)).x = value;
}

int *MR_Aggregates_A_GetMutable_x(MR_Aggregates_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::A *)(_this)).x);
}

const MR_C_std_string *MR_Aggregates_A_Get_y(const MR_Aggregates_A *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::A *)(_this)).y);
}

void MR_Aggregates_A_Set_y(MR_Aggregates_A *_this, const char *value, const char *value_end)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::A *)(_this)).y = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_Aggregates_A_GetMutable_y(MR_Aggregates_A *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::A *)(_this)).y);
}

MR_Aggregates_A *MR_Aggregates_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A());
    ) // MRBINDC_TRY
}

MR_Aggregates_A *MR_Aggregates_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Aggregates_A *)(new MR::Aggregates::A[num_elems]{});
    ) // MRBINDC_TRY
}

MR_Aggregates_A *MR_Aggregates_A_ConstructFrom(int x, const char *y, const char *y_end)
{
    MRBINDC_TRY(
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A{
        x,
        ((y ? void() : MRBINDC_THROW("Parameter `y` can not be null.", void)), (y_end ? std::string(y, y_end) : std::string(y)))
    });
    ) // MRBINDC_TRY
}

const MR_Aggregates_A *MR_Aggregates_A_OffsetPtr(const MR_Aggregates_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_A *)(((const MR::Aggregates::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_A *MR_Aggregates_A_OffsetMutablePtr(MR_Aggregates_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_A *)(((MR::Aggregates::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_A *MR_Aggregates_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Aggregates::A);
    return (MR_Aggregates_A *)new MR::Aggregates::A(MR::Aggregates::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Aggregates::A) MRBINDC_CLASSARG_COPY(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_MOVE(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Aggregates::A) MRBINDC_CLASSARG_END(_other, MR::Aggregates::A))
    ));
    ) // MRBINDC_TRY
}

void MR_Aggregates_A_Destroy(const MR_Aggregates_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::A *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_A_DestroyArray(const MR_Aggregates_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::A *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_A *MR_Aggregates_A_AssignFromAnother(MR_Aggregates_A *_this, MR_C_PassBy _other_pass_by, MR_Aggregates_A *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::Aggregates::A);
    return (MR_Aggregates_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::A *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::Aggregates::A) MRBINDC_CLASSARG_COPY(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_MOVE(_other, (MR::Aggregates::A), MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::Aggregates::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::Aggregates::A) MRBINDC_CLASSARG_END(_other, MR::Aggregates::A))
    ));
    ) // MRBINDC_TRY
}

MR_Aggregates_B *MR_Aggregates_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Aggregates_B *)new MR::Aggregates::B(MR::Aggregates::B());
    ) // MRBINDC_TRY
}

MR_Aggregates_B *MR_Aggregates_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Aggregates_B *)(new MR::Aggregates::B[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_Aggregates_B *MR_Aggregates_B_OffsetPtr(const MR_Aggregates_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_B *)(((const MR::Aggregates::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_B *MR_Aggregates_B_OffsetMutablePtr(MR_Aggregates_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_B *)(((MR::Aggregates::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_B *MR_Aggregates_B_ConstructFromAnother(const MR_Aggregates_B *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_B *)new MR::Aggregates::B(MR::Aggregates::B(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::B(*(MR::Aggregates::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Aggregates_B_Destroy(const MR_Aggregates_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::B *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_B_DestroyArray(const MR_Aggregates_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::B *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_B *MR_Aggregates_B_AssignFromAnother(MR_Aggregates_B *_this, const MR_Aggregates_B *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::B *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::B(*(MR::Aggregates::B *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(const MR_Aggregates_NonDefaultConstructible *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_NonDefaultConstructible *)new MR::Aggregates::NonDefaultConstructible(MR::Aggregates::NonDefaultConstructible(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetPtr(const MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_NonDefaultConstructible *)(((const MR::Aggregates::NonDefaultConstructible *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_OffsetMutablePtr(MR_Aggregates_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_NonDefaultConstructible *)(((MR::Aggregates::NonDefaultConstructible *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_Aggregates_NonDefaultConstructible_Destroy(const MR_Aggregates_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::NonDefaultConstructible *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_NonDefaultConstructible_DestroyArray(const MR_Aggregates_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::NonDefaultConstructible *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_NonDefaultConstructible_AssignFromAnother(MR_Aggregates_NonDefaultConstructible *_this, const MR_Aggregates_NonDefaultConstructible *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::NonDefaultConstructible *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_Aggregates_C_Get_a(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).a);
}

void MR_Aggregates_C_Set_a(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).a = value;
}

int *MR_Aggregates_C_GetMutable_a(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).a);
}

const int *MR_Aggregates_C_Get_b(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).b);
}

void MR_Aggregates_C_Set_b(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).b = value;
}

int *MR_Aggregates_C_GetMutable_b(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).b);
}

const int *MR_Aggregates_C_Get_c(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).c);
}

void MR_Aggregates_C_Set_c(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).c = value;
}

int *MR_Aggregates_C_GetMutable_c(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).c);
}

const int *MR_Aggregates_C_Get_d(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).d);
}

void MR_Aggregates_C_Set_d(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).d = value;
}

int *MR_Aggregates_C_GetMutable_d(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).d);
}

const int *MR_Aggregates_C_Get_e(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).e);
}

void MR_Aggregates_C_Set_e(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).e = value;
}

int *MR_Aggregates_C_GetMutable_e(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).e);
}

const int *MR_Aggregates_C_Get_f(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).f);
}

void MR_Aggregates_C_Set_f(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).f = value;
}

int *MR_Aggregates_C_GetMutable_f(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).f);
}

const int *MR_Aggregates_C_Get_g(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).g);
}

void MR_Aggregates_C_Set_g(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).g = value;
}

int *MR_Aggregates_C_GetMutable_g(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).g);
}

const int *MR_Aggregates_C_Get_h(const MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::C *)(_this)).h);
}

void MR_Aggregates_C_Set_h(MR_Aggregates_C *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).h = value;
}

int *MR_Aggregates_C_GetMutable_h(MR_Aggregates_C *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).h);
}

MR_Aggregates_C *MR_Aggregates_C_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Aggregates_C *)new MR::Aggregates::C(MR::Aggregates::C());
    ) // MRBINDC_TRY
}

MR_Aggregates_C *MR_Aggregates_C_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Aggregates_C *)(new MR::Aggregates::C[num_elems]{});
    ) // MRBINDC_TRY
}

MR_Aggregates_C *MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h)
{
    MRBINDC_TRY(
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
    ) // MRBINDC_TRY
}

const MR_Aggregates_C *MR_Aggregates_C_OffsetPtr(const MR_Aggregates_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_C *)(((const MR::Aggregates::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_C *MR_Aggregates_C_OffsetMutablePtr(MR_Aggregates_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_C *)(((MR::Aggregates::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_C *MR_Aggregates_C_ConstructFromAnother(const MR_Aggregates_C *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_C *)new MR::Aggregates::C(MR::Aggregates::C(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::C(*(MR::Aggregates::C *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Aggregates_C_Destroy(const MR_Aggregates_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::C *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_C_DestroyArray(const MR_Aggregates_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::C *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_C *MR_Aggregates_C_AssignFromAnother(MR_Aggregates_C *_this, const MR_Aggregates_C *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_C *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::C *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::C(*(MR::Aggregates::C *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_Aggregates_D_Get_a(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).a);
}

void MR_Aggregates_D_Set_a(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).a = value;
}

int *MR_Aggregates_D_GetMutable_a(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).a);
}

const int *MR_Aggregates_D_Get_b(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).b);
}

void MR_Aggregates_D_Set_b(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).b = value;
}

int *MR_Aggregates_D_GetMutable_b(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).b);
}

const int *MR_Aggregates_D_Get_c(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).c);
}

void MR_Aggregates_D_Set_c(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).c = value;
}

int *MR_Aggregates_D_GetMutable_c(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).c);
}

const int *MR_Aggregates_D_Get_d(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).d);
}

void MR_Aggregates_D_Set_d(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).d = value;
}

int *MR_Aggregates_D_GetMutable_d(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).d);
}

const int *MR_Aggregates_D_Get_e(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).e);
}

void MR_Aggregates_D_Set_e(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).e = value;
}

int *MR_Aggregates_D_GetMutable_e(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).e);
}

const int *MR_Aggregates_D_Get_f(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).f);
}

void MR_Aggregates_D_Set_f(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).f = value;
}

int *MR_Aggregates_D_GetMutable_f(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).f);
}

const int *MR_Aggregates_D_Get_g(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).g);
}

void MR_Aggregates_D_Set_g(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).g = value;
}

int *MR_Aggregates_D_GetMutable_g(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).g);
}

const int *MR_Aggregates_D_Get_h(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).h);
}

void MR_Aggregates_D_Set_h(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).h = value;
}

int *MR_Aggregates_D_GetMutable_h(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).h);
}

const int *MR_Aggregates_D_Get_i(const MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::D *)(_this)).i);
}

void MR_Aggregates_D_Set_i(MR_Aggregates_D *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).i = value;
}

int *MR_Aggregates_D_GetMutable_i(MR_Aggregates_D *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).i);
}

MR_Aggregates_D *MR_Aggregates_D_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_Aggregates_D *)new MR::Aggregates::D(MR::Aggregates::D());
    ) // MRBINDC_TRY
}

MR_Aggregates_D *MR_Aggregates_D_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_Aggregates_D *)(new MR::Aggregates::D[num_elems]{});
    ) // MRBINDC_TRY
}

MR_Aggregates_D *MR_Aggregates_D_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    MRBINDC_TRY(
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
    ) // MRBINDC_TRY
}

const MR_Aggregates_D *MR_Aggregates_D_OffsetPtr(const MR_Aggregates_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_D *)(((const MR::Aggregates::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_D *MR_Aggregates_D_OffsetMutablePtr(MR_Aggregates_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_D *)(((MR::Aggregates::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_D *MR_Aggregates_D_ConstructFromAnother(const MR_Aggregates_D *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_D *)new MR::Aggregates::D(MR::Aggregates::D(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::D(*(MR::Aggregates::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_Aggregates_D_Destroy(const MR_Aggregates_D *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::D *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_D_DestroyArray(const MR_Aggregates_D *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::D *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_D *MR_Aggregates_D_AssignFromAnother(MR_Aggregates_D *_this, const MR_Aggregates_D *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_D *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::D *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::D(*(MR::Aggregates::D *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_Aggregates_E_Get_a(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).a);
}

void MR_Aggregates_E_Set_a(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).a = value;
}

int *MR_Aggregates_E_GetMutable_a(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).a);
}

const int *MR_Aggregates_E_Get_b(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).b);
}

void MR_Aggregates_E_Set_b(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).b = value;
}

int *MR_Aggregates_E_GetMutable_b(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).b);
}

const int *MR_Aggregates_E_Get_c(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).c);
}

void MR_Aggregates_E_Set_c(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).c = value;
}

int *MR_Aggregates_E_GetMutable_c(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).c);
}

const int *MR_Aggregates_E_Get_d(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).d);
}

void MR_Aggregates_E_Set_d(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).d = value;
}

int *MR_Aggregates_E_GetMutable_d(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).d);
}

const int *MR_Aggregates_E_Get_e(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).e);
}

void MR_Aggregates_E_Set_e(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).e = value;
}

int *MR_Aggregates_E_GetMutable_e(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).e);
}

const int *MR_Aggregates_E_Get_f(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).f);
}

void MR_Aggregates_E_Set_f(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).f = value;
}

int *MR_Aggregates_E_GetMutable_f(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).f);
}

const int *MR_Aggregates_E_Get_g(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).g);
}

void MR_Aggregates_E_Set_g(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).g = value;
}

int *MR_Aggregates_E_GetMutable_g(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).g);
}

const int *MR_Aggregates_E_Get_h(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).h);
}

void MR_Aggregates_E_Set_h(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).h = value;
}

int *MR_Aggregates_E_GetMutable_h(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).h);
}

const int *MR_Aggregates_E_Get_i(const MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).i);
}

void MR_Aggregates_E_Set_i(MR_Aggregates_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).i = value;
}

int *MR_Aggregates_E_GetMutable_i(MR_Aggregates_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).i);
}

const MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_Get_j(const MR_Aggregates_E *_this)
{
    return (const MR_Aggregates_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::Aggregates::E *)(_this)).j);
}

void MR_Aggregates_E_Set_j(MR_Aggregates_E *_this, const MR_Aggregates_NonDefaultConstructible *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).j = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)value));
}

MR_Aggregates_NonDefaultConstructible *MR_Aggregates_E_GetMutable_j(MR_Aggregates_E *_this)
{
    return (MR_Aggregates_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).j);
}

MR_Aggregates_E *MR_Aggregates_E_ConstructFromAnother(const MR_Aggregates_E *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_E *)new MR::Aggregates::E(MR::Aggregates::E(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::E(*(MR::Aggregates::E *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_Aggregates_E *MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, const MR_Aggregates_NonDefaultConstructible *j)
{
    MRBINDC_TRY(
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
        ((j ? void() : MRBINDC_THROW("Parameter `j` can not be null.", void)), MR::Aggregates::NonDefaultConstructible(*(MR::Aggregates::NonDefaultConstructible *)j))
    });
    ) // MRBINDC_TRY
}

const MR_Aggregates_E *MR_Aggregates_E_OffsetPtr(const MR_Aggregates_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_Aggregates_E *)(((const MR::Aggregates::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_Aggregates_E *MR_Aggregates_E_OffsetMutablePtr(MR_Aggregates_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_Aggregates_E *)(((MR::Aggregates::E *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_Aggregates_E_Destroy(const MR_Aggregates_E *_this)
{
    MRBINDC_TRY(
    delete ((const MR::Aggregates::E *)_this);
    ) // MRBINDC_TRY
}

void MR_Aggregates_E_DestroyArray(const MR_Aggregates_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::Aggregates::E *)_this);
    ) // MRBINDC_TRY
}

MR_Aggregates_E *MR_Aggregates_E_AssignFromAnother(MR_Aggregates_E *_this, const MR_Aggregates_E *_other)
{
    MRBINDC_TRY(
    return (MR_Aggregates_E *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::Aggregates::E *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::Aggregates::E(*(MR::Aggregates::E *)_other))
    ));
    ) // MRBINDC_TRY
}


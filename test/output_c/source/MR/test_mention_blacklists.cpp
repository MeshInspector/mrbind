#define MR_C_BUILD_LIBRARY
#include "MR/test_mention_blacklists.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_mention_blacklists.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(MR::SignatureFilters::A());
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)(new MR::SignatureFilters::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetPtr(const MR_SignatureFilters_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SignatureFilters_A *)(((const MR::SignatureFilters::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetMutablePtr(MR_SignatureFilters_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)(((MR::SignatureFilters::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_A_ConstructFromAnother(const MR_SignatureFilters_A *_other)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(MR::SignatureFilters::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_A_Destroy(const MR_SignatureFilters_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SignatureFilters::A *)_this);
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_A_DestroyArray(const MR_SignatureFilters_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SignatureFilters::A *)_this);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_A_AssignFromAnother(MR_SignatureFilters_A *_this, const MR_SignatureFilters_A *_other)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SignatureFilters::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_foo_1(const MR_SignatureFilters_A *_1)
{
    MRBINDC_TRY(
    ::MR::SignatureFilters::foo(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_1))
    );
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_foo_0(void)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(::MR::SignatureFilters::foo());
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_foo2_1(MR_SignatureFilters_A *_1)
{
    MRBINDC_TRY(
    ::MR::SignatureFilters::foo2(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(MR::SignatureFilters::A *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_foo2_0(void)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)std::addressof(::MR::SignatureFilters::foo2());
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_foo3_1(MR_SignatureFilters_A *_1)
{
    MRBINDC_TRY(
    ::MR::SignatureFilters::foo3(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(MR::SignatureFilters::A *)(_1)))
    );
    ) // MRBINDC_TRY
}

MR_SignatureFilters_A *MR_SignatureFilters_foo3_0(void)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_A *)std::addressof(mrbindc_details::unmove(::MR::SignatureFilters::foo3()));
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_foo4_1(const MR_SignatureFilters_A *_1)
{
    MRBINDC_TRY(
    ::MR::SignatureFilters::foo4(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::SignatureFilters::A *)(_1))
    );
    ) // MRBINDC_TRY
}

const MR_SignatureFilters_A *MR_SignatureFilters_foo4_0(void)
{
    MRBINDC_TRY(
    return (const MR_SignatureFilters_A *)std::addressof(::MR::SignatureFilters::foo4());
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_foo5_1(const MR_SignatureFilters_A *_1)
{
    MRBINDC_TRY(
    ::MR::SignatureFilters::foo5(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(const MR::SignatureFilters::A *)(_1)))
    );
    ) // MRBINDC_TRY
}

const MR_SignatureFilters_A *MR_SignatureFilters_foo5_0(void)
{
    MRBINDC_TRY(
    return (const MR_SignatureFilters_A *)std::addressof(mrbindc_details::unmove(::MR::SignatureFilters::foo5()));
    ) // MRBINDC_TRY
}

const MR_SignatureFilters_A *MR_SignatureFilters_Blah_Get_a(const MR_SignatureFilters_Blah *_this)
{
    return (const MR_SignatureFilters_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::SignatureFilters::Blah *)(_this)).a);
}

void MR_SignatureFilters_Blah_Set_a(MR_SignatureFilters_Blah *_this, const MR_SignatureFilters_A *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SignatureFilters::Blah *)(_this)).a = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), MR::SignatureFilters::A(*(MR::SignatureFilters::A *)value));
}

MR_SignatureFilters_A *MR_SignatureFilters_Blah_GetMutable_a(MR_SignatureFilters_Blah *_this)
{
    return (MR_SignatureFilters_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SignatureFilters::Blah *)(_this)).a);
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_Blah *)new MR::SignatureFilters::Blah(MR::SignatureFilters::Blah());
    ) // MRBINDC_TRY
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_Blah *)(new MR::SignatureFilters::Blah[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetPtr(const MR_SignatureFilters_Blah *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_SignatureFilters_Blah *)(((const MR::SignatureFilters::Blah *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetMutablePtr(MR_SignatureFilters_Blah *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_Blah *)(((MR::SignatureFilters::Blah *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_ConstructFromAnother(const MR_SignatureFilters_Blah *_other)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_Blah *)new MR::SignatureFilters::Blah(MR::SignatureFilters::Blah(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SignatureFilters::Blah(*(MR::SignatureFilters::Blah *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_Blah_Destroy(const MR_SignatureFilters_Blah *_this)
{
    MRBINDC_TRY(
    delete ((const MR::SignatureFilters::Blah *)_this);
    ) // MRBINDC_TRY
}

void MR_SignatureFilters_Blah_DestroyArray(const MR_SignatureFilters_Blah *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::SignatureFilters::Blah *)_this);
    ) // MRBINDC_TRY
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_AssignFromAnother(MR_SignatureFilters_Blah *_this, const MR_SignatureFilters_Blah *_other)
{
    MRBINDC_TRY(
    return (MR_SignatureFilters_Blah *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::SignatureFilters::Blah *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::SignatureFilters::Blah(*(MR::SignatureFilters::Blah *)_other))
    ));
    ) // MRBINDC_TRY
}


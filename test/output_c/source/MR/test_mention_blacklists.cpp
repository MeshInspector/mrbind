#include "MR/test_mention_blacklists.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_mention_blacklists.h>

#include <stdexcept>
#include <utility>


MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstruct(void)
{
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(MR::SignatureFilters::A());
}

MR_SignatureFilters_A *MR_SignatureFilters_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_SignatureFilters_A *)(new MR::SignatureFilters::A[num_elems]{});
}

const MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetPtr(const MR_SignatureFilters_A *ptr, ptrdiff_t i)
{
    return (const MR_SignatureFilters_A *)(((const MR::SignatureFilters::A *)ptr) + i);
}

MR_SignatureFilters_A *MR_SignatureFilters_A_OffsetMutablePtr(MR_SignatureFilters_A *ptr, ptrdiff_t i)
{
    return (MR_SignatureFilters_A *)(((MR::SignatureFilters::A *)ptr) + i);
}

MR_SignatureFilters_A *MR_SignatureFilters_A_ConstructFromAnother(const MR_SignatureFilters_A *_other)
{
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(MR::SignatureFilters::A(
        (_other ? MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_SignatureFilters_A_Destroy(const MR_SignatureFilters_A *_this)
{
    delete ((const MR::SignatureFilters::A *)_this);
}

void MR_SignatureFilters_A_DestroyArray(const MR_SignatureFilters_A *_this)
{
    delete[] ((const MR::SignatureFilters::A *)_this);
}

MR_SignatureFilters_A *MR_SignatureFilters_A_AssignFromAnother(MR_SignatureFilters_A *_this, const MR_SignatureFilters_A *_other)
{
    return (MR_SignatureFilters_A *)&((_this ? *(MR::SignatureFilters::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_SignatureFilters_foo_1(const MR_SignatureFilters_A *_1)
{
    ::MR::SignatureFilters::foo(
        (_1 ? MR::SignatureFilters::A(*(MR::SignatureFilters::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_SignatureFilters_A *MR_SignatureFilters_foo_0(void)
{
    return (MR_SignatureFilters_A *)new MR::SignatureFilters::A(::MR::SignatureFilters::foo());
}

void MR_SignatureFilters_foo2_1(MR_SignatureFilters_A *_1)
{
    ::MR::SignatureFilters::foo2(
        (_1 ? *(MR::SignatureFilters::A *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_SignatureFilters_A *MR_SignatureFilters_foo2_0(void)
{
    return (MR_SignatureFilters_A *)&(::MR::SignatureFilters::foo2());
}

void MR_SignatureFilters_foo3_1(MR_SignatureFilters_A *_1)
{
    ::MR::SignatureFilters::foo3(
        (_1 ? std::move(*(MR::SignatureFilters::A *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_SignatureFilters_A *MR_SignatureFilters_foo3_0(void)
{
    return (MR_SignatureFilters_A *)&mrbindc_details::unmove(::MR::SignatureFilters::foo3());
}

void MR_SignatureFilters_foo4_1(const MR_SignatureFilters_A *_1)
{
    ::MR::SignatureFilters::foo4(
        (_1 ? *(const MR::SignatureFilters::A *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

const MR_SignatureFilters_A *MR_SignatureFilters_foo4_0(void)
{
    return (const MR_SignatureFilters_A *)&(::MR::SignatureFilters::foo4());
}

void MR_SignatureFilters_foo5_1(const MR_SignatureFilters_A *_1)
{
    ::MR::SignatureFilters::foo5(
        (_1 ? std::move(*(const MR::SignatureFilters::A *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

const MR_SignatureFilters_A *MR_SignatureFilters_foo5_0(void)
{
    return (const MR_SignatureFilters_A *)&mrbindc_details::unmove(::MR::SignatureFilters::foo5());
}

const MR_SignatureFilters_A *MR_SignatureFilters_Blah_GetConst_a(const MR_SignatureFilters_Blah *_this)
{
    return (const MR_SignatureFilters_A *)&((_this ? *(const MR::SignatureFilters::Blah *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

MR_SignatureFilters_A *MR_SignatureFilters_Blah_GetMutable_a(MR_SignatureFilters_Blah *_this)
{
    return (MR_SignatureFilters_A *)&((_this ? *(MR::SignatureFilters::Blah *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a);
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstruct(void)
{
    return (MR_SignatureFilters_Blah *)new MR::SignatureFilters::Blah(MR::SignatureFilters::Blah());
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_DefaultConstructArray(size_t num_elems)
{
    return (MR_SignatureFilters_Blah *)(new MR::SignatureFilters::Blah[num_elems]{});
}

const MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetPtr(const MR_SignatureFilters_Blah *ptr, ptrdiff_t i)
{
    return (const MR_SignatureFilters_Blah *)(((const MR::SignatureFilters::Blah *)ptr) + i);
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_OffsetMutablePtr(MR_SignatureFilters_Blah *ptr, ptrdiff_t i)
{
    return (MR_SignatureFilters_Blah *)(((MR::SignatureFilters::Blah *)ptr) + i);
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_ConstructFromAnother(const MR_SignatureFilters_Blah *_other)
{
    return (MR_SignatureFilters_Blah *)new MR::SignatureFilters::Blah(MR::SignatureFilters::Blah(
        (_other ? MR::SignatureFilters::Blah(*(MR::SignatureFilters::Blah *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_SignatureFilters_Blah_Destroy(const MR_SignatureFilters_Blah *_this)
{
    delete ((const MR::SignatureFilters::Blah *)_this);
}

void MR_SignatureFilters_Blah_DestroyArray(const MR_SignatureFilters_Blah *_this)
{
    delete[] ((const MR::SignatureFilters::Blah *)_this);
}

MR_SignatureFilters_Blah *MR_SignatureFilters_Blah_AssignFromAnother(MR_SignatureFilters_Blah *_this, const MR_SignatureFilters_Blah *_other)
{
    return (MR_SignatureFilters_Blah *)&((_this ? *(MR::SignatureFilters::Blah *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::SignatureFilters::Blah(*(MR::SignatureFilters::Blah *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}


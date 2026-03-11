#define MR_C_BUILD_LIBRARY
#include "MR/test_csharp.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <expected>
#include <filesystem>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>


void MR_CSharp_foo(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::foo();
    ) // MRBINDC_TRY
}

int MR_CSharp_test_int(int a, const int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int(
        a,
        (b ? *b : static_cast<int>(42))
    );
    ) // MRBINDC_TRY
}

bool MR_CSharp_test_bool(bool a, const bool *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_bool(
        a,
        (b ? *b : static_cast<bool>(true))
    );
}

void MR_CSharp_test_bool_ref(bool *a, bool *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    ::MR::CSharp::test_bool_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<bool &>(default_bool))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_test_bool_ref2(bool *a, bool *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_bool_ref2(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<bool &>(default_bool))
    );
    ) // MRBINDC_TRY
}

bool *MR_CSharp_get_bool_ref(void)
{
    MRBINDC_TRY(
    return std::addressof(::MR::CSharp::get_bool_ref());
    ) // MRBINDC_TRY
}

void MR_CSharp_print_bool_ref(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::print_bool_ref();
    ) // MRBINDC_TRY
}

const bool *MR_CSharp_test_bool_cref(const bool *_1, const bool *_2)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_bool_cref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        (_2 ? *_2 : static_cast<const bool &>(default_bool))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_test_int_ref(int *a, int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_int_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int &>(default_int))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_test_int_cref(const int *a, const int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_int_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int &>(default_int))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_test_int_rref(int *a, int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_int_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int &&>(42))
    )));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_test_int_crref(const int *a, const int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_int_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int &&>(42))
    )));
    ) // MRBINDC_TRY
}

int *MR_CSharp_test_int_ptr(int *a, int *b, int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_ptr(
        a,
        b,
        (c ? *c : static_cast<int *>(&default_int))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_test_int_cptr(const int *a, const int *b, const int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_cptr(
        a,
        b,
        (c ? *c : static_cast<const int *>(&default_int))
    );
    ) // MRBINDC_TRY
}

unsigned short MR_CSharp_test_ushort(unsigned short a, const unsigned short *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort(
        a,
        (b ? *b : static_cast<unsigned short>(42))
    );
    ) // MRBINDC_TRY
}

unsigned short *MR_CSharp_test_ushort_ref(unsigned short *a, unsigned short *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_ushort_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<unsigned short &>(default_ushort))
    ));
    ) // MRBINDC_TRY
}

const unsigned short *MR_CSharp_test_ushort_cref(const unsigned short *a, const unsigned short *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_ushort_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const unsigned short &>(default_ushort))
    ));
    ) // MRBINDC_TRY
}

unsigned short *MR_CSharp_test_ushort_rref(unsigned short *a, unsigned short *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_ushort_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<unsigned short &&>((unsigned short &&)default_ushort))
    )));
    ) // MRBINDC_TRY
}

const unsigned short *MR_CSharp_test_ushort_crref(const unsigned short *a, const unsigned short *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_ushort_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const unsigned short &&>((unsigned short &&)default_ushort))
    )));
    ) // MRBINDC_TRY
}

unsigned short *MR_CSharp_test_ushort_ptr(unsigned short *a, unsigned short *b, unsigned short *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_ptr(
        a,
        b,
        (c ? *c : static_cast<unsigned short *>(&default_ushort))
    );
    ) // MRBINDC_TRY
}

const unsigned short *MR_CSharp_test_ushort_cptr(const unsigned short *a, const unsigned short *b, const unsigned short *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_cptr(
        a,
        b,
        (c ? *c : static_cast<const unsigned short *>(&default_ushort))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_test_constness_int(int _1, const int *_2)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_constness_int(
        _1,
        (_2 ? *_2 : static_cast<int>(42))
    );
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_test_constness_str(const char *_1, const char *_1_end, const char *_2, const char *_2_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)new std::string(::MR::CSharp::test_constness_str(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), (_1_end ? std::string(_1, _1_end) : std::string(_1))),
        (_2 ? (_2_end ? std::string(_2, _2_end) : std::string(_2)) : std::string("42"))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 MR_CSharp_test_enum_MR_CSharp_E1(MR_CSharp_E1 a, const MR_CSharp_E1 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1)(::MR::CSharp::test_enum(
        ((MR::CSharp::E1)a),
        (b ? (MR::CSharp::E1)(*b) : static_cast<MR::CSharp::E1>(E1::b))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 *MR_CSharp_test_enum_ref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)std::addressof(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 *)(a)),
        (b ? *(MR::CSharp::E1 *)(b) : static_cast<MR::CSharp::E1 &>(default_e1))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 *MR_CSharp_test_enum_cref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)std::addressof(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 *)(a)),
        (b ? *(const MR::CSharp::E1 *)(b) : static_cast<const MR::CSharp::E1 &>(default_e1))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 *MR_CSharp_test_enum_rref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::E1 *)(a))),
        (b ? std::move(*(MR::CSharp::E1 *)(b)) : static_cast<MR::CSharp::E1 &&>((MR::CSharp::E1 &&)default_e1))
    )));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 *MR_CSharp_test_enum_crref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::E1 *)(a))),
        (b ? std::move(*(const MR::CSharp::E1 *)(b)) : static_cast<const MR::CSharp::E1 &&>((MR::CSharp::E1 &&)default_e1))
    )));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 *MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(MR_CSharp_E1 *a, MR_CSharp_E1 *b, MR_CSharp_E1 *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)(::MR::CSharp::test_enum_ptr(
        ((MR::CSharp::E1 *)a),
        ((MR::CSharp::E1 *)b),
        (c ? (MR::CSharp::E1 *)(*c) : static_cast<MR::CSharp::E1 *>(&default_e1))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b, const MR_CSharp_E1 *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)(::MR::CSharp::test_enum_cptr(
        ((const MR::CSharp::E1 *)a),
        ((const MR::CSharp::E1 *)b),
        (c ? (const MR::CSharp::E1 *)(*c) : static_cast<const MR::CSharp::E1 *>(&default_e1))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E2 MR_CSharp_test_enum_MR_CSharp_E2(MR_CSharp_E2 a, const MR_CSharp_E2 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2)(::MR::CSharp::test_enum(
        ((MR::CSharp::E2)a),
        (b ? (MR::CSharp::E2)(*b) : static_cast<MR::CSharp::E2>(E2::b))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E2 *MR_CSharp_test_enum_ref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)std::addressof(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E2 *)(a)),
        (b ? *(MR::CSharp::E2 *)(b) : static_cast<MR::CSharp::E2 &>(default_e2))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E2 *MR_CSharp_test_enum_cref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)std::addressof(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E2 *)(a)),
        (b ? *(const MR::CSharp::E2 *)(b) : static_cast<const MR::CSharp::E2 &>(default_e2))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E2 *MR_CSharp_test_enum_rref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::E2 *)(a))),
        (b ? std::move(*(MR::CSharp::E2 *)(b)) : static_cast<MR::CSharp::E2 &&>((MR::CSharp::E2 &&)default_e2))
    )));
    ) // MRBINDC_TRY
}

const MR_CSharp_E2 *MR_CSharp_test_enum_crref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::E2 *)(a))),
        (b ? std::move(*(const MR::CSharp::E2 *)(b)) : static_cast<const MR::CSharp::E2 &&>((MR::CSharp::E2 &&)default_e2))
    )));
    ) // MRBINDC_TRY
}

MR_CSharp_E2 *MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(MR_CSharp_E2 *a, MR_CSharp_E2 *b, MR_CSharp_E2 *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)(::MR::CSharp::test_enum_ptr(
        ((MR::CSharp::E2 *)a),
        ((MR::CSharp::E2 *)b),
        (c ? (MR::CSharp::E2 *)(*c) : static_cast<MR::CSharp::E2 *>(&default_e2))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E2 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b, const MR_CSharp_E2 *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)(::MR::CSharp::test_enum_cptr(
        ((const MR::CSharp::E2 *)a),
        ((const MR::CSharp::E2 *)b),
        (c ? (const MR::CSharp::E2 *)(*c) : static_cast<const MR::CSharp::E2 *>(&default_e2))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)new MR::CSharp::A(MR::CSharp::A());
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(new MR::CSharp::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_A *MR_CSharp_A_OffsetPtr(const MR_CSharp_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *)(((const MR::CSharp::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_A_OffsetMutablePtr(MR_CSharp_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(((MR::CSharp::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_A *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::A);
    return (MR_CSharp_A *)new MR::CSharp::A(MR::CSharp::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::A) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::A) MRBINDC_CLASSARG_END(_other, MR::CSharp::A))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_A_Destroy(const MR_CSharp_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::A *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_A_DestroyArray(const MR_CSharp_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::A *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_A_AssignFromAnother(MR_CSharp_A *_this, MR_C_PassBy _other_pass_by, MR_CSharp_A *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::A);
    return (MR_CSharp_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::A) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::A) MRBINDC_CLASSARG_END(_other, MR::CSharp::A))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_A_foo(MR_CSharp_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_A_bar(const MR_CSharp_A *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_A_static_foo(void)
{
    MRBINDC_TRY(
    MR::CSharp::A::static_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_A_static_bar(int _1, int _2)
{
    MRBINDC_TRY(
    MR::CSharp::A::static_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_A_virtual_foo(MR_CSharp_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).virtual_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_A_virtual_bar(const MR_CSharp_A *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).virtual_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_A_refs(MR_CSharp_A *_this, int *x, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B());
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)(new MR::CSharp::B[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_B *MR_CSharp_B_OffsetPtr(const MR_CSharp_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_B *)(((const MR::CSharp::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_OffsetMutablePtr(MR_CSharp_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)(((MR::CSharp::B *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_A *MR_CSharp_B_UpcastTo_MR_CSharp_A(const MR_CSharp_B *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::B *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(MR_CSharp_B *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::B *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_B *MR_CSharp_B_StaticDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_B *)(static_cast<const MR::CSharp::B *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)(static_cast<MR::CSharp::B *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_B *MR_CSharp_B_DynamicDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_B *)(dynamic_cast<const MR::CSharp::B *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)(dynamic_cast<MR::CSharp::B *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_B *MR_CSharp_B_DynamicDowncastFromOrFail_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_B *)std::addressof(dynamic_cast<const MR::CSharp::B &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_MutableDynamicDowncastFromOrFail_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)std::addressof(dynamic_cast<MR::CSharp::B &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_B *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::B);
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::B) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::B) MRBINDC_CLASSARG_END(_other, MR::CSharp::B))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_Construct(int a, int b)
{
    MRBINDC_TRY(
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B(
        a,
        b
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_B_Destroy(const MR_CSharp_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::B *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_B_DestroyArray(const MR_CSharp_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::B *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_B *MR_CSharp_B_AssignFromAnother(MR_CSharp_B *_this, MR_C_PassBy _other_pass_by, MR_CSharp_B *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::B);
    return (MR_CSharp_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::B) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::B) MRBINDC_CLASSARG_END(_other, MR::CSharp::B))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_B_foo(MR_CSharp_B *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_B_bar(const MR_CSharp_B *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::B *)(_this)).bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_B_static_foo(void)
{
    MRBINDC_TRY(
    MR::CSharp::B::static_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_B_static_bar(int _1, int _2)
{
    MRBINDC_TRY(
    MR::CSharp::B::static_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_B_virtual_foo(MR_CSharp_B *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).virtual_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_B_virtual_bar(const MR_CSharp_B *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::B *)(_this)).virtual_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_B_refs(MR_CSharp_B *_this, int *x, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_C *)new MR::CSharp::C(MR::CSharp::C());
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_C *)(new MR::CSharp::C[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_C *MR_CSharp_C_OffsetPtr(const MR_CSharp_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_C *)(((const MR::CSharp::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_OffsetMutablePtr(MR_CSharp_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_C *)(((MR::CSharp::C *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_A *MR_CSharp_C_UpcastTo_MR_CSharp_A(const MR_CSharp_C *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::C *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(MR_CSharp_C *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::C *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_C *MR_CSharp_C_DynamicDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_C *)(dynamic_cast<const MR::CSharp::C *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_MutableDynamicDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_C *)(dynamic_cast<MR::CSharp::C *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_C *MR_CSharp_C_DynamicDowncastFromOrFail_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_C *)std::addressof(dynamic_cast<const MR::CSharp::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_MutableDynamicDowncastFromOrFail_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_C *)std::addressof(dynamic_cast<MR::CSharp::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_C *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::C);
    return (MR_CSharp_C *)new MR::CSharp::C(MR::CSharp::C(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::C) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::C) MRBINDC_CLASSARG_END(_other, MR::CSharp::C))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_C_Destroy(const MR_CSharp_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::C *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_C_DestroyArray(const MR_CSharp_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::C *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_C *MR_CSharp_C_AssignFromAnother(MR_CSharp_C *_this, MR_C_PassBy _other_pass_by, MR_CSharp_C *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::C);
    return (MR_CSharp_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::C) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::C) MRBINDC_CLASSARG_END(_other, MR::CSharp::C))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_C_foo(MR_CSharp_C *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_C_bar(const MR_CSharp_C *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::C *)(_this)).bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_C_static_foo(void)
{
    MRBINDC_TRY(
    MR::CSharp::C::static_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_C_static_bar(int _1, int _2)
{
    MRBINDC_TRY(
    MR::CSharp::C::static_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_C_virtual_foo(MR_CSharp_C *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).virtual_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_C_virtual_bar(const MR_CSharp_C *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::C *)(_this)).virtual_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_C_refs(MR_CSharp_C *_this, int *x, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_D_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)new MR::CSharp::D(MR::CSharp::D());
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_D_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)(new MR::CSharp::D[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_D *MR_CSharp_D_OffsetPtr(const MR_CSharp_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_D *)(((const MR::CSharp::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_D_OffsetMutablePtr(MR_CSharp_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)(((MR::CSharp::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_D_ConstructFromAnother(const MR_CSharp_D *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)new MR::CSharp::D(MR::CSharp::D(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::D(*(MR::CSharp::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_D_Destroy(const MR_CSharp_D *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::D *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_D_DestroyArray(const MR_CSharp_D *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::D *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_D_AssignFromAnother(MR_CSharp_D *_this, const MR_CSharp_D *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::D *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::D(*(MR::CSharp::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_D_d1(const MR_CSharp_D *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::D *)(_this)).d1();
    ) // MRBINDC_TRY
}

void MR_CSharp_D_d2(MR_CSharp_D *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::D *)(_this)).d2();
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)new MR::CSharp::E(MR::CSharp::E());
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)(new MR::CSharp::E[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_E *MR_CSharp_E_OffsetPtr(const MR_CSharp_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_E *)(((const MR::CSharp::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_E_OffsetMutablePtr(MR_CSharp_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)(((MR::CSharp::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_E_ConstructFromAnother(const MR_CSharp_E *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)new MR::CSharp::E(MR::CSharp::E(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::E(*(MR::CSharp::E *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_E_Destroy(const MR_CSharp_E *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::E *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_E_DestroyArray(const MR_CSharp_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::E *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_E_AssignFromAnother(MR_CSharp_E *_this, const MR_CSharp_E *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::E *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::E(*(MR::CSharp::E *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_E_e1(const MR_CSharp_E *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::E *)(_this)).e1();
    ) // MRBINDC_TRY
}

void MR_CSharp_E_e2(MR_CSharp_E *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::E *)(_this)).e2();
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)new MR::CSharp::F(MR::CSharp::F());
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(new MR::CSharp::F[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_OffsetPtr(const MR_CSharp_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)(((const MR::CSharp::F *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_OffsetMutablePtr(MR_CSharp_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(((MR::CSharp::F *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_A *MR_CSharp_F_UpcastTo_MR_CSharp_A(const MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_F_MutableUpcastTo_MR_CSharp_A(MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_StaticDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_DynamicDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)(dynamic_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(dynamic_cast<MR::CSharp::F *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_DynamicDowncastFromOrFail_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)std::addressof(dynamic_cast<const MR::CSharp::F &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_MutableDynamicDowncastFromOrFail_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)std::addressof(dynamic_cast<MR::CSharp::F &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_D *MR_CSharp_F_UpcastTo_MR_CSharp_D(const MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_D *)(static_cast<const MR::CSharp::D *>(
        ((const MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_F_MutableUpcastTo_MR_CSharp_D(MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)(static_cast<MR::CSharp::D *>(
        ((MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_StaticDowncastFrom_MR_CSharp_D(const MR_CSharp_D *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D(MR_CSharp_D *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::D *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E *MR_CSharp_F_UpcastTo_MR_CSharp_E(const MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_E *)(static_cast<const MR::CSharp::E *>(
        ((const MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_F_MutableUpcastTo_MR_CSharp_E(MR_CSharp_F *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)(static_cast<MR::CSharp::E *>(
        ((MR::CSharp::F *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_F *MR_CSharp_F_StaticDowncastFrom_MR_CSharp_E(const MR_CSharp_E *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E(MR_CSharp_E *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::E *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_F *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::F);
    return (MR_CSharp_F *)new MR::CSharp::F(MR::CSharp::F(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::F) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::F) MRBINDC_CLASSARG_END(_other, MR::CSharp::F))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_F_Destroy(const MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::F *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_F_DestroyArray(const MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::F *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_F *MR_CSharp_F_AssignFromAnother(MR_CSharp_F *_this, MR_C_PassBy _other_pass_by, MR_CSharp_F *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::F);
    return (MR_CSharp_F *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::F) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::F) MRBINDC_CLASSARG_END(_other, MR::CSharp::F))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_F_foo(MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_bar(const MR_CSharp_F *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_F_static_foo(void)
{
    MRBINDC_TRY(
    MR::CSharp::F::static_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_static_bar(int _1, int _2)
{
    MRBINDC_TRY(
    MR::CSharp::F::static_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_F_virtual_foo(MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).virtual_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_virtual_bar(const MR_CSharp_F *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).virtual_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_F_refs(MR_CSharp_F *_this, int *x, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_F_d1(const MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).d1();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_d2(MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).d2();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_e1(const MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).e1();
    ) // MRBINDC_TRY
}

void MR_CSharp_F_e2(MR_CSharp_F *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).e2();
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)new MR::CSharp::G(MR::CSharp::G());
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)(new MR::CSharp::G[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_G *MR_CSharp_G_OffsetPtr(const MR_CSharp_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_G *)(((const MR::CSharp::G *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_OffsetMutablePtr(MR_CSharp_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)(((MR::CSharp::G *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_A *MR_CSharp_G_UpcastTo_MR_CSharp_A(const MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_A *MR_CSharp_G_MutableUpcastTo_MR_CSharp_A(MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_G *MR_CSharp_G_StaticDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_G *)(static_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)(static_cast<MR::CSharp::G *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_G *MR_CSharp_G_DynamicDowncastFrom_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_G *)(dynamic_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)(dynamic_cast<MR::CSharp::G *>(
        ((MR::CSharp::A *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_G *MR_CSharp_G_DynamicDowncastFromOrFail_MR_CSharp_A(const MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_G *)std::addressof(dynamic_cast<const MR::CSharp::G &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_MutableDynamicDowncastFromOrFail_MR_CSharp_A(MR_CSharp_A *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)std::addressof(dynamic_cast<MR::CSharp::G &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_D *MR_CSharp_G_UpcastTo_MR_CSharp_D(const MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_D *)(static_cast<const MR::CSharp::D *>(
        ((const MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_D *MR_CSharp_G_MutableUpcastTo_MR_CSharp_D(MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_D *)(static_cast<MR::CSharp::D *>(
        ((MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_G *MR_CSharp_G_StaticDowncastFrom_MR_CSharp_D(const MR_CSharp_D *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_G *)(static_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::D *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D(MR_CSharp_D *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_G *)(static_cast<MR::CSharp::G *>(
        ((MR::CSharp::D *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E *MR_CSharp_G_UpcastTo_MR_CSharp_E(const MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_E *)(static_cast<const MR::CSharp::E *>(
        ((const MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E *MR_CSharp_G_MutableUpcastTo_MR_CSharp_E(MR_CSharp_G *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_E *)(static_cast<MR::CSharp::E *>(
        ((MR::CSharp::G *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::G);
    return (MR_CSharp_G *)new MR::CSharp::G(MR::CSharp::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::G) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::G) MRBINDC_CLASSARG_END(_other, MR::CSharp::G))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_G_Destroy(const MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::G *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_G_DestroyArray(const MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::G *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_G *MR_CSharp_G_AssignFromAnother(MR_CSharp_G *_this, MR_C_PassBy _other_pass_by, MR_CSharp_G *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::G);
    return (MR_CSharp_G *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::G) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::G) MRBINDC_CLASSARG_END(_other, MR::CSharp::G))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_G_foo(MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_bar(const MR_CSharp_G *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_G_static_foo(void)
{
    MRBINDC_TRY(
    MR::CSharp::G::static_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_static_bar(int _1, int _2)
{
    MRBINDC_TRY(
    MR::CSharp::G::static_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_G_virtual_foo(MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).virtual_foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_virtual_bar(const MR_CSharp_G *_this, int _1, int _2)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).virtual_bar(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_G_refs(MR_CSharp_G *_this, int *x, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_G_d1(const MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).d1();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_d2(MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).d2();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_e1(const MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).e1();
    ) // MRBINDC_TRY
}

void MR_CSharp_G_e2(MR_CSharp_G *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).e2();
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(MR::CSharp::Trivial());
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_Trivial *)(new MR::CSharp::Trivial[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetPtr(const MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_Trivial *)(((const MR::CSharp::Trivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetMutablePtr(MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_Trivial *)(((MR::CSharp::Trivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_Trivial_ConstructFromAnother(const MR_CSharp_Trivial *_other)
{
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(MR::CSharp::Trivial(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)_other))
    ));
}

void MR_CSharp_Trivial_Destroy(const MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::Trivial *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_Trivial_DestroyArray(const MR_CSharp_Trivial *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::Trivial *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_Trivial_AssignFromAnother(MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *_other)
{
    return (MR_CSharp_Trivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Trivial *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)_other))
    ));
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_TrivialDerived *)new MR::CSharp::TrivialDerived(MR::CSharp::TrivialDerived());
    ) // MRBINDC_TRY
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_TrivialDerived *)(new MR::CSharp::TrivialDerived[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetPtr(const MR_CSharp_TrivialDerived *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TrivialDerived *)(((const MR::CSharp::TrivialDerived *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetMutablePtr(MR_CSharp_TrivialDerived *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TrivialDerived *)(((MR::CSharp::TrivialDerived *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_ConstructFromAnother(const MR_CSharp_TrivialDerived *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TrivialDerived *)new MR::CSharp::TrivialDerived(MR::CSharp::TrivialDerived(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TrivialDerived(*(MR::CSharp::TrivialDerived *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_TrivialDerived_Destroy(const MR_CSharp_TrivialDerived *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TrivialDerived *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TrivialDerived_DestroyArray(const MR_CSharp_TrivialDerived *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TrivialDerived *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_AssignFromAnother(MR_CSharp_TrivialDerived *_this, const MR_CSharp_TrivialDerived *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TrivialDerived *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TrivialDerived *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TrivialDerived(*(MR::CSharp::TrivialDerived *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(::MR::CSharp::test_class_trivial(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)),
        (b ? MR::CSharp::Trivial(*(MR::CSharp::Trivial *)b) : static_cast<MR::CSharp::Trivial>(MR::CSharp::Trivial{}))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_class_trivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::Trivial *)(a)),
        (b ? *(MR::CSharp::Trivial *)(b) : static_cast<MR::CSharp::Trivial &>(default_trivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_class_trivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::Trivial *)(a)),
        (b ? *(const MR::CSharp::Trivial *)(b) : static_cast<const MR::CSharp::Trivial &>(default_trivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_rref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_trivial_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::Trivial *)(a))),
        (b ? std::move(*(MR::CSharp::Trivial *)(b)) : static_cast<MR::CSharp::Trivial &&>((MR::CSharp::Trivial &&)default_trivial))
    )));
    ) // MRBINDC_TRY
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_crref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_trivial_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::Trivial *)(a))),
        (b ? std::move(*(const MR::CSharp::Trivial *)(b)) : static_cast<const MR::CSharp::Trivial &&>((MR::CSharp::Trivial &&)default_trivial))
    )));
    ) // MRBINDC_TRY
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ptr(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b, MR_CSharp_Trivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)(::MR::CSharp::test_class_trivial_ptr(
        ((MR::CSharp::Trivial *)a),
        ((MR::CSharp::Trivial *)b),
        (c ? (MR::CSharp::Trivial *)(*c) : static_cast<MR::CSharp::Trivial *>(&default_trivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cptr(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b, const MR_CSharp_Trivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)(::MR::CSharp::test_class_trivial_cptr(
        ((const MR::CSharp::Trivial *)a),
        ((const MR::CSharp::Trivial *)b),
        (c ? (const MR::CSharp::Trivial *)(*c) : static_cast<const MR::CSharp::Trivial *>(&default_trivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(MR::CSharp::NonTrivial());
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivial *)(new MR::CSharp::NonTrivial[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetPtr(const MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NonTrivial *)(((const MR::CSharp::NonTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetMutablePtr(MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivial *)(((MR::CSharp::NonTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivial);
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(MR::CSharp::NonTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivial))
    ));
}

void MR_CSharp_NonTrivial_Destroy(const MR_CSharp_NonTrivial *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NonTrivial *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NonTrivial_DestroyArray(const MR_CSharp_NonTrivial *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NonTrivial *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_AssignFromAnother(MR_CSharp_NonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivial);
    return (MR_CSharp_NonTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivial *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivial))
    ));
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialDerived *)new MR::CSharp::NonTrivialDerived(MR::CSharp::NonTrivialDerived());
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialDerived *)(new MR::CSharp::NonTrivialDerived[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetPtr(const MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NonTrivialDerived *)(((const MR::CSharp::NonTrivialDerived *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetMutablePtr(MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialDerived *)(((MR::CSharp::NonTrivialDerived *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivialDerived);
    return (MR_CSharp_NonTrivialDerived *)new MR::CSharp::NonTrivialDerived(MR::CSharp::NonTrivialDerived(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialDerived))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NonTrivialDerived_Destroy(const MR_CSharp_NonTrivialDerived *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NonTrivialDerived *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NonTrivialDerived_DestroyArray(const MR_CSharp_NonTrivialDerived *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NonTrivialDerived *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_AssignFromAnother(MR_CSharp_NonTrivialDerived *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivialDerived);
    return (MR_CSharp_NonTrivialDerived *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialDerived *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialDerived))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, MR::CSharp::NonTrivial);
    MRBINDC_CLASSARG_GUARD(b, MR::CSharp::NonTrivial);
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(::MR::CSharp::test_class_nontrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(a, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(a, MR::CSharp::NonTrivial)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (MR::CSharp::NonTrivial{}), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(b, MR::CSharp::NonTrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_class_nontrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::NonTrivial *)(a)),
        (b ? *(MR::CSharp::NonTrivial *)(b) : static_cast<MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_class_nontrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::NonTrivial *)(a)),
        (b ? *(const MR::CSharp::NonTrivial *)(b) : static_cast<const MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_rref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_nontrivial_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::NonTrivial *)(a))),
        (b ? std::move(*(MR::CSharp::NonTrivial *)(b)) : static_cast<MR::CSharp::NonTrivial &&>((MR::CSharp::NonTrivial &&)default_nontrivial))
    )));
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_crref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_nontrivial_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::NonTrivial *)(a))),
        (b ? std::move(*(const MR::CSharp::NonTrivial *)(b)) : static_cast<const MR::CSharp::NonTrivial &&>((MR::CSharp::NonTrivial &&)default_nontrivial))
    )));
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ptr(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b, MR_CSharp_NonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)(::MR::CSharp::test_class_nontrivial_ptr(
        ((MR::CSharp::NonTrivial *)a),
        ((MR::CSharp::NonTrivial *)b),
        (c ? (MR::CSharp::NonTrivial *)(*c) : static_cast<MR::CSharp::NonTrivial *>(&default_nontrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cptr(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b, const MR_CSharp_NonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)(::MR::CSharp::test_class_nontrivial_cptr(
        ((const MR::CSharp::NonTrivial *)a),
        ((const MR::CSharp::NonTrivial *)b),
        (c ? (const MR::CSharp::NonTrivial *)(*c) : static_cast<const MR::CSharp::NonTrivial *>(&default_nontrivial))
    ));
    ) // MRBINDC_TRY
}

void *MR_CSharp_test_void_ptr(void *a, void *b, void *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_void_ptr(
        a,
        b,
        (c ? *c : static_cast<void *>((void *)42))
    );
    ) // MRBINDC_TRY
}

const void *MR_CSharp_test_void_cptr(const void *a, const void *b, const void *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_void_cptr(
        a,
        b,
        (c ? *c : static_cast<const void *>((const void *)42))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SA *)new MR::CSharp::SA(MR::CSharp::SA());
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SA *)(new MR::CSharp::SA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_SA *MR_CSharp_SA_OffsetPtr(const MR_CSharp_SA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SA *)(((const MR::CSharp::SA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SA_OffsetMutablePtr(MR_CSharp_SA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SA *)(((MR::CSharp::SA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SA_ConstructFromAnother(const MR_CSharp_SA *_other)
{
    return (MR_CSharp_SA *)new MR::CSharp::SA(MR::CSharp::SA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SA(*(MR::CSharp::SA *)_other))
    ));
}

void MR_CSharp_SA_Destroy(const MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SA_DestroyArray(const MR_CSharp_SA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SA_AssignFromAnother(MR_CSharp_SA *_this, const MR_CSharp_SA *_other)
{
    return (MR_CSharp_SA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SA(*(MR::CSharp::SA *)_other))
    ));
}

const MR_C_std_string *MR_CSharp_SB_Get_s(const MR_CSharp_SB *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::SB *)(_this)).s);
}

void MR_CSharp_SB_Set_s(MR_CSharp_SB *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SB *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_SB_GetMutable_s(MR_CSharp_SB *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SB *)(_this)).s);
}

MR_CSharp_SB *MR_CSharp_SB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB());
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SB *)(new MR::CSharp::SB[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SB_ConstructFrom(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB{
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_SB *MR_CSharp_SB_OffsetPtr(const MR_CSharp_SB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SB *)(((const MR::CSharp::SB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SB_OffsetMutablePtr(MR_CSharp_SB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SB *)(((MR::CSharp::SB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SB);
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SB) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SB) MRBINDC_CLASSARG_END(_other, MR::CSharp::SB))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SB_Destroy(const MR_CSharp_SB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SB_DestroyArray(const MR_CSharp_SB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SB_AssignFromAnother(MR_CSharp_SB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SB);
    return (MR_CSharp_SB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SB *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SB) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SB) MRBINDC_CLASSARG_END(_other, MR::CSharp::SB))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_SC_Get_s(const MR_CSharp_SC *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::SC *)(_this)).s);
}

void MR_CSharp_SC_Set_s(MR_CSharp_SC *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SC *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_SC_GetMutable_s(MR_CSharp_SC *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SC *)(_this)).s);
}

MR_CSharp_SC *MR_CSharp_SC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SC *)new MR::CSharp::SC(MR::CSharp::SC());
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SC *)(new MR::CSharp::SC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_SC *MR_CSharp_SC_OffsetPtr(const MR_CSharp_SC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SC *)(((const MR::CSharp::SC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_OffsetMutablePtr(MR_CSharp_SC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SC *)(((MR::CSharp::SC *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_SA *MR_CSharp_SC_UpcastTo_MR_CSharp_SA(const MR_CSharp_SC *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SA *)(static_cast<const MR::CSharp::SA *>(
        ((const MR::CSharp::SC *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SA *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA(MR_CSharp_SC *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SA *)(static_cast<MR::CSharp::SA *>(
        ((MR::CSharp::SC *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SC *MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SA(const MR_CSharp_SA *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SC *)(static_cast<const MR::CSharp::SC *>(
        ((const MR::CSharp::SA *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SA(MR_CSharp_SA *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SC *)(static_cast<MR::CSharp::SC *>(
        ((MR::CSharp::SA *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SB *MR_CSharp_SC_UpcastTo_MR_CSharp_SB(const MR_CSharp_SC *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SB *)(static_cast<const MR::CSharp::SB *>(
        ((const MR::CSharp::SC *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SB *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB(MR_CSharp_SC *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SB *)(static_cast<MR::CSharp::SB *>(
        ((MR::CSharp::SC *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SC *MR_CSharp_SC_StaticDowncastFrom_MR_CSharp_SB(const MR_CSharp_SB *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SC *)(static_cast<const MR::CSharp::SC *>(
        ((const MR::CSharp::SB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SB(MR_CSharp_SB *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SC *)(static_cast<MR::CSharp::SC *>(
        ((MR::CSharp::SB *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SC);
    return (MR_CSharp_SC *)new MR::CSharp::SC(MR::CSharp::SC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SC) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SC) MRBINDC_CLASSARG_END(_other, MR::CSharp::SC))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SC_Destroy(const MR_CSharp_SC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SC_DestroyArray(const MR_CSharp_SC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SC *MR_CSharp_SC_AssignFromAnother(MR_CSharp_SC *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SC);
    return (MR_CSharp_SC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SC *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SC) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SC) MRBINDC_CLASSARG_END(_other, MR::CSharp::SC))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SD *)new MR::CSharp::SD(MR::CSharp::SD());
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SD *)(new MR::CSharp::SD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_SD *MR_CSharp_SD_OffsetPtr(const MR_CSharp_SD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SD *)(((const MR::CSharp::SD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SD_OffsetMutablePtr(MR_CSharp_SD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SD *)(((MR::CSharp::SD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SD_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SD);
    return (MR_CSharp_SD *)new MR::CSharp::SD(MR::CSharp::SD(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SD) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SD) MRBINDC_CLASSARG_END(_other, MR::CSharp::SD))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SD_Destroy(const MR_CSharp_SD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SD_DestroyArray(const MR_CSharp_SD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SD_AssignFromAnother(MR_CSharp_SD *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SD);
    return (MR_CSharp_SD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SD *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SD) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SD) MRBINDC_CLASSARG_END(_other, MR::CSharp::SD))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_SE_Get_s(const MR_CSharp_SE *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::SE *)(_this)).s);
}

void MR_CSharp_SE_Set_s(MR_CSharp_SE *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SE *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_SE_GetMutable_s(MR_CSharp_SE *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SE *)(_this)).s);
}

MR_CSharp_SE *MR_CSharp_SE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE());
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)(new MR::CSharp::SE[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SE_ConstructFrom(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE{
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_SE *MR_CSharp_SE_OffsetPtr(const MR_CSharp_SE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SE *)(((const MR::CSharp::SE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SE_OffsetMutablePtr(MR_CSharp_SE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)(((MR::CSharp::SE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SE);
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SE) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SE) MRBINDC_CLASSARG_END(_other, MR::CSharp::SE))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SE_Destroy(const MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SE_DestroyArray(const MR_CSharp_SE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SE_AssignFromAnother(MR_CSharp_SE *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SE);
    return (MR_CSharp_SE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SE *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SE) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SE) MRBINDC_CLASSARG_END(_other, MR::CSharp::SE))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_SF_Get_s(const MR_CSharp_SF *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::SF *)(_this)).s);
}

void MR_CSharp_SF_Set_s(MR_CSharp_SF *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SF *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_SF_GetMutable_s(MR_CSharp_SF *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SF *)(_this)).s);
}

MR_CSharp_SF *MR_CSharp_SF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)new MR::CSharp::SF(MR::CSharp::SF());
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)(new MR::CSharp::SF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_SF *MR_CSharp_SF_OffsetPtr(const MR_CSharp_SF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SF *)(((const MR::CSharp::SF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_OffsetMutablePtr(MR_CSharp_SF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)(((MR::CSharp::SF *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_SD *MR_CSharp_SF_UpcastTo_MR_CSharp_SD(const MR_CSharp_SF *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SD *)(static_cast<const MR::CSharp::SD *>(
        ((const MR::CSharp::SF *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SD *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD(MR_CSharp_SF *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SD *)(static_cast<MR::CSharp::SD *>(
        ((MR::CSharp::SF *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SF *MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SD(const MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SF *)(static_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SD *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SD(MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)(static_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SD *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SF *MR_CSharp_SF_DynamicDowncastFrom_MR_CSharp_SD(const MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SF *)(dynamic_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SD *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_MutableDynamicDowncastFrom_MR_CSharp_SD(MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)(dynamic_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SD *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SF *MR_CSharp_SF_DynamicDowncastFromOrFail_MR_CSharp_SD(const MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SF *)std::addressof(dynamic_cast<const MR::CSharp::SF &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::SD *)(object))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_MutableDynamicDowncastFromOrFail_MR_CSharp_SD(MR_CSharp_SD *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)std::addressof(dynamic_cast<MR::CSharp::SF &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::SD *)(object))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SE *MR_CSharp_SF_UpcastTo_MR_CSharp_SE(const MR_CSharp_SF *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SE *)(static_cast<const MR::CSharp::SE *>(
        ((const MR::CSharp::SF *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SE *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE(MR_CSharp_SF *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SE *)(static_cast<MR::CSharp::SE *>(
        ((MR::CSharp::SF *)object)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_SF *MR_CSharp_SF_StaticDowncastFrom_MR_CSharp_SE(const MR_CSharp_SE *object)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SF *)(static_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SE *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SE(MR_CSharp_SE *object)
{
    MRBINDC_TRY(
    return (MR_CSharp_SF *)(static_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SE *)object)
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SF);
    return (MR_CSharp_SF *)new MR::CSharp::SF(MR::CSharp::SF(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SF) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SF) MRBINDC_CLASSARG_END(_other, MR::CSharp::SF))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SF_Destroy(const MR_CSharp_SF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SF_DestroyArray(const MR_CSharp_SF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SF *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_SF *MR_CSharp_SF_AssignFromAnother(MR_CSharp_SF *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::SF);
    return (MR_CSharp_SF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SF *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SF) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SF) MRBINDC_CLASSARG_END(_other, MR::CSharp::SF))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_CSharp_mark_se_as_shared(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(::MR::CSharp::mark_se_as_shared());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, std::shared_ptr<MR::CSharp::SA>);
    MRBINDC_CLASSARG_GUARD(b, std::shared_ptr<MR::CSharp::SA>);
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(::MR::CSharp::test_shptr(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(a, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(a, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(a, std::shared_ptr<MR::CSharp::SA>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(b, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(b, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_shptr), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(b, std::shared_ptr<MR::CSharp::SA>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_rref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shptr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(std::shared_ptr<MR::CSharp::SA> *)(a))),
        (b ? std::move(*(std::shared_ptr<MR::CSharp::SA> *)(b)) : static_cast<std::shared_ptr<MR::CSharp::SA> &&>((std::shared_ptr<MR::CSharp::SA> &&)default_shptr))
    )));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_crref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shptr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const std::shared_ptr<MR::CSharp::SA> *)(a))),
        (b ? std::move(*(const std::shared_ptr<MR::CSharp::SA> *)(b)) : static_cast<const std::shared_ptr<MR::CSharp::SA> &&>((std::shared_ptr<MR::CSharp::SA> &&)default_shptr))
    )));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ptr(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)(::MR::CSharp::test_shptr_ptr(
        ((std::shared_ptr<MR::CSharp::SA> *)a),
        (b ? (std::shared_ptr<MR::CSharp::SA> *)(*b) : static_cast<std::shared_ptr<MR::CSharp::SA> *>(&default_shptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cptr(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)(::MR::CSharp::test_shptr_cptr(
        ((const std::shared_ptr<MR::CSharp::SA> *)a),
        (b ? (const std::shared_ptr<MR::CSharp::SA> *)(*b) : static_cast<const std::shared_ptr<MR::CSharp::SA> *>(&default_shptr))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, std::shared_ptr<const MR::CSharp::SA>);
    MRBINDC_CLASSARG_GUARD(b, std::shared_ptr<const MR::CSharp::SA>);
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(::MR::CSharp::test_shcptr(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(a, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(a, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(a, std::shared_ptr<const MR::CSharp::SA>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(b, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(b, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_shcptr), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(b, std::shared_ptr<const MR::CSharp::SA>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_rref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shcptr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(std::shared_ptr<const MR::CSharp::SA> *)(a))),
        (b ? std::move(*(std::shared_ptr<const MR::CSharp::SA> *)(b)) : static_cast<std::shared_ptr<const MR::CSharp::SA> &&>((std::shared_ptr<const MR::CSharp::SA> &&)default_shcptr))
    )));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_crref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shcptr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const std::shared_ptr<const MR::CSharp::SA> *)(a))),
        (b ? std::move(*(const std::shared_ptr<const MR::CSharp::SA> *)(b)) : static_cast<const std::shared_ptr<const MR::CSharp::SA> &&>((std::shared_ptr<const MR::CSharp::SA> &&)default_shcptr))
    )));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ptr(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)(::MR::CSharp::test_shcptr_ptr(
        ((std::shared_ptr<const MR::CSharp::SA> *)a),
        (b ? (std::shared_ptr<const MR::CSharp::SA> *)(*b) : static_cast<std::shared_ptr<const MR::CSharp::SA> *>(&default_shcptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cptr(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)(::MR::CSharp::test_shcptr_cptr(
        ((const std::shared_ptr<const MR::CSharp::SA> *)a),
        (b ? (const std::shared_ptr<const MR::CSharp::SA> *)(*b) : static_cast<const std::shared_ptr<const MR::CSharp::SA> *>(&default_shcptr))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_SG_Destroy(const MR_CSharp_SG *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::SG *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_SG_DestroyArray(const MR_CSharp_SG *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::SG *)_this);
    ) // MRBINDC_TRY
}

const MR_CSharp_SG *MR_CSharp_SG_OffsetPtr(const MR_CSharp_SG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_SG *)(((const MR::CSharp::SG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_SG *MR_CSharp_SG_OffsetMutablePtr(MR_CSharp_SG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_SG *)(((MR::CSharp::SG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_SG *MR_CSharp_mark_sg_as_shared(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_SG *)new std::shared_ptr<MR::CSharp::SG>(::MR::CSharp::mark_sg_as_shared());
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_test_string(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)new std::string(::MR::CSharp::test_string(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string(default_string))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_test_string_ref(MR_C_std_string *a, MR_C_std_string *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)std::addressof(::MR::CSharp::test_string_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string *)(a)),
        (b ? *(std::string *)(b) : static_cast<std::string &>(default_string))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_test_string_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)std::addressof(::MR::CSharp::test_string_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string(default_string))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_test_string_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_string_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string((std::string &&)default_string))
    )));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_test_string_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_string_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string((std::string &&)default_string))
    )));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_test_string_ptr(MR_C_std_string *a, MR_C_std_string *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)(::MR::CSharp::test_string_ptr(
        ((std::string *)a),
        (b ? (std::string *)(*b) : static_cast<std::string *>(&default_string))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_test_string_cptr(const MR_C_std_string *a, const MR_C_std_string *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)(::MR::CSharp::test_string_cptr(
        ((const std::string *)a),
        (b ? (const std::string *)(*b) : static_cast<const std::string *>(&default_string))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_CSharp_test_stringview(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)new std::string_view(::MR::CSharp::test_stringview(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view(default_stringview))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_CSharp_test_stringview_ref(MR_C_std_string_view *a, MR_C_std_string_view *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)std::addressof(::MR::CSharp::test_stringview_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string_view *)(a)),
        (b ? *(std::string_view *)(b) : static_cast<std::string_view &>(default_stringview))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string_view *MR_CSharp_test_stringview_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)std::addressof(::MR::CSharp::test_stringview_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view(default_stringview))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_CSharp_test_stringview_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_stringview_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view((std::string_view &&)default_stringview))
    )));
    ) // MRBINDC_TRY
}

const MR_C_std_string_view *MR_CSharp_test_stringview_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_stringview_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view((std::string_view &&)default_stringview))
    )));
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_CSharp_test_stringview_ptr(MR_C_std_string_view *a, MR_C_std_string_view *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)(::MR::CSharp::test_stringview_ptr(
        ((std::string_view *)a),
        (b ? (std::string_view *)(*b) : static_cast<std::string_view *>(&default_stringview))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string_view *MR_CSharp_test_stringview_cptr(const MR_C_std_string_view *a, const MR_C_std_string_view *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)(::MR::CSharp::test_stringview_cptr(
        ((const std::string_view *)a),
        (b ? (const std::string_view *)(*b) : static_cast<const std::string_view *>(&default_stringview))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (MR_C_std_filesystem_path *)new std::filesystem::path(::MR::CSharp::test_fspath(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path(default_fspath))
    ));
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_ref(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_filesystem_path *)std::addressof(::MR::CSharp::test_fspath_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::filesystem::path *)(a)),
        (b ? *(std::filesystem::path *)(b) : static_cast<std::filesystem::path &>(default_fspath))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (const MR_C_std_filesystem_path *)std::addressof(::MR::CSharp::test_fspath_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path(default_fspath))
    ));
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (MR_C_std_filesystem_path *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_fspath_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path((std::filesystem::path &&)default_fspath))
    )));
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (const MR_C_std_filesystem_path *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_fspath_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path((std::filesystem::path &&)default_fspath))
    )));
    ) // MRBINDC_IGNORE_DEPRECATION
    ) // MRBINDC_TRY
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_ptr(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_filesystem_path *)(::MR::CSharp::test_fspath_ptr(
        ((std::filesystem::path *)a),
        (b ? (std::filesystem::path *)(*b) : static_cast<std::filesystem::path *>(&default_fspath))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cptr(const MR_C_std_filesystem_path *a, const MR_C_std_filesystem_path *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_filesystem_path *)(::MR::CSharp::test_fspath_cptr(
        ((const std::filesystem::path *)a),
        (b ? (const std::filesystem::path *)(*b) : static_cast<const std::filesystem::path *>(&default_fspath))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer *)new MR::CSharp::Outer(MR::CSharp::Outer());
    ) // MRBINDC_TRY
}

MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer *)(new MR::CSharp::Outer[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_Outer *MR_CSharp_Outer_OffsetPtr(const MR_CSharp_Outer *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_Outer *)(((const MR::CSharp::Outer *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer *MR_CSharp_Outer_OffsetMutablePtr(MR_CSharp_Outer *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer *)(((MR::CSharp::Outer *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer *MR_CSharp_Outer_ConstructFromAnother(const MR_CSharp_Outer *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer *)new MR::CSharp::Outer(MR::CSharp::Outer(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer(*(MR::CSharp::Outer *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_Destroy(const MR_CSharp_Outer *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::Outer *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_DestroyArray(const MR_CSharp_Outer *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::Outer *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer *MR_CSharp_Outer_AssignFromAnother(MR_CSharp_Outer *_this, const MR_CSharp_Outer *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer(*(MR::CSharp::Outer *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_foo(MR_CSharp_Outer *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer *)(_this)).foo();
    ) // MRBINDC_TRY
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer_Inner *)new MR::CSharp::Outer::Inner(MR::CSharp::Outer::Inner());
    ) // MRBINDC_TRY
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer_Inner *)(new MR::CSharp::Outer::Inner[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetPtr(const MR_CSharp_Outer_Inner *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_Outer_Inner *)(((const MR::CSharp::Outer::Inner *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetMutablePtr(MR_CSharp_Outer_Inner *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer_Inner *)(((MR::CSharp::Outer::Inner *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_ConstructFromAnother(const MR_CSharp_Outer_Inner *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer_Inner *)new MR::CSharp::Outer::Inner(MR::CSharp::Outer::Inner(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer::Inner(*(MR::CSharp::Outer::Inner *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_Inner_Destroy(const MR_CSharp_Outer_Inner *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::Outer::Inner *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_Inner_DestroyArray(const MR_CSharp_Outer_Inner *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::Outer::Inner *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_AssignFromAnother(MR_CSharp_Outer_Inner *_this, const MR_CSharp_Outer_Inner *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_Outer_Inner *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer::Inner(*(MR::CSharp::Outer::Inner *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_Outer_Inner_bar(MR_CSharp_Outer_Inner *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).bar();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_TestFields_Get_static_i(void)
{
    return std::addressof(MR::CSharp::TestFields::static_i);
}

void MR_CSharp_TestFields_Set_static_i(int value)
{
    MR::CSharp::TestFields::static_i = value;
}

int *MR_CSharp_TestFields_GetMutable_static_i(void)
{
    return std::addressof(MR::CSharp::TestFields::static_i);
}

const int *MR_CSharp_TestFields_Get_static_const_i(void)
{
    return std::addressof(MR::CSharp::TestFields::static_const_i);
}

int *MR_CSharp_TestFields_Get_static_i_ref(void)
{
    return std::addressof(MR::CSharp::TestFields::static_i_ref);
}

const int *MR_CSharp_TestFields_Get_static_const_i_ref(void)
{
    return std::addressof(MR::CSharp::TestFields::static_const_i_ref);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_static_s(void)
{
    return (const MR_C_std_string *)std::addressof(MR::CSharp::TestFields::static_s);
}

void MR_CSharp_TestFields_Set_static_s(const char *value, const char *value_end)
{
    MR::CSharp::TestFields::static_s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_TestFields_GetMutable_static_s(void)
{
    return (MR_C_std_string *)std::addressof(MR::CSharp::TestFields::static_s);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_static_const_s(void)
{
    return (const MR_C_std_string *)std::addressof(MR::CSharp::TestFields::static_const_s);
}

MR_C_std_string *MR_CSharp_TestFields_Get_static_s_ref(void)
{
    return (MR_C_std_string *)std::addressof(MR::CSharp::TestFields::static_s_ref);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_static_const_s_ref(void)
{
    return (const MR_C_std_string *)std::addressof(MR::CSharp::TestFields::static_const_s_ref);
}

const int *MR_CSharp_TestFields_Get_i(const MR_CSharp_TestFields *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).i);
}

void MR_CSharp_TestFields_Set_i(MR_CSharp_TestFields *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestFields *)(_this)).i = value;
}

int *MR_CSharp_TestFields_GetMutable_i(MR_CSharp_TestFields *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestFields *)(_this)).i);
}

const int *MR_CSharp_TestFields_Get_const_i(const MR_CSharp_TestFields *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).const_i);
}

int *MR_CSharp_TestFields_Get_i_ref(const MR_CSharp_TestFields *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).i_ref);
}

const int *MR_CSharp_TestFields_Get_const_i_ref(const MR_CSharp_TestFields *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).const_i_ref);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_s(const MR_CSharp_TestFields *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).s);
}

void MR_CSharp_TestFields_Set_s(MR_CSharp_TestFields *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestFields *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_TestFields_GetMutable_s(MR_CSharp_TestFields *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestFields *)(_this)).s);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_const_s(const MR_CSharp_TestFields *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).const_s);
}

MR_C_std_string *MR_CSharp_TestFields_Get_s_ref(const MR_CSharp_TestFields *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).s_ref);
}

const MR_C_std_string *MR_CSharp_TestFields_Get_const_s_ref(const MR_CSharp_TestFields *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestFields *)(_this)).const_s_ref);
}

MR_CSharp_TestFields *MR_CSharp_TestFields_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestFields *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::TestFields);
    return (MR_CSharp_TestFields *)new MR::CSharp::TestFields(MR::CSharp::TestFields(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestFields), MR::CSharp::TestFields) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::TestFields), MR::CSharp::TestFields) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestFields) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestFields) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestFields))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_TestFields *MR_CSharp_TestFields_ConstructFrom(int i, int const_i, int *i_ref, const int *const_i_ref, const char *s, const char *s_end, const char *const_s, const char *const_s_end, MR_C_std_string *s_ref, const char *const_s_ref, const char *const_s_ref_end)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestFields *)new MR::CSharp::TestFields(MR::CSharp::TestFields{
        i,
        const_i,
        ((i_ref ? void() : throw std::runtime_error("Parameter `i_ref` can not be null.")), *i_ref),
        ((const_i_ref ? void() : throw std::runtime_error("Parameter `const_i_ref` can not be null.")), *const_i_ref),
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s))),
        ((const_s ? void() : throw std::runtime_error("Parameter `const_s` can not be null.")), (const_s_end ? std::string(const_s, const_s_end) : std::string(const_s))),
        ((s_ref ? void() : throw std::runtime_error("Parameter `s_ref` can not be null.")), *(std::string *)(s_ref)),
        ((const_s_ref ? void() : throw std::runtime_error("Parameter `const_s_ref` can not be null.")), (const_s_ref_end ? std::string(const_s_ref, const_s_ref_end) : std::string(const_s_ref)))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetPtr(const MR_CSharp_TestFields *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestFields *)(((const MR::CSharp::TestFields *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetMutablePtr(MR_CSharp_TestFields *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestFields *)(((MR::CSharp::TestFields *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestFields_Destroy(const MR_CSharp_TestFields *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestFields *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestFields_DestroyArray(const MR_CSharp_TestFields *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestFields *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestConstness *)new MR::CSharp::TestConstness(MR::CSharp::TestConstness());
    ) // MRBINDC_TRY
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestConstness *)(new MR::CSharp::TestConstness[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetPtr(const MR_CSharp_TestConstness *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestConstness *)(((const MR::CSharp::TestConstness *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetMutablePtr(MR_CSharp_TestConstness *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestConstness *)(((MR::CSharp::TestConstness *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_ConstructFromAnother(const MR_CSharp_TestConstness *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestConstness *)new MR::CSharp::TestConstness(MR::CSharp::TestConstness(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestConstness(*(MR::CSharp::TestConstness *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_TestConstness_Destroy(const MR_CSharp_TestConstness *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestConstness *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestConstness_DestroyArray(const MR_CSharp_TestConstness *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestConstness *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_AssignFromAnother(MR_CSharp_TestConstness *_this, const MR_CSharp_TestConstness *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestConstness *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestConstness *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestConstness(*(MR::CSharp::TestConstness *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_TestConstness_foo_mut(MR_CSharp_TestConstness *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestConstness *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_TestConstness_foo(const MR_CSharp_TestConstness *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestConstness *)(_this)).foo();
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(MR::CSharp::IncrDecrA());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)(new MR::CSharp::IncrDecrA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetPtr(const MR_CSharp_IncrDecrA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrA *)(((const MR::CSharp::IncrDecrA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetMutablePtr(MR_CSharp_IncrDecrA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)(((MR::CSharp::IncrDecrA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_ConstructFromAnother(const MR_CSharp_IncrDecrA *_other)
{
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(MR::CSharp::IncrDecrA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrA(*(MR::CSharp::IncrDecrA *)_other))
    ));
}

void MR_CSharp_IncrDecrA_Destroy(const MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrA_DestroyArray(const MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_AssignFromAnother(MR_CSharp_IncrDecrA *_this, const MR_CSharp_IncrDecrA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrA(*(MR::CSharp::IncrDecrA *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_C_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_C_post_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_C_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrA *MR_C_post_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(MR::CSharp::IncrDecrB());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)(new MR::CSharp::IncrDecrB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetPtr(const MR_CSharp_IncrDecrB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrB *)(((const MR::CSharp::IncrDecrB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetMutablePtr(MR_CSharp_IncrDecrB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)(((MR::CSharp::IncrDecrB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_ConstructFromAnother(const MR_CSharp_IncrDecrB *_other)
{
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(MR::CSharp::IncrDecrB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrB(*(MR::CSharp::IncrDecrB *)_other))
    ));
}

void MR_CSharp_IncrDecrB_Destroy(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrB_DestroyArray(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_AssignFromAnother(MR_CSharp_IncrDecrB *_this, const MR_CSharp_IncrDecrB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrB(*(MR::CSharp::IncrDecrB *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrB *MR_C_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_C_post_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrB *MR_C_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrB *MR_C_post_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(MR::CSharp::IncrDecrC());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)(new MR::CSharp::IncrDecrC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetPtr(const MR_CSharp_IncrDecrC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrC *)(((const MR::CSharp::IncrDecrC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetMutablePtr(MR_CSharp_IncrDecrC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)(((MR::CSharp::IncrDecrC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_ConstructFromAnother(const MR_CSharp_IncrDecrC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(MR::CSharp::IncrDecrC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrC(*(MR::CSharp::IncrDecrC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrC_Destroy(const MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrC_DestroyArray(const MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_AssignFromAnother(MR_CSharp_IncrDecrC *_this, const MR_CSharp_IncrDecrC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrC(*(MR::CSharp::IncrDecrC *)_other)))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_C_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_C_post_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_C_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrC *MR_C_post_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(MR::CSharp::IncrDecrD());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)(new MR::CSharp::IncrDecrD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetPtr(const MR_CSharp_IncrDecrD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrD *)(((const MR::CSharp::IncrDecrD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetMutablePtr(MR_CSharp_IncrDecrD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)(((MR::CSharp::IncrDecrD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_ConstructFromAnother(const MR_CSharp_IncrDecrD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(MR::CSharp::IncrDecrD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrD(*(MR::CSharp::IncrDecrD *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrD_Destroy(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrD_DestroyArray(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_AssignFromAnother(MR_CSharp_IncrDecrD *_this, const MR_CSharp_IncrDecrD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrD *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrD(*(MR::CSharp::IncrDecrD *)_other)))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrD *MR_C_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_C_post_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrD *MR_C_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrD *MR_C_post_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(MR::CSharp::IncrDecrE());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)(new MR::CSharp::IncrDecrE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetPtr(const MR_CSharp_IncrDecrE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrE *)(((const MR::CSharp::IncrDecrE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetMutablePtr(MR_CSharp_IncrDecrE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)(((MR::CSharp::IncrDecrE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrE *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IncrDecrE);
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(MR::CSharp::IncrDecrE(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IncrDecrE), MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_END(_other, MR::CSharp::IncrDecrE))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrE_Destroy(const MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrE_DestroyArray(const MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_C_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_C_post_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_C_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrE *MR_C_post_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(MR::CSharp::IncrDecrF());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrF *)(new MR::CSharp::IncrDecrF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetPtr(const MR_CSharp_IncrDecrF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrF *)(((const MR::CSharp::IncrDecrF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetMutablePtr(MR_CSharp_IncrDecrF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrF *)(((MR::CSharp::IncrDecrF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrF *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IncrDecrF);
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(MR::CSharp::IncrDecrF(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IncrDecrF), MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_END(_other, MR::CSharp::IncrDecrF))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrF_Destroy(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrF_DestroyArray(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrF *)_this);
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrF *MR_C_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_C_post_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrF *MR_C_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrF *MR_C_post_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(MR::CSharp::IncrDecrG());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)(new MR::CSharp::IncrDecrG[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetPtr(const MR_CSharp_IncrDecrG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrG *)(((const MR::CSharp::IncrDecrG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetMutablePtr(MR_CSharp_IncrDecrG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)(((MR::CSharp::IncrDecrG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_ConstructFromAnother(const MR_CSharp_IncrDecrG *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(MR::CSharp::IncrDecrG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrG(std::move(*(MR::CSharp::IncrDecrG *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrG_Destroy(const MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrG *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrG_DestroyArray(const MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrG *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_C_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_C_post_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_C_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrG *MR_C_post_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(MR::CSharp::IncrDecrH());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)(new MR::CSharp::IncrDecrH[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetPtr(const MR_CSharp_IncrDecrH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrH *)(((const MR::CSharp::IncrDecrH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetMutablePtr(MR_CSharp_IncrDecrH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)(((MR::CSharp::IncrDecrH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_ConstructFromAnother(const MR_CSharp_IncrDecrH *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(MR::CSharp::IncrDecrH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrH(std::move(*(MR::CSharp::IncrDecrH *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrH_Destroy(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrH *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrH_DestroyArray(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrH *)_this);
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrH *MR_C_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator++());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_C_post_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator++(
        0
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrH *MR_C_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator--());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrH *MR_C_post_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator--(
        0
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrI *)new MR::CSharp::IncrDecrI(MR::CSharp::IncrDecrI());
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrI *)(new MR::CSharp::IncrDecrI[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetPtr(const MR_CSharp_IncrDecrI *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IncrDecrI *)(((const MR::CSharp::IncrDecrI *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetMutablePtr(MR_CSharp_IncrDecrI *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrI *)(((MR::CSharp::IncrDecrI *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_ConstructFromAnother(const MR_CSharp_IncrDecrI *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrI *)new MR::CSharp::IncrDecrI(MR::CSharp::IncrDecrI(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrI_Destroy(const MR_CSharp_IncrDecrI *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IncrDecrI *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IncrDecrI_DestroyArray(const MR_CSharp_IncrDecrI *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IncrDecrI *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_AssignFromAnother(MR_CSharp_IncrDecrI *_this, const MR_CSharp_IncrDecrI *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IncrDecrI *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrI *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    MRBINDC_TRY(
    return operator++(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_post_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    MRBINDC_TRY(
    return operator++(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1)),
        0
    );
    ) // MRBINDC_TRY
}

int MR_C_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    MRBINDC_TRY(
    return operator--(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_post_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    MRBINDC_TRY(
    return operator--(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1)),
        0
    );
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityA *)new MR::CSharp::EqualityA(MR::CSharp::EqualityA());
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityA *)(new MR::CSharp::EqualityA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetPtr(const MR_CSharp_EqualityA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_EqualityA *)(((const MR::CSharp::EqualityA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetMutablePtr(MR_CSharp_EqualityA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityA *)(((MR::CSharp::EqualityA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_ConstructFromAnother(const MR_CSharp_EqualityA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityA *)new MR::CSharp::EqualityA(MR::CSharp::EqualityA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityA(*(MR::CSharp::EqualityA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityA_Destroy(const MR_CSharp_EqualityA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::EqualityA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityA_DestroyArray(const MR_CSharp_EqualityA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::EqualityA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_AssignFromAnother(MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityA(*(MR::CSharp::EqualityA *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_not_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator!=(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_EqualityA(const MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityA *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityA *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityB *)new MR::CSharp::EqualityB(MR::CSharp::EqualityB());
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityB *)(new MR::CSharp::EqualityB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetPtr(const MR_CSharp_EqualityB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_EqualityB *)(((const MR::CSharp::EqualityB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetMutablePtr(MR_CSharp_EqualityB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityB *)(((MR::CSharp::EqualityB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_ConstructFromAnother(const MR_CSharp_EqualityB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityB *)new MR::CSharp::EqualityB(MR::CSharp::EqualityB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityB(*(MR::CSharp::EqualityB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityB_Destroy(const MR_CSharp_EqualityB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::EqualityB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityB_DestroyArray(const MR_CSharp_EqualityB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::EqualityB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_AssignFromAnother(MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityB(*(MR::CSharp::EqualityB *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_not_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator!=(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_equal_MR_CSharp_EqualityB(const MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityB *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityB *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityC *)new MR::CSharp::EqualityC(MR::CSharp::EqualityC());
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityC *)(new MR::CSharp::EqualityC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetPtr(const MR_CSharp_EqualityC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_EqualityC *)(((const MR::CSharp::EqualityC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetMutablePtr(MR_CSharp_EqualityC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityC *)(((MR::CSharp::EqualityC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_ConstructFromAnother(const MR_CSharp_EqualityC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityC *)new MR::CSharp::EqualityC(MR::CSharp::EqualityC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityC(*(MR::CSharp::EqualityC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityC_Destroy(const MR_CSharp_EqualityC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::EqualityC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityC_DestroyArray(const MR_CSharp_EqualityC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::EqualityC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_AssignFromAnother(MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityC(*(MR::CSharp::EqualityC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_C_not_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator!=(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_C_equal_MR_CSharp_EqualityC(const MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityC *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityC *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityD *)new MR::CSharp::EqualityD(MR::CSharp::EqualityD());
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityD *)(new MR::CSharp::EqualityD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetPtr(const MR_CSharp_EqualityD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_EqualityD *)(((const MR::CSharp::EqualityD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetMutablePtr(MR_CSharp_EqualityD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityD *)(((MR::CSharp::EqualityD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_ConstructFromAnother(const MR_CSharp_EqualityD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityD *)new MR::CSharp::EqualityD(MR::CSharp::EqualityD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityD(*(MR::CSharp::EqualityD *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityD_Destroy(const MR_CSharp_EqualityD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::EqualityD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityD_DestroyArray(const MR_CSharp_EqualityD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::EqualityD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_AssignFromAnother(MR_CSharp_EqualityD *_this, const MR_CSharp_EqualityD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityD(*(MR::CSharp::EqualityD *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(MR_CSharp_EqualityD *_this, const int *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityD *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityE *)new MR::CSharp::EqualityE(MR::CSharp::EqualityE());
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityE *)(new MR::CSharp::EqualityE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetPtr(const MR_CSharp_EqualityE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_EqualityE *)(((const MR::CSharp::EqualityE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetMutablePtr(MR_CSharp_EqualityE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityE *)(((MR::CSharp::EqualityE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_ConstructFromAnother(const MR_CSharp_EqualityE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityE *)new MR::CSharp::EqualityE(MR::CSharp::EqualityE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityE(*(MR::CSharp::EqualityE *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityE_Destroy(const MR_CSharp_EqualityE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::EqualityE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_EqualityE_DestroyArray(const MR_CSharp_EqualityE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::EqualityE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_AssignFromAnother(MR_CSharp_EqualityE *_this, const MR_CSharp_EqualityE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_EqualityE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityE(*(MR::CSharp::EqualityE *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(MR_CSharp_EqualityE *_this, MR_CSharp_EqualityD *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityE *)(_this)).operator==(
        ((MR::CSharp::EqualityD *)_1)
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalA *)new MR::CSharp::RelationalA(MR::CSharp::RelationalA());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalA *)(new MR::CSharp::RelationalA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetPtr(const MR_CSharp_RelationalA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalA *)(((const MR::CSharp::RelationalA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetMutablePtr(MR_CSharp_RelationalA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalA *)(((MR::CSharp::RelationalA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_ConstructFromAnother(const MR_CSharp_RelationalA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalA *)new MR::CSharp::RelationalA(MR::CSharp::RelationalA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalA(*(MR::CSharp::RelationalA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalA_Destroy(const MR_CSharp_RelationalA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalA_DestroyArray(const MR_CSharp_RelationalA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_AssignFromAnother(MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalA(*(MR::CSharp::RelationalA *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalB *)new MR::CSharp::RelationalB(MR::CSharp::RelationalB());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalB *)(new MR::CSharp::RelationalB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetPtr(const MR_CSharp_RelationalB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalB *)(((const MR::CSharp::RelationalB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetMutablePtr(MR_CSharp_RelationalB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalB *)(((MR::CSharp::RelationalB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_ConstructFromAnother(const MR_CSharp_RelationalB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalB *)new MR::CSharp::RelationalB(MR::CSharp::RelationalB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalB(*(MR::CSharp::RelationalB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalB_Destroy(const MR_CSharp_RelationalB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalB_DestroyArray(const MR_CSharp_RelationalB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_AssignFromAnother(MR_CSharp_RelationalB *_this, const MR_CSharp_RelationalB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalB(*(MR::CSharp::RelationalB *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalC *)new MR::CSharp::RelationalC(MR::CSharp::RelationalC());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalC *)(new MR::CSharp::RelationalC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetPtr(const MR_CSharp_RelationalC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalC *)(((const MR::CSharp::RelationalC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetMutablePtr(MR_CSharp_RelationalC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalC *)(((MR::CSharp::RelationalC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_ConstructFromAnother(const MR_CSharp_RelationalC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalC *)new MR::CSharp::RelationalC(MR::CSharp::RelationalC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalC(*(MR::CSharp::RelationalC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalC_Destroy(const MR_CSharp_RelationalC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalC_DestroyArray(const MR_CSharp_RelationalC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_AssignFromAnother(MR_CSharp_RelationalC *_this, const MR_CSharp_RelationalC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalC(*(MR::CSharp::RelationalC *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalD *)new MR::CSharp::RelationalD(MR::CSharp::RelationalD());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalD *)(new MR::CSharp::RelationalD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetPtr(const MR_CSharp_RelationalD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalD *)(((const MR::CSharp::RelationalD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetMutablePtr(MR_CSharp_RelationalD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalD *)(((MR::CSharp::RelationalD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_ConstructFromAnother(const MR_CSharp_RelationalD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalD *)new MR::CSharp::RelationalD(MR::CSharp::RelationalD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalD(*(MR::CSharp::RelationalD *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalD_Destroy(const MR_CSharp_RelationalD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalD_DestroyArray(const MR_CSharp_RelationalD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_AssignFromAnother(MR_CSharp_RelationalD *_this, const MR_CSharp_RelationalD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalD(*(MR::CSharp::RelationalD *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalE *)new MR::CSharp::RelationalE(MR::CSharp::RelationalE());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalE *)(new MR::CSharp::RelationalE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetPtr(const MR_CSharp_RelationalE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalE *)(((const MR::CSharp::RelationalE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetMutablePtr(MR_CSharp_RelationalE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalE *)(((MR::CSharp::RelationalE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_ConstructFromAnother(const MR_CSharp_RelationalE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalE *)new MR::CSharp::RelationalE(MR::CSharp::RelationalE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalE(*(MR::CSharp::RelationalE *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalE_Destroy(const MR_CSharp_RelationalE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalE_DestroyArray(const MR_CSharp_RelationalE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_AssignFromAnother(MR_CSharp_RelationalE *_this, const MR_CSharp_RelationalE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalE(*(MR::CSharp::RelationalE *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalF *)new MR::CSharp::RelationalF(MR::CSharp::RelationalF());
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalF *)(new MR::CSharp::RelationalF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetPtr(const MR_CSharp_RelationalF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_RelationalF *)(((const MR::CSharp::RelationalF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetMutablePtr(MR_CSharp_RelationalF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalF *)(((MR::CSharp::RelationalF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_ConstructFromAnother(const MR_CSharp_RelationalF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalF *)new MR::CSharp::RelationalF(MR::CSharp::RelationalF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalF(*(MR::CSharp::RelationalF *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalF_Destroy(const MR_CSharp_RelationalF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::RelationalF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_RelationalF_DestroyArray(const MR_CSharp_RelationalF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::RelationalF *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_AssignFromAnother(MR_CSharp_RelationalF *_this, const MR_CSharp_RelationalF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_RelationalF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalF(*(MR::CSharp::RelationalF *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsA *)new MR::CSharp::StaticOpsLhsA(MR::CSharp::StaticOpsLhsA());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsA *)(new MR::CSharp::StaticOpsLhsA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetPtr(const MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsA *)(((const MR::CSharp::StaticOpsLhsA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetMutablePtr(MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsA *)(((MR::CSharp::StaticOpsLhsA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_ConstructFromAnother(const MR_CSharp_StaticOpsLhsA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsA *)new MR::CSharp::StaticOpsLhsA(MR::CSharp::StaticOpsLhsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsA_Destroy(const MR_CSharp_StaticOpsLhsA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsA_DestroyArray(const MR_CSharp_StaticOpsLhsA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_AssignFromAnother(MR_CSharp_StaticOpsLhsA *_this, const MR_CSharp_StaticOpsLhsA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsA_int(const MR_CSharp_StaticOpsLhsA *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsB *)new MR::CSharp::StaticOpsLhsB(MR::CSharp::StaticOpsLhsB());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsB *)(new MR::CSharp::StaticOpsLhsB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetPtr(const MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsB *)(((const MR::CSharp::StaticOpsLhsB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetMutablePtr(MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsB *)(((MR::CSharp::StaticOpsLhsB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_ConstructFromAnother(const MR_CSharp_StaticOpsLhsB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsB *)new MR::CSharp::StaticOpsLhsB(MR::CSharp::StaticOpsLhsB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsB_Destroy(const MR_CSharp_StaticOpsLhsB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsB_DestroyArray(const MR_CSharp_StaticOpsLhsB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_AssignFromAnother(MR_CSharp_StaticOpsLhsB *_this, const MR_CSharp_StaticOpsLhsB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_add_MR_CSharp_StaticOpsLhsB_int(const MR_CSharp_StaticOpsLhsB *_1, int _2)
{
    MRBINDC_TRY(
    ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsC *)new MR::CSharp::StaticOpsLhsC(MR::CSharp::StaticOpsLhsC());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsC *)(new MR::CSharp::StaticOpsLhsC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetPtr(const MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsC *)(((const MR::CSharp::StaticOpsLhsC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetMutablePtr(MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsC *)(((MR::CSharp::StaticOpsLhsC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsLhsC *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::StaticOpsLhsC);
    return (MR_CSharp_StaticOpsLhsC *)new MR::CSharp::StaticOpsLhsC(MR::CSharp::StaticOpsLhsC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::StaticOpsLhsC), MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_END(_other, MR::CSharp::StaticOpsLhsC))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsC_Destroy(const MR_CSharp_StaticOpsLhsC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsC_DestroyArray(const MR_CSharp_StaticOpsLhsC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsC *)_this);
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsC_int(MR_C_PassBy _1_pass_by, MR_CSharp_StaticOpsLhsC *_1, int _2)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::StaticOpsLhsC);
    return ::MR::CSharp::operator+(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_MOVE(_1, (MR::CSharp::StaticOpsLhsC), MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_END(_1, MR::CSharp::StaticOpsLhsC)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsD *)new MR::CSharp::StaticOpsLhsD(MR::CSharp::StaticOpsLhsD());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsD *)(new MR::CSharp::StaticOpsLhsD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetPtr(const MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsD *)(((const MR::CSharp::StaticOpsLhsD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetMutablePtr(MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsD *)(((MR::CSharp::StaticOpsLhsD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_ConstructFromAnother(const MR_CSharp_StaticOpsLhsD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsD *)new MR::CSharp::StaticOpsLhsD(MR::CSharp::StaticOpsLhsD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsD(std::move(*(MR::CSharp::StaticOpsLhsD *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsD_Destroy(const MR_CSharp_StaticOpsLhsD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsD_DestroyArray(const MR_CSharp_StaticOpsLhsD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsD *)_this);
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsD_int(const MR_CSharp_StaticOpsLhsD *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsD(std::move(*(MR::CSharp::StaticOpsLhsD *)_1))),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsE *)new MR::CSharp::StaticOpsLhsE(MR::CSharp::StaticOpsLhsE());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsE *)(new MR::CSharp::StaticOpsLhsE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetPtr(const MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsE *)(((const MR::CSharp::StaticOpsLhsE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetMutablePtr(MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsE *)(((MR::CSharp::StaticOpsLhsE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_ConstructFromAnother(const MR_CSharp_StaticOpsLhsE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsE *)new MR::CSharp::StaticOpsLhsE(MR::CSharp::StaticOpsLhsE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsE(std::move(*(MR::CSharp::StaticOpsLhsE *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsE_Destroy(const MR_CSharp_StaticOpsLhsE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsE_DestroyArray(const MR_CSharp_StaticOpsLhsE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_AssignFromAnother(MR_CSharp_StaticOpsLhsE *_this, const MR_CSharp_StaticOpsLhsE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsE(std::move(*(MR::CSharp::StaticOpsLhsE *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsE_int(MR_CSharp_StaticOpsLhsE *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::StaticOpsLhsE *)(_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsF *)new MR::CSharp::StaticOpsLhsF(MR::CSharp::StaticOpsLhsF());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsF *)(new MR::CSharp::StaticOpsLhsF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetPtr(const MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsF *)(((const MR::CSharp::StaticOpsLhsF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetMutablePtr(MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsF *)(((MR::CSharp::StaticOpsLhsF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_ConstructFromAnother(const MR_CSharp_StaticOpsLhsF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsF *)new MR::CSharp::StaticOpsLhsF(MR::CSharp::StaticOpsLhsF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsF(std::move(*(MR::CSharp::StaticOpsLhsF *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsF_Destroy(const MR_CSharp_StaticOpsLhsF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsF_DestroyArray(const MR_CSharp_StaticOpsLhsF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsF *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_AssignFromAnother(MR_CSharp_StaticOpsLhsF *_this, const MR_CSharp_StaticOpsLhsF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsF(std::move(*(MR::CSharp::StaticOpsLhsF *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsF_int(const MR_CSharp_StaticOpsLhsF *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::StaticOpsLhsF *)(_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsG *)new MR::CSharp::StaticOpsLhsG(MR::CSharp::StaticOpsLhsG());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsG *)(new MR::CSharp::StaticOpsLhsG[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetPtr(const MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsG *)(((const MR::CSharp::StaticOpsLhsG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetMutablePtr(MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsG *)(((MR::CSharp::StaticOpsLhsG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_ConstructFromAnother(const MR_CSharp_StaticOpsLhsG *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsG *)new MR::CSharp::StaticOpsLhsG(MR::CSharp::StaticOpsLhsG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsG_Destroy(const MR_CSharp_StaticOpsLhsG *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsG *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsG_DestroyArray(const MR_CSharp_StaticOpsLhsG *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsG *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_AssignFromAnother(MR_CSharp_StaticOpsLhsG *_this, const MR_CSharp_StaticOpsLhsG *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsG *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsG_int(const MR_CSharp_StaticOpsLhsG *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsH *)new MR::CSharp::StaticOpsLhsH(MR::CSharp::StaticOpsLhsH());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsH *)(new MR::CSharp::StaticOpsLhsH[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetPtr(const MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsLhsH *)(((const MR::CSharp::StaticOpsLhsH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetMutablePtr(MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsH *)(((MR::CSharp::StaticOpsLhsH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_ConstructFromAnother(const MR_CSharp_StaticOpsLhsH *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsH *)new MR::CSharp::StaticOpsLhsH(MR::CSharp::StaticOpsLhsH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsH(*(MR::CSharp::StaticOpsLhsH *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsH_Destroy(const MR_CSharp_StaticOpsLhsH *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsLhsH *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsLhsH_DestroyArray(const MR_CSharp_StaticOpsLhsH *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsLhsH *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_AssignFromAnother(MR_CSharp_StaticOpsLhsH *_this, const MR_CSharp_StaticOpsLhsH *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsLhsH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsH *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsH(*(MR::CSharp::StaticOpsLhsH *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsLhsH_int(const MR_CSharp_StaticOpsLhsH *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::StaticOpsLhsH *)(_1)),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsA *)new MR::CSharp::StaticOpsRhsA(MR::CSharp::StaticOpsRhsA());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsA *)(new MR::CSharp::StaticOpsRhsA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetPtr(const MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsA *)(((const MR::CSharp::StaticOpsRhsA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetMutablePtr(MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsA *)(((MR::CSharp::StaticOpsRhsA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_ConstructFromAnother(const MR_CSharp_StaticOpsRhsA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsA *)new MR::CSharp::StaticOpsRhsA(MR::CSharp::StaticOpsRhsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsA_Destroy(const MR_CSharp_StaticOpsRhsA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsA_DestroyArray(const MR_CSharp_StaticOpsRhsA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_AssignFromAnother(MR_CSharp_StaticOpsRhsA *_this, const MR_CSharp_StaticOpsRhsA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsA(int _1, const MR_CSharp_StaticOpsRhsA *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsB *)new MR::CSharp::StaticOpsRhsB(MR::CSharp::StaticOpsRhsB());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsB *)(new MR::CSharp::StaticOpsRhsB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetPtr(const MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsB *)(((const MR::CSharp::StaticOpsRhsB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetMutablePtr(MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsB *)(((MR::CSharp::StaticOpsRhsB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_ConstructFromAnother(const MR_CSharp_StaticOpsRhsB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsB *)new MR::CSharp::StaticOpsRhsB(MR::CSharp::StaticOpsRhsB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsB_Destroy(const MR_CSharp_StaticOpsRhsB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsB_DestroyArray(const MR_CSharp_StaticOpsRhsB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_AssignFromAnother(MR_CSharp_StaticOpsRhsB *_this, const MR_CSharp_StaticOpsRhsB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_add_int_MR_CSharp_StaticOpsRhsB(int _1, const MR_CSharp_StaticOpsRhsB *_2)
{
    MRBINDC_TRY(
    ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsC *)new MR::CSharp::StaticOpsRhsC(MR::CSharp::StaticOpsRhsC());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsC *)(new MR::CSharp::StaticOpsRhsC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetPtr(const MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsC *)(((const MR::CSharp::StaticOpsRhsC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetMutablePtr(MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsC *)(((MR::CSharp::StaticOpsRhsC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsRhsC *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::StaticOpsRhsC);
    return (MR_CSharp_StaticOpsRhsC *)new MR::CSharp::StaticOpsRhsC(MR::CSharp::StaticOpsRhsC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::StaticOpsRhsC), MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_END(_other, MR::CSharp::StaticOpsRhsC))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsC_Destroy(const MR_CSharp_StaticOpsRhsC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsC_DestroyArray(const MR_CSharp_StaticOpsRhsC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsC *)_this);
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsC(int _1, MR_C_PassBy _2_pass_by, MR_CSharp_StaticOpsRhsC *_2)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_2, MR::CSharp::StaticOpsRhsC);
    return ::MR::CSharp::operator+(
        _1,
        (MRBINDC_CLASSARG_DEF_CTOR(_2, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_MOVE(_2, (MR::CSharp::StaticOpsRhsC), MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_END(_2, MR::CSharp::StaticOpsRhsC))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsD *)new MR::CSharp::StaticOpsRhsD(MR::CSharp::StaticOpsRhsD());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsD *)(new MR::CSharp::StaticOpsRhsD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetPtr(const MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsD *)(((const MR::CSharp::StaticOpsRhsD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetMutablePtr(MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsD *)(((MR::CSharp::StaticOpsRhsD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_ConstructFromAnother(const MR_CSharp_StaticOpsRhsD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsD *)new MR::CSharp::StaticOpsRhsD(MR::CSharp::StaticOpsRhsD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsD(std::move(*(MR::CSharp::StaticOpsRhsD *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsD_Destroy(const MR_CSharp_StaticOpsRhsD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsD_DestroyArray(const MR_CSharp_StaticOpsRhsD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsD *)_this);
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsD(int _1, const MR_CSharp_StaticOpsRhsD *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsD(std::move(*(MR::CSharp::StaticOpsRhsD *)_2)))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsE *)new MR::CSharp::StaticOpsRhsE(MR::CSharp::StaticOpsRhsE());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsE *)(new MR::CSharp::StaticOpsRhsE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetPtr(const MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsE *)(((const MR::CSharp::StaticOpsRhsE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetMutablePtr(MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsE *)(((MR::CSharp::StaticOpsRhsE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_ConstructFromAnother(const MR_CSharp_StaticOpsRhsE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsE *)new MR::CSharp::StaticOpsRhsE(MR::CSharp::StaticOpsRhsE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsE(std::move(*(MR::CSharp::StaticOpsRhsE *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsE_Destroy(const MR_CSharp_StaticOpsRhsE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsE_DestroyArray(const MR_CSharp_StaticOpsRhsE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_AssignFromAnother(MR_CSharp_StaticOpsRhsE *_this, const MR_CSharp_StaticOpsRhsE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsE(std::move(*(MR::CSharp::StaticOpsRhsE *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsE(int _1, MR_CSharp_StaticOpsRhsE *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::StaticOpsRhsE *)(_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsF *)new MR::CSharp::StaticOpsRhsF(MR::CSharp::StaticOpsRhsF());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsF *)(new MR::CSharp::StaticOpsRhsF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetPtr(const MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsF *)(((const MR::CSharp::StaticOpsRhsF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetMutablePtr(MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsF *)(((MR::CSharp::StaticOpsRhsF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_ConstructFromAnother(const MR_CSharp_StaticOpsRhsF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsF *)new MR::CSharp::StaticOpsRhsF(MR::CSharp::StaticOpsRhsF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsF(std::move(*(MR::CSharp::StaticOpsRhsF *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsF_Destroy(const MR_CSharp_StaticOpsRhsF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsF_DestroyArray(const MR_CSharp_StaticOpsRhsF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsF *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_AssignFromAnother(MR_CSharp_StaticOpsRhsF *_this, const MR_CSharp_StaticOpsRhsF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsF(std::move(*(MR::CSharp::StaticOpsRhsF *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsF(int _1, const MR_CSharp_StaticOpsRhsF *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::StaticOpsRhsF *)(_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsG *)new MR::CSharp::StaticOpsRhsG(MR::CSharp::StaticOpsRhsG());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsG *)(new MR::CSharp::StaticOpsRhsG[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetPtr(const MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsG *)(((const MR::CSharp::StaticOpsRhsG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetMutablePtr(MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsG *)(((MR::CSharp::StaticOpsRhsG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_ConstructFromAnother(const MR_CSharp_StaticOpsRhsG *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsG *)new MR::CSharp::StaticOpsRhsG(MR::CSharp::StaticOpsRhsG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsG_Destroy(const MR_CSharp_StaticOpsRhsG *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsG *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsG_DestroyArray(const MR_CSharp_StaticOpsRhsG *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsG *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_AssignFromAnother(MR_CSharp_StaticOpsRhsG *_this, const MR_CSharp_StaticOpsRhsG *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsG *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsG(int _1, const MR_CSharp_StaticOpsRhsG *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsH *)new MR::CSharp::StaticOpsRhsH(MR::CSharp::StaticOpsRhsH());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsH *)(new MR::CSharp::StaticOpsRhsH[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetPtr(const MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsRhsH *)(((const MR::CSharp::StaticOpsRhsH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetMutablePtr(MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsH *)(((MR::CSharp::StaticOpsRhsH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_ConstructFromAnother(const MR_CSharp_StaticOpsRhsH *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsH *)new MR::CSharp::StaticOpsRhsH(MR::CSharp::StaticOpsRhsH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsH(*(MR::CSharp::StaticOpsRhsH *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsH_Destroy(const MR_CSharp_StaticOpsRhsH *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsRhsH *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsRhsH_DestroyArray(const MR_CSharp_StaticOpsRhsH *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsRhsH *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_AssignFromAnother(MR_CSharp_StaticOpsRhsH *_this, const MR_CSharp_StaticOpsRhsH *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsRhsH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsH *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsH(*(MR::CSharp::StaticOpsRhsH *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsH(int _1, const MR_CSharp_StaticOpsRhsH *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::StaticOpsRhsH *)(_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsEnum_int(MR_CSharp_StaticOpsEnum _1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((MR::CSharp::StaticOpsEnum)_1),
        _2
    );
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedLhs *)new MR::CSharp::StaticOpsMixedLhs(MR::CSharp::StaticOpsMixedLhs());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedLhs *)(new MR::CSharp::StaticOpsMixedLhs[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetPtr(const MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsMixedLhs *)(((const MR::CSharp::StaticOpsMixedLhs *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedLhs *)(((MR::CSharp::StaticOpsMixedLhs *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedLhs *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedLhs *)new MR::CSharp::StaticOpsMixedLhs(MR::CSharp::StaticOpsMixedLhs(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsMixedLhs_Destroy(const MR_CSharp_StaticOpsMixedLhs *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsMixedLhs *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsMixedLhs_DestroyArray(const MR_CSharp_StaticOpsMixedLhs *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsMixedLhs *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(MR_CSharp_StaticOpsMixedLhs *_this, const MR_CSharp_StaticOpsMixedLhs *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedLhs *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsMixedLhs *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedRhs *)new MR::CSharp::StaticOpsMixedRhs(MR::CSharp::StaticOpsMixedRhs());
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedRhs *)(new MR::CSharp::StaticOpsMixedRhs[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetPtr(const MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StaticOpsMixedRhs *)(((const MR::CSharp::StaticOpsMixedRhs *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedRhs *)(((MR::CSharp::StaticOpsMixedRhs *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedRhs *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedRhs *)new MR::CSharp::StaticOpsMixedRhs(MR::CSharp::StaticOpsMixedRhs(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsMixedRhs_Destroy(const MR_CSharp_StaticOpsMixedRhs *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StaticOpsMixedRhs *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StaticOpsMixedRhs_DestroyArray(const MR_CSharp_StaticOpsMixedRhs *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StaticOpsMixedRhs *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(MR_CSharp_StaticOpsMixedRhs *_this, const MR_CSharp_StaticOpsMixedRhs *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StaticOpsMixedRhs *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsMixedRhs *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(const MR_CSharp_StaticOpsMixedLhs *_1, const MR_CSharp_StaticOpsMixedRhs *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialClassOps *)new MR::CSharp::NonTrivialClassOps(MR::CSharp::NonTrivialClassOps());
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialClassOps *)(new MR::CSharp::NonTrivialClassOps[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetPtr(const MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NonTrivialClassOps *)(((const MR::CSharp::NonTrivialClassOps *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetMutablePtr(MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivialClassOps *)(((MR::CSharp::NonTrivialClassOps *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivialClassOps);
    return (MR_CSharp_NonTrivialClassOps *)new MR::CSharp::NonTrivialClassOps(MR::CSharp::NonTrivialClassOps(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialClassOps))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NonTrivialClassOps_Destroy(const MR_CSharp_NonTrivialClassOps *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NonTrivialClassOps *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NonTrivialClassOps_DestroyArray(const MR_CSharp_NonTrivialClassOps *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NonTrivialClassOps *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_AssignFromAnother(MR_CSharp_NonTrivialClassOps *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::NonTrivialClassOps);
    return (MR_CSharp_NonTrivialClassOps *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialClassOps *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialClassOps))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_NonTrivialClassOps_int(MR_CSharp_NonTrivialClassOps *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialClassOps *)(_this)).operator+(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_NonTrivialClassOps_float(MR_C_PassBy _1_pass_by, MR_CSharp_NonTrivialClassOps *_1, float _2)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::NonTrivialClassOps);
    return ::MR::CSharp::operator+(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_1, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_1, MR::CSharp::NonTrivialClassOps)),
        _2
    );
    ) // MRBINDC_TRY
}

int MR_C_add_float_MR_CSharp_NonTrivialClassOps(float _1, MR_C_PassBy _2_pass_by, MR_CSharp_NonTrivialClassOps *_2)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_2, MR::CSharp::NonTrivialClassOps);
    return ::MR::CSharp::operator+(
        _1,
        (MRBINDC_CLASSARG_DEF_CTOR(_2, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_2, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_2, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_2, MR::CSharp::NonTrivialClassOps))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonCopyableClassByValueOps *)new MR::CSharp::NonCopyableClassByValueOps(MR::CSharp::NonCopyableClassByValueOps());
    ) // MRBINDC_TRY
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonCopyableClassByValueOps *)(new MR::CSharp::NonCopyableClassByValueOps[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetPtr(const MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NonCopyableClassByValueOps *)(((const MR::CSharp::NonCopyableClassByValueOps *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetMutablePtr(MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonCopyableClassByValueOps *)(((MR::CSharp::NonCopyableClassByValueOps *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(const MR_CSharp_NonCopyableClassByValueOps *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonCopyableClassByValueOps *)new MR::CSharp::NonCopyableClassByValueOps(MR::CSharp::NonCopyableClassByValueOps(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NonCopyableClassByValueOps_Destroy(const MR_CSharp_NonCopyableClassByValueOps *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NonCopyableClassByValueOps *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NonCopyableClassByValueOps_DestroyArray(const MR_CSharp_NonCopyableClassByValueOps *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NonCopyableClassByValueOps *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(MR_CSharp_NonCopyableClassByValueOps *_this, const MR_CSharp_NonCopyableClassByValueOps *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonCopyableClassByValueOps *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonCopyableClassByValueOps *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_other)))
    ));
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(const MR_CSharp_NonCopyableClassByValueOps *_1, int _2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_1))),
        _2
    );
    ) // MRBINDC_TRY
}

int MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(int _1, const MR_CSharp_NonCopyableClassByValueOps *_2)
{
    MRBINDC_TRY(
    return ::MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_2)))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_CallOp *)new MR::CSharp::CallOp(MR::CSharp::CallOp());
    ) // MRBINDC_TRY
}

MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_CallOp *)(new MR::CSharp::CallOp[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetPtr(const MR_CSharp_CallOp *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_CallOp *)(((const MR::CSharp::CallOp *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetMutablePtr(MR_CSharp_CallOp *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_CallOp *)(((MR::CSharp::CallOp *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_CallOp *MR_CSharp_CallOp_ConstructFromAnother(const MR_CSharp_CallOp *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_CallOp *)new MR::CSharp::CallOp(MR::CSharp::CallOp(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::CallOp(*(MR::CSharp::CallOp *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_CallOp_Destroy(const MR_CSharp_CallOp *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::CallOp *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_CallOp_DestroyArray(const MR_CSharp_CallOp *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::CallOp *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_CallOp *MR_CSharp_CallOp_AssignFromAnother(MR_CSharp_CallOp *_this, const MR_CSharp_CallOp *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_CallOp *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::CallOp(*(MR::CSharp::CallOp *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_CallOp_call_0(MR_CSharp_CallOp *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator()();
    ) // MRBINDC_TRY
}

int MR_CSharp_CallOp_call_3(MR_CSharp_CallOp *_this, int _1, int _2, int _3)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator()(
        _1,
        _2,
        _3
    );
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_ConstructFromAnother(const MR_CSharp_TestOpsA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsA *)new MR::CSharp::TestOpsA(MR::CSharp::TestOpsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetPtr(const MR_CSharp_TestOpsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestOpsA *)(((const MR::CSharp::TestOpsA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetMutablePtr(MR_CSharp_TestOpsA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsA *)(((MR::CSharp::TestOpsA *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsA_Destroy(const MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestOpsA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsA_DestroyArray(const MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestOpsA *)_this);
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_AssignFromAnother(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_other)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_other))
    );
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+();
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-();
    ) // MRBINDC_TRY
}

int MR_C_sub_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*();
    ) // MRBINDC_TRY
}

int MR_C_mul_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_div_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator/(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator%(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_xor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator^(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_addressof_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&();
    ) // MRBINDC_TRY
}

int MR_C_bitand_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator|(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_compl_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator~();
    ) // MRBINDC_TRY
}

int MR_C_not_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator!();
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_add_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_sub_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_mul_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_div_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator/=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_mod_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator%=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_xor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator^=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_bitand_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_bitor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator|=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_lshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_rshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_lshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_rshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator>>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_compare_three_way_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<=>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_and_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_or_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator||(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_comma_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator,(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_arrow_star(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator->*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_arrow(MR_CSharp_TestOpsA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator->();
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_call(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator()(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsA_index(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator[](
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::TestOpsB);
    return (MR_CSharp_TestOpsB *)new MR::CSharp::TestOpsB(MR::CSharp::TestOpsB(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestOpsB))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetPtr(const MR_CSharp_TestOpsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestOpsB *)(((const MR::CSharp::TestOpsB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetMutablePtr(MR_CSharp_TestOpsB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsB *)(((MR::CSharp::TestOpsB *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsB_Destroy(const MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestOpsB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsB_DestroyArray(const MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestOpsB *)_this);
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_AssignFromAnother(MR_CSharp_TestOpsB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+();
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-();
    ) // MRBINDC_TRY
}

int MR_C_sub_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*();
    ) // MRBINDC_TRY
}

int MR_C_mul_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_div_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator/(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator%(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_xor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator^(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_addressof_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&();
    ) // MRBINDC_TRY
}

int MR_C_bitand_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator|(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_compl_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator~();
    ) // MRBINDC_TRY
}

int MR_C_not_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator!();
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_add_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_sub_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_mul_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_div_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator/=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_mod_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator%=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_xor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator^=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_bitand_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_bitor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator|=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_lshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<<(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_rshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator>>(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_lshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<<=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_rshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator>>=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_compare_three_way_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<=>(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_and_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&&(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_or_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator||(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_C_comma_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator,(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_arrow_star(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator->*(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_arrow(MR_CSharp_TestOpsB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator->();
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_call(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator()(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_TestOpsB_index(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::CSharp::TestOpsB);
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator[](
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_ConstructFromAnother(const MR_CSharp_TestOpsC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsC *)new MR::CSharp::TestOpsC(MR::CSharp::TestOpsC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsC(*(MR::CSharp::TestOpsC *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetPtr(const MR_CSharp_TestOpsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestOpsC *)(((const MR::CSharp::TestOpsC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetMutablePtr(MR_CSharp_TestOpsC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsC *)(((MR::CSharp::TestOpsC *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_Destroy(const MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestOpsC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_DestroyArray(const MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestOpsC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_AssignFromAnother(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestOpsC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsC(*(MR::CSharp::TestOpsC *)_other)))
    ));
    ) // MRBINDC_TRY
}

void MR_C_pos_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+();
    ) // MRBINDC_TRY
}

void MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_neg_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-();
    ) // MRBINDC_TRY
}

void MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_deref_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*();
    ) // MRBINDC_TRY
}

void MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator/(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator%(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator^(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_addressof_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&();
    ) // MRBINDC_TRY
}

void MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator|(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_compl_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator~();
    ) // MRBINDC_TRY
}

void MR_C_not_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator!();
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_add_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_sub_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_mul_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_div_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator/=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_mod_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator%=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_xor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator^=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_bitand_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_bitor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator|=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_lshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_rshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator>>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<=>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator||(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator,(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_arrow_star(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator->*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_arrow(MR_CSharp_TestOpsC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator->();
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_call(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator()(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_TestOpsC_index(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator[](
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IndexerA_Get_x(const MR_CSharp_IndexerA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerA *)(_this)).x);
}

void MR_CSharp_IndexerA_Set_x(MR_CSharp_IndexerA *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).x = value;
}

int *MR_CSharp_IndexerA_GetMutable_x(MR_CSharp_IndexerA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).x);
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA());
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)(new MR::CSharp::IndexerA[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA{
        x
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetPtr(const MR_CSharp_IndexerA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerA *)(((const MR::CSharp::IndexerA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetMutablePtr(MR_CSharp_IndexerA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)(((MR::CSharp::IndexerA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFromAnother(const MR_CSharp_IndexerA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerA_Destroy(const MR_CSharp_IndexerA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IndexerA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerA_DestroyArray(const MR_CSharp_IndexerA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IndexerA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_AssignFromAnother(MR_CSharp_IndexerA *_this, const MR_CSharp_IndexerA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_IndexerA_index(MR_CSharp_IndexerA *_this, int i)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).operator[](
        i
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_Get_a(const MR_CSharp_IndexerB *_this)
{
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).a);
}

void MR_CSharp_IndexerB_Set_a(MR_CSharp_IndexerB *_this, const MR_CSharp_IndexerA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerB *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)value));
}

MR_CSharp_IndexerA *MR_CSharp_IndexerB_GetMutable_a(MR_CSharp_IndexerB *_this)
{
    return (MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerB *)(_this)).a);
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB());
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)(new MR::CSharp::IndexerB[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFrom(const MR_CSharp_IndexerA *a)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)a))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetPtr(const MR_CSharp_IndexerB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerB *)(((const MR::CSharp::IndexerB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetMutablePtr(MR_CSharp_IndexerB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)(((MR::CSharp::IndexerB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFromAnother(const MR_CSharp_IndexerB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerB(*(MR::CSharp::IndexerB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerB_Destroy(const MR_CSharp_IndexerB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IndexerB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerB_DestroyArray(const MR_CSharp_IndexerB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IndexerB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_AssignFromAnother(MR_CSharp_IndexerB *_this, const MR_CSharp_IndexerB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerB(*(MR::CSharp::IndexerB *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_1(const MR_CSharp_IndexerB *_this, int i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[](
        i
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_2(const MR_CSharp_IndexerB *_this, int i, int j)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[](
        i,
        j
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_0(const MR_CSharp_IndexerB *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[]());
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerC *)new MR::CSharp::IndexerC(MR::CSharp::IndexerC());
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerC *)(new MR::CSharp::IndexerC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetPtr(const MR_CSharp_IndexerC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IndexerC *)(((const MR::CSharp::IndexerC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetMutablePtr(MR_CSharp_IndexerC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerC *)(((MR::CSharp::IndexerC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_ConstructFromAnother(const MR_CSharp_IndexerC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerC *)new MR::CSharp::IndexerC(MR::CSharp::IndexerC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerC(*(MR::CSharp::IndexerC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerC_Destroy(const MR_CSharp_IndexerC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IndexerC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IndexerC_DestroyArray(const MR_CSharp_IndexerC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IndexerC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_AssignFromAnother(MR_CSharp_IndexerC *_this, const MR_CSharp_IndexerC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IndexerC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerC(*(MR::CSharp::IndexerC *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_CSharp_IndexerC_index_mut(MR_CSharp_IndexerC *_this, int i)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerC *)(_this)).operator[](
        i
    );
    ) // MRBINDC_TRY
}

float MR_CSharp_IndexerC_index(const MR_CSharp_IndexerC *_this, int i)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerC *)(_this)).operator[](
        i
    );
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOp *)new MR::CSharp::ConvOp(MR::CSharp::ConvOp());
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOp *)(new MR::CSharp::ConvOp[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetPtr(const MR_CSharp_ConvOp *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvOp *)(((const MR::CSharp::ConvOp *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetMutablePtr(MR_CSharp_ConvOp *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOp *)(((MR::CSharp::ConvOp *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_ConstructFromAnother(const MR_CSharp_ConvOp *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOp *)new MR::CSharp::ConvOp(MR::CSharp::ConvOp(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOp(*(MR::CSharp::ConvOp *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvOp_Destroy(const MR_CSharp_ConvOp *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvOp *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvOp_DestroyArray(const MR_CSharp_ConvOp *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvOp *)_this);
    ) // MRBINDC_TRY
}

int MR_CSharp_ConvOp_ConvertTo_int(MR_CSharp_ConvOp *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)));
    ) // MRBINDC_TRY
}

float MR_CSharp_ConvOp_ConvertTo_float(MR_CSharp_ConvOp *_this)
{
    MRBINDC_TRY(
    return (float)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_AssignFromAnother(MR_CSharp_ConvOp *_this, const MR_CSharp_ConvOp *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOp *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOp(*(MR::CSharp::ConvOp *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOpToRef *)new MR::CSharp::ConvOpToRef(MR::CSharp::ConvOpToRef());
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOpToRef *)(new MR::CSharp::ConvOpToRef[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetPtr(const MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvOpToRef *)(((const MR::CSharp::ConvOpToRef *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetMutablePtr(MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOpToRef *)(((MR::CSharp::ConvOpToRef *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_ConstructFromAnother(const MR_CSharp_ConvOpToRef *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOpToRef *)new MR::CSharp::ConvOpToRef(MR::CSharp::ConvOpToRef(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOpToRef(*(MR::CSharp::ConvOpToRef *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvOpToRef_Destroy(const MR_CSharp_ConvOpToRef *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvOpToRef *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvOpToRef_DestroyArray(const MR_CSharp_ConvOpToRef *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvOpToRef *)_this);
    ) // MRBINDC_TRY
}

int MR_CSharp_ConvOpToRef_ConvertTo_int(MR_CSharp_ConvOpToRef *_this)
{
    MRBINDC_TRY(
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this)));
    ) // MRBINDC_TRY
}

float *MR_CSharp_ConvOpToRef_ConvertTo_float_ref(MR_CSharp_ConvOpToRef *_this)
{
    MRBINDC_TRY(
    return std::addressof((float &)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this))));
    ) // MRBINDC_TRY
}

unsigned short *MR_CSharp_ConvOpToRef_ConvertTo_unsigned_short_ref(MR_CSharp_ConvOpToRef *_this)
{
    MRBINDC_TRY(
    return std::addressof((unsigned short &)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this))));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_AssignFromAnother(MR_CSharp_ConvOpToRef *_this, const MR_CSharp_ConvOpToRef *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvOpToRef *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOpToRef(*(MR::CSharp::ConvOpToRef *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvString *)new MR::CSharp::StringConvString(MR::CSharp::StringConvString());
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvString *)(new MR::CSharp::StringConvString[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetPtr(const MR_CSharp_StringConvString *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StringConvString *)(((const MR::CSharp::StringConvString *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetMutablePtr(MR_CSharp_StringConvString *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvString *)(((MR::CSharp::StringConvString *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_ConstructFromAnother(const MR_CSharp_StringConvString *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvString *)new MR::CSharp::StringConvString(MR::CSharp::StringConvString(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvString(*(MR::CSharp::StringConvString *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvString_Destroy(const MR_CSharp_StringConvString *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StringConvString *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvString_DestroyArray(const MR_CSharp_StringConvString *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StringConvString *)_this);
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_StringConvString_ConvertTo_std_string(MR_CSharp_StringConvString *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)new std::string((std::string)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvString *)(_this))));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_AssignFromAnother(MR_CSharp_StringConvString *_this, const MR_CSharp_StringConvString *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvString *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvString *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvString(*(MR::CSharp::StringConvString *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvStringView *)new MR::CSharp::StringConvStringView(MR::CSharp::StringConvStringView());
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvStringView *)(new MR::CSharp::StringConvStringView[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetPtr(const MR_CSharp_StringConvStringView *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StringConvStringView *)(((const MR::CSharp::StringConvStringView *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetMutablePtr(MR_CSharp_StringConvStringView *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvStringView *)(((MR::CSharp::StringConvStringView *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_ConstructFromAnother(const MR_CSharp_StringConvStringView *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvStringView *)new MR::CSharp::StringConvStringView(MR::CSharp::StringConvStringView(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvStringView(*(MR::CSharp::StringConvStringView *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvStringView_Destroy(const MR_CSharp_StringConvStringView *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StringConvStringView *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvStringView_DestroyArray(const MR_CSharp_StringConvStringView *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StringConvStringView *)_this);
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_CSharp_StringConvStringView_ConvertTo_std_string_view(const MR_CSharp_StringConvStringView *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)new std::string_view((std::string_view)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::StringConvStringView *)(_this))));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_AssignFromAnother(MR_CSharp_StringConvStringView *_this, const MR_CSharp_StringConvStringView *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvStringView *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvStringView *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvStringView(*(MR::CSharp::StringConvStringView *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvFsPath *)new MR::CSharp::StringConvFsPath(MR::CSharp::StringConvFsPath());
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvFsPath *)(new MR::CSharp::StringConvFsPath[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetPtr(const MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_StringConvFsPath *)(((const MR::CSharp::StringConvFsPath *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetMutablePtr(MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvFsPath *)(((MR::CSharp::StringConvFsPath *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_ConstructFromAnother(const MR_CSharp_StringConvFsPath *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvFsPath *)new MR::CSharp::StringConvFsPath(MR::CSharp::StringConvFsPath(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvFsPath(*(MR::CSharp::StringConvFsPath *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvFsPath_Destroy(const MR_CSharp_StringConvFsPath *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::StringConvFsPath *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_StringConvFsPath_DestroyArray(const MR_CSharp_StringConvFsPath *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::StringConvFsPath *)_this);
    ) // MRBINDC_TRY
}

MR_C_std_filesystem_path *MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path(MR_CSharp_StringConvFsPath *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_filesystem_path *)new std::filesystem::path((std::filesystem::path)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvFsPath *)(_this))));
    ) // MRBINDC_TRY
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_AssignFromAnother(MR_CSharp_StringConvFsPath *_this, const MR_CSharp_StringConvFsPath *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_StringConvFsPath *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvFsPath *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvFsPath(*(MR::CSharp::StringConvFsPath *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor());
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)(new MR::CSharp::ConvCtor[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetPtr(const MR_CSharp_ConvCtor *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtor *)(((const MR::CSharp::ConvCtor *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetMutablePtr(MR_CSharp_ConvCtor *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)(((MR::CSharp::ConvCtor *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_ConstructFromAnother(const MR_CSharp_ConvCtor *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtor(*(MR::CSharp::ConvCtor *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_int(int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_int(int _1, int _2)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        _2
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_short(short _1, const int *_2)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        (_2 ? *_2 : static_cast<int>(42))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_float(float _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_float(float _1, float _2)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        _2
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtor_Destroy(const MR_CSharp_ConvCtor *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtor *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtor_DestroyArray(const MR_CSharp_ConvCtor *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtor *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_AssignFromAnother(MR_CSharp_ConvCtor *_this, const MR_CSharp_ConvCtor *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtor *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtor *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtor(*(MR::CSharp::ConvCtor *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_Construct(const int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorWithDefArg *)new MR::CSharp::ConvCtorWithDefArg(MR::CSharp::ConvCtorWithDefArg(
        (_1 ? *_1 : static_cast<int>(42))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorWithDefArg *)(new MR::CSharp::ConvCtorWithDefArg[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetPtr(const MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtorWithDefArg *)(((const MR::CSharp::ConvCtorWithDefArg *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetMutablePtr(MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorWithDefArg *)(((MR::CSharp::ConvCtorWithDefArg *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother(const MR_CSharp_ConvCtorWithDefArg *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorWithDefArg *)new MR::CSharp::ConvCtorWithDefArg(MR::CSharp::ConvCtorWithDefArg(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorWithDefArg(*(MR::CSharp::ConvCtorWithDefArg *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorWithDefArg_Destroy(const MR_CSharp_ConvCtorWithDefArg *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtorWithDefArg *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorWithDefArg_DestroyArray(const MR_CSharp_ConvCtorWithDefArg *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtorWithDefArg *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_AssignFromAnother(MR_CSharp_ConvCtorWithDefArg *_this, const MR_CSharp_ConvCtorWithDefArg *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorWithDefArg *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorWithDefArg *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorWithDefArg(*(MR::CSharp::ConvCtorWithDefArg *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorNonTrivialRestricted);
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)new MR::CSharp::ConvCtorNonTrivialRestricted(MR::CSharp::ConvCtorNonTrivialRestricted(
        (MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivialRestricted), MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivialRestricted))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetPtr(const MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtorNonTrivialRestricted *)(((const MR::CSharp::ConvCtorNonTrivialRestricted *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)(((MR::CSharp::ConvCtorNonTrivialRestricted *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_Construct(int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)new MR::CSharp::ConvCtorNonTrivialRestricted(MR::CSharp::ConvCtorNonTrivialRestricted(
        _1
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorNonTrivialRestricted_Destroy(const MR_CSharp_ConvCtorNonTrivialRestricted *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtorNonTrivialRestricted *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorNonTrivialRestricted_DestroyArray(const MR_CSharp_ConvCtorNonTrivialRestricted *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtorNonTrivialRestricted *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother(MR_CSharp_ConvCtorNonTrivialRestricted *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorNonTrivialRestricted);
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorNonTrivialRestricted *)(_this)).operator=(
        (MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivialRestricted), MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivialRestricted))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorExposed MR_CSharp_ConvCtorExposed_Construct(int _1)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_CSharp_ConvCtorExposed), MR::CSharp::ConvCtorExposed(
        _1
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorCopyButNoMove);
    return (MR_CSharp_ConvCtorCopyButNoMove *)new MR::CSharp::ConvCtorCopyButNoMove(MR::CSharp::ConvCtorCopyButNoMove(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorCopyButNoMove), MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorCopyButNoMove))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetPtr(const MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtorCopyButNoMove *)(((const MR::CSharp::ConvCtorCopyButNoMove *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetMutablePtr(MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorCopyButNoMove *)(((MR::CSharp::ConvCtorCopyButNoMove *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_Construct(int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorCopyButNoMove *)new MR::CSharp::ConvCtorCopyButNoMove(MR::CSharp::ConvCtorCopyButNoMove(
        _1
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorCopyButNoMove_Destroy(const MR_CSharp_ConvCtorCopyButNoMove *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtorCopyButNoMove *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorCopyButNoMove_DestroyArray(const MR_CSharp_ConvCtorCopyButNoMove *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtorCopyButNoMove *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother(MR_CSharp_ConvCtorCopyButNoMove *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorCopyButNoMove);
    return (MR_CSharp_ConvCtorCopyButNoMove *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorCopyButNoMove *)(_this)).operator=(
        mrbindc_details::unmove((MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorCopyButNoMove), MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorCopyButNoMove)))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial());
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)(new MR::CSharp::ConvCtorTrivial[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetPtr(const MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtorTrivial *)(((const MR::CSharp::ConvCtorTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)(((MR::CSharp::ConvCtorTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_ConstructFromAnother(const MR_CSharp_ConvCtorTrivial *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_Construct(int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial(
        _1
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorTrivial_Destroy(const MR_CSharp_ConvCtorTrivial *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtorTrivial *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorTrivial_DestroyArray(const MR_CSharp_ConvCtorTrivial *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtorTrivial *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_AssignFromAnother(MR_CSharp_ConvCtorTrivial *_this, const MR_CSharp_ConvCtorTrivial *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorTrivial *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(::MR::CSharp::test_class_convtrivial(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)a)),
        (b ? MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)b) : static_cast<MR::CSharp::ConvCtorTrivial>(MR::CSharp::ConvCtorTrivial{}))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ref(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)std::addressof(::MR::CSharp::test_class_convtrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ConvCtorTrivial *)(a)),
        (b ? *(MR::CSharp::ConvCtorTrivial *)(b) : static_cast<MR::CSharp::ConvCtorTrivial &>(default_convtrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cref(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorTrivial *)std::addressof(::MR::CSharp::test_class_convtrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ConvCtorTrivial *)(a)),
        (b ? *(const MR::CSharp::ConvCtorTrivial *)(b) : static_cast<const MR::CSharp::ConvCtorTrivial &>(default_convtrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ptr(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b, MR_CSharp_ConvCtorTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)(::MR::CSharp::test_class_convtrivial_ptr(
        ((MR::CSharp::ConvCtorTrivial *)a),
        ((MR::CSharp::ConvCtorTrivial *)b),
        (c ? (MR::CSharp::ConvCtorTrivial *)(*c) : static_cast<MR::CSharp::ConvCtorTrivial *>(&default_convtrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cptr(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b, const MR_CSharp_ConvCtorTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorTrivial *)(::MR::CSharp::test_class_convtrivial_cptr(
        ((const MR::CSharp::ConvCtorTrivial *)a),
        ((const MR::CSharp::ConvCtorTrivial *)b),
        (c ? (const MR::CSharp::ConvCtorTrivial *)(*c) : static_cast<const MR::CSharp::ConvCtorTrivial *>(&default_convtrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial());
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivial *)(new MR::CSharp::ConvCtorNonTrivial[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetPtr(const MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ConvCtorNonTrivial *)(((const MR::CSharp::ConvCtorNonTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivial *)(((MR::CSharp::ConvCtorNonTrivial *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorNonTrivial);
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_Construct(int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial(
        _1
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorNonTrivial_Destroy(const MR_CSharp_ConvCtorNonTrivial *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ConvCtorNonTrivial *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ConvCtorNonTrivial_DestroyArray(const MR_CSharp_ConvCtorNonTrivial *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ConvCtorNonTrivial *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(MR_CSharp_ConvCtorNonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ConvCtorNonTrivial);
    return (MR_CSharp_ConvCtorNonTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorNonTrivial *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial(MR_C_PassBy a_pass_by, MR_CSharp_ConvCtorNonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_ConvCtorNonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, MR::CSharp::ConvCtorNonTrivial);
    MRBINDC_CLASSARG_GUARD(b, MR::CSharp::ConvCtorNonTrivial);
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(::MR::CSharp::test_class_convnontrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(a, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(a, MR::CSharp::ConvCtorNonTrivial)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (MR::CSharp::ConvCtorNonTrivial{}), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(b, MR::CSharp::ConvCtorNonTrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ref(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorNonTrivial *)std::addressof(::MR::CSharp::test_class_convnontrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ConvCtorNonTrivial *)(a)),
        (b ? *(MR::CSharp::ConvCtorNonTrivial *)(b) : static_cast<MR::CSharp::ConvCtorNonTrivial &>(default_convnontrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cref(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorNonTrivial *)std::addressof(::MR::CSharp::test_class_convnontrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ConvCtorNonTrivial *)(a)),
        (b ? *(const MR::CSharp::ConvCtorNonTrivial *)(b) : static_cast<const MR::CSharp::ConvCtorNonTrivial &>(default_convnontrivial))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ptr(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b, MR_CSharp_ConvCtorNonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorNonTrivial *)(::MR::CSharp::test_class_convnontrivial_ptr(
        ((MR::CSharp::ConvCtorNonTrivial *)a),
        ((MR::CSharp::ConvCtorNonTrivial *)b),
        (c ? (MR::CSharp::ConvCtorNonTrivial *)(*c) : static_cast<MR::CSharp::ConvCtorNonTrivial *>(&default_convnontrivial))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cptr(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b, const MR_CSharp_ConvCtorNonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorNonTrivial *)(::MR::CSharp::test_class_convnontrivial_cptr(
        ((const MR::CSharp::ConvCtorNonTrivial *)a),
        ((const MR::CSharp::ConvCtorNonTrivial *)b),
        (c ? (const MR::CSharp::ConvCtorNonTrivial *)(*c) : static_cast<const MR::CSharp::ConvCtorNonTrivial *>(&default_convnontrivial))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayout_foo(MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayout_bar(const MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).bar();
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayout_blah(void)
{
    MRBINDC_TRY(
    MR::CSharp::ExposedLayout::blah();
    ) // MRBINDC_TRY
}

void MR_C_incr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator++();
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_ExposedLayout_ref_int(MR_CSharp_ExposedLayout *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator+(
        _1
    );
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_mul_MR_CSharp_ExposedLayout_int(const MR_CSharp_ExposedLayout *_this, int _1)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator*(
        _1
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_add_const_MR_CSharp_ExposedLayout_ref_int(const MR_CSharp_ExposedLayout *_this, int _1)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator+(
        _1
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *_this, const MR_CSharp_ExposedLayout *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_ExposedLayout_float(MR_CSharp_ExposedLayout *_this, float _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_ExposedLayout_char(MR_CSharp_ExposedLayout *_this, char _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator<(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_sub_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout _2)
{
    MRBINDC_TRY(
    return operator-(
        _1,
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _2)
    );
    ) // MRBINDC_TRY
}

int MR_C_div_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout *_2)
{
    MRBINDC_TRY(
    return operator/(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ExposedLayout *)(_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_int_MR_CSharp_ExposedLayout(int _1, const MR_CSharp_ExposedLayout *_2)
{
    MRBINDC_TRY(
    return operator%(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_2))
    );
    ) // MRBINDC_TRY
}

void MR_C_decr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout _1)
{
    MRBINDC_TRY(
    ::MR::CSharp::operator--(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _1)
    );
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout a, const MR_CSharp_ExposedLayout *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayout), ::MR::CSharp::test_exposed(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), a),
        (b ? MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), *b) : MR::CSharp::ExposedLayout(default_exposed))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)std::addressof(::MR::CSharp::test_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ExposedLayout *)(a)),
        (b ? *(MR::CSharp::ExposedLayout *)(b) : static_cast<MR::CSharp::ExposedLayout &>(default_exposed))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)std::addressof(::MR::CSharp::test_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ExposedLayout *)(a)),
        (b ? *(const MR::CSharp::ExposedLayout *)(b) : static_cast<const MR::CSharp::ExposedLayout &>(default_exposed))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_rref(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_exposed_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::ExposedLayout *)(a))),
        (b ? std::move(*(MR::CSharp::ExposedLayout *)(b)) : static_cast<MR::CSharp::ExposedLayout &&>((MR::CSharp::ExposedLayout &&)default_exposed))
    )));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_crref(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_exposed_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::ExposedLayout *)(a))),
        (b ? std::move(*(const MR::CSharp::ExposedLayout *)(b)) : static_cast<const MR::CSharp::ExposedLayout &&>((MR::CSharp::ExposedLayout &&)default_exposed))
    )));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)(::MR::CSharp::test_exposed_ptr(
        ((MR::CSharp::ExposedLayout *)a),
        ((MR::CSharp::ExposedLayout *)b),
        (c ? (MR::CSharp::ExposedLayout *)(*c) : static_cast<MR::CSharp::ExposedLayout *>(&default_exposed))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, const MR_CSharp_ExposedLayout *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)(::MR::CSharp::test_exposed_cptr(
        ((const MR::CSharp::ExposedLayout *)a),
        ((const MR::CSharp::ExposedLayout *)b),
        (c ? (const MR::CSharp::ExposedLayout *)(*c) : static_cast<const MR::CSharp::ExposedLayout *>(&default_exposed))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_vec(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(::MR::CSharp::test_exposed_vec());
    ) // MRBINDC_TRY
}

MR_CSharp_NonTrivial *MR_CSharp_asave_ref_in_exposed_layout(MR_CSharp_ExposedLayout *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::asave_ref_in_exposed_layout(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::ExposedLayout *)(ref))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayoutSh_foo(MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).foo();
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayoutSh_bar(const MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).bar();
    ) // MRBINDC_TRY
}

void MR_CSharp_ExposedLayoutSh_blah(void)
{
    MRBINDC_TRY(
    MR::CSharp::ExposedLayoutSh::blah();
    ) // MRBINDC_TRY
}

void MR_C_incr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator++();
    ) // MRBINDC_TRY
}

int MR_C_add_MR_CSharp_ExposedLayoutSh_int(MR_CSharp_ExposedLayoutSh *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator+(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_mul_MR_CSharp_ExposedLayoutSh_int(const MR_CSharp_ExposedLayoutSh *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator*(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh_float(MR_CSharp_ExposedLayoutSh *_this, float _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_CSharp_ExposedLayoutSh_char(MR_CSharp_ExposedLayoutSh *_this, char _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator<(
        _1
    );
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayout *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_sub_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh _2)
{
    MRBINDC_TRY(
    return operator-(
        _1,
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), _2)
    );
    ) // MRBINDC_TRY
}

int MR_C_div_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh *_2)
{
    MRBINDC_TRY(
    return operator/(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_int_MR_CSharp_ExposedLayoutSh(int _1, const MR_CSharp_ExposedLayoutSh *_2)
{
    MRBINDC_TRY(
    return operator%(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_2))
    );
    ) // MRBINDC_TRY
}

void MR_C_decr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh _1)
{
    MRBINDC_TRY(
    ::MR::CSharp::operator--(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), _1)
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_CSharp_make_exposed_sh(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(::MR::CSharp::make_exposed_sh());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh a, const MR_CSharp_ExposedLayoutSh *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutSh), ::MR::CSharp::test_exposed(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), a),
        (b ? MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *b) : MR::CSharp::ExposedLayoutSh(default_exposed_sh))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(a)),
        (b ? *(MR::CSharp::ExposedLayoutSh *)(b) : static_cast<MR::CSharp::ExposedLayoutSh &>(default_exposed_sh))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(a)),
        (b ? *(const MR::CSharp::ExposedLayoutSh *)(b) : static_cast<const MR::CSharp::ExposedLayoutSh &>(default_exposed_sh))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b, MR_CSharp_ExposedLayoutSh *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_exposed_ptr(
        ((MR::CSharp::ExposedLayoutSh *)a),
        ((MR::CSharp::ExposedLayoutSh *)b),
        (c ? (MR::CSharp::ExposedLayoutSh *)(*c) : static_cast<MR::CSharp::ExposedLayoutSh *>(&default_exposed_sh))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b, const MR_CSharp_ExposedLayoutSh *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_exposed_cptr(
        ((const MR::CSharp::ExposedLayoutSh *)a),
        ((const MR::CSharp::ExposedLayoutSh *)b),
        (c ? (const MR::CSharp::ExposedLayoutSh *)(*c) : static_cast<const MR::CSharp::ExposedLayoutSh *>(&default_exposed_sh))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_2(int _1, int _2)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutB), MR::CSharp::ExposedLayoutB(
        _1,
        _2
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_1(const MR_CSharp_A *_1)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutB), MR::CSharp::ExposedLayoutB(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::A *)(_1))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_ExposedLayoutB(const MR_CSharp_ExposedLayoutB *_1, const MR_CSharp_ExposedLayoutB *_2)
{
    MRBINDC_TRY(
    return operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutB *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayoutB *)(_2))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_ArrayMembers_Get_i(const MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).i);
}

void MR_CSharp_ArrayMembers_Set_i(MR_CSharp_ArrayMembers *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).i = value;
}

int *MR_CSharp_ArrayMembers_GetMutable_i(MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).i);
}

const int *MR_CSharp_ArrayMembers_Get_ia(const MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).ia[0]);
}

int *MR_CSharp_ArrayMembers_GetMutable_ia(MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).ia[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_ia(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::ia)>;
}

const int (*MR_CSharp_ArrayMembers_Get_iaa(const MR_CSharp_ArrayMembers *_this))[4]
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).iaa[0]);
}

int (*MR_CSharp_ArrayMembers_GetMutable_iaa(MR_CSharp_ArrayMembers *_this))[4]
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).iaa[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_iaa(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::iaa)>;
}

const int *MR_CSharp_ArrayMembers_Get_ci(const MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).ci);
}

const int *MR_CSharp_ArrayMembers_Get_cia(const MR_CSharp_ArrayMembers *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).cia[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_cia(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::cia)>;
}

const int (*MR_CSharp_ArrayMembers_Get_ciaa(const MR_CSharp_ArrayMembers *_this))[4]
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).ciaa[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_ciaa(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::ciaa)>;
}

const MR_C_std_string *MR_CSharp_ArrayMembers_Get_s(const MR_CSharp_ArrayMembers *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).s);
}

void MR_CSharp_ArrayMembers_Set_s(MR_CSharp_ArrayMembers *_this, const char *value, const char *value_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).s = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_CSharp_ArrayMembers_GetMutable_s(MR_CSharp_ArrayMembers *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).s);
}

const MR_C_std_string *MR_CSharp_ArrayMembers_Get_sa(const MR_CSharp_ArrayMembers *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).sa[0]);
}

MR_C_std_string *MR_CSharp_ArrayMembers_GetMutable_sa(MR_CSharp_ArrayMembers *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ArrayMembers *)(_this)).sa[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_sa(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::sa)>;
}

const MR_C_std_string *MR_CSharp_ArrayMembers_Get_cs(const MR_CSharp_ArrayMembers *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).cs);
}

const MR_C_std_string *MR_CSharp_ArrayMembers_Get_csa(const MR_CSharp_ArrayMembers *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ArrayMembers *)(_this)).csa[0]);
}

size_t MR_CSharp_ArrayMembers_GetSize_csa(void)
{
    return std::extent_v<decltype(MR::CSharp::ArrayMembers::csa)>;
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_ArrayMembers *)new MR::CSharp::ArrayMembers(MR::CSharp::ArrayMembers());
    ) // MRBINDC_TRY
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_ArrayMembers *)(new MR::CSharp::ArrayMembers[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetPtr(const MR_CSharp_ArrayMembers *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ArrayMembers *)(((const MR::CSharp::ArrayMembers *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetMutablePtr(MR_CSharp_ArrayMembers *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ArrayMembers *)(((MR::CSharp::ArrayMembers *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ArrayMembers *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::ArrayMembers);
    return (MR_CSharp_ArrayMembers *)new MR::CSharp::ArrayMembers(MR::CSharp::ArrayMembers(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ArrayMembers), MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ArrayMembers), MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_END(_other, MR::CSharp::ArrayMembers))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_ArrayMembers_Destroy(const MR_CSharp_ArrayMembers *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ArrayMembers *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ArrayMembers_DestroyArray(const MR_CSharp_ArrayMembers *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ArrayMembers *)_this);
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_CSharp_test_optint(const int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)new std::optional<int>(::MR::CSharp::test_optint(
        (a ? std::optional<int>(*a) : std::nullopt),
        (b ? std::optional<int>(*(std::optional<int> *)b) : static_cast<std::optional<int>>(default_optint)),
        (c ? std::optional<int>(*(std::optional<int> *)c) : static_cast<std::optional<int>>(default_optint))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_CSharp_test_optint_ref(MR_C_std_optional_int *a, MR_C_std_optional_int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)std::addressof(::MR::CSharp::test_optint_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<int> *)(a)),
        (b ? *(std::optional<int> *)(b) : static_cast<std::optional<int> &>(default_optint))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_int *MR_CSharp_test_optint_cref(const int *a, const MR_C_std_optional_int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_int *)std::addressof(::MR::CSharp::test_optint_cref(
        (a ? std::optional<int>(*a) : std::nullopt),
        (b ? std::optional<int>(*(std::optional<int> *)b) : static_cast<std::optional<int>>(default_optint))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_int *MR_CSharp_test_optint_ptr(MR_C_std_optional_int *a, MR_C_std_optional_int *b, MR_C_std_optional_int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)(::MR::CSharp::test_optint_ptr(
        ((std::optional<int> *)a),
        ((std::optional<int> *)b),
        (c ? (std::optional<int> *)(*c) : static_cast<std::optional<int> *>(&default_optint))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_int *MR_CSharp_test_optint_cptr(const MR_C_std_optional_int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_int *)(::MR::CSharp::test_optint_cptr(
        ((const std::optional<int> *)a),
        ((const std::optional<int> *)b),
        (c ? (const std::optional<int> *)(*c) : static_cast<const std::optional<int> *>(&default_optint))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b, MR_C_PassBy c_pass_by, MR_C_std_optional_std_string *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(b, std::optional<std::string>);
    MRBINDC_CLASSARG_GUARD(c, std::optional<std::string>);
    return (MR_C_std_optional_std_string *)new std::optional<std::string>(::MR::CSharp::test_optstr(
        (a ? std::optional<std::string>(a_end ? std::string(a, a_end) : std::string(a)) : std::nullopt),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<std::string>) MRBINDC_CLASSARG_COPY(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(b, std::optional<std::string>)),
        (MRBINDC_CLASSARG_DEF_CTOR(c, std::optional<std::string>) MRBINDC_CLASSARG_COPY(c, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(c, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(c, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(c, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(c, std::optional<std::string>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr_ref(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_std_string *)std::addressof(::MR::CSharp::test_optstr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<std::string> *)(a)),
        (b ? *(std::optional<std::string> *)(b) : static_cast<std::optional<std::string> &>(default_optstr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cref(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(b, std::optional<std::string>);
    return (const MR_C_std_optional_std_string *)std::addressof(::MR::CSharp::test_optstr_cref(
        (a ? std::optional<std::string>(a_end ? std::string(a, a_end) : std::string(a)) : std::nullopt),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<std::string>) MRBINDC_CLASSARG_COPY(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(b, std::optional<std::string>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr_ptr(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b, MR_C_std_optional_std_string *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_std_string *)(::MR::CSharp::test_optstr_ptr(
        ((std::optional<std::string> *)a),
        ((std::optional<std::string> *)b),
        (c ? (std::optional<std::string> *)(*c) : static_cast<std::optional<std::string> *>(&default_optstr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cptr(const MR_C_std_optional_std_string *a, const MR_C_std_optional_std_string *b, const MR_C_std_optional_std_string *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_std_string *)(::MR::CSharp::test_optstr_cptr(
        ((const std::optional<std::string> *)a),
        ((const std::optional<std::string> *)b),
        (c ? (const std::optional<std::string> *)(*c) : static_cast<const std::optional<std::string> *>(&default_optstr))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(::MR::CSharp::test_opttriv(
        (a ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)b) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv)),
        (c ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)c) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ref(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_opttriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::Trivial> *)(a)),
        (b ? *(std::optional<MR::CSharp::Trivial> *)(b) : static_cast<std::optional<MR::CSharp::Trivial> &>(default_opttriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cref(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_opttriv_cref(
        (a ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)b) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ptr(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b, MR_C_std_optional_MR_CSharp_Trivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)(::MR::CSharp::test_opttriv_ptr(
        ((std::optional<MR::CSharp::Trivial> *)a),
        ((std::optional<MR::CSharp::Trivial> *)b),
        (c ? (std::optional<MR::CSharp::Trivial> *)(*c) : static_cast<std::optional<MR::CSharp::Trivial> *>(&default_opttriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cptr(const MR_C_std_optional_MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_Trivial *)(::MR::CSharp::test_opttriv_cptr(
        ((const std::optional<MR::CSharp::Trivial> *)a),
        ((const std::optional<MR::CSharp::Trivial> *)b),
        (c ? (const std::optional<MR::CSharp::Trivial> *)(*c) : static_cast<const std::optional<MR::CSharp::Trivial> *>(&default_opttriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b, MR_C_PassBy c_pass_by, MR_CSharp_NonTrivial *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, MR::CSharp::NonTrivial);
    MRBINDC_CLASSARG_GUARD(b, MR::CSharp::NonTrivial);
    MRBINDC_CLASSARG_GUARD(c, MR::CSharp::NonTrivial);
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)new std::optional<MR::CSharp::NonTrivial>(::MR::CSharp::test_optnontriv(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(a, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(a, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(b, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(c, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(c, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(c, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(c, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(c, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(c, std::optional<MR::CSharp::NonTrivial>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ref(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_optnontriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::NonTrivial> *)(a)),
        (b ? *(std::optional<MR::CSharp::NonTrivial> *)(b) : static_cast<std::optional<MR::CSharp::NonTrivial> &>(default_optnontriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cref(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, MR::CSharp::NonTrivial);
    MRBINDC_CLASSARG_GUARD(b, MR::CSharp::NonTrivial);
    return (const MR_C_std_optional_MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_optnontriv_cref(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(a, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(a, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(b, std::optional<MR::CSharp::NonTrivial>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ptr(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b, MR_C_std_optional_MR_CSharp_NonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)(::MR::CSharp::test_optnontriv_ptr(
        ((std::optional<MR::CSharp::NonTrivial> *)a),
        ((std::optional<MR::CSharp::NonTrivial> *)b),
        (c ? (std::optional<MR::CSharp::NonTrivial> *)(*c) : static_cast<std::optional<MR::CSharp::NonTrivial> *>(&default_optnontriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cptr(const MR_C_std_optional_MR_CSharp_NonTrivial *a, const MR_C_std_optional_MR_CSharp_NonTrivial *b, const MR_C_std_optional_MR_CSharp_NonTrivial *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_NonTrivial *)(::MR::CSharp::test_optnontriv_cptr(
        ((const std::optional<MR::CSharp::NonTrivial> *)a),
        ((const std::optional<MR::CSharp::NonTrivial> *)b),
        (c ? (const std::optional<MR::CSharp::NonTrivial> *)(*c) : static_cast<const std::optional<MR::CSharp::NonTrivial> *>(&default_optnontriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(::MR::CSharp::test_optshexp(
        (a ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp)),
        (c ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)c) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ref(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_optshexp_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(a)),
        (b ? *(std::optional<MR::CSharp::ExposedLayoutSh> *)(b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh> &>(default_optshexp))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cref(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_optshexp_cref(
        (a ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ptr(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_optshexp_ptr(
        ((std::optional<MR::CSharp::ExposedLayoutSh> *)a),
        ((std::optional<MR::CSharp::ExposedLayoutSh> *)b),
        (c ? (std::optional<MR::CSharp::ExposedLayoutSh> *)(*c) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh> *>(&default_optshexp))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cptr(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_optshexp_cptr(
        ((const std::optional<MR::CSharp::ExposedLayoutSh> *)a),
        ((const std::optional<MR::CSharp::ExposedLayoutSh> *)b),
        (c ? (const std::optional<MR::CSharp::ExposedLayoutSh> *)(*c) : static_cast<const std::optional<MR::CSharp::ExposedLayoutSh> *>(&default_optshexp))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(::MR::CSharp::test_optshtriv(
        (a ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)b) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv)),
        (c ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)c) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ref(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_optshtriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::SA> *)(a)),
        (b ? *(std::optional<MR::CSharp::SA> *)(b) : static_cast<std::optional<MR::CSharp::SA> &>(default_optshtriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cref(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_optshtriv_cref(
        (a ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)b) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ptr(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b, MR_C_std_optional_MR_CSharp_SA *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)(::MR::CSharp::test_optshtriv_ptr(
        ((std::optional<MR::CSharp::SA> *)a),
        ((std::optional<MR::CSharp::SA> *)b),
        (c ? (std::optional<MR::CSharp::SA> *)(*c) : static_cast<std::optional<MR::CSharp::SA> *>(&default_optshtriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cptr(const MR_C_std_optional_MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_SA *)(::MR::CSharp::test_optshtriv_cptr(
        ((const std::optional<MR::CSharp::SA> *)a),
        ((const std::optional<MR::CSharp::SA> *)b),
        (c ? (const std::optional<MR::CSharp::SA> *)(*c) : static_cast<const std::optional<MR::CSharp::SA> *>(&default_optshtriv))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_test_tag(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::test_tag(
        std::greater<int>{},
        std::greater<int>{}
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_test_tag_cref(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::test_tag_cref(
        std::greater<int>{},
        std::greater<int>{}
    );
    ) // MRBINDC_TRY
}

bool MR_CSharp_test_tag_ptr(void)
{
    MRBINDC_TRY(
    return ::MR::CSharp::test_tag_ptr();
    ) // MRBINDC_TRY
}

bool MR_CSharp_test_tag_cptr(void)
{
    MRBINDC_TRY(
    return ::MR::CSharp::test_tag_cptr();
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)new std::variant<std::monostate, int, float>(::MR::CSharp::test_variant(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::variant<std::monostate, int, float>(*(std::variant<std::monostate, int, float> *)a)),
        (b ? std::variant<std::monostate, int, float>(*(std::variant<std::monostate, int, float> *)b) : static_cast<std::variant<std::monostate, int, float>>(default_variant))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ref(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)std::addressof(::MR::CSharp::test_variant_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::variant<std::monostate, int, float> *)(a)),
        (b ? *(std::variant<std::monostate, int, float> *)(b) : static_cast<std::variant<std::monostate, int, float> &>(default_variant))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cref(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_variant_std_monostate_int_float *)std::addressof(::MR::CSharp::test_variant_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::variant<std::monostate, int, float> *)(a)),
        (b ? *(const std::variant<std::monostate, int, float> *)(b) : static_cast<const std::variant<std::monostate, int, float> &>(default_variant))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ptr(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)(::MR::CSharp::test_variant_ptr(
        ((std::variant<std::monostate, int, float> *)a),
        (b ? (std::variant<std::monostate, int, float> *)(*b) : static_cast<std::variant<std::monostate, int, float> *>(&default_variant))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cptr(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_variant_std_monostate_int_float *)(::MR::CSharp::test_variant_cptr(
        ((const std::variant<std::monostate, int, float> *)a),
        (b ? (const std::variant<std::monostate, int, float> *)(*b) : static_cast<const std::variant<std::monostate, int, float> *>(&default_variant))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_variant_std_monostate_int_float_float *MR_CSharp_test_variant_with_repeated_types(void)
{
    MRBINDC_TRY(
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(::MR::CSharp::test_variant_with_repeated_types());
    ) // MRBINDC_TRY
}

MR_C_std_ostream *MR_CSharp_test_iostreams_ref(MR_C_std_istream *_1)
{
    MRBINDC_TRY(
    return (MR_C_std_ostream *)std::addressof(::MR::CSharp::test_iostreams_ref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::istream *)(_1))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_ostream *MR_CSharp_test_iostreams_ptr(MR_C_std_istream *_1)
{
    MRBINDC_TRY(
    return (MR_C_std_ostream *)(::MR::CSharp::test_iostreams_ptr(
        ((std::istream *)_1)
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_ostream *MR_CSharp_test_iostreams_cref(const MR_C_std_istream *_1)
{
    MRBINDC_TRY(
    return (const MR_C_std_ostream *)std::addressof(::MR::CSharp::test_iostreams_cref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::istream *)(_1))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_ostream *MR_CSharp_test_iostreams_cptr(const MR_C_std_istream *_1)
{
    MRBINDC_TRY(
    return (const MR_C_std_ostream *)(::MR::CSharp::test_iostreams_cptr(
        ((const std::istream *)_1)
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_test_uniqueptr(int *a, int *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (::MR::CSharp::test_uniqueptr(
        std::unique_ptr<int>(a),
        (b ? std::unique_ptr<int>(*b) : static_cast<std::unique_ptr<int>>(std::move(default_uniqueptr)))
    )).release();
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ref(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_unique_ptr_int *)std::addressof(::MR::CSharp::test_uniqueptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::unique_ptr<int> *)(a)),
        (b ? *(std::unique_ptr<int> *)(b) : static_cast<std::unique_ptr<int> &>(default_uniqueptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cref(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_unique_ptr_int *)std::addressof(::MR::CSharp::test_uniqueptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::unique_ptr<int> *)(a)),
        (b ? *(const std::unique_ptr<int> *)(b) : static_cast<const std::unique_ptr<int> &>(default_uniqueptr))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ptr(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b, MR_C_std_unique_ptr_int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_unique_ptr_int *)(::MR::CSharp::test_uniqueptr_ptr(
        ((std::unique_ptr<int> *)a),
        ((std::unique_ptr<int> *)b),
        (c ? (std::unique_ptr<int> *)(*c) : static_cast<std::unique_ptr<int> *>(&default_uniqueptr))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cptr(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b, const MR_C_std_unique_ptr_int *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_unique_ptr_int *)(::MR::CSharp::test_uniqueptr_cptr(
        ((const std::unique_ptr<int> *)a),
        ((const std::unique_ptr<int> *)b),
        (c ? (const std::unique_ptr<int> *)(*c) : static_cast<const std::unique_ptr<int> *>(&default_uniqueptr))
    ));
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr_ref(int (*a)[42], int (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (&)[42]>(default_plainarr))
    ));
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr_cref(const int (*a)[42], const int (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (&)[42]>(default_plainarr))
    ));
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr_rref(int (*a)[42], int (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int (&&)[42]>((MR::CSharp::PlainArray &&)default_plainarr))
    )));
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr_crref(const int (*a)[42], const int (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int (&&)[42]>((MR::CSharp::PlainArray &&)default_plainarr))
    )));
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr_ptr(int (*a)[42], int (*b)[42], int (*const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr_ptr(
        a,
        b,
        (c ? *c : static_cast<int (*)[42]>(&default_plainarr))
    );
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr_cptr(const int (*a)[42], const int (*b)[42], const int (*const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*)[42]>(&default_plainarr))
    );
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr2_ref(int (*a)[10][20], int (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr2_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (&)[10][20]>(default_plainarr2))
    ));
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr2_cref(const int (*a)[10][20], const int (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr2_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (&)[10][20]>(default_plainarr2))
    ));
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr2_rref(int (*a)[10][20], int (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr2_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int (&&)[10][20]>((MR::CSharp::PlainArray2 &&)default_plainarr2))
    )));
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr2_crref(const int (*a)[10][20], const int (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr2_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int (&&)[10][20]>((MR::CSharp::PlainArray2 &&)default_plainarr2))
    )));
    ) // MRBINDC_TRY
}

int (*MR_CSharp_test_plainarr2_ptr(int (*a)[10][20], int (*b)[10][20], int (*const *c)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr2_ptr(
        a,
        b,
        (c ? *c : static_cast<int (*)[10][20]>(&default_plainarr2))
    );
    ) // MRBINDC_TRY
}

const int (*MR_CSharp_test_plainarr2_cptr(const int (*a)[10][20], const int (*b)[10][20], const int (*const *c)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr2_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*)[10][20]>(&default_plainarr2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ref(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[42])std::addressof(::MR::CSharp::test_plainarrenum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 (*)[42])(a)),
        (b ? *(MR::CSharp::E1 (*)[42])(b) : static_cast<MR::CSharp::E1 (&)[42]>(default_plainarrenum))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cref(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[42])std::addressof(::MR::CSharp::test_plainarrenum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 (*)[42])(a)),
        (b ? *(const MR::CSharp::E1 (*)[42])(b) : static_cast<const MR::CSharp::E1 (&)[42]>(default_plainarrenum))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ptr(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42], MR_CSharp_E1 (*const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[42])(::MR::CSharp::test_plainarrenum_ptr(
        ((MR::CSharp::E1 (*)[42])a),
        ((MR::CSharp::E1 (*)[42])b),
        (c ? (MR::CSharp::E1 (*)[42])(*c) : static_cast<MR::CSharp::E1 (*)[42]>(&default_plainarrenum))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cptr(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42], const MR_CSharp_E1 (*const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[42])(::MR::CSharp::test_plainarrenum_cptr(
        ((const MR::CSharp::E1 (*)[42])a),
        ((const MR::CSharp::E1 (*)[42])b),
        (c ? (const MR::CSharp::E1 (*)[42])(*c) : static_cast<const MR::CSharp::E1 (*)[42]>(&default_plainarrenum))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ref(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[10][20])std::addressof(::MR::CSharp::test_plainarrenum2_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 (*)[10][20])(a)),
        (b ? *(MR::CSharp::E1 (*)[10][20])(b) : static_cast<MR::CSharp::E1 (&)[10][20]>(default_plainarrenum2))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cref(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[10][20])std::addressof(::MR::CSharp::test_plainarrenum2_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 (*)[10][20])(a)),
        (b ? *(const MR::CSharp::E1 (*)[10][20])(b) : static_cast<const MR::CSharp::E1 (&)[10][20]>(default_plainarrenum2))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ptr(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20], MR_CSharp_E1 (*const *c)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[10][20])(::MR::CSharp::test_plainarrenum2_ptr(
        ((MR::CSharp::E1 (*)[10][20])a),
        ((MR::CSharp::E1 (*)[10][20])b),
        (c ? (MR::CSharp::E1 (*)[10][20])(*c) : static_cast<MR::CSharp::E1 (*)[10][20]>(&default_plainarrenum2))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cptr(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20], const MR_CSharp_E1 (*const *c)[10][20]))[10][20]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[10][20])(::MR::CSharp::test_plainarrenum2_cptr(
        ((const MR::CSharp::E1 (*)[10][20])a),
        ((const MR::CSharp::E1 (*)[10][20])b),
        (c ? (const MR::CSharp::E1 (*)[10][20])(*c) : static_cast<const MR::CSharp::E1 (*)[10][20]>(&default_plainarrenum2))
    ));
    ) // MRBINDC_TRY
}

int (**MR_CSharp_test_ptrs1(int (**ptr)[42], int (**ref)[42]))[42]
{
    MRBINDC_TRY(
    return ::MR::CSharp::test_ptrs1(
        ptr,
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
    ) // MRBINDC_TRY
}

int (***MR_CSharp_test_ptrs2(int (***ptr)[42], int (***ref)[42]))[42]
{
    MRBINDC_TRY(
    return ::MR::CSharp::test_ptrs2(
        ptr,
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
    ) // MRBINDC_TRY
}

int **MR_CSharp_test_intptr_ref(int **a, int **b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int *&>(default_intptr))
    ));
    ) // MRBINDC_TRY
}

int *const *MR_CSharp_test_intptr_cref(int *const *a, int *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int *const &>(default_intptr))
    ));
    ) // MRBINDC_TRY
}

int **MR_CSharp_test_intptr_ptr(int **a, int **b, int **const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int **>(&default_intptr))
    );
    ) // MRBINDC_TRY
}

int *const *MR_CSharp_test_intptr_cptr(int *const *a, int *const *b, int *const *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int *const *>(&default_intptr))
    );
    ) // MRBINDC_TRY
}

const int **MR_CSharp_test_intcptr_ref(const int **a, const int **b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int *&>(default_intcptr))
    ));
    ) // MRBINDC_TRY
}

const int *const *MR_CSharp_test_intcptr_cref(const int *const *a, const int *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int *const &>(default_intcptr))
    ));
    ) // MRBINDC_TRY
}

const int **MR_CSharp_test_intcptr_ptr(const int **a, const int **b, const int **const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intcptr_ptr(
        a,
        b,
        (c ? *c : static_cast<const int **>(&default_intcptr))
    );
    ) // MRBINDC_TRY
}

const int *const *MR_CSharp_test_intcptr_cptr(const int *const *a, const int *const *b, const int *const *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intcptr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int *const *>(&default_intcptr))
    );
    ) // MRBINDC_TRY
}

int ***MR_CSharp_test_intptrptr_ref(int ***a, int ***b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int **&>(default_intptrptr))
    ));
    ) // MRBINDC_TRY
}

int **const *MR_CSharp_test_intptrptr_cref(int **const *a, int **const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int **const &>(default_intptrptr))
    ));
    ) // MRBINDC_TRY
}

int ***MR_CSharp_test_intptrptr_ptr(int ***a, int ***b, int ***const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int ***>(&default_intptrptr))
    );
    ) // MRBINDC_TRY
}

int **const *MR_CSharp_test_intptrptr_cptr(int **const *a, int **const *b, int **const *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int **const *>(&default_intptrptr))
    );
    ) // MRBINDC_TRY
}

void **MR_CSharp_test_voidptr_ref(void **a, void **b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void *&>(default_voidptr))
    ));
    ) // MRBINDC_TRY
}

void *const *MR_CSharp_test_voidptr_cref(void *const *a, void *const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void *const &>(default_voidptr))
    ));
    ) // MRBINDC_TRY
}

void **MR_CSharp_test_voidptr_ptr(void **a, void **b, void **const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptr_ptr(
        a,
        b,
        (c ? *c : static_cast<void **>(&default_voidptr))
    );
    ) // MRBINDC_TRY
}

void *const *MR_CSharp_test_voidptr_cptr(void *const *a, void *const *b, void *const *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptr_cptr(
        a,
        b,
        (c ? *c : static_cast<void *const *>(&default_voidptr))
    );
    ) // MRBINDC_TRY
}

void ***MR_CSharp_test_voidptrptr_ref(void ***a, void ***b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void **&>(default_voidptrptr))
    ));
    ) // MRBINDC_TRY
}

void **const *MR_CSharp_test_voidptrptr_cref(void **const *a, void **const *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void **const &>(default_voidptrptr))
    ));
    ) // MRBINDC_TRY
}

void ***MR_CSharp_test_voidptrptr_ptr(void ***a, void ***b, void ***const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<void ***>(&default_voidptrptr))
    );
    ) // MRBINDC_TRY
}

void **const *MR_CSharp_test_voidptrptr_cptr(void **const *a, void **const *b, void **const *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<void **const *>(&default_voidptrptr))
    );
    ) // MRBINDC_TRY
}

int (**MR_CSharp_test_arrptr_ref(int (**a)[42], int (**b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (*&)[42]>(default_arrptr))
    ));
    ) // MRBINDC_TRY
}

int (*const *MR_CSharp_test_arrptr_cref(int (*const *a)[42], int (*const *b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (*const &)[42]>(default_arrptr))
    ));
    ) // MRBINDC_TRY
}

int (**MR_CSharp_test_arrptr_ptr(int (**a)[42], int (**b)[42], int (**const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int (**)[42]>(&default_arrptr))
    );
    ) // MRBINDC_TRY
}

int (*const *MR_CSharp_test_arrptr_cptr(int (*const *a)[42], int (*const *b)[42], int (*const *const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int (*const *)[42]>(&default_arrptr))
    );
    ) // MRBINDC_TRY
}

const int (**MR_CSharp_test_arrcptr_ref(const int (**a)[42], const int (**b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (*&)[42]>(default_arrcptr))
    ));
    ) // MRBINDC_TRY
}

const int (*const *MR_CSharp_test_arrcptr_cref(const int (*const *a)[42], const int (*const *b)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (*const &)[42]>(default_arrcptr))
    ));
    ) // MRBINDC_TRY
}

const int (**MR_CSharp_test_arrcptr_ptr(const int (**a)[42], const int (**b)[42], const int (**const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrcptr_ptr(
        a,
        b,
        (c ? *c : static_cast<const int (**)[42]>(&default_arrcptr))
    );
    ) // MRBINDC_TRY
}

const int (*const *MR_CSharp_test_arrcptr_cptr(const int (*const *a)[42], const int (*const *b)[42], const int (*const *const *c)[42]))[42]
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrcptr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*const *)[42]>(&default_arrcptr))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_NameConflicts_Get_name_conflicts(const MR_CSharp_NameConflicts *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::NameConflicts *)(_this)).name_conflicts);
}

void MR_CSharp_NameConflicts_Set_name_conflicts(MR_CSharp_NameConflicts *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).name_conflicts = value;
}

int *MR_CSharp_NameConflicts_GetMutable_name_conflicts(MR_CSharp_NameConflicts *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).name_conflicts);
}

const MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_Get_a(const MR_CSharp_NameConflicts *_this)
{
    return (const MR_CSharp_NameConflicts_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::NameConflicts *)(_this)).a);
}

void MR_CSharp_NameConflicts_Set_a(MR_CSharp_NameConflicts *_this, const MR_CSharp_NameConflicts_A *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)value));
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_GetMutable_a(MR_CSharp_NameConflicts *_this)
{
    return (MR_CSharp_NameConflicts_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).a);
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts());
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)(new MR::CSharp::NameConflicts[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFrom(int name_conflicts, const MR_CSharp_NameConflicts_A *a)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts{
        name_conflicts,
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)a))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetPtr(const MR_CSharp_NameConflicts *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NameConflicts *)(((const MR::CSharp::NameConflicts *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetMutablePtr(MR_CSharp_NameConflicts *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)(((MR::CSharp::NameConflicts *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFromAnother(const MR_CSharp_NameConflicts *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts(*(MR::CSharp::NameConflicts *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflicts_Destroy(const MR_CSharp_NameConflicts *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NameConflicts *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflicts_DestroyArray(const MR_CSharp_NameConflicts *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NameConflicts *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_AssignFromAnother(MR_CSharp_NameConflicts *_this, const MR_CSharp_NameConflicts *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts(*(MR::CSharp::NameConflicts *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflicts_name_Conflicts(MR_CSharp_NameConflicts *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).name_Conflicts();
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts_A *)new MR::CSharp::NameConflicts::A(MR::CSharp::NameConflicts::A());
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts_A *)(new MR::CSharp::NameConflicts::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetPtr(const MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_NameConflicts_A *)(((const MR::CSharp::NameConflicts::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetMutablePtr(MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts_A *)(((MR::CSharp::NameConflicts::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_ConstructFromAnother(const MR_CSharp_NameConflicts_A *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts_A *)new MR::CSharp::NameConflicts::A(MR::CSharp::NameConflicts::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflicts_A_Destroy(const MR_CSharp_NameConflicts_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::NameConflicts::A *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflicts_A_DestroyArray(const MR_CSharp_NameConflicts_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::NameConflicts::A *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_AssignFromAnother(MR_CSharp_NameConflicts_A *_this, const MR_CSharp_NameConflicts_A *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_NameConflicts_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_nameConflicts(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::nameConflicts();
    ) // MRBINDC_TRY
}

void MR_CSharp_NameConflictsExposed_name_Conflicts_exposed(MR_CSharp_NameConflictsExposed *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflictsExposed *)(_this)).name_Conflicts_exposed();
    ) // MRBINDC_TRY
}

void MR_CSharp_nameConflictsExposed(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::nameConflictsExposed();
    ) // MRBINDC_TRY
}

void MR_CSharp_template_a_int(int _1)
{
    MRBINDC_TRY(
    ::MR::CSharp::template_a<int>(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_template_a_float(float _1)
{
    MRBINDC_TRY(
    ::MR::CSharp::template_a<float>(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_template_b_int(void)
{
    MRBINDC_TRY(
    return ::MR::CSharp::template_b<int>();
    ) // MRBINDC_TRY
}

float MR_CSharp_template_b_float(void)
{
    MRBINDC_TRY(
    return ::MR::CSharp::template_b<float>();
    ) // MRBINDC_TRY
}

void MR_CSharp_template_c_int(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::template_c<int>();
    ) // MRBINDC_TRY
}

void MR_CSharp_template_c_float(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::template_c<float>();
    ) // MRBINDC_TRY
}

void MR_CSharp_instantiate(void)
{
    MRBINDC_TRY(
    ::MR::CSharp::instantiate();
    ) // MRBINDC_TRY
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_AmbiguousTemplates *)new MR::CSharp::AmbiguousTemplates(MR::CSharp::AmbiguousTemplates());
    ) // MRBINDC_TRY
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_AmbiguousTemplates *)(new MR::CSharp::AmbiguousTemplates[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetPtr(const MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_AmbiguousTemplates *)(((const MR::CSharp::AmbiguousTemplates *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetMutablePtr(MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_AmbiguousTemplates *)(((MR::CSharp::AmbiguousTemplates *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_ConstructFromAnother(const MR_CSharp_AmbiguousTemplates *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_AmbiguousTemplates *)new MR::CSharp::AmbiguousTemplates(MR::CSharp::AmbiguousTemplates(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::AmbiguousTemplates(*(MR::CSharp::AmbiguousTemplates *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_Destroy(const MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::AmbiguousTemplates *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_DestroyArray(const MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::AmbiguousTemplates *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_AssignFromAnother(MR_CSharp_AmbiguousTemplates *_this, const MR_CSharp_AmbiguousTemplates *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_AmbiguousTemplates *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::AmbiguousTemplates(*(MR::CSharp::AmbiguousTemplates *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_template_a_int(MR_CSharp_AmbiguousTemplates *_this, int _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_a<int>(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_template_a_float(MR_CSharp_AmbiguousTemplates *_this, float _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_a<float>(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_CSharp_AmbiguousTemplates_template_b_int(MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_b<int>();
    ) // MRBINDC_TRY
}

float MR_CSharp_AmbiguousTemplates_template_b_float(MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_b<float>();
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_template_c_int(MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_c<int>();
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_template_c_float(MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_c<float>();
    ) // MRBINDC_TRY
}

void MR_CSharp_AmbiguousTemplates_instantiate(MR_CSharp_AmbiguousTemplates *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).instantiate();
    ) // MRBINDC_TRY
}

void MR_CSharp_ConstNonconstConflicts_foo_mut_int(MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_ConstNonconstConflicts_foo_float(const MR_CSharp_ConstNonconstConflicts *_this, float _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_ConstNonconstConflicts_foo_mut_char(MR_CSharp_ConstNonconstConflicts *_this, char _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_ConstNonconstConflicts_foo_char(const MR_CSharp_ConstNonconstConflicts *_this, char _1)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator+();
    ) // MRBINDC_TRY
}

int MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator+();
    ) // MRBINDC_TRY
}

void MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator~();
    ) // MRBINDC_TRY
}

void MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator~();
    ) // MRBINDC_TRY
}

int MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int(MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator/(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int(const MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator/(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1)
{
    MRBINDC_TRY(
    return operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1)
{
    MRBINDC_TRY(
    return operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1)
{
    MRBINDC_TRY(
    operator!(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1)
{
    MRBINDC_TRY(
    operator!(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitand_int_MR_CSharp_ConstNonconstConflicts_ref(int _1, MR_CSharp_ConstNonconstConflicts *_2)
{
    MRBINDC_TRY(
    return operator&(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitand_int_const_MR_CSharp_ConstNonconstConflicts_ref(int _1, const MR_CSharp_ConstNonconstConflicts *_2)
{
    MRBINDC_TRY(
    return operator&(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_2))
    );
    ) // MRBINDC_TRY
}

MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_sa(void)
{
    return (MR_CSharp_A *const *)std::addressof(MR::CSharp::ClassMemberPointersClass::sa);
}

void MR_CSharp_ClassMemberPointersClass_Set_sa(MR_CSharp_A *value)
{
    MR::CSharp::ClassMemberPointersClass::sa = ((MR::CSharp::A *)value);
}

MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_sa(void)
{
    return (MR_CSharp_A **)std::addressof(MR::CSharp::ClassMemberPointersClass::sa);
}

const MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_sb(void)
{
    return (const MR_CSharp_A *const *)std::addressof(MR::CSharp::ClassMemberPointersClass::sb);
}

void MR_CSharp_ClassMemberPointersClass_Set_sb(const MR_CSharp_A *value)
{
    MR::CSharp::ClassMemberPointersClass::sb = ((const MR::CSharp::A *)value);
}

const MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_sb(void)
{
    return (const MR_CSharp_A **)std::addressof(MR::CSharp::ClassMemberPointersClass::sb);
}

MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_sc(void)
{
    return (MR_CSharp_A *)std::addressof(MR::CSharp::ClassMemberPointersClass::sc);
}

const MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_sd(void)
{
    return (const MR_CSharp_A *)std::addressof(MR::CSharp::ClassMemberPointersClass::sd);
}

MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_a(const MR_CSharp_ClassMemberPointersClass *_this)
{
    return (MR_CSharp_A *const *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersClass *)(_this)).a);
}

void MR_CSharp_ClassMemberPointersClass_Set_a(MR_CSharp_ClassMemberPointersClass *_this, MR_CSharp_A *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersClass *)(_this)).a = ((MR::CSharp::A *)value);
}

MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_a(MR_CSharp_ClassMemberPointersClass *_this)
{
    return (MR_CSharp_A **)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersClass *)(_this)).a);
}

const MR_CSharp_A *const *MR_CSharp_ClassMemberPointersClass_Get_b(const MR_CSharp_ClassMemberPointersClass *_this)
{
    return (const MR_CSharp_A *const *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersClass *)(_this)).b);
}

void MR_CSharp_ClassMemberPointersClass_Set_b(MR_CSharp_ClassMemberPointersClass *_this, const MR_CSharp_A *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersClass *)(_this)).b = ((const MR::CSharp::A *)value);
}

const MR_CSharp_A **MR_CSharp_ClassMemberPointersClass_GetMutable_b(MR_CSharp_ClassMemberPointersClass *_this)
{
    return (const MR_CSharp_A **)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersClass *)(_this)).b);
}

MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_c(const MR_CSharp_ClassMemberPointersClass *_this)
{
    return (MR_CSharp_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersClass *)(_this)).c);
}

const MR_CSharp_A *MR_CSharp_ClassMemberPointersClass_Get_d(const MR_CSharp_ClassMemberPointersClass *_this)
{
    return (const MR_CSharp_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersClass *)(_this)).d);
}

MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_ConstructFromAnother(const MR_CSharp_ClassMemberPointersClass *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersClass *)new MR::CSharp::ClassMemberPointersClass(MR::CSharp::ClassMemberPointersClass(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersClass(*(MR::CSharp::ClassMemberPointersClass *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_ConstructFrom(MR_CSharp_A *a, const MR_CSharp_A *b, MR_CSharp_A *c, const MR_CSharp_A *d)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersClass *)new MR::CSharp::ClassMemberPointersClass(MR::CSharp::ClassMemberPointersClass{
        ((MR::CSharp::A *)a),
        ((const MR::CSharp::A *)b),
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(MR::CSharp::A *)(c)),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *(const MR::CSharp::A *)(d))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetPtr(const MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ClassMemberPointersClass *)(((const MR::CSharp::ClassMemberPointersClass *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetMutablePtr(MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersClass *)(((MR::CSharp::ClassMemberPointersClass *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersClass_Destroy(const MR_CSharp_ClassMemberPointersClass *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ClassMemberPointersClass *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersClass_DestroyArray(const MR_CSharp_ClassMemberPointersClass *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ClassMemberPointersClass *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_sa(void)
{
    return (MR_CSharp_ExposedLayout *const *)std::addressof(MR::CSharp::ClassMemberPointersExposed::sa);
}

void MR_CSharp_ClassMemberPointersExposed_Set_sa(MR_CSharp_ExposedLayout *value)
{
    MR::CSharp::ClassMemberPointersExposed::sa = ((MR::CSharp::ExposedLayout *)value);
}

MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_sa(void)
{
    return (MR_CSharp_ExposedLayout **)std::addressof(MR::CSharp::ClassMemberPointersExposed::sa);
}

const MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_sb(void)
{
    return (const MR_CSharp_ExposedLayout *const *)std::addressof(MR::CSharp::ClassMemberPointersExposed::sb);
}

void MR_CSharp_ClassMemberPointersExposed_Set_sb(const MR_CSharp_ExposedLayout *value)
{
    MR::CSharp::ClassMemberPointersExposed::sb = ((const MR::CSharp::ExposedLayout *)value);
}

const MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_sb(void)
{
    return (const MR_CSharp_ExposedLayout **)std::addressof(MR::CSharp::ClassMemberPointersExposed::sb);
}

MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_sc(void)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(MR::CSharp::ClassMemberPointersExposed::sc);
}

const MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_sd(void)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(MR::CSharp::ClassMemberPointersExposed::sd);
}

MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_a(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (MR_CSharp_ExposedLayout *const *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersExposed *)(_this)).a);
}

void MR_CSharp_ClassMemberPointersExposed_Set_a(MR_CSharp_ClassMemberPointersExposed *_this, MR_CSharp_ExposedLayout *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersExposed *)(_this)).a = ((MR::CSharp::ExposedLayout *)value);
}

MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_a(MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (MR_CSharp_ExposedLayout **)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersExposed *)(_this)).a);
}

const MR_CSharp_ExposedLayout *const *MR_CSharp_ClassMemberPointersExposed_Get_b(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (const MR_CSharp_ExposedLayout *const *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersExposed *)(_this)).b);
}

void MR_CSharp_ClassMemberPointersExposed_Set_b(MR_CSharp_ClassMemberPointersExposed *_this, const MR_CSharp_ExposedLayout *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersExposed *)(_this)).b = ((const MR::CSharp::ExposedLayout *)value);
}

const MR_CSharp_ExposedLayout **MR_CSharp_ClassMemberPointersExposed_GetMutable_b(MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (const MR_CSharp_ExposedLayout **)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersExposed *)(_this)).b);
}

MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_c(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersExposed *)(_this)).c);
}

const MR_CSharp_ExposedLayout *MR_CSharp_ClassMemberPointersExposed_Get_d(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersExposed *)(_this)).d);
}

MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother(const MR_CSharp_ClassMemberPointersExposed *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersExposed *)new MR::CSharp::ClassMemberPointersExposed(MR::CSharp::ClassMemberPointersExposed(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersExposed(*(MR::CSharp::ClassMemberPointersExposed *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_ConstructFrom(MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *c, const MR_CSharp_ExposedLayout *d)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersExposed *)new MR::CSharp::ClassMemberPointersExposed(MR::CSharp::ClassMemberPointersExposed{
        ((MR::CSharp::ExposedLayout *)a),
        ((const MR::CSharp::ExposedLayout *)b),
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(MR::CSharp::ExposedLayout *)(c)),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *(const MR::CSharp::ExposedLayout *)(d))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetPtr(const MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ClassMemberPointersExposed *)(((const MR::CSharp::ClassMemberPointersExposed *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetMutablePtr(MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersExposed *)(((MR::CSharp::ClassMemberPointersExposed *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersExposed_Destroy(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ClassMemberPointersExposed *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersExposed_DestroyArray(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ClassMemberPointersExposed *)_this);
    ) // MRBINDC_TRY
}

unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_sa(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sa);
}

void MR_CSharp_ClassMemberPointersUshort_Set_sa(unsigned short *value)
{
    MR::CSharp::ClassMemberPointersUshort::sa = value;
}

unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_sa(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sa);
}

const unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_sb(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sb);
}

void MR_CSharp_ClassMemberPointersUshort_Set_sb(const unsigned short *value)
{
    MR::CSharp::ClassMemberPointersUshort::sb = value;
}

const unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_sb(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sb);
}

unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_sc(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sc);
}

const unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_sd(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersUshort::sd);
}

unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_a(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersUshort *)(_this)).a);
}

void MR_CSharp_ClassMemberPointersUshort_Set_a(MR_CSharp_ClassMemberPointersUshort *_this, unsigned short *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersUshort *)(_this)).a = value;
}

unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_a(MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersUshort *)(_this)).a);
}

const unsigned short *const *MR_CSharp_ClassMemberPointersUshort_Get_b(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersUshort *)(_this)).b);
}

void MR_CSharp_ClassMemberPointersUshort_Set_b(MR_CSharp_ClassMemberPointersUshort *_this, const unsigned short *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersUshort *)(_this)).b = value;
}

const unsigned short **MR_CSharp_ClassMemberPointersUshort_GetMutable_b(MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersUshort *)(_this)).b);
}

unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_c(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersUshort *)(_this)).c);
}

const unsigned short *MR_CSharp_ClassMemberPointersUshort_Get_d(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersUshort *)(_this)).d);
}

MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother(const MR_CSharp_ClassMemberPointersUshort *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersUshort *)new MR::CSharp::ClassMemberPointersUshort(MR::CSharp::ClassMemberPointersUshort(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersUshort(*(MR::CSharp::ClassMemberPointersUshort *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_ConstructFrom(unsigned short *a, const unsigned short *b, unsigned short *c, const unsigned short *d)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersUshort *)new MR::CSharp::ClassMemberPointersUshort(MR::CSharp::ClassMemberPointersUshort{
        a,
        b,
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *c),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *d)
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetPtr(const MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ClassMemberPointersUshort *)(((const MR::CSharp::ClassMemberPointersUshort *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetMutablePtr(MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersUshort *)(((MR::CSharp::ClassMemberPointersUshort *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersUshort_Destroy(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ClassMemberPointersUshort *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersUshort_DestroyArray(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ClassMemberPointersUshort *)_this);
    ) // MRBINDC_TRY
}

bool *const *MR_CSharp_ClassMemberPointersBool_Get_sa(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sa);
}

void MR_CSharp_ClassMemberPointersBool_Set_sa(bool *value)
{
    MR::CSharp::ClassMemberPointersBool::sa = value;
}

bool **MR_CSharp_ClassMemberPointersBool_GetMutable_sa(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sa);
}

const bool *const *MR_CSharp_ClassMemberPointersBool_Get_sb(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sb);
}

void MR_CSharp_ClassMemberPointersBool_Set_sb(const bool *value)
{
    MR::CSharp::ClassMemberPointersBool::sb = value;
}

const bool **MR_CSharp_ClassMemberPointersBool_GetMutable_sb(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sb);
}

bool *MR_CSharp_ClassMemberPointersBool_Get_sc(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sc);
}

const bool *MR_CSharp_ClassMemberPointersBool_Get_sd(void)
{
    return std::addressof(MR::CSharp::ClassMemberPointersBool::sd);
}

bool *const *MR_CSharp_ClassMemberPointersBool_Get_a(const MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersBool *)(_this)).a);
}

void MR_CSharp_ClassMemberPointersBool_Set_a(MR_CSharp_ClassMemberPointersBool *_this, bool *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersBool *)(_this)).a = value;
}

bool **MR_CSharp_ClassMemberPointersBool_GetMutable_a(MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersBool *)(_this)).a);
}

const bool *const *MR_CSharp_ClassMemberPointersBool_Get_b(const MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersBool *)(_this)).b);
}

void MR_CSharp_ClassMemberPointersBool_Set_b(MR_CSharp_ClassMemberPointersBool *_this, const bool *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersBool *)(_this)).b = value;
}

const bool **MR_CSharp_ClassMemberPointersBool_GetMutable_b(MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ClassMemberPointersBool *)(_this)).b);
}

bool *MR_CSharp_ClassMemberPointersBool_Get_c(const MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersBool *)(_this)).c);
}

const bool *MR_CSharp_ClassMemberPointersBool_Get_d(const MR_CSharp_ClassMemberPointersBool *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ClassMemberPointersBool *)(_this)).d);
}

MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_ConstructFromAnother(const MR_CSharp_ClassMemberPointersBool *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersBool *)new MR::CSharp::ClassMemberPointersBool(MR::CSharp::ClassMemberPointersBool(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersBool(*(MR::CSharp::ClassMemberPointersBool *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_ConstructFrom(bool *a, const bool *b, bool *c, const bool *d)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersBool *)new MR::CSharp::ClassMemberPointersBool(MR::CSharp::ClassMemberPointersBool{
        a,
        b,
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *c),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *d)
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetPtr(const MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ClassMemberPointersBool *)(((const MR::CSharp::ClassMemberPointersBool *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetMutablePtr(MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ClassMemberPointersBool *)(((MR::CSharp::ClassMemberPointersBool *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersBool_Destroy(const MR_CSharp_ClassMemberPointersBool *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::ClassMemberPointersBool *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_ClassMemberPointersBool_DestroyArray(const MR_CSharp_ClassMemberPointersBool *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::ClassMemberPointersBool *)_this);
    ) // MRBINDC_TRY
}

const int *MR_CSharp_LifetimesA_Get_x(const MR_CSharp_LifetimesA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::LifetimesA *)(_this)).x);
}

void MR_CSharp_LifetimesA_Set_x(MR_CSharp_LifetimesA *_this, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).x = value;
}

int *MR_CSharp_LifetimesA_GetMutable_x(MR_CSharp_LifetimesA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).x);
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)(new MR::CSharp::LifetimesA[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA{
        x
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetPtr(const MR_CSharp_LifetimesA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)(((const MR::CSharp::LifetimesA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetMutablePtr(MR_CSharp_LifetimesA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)(((MR::CSharp::LifetimesA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFromAnother(const MR_CSharp_LifetimesA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesA_Destroy(const MR_CSharp_LifetimesA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::LifetimesA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesA_DestroyArray(const MR_CSharp_LifetimesA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::LifetimesA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_AssignFromAnother(MR_CSharp_LifetimesA *_this, const MR_CSharp_LifetimesA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_LifetimesA_foo(MR_CSharp_LifetimesA *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).foo());
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesA_bar(MR_CSharp_LifetimesA *_this, int *ref)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).bar(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_Get_a(const MR_CSharp_LifetimesB *_this)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::LifetimesB *)(_this)).a);
}

void MR_CSharp_LifetimesB_Set_a(MR_CSharp_LifetimesB *_this, const MR_CSharp_LifetimesA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)value));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_GetMutable_a(MR_CSharp_LifetimesB *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).a);
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)(new MR::CSharp::LifetimesB[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFrom(const MR_CSharp_LifetimesA *a)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)a))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetPtr(const MR_CSharp_LifetimesB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesB *)(((const MR::CSharp::LifetimesB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetMutablePtr(MR_CSharp_LifetimesB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)(((MR::CSharp::LifetimesB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFromAnother(const MR_CSharp_LifetimesB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesB(*(MR::CSharp::LifetimesB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesB_Destroy(const MR_CSharp_LifetimesB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::LifetimesB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesB_DestroyArray(const MR_CSharp_LifetimesB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::LifetimesB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_AssignFromAnother(MR_CSharp_LifetimesB *_this, const MR_CSharp_LifetimesB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesB(*(MR::CSharp::LifetimesB *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_begin(MR_CSharp_LifetimesB *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).begin());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_end(MR_CSharp_LifetimesB *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).end());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesB_ref(MR_CSharp_LifetimesB *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).operator*());
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)(::MR::CSharp::begin(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)(::MR::CSharp::end(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_C_deref_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)std::addressof(::MR::CSharp::operator*(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesC_Get_a(const MR_CSharp_LifetimesC *_this)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::LifetimesC *)(_this)).a);
}

void MR_CSharp_LifetimesC_Set_a(MR_CSharp_LifetimesC *_this, const MR_CSharp_LifetimesA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesC *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)value));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesC_GetMutable_a(MR_CSharp_LifetimesC *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesC *)(_this)).a);
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)(new MR::CSharp::LifetimesC[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFrom(const MR_CSharp_LifetimesA *a)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)a))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetPtr(const MR_CSharp_LifetimesC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesC *)(((const MR::CSharp::LifetimesC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetMutablePtr(MR_CSharp_LifetimesC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)(((MR::CSharp::LifetimesC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFromAnother(const MR_CSharp_LifetimesC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesC(*(MR::CSharp::LifetimesC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesC_Destroy(const MR_CSharp_LifetimesC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::LifetimesC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesC_DestroyArray(const MR_CSharp_LifetimesC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::LifetimesC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_AssignFromAnother(MR_CSharp_LifetimesC *_this, const MR_CSharp_LifetimesC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesC(*(MR::CSharp::LifetimesC *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)(begin(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)(end(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesC(const MR_CSharp_LifetimesC *c)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesA *)std::addressof(operator*(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_Get_a(const MR_CSharp_LifetimesD *_this)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::LifetimesD *)(_this)).a);
}

void MR_CSharp_LifetimesD_Set_a(MR_CSharp_LifetimesD *_this, const MR_CSharp_LifetimesA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)value));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_GetMutable_a(MR_CSharp_LifetimesD *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).a);
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_ConstructFromAnother(const MR_CSharp_LifetimesD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesD(*(MR::CSharp::LifetimesD *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetPtr(const MR_CSharp_LifetimesD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesD *)(((const MR::CSharp::LifetimesD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetMutablePtr(MR_CSharp_LifetimesD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)(((MR::CSharp::LifetimesD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_2(MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref)),
        ((other_ref ? void() : throw std::runtime_error("Parameter `other_ref` can not be null.")), *(MR::CSharp::LifetimesB *)(other_ref))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA(MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB(MR_CSharp_LifetimesB *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesB *)(ref))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesD_Destroy(const MR_CSharp_LifetimesD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::LifetimesD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesD_DestroyArray(const MR_CSharp_LifetimesD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::LifetimesD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_AssignFromAnother(MR_CSharp_LifetimesD *_this, const MR_CSharp_LifetimesD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesD(*(MR::CSharp::LifetimesD *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_get(MR_CSharp_LifetimesD *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).get());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).return_ref(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref_static(MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(MR::CSharp::LifetimesD::return_ref_static(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesD_store_ref_in_this(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_ref_in_this(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesD_store_ref_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_ref_in_param(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref)),
        ((other_ref ? void() : throw std::runtime_error("Parameter `other_ref` can not be null.")), *(MR::CSharp::LifetimesB *)(other_ref))
    );
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesD_store_this_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_this_in_param(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    );
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesE_Get_a(const MR_CSharp_LifetimesE *_this)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::LifetimesE *)(_this)).a);
}

void MR_CSharp_LifetimesE_Set_a(MR_CSharp_LifetimesE *_this, const MR_CSharp_LifetimesA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).a = ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)value));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesE_GetMutable_a(MR_CSharp_LifetimesE *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).a);
}

MR_CSharp_LifetimesE *MR_CSharp_LifetimesE_ConstructFromAnother(const MR_CSharp_LifetimesE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesE *)new MR::CSharp::LifetimesE(MR::CSharp::LifetimesE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesE(*(MR::CSharp::LifetimesE *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_LifetimesE *MR_CSharp_LifetimesE_OffsetPtr(const MR_CSharp_LifetimesE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_LifetimesE *)(((const MR::CSharp::LifetimesE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesE *MR_CSharp_LifetimesE_OffsetMutablePtr(MR_CSharp_LifetimesE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesE *)(((MR::CSharp::LifetimesE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesE *MR_CSharp_LifetimesE_Construct(MR_CSharp_LifetimesB *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesE *)new MR::CSharp::LifetimesE(MR::CSharp::LifetimesE(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesB *)(ref))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesE_Destroy(const MR_CSharp_LifetimesE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::LifetimesE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesE_DestroyArray(const MR_CSharp_LifetimesE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::LifetimesE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesE *MR_CSharp_LifetimesE_AssignFromAnother(MR_CSharp_LifetimesE *_this, const MR_CSharp_LifetimesE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesE(*(MR::CSharp::LifetimesE *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesE_get(MR_CSharp_LifetimesE *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).get());
    ) // MRBINDC_TRY
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesE_return_ref(MR_CSharp_LifetimesE *_this, MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).return_ref(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_LifetimesE_store_ref_in_this(MR_CSharp_LifetimesE *_this, MR_CSharp_LifetimesA *ref)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesE *)(_this)).store_ref_in_this(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableA_Get_arr(const MR_CSharp_IterableA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableA *)(_this)).arr[0]);
}

int *MR_CSharp_IterableA_GetMutable_arr(MR_CSharp_IterableA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableA *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableA_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableA::arr)>;
}

MR_CSharp_IterableA *MR_CSharp_IterableA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableA *)new MR::CSharp::IterableA(MR::CSharp::IterableA());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableA *MR_CSharp_IterableA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableA *)(new MR::CSharp::IterableA[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetPtr(const MR_CSharp_IterableA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableA *)(((const MR::CSharp::IterableA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetMutablePtr(MR_CSharp_IterableA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableA *)(((MR::CSharp::IterableA *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableA *MR_CSharp_IterableA_ConstructFromAnother(const MR_CSharp_IterableA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableA *)new MR::CSharp::IterableA(MR::CSharp::IterableA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableA(*(MR::CSharp::IterableA *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableA_Destroy(const MR_CSharp_IterableA *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableA *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableA_DestroyArray(const MR_CSharp_IterableA *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableA *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableA *MR_CSharp_IterableA_AssignFromAnother(MR_CSharp_IterableA *_this, const MR_CSharp_IterableA *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableA(*(MR::CSharp::IterableA *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableA_begin(const MR_CSharp_IterableA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableA *)(_this)).begin();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableA_end(const MR_CSharp_IterableA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableA *)(_this)).end();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableB_Get_arr(const MR_CSharp_IterableB *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableB *)(_this)).arr[0]);
}

int *MR_CSharp_IterableB_GetMutable_arr(MR_CSharp_IterableB *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableB_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableB::arr)>;
}

MR_CSharp_IterableB *MR_CSharp_IterableB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableB *)new MR::CSharp::IterableB(MR::CSharp::IterableB());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableB *MR_CSharp_IterableB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableB *)(new MR::CSharp::IterableB[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetPtr(const MR_CSharp_IterableB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableB *)(((const MR::CSharp::IterableB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetMutablePtr(MR_CSharp_IterableB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableB *)(((MR::CSharp::IterableB *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableB *MR_CSharp_IterableB_ConstructFromAnother(const MR_CSharp_IterableB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableB *)new MR::CSharp::IterableB(MR::CSharp::IterableB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableB(*(MR::CSharp::IterableB *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableB_Destroy(const MR_CSharp_IterableB *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableB *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableB_DestroyArray(const MR_CSharp_IterableB *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableB *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableB *MR_CSharp_IterableB_AssignFromAnother(MR_CSharp_IterableB *_this, const MR_CSharp_IterableB *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableB(*(MR::CSharp::IterableB *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_IterableB_begin(MR_CSharp_IterableB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).begin();
    ) // MRBINDC_TRY
}

int *MR_CSharp_IterableB_end(MR_CSharp_IterableB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).end();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableC_Get_arr(const MR_CSharp_IterableC *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableC *)(_this)).arr[0]);
}

int *MR_CSharp_IterableC_GetMutable_arr(MR_CSharp_IterableC *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableC_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableC::arr)>;
}

MR_CSharp_IterableC *MR_CSharp_IterableC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableC *)new MR::CSharp::IterableC(MR::CSharp::IterableC());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableC *MR_CSharp_IterableC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableC *)(new MR::CSharp::IterableC[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetPtr(const MR_CSharp_IterableC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableC *)(((const MR::CSharp::IterableC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetMutablePtr(MR_CSharp_IterableC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableC *)(((MR::CSharp::IterableC *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableC *MR_CSharp_IterableC_ConstructFromAnother(const MR_CSharp_IterableC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableC *)new MR::CSharp::IterableC(MR::CSharp::IterableC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableC(*(MR::CSharp::IterableC *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableC_Destroy(const MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableC *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableC_DestroyArray(const MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableC *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableC *MR_CSharp_IterableC_AssignFromAnother(MR_CSharp_IterableC *_this, const MR_CSharp_IterableC *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableC(*(MR::CSharp::IterableC *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_IterableC_begin_mut(MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).begin();
    ) // MRBINDC_TRY
}

int *MR_CSharp_IterableC_end_mut(MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).end();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableC_begin(const MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableC *)(_this)).begin();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableC_end(const MR_CSharp_IterableC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableC *)(_this)).end();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableD_Get_arr(const MR_CSharp_IterableD *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableD *)(_this)).arr[0]);
}

int *MR_CSharp_IterableD_GetMutable_arr(MR_CSharp_IterableD *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableD *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableD_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableD::arr)>;
}

MR_CSharp_IterableD *MR_CSharp_IterableD_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableD *)new MR::CSharp::IterableD(MR::CSharp::IterableD());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableD *MR_CSharp_IterableD_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableD *)(new MR::CSharp::IterableD[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetPtr(const MR_CSharp_IterableD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableD *)(((const MR::CSharp::IterableD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetMutablePtr(MR_CSharp_IterableD *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableD *)(((MR::CSharp::IterableD *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableD *MR_CSharp_IterableD_ConstructFromAnother(const MR_CSharp_IterableD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableD *)new MR::CSharp::IterableD(MR::CSharp::IterableD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableD(*(MR::CSharp::IterableD *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableD_Destroy(const MR_CSharp_IterableD *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableD *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableD_DestroyArray(const MR_CSharp_IterableD *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableD *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableD *MR_CSharp_IterableD_AssignFromAnother(MR_CSharp_IterableD *_this, const MR_CSharp_IterableD *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableD(*(MR::CSharp::IterableD *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_begin_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self)
{
    MRBINDC_TRY(
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableD *)(self))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_end_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self)
{
    MRBINDC_TRY(
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableD *)(self))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableE_Get_arr(const MR_CSharp_IterableE *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableE *)(_this)).arr[0]);
}

int *MR_CSharp_IterableE_GetMutable_arr(MR_CSharp_IterableE *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableE *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableE_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableE::arr)>;
}

MR_CSharp_IterableE *MR_CSharp_IterableE_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableE *)new MR::CSharp::IterableE(MR::CSharp::IterableE());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableE *MR_CSharp_IterableE_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableE *)(new MR::CSharp::IterableE[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetPtr(const MR_CSharp_IterableE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableE *)(((const MR::CSharp::IterableE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetMutablePtr(MR_CSharp_IterableE *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableE *)(((MR::CSharp::IterableE *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableE *MR_CSharp_IterableE_ConstructFromAnother(const MR_CSharp_IterableE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableE *)new MR::CSharp::IterableE(MR::CSharp::IterableE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableE(*(MR::CSharp::IterableE *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableE_Destroy(const MR_CSharp_IterableE *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableE *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableE_DestroyArray(const MR_CSharp_IterableE *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableE *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableE *MR_CSharp_IterableE_AssignFromAnother(MR_CSharp_IterableE *_this, const MR_CSharp_IterableE *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableE(*(MR::CSharp::IterableE *)_other))
    ));
    ) // MRBINDC_TRY
}

int *MR_CSharp_begin_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self)
{
    MRBINDC_TRY(
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableE *)(self))
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_end_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self)
{
    MRBINDC_TRY(
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableE *)(self))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableF_Get_arr(const MR_CSharp_IterableF *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableF *)(_this)).arr[0]);
}

int *MR_CSharp_IterableF_GetMutable_arr(MR_CSharp_IterableF *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableF *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableF_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableF::arr)>;
}

MR_CSharp_IterableF *MR_CSharp_IterableF_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableF *)new MR::CSharp::IterableF(MR::CSharp::IterableF());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableF *MR_CSharp_IterableF_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableF *)(new MR::CSharp::IterableF[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetPtr(const MR_CSharp_IterableF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableF *)(((const MR::CSharp::IterableF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetMutablePtr(MR_CSharp_IterableF *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableF *)(((MR::CSharp::IterableF *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableF *MR_CSharp_IterableF_ConstructFromAnother(const MR_CSharp_IterableF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableF *)new MR::CSharp::IterableF(MR::CSharp::IterableF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableF(*(MR::CSharp::IterableF *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableF_Destroy(const MR_CSharp_IterableF *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableF *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableF_DestroyArray(const MR_CSharp_IterableF *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableF *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableF *MR_CSharp_IterableF_AssignFromAnother(MR_CSharp_IterableF *_this, const MR_CSharp_IterableF *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableF(*(MR::CSharp::IterableF *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_begin_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self)
{
    MRBINDC_TRY(
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableF *)(self))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_end_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self)
{
    MRBINDC_TRY(
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableF *)(self))
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_begin_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self)
{
    MRBINDC_TRY(
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableF *)(self))
    );
    ) // MRBINDC_TRY
}

int *MR_CSharp_end_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self)
{
    MRBINDC_TRY(
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableF *)(self))
    );
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_IterableG_Get_arr(const MR_CSharp_IterableG *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableG *)(_this)).arr[0]);
}

MR_C_std_string *MR_CSharp_IterableG_GetMutable_arr(MR_CSharp_IterableG *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableG_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableG::arr)>;
}

MR_CSharp_IterableG *MR_CSharp_IterableG_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableG *)new MR::CSharp::IterableG(MR::CSharp::IterableG());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableG *MR_CSharp_IterableG_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableG *)(new MR::CSharp::IterableG[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetPtr(const MR_CSharp_IterableG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableG *)(((const MR::CSharp::IterableG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetMutablePtr(MR_CSharp_IterableG *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableG *)(((MR::CSharp::IterableG *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableG *MR_CSharp_IterableG_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IterableG);
    return (MR_CSharp_IterableG *)new MR::CSharp::IterableG(MR::CSharp::IterableG(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableG) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableG) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableG))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableG_Destroy(const MR_CSharp_IterableG *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableG *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableG_DestroyArray(const MR_CSharp_IterableG *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableG *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableG *MR_CSharp_IterableG_AssignFromAnother(MR_CSharp_IterableG *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IterableG);
    return (MR_CSharp_IterableG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableG) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableG) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableG))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_IterableG_begin(MR_CSharp_IterableG *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).begin());
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_CSharp_IterableG_end(MR_CSharp_IterableG *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).end());
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_IterableH_Get_arr(const MR_CSharp_IterableH *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableH *)(_this)).arr[0]);
}

MR_C_std_string *MR_CSharp_IterableH_GetMutable_arr(MR_CSharp_IterableH *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableH_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableH::arr)>;
}

MR_CSharp_IterableH *MR_CSharp_IterableH_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableH *)new MR::CSharp::IterableH(MR::CSharp::IterableH());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableH *MR_CSharp_IterableH_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableH *)(new MR::CSharp::IterableH[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetPtr(const MR_CSharp_IterableH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableH *)(((const MR::CSharp::IterableH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetMutablePtr(MR_CSharp_IterableH *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableH *)(((MR::CSharp::IterableH *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableH *MR_CSharp_IterableH_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IterableH);
    return (MR_CSharp_IterableH *)new MR::CSharp::IterableH(MR::CSharp::IterableH(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableH) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableH) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableH))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableH_Destroy(const MR_CSharp_IterableH *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableH *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableH_DestroyArray(const MR_CSharp_IterableH *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableH *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableH *MR_CSharp_IterableH_AssignFromAnother(MR_CSharp_IterableH *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::IterableH);
    return (MR_CSharp_IterableH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableH) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableH) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableH))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_IterableH_begin(MR_CSharp_IterableH *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).begin());
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_CSharp_IterableH_end(MR_CSharp_IterableH *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).end());
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableI_Get_arr(const MR_CSharp_IterableI *_this)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableI *)(_this)).arr[0]);
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableI_GetMutable_arr(MR_CSharp_IterableI *_this)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableI_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableI::arr)>;
}

MR_CSharp_IterableI *MR_CSharp_IterableI_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableI *)new MR::CSharp::IterableI(MR::CSharp::IterableI());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableI *MR_CSharp_IterableI_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableI *)(new MR::CSharp::IterableI[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetPtr(const MR_CSharp_IterableI *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableI *)(((const MR::CSharp::IterableI *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetMutablePtr(MR_CSharp_IterableI *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableI *)(((MR::CSharp::IterableI *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableI *MR_CSharp_IterableI_ConstructFromAnother(const MR_CSharp_IterableI *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableI *)new MR::CSharp::IterableI(MR::CSharp::IterableI(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableI(*(MR::CSharp::IterableI *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableI_Destroy(const MR_CSharp_IterableI *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableI *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableI_DestroyArray(const MR_CSharp_IterableI *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableI *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableI *MR_CSharp_IterableI_AssignFromAnother(MR_CSharp_IterableI *_this, const MR_CSharp_IterableI *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableI *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableI(*(MR::CSharp::IterableI *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableI_begin(MR_CSharp_IterableI *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).begin());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableI_end(MR_CSharp_IterableI *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).end());
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_Get_arr(const MR_CSharp_IterableJ *_this)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableJ *)(_this)).arr[0]);
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_GetMutable_arr(MR_CSharp_IterableJ *_this)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableJ_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableJ::arr)>;
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableJ *)new MR::CSharp::IterableJ(MR::CSharp::IterableJ());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableJ *)(new MR::CSharp::IterableJ[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetPtr(const MR_CSharp_IterableJ *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableJ *)(((const MR::CSharp::IterableJ *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetMutablePtr(MR_CSharp_IterableJ *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableJ *)(((MR::CSharp::IterableJ *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_ConstructFromAnother(const MR_CSharp_IterableJ *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableJ *)new MR::CSharp::IterableJ(MR::CSharp::IterableJ(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableJ(*(MR::CSharp::IterableJ *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableJ_Destroy(const MR_CSharp_IterableJ *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableJ *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableJ_DestroyArray(const MR_CSharp_IterableJ *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableJ *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_AssignFromAnother(MR_CSharp_IterableJ *_this, const MR_CSharp_IterableJ *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableJ *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableJ(*(MR::CSharp::IterableJ *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_begin(MR_CSharp_IterableJ *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).begin());
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_end(MR_CSharp_IterableJ *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).end());
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableK_Get_arr(const MR_CSharp_IterableK *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableK *)(_this)).arr[0]);
}

int *MR_CSharp_IterableK_GetMutable_arr(MR_CSharp_IterableK *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableK_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableK::arr)>;
}

MR_CSharp_IterableK *MR_CSharp_IterableK_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK *)new MR::CSharp::IterableK(MR::CSharp::IterableK());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK *MR_CSharp_IterableK_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK *)(new MR::CSharp::IterableK[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableK *MR_CSharp_IterableK_OffsetPtr(const MR_CSharp_IterableK *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableK *)(((const MR::CSharp::IterableK *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK *MR_CSharp_IterableK_OffsetMutablePtr(MR_CSharp_IterableK *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK *)(((MR::CSharp::IterableK *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK *MR_CSharp_IterableK_ConstructFromAnother(const MR_CSharp_IterableK *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK *)new MR::CSharp::IterableK(MR::CSharp::IterableK(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK(*(MR::CSharp::IterableK *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_Destroy(const MR_CSharp_IterableK *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableK *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_DestroyArray(const MR_CSharp_IterableK *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableK *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK *MR_CSharp_IterableK_AssignFromAnother(MR_CSharp_IterableK *_this, const MR_CSharp_IterableK *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK(*(MR::CSharp::IterableK *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_begin(MR_CSharp_IterableK *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)new MR::CSharp::IterableK::Iter(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK *)(_this)).begin());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_end(MR_CSharp_IterableK *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)new MR::CSharp::IterableK::Sentinel(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK *)(_this)).end());
    ) // MRBINDC_TRY
}

int *const *MR_CSharp_IterableK_Sentinel_Get_ptr(const MR_CSharp_IterableK_Sentinel *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableK::Sentinel *)(_this)).ptr);
}

void MR_CSharp_IterableK_Sentinel_Set_ptr(MR_CSharp_IterableK_Sentinel *_this, int *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Sentinel *)(_this)).ptr = value;
}

int **MR_CSharp_IterableK_Sentinel_GetMutable_ptr(MR_CSharp_IterableK_Sentinel *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Sentinel *)(_this)).ptr);
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)new MR::CSharp::IterableK::Sentinel(MR::CSharp::IterableK::Sentinel());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)(new MR::CSharp::IterableK::Sentinel[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_ConstructFrom(int *ptr)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)new MR::CSharp::IterableK::Sentinel(MR::CSharp::IterableK::Sentinel{
        ptr
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_OffsetPtr(const MR_CSharp_IterableK_Sentinel *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableK_Sentinel *)(((const MR::CSharp::IterableK::Sentinel *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_OffsetMutablePtr(MR_CSharp_IterableK_Sentinel *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)(((MR::CSharp::IterableK::Sentinel *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_ConstructFromAnother(const MR_CSharp_IterableK_Sentinel *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)new MR::CSharp::IterableK::Sentinel(MR::CSharp::IterableK::Sentinel(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK::Sentinel(*(MR::CSharp::IterableK::Sentinel *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_Sentinel_Destroy(const MR_CSharp_IterableK_Sentinel *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableK::Sentinel *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_Sentinel_DestroyArray(const MR_CSharp_IterableK_Sentinel *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableK::Sentinel *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Sentinel *MR_CSharp_IterableK_Sentinel_AssignFromAnother(MR_CSharp_IterableK_Sentinel *_this, const MR_CSharp_IterableK_Sentinel *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Sentinel *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Sentinel *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK::Sentinel(*(MR::CSharp::IterableK::Sentinel *)_other))
    ));
    ) // MRBINDC_TRY
}

int *const *MR_CSharp_IterableK_Iter_Get_ptr(const MR_CSharp_IterableK_Iter *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableK::Iter *)(_this)).ptr);
}

void MR_CSharp_IterableK_Iter_Set_ptr(MR_CSharp_IterableK_Iter *_this, int *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Iter *)(_this)).ptr = value;
}

int **MR_CSharp_IterableK_Iter_GetMutable_ptr(MR_CSharp_IterableK_Iter *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Iter *)(_this)).ptr);
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)new MR::CSharp::IterableK::Iter(MR::CSharp::IterableK::Iter());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)(new MR::CSharp::IterableK::Iter[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_ConstructFrom(int *ptr)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)new MR::CSharp::IterableK::Iter(MR::CSharp::IterableK::Iter{
        ptr
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_OffsetPtr(const MR_CSharp_IterableK_Iter *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableK_Iter *)(((const MR::CSharp::IterableK::Iter *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_OffsetMutablePtr(MR_CSharp_IterableK_Iter *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)(((MR::CSharp::IterableK::Iter *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_ConstructFromAnother(const MR_CSharp_IterableK_Iter *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)new MR::CSharp::IterableK::Iter(MR::CSharp::IterableK::Iter(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK::Iter(*(MR::CSharp::IterableK::Iter *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_Iter_Destroy(const MR_CSharp_IterableK_Iter *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableK::Iter *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableK_Iter_DestroyArray(const MR_CSharp_IterableK_Iter *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableK::Iter *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableK_Iter *MR_CSharp_IterableK_Iter_AssignFromAnother(MR_CSharp_IterableK_Iter *_this, const MR_CSharp_IterableK_Iter *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableK_Iter *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Iter *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableK::Iter(*(MR::CSharp::IterableK::Iter *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_CSharp_IterableK_Iter(const MR_CSharp_IterableK_Iter *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableK::Iter *)(_this)).operator*();
    ) // MRBINDC_TRY
}

void MR_C_incr_MR_CSharp_IterableK_Iter(MR_CSharp_IterableK_Iter *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Iter *)(_this)).operator++();
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_CSharp_IterableK_Iter_MR_CSharp_IterableK_Sentinel(MR_CSharp_IterableK_Iter *_this, const MR_CSharp_IterableK_Sentinel *s)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableK::Iter *)(_this)).operator==(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), MR::CSharp::IterableK::Sentinel(*(MR::CSharp::IterableK::Sentinel *)s))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableL_int_Get_arr(const MR_CSharp_IterableL_int *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableL<int> *)(_this)).arr[0]);
}

int *MR_CSharp_IterableL_int_GetMutable_arr(MR_CSharp_IterableL_int *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableL<int> *)(_this)).arr[0]);
}

size_t MR_CSharp_IterableL_int_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::CSharp::IterableL<int>::arr)>;
}

MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableL_int *)new MR::CSharp::IterableL<int>(MR::CSharp::IterableL<int>());
    ) // MRBINDC_TRY
}

MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableL_int *)(new MR::CSharp::IterableL<int>[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_OffsetPtr(const MR_CSharp_IterableL_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_IterableL_int *)(((const MR::CSharp::IterableL<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_OffsetMutablePtr(MR_CSharp_IterableL_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableL_int *)(((MR::CSharp::IterableL<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_ConstructFromAnother(const MR_CSharp_IterableL_int *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableL_int *)new MR::CSharp::IterableL<int>(MR::CSharp::IterableL<int>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableL<int>(*(MR::CSharp::IterableL<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableL_int_Destroy(const MR_CSharp_IterableL_int *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::IterableL<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_IterableL_int_DestroyArray(const MR_CSharp_IterableL_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::IterableL<int> *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_IterableL_int *MR_CSharp_IterableL_int_AssignFromAnother(MR_CSharp_IterableL_int *_this, const MR_CSharp_IterableL_int *_other)
{
    MRBINDC_TRY(
    return (MR_CSharp_IterableL_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableL<int> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableL<int>(*(MR::CSharp::IterableL<int> *)_other))
    ));
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableL_int_begin(const MR_CSharp_IterableL_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableL<int> *)(_this)).begin();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_IterableL_int_end(const MR_CSharp_IterableL_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableL<int> *)(_this)).end();
    ) // MRBINDC_TRY
}

const int *MR_CSharp_begin_int(const MR_CSharp_IterableL_int *self)
{
    MRBINDC_TRY(
    return ::MR::CSharp::begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableL<int> *)(self))
    );
    ) // MRBINDC_TRY
}

const int *MR_CSharp_end_int(const MR_CSharp_IterableL_int *self)
{
    MRBINDC_TRY(
    return ::MR::CSharp::end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableL<int> *)(self))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_A_ptr *MR_CSharp_test_vec_of_mut_ptr_to_class(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_A_ptr *)new std::vector<MR::CSharp::A *>(::MR::CSharp::test_vec_of_mut_ptr_to_class());
    ) // MRBINDC_TRY
}

MR_C_std_vector_const_MR_CSharp_A_ptr *MR_CSharp_test_vec_of_const_ptr_to_class(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_const_MR_CSharp_A_ptr *)new std::vector<const MR::CSharp::A *>(::MR::CSharp::test_vec_of_const_ptr_to_class());
    ) // MRBINDC_TRY
}

MR_C_std_tuple *MR_CSharp_get_tuple0(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple *)new std::tuple<>(::MR::CSharp::get_tuple0());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int *MR_CSharp_get_tuple1(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int *)new std::tuple<int>(::MR::CSharp::get_tuple1());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_std_string *MR_CSharp_get_tuple2(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(::MR::CSharp::get_tuple2());
    ) // MRBINDC_TRY
}

MR_C_std_pair_int_std_string *MR_CSharp_get_pair2(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_int_std_string *)new std::pair<int, std::string>(::MR::CSharp::get_pair2());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_const_int_std_string *MR_CSharp_get_tuple_const(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_const_int_std_string *)new std::tuple<const int, std::string>(::MR::CSharp::get_tuple_const());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *MR_CSharp_get_tuple_refs(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *)new std::tuple<int &, float &&, std::string &, std::string &&>(::MR::CSharp::get_tuple_refs());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_CSharp_get_tuple_crefs(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_const_int_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *)new std::tuple<const int &, const float &&, const std::string &, const std::string &&>(::MR::CSharp::get_tuple_crefs());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_CSharp_get_tuple_exposed_value(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)new std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(::MR::CSharp::get_tuple_exposed_value());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_CSharp_get_tuple_exposed_lvalue_ref(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *)new std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &>(::MR::CSharp::get_tuple_exposed_lvalue_ref());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *MR_CSharp_get_tuple_exposed_rvalue_ref(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *)new std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(::MR::CSharp::get_tuple_exposed_rvalue_ref());
    ) // MRBINDC_TRY
}

const MR_C_std_function_int_from_std_string *MR_CSharp_TestStdFunction_Get_f1(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_int_from_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f1);
}

void MR_CSharp_TestStdFunction_Set_f1(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_int_from_std_string *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<int(std::string)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f1 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<int(std::string)>) MRBINDC_CLASSARG_COPY(value, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_MOVE(value, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<int(std::string)>) MRBINDC_CLASSARG_END(value, std::function<int(std::string)>));
}

MR_C_std_function_int_from_std_string *MR_CSharp_TestStdFunction_GetMutable_f1(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_int_from_std_string *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f1);
}

const MR_C_std_function_std_string_from_int_int *MR_CSharp_TestStdFunction_Get_f2(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_std_string_from_int_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f2);
}

void MR_CSharp_TestStdFunction_Set_f2(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_std_string_from_int_int *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<std::string(int, int)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f2 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<std::string(int, int)>) MRBINDC_CLASSARG_COPY(value, (std::function<std::string(int, int)>), std::function<std::string(int, int)>) MRBINDC_CLASSARG_MOVE(value, (std::function<std::string(int, int)>), std::function<std::string(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<std::string(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<std::string(int, int)>) MRBINDC_CLASSARG_END(value, std::function<std::string(int, int)>));
}

MR_C_std_function_std_string_from_int_int *MR_CSharp_TestStdFunction_GetMutable_f2(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_std_string_from_int_int *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f2);
}

const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_CSharp_TestStdFunction_Get_f3(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f3);
}

void MR_CSharp_TestStdFunction_Set_f3(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<MR::CSharp::E1(MR::CSharp::E1)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f3 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_COPY(value, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_MOVE(value, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_END(value, std::function<MR::CSharp::E1(MR::CSharp::E1)>));
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_CSharp_TestStdFunction_GetMutable_f3(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f3);
}

const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_CSharp_TestStdFunction_Get_f4(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f4);
}

void MR_CSharp_TestStdFunction_Set_f4(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f4 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_COPY(value, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_MOVE(value, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_END(value, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>));
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_CSharp_TestStdFunction_GetMutable_f4(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f4);
}

const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_CSharp_TestStdFunction_Get_f5(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f5);
}

void MR_CSharp_TestStdFunction_Set_f5(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<int &(int &, int &&)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f5 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_COPY(value, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_MOVE(value, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_END(value, std::function<int &(int &, int &&)>));
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_CSharp_TestStdFunction_GetMutable_f5(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f5);
}

const MR_C_std_function_int_rvalue_ref *MR_CSharp_TestStdFunction_Get_f6(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_int_rvalue_ref *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f6);
}

void MR_CSharp_TestStdFunction_Set_f6(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_int_rvalue_ref *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<int &&(void)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f6 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<int &&(void)>) MRBINDC_CLASSARG_COPY(value, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_MOVE(value, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<int &&(void)>) MRBINDC_CLASSARG_END(value, std::function<int &&(void)>));
}

MR_C_std_function_int_rvalue_ref *MR_CSharp_TestStdFunction_GetMutable_f6(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_int_rvalue_ref *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f6);
}

const MR_C_std_function_void *MR_CSharp_TestStdFunction_Get_f7(const MR_CSharp_TestStdFunction *_this)
{
    return (const MR_C_std_function_void *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestStdFunction *)(_this)).f7);
}

void MR_CSharp_TestStdFunction_Set_f7(MR_CSharp_TestStdFunction *_this, MR_C_PassBy value_pass_by, MR_C_std_function_void *value)
{
    MRBINDC_CLASSARG_GUARD(value, std::function<void(void)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f7 = (MRBINDC_CLASSARG_DEF_CTOR(value, std::function<void(void)>) MRBINDC_CLASSARG_COPY(value, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_MOVE(value, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_DefaultArgument, std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(value, MR_C_PassBy_NoObject, std::function<void(void)>) MRBINDC_CLASSARG_END(value, std::function<void(void)>));
}

MR_C_std_function_void *MR_CSharp_TestStdFunction_GetMutable_f7(MR_CSharp_TestStdFunction *_this)
{
    return (MR_C_std_function_void *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).f7);
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestStdFunction *)new MR::CSharp::TestStdFunction(MR::CSharp::TestStdFunction());
    ) // MRBINDC_TRY
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestStdFunction *)(new MR::CSharp::TestStdFunction[num_elems]{});
    ) // MRBINDC_TRY
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_ConstructFrom(MR_C_PassBy f1_pass_by, MR_C_std_function_int_from_std_string *f1, MR_C_PassBy f2_pass_by, MR_C_std_function_std_string_from_int_int *f2, MR_C_PassBy f3_pass_by, MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *f3, MR_C_PassBy f4_pass_by, MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *f4, MR_C_PassBy f5_pass_by, MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *f5, MR_C_PassBy f6_pass_by, MR_C_std_function_int_rvalue_ref *f6, MR_C_PassBy f7_pass_by, MR_C_std_function_void *f7)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(f1, std::function<int(std::string)>);
    MRBINDC_CLASSARG_GUARD(f2, std::function<std::string(int, int)>);
    MRBINDC_CLASSARG_GUARD(f3, std::function<MR::CSharp::E1(MR::CSharp::E1)>);
    MRBINDC_CLASSARG_GUARD(f4, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>);
    MRBINDC_CLASSARG_GUARD(f5, std::function<int &(int &, int &&)>);
    MRBINDC_CLASSARG_GUARD(f6, std::function<int &&(void)>);
    MRBINDC_CLASSARG_GUARD(f7, std::function<void(void)>);
    return (MR_CSharp_TestStdFunction *)new MR::CSharp::TestStdFunction(MR::CSharp::TestStdFunction{
        (MRBINDC_CLASSARG_DEF_CTOR(f1, std::function<int(std::string)>) MRBINDC_CLASSARG_COPY(f1, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_MOVE(f1, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(f1, MR_C_PassBy_DefaultArgument, std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(f1, MR_C_PassBy_NoObject, std::function<int(std::string)>) MRBINDC_CLASSARG_END(f1, std::function<int(std::string)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f2, std::function<std::string(int, int)>) MRBINDC_CLASSARG_COPY(f2, (std::function<std::string(int, int)>), std::function<std::string(int, int)>) MRBINDC_CLASSARG_MOVE(f2, (std::function<std::string(int, int)>), std::function<std::string(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(f2, MR_C_PassBy_DefaultArgument, std::function<std::string(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(f2, MR_C_PassBy_NoObject, std::function<std::string(int, int)>) MRBINDC_CLASSARG_END(f2, std::function<std::string(int, int)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f3, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_COPY(f3, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_MOVE(f3, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(f3, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(f3, MR_C_PassBy_NoObject, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_END(f3, std::function<MR::CSharp::E1(MR::CSharp::E1)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f4, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_COPY(f4, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_MOVE(f4, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(f4, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(f4, MR_C_PassBy_NoObject, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_END(f4, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f5, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_COPY(f5, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_MOVE(f5, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(f5, MR_C_PassBy_DefaultArgument, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(f5, MR_C_PassBy_NoObject, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_END(f5, std::function<int &(int &, int &&)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f6, std::function<int &&(void)>) MRBINDC_CLASSARG_COPY(f6, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_MOVE(f6, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(f6, MR_C_PassBy_DefaultArgument, std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(f6, MR_C_PassBy_NoObject, std::function<int &&(void)>) MRBINDC_CLASSARG_END(f6, std::function<int &&(void)>)),
        (MRBINDC_CLASSARG_DEF_CTOR(f7, std::function<void(void)>) MRBINDC_CLASSARG_COPY(f7, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_MOVE(f7, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(f7, MR_C_PassBy_DefaultArgument, std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(f7, MR_C_PassBy_NoObject, std::function<void(void)>) MRBINDC_CLASSARG_END(f7, std::function<void(void)>))
    });
    ) // MRBINDC_TRY
}

const MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_OffsetPtr(const MR_CSharp_TestStdFunction *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_TestStdFunction *)(((const MR::CSharp::TestStdFunction *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_OffsetMutablePtr(MR_CSharp_TestStdFunction *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_TestStdFunction *)(((MR::CSharp::TestStdFunction *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestStdFunction *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::TestStdFunction);
    return (MR_CSharp_TestStdFunction *)new MR::CSharp::TestStdFunction(MR::CSharp::TestStdFunction(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestStdFunction), MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::TestStdFunction), MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestStdFunction))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_TestStdFunction_Destroy(const MR_CSharp_TestStdFunction *_this)
{
    MRBINDC_TRY(
    delete ((const MR::CSharp::TestStdFunction *)_this);
    ) // MRBINDC_TRY
}

void MR_CSharp_TestStdFunction_DestroyArray(const MR_CSharp_TestStdFunction *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::CSharp::TestStdFunction *)_this);
    ) // MRBINDC_TRY
}

MR_CSharp_TestStdFunction *MR_CSharp_TestStdFunction_AssignFromAnother(MR_CSharp_TestStdFunction *_this, MR_C_PassBy _other_pass_by, MR_CSharp_TestStdFunction *_other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_other, MR::CSharp::TestStdFunction);
    return (MR_CSharp_TestStdFunction *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestStdFunction), MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::TestStdFunction), MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestStdFunction) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestStdFunction))
    ));
    ) // MRBINDC_TRY
}

void MR_CSharp_TestStdFunction_Call(MR_CSharp_TestStdFunction *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestStdFunction *)(_this)).Call();
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(::MR::CSharp::test_expected_int(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)a)),
        (b ? std::expected<int, float>(*(std::expected<int, float> *)b) : static_cast<std::expected<int, float>>(std::expected<int, float>{42}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ref(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)std::addressof(::MR::CSharp::test_expected_int_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<int, float> *)(a)),
        (b ? *(std::expected<int, float> *)(b) : static_cast<std::expected<int, float> &>(default_expected_int))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cref(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_int_float *)std::addressof(::MR::CSharp::test_expected_int_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<int, float> *)(a)),
        (b ? *(const std::expected<int, float> *)(b) : static_cast<const std::expected<int, float> &>(default_expected_int))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ptr(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b, MR_C_std_expected_int_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)(::MR::CSharp::test_expected_int_ptr(
        ((std::expected<int, float> *)a),
        ((std::expected<int, float> *)b),
        (c ? (std::expected<int, float> *)(*c) : static_cast<std::expected<int, float> *>(&default_expected_int))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cptr(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b, const MR_C_std_expected_int_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_int_float *)(::MR::CSharp::test_expected_int_cptr(
        ((const std::expected<int, float> *)a),
        ((const std::expected<int, float> *)b),
        (c ? (const std::expected<int, float> *)(*c) : static_cast<const std::expected<int, float> *>(&default_expected_int))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)new std::expected<void, float>(::MR::CSharp::test_expected_void(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<void, float>(*(std::expected<void, float> *)a)),
        (b ? std::expected<void, float>(*(std::expected<void, float> *)b) : static_cast<std::expected<void, float>>(std::expected<void, float>{}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ref(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)std::addressof(::MR::CSharp::test_expected_void_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<void, float> *)(a)),
        (b ? *(std::expected<void, float> *)(b) : static_cast<std::expected<void, float> &>(default_expected_void))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cref(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_void_float *)std::addressof(::MR::CSharp::test_expected_void_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<void, float> *)(a)),
        (b ? *(const std::expected<void, float> *)(b) : static_cast<const std::expected<void, float> &>(default_expected_void))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ptr(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b, MR_C_std_expected_void_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)(::MR::CSharp::test_expected_void_ptr(
        ((std::expected<void, float> *)a),
        ((std::expected<void, float> *)b),
        (c ? (std::expected<void, float> *)(*c) : static_cast<std::expected<void, float> *>(&default_expected_void))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cptr(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b, const MR_C_std_expected_void_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_void_float *)(::MR::CSharp::test_expected_void_cptr(
        ((const std::expected<void, float> *)a),
        ((const std::expected<void, float> *)b),
        (c ? (const std::expected<void, float> *)(*c) : static_cast<const std::expected<void, float> *>(&default_expected_void))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)new std::expected<MR::CSharp::E1, float>(::MR::CSharp::test_expected_enum(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::E1, float>(*(std::expected<MR::CSharp::E1, float> *)a)),
        (b ? std::expected<MR::CSharp::E1, float>(*(std::expected<MR::CSharp::E1, float> *)b) : static_cast<std::expected<MR::CSharp::E1, float>>(std::expected<MR::CSharp::E1, float>{E1::b}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ref(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)std::addressof(::MR::CSharp::test_expected_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::E1, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::E1, float> *)(b) : static_cast<std::expected<MR::CSharp::E1, float> &>(default_expected_enum))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cref(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_E1_float *)std::addressof(::MR::CSharp::test_expected_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::E1, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::E1, float> *)(b) : static_cast<const std::expected<MR::CSharp::E1, float> &>(default_expected_enum))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ptr(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b, MR_C_std_expected_MR_CSharp_E1_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)(::MR::CSharp::test_expected_enum_ptr(
        ((std::expected<MR::CSharp::E1, float> *)a),
        ((std::expected<MR::CSharp::E1, float> *)b),
        (c ? (std::expected<MR::CSharp::E1, float> *)(*c) : static_cast<std::expected<MR::CSharp::E1, float> *>(&default_expected_enum))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cptr(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b, const MR_C_std_expected_MR_CSharp_E1_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_E1_float *)(::MR::CSharp::test_expected_enum_cptr(
        ((const std::expected<MR::CSharp::E1, float> *)a),
        ((const std::expected<MR::CSharp::E1, float> *)b),
        (c ? (const std::expected<MR::CSharp::E1, float> *)(*c) : static_cast<const std::expected<MR::CSharp::E1, float> *>(&default_expected_enum))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)new std::expected<MR::CSharp::Trivial, float>(::MR::CSharp::test_expected_triv(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::Trivial, float>(*(std::expected<MR::CSharp::Trivial, float> *)a)),
        (b ? std::expected<MR::CSharp::Trivial, float>(*(std::expected<MR::CSharp::Trivial, float> *)b) : static_cast<std::expected<MR::CSharp::Trivial, float>>(std::expected<MR::CSharp::Trivial, float>{MR::CSharp::Trivial{}}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ref(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)std::addressof(::MR::CSharp::test_expected_triv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::Trivial, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::Trivial, float> *)(b) : static_cast<std::expected<MR::CSharp::Trivial, float> &>(default_expected_triv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cref(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_Trivial_float *)std::addressof(::MR::CSharp::test_expected_triv_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::Trivial, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::Trivial, float> *)(b) : static_cast<const std::expected<MR::CSharp::Trivial, float> &>(default_expected_triv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ptr(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b, MR_C_std_expected_MR_CSharp_Trivial_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)(::MR::CSharp::test_expected_triv_ptr(
        ((std::expected<MR::CSharp::Trivial, float> *)a),
        ((std::expected<MR::CSharp::Trivial, float> *)b),
        (c ? (std::expected<MR::CSharp::Trivial, float> *)(*c) : static_cast<std::expected<MR::CSharp::Trivial, float> *>(&default_expected_triv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cptr(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b, const MR_C_std_expected_MR_CSharp_Trivial_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_Trivial_float *)(::MR::CSharp::test_expected_triv_cptr(
        ((const std::expected<MR::CSharp::Trivial, float> *)a),
        ((const std::expected<MR::CSharp::Trivial, float> *)b),
        (c ? (const std::expected<MR::CSharp::Trivial, float> *)(*c) : static_cast<const std::expected<MR::CSharp::Trivial, float> *>(&default_expected_triv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv(MR_C_PassBy a_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_PassBy b_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    MRBINDC_CLASSARG_GUARD(a, std::expected<MR::CSharp::NonTrivial, float>);
    MRBINDC_CLASSARG_GUARD(b, std::expected<MR::CSharp::NonTrivial, float>);
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)new std::expected<MR::CSharp::NonTrivial, float>(::MR::CSharp::test_expected_nontriv(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(a, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(a, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(a, std::expected<MR::CSharp::NonTrivial, float>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(b, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(b, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (std::expected<MR::CSharp::NonTrivial, float>{MR::CSharp::NonTrivial{}}), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(b, std::expected<MR::CSharp::NonTrivial, float>))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ref(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)std::addressof(::MR::CSharp::test_expected_nontriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::NonTrivial, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::NonTrivial, float> *)(b) : static_cast<std::expected<MR::CSharp::NonTrivial, float> &>(default_expected_nontriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cref(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_NonTrivial_float *)std::addressof(::MR::CSharp::test_expected_nontriv_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::NonTrivial, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::NonTrivial, float> *)(b) : static_cast<const std::expected<MR::CSharp::NonTrivial, float> &>(default_expected_nontriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ptr(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b, MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)(::MR::CSharp::test_expected_nontriv_ptr(
        ((std::expected<MR::CSharp::NonTrivial, float> *)a),
        ((std::expected<MR::CSharp::NonTrivial, float> *)b),
        (c ? (std::expected<MR::CSharp::NonTrivial, float> *)(*c) : static_cast<std::expected<MR::CSharp::NonTrivial, float> *>(&default_expected_nontriv))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cptr(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b, const MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_NonTrivial_float *)(::MR::CSharp::test_expected_nontriv_cptr(
        ((const std::expected<MR::CSharp::NonTrivial, float> *)a),
        ((const std::expected<MR::CSharp::NonTrivial, float> *)b),
        (c ? (const std::expected<MR::CSharp::NonTrivial, float> *)(*c) : static_cast<const std::expected<MR::CSharp::NonTrivial, float> *>(&default_expected_nontriv))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)new std::expected<MR::CSharp::SA, float>(::MR::CSharp::test_expected_shared(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::SA, float>(*(std::expected<MR::CSharp::SA, float> *)a)),
        (b ? std::expected<MR::CSharp::SA, float>(*(std::expected<MR::CSharp::SA, float> *)b) : static_cast<std::expected<MR::CSharp::SA, float>>(std::expected<MR::CSharp::SA, float>{MR::CSharp::SA{}}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ref(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)std::addressof(::MR::CSharp::test_expected_shared_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::SA, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::SA, float> *)(b) : static_cast<std::expected<MR::CSharp::SA, float> &>(default_expected_shared))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cref(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_SA_float *)std::addressof(::MR::CSharp::test_expected_shared_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::SA, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::SA, float> *)(b) : static_cast<const std::expected<MR::CSharp::SA, float> &>(default_expected_shared))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ptr(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b, MR_C_std_expected_MR_CSharp_SA_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)(::MR::CSharp::test_expected_shared_ptr(
        ((std::expected<MR::CSharp::SA, float> *)a),
        ((std::expected<MR::CSharp::SA, float> *)b),
        (c ? (std::expected<MR::CSharp::SA, float> *)(*c) : static_cast<std::expected<MR::CSharp::SA, float> *>(&default_expected_shared))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cptr(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b, const MR_C_std_expected_MR_CSharp_SA_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_SA_float *)(::MR::CSharp::test_expected_shared_cptr(
        ((const std::expected<MR::CSharp::SA, float> *)a),
        ((const std::expected<MR::CSharp::SA, float> *)b),
        (c ? (const std::expected<MR::CSharp::SA, float> *)(*c) : static_cast<const std::expected<MR::CSharp::SA, float> *>(&default_expected_shared))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)new std::expected<MR::CSharp::ExposedLayout, float>(::MR::CSharp::test_expected_exposed(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)a)),
        (b ? std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)b) : static_cast<std::expected<MR::CSharp::ExposedLayout, float>>(std::expected<MR::CSharp::ExposedLayout, float>{MR::CSharp::ExposedLayout{}}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ref(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)std::addressof(::MR::CSharp::test_expected_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::ExposedLayout, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::ExposedLayout, float> *)(b) : static_cast<std::expected<MR::CSharp::ExposedLayout, float> &>(default_expected_exposed))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cref(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayout_float *)std::addressof(::MR::CSharp::test_expected_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayout, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::ExposedLayout, float> *)(b) : static_cast<const std::expected<MR::CSharp::ExposedLayout, float> &>(default_expected_exposed))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ptr(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)(::MR::CSharp::test_expected_exposed_ptr(
        ((std::expected<MR::CSharp::ExposedLayout, float> *)a),
        ((std::expected<MR::CSharp::ExposedLayout, float> *)b),
        (c ? (std::expected<MR::CSharp::ExposedLayout, float> *)(*c) : static_cast<std::expected<MR::CSharp::ExposedLayout, float> *>(&default_expected_exposed))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayout_float *)(::MR::CSharp::test_expected_exposed_cptr(
        ((const std::expected<MR::CSharp::ExposedLayout, float> *)a),
        ((const std::expected<MR::CSharp::ExposedLayout, float> *)b),
        (c ? (const std::expected<MR::CSharp::ExposedLayout, float> *)(*c) : static_cast<const std::expected<MR::CSharp::ExposedLayout, float> *>(&default_expected_exposed))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)new std::expected<MR::CSharp::ExposedLayoutSh, float>(::MR::CSharp::test_expected_exposed_shared(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)a)),
        (b ? std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)b) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float>>(std::expected<MR::CSharp::ExposedLayoutSh, float>{MR::CSharp::ExposedLayoutSh{}}))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ref(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)std::addressof(::MR::CSharp::test_expected_exposed_shared_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(b) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float> &>(default_expected_exposed_shared))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cref(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)std::addressof(::MR::CSharp::test_expected_exposed_shared_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(b) : static_cast<const std::expected<MR::CSharp::ExposedLayoutSh, float> &>(default_expected_exposed_shared))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ptr(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(::MR::CSharp::test_expected_exposed_shared_ptr(
        ((std::expected<MR::CSharp::ExposedLayoutSh, float> *)a),
        ((std::expected<MR::CSharp::ExposedLayoutSh, float> *)b),
        (c ? (std::expected<MR::CSharp::ExposedLayoutSh, float> *)(*c) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float> *>(&default_expected_exposed_shared))
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(::MR::CSharp::test_expected_exposed_shared_cptr(
        ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)a),
        ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)b),
        (c ? (const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(*c) : static_cast<const std::expected<MR::CSharp::ExposedLayoutSh, float> *>(&default_expected_exposed_shared))
    ));
    ) // MRBINDC_TRY
}


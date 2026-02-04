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
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>


void MR_CSharp_foo(void)
{
    ::MR::CSharp::foo();
}

int MR_CSharp_test_int(int a, const int *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int(
        a,
        (b ? *b : static_cast<int>(42))
    );
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
    using namespace MR;
    using namespace CSharp;
    ::MR::CSharp::test_bool_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<bool &>(default_bool))
    );
}

int MR_CSharp_test_bool_ref2(bool *a, bool *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_bool_ref2(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<bool &>(default_bool))
    );
}

bool *MR_CSharp_get_bool_ref(void)
{
    return std::addressof(::MR::CSharp::get_bool_ref());
}

void MR_CSharp_print_bool_ref(void)
{
    ::MR::CSharp::print_bool_ref();
}

const bool *MR_CSharp_test_bool_cref(const bool *_1, const bool *_2)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_bool_cref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        (_2 ? *_2 : static_cast<const bool &>(default_bool))
    ));
}

int *MR_CSharp_test_int_ref(int *a, int *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_int_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int &>(default_int))
    ));
}

const int *MR_CSharp_test_int_cref(const int *a, const int *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_int_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int &>(default_int))
    ));
}

int *MR_CSharp_test_int_rref(int *a, int *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_int_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int &&>(42))
    )));
}

const int *MR_CSharp_test_int_crref(const int *a, const int *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_int_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int &&>(42))
    )));
}

int *MR_CSharp_test_int_ptr(int *a, int *b, int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_ptr(
        a,
        b,
        (c ? *c : static_cast<int *>(&default_int))
    );
}

const int *MR_CSharp_test_int_cptr(const int *a, const int *b, const int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_cptr(
        a,
        b,
        (c ? *c : static_cast<const int *>(&default_int))
    );
}

unsigned short MR_CSharp_test_ushort(unsigned short a, const unsigned short *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort(
        a,
        (b ? *b : static_cast<unsigned short>(42))
    );
}

unsigned short *MR_CSharp_test_ushort_ref(unsigned short *a, unsigned short *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_ushort_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<unsigned short &>(default_ushort))
    ));
}

const unsigned short *MR_CSharp_test_ushort_cref(const unsigned short *a, const unsigned short *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_ushort_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const unsigned short &>(default_ushort))
    ));
}

unsigned short *MR_CSharp_test_ushort_rref(unsigned short *a, unsigned short *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_ushort_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<unsigned short &&>((unsigned short &&)default_ushort))
    )));
}

const unsigned short *MR_CSharp_test_ushort_crref(const unsigned short *a, const unsigned short *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_ushort_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const unsigned short &&>((unsigned short &&)default_ushort))
    )));
}

unsigned short *MR_CSharp_test_ushort_ptr(unsigned short *a, unsigned short *b, unsigned short *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_ptr(
        a,
        b,
        (c ? *c : static_cast<unsigned short *>(&default_ushort))
    );
}

const unsigned short *MR_CSharp_test_ushort_cptr(const unsigned short *a, const unsigned short *b, const unsigned short *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_cptr(
        a,
        b,
        (c ? *c : static_cast<const unsigned short *>(&default_ushort))
    );
}

MR_CSharp_E1 MR_CSharp_test_enum_MR_CSharp_E1(MR_CSharp_E1 a, const MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1)(::MR::CSharp::test_enum(
        ((MR::CSharp::E1)a),
        (b ? (MR::CSharp::E1)(*b) : static_cast<MR::CSharp::E1>(E1::b))
    ));
}

MR_CSharp_E1 *MR_CSharp_test_enum_ref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)std::addressof(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 *)(a)),
        (b ? *(MR::CSharp::E1 *)(b) : static_cast<MR::CSharp::E1 &>(default_e1))
    ));
}

const MR_CSharp_E1 *MR_CSharp_test_enum_cref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)std::addressof(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 *)(a)),
        (b ? *(const MR::CSharp::E1 *)(b) : static_cast<const MR::CSharp::E1 &>(default_e1))
    ));
}

MR_CSharp_E1 *MR_CSharp_test_enum_rref_MR_CSharp_E1(MR_CSharp_E1 *a, MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::E1 *)(a))),
        (b ? std::move(*(MR::CSharp::E1 *)(b)) : static_cast<MR::CSharp::E1 &&>((MR::CSharp::E1 &&)default_e1))
    )));
}

const MR_CSharp_E1 *MR_CSharp_test_enum_crref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::E1 *)(a))),
        (b ? std::move(*(const MR::CSharp::E1 *)(b)) : static_cast<const MR::CSharp::E1 &&>((MR::CSharp::E1 &&)default_e1))
    )));
}

MR_CSharp_E1 *MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(MR_CSharp_E1 *a, MR_CSharp_E1 *b, MR_CSharp_E1 *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 *)(::MR::CSharp::test_enum_ptr(
        ((MR::CSharp::E1 *)a),
        ((MR::CSharp::E1 *)b),
        (c ? (MR::CSharp::E1 *)(*c) : static_cast<MR::CSharp::E1 *>(&default_e1))
    ));
}

const MR_CSharp_E1 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b, const MR_CSharp_E1 *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)(::MR::CSharp::test_enum_cptr(
        ((const MR::CSharp::E1 *)a),
        ((const MR::CSharp::E1 *)b),
        (c ? (const MR::CSharp::E1 *)(*c) : static_cast<const MR::CSharp::E1 *>(&default_e1))
    ));
}

MR_CSharp_E2 MR_CSharp_test_enum_MR_CSharp_E2(MR_CSharp_E2 a, const MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2)(::MR::CSharp::test_enum(
        ((MR::CSharp::E2)a),
        (b ? (MR::CSharp::E2)(*b) : static_cast<MR::CSharp::E2>(E2::b))
    ));
}

MR_CSharp_E2 *MR_CSharp_test_enum_ref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)std::addressof(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E2 *)(a)),
        (b ? *(MR::CSharp::E2 *)(b) : static_cast<MR::CSharp::E2 &>(default_e2))
    ));
}

const MR_CSharp_E2 *MR_CSharp_test_enum_cref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)std::addressof(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E2 *)(a)),
        (b ? *(const MR::CSharp::E2 *)(b) : static_cast<const MR::CSharp::E2 &>(default_e2))
    ));
}

MR_CSharp_E2 *MR_CSharp_test_enum_rref_MR_CSharp_E2(MR_CSharp_E2 *a, MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::E2 *)(a))),
        (b ? std::move(*(MR::CSharp::E2 *)(b)) : static_cast<MR::CSharp::E2 &&>((MR::CSharp::E2 &&)default_e2))
    )));
}

const MR_CSharp_E2 *MR_CSharp_test_enum_crref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_enum_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::E2 *)(a))),
        (b ? std::move(*(const MR::CSharp::E2 *)(b)) : static_cast<const MR::CSharp::E2 &&>((MR::CSharp::E2 &&)default_e2))
    )));
}

MR_CSharp_E2 *MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(MR_CSharp_E2 *a, MR_CSharp_E2 *b, MR_CSharp_E2 *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E2 *)(::MR::CSharp::test_enum_ptr(
        ((MR::CSharp::E2 *)a),
        ((MR::CSharp::E2 *)b),
        (c ? (MR::CSharp::E2 *)(*c) : static_cast<MR::CSharp::E2 *>(&default_e2))
    ));
}

const MR_CSharp_E2 *MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b, const MR_CSharp_E2 *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)(::MR::CSharp::test_enum_cptr(
        ((const MR::CSharp::E2 *)a),
        ((const MR::CSharp::E2 *)b),
        (c ? (const MR::CSharp::E2 *)(*c) : static_cast<const MR::CSharp::E2 *>(&default_e2))
    ));
}

MR_CSharp_A *MR_CSharp_A_DefaultConstruct(void)
{
    return (MR_CSharp_A *)new MR::CSharp::A(MR::CSharp::A());
}

MR_CSharp_A *MR_CSharp_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_A *)(new MR::CSharp::A[num_elems]{});
}

const MR_CSharp_A *MR_CSharp_A_OffsetPtr(const MR_CSharp_A *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_A *)(((const MR::CSharp::A *)ptr) + i);
}

MR_CSharp_A *MR_CSharp_A_OffsetMutablePtr(MR_CSharp_A *ptr, ptrdiff_t i)
{
    return (MR_CSharp_A *)(((MR::CSharp::A *)ptr) + i);
}

const MR_CSharp_B *MR_CSharp_A_StaticDowncastTo_MR_CSharp_B(const MR_CSharp_A *object)
{
    return (const MR_CSharp_B *)(static_cast<const MR::CSharp::B *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_B *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_B(MR_CSharp_A *object)
{
    return (MR_CSharp_B *)(static_cast<MR::CSharp::B *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_B *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(const MR_CSharp_A *object)
{
    return (const MR_CSharp_B *)(dynamic_cast<const MR::CSharp::B *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_B *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_B(MR_CSharp_A *object)
{
    return (MR_CSharp_B *)(dynamic_cast<MR::CSharp::B *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_B *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_B(const MR_CSharp_A *object)
{
    return (const MR_CSharp_B *)std::addressof(dynamic_cast<const MR::CSharp::B &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_B *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_B(MR_CSharp_A *object)
{
    return (MR_CSharp_B *)std::addressof(dynamic_cast<MR::CSharp::B &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
}

const MR_CSharp_C *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(const MR_CSharp_A *object)
{
    return (const MR_CSharp_C *)(dynamic_cast<const MR::CSharp::C *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_C *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_C(MR_CSharp_A *object)
{
    return (MR_CSharp_C *)(dynamic_cast<MR::CSharp::C *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_C *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_C(const MR_CSharp_A *object)
{
    return (const MR_CSharp_C *)std::addressof(dynamic_cast<const MR::CSharp::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_C *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_C(MR_CSharp_A *object)
{
    return (MR_CSharp_C *)std::addressof(dynamic_cast<MR::CSharp::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
}

const MR_CSharp_F *MR_CSharp_A_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_A *object)
{
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_F *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_A *object)
{
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_F *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(const MR_CSharp_A *object)
{
    return (const MR_CSharp_F *)(dynamic_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_F *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_F(MR_CSharp_A *object)
{
    return (MR_CSharp_F *)(dynamic_cast<MR::CSharp::F *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_F *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_F(const MR_CSharp_A *object)
{
    return (const MR_CSharp_F *)std::addressof(dynamic_cast<const MR::CSharp::F &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_F *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_F(MR_CSharp_A *object)
{
    return (MR_CSharp_F *)std::addressof(dynamic_cast<MR::CSharp::F &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
}

const MR_CSharp_G *MR_CSharp_A_StaticDowncastTo_MR_CSharp_G(const MR_CSharp_A *object)
{
    return (const MR_CSharp_G *)(static_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_G *MR_CSharp_A_MutableStaticDowncastTo_MR_CSharp_G(MR_CSharp_A *object)
{
    return (MR_CSharp_G *)(static_cast<MR::CSharp::G *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_G *MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(const MR_CSharp_A *object)
{
    return (const MR_CSharp_G *)(dynamic_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::A *)object)
    ));
}

MR_CSharp_G *MR_CSharp_A_MutableDynamicDowncastTo_MR_CSharp_G(MR_CSharp_A *object)
{
    return (MR_CSharp_G *)(dynamic_cast<MR::CSharp::G *>(
        ((MR::CSharp::A *)object)
    ));
}

const MR_CSharp_G *MR_CSharp_A_DynamicDowncastToOrFail_MR_CSharp_G(const MR_CSharp_A *object)
{
    return (const MR_CSharp_G *)std::addressof(dynamic_cast<const MR::CSharp::G &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_G *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_G(MR_CSharp_A *object)
{
    return (MR_CSharp_G *)std::addressof(dynamic_cast<MR::CSharp::G &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::A *)(object))
    ));
}

MR_CSharp_A *MR_CSharp_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_A *_other)
{
    return (MR_CSharp_A *)new MR::CSharp::A(MR::CSharp::A(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::A) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::A) MRBINDC_CLASSARG_END(_other, MR::CSharp::A))
    ));
}

void MR_CSharp_A_Destroy(const MR_CSharp_A *_this)
{
    delete ((const MR::CSharp::A *)_this);
}

void MR_CSharp_A_DestroyArray(const MR_CSharp_A *_this)
{
    delete[] ((const MR::CSharp::A *)_this);
}

MR_CSharp_A *MR_CSharp_A_AssignFromAnother(MR_CSharp_A *_this, MR_C_PassBy _other_pass_by, MR_CSharp_A *_other)
{
    return (MR_CSharp_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::A) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::A) MRBINDC_CLASSARG_END(_other, MR::CSharp::A))
    ));
}

void MR_CSharp_A_foo(MR_CSharp_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).foo();
}

void MR_CSharp_A_bar(const MR_CSharp_A *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).bar(
        _1,
        _2
    );
}

void MR_CSharp_A_static_foo(void)
{
    MR::CSharp::A::static_foo();
}

void MR_CSharp_A_static_bar(int _1, int _2)
{
    MR::CSharp::A::static_bar(
        _1,
        _2
    );
}

void MR_CSharp_A_virtual_foo(MR_CSharp_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).virtual_foo();
}

void MR_CSharp_A_virtual_bar(const MR_CSharp_A *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int *MR_CSharp_A_refs(MR_CSharp_A *_this, int *x, int *_2)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
}

MR_CSharp_B *MR_CSharp_B_DefaultConstruct(void)
{
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B());
}

MR_CSharp_B *MR_CSharp_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_B *)(new MR::CSharp::B[num_elems]{});
}

const MR_CSharp_B *MR_CSharp_B_OffsetPtr(const MR_CSharp_B *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_B *)(((const MR::CSharp::B *)ptr) + i);
}

MR_CSharp_B *MR_CSharp_B_OffsetMutablePtr(MR_CSharp_B *ptr, ptrdiff_t i)
{
    return (MR_CSharp_B *)(((MR::CSharp::B *)ptr) + i);
}

const MR_CSharp_A *MR_CSharp_B_UpcastTo_MR_CSharp_A(const MR_CSharp_B *object)
{
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::B *)object)
    ));
}

MR_CSharp_A *MR_CSharp_B_MutableUpcastTo_MR_CSharp_A(MR_CSharp_B *object)
{
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::B *)object)
    ));
}

MR_CSharp_B *MR_CSharp_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_B *_other)
{
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::B) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::B) MRBINDC_CLASSARG_END(_other, MR::CSharp::B))
    ));
}

MR_CSharp_B *MR_CSharp_B_Construct(int a, int b)
{
    return (MR_CSharp_B *)new MR::CSharp::B(MR::CSharp::B(
        a,
        b
    ));
}

void MR_CSharp_B_Destroy(const MR_CSharp_B *_this)
{
    delete ((const MR::CSharp::B *)_this);
}

void MR_CSharp_B_DestroyArray(const MR_CSharp_B *_this)
{
    delete[] ((const MR::CSharp::B *)_this);
}

MR_CSharp_B *MR_CSharp_B_AssignFromAnother(MR_CSharp_B *_this, MR_C_PassBy _other_pass_by, MR_CSharp_B *_other)
{
    return (MR_CSharp_B *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::B) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::B) MRBINDC_CLASSARG_END(_other, MR::CSharp::B))
    ));
}

void MR_CSharp_B_foo(MR_CSharp_B *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).foo();
}

void MR_CSharp_B_bar(const MR_CSharp_B *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::B *)(_this)).bar(
        _1,
        _2
    );
}

void MR_CSharp_B_static_foo(void)
{
    MR::CSharp::B::static_foo();
}

void MR_CSharp_B_static_bar(int _1, int _2)
{
    MR::CSharp::B::static_bar(
        _1,
        _2
    );
}

void MR_CSharp_B_virtual_foo(MR_CSharp_B *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).virtual_foo();
}

void MR_CSharp_B_virtual_bar(const MR_CSharp_B *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::B *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int *MR_CSharp_B_refs(MR_CSharp_B *_this, int *x, int *_2)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
}

MR_CSharp_C *MR_CSharp_C_DefaultConstruct(void)
{
    return (MR_CSharp_C *)new MR::CSharp::C(MR::CSharp::C());
}

MR_CSharp_C *MR_CSharp_C_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_C *)(new MR::CSharp::C[num_elems]{});
}

const MR_CSharp_C *MR_CSharp_C_OffsetPtr(const MR_CSharp_C *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_C *)(((const MR::CSharp::C *)ptr) + i);
}

MR_CSharp_C *MR_CSharp_C_OffsetMutablePtr(MR_CSharp_C *ptr, ptrdiff_t i)
{
    return (MR_CSharp_C *)(((MR::CSharp::C *)ptr) + i);
}

const MR_CSharp_A *MR_CSharp_C_UpcastTo_MR_CSharp_A(const MR_CSharp_C *object)
{
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::C *)object)
    ));
}

MR_CSharp_A *MR_CSharp_C_MutableUpcastTo_MR_CSharp_A(MR_CSharp_C *object)
{
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::C *)object)
    ));
}

MR_CSharp_C *MR_CSharp_C_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_C *_other)
{
    return (MR_CSharp_C *)new MR::CSharp::C(MR::CSharp::C(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::C) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::C) MRBINDC_CLASSARG_END(_other, MR::CSharp::C))
    ));
}

void MR_CSharp_C_Destroy(const MR_CSharp_C *_this)
{
    delete ((const MR::CSharp::C *)_this);
}

void MR_CSharp_C_DestroyArray(const MR_CSharp_C *_this)
{
    delete[] ((const MR::CSharp::C *)_this);
}

MR_CSharp_C *MR_CSharp_C_AssignFromAnother(MR_CSharp_C *_this, MR_C_PassBy _other_pass_by, MR_CSharp_C *_other)
{
    return (MR_CSharp_C *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::C) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::C) MRBINDC_CLASSARG_END(_other, MR::CSharp::C))
    ));
}

void MR_CSharp_C_foo(MR_CSharp_C *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).foo();
}

void MR_CSharp_C_bar(const MR_CSharp_C *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::C *)(_this)).bar(
        _1,
        _2
    );
}

void MR_CSharp_C_static_foo(void)
{
    MR::CSharp::C::static_foo();
}

void MR_CSharp_C_static_bar(int _1, int _2)
{
    MR::CSharp::C::static_bar(
        _1,
        _2
    );
}

void MR_CSharp_C_virtual_foo(MR_CSharp_C *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).virtual_foo();
}

void MR_CSharp_C_virtual_bar(const MR_CSharp_C *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::C *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int *MR_CSharp_C_refs(MR_CSharp_C *_this, int *x, int *_2)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
}

MR_CSharp_D *MR_CSharp_D_DefaultConstruct(void)
{
    return (MR_CSharp_D *)new MR::CSharp::D(MR::CSharp::D());
}

MR_CSharp_D *MR_CSharp_D_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_D *)(new MR::CSharp::D[num_elems]{});
}

const MR_CSharp_D *MR_CSharp_D_OffsetPtr(const MR_CSharp_D *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_D *)(((const MR::CSharp::D *)ptr) + i);
}

MR_CSharp_D *MR_CSharp_D_OffsetMutablePtr(MR_CSharp_D *ptr, ptrdiff_t i)
{
    return (MR_CSharp_D *)(((MR::CSharp::D *)ptr) + i);
}

const MR_CSharp_F *MR_CSharp_D_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_D *object)
{
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::D *)object)
    ));
}

MR_CSharp_F *MR_CSharp_D_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_D *object)
{
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::D *)object)
    ));
}

const MR_CSharp_G *MR_CSharp_D_StaticDowncastTo_MR_CSharp_G(const MR_CSharp_D *object)
{
    return (const MR_CSharp_G *)(static_cast<const MR::CSharp::G *>(
        ((const MR::CSharp::D *)object)
    ));
}

MR_CSharp_G *MR_CSharp_D_MutableStaticDowncastTo_MR_CSharp_G(MR_CSharp_D *object)
{
    return (MR_CSharp_G *)(static_cast<MR::CSharp::G *>(
        ((MR::CSharp::D *)object)
    ));
}

MR_CSharp_D *MR_CSharp_D_ConstructFromAnother(const MR_CSharp_D *_other)
{
    return (MR_CSharp_D *)new MR::CSharp::D(MR::CSharp::D(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::D(*(MR::CSharp::D *)_other))
    ));
}

void MR_CSharp_D_Destroy(const MR_CSharp_D *_this)
{
    delete ((const MR::CSharp::D *)_this);
}

void MR_CSharp_D_DestroyArray(const MR_CSharp_D *_this)
{
    delete[] ((const MR::CSharp::D *)_this);
}

MR_CSharp_D *MR_CSharp_D_AssignFromAnother(MR_CSharp_D *_this, const MR_CSharp_D *_other)
{
    return (MR_CSharp_D *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::D *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::D(*(MR::CSharp::D *)_other))
    ));
}

void MR_CSharp_D_d1(const MR_CSharp_D *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::D *)(_this)).d1();
}

void MR_CSharp_D_d2(MR_CSharp_D *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::D *)(_this)).d2();
}

MR_CSharp_E *MR_CSharp_E_DefaultConstruct(void)
{
    return (MR_CSharp_E *)new MR::CSharp::E(MR::CSharp::E());
}

MR_CSharp_E *MR_CSharp_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_E *)(new MR::CSharp::E[num_elems]{});
}

const MR_CSharp_E *MR_CSharp_E_OffsetPtr(const MR_CSharp_E *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_E *)(((const MR::CSharp::E *)ptr) + i);
}

MR_CSharp_E *MR_CSharp_E_OffsetMutablePtr(MR_CSharp_E *ptr, ptrdiff_t i)
{
    return (MR_CSharp_E *)(((MR::CSharp::E *)ptr) + i);
}

const MR_CSharp_F *MR_CSharp_E_StaticDowncastTo_MR_CSharp_F(const MR_CSharp_E *object)
{
    return (const MR_CSharp_F *)(static_cast<const MR::CSharp::F *>(
        ((const MR::CSharp::E *)object)
    ));
}

MR_CSharp_F *MR_CSharp_E_MutableStaticDowncastTo_MR_CSharp_F(MR_CSharp_E *object)
{
    return (MR_CSharp_F *)(static_cast<MR::CSharp::F *>(
        ((MR::CSharp::E *)object)
    ));
}

MR_CSharp_E *MR_CSharp_E_ConstructFromAnother(const MR_CSharp_E *_other)
{
    return (MR_CSharp_E *)new MR::CSharp::E(MR::CSharp::E(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::E(*(MR::CSharp::E *)_other))
    ));
}

void MR_CSharp_E_Destroy(const MR_CSharp_E *_this)
{
    delete ((const MR::CSharp::E *)_this);
}

void MR_CSharp_E_DestroyArray(const MR_CSharp_E *_this)
{
    delete[] ((const MR::CSharp::E *)_this);
}

MR_CSharp_E *MR_CSharp_E_AssignFromAnother(MR_CSharp_E *_this, const MR_CSharp_E *_other)
{
    return (MR_CSharp_E *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::E *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::E(*(MR::CSharp::E *)_other))
    ));
}

void MR_CSharp_E_e1(const MR_CSharp_E *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::E *)(_this)).e1();
}

void MR_CSharp_E_e2(MR_CSharp_E *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::E *)(_this)).e2();
}

MR_CSharp_F *MR_CSharp_F_DefaultConstruct(void)
{
    return (MR_CSharp_F *)new MR::CSharp::F(MR::CSharp::F());
}

MR_CSharp_F *MR_CSharp_F_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_F *)(new MR::CSharp::F[num_elems]{});
}

const MR_CSharp_F *MR_CSharp_F_OffsetPtr(const MR_CSharp_F *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_F *)(((const MR::CSharp::F *)ptr) + i);
}

MR_CSharp_F *MR_CSharp_F_OffsetMutablePtr(MR_CSharp_F *ptr, ptrdiff_t i)
{
    return (MR_CSharp_F *)(((MR::CSharp::F *)ptr) + i);
}

const MR_CSharp_A *MR_CSharp_F_UpcastTo_MR_CSharp_A(const MR_CSharp_F *object)
{
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::F *)object)
    ));
}

MR_CSharp_A *MR_CSharp_F_MutableUpcastTo_MR_CSharp_A(MR_CSharp_F *object)
{
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::F *)object)
    ));
}

const MR_CSharp_D *MR_CSharp_F_UpcastTo_MR_CSharp_D(const MR_CSharp_F *object)
{
    return (const MR_CSharp_D *)(static_cast<const MR::CSharp::D *>(
        ((const MR::CSharp::F *)object)
    ));
}

MR_CSharp_D *MR_CSharp_F_MutableUpcastTo_MR_CSharp_D(MR_CSharp_F *object)
{
    return (MR_CSharp_D *)(static_cast<MR::CSharp::D *>(
        ((MR::CSharp::F *)object)
    ));
}

const MR_CSharp_E *MR_CSharp_F_UpcastTo_MR_CSharp_E(const MR_CSharp_F *object)
{
    return (const MR_CSharp_E *)(static_cast<const MR::CSharp::E *>(
        ((const MR::CSharp::F *)object)
    ));
}

MR_CSharp_E *MR_CSharp_F_MutableUpcastTo_MR_CSharp_E(MR_CSharp_F *object)
{
    return (MR_CSharp_E *)(static_cast<MR::CSharp::E *>(
        ((MR::CSharp::F *)object)
    ));
}

MR_CSharp_F *MR_CSharp_F_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_F *_other)
{
    return (MR_CSharp_F *)new MR::CSharp::F(MR::CSharp::F(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::F) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::F) MRBINDC_CLASSARG_END(_other, MR::CSharp::F))
    ));
}

void MR_CSharp_F_Destroy(const MR_CSharp_F *_this)
{
    delete ((const MR::CSharp::F *)_this);
}

void MR_CSharp_F_DestroyArray(const MR_CSharp_F *_this)
{
    delete[] ((const MR::CSharp::F *)_this);
}

MR_CSharp_F *MR_CSharp_F_AssignFromAnother(MR_CSharp_F *_this, MR_C_PassBy _other_pass_by, MR_CSharp_F *_other)
{
    return (MR_CSharp_F *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::F) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::F) MRBINDC_CLASSARG_END(_other, MR::CSharp::F))
    ));
}

void MR_CSharp_F_foo(MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).foo();
}

void MR_CSharp_F_bar(const MR_CSharp_F *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).bar(
        _1,
        _2
    );
}

void MR_CSharp_F_static_foo(void)
{
    MR::CSharp::F::static_foo();
}

void MR_CSharp_F_static_bar(int _1, int _2)
{
    MR::CSharp::F::static_bar(
        _1,
        _2
    );
}

void MR_CSharp_F_virtual_foo(MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).virtual_foo();
}

void MR_CSharp_F_virtual_bar(const MR_CSharp_F *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int *MR_CSharp_F_refs(MR_CSharp_F *_this, int *x, int *_2)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
}

void MR_CSharp_F_d1(const MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).d1();
}

void MR_CSharp_F_d2(MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).d2();
}

void MR_CSharp_F_e1(const MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::F *)(_this)).e1();
}

void MR_CSharp_F_e2(MR_CSharp_F *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).e2();
}

MR_CSharp_G *MR_CSharp_G_DefaultConstruct(void)
{
    return (MR_CSharp_G *)new MR::CSharp::G(MR::CSharp::G());
}

MR_CSharp_G *MR_CSharp_G_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_G *)(new MR::CSharp::G[num_elems]{});
}

const MR_CSharp_G *MR_CSharp_G_OffsetPtr(const MR_CSharp_G *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_G *)(((const MR::CSharp::G *)ptr) + i);
}

MR_CSharp_G *MR_CSharp_G_OffsetMutablePtr(MR_CSharp_G *ptr, ptrdiff_t i)
{
    return (MR_CSharp_G *)(((MR::CSharp::G *)ptr) + i);
}

const MR_CSharp_A *MR_CSharp_G_UpcastTo_MR_CSharp_A(const MR_CSharp_G *object)
{
    return (const MR_CSharp_A *)(static_cast<const MR::CSharp::A *>(
        ((const MR::CSharp::G *)object)
    ));
}

MR_CSharp_A *MR_CSharp_G_MutableUpcastTo_MR_CSharp_A(MR_CSharp_G *object)
{
    return (MR_CSharp_A *)(static_cast<MR::CSharp::A *>(
        ((MR::CSharp::G *)object)
    ));
}

const MR_CSharp_D *MR_CSharp_G_UpcastTo_MR_CSharp_D(const MR_CSharp_G *object)
{
    return (const MR_CSharp_D *)(static_cast<const MR::CSharp::D *>(
        ((const MR::CSharp::G *)object)
    ));
}

MR_CSharp_D *MR_CSharp_G_MutableUpcastTo_MR_CSharp_D(MR_CSharp_G *object)
{
    return (MR_CSharp_D *)(static_cast<MR::CSharp::D *>(
        ((MR::CSharp::G *)object)
    ));
}

const MR_CSharp_E *MR_CSharp_G_UpcastTo_MR_CSharp_E(const MR_CSharp_G *object)
{
    return (const MR_CSharp_E *)(static_cast<const MR::CSharp::E *>(
        ((const MR::CSharp::G *)object)
    ));
}

MR_CSharp_E *MR_CSharp_G_MutableUpcastTo_MR_CSharp_E(MR_CSharp_G *object)
{
    return (MR_CSharp_E *)(static_cast<MR::CSharp::E *>(
        ((MR::CSharp::G *)object)
    ));
}

MR_CSharp_G *MR_CSharp_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_G *_other)
{
    return (MR_CSharp_G *)new MR::CSharp::G(MR::CSharp::G(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::G) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::G) MRBINDC_CLASSARG_END(_other, MR::CSharp::G))
    ));
}

void MR_CSharp_G_Destroy(const MR_CSharp_G *_this)
{
    delete ((const MR::CSharp::G *)_this);
}

void MR_CSharp_G_DestroyArray(const MR_CSharp_G *_this)
{
    delete[] ((const MR::CSharp::G *)_this);
}

MR_CSharp_G *MR_CSharp_G_AssignFromAnother(MR_CSharp_G *_this, MR_C_PassBy _other_pass_by, MR_CSharp_G *_other)
{
    return (MR_CSharp_G *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::G) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::G) MRBINDC_CLASSARG_END(_other, MR::CSharp::G))
    ));
}

void MR_CSharp_G_foo(MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).foo();
}

void MR_CSharp_G_bar(const MR_CSharp_G *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).bar(
        _1,
        _2
    );
}

void MR_CSharp_G_static_foo(void)
{
    MR::CSharp::G::static_foo();
}

void MR_CSharp_G_static_bar(int _1, int _2)
{
    MR::CSharp::G::static_bar(
        _1,
        _2
    );
}

void MR_CSharp_G_virtual_foo(MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).virtual_foo();
}

void MR_CSharp_G_virtual_bar(const MR_CSharp_G *_this, int _1, int _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int *MR_CSharp_G_refs(MR_CSharp_G *_this, int *x, int *_2)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).refs(
        ((x ? void() : throw std::runtime_error("Parameter `x` can not be null.")), *x),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *_2)
    ));
}

void MR_CSharp_G_d1(const MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).d1();
}

void MR_CSharp_G_d2(MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).d2();
}

void MR_CSharp_G_e1(const MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::G *)(_this)).e1();
}

void MR_CSharp_G_e2(MR_CSharp_G *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).e2();
}

MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstruct(void)
{
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(MR::CSharp::Trivial());
}

MR_CSharp_Trivial *MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_Trivial *)(new MR::CSharp::Trivial[num_elems]{});
}

const MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetPtr(const MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_Trivial *)(((const MR::CSharp::Trivial *)ptr) + i);
}

MR_CSharp_Trivial *MR_CSharp_Trivial_OffsetMutablePtr(MR_CSharp_Trivial *ptr, ptrdiff_t i)
{
    return (MR_CSharp_Trivial *)(((MR::CSharp::Trivial *)ptr) + i);
}

MR_CSharp_Trivial *MR_CSharp_Trivial_ConstructFromAnother(const MR_CSharp_Trivial *_other)
{
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(MR::CSharp::Trivial(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)_other))
    ));
}

void MR_CSharp_Trivial_Destroy(const MR_CSharp_Trivial *_this)
{
    delete ((const MR::CSharp::Trivial *)_this);
}

void MR_CSharp_Trivial_DestroyArray(const MR_CSharp_Trivial *_this)
{
    delete[] ((const MR::CSharp::Trivial *)_this);
}

MR_CSharp_Trivial *MR_CSharp_Trivial_AssignFromAnother(MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *_other)
{
    return (MR_CSharp_Trivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Trivial *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)_other))
    ));
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstruct(void)
{
    return (MR_CSharp_TrivialDerived *)new MR::CSharp::TrivialDerived(MR::CSharp::TrivialDerived());
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_TrivialDerived *)(new MR::CSharp::TrivialDerived[num_elems]{});
}

const MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetPtr(const MR_CSharp_TrivialDerived *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TrivialDerived *)(((const MR::CSharp::TrivialDerived *)ptr) + i);
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_OffsetMutablePtr(MR_CSharp_TrivialDerived *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TrivialDerived *)(((MR::CSharp::TrivialDerived *)ptr) + i);
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_ConstructFromAnother(const MR_CSharp_TrivialDerived *_other)
{
    return (MR_CSharp_TrivialDerived *)new MR::CSharp::TrivialDerived(MR::CSharp::TrivialDerived(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TrivialDerived(*(MR::CSharp::TrivialDerived *)_other))
    ));
}

void MR_CSharp_TrivialDerived_Destroy(const MR_CSharp_TrivialDerived *_this)
{
    delete ((const MR::CSharp::TrivialDerived *)_this);
}

void MR_CSharp_TrivialDerived_DestroyArray(const MR_CSharp_TrivialDerived *_this)
{
    delete[] ((const MR::CSharp::TrivialDerived *)_this);
}

MR_CSharp_TrivialDerived *MR_CSharp_TrivialDerived_AssignFromAnother(MR_CSharp_TrivialDerived *_this, const MR_CSharp_TrivialDerived *_other)
{
    return (MR_CSharp_TrivialDerived *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TrivialDerived *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TrivialDerived(*(MR::CSharp::TrivialDerived *)_other))
    ));
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)new MR::CSharp::Trivial(::MR::CSharp::test_class_trivial(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)),
        (b ? MR::CSharp::Trivial(*(MR::CSharp::Trivial *)b) : static_cast<MR::CSharp::Trivial>(MR::CSharp::Trivial{}))
    ));
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_class_trivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::Trivial *)(a)),
        (b ? *(MR::CSharp::Trivial *)(b) : static_cast<MR::CSharp::Trivial &>(default_trivial))
    ));
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_class_trivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::Trivial *)(a)),
        (b ? *(const MR::CSharp::Trivial *)(b) : static_cast<const MR::CSharp::Trivial &>(default_trivial))
    ));
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_rref(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_trivial_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::Trivial *)(a))),
        (b ? std::move(*(MR::CSharp::Trivial *)(b)) : static_cast<MR::CSharp::Trivial &&>((MR::CSharp::Trivial &&)default_trivial))
    )));
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_crref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_trivial_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::Trivial *)(a))),
        (b ? std::move(*(const MR::CSharp::Trivial *)(b)) : static_cast<const MR::CSharp::Trivial &&>((MR::CSharp::Trivial &&)default_trivial))
    )));
}

MR_CSharp_Trivial *MR_CSharp_test_class_trivial_ptr(MR_CSharp_Trivial *a, MR_CSharp_Trivial *b, MR_CSharp_Trivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_Trivial *)(::MR::CSharp::test_class_trivial_ptr(
        ((MR::CSharp::Trivial *)a),
        ((MR::CSharp::Trivial *)b),
        (c ? (MR::CSharp::Trivial *)(*c) : static_cast<MR::CSharp::Trivial *>(&default_trivial))
    ));
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cptr(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b, const MR_CSharp_Trivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)(::MR::CSharp::test_class_trivial_cptr(
        ((const MR::CSharp::Trivial *)a),
        ((const MR::CSharp::Trivial *)b),
        (c ? (const MR::CSharp::Trivial *)(*c) : static_cast<const MR::CSharp::Trivial *>(&default_trivial))
    ));
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstruct(void)
{
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(MR::CSharp::NonTrivial());
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NonTrivial *)(new MR::CSharp::NonTrivial[num_elems]{});
}

const MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetPtr(const MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NonTrivial *)(((const MR::CSharp::NonTrivial *)ptr) + i);
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_OffsetMutablePtr(MR_CSharp_NonTrivial *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NonTrivial *)(((MR::CSharp::NonTrivial *)ptr) + i);
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other)
{
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(MR::CSharp::NonTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivial))
    ));
}

void MR_CSharp_NonTrivial_Destroy(const MR_CSharp_NonTrivial *_this)
{
    delete ((const MR::CSharp::NonTrivial *)_this);
}

void MR_CSharp_NonTrivial_DestroyArray(const MR_CSharp_NonTrivial *_this)
{
    delete[] ((const MR::CSharp::NonTrivial *)_this);
}

MR_CSharp_NonTrivial *MR_CSharp_NonTrivial_AssignFromAnother(MR_CSharp_NonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivial *_other)
{
    return (MR_CSharp_NonTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivial *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivial))
    ));
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstruct(void)
{
    return (MR_CSharp_NonTrivialDerived *)new MR::CSharp::NonTrivialDerived(MR::CSharp::NonTrivialDerived());
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NonTrivialDerived *)(new MR::CSharp::NonTrivialDerived[num_elems]{});
}

const MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetPtr(const MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NonTrivialDerived *)(((const MR::CSharp::NonTrivialDerived *)ptr) + i);
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_OffsetMutablePtr(MR_CSharp_NonTrivialDerived *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NonTrivialDerived *)(((MR::CSharp::NonTrivialDerived *)ptr) + i);
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other)
{
    return (MR_CSharp_NonTrivialDerived *)new MR::CSharp::NonTrivialDerived(MR::CSharp::NonTrivialDerived(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialDerived))
    ));
}

void MR_CSharp_NonTrivialDerived_Destroy(const MR_CSharp_NonTrivialDerived *_this)
{
    delete ((const MR::CSharp::NonTrivialDerived *)_this);
}

void MR_CSharp_NonTrivialDerived_DestroyArray(const MR_CSharp_NonTrivialDerived *_this)
{
    delete[] ((const MR::CSharp::NonTrivialDerived *)_this);
}

MR_CSharp_NonTrivialDerived *MR_CSharp_NonTrivialDerived_AssignFromAnother(MR_CSharp_NonTrivialDerived *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialDerived *_other)
{
    return (MR_CSharp_NonTrivialDerived *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialDerived *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialDerived), MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialDerived) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialDerived))
    ));
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)new MR::CSharp::NonTrivial(::MR::CSharp::test_class_nontrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(a, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(a, MR::CSharp::NonTrivial)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (MR::CSharp::NonTrivial{}), MR::CSharp::NonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, MR::CSharp::NonTrivial) MRBINDC_CLASSARG_END(b, MR::CSharp::NonTrivial))
    ));
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_class_nontrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::NonTrivial *)(a)),
        (b ? *(MR::CSharp::NonTrivial *)(b) : static_cast<MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_class_nontrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::NonTrivial *)(a)),
        (b ? *(const MR::CSharp::NonTrivial *)(b) : static_cast<const MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_rref(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_nontrivial_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::NonTrivial *)(a))),
        (b ? std::move(*(MR::CSharp::NonTrivial *)(b)) : static_cast<MR::CSharp::NonTrivial &&>((MR::CSharp::NonTrivial &&)default_nontrivial))
    )));
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_crref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_class_nontrivial_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::NonTrivial *)(a))),
        (b ? std::move(*(const MR::CSharp::NonTrivial *)(b)) : static_cast<const MR::CSharp::NonTrivial &&>((MR::CSharp::NonTrivial &&)default_nontrivial))
    )));
}

MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_ptr(MR_CSharp_NonTrivial *a, MR_CSharp_NonTrivial *b, MR_CSharp_NonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_NonTrivial *)(::MR::CSharp::test_class_nontrivial_ptr(
        ((MR::CSharp::NonTrivial *)a),
        ((MR::CSharp::NonTrivial *)b),
        (c ? (MR::CSharp::NonTrivial *)(*c) : static_cast<MR::CSharp::NonTrivial *>(&default_nontrivial))
    ));
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cptr(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b, const MR_CSharp_NonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)(::MR::CSharp::test_class_nontrivial_cptr(
        ((const MR::CSharp::NonTrivial *)a),
        ((const MR::CSharp::NonTrivial *)b),
        (c ? (const MR::CSharp::NonTrivial *)(*c) : static_cast<const MR::CSharp::NonTrivial *>(&default_nontrivial))
    ));
}

void *MR_CSharp_test_void_ptr(void *a, void *b, void *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_void_ptr(
        a,
        b,
        (c ? *c : static_cast<void *>((void *)42))
    );
}

const void *MR_CSharp_test_void_cptr(const void *a, const void *b, const void *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_void_cptr(
        a,
        b,
        (c ? *c : static_cast<const void *>((const void *)42))
    );
}

MR_CSharp_SA *MR_CSharp_SA_DefaultConstruct(void)
{
    return (MR_CSharp_SA *)new MR::CSharp::SA(MR::CSharp::SA());
}

MR_CSharp_SA *MR_CSharp_SA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SA *)(new MR::CSharp::SA[num_elems]{});
}

const MR_CSharp_SA *MR_CSharp_SA_OffsetPtr(const MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SA *)(((const MR::CSharp::SA *)ptr) + i);
}

MR_CSharp_SA *MR_CSharp_SA_OffsetMutablePtr(MR_CSharp_SA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SA *)(((MR::CSharp::SA *)ptr) + i);
}

const MR_CSharp_SC *MR_CSharp_SA_StaticDowncastTo_MR_CSharp_SC(const MR_CSharp_SA *object)
{
    return (const MR_CSharp_SC *)(static_cast<const MR::CSharp::SC *>(
        ((const MR::CSharp::SA *)object)
    ));
}

MR_CSharp_SC *MR_CSharp_SA_MutableStaticDowncastTo_MR_CSharp_SC(MR_CSharp_SA *object)
{
    return (MR_CSharp_SC *)(static_cast<MR::CSharp::SC *>(
        ((MR::CSharp::SA *)object)
    ));
}

MR_CSharp_SA *MR_CSharp_SA_ConstructFromAnother(const MR_CSharp_SA *_other)
{
    return (MR_CSharp_SA *)new MR::CSharp::SA(MR::CSharp::SA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SA(*(MR::CSharp::SA *)_other))
    ));
}

void MR_CSharp_SA_Destroy(const MR_CSharp_SA *_this)
{
    delete ((const MR::CSharp::SA *)_this);
}

void MR_CSharp_SA_DestroyArray(const MR_CSharp_SA *_this)
{
    delete[] ((const MR::CSharp::SA *)_this);
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
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB());
}

MR_CSharp_SB *MR_CSharp_SB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SB *)(new MR::CSharp::SB[num_elems]{});
}

MR_CSharp_SB *MR_CSharp_SB_ConstructFrom(const char *s, const char *s_end)
{
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB{
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    });
}

const MR_CSharp_SB *MR_CSharp_SB_OffsetPtr(const MR_CSharp_SB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SB *)(((const MR::CSharp::SB *)ptr) + i);
}

MR_CSharp_SB *MR_CSharp_SB_OffsetMutablePtr(MR_CSharp_SB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SB *)(((MR::CSharp::SB *)ptr) + i);
}

const MR_CSharp_SC *MR_CSharp_SB_StaticDowncastTo_MR_CSharp_SC(const MR_CSharp_SB *object)
{
    return (const MR_CSharp_SC *)(static_cast<const MR::CSharp::SC *>(
        ((const MR::CSharp::SB *)object)
    ));
}

MR_CSharp_SC *MR_CSharp_SB_MutableStaticDowncastTo_MR_CSharp_SC(MR_CSharp_SB *object)
{
    return (MR_CSharp_SC *)(static_cast<MR::CSharp::SC *>(
        ((MR::CSharp::SB *)object)
    ));
}

MR_CSharp_SB *MR_CSharp_SB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other)
{
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SB) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SB) MRBINDC_CLASSARG_END(_other, MR::CSharp::SB))
    ));
}

void MR_CSharp_SB_Destroy(const MR_CSharp_SB *_this)
{
    delete ((const MR::CSharp::SB *)_this);
}

void MR_CSharp_SB_DestroyArray(const MR_CSharp_SB *_this)
{
    delete[] ((const MR::CSharp::SB *)_this);
}

MR_CSharp_SB *MR_CSharp_SB_AssignFromAnother(MR_CSharp_SB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SB *_other)
{
    return (MR_CSharp_SB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SB *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SB) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SB), MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SB) MRBINDC_CLASSARG_END(_other, MR::CSharp::SB))
    ));
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
    return (MR_CSharp_SC *)new MR::CSharp::SC(MR::CSharp::SC());
}

MR_CSharp_SC *MR_CSharp_SC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SC *)(new MR::CSharp::SC[num_elems]{});
}

const MR_CSharp_SC *MR_CSharp_SC_OffsetPtr(const MR_CSharp_SC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SC *)(((const MR::CSharp::SC *)ptr) + i);
}

MR_CSharp_SC *MR_CSharp_SC_OffsetMutablePtr(MR_CSharp_SC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SC *)(((MR::CSharp::SC *)ptr) + i);
}

const MR_CSharp_SA *MR_CSharp_SC_UpcastTo_MR_CSharp_SA(const MR_CSharp_SC *object)
{
    return (const MR_CSharp_SA *)(static_cast<const MR::CSharp::SA *>(
        ((const MR::CSharp::SC *)object)
    ));
}

MR_CSharp_SA *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA(MR_CSharp_SC *object)
{
    return (MR_CSharp_SA *)(static_cast<MR::CSharp::SA *>(
        ((MR::CSharp::SC *)object)
    ));
}

const MR_CSharp_SB *MR_CSharp_SC_UpcastTo_MR_CSharp_SB(const MR_CSharp_SC *object)
{
    return (const MR_CSharp_SB *)(static_cast<const MR::CSharp::SB *>(
        ((const MR::CSharp::SC *)object)
    ));
}

MR_CSharp_SB *MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB(MR_CSharp_SC *object)
{
    return (MR_CSharp_SB *)(static_cast<MR::CSharp::SB *>(
        ((MR::CSharp::SC *)object)
    ));
}

MR_CSharp_SC *MR_CSharp_SC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other)
{
    return (MR_CSharp_SC *)new MR::CSharp::SC(MR::CSharp::SC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SC) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SC) MRBINDC_CLASSARG_END(_other, MR::CSharp::SC))
    ));
}

void MR_CSharp_SC_Destroy(const MR_CSharp_SC *_this)
{
    delete ((const MR::CSharp::SC *)_this);
}

void MR_CSharp_SC_DestroyArray(const MR_CSharp_SC *_this)
{
    delete[] ((const MR::CSharp::SC *)_this);
}

MR_CSharp_SC *MR_CSharp_SC_AssignFromAnother(MR_CSharp_SC *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SC *_other)
{
    return (MR_CSharp_SC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SC *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SC) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SC), MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SC) MRBINDC_CLASSARG_END(_other, MR::CSharp::SC))
    ));
}

MR_CSharp_SD *MR_CSharp_SD_DefaultConstruct(void)
{
    return (MR_CSharp_SD *)new MR::CSharp::SD(MR::CSharp::SD());
}

MR_CSharp_SD *MR_CSharp_SD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SD *)(new MR::CSharp::SD[num_elems]{});
}

const MR_CSharp_SD *MR_CSharp_SD_OffsetPtr(const MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SD *)(((const MR::CSharp::SD *)ptr) + i);
}

MR_CSharp_SD *MR_CSharp_SD_OffsetMutablePtr(MR_CSharp_SD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SD *)(((MR::CSharp::SD *)ptr) + i);
}

const MR_CSharp_SF *MR_CSharp_SD_StaticDowncastTo_MR_CSharp_SF(const MR_CSharp_SD *object)
{
    return (const MR_CSharp_SF *)(static_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SD *)object)
    ));
}

MR_CSharp_SF *MR_CSharp_SD_MutableStaticDowncastTo_MR_CSharp_SF(MR_CSharp_SD *object)
{
    return (MR_CSharp_SF *)(static_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SD *)object)
    ));
}

const MR_CSharp_SF *MR_CSharp_SD_DynamicDowncastTo_MR_CSharp_SF(const MR_CSharp_SD *object)
{
    return (const MR_CSharp_SF *)(dynamic_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SD *)object)
    ));
}

MR_CSharp_SF *MR_CSharp_SD_MutableDynamicDowncastTo_MR_CSharp_SF(MR_CSharp_SD *object)
{
    return (MR_CSharp_SF *)(dynamic_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SD *)object)
    ));
}

const MR_CSharp_SF *MR_CSharp_SD_DynamicDowncastToOrFail_MR_CSharp_SF(const MR_CSharp_SD *object)
{
    return (const MR_CSharp_SF *)std::addressof(dynamic_cast<const MR::CSharp::SF &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::SD *)(object))
    ));
}

MR_CSharp_SF *MR_CSharp_SD_MutableDynamicDowncastToOrFail_MR_CSharp_SF(MR_CSharp_SD *object)
{
    return (MR_CSharp_SF *)std::addressof(dynamic_cast<MR::CSharp::SF &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(MR::CSharp::SD *)(object))
    ));
}

MR_CSharp_SD *MR_CSharp_SD_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other)
{
    return (MR_CSharp_SD *)new MR::CSharp::SD(MR::CSharp::SD(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SD) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SD) MRBINDC_CLASSARG_END(_other, MR::CSharp::SD))
    ));
}

void MR_CSharp_SD_Destroy(const MR_CSharp_SD *_this)
{
    delete ((const MR::CSharp::SD *)_this);
}

void MR_CSharp_SD_DestroyArray(const MR_CSharp_SD *_this)
{
    delete[] ((const MR::CSharp::SD *)_this);
}

MR_CSharp_SD *MR_CSharp_SD_AssignFromAnother(MR_CSharp_SD *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SD *_other)
{
    return (MR_CSharp_SD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SD *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SD) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SD), MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SD) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SD) MRBINDC_CLASSARG_END(_other, MR::CSharp::SD))
    ));
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
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE());
}

MR_CSharp_SE *MR_CSharp_SE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SE *)(new MR::CSharp::SE[num_elems]{});
}

MR_CSharp_SE *MR_CSharp_SE_ConstructFrom(const char *s, const char *s_end)
{
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE{
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    });
}

const MR_CSharp_SE *MR_CSharp_SE_OffsetPtr(const MR_CSharp_SE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SE *)(((const MR::CSharp::SE *)ptr) + i);
}

MR_CSharp_SE *MR_CSharp_SE_OffsetMutablePtr(MR_CSharp_SE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SE *)(((MR::CSharp::SE *)ptr) + i);
}

const MR_CSharp_SF *MR_CSharp_SE_StaticDowncastTo_MR_CSharp_SF(const MR_CSharp_SE *object)
{
    return (const MR_CSharp_SF *)(static_cast<const MR::CSharp::SF *>(
        ((const MR::CSharp::SE *)object)
    ));
}

MR_CSharp_SF *MR_CSharp_SE_MutableStaticDowncastTo_MR_CSharp_SF(MR_CSharp_SE *object)
{
    return (MR_CSharp_SF *)(static_cast<MR::CSharp::SF *>(
        ((MR::CSharp::SE *)object)
    ));
}

MR_CSharp_SE *MR_CSharp_SE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other)
{
    return (MR_CSharp_SE *)new MR::CSharp::SE(MR::CSharp::SE(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SE) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SE) MRBINDC_CLASSARG_END(_other, MR::CSharp::SE))
    ));
}

void MR_CSharp_SE_Destroy(const MR_CSharp_SE *_this)
{
    delete ((const MR::CSharp::SE *)_this);
}

void MR_CSharp_SE_DestroyArray(const MR_CSharp_SE *_this)
{
    delete[] ((const MR::CSharp::SE *)_this);
}

MR_CSharp_SE *MR_CSharp_SE_AssignFromAnother(MR_CSharp_SE *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SE *_other)
{
    return (MR_CSharp_SE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SE *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SE) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SE), MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SE) MRBINDC_CLASSARG_END(_other, MR::CSharp::SE))
    ));
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
    return (MR_CSharp_SF *)new MR::CSharp::SF(MR::CSharp::SF());
}

MR_CSharp_SF *MR_CSharp_SF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SF *)(new MR::CSharp::SF[num_elems]{});
}

const MR_CSharp_SF *MR_CSharp_SF_OffsetPtr(const MR_CSharp_SF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_SF *)(((const MR::CSharp::SF *)ptr) + i);
}

MR_CSharp_SF *MR_CSharp_SF_OffsetMutablePtr(MR_CSharp_SF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_SF *)(((MR::CSharp::SF *)ptr) + i);
}

const MR_CSharp_SD *MR_CSharp_SF_UpcastTo_MR_CSharp_SD(const MR_CSharp_SF *object)
{
    return (const MR_CSharp_SD *)(static_cast<const MR::CSharp::SD *>(
        ((const MR::CSharp::SF *)object)
    ));
}

MR_CSharp_SD *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD(MR_CSharp_SF *object)
{
    return (MR_CSharp_SD *)(static_cast<MR::CSharp::SD *>(
        ((MR::CSharp::SF *)object)
    ));
}

const MR_CSharp_SE *MR_CSharp_SF_UpcastTo_MR_CSharp_SE(const MR_CSharp_SF *object)
{
    return (const MR_CSharp_SE *)(static_cast<const MR::CSharp::SE *>(
        ((const MR::CSharp::SF *)object)
    ));
}

MR_CSharp_SE *MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE(MR_CSharp_SF *object)
{
    return (MR_CSharp_SE *)(static_cast<MR::CSharp::SE *>(
        ((MR::CSharp::SF *)object)
    ));
}

MR_CSharp_SF *MR_CSharp_SF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other)
{
    return (MR_CSharp_SF *)new MR::CSharp::SF(MR::CSharp::SF(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SF) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SF) MRBINDC_CLASSARG_END(_other, MR::CSharp::SF))
    ));
}

void MR_CSharp_SF_Destroy(const MR_CSharp_SF *_this)
{
    delete ((const MR::CSharp::SF *)_this);
}

void MR_CSharp_SF_DestroyArray(const MR_CSharp_SF *_this)
{
    delete[] ((const MR::CSharp::SF *)_this);
}

MR_CSharp_SF *MR_CSharp_SF_AssignFromAnother(MR_CSharp_SF *_this, MR_C_PassBy _other_pass_by, MR_CSharp_SF *_other)
{
    return (MR_CSharp_SF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SF *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::SF) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::SF), MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::SF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::SF) MRBINDC_CLASSARG_END(_other, MR::CSharp::SF))
    ));
}

MR_C_std_shared_ptr_MR_CSharp_SE *MR_CSharp_mark_se_as_shared(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_SE *)new std::shared_ptr<MR::CSharp::SE>(::MR::CSharp::mark_se_as_shared());
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)new std::shared_ptr<MR::CSharp::SA>(::MR::CSharp::test_shptr(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(a, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(a, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(a, std::shared_ptr<MR::CSharp::SA>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(b, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(b, (std::shared_ptr<MR::CSharp::SA>), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_shptr), std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::shared_ptr<MR::CSharp::SA>) MRBINDC_CLASSARG_END(b, std::shared_ptr<MR::CSharp::SA>))
    ));
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_rref(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shptr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(std::shared_ptr<MR::CSharp::SA> *)(a))),
        (b ? std::move(*(std::shared_ptr<MR::CSharp::SA> *)(b)) : static_cast<std::shared_ptr<MR::CSharp::SA> &&>((std::shared_ptr<MR::CSharp::SA> &&)default_shptr))
    )));
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_crref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shptr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const std::shared_ptr<MR::CSharp::SA> *)(a))),
        (b ? std::move(*(const std::shared_ptr<MR::CSharp::SA> *)(b)) : static_cast<const std::shared_ptr<MR::CSharp::SA> &&>((std::shared_ptr<MR::CSharp::SA> &&)default_shptr))
    )));
}

MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_ptr(MR_C_std_shared_ptr_MR_CSharp_SA *a, MR_C_std_shared_ptr_MR_CSharp_SA *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)(::MR::CSharp::test_shptr_ptr(
        ((std::shared_ptr<MR::CSharp::SA> *)a),
        (b ? (std::shared_ptr<MR::CSharp::SA> *)(*b) : static_cast<std::shared_ptr<MR::CSharp::SA> *>(&default_shptr))
    ));
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cptr(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)(::MR::CSharp::test_shptr_cptr(
        ((const std::shared_ptr<MR::CSharp::SA> *)a),
        (b ? (const std::shared_ptr<MR::CSharp::SA> *)(*b) : static_cast<const std::shared_ptr<MR::CSharp::SA> *>(&default_shptr))
    ));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr(MR_C_PassBy a_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_PassBy b_pass_by, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)new std::shared_ptr<const MR::CSharp::SA>(::MR::CSharp::test_shcptr(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(a, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(a, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(a, std::shared_ptr<const MR::CSharp::SA>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_COPY(b, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_MOVE(b, (std::shared_ptr<const MR::CSharp::SA>), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_shcptr), std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::shared_ptr<const MR::CSharp::SA>) MRBINDC_CLASSARG_END(b, std::shared_ptr<const MR::CSharp::SA>))
    ));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_shcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_rref(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shcptr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(std::shared_ptr<const MR::CSharp::SA> *)(a))),
        (b ? std::move(*(std::shared_ptr<const MR::CSharp::SA> *)(b)) : static_cast<std::shared_ptr<const MR::CSharp::SA> &&>((std::shared_ptr<const MR::CSharp::SA> &&)default_shcptr))
    )));
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_crref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_shcptr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const std::shared_ptr<const MR::CSharp::SA> *)(a))),
        (b ? std::move(*(const std::shared_ptr<const MR::CSharp::SA> *)(b)) : static_cast<const std::shared_ptr<const MR::CSharp::SA> &&>((std::shared_ptr<const MR::CSharp::SA> &&)default_shcptr))
    )));
}

MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_ptr(MR_C_std_shared_ptr_const_MR_CSharp_SA *a, MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)(::MR::CSharp::test_shcptr_ptr(
        ((std::shared_ptr<const MR::CSharp::SA> *)a),
        (b ? (std::shared_ptr<const MR::CSharp::SA> *)(*b) : static_cast<std::shared_ptr<const MR::CSharp::SA> *>(&default_shcptr))
    ));
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cptr(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)(::MR::CSharp::test_shcptr_cptr(
        ((const std::shared_ptr<const MR::CSharp::SA> *)a),
        (b ? (const std::shared_ptr<const MR::CSharp::SA> *)(*b) : static_cast<const std::shared_ptr<const MR::CSharp::SA> *>(&default_shcptr))
    ));
}

MR_C_std_string *MR_CSharp_test_string(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)new std::string(::MR::CSharp::test_string(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string(default_string))
    ));
}

MR_C_std_string *MR_CSharp_test_string_ref(MR_C_std_string *a, MR_C_std_string *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)std::addressof(::MR::CSharp::test_string_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string *)(a)),
        (b ? *(std::string *)(b) : static_cast<std::string &>(default_string))
    ));
}

const MR_C_std_string *MR_CSharp_test_string_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)std::addressof(::MR::CSharp::test_string_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string(default_string))
    ));
}

MR_C_std_string *MR_CSharp_test_string_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_string_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string((std::string &&)default_string))
    )));
}

const MR_C_std_string *MR_CSharp_test_string_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_string_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string((std::string &&)default_string))
    )));
}

MR_C_std_string *MR_CSharp_test_string_ptr(MR_C_std_string *a, MR_C_std_string *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string *)(::MR::CSharp::test_string_ptr(
        ((std::string *)a),
        (b ? (std::string *)(*b) : static_cast<std::string *>(&default_string))
    ));
}

const MR_C_std_string *MR_CSharp_test_string_cptr(const MR_C_std_string *a, const MR_C_std_string *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)(::MR::CSharp::test_string_cptr(
        ((const std::string *)a),
        (b ? (const std::string *)(*b) : static_cast<const std::string *>(&default_string))
    ));
}

MR_C_std_string_view *MR_CSharp_test_stringview(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)new std::string_view(::MR::CSharp::test_stringview(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view(default_stringview))
    ));
}

MR_C_std_string_view *MR_CSharp_test_stringview_ref(MR_C_std_string_view *a, MR_C_std_string_view *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)std::addressof(::MR::CSharp::test_stringview_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string_view *)(a)),
        (b ? *(std::string_view *)(b) : static_cast<std::string_view &>(default_stringview))
    ));
}

const MR_C_std_string_view *MR_CSharp_test_stringview_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)std::addressof(::MR::CSharp::test_stringview_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view(default_stringview))
    ));
}

MR_C_std_string_view *MR_CSharp_test_stringview_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_stringview_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view((std::string_view &&)default_stringview))
    )));
}

const MR_C_std_string_view *MR_CSharp_test_stringview_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_stringview_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view((std::string_view &&)default_stringview))
    )));
}

MR_C_std_string_view *MR_CSharp_test_stringview_ptr(MR_C_std_string_view *a, MR_C_std_string_view *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_string_view *)(::MR::CSharp::test_stringview_ptr(
        ((std::string_view *)a),
        (b ? (std::string_view *)(*b) : static_cast<std::string_view *>(&default_stringview))
    ));
}

const MR_C_std_string_view *MR_CSharp_test_stringview_cptr(const MR_C_std_string_view *a, const MR_C_std_string_view *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)(::MR::CSharp::test_stringview_cptr(
        ((const std::string_view *)a),
        (b ? (const std::string_view *)(*b) : static_cast<const std::string_view *>(&default_stringview))
    ));
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (MR_C_std_filesystem_path *)new std::filesystem::path(::MR::CSharp::test_fspath(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path(default_fspath))
    ));
    ) // MRBINDC_IGNORE_DEPRECATION
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_ref(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_filesystem_path *)std::addressof(::MR::CSharp::test_fspath_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::filesystem::path *)(a)),
        (b ? *(std::filesystem::path *)(b) : static_cast<std::filesystem::path &>(default_fspath))
    ));
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (const MR_C_std_filesystem_path *)std::addressof(::MR::CSharp::test_fspath_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path(default_fspath))
    ));
    ) // MRBINDC_IGNORE_DEPRECATION
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_rref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (MR_C_std_filesystem_path *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_fspath_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path((std::filesystem::path &&)default_fspath))
    )));
    ) // MRBINDC_IGNORE_DEPRECATION
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_crref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (const MR_C_std_filesystem_path *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_fspath_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path((std::filesystem::path &&)default_fspath))
    )));
    ) // MRBINDC_IGNORE_DEPRECATION
}

MR_C_std_filesystem_path *MR_CSharp_test_fspath_ptr(MR_C_std_filesystem_path *a, MR_C_std_filesystem_path *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_filesystem_path *)(::MR::CSharp::test_fspath_ptr(
        ((std::filesystem::path *)a),
        (b ? (std::filesystem::path *)(*b) : static_cast<std::filesystem::path *>(&default_fspath))
    ));
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cptr(const MR_C_std_filesystem_path *a, const MR_C_std_filesystem_path *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_filesystem_path *)(::MR::CSharp::test_fspath_cptr(
        ((const std::filesystem::path *)a),
        (b ? (const std::filesystem::path *)(*b) : static_cast<const std::filesystem::path *>(&default_fspath))
    ));
}

MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstruct(void)
{
    return (MR_CSharp_Outer *)new MR::CSharp::Outer(MR::CSharp::Outer());
}

MR_CSharp_Outer *MR_CSharp_Outer_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_Outer *)(new MR::CSharp::Outer[num_elems]{});
}

const MR_CSharp_Outer *MR_CSharp_Outer_OffsetPtr(const MR_CSharp_Outer *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_Outer *)(((const MR::CSharp::Outer *)ptr) + i);
}

MR_CSharp_Outer *MR_CSharp_Outer_OffsetMutablePtr(MR_CSharp_Outer *ptr, ptrdiff_t i)
{
    return (MR_CSharp_Outer *)(((MR::CSharp::Outer *)ptr) + i);
}

MR_CSharp_Outer *MR_CSharp_Outer_ConstructFromAnother(const MR_CSharp_Outer *_other)
{
    return (MR_CSharp_Outer *)new MR::CSharp::Outer(MR::CSharp::Outer(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer(*(MR::CSharp::Outer *)_other))
    ));
}

void MR_CSharp_Outer_Destroy(const MR_CSharp_Outer *_this)
{
    delete ((const MR::CSharp::Outer *)_this);
}

void MR_CSharp_Outer_DestroyArray(const MR_CSharp_Outer *_this)
{
    delete[] ((const MR::CSharp::Outer *)_this);
}

MR_CSharp_Outer *MR_CSharp_Outer_AssignFromAnother(MR_CSharp_Outer *_this, const MR_CSharp_Outer *_other)
{
    return (MR_CSharp_Outer *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer(*(MR::CSharp::Outer *)_other))
    ));
}

void MR_CSharp_Outer_foo(MR_CSharp_Outer *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer *)(_this)).foo();
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstruct(void)
{
    return (MR_CSharp_Outer_Inner *)new MR::CSharp::Outer::Inner(MR::CSharp::Outer::Inner());
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_Outer_Inner *)(new MR::CSharp::Outer::Inner[num_elems]{});
}

const MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetPtr(const MR_CSharp_Outer_Inner *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_Outer_Inner *)(((const MR::CSharp::Outer::Inner *)ptr) + i);
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_OffsetMutablePtr(MR_CSharp_Outer_Inner *ptr, ptrdiff_t i)
{
    return (MR_CSharp_Outer_Inner *)(((MR::CSharp::Outer::Inner *)ptr) + i);
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_ConstructFromAnother(const MR_CSharp_Outer_Inner *_other)
{
    return (MR_CSharp_Outer_Inner *)new MR::CSharp::Outer::Inner(MR::CSharp::Outer::Inner(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer::Inner(*(MR::CSharp::Outer::Inner *)_other))
    ));
}

void MR_CSharp_Outer_Inner_Destroy(const MR_CSharp_Outer_Inner *_this)
{
    delete ((const MR::CSharp::Outer::Inner *)_this);
}

void MR_CSharp_Outer_Inner_DestroyArray(const MR_CSharp_Outer_Inner *_this)
{
    delete[] ((const MR::CSharp::Outer::Inner *)_this);
}

MR_CSharp_Outer_Inner *MR_CSharp_Outer_Inner_AssignFromAnother(MR_CSharp_Outer_Inner *_this, const MR_CSharp_Outer_Inner *_other)
{
    return (MR_CSharp_Outer_Inner *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer::Inner(*(MR::CSharp::Outer::Inner *)_other))
    ));
}

void MR_CSharp_Outer_Inner_bar(MR_CSharp_Outer_Inner *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).bar();
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
    return (MR_CSharp_TestFields *)new MR::CSharp::TestFields(MR::CSharp::TestFields(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestFields), MR::CSharp::TestFields) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::TestFields), MR::CSharp::TestFields) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestFields) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestFields) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestFields))
    ));
}

MR_CSharp_TestFields *MR_CSharp_TestFields_ConstructFrom(int i, int const_i, int *i_ref, const int *const_i_ref, const char *s, const char *s_end, const char *const_s, const char *const_s_end, MR_C_std_string *s_ref, const char *const_s_ref, const char *const_s_ref_end)
{
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
}

const MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetPtr(const MR_CSharp_TestFields *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TestFields *)(((const MR::CSharp::TestFields *)ptr) + i);
}

MR_CSharp_TestFields *MR_CSharp_TestFields_OffsetMutablePtr(MR_CSharp_TestFields *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TestFields *)(((MR::CSharp::TestFields *)ptr) + i);
}

void MR_CSharp_TestFields_Destroy(const MR_CSharp_TestFields *_this)
{
    delete ((const MR::CSharp::TestFields *)_this);
}

void MR_CSharp_TestFields_DestroyArray(const MR_CSharp_TestFields *_this)
{
    delete[] ((const MR::CSharp::TestFields *)_this);
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstruct(void)
{
    return (MR_CSharp_TestConstness *)new MR::CSharp::TestConstness(MR::CSharp::TestConstness());
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_TestConstness *)(new MR::CSharp::TestConstness[num_elems]{});
}

const MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetPtr(const MR_CSharp_TestConstness *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TestConstness *)(((const MR::CSharp::TestConstness *)ptr) + i);
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_OffsetMutablePtr(MR_CSharp_TestConstness *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TestConstness *)(((MR::CSharp::TestConstness *)ptr) + i);
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_ConstructFromAnother(const MR_CSharp_TestConstness *_other)
{
    return (MR_CSharp_TestConstness *)new MR::CSharp::TestConstness(MR::CSharp::TestConstness(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestConstness(*(MR::CSharp::TestConstness *)_other))
    ));
}

void MR_CSharp_TestConstness_Destroy(const MR_CSharp_TestConstness *_this)
{
    delete ((const MR::CSharp::TestConstness *)_this);
}

void MR_CSharp_TestConstness_DestroyArray(const MR_CSharp_TestConstness *_this)
{
    delete[] ((const MR::CSharp::TestConstness *)_this);
}

MR_CSharp_TestConstness *MR_CSharp_TestConstness_AssignFromAnother(MR_CSharp_TestConstness *_this, const MR_CSharp_TestConstness *_other)
{
    return (MR_CSharp_TestConstness *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestConstness *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestConstness(*(MR::CSharp::TestConstness *)_other))
    ));
}

void MR_CSharp_TestConstness_foo(MR_CSharp_TestConstness *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestConstness *)(_this)).foo();
}

void MR_CSharp_TestConstness_foo_const(const MR_CSharp_TestConstness *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::TestConstness *)(_this)).foo();
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(MR::CSharp::IncrDecrA());
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrA *)(new MR::CSharp::IncrDecrA[num_elems]{});
}

const MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetPtr(const MR_CSharp_IncrDecrA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrA *)(((const MR::CSharp::IncrDecrA *)ptr) + i);
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_OffsetMutablePtr(MR_CSharp_IncrDecrA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrA *)(((MR::CSharp::IncrDecrA *)ptr) + i);
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_ConstructFromAnother(const MR_CSharp_IncrDecrA *_other)
{
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(MR::CSharp::IncrDecrA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrA(*(MR::CSharp::IncrDecrA *)_other))
    ));
}

void MR_CSharp_IncrDecrA_Destroy(const MR_CSharp_IncrDecrA *_this)
{
    delete ((const MR::CSharp::IncrDecrA *)_this);
}

void MR_CSharp_IncrDecrA_DestroyArray(const MR_CSharp_IncrDecrA *_this)
{
    delete[] ((const MR::CSharp::IncrDecrA *)_this);
}

MR_CSharp_IncrDecrA *MR_CSharp_IncrDecrA_AssignFromAnother(MR_CSharp_IncrDecrA *_this, const MR_CSharp_IncrDecrA *_other)
{
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrA(*(MR::CSharp::IncrDecrA *)_other))
    ));
}

MR_CSharp_IncrDecrA *MR_C_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator++());
}

MR_CSharp_IncrDecrA *MR_C_post_incr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator++(
        0
    ));
}

MR_CSharp_IncrDecrA *MR_C_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    return (MR_CSharp_IncrDecrA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator--());
}

MR_CSharp_IncrDecrA *MR_C_post_decr_MR_CSharp_IncrDecrA(MR_CSharp_IncrDecrA *_this)
{
    return (MR_CSharp_IncrDecrA *)new MR::CSharp::IncrDecrA(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrA *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(MR::CSharp::IncrDecrB());
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrB *)(new MR::CSharp::IncrDecrB[num_elems]{});
}

const MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetPtr(const MR_CSharp_IncrDecrB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrB *)(((const MR::CSharp::IncrDecrB *)ptr) + i);
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_OffsetMutablePtr(MR_CSharp_IncrDecrB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrB *)(((MR::CSharp::IncrDecrB *)ptr) + i);
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_ConstructFromAnother(const MR_CSharp_IncrDecrB *_other)
{
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(MR::CSharp::IncrDecrB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrB(*(MR::CSharp::IncrDecrB *)_other))
    ));
}

void MR_CSharp_IncrDecrB_Destroy(const MR_CSharp_IncrDecrB *_this)
{
    delete ((const MR::CSharp::IncrDecrB *)_this);
}

void MR_CSharp_IncrDecrB_DestroyArray(const MR_CSharp_IncrDecrB *_this)
{
    delete[] ((const MR::CSharp::IncrDecrB *)_this);
}

MR_CSharp_IncrDecrB *MR_CSharp_IncrDecrB_AssignFromAnother(MR_CSharp_IncrDecrB *_this, const MR_CSharp_IncrDecrB *_other)
{
    return (MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrB(*(MR::CSharp::IncrDecrB *)_other))
    ));
}

const MR_CSharp_IncrDecrB *MR_C_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    return (const MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator++());
}

MR_CSharp_IncrDecrB *MR_C_post_incr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator++(
        0
    ));
}

const MR_CSharp_IncrDecrB *MR_C_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    return (const MR_CSharp_IncrDecrB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator--());
}

MR_CSharp_IncrDecrB *MR_C_post_decr_MR_CSharp_IncrDecrB(const MR_CSharp_IncrDecrB *_this)
{
    return (MR_CSharp_IncrDecrB *)new MR::CSharp::IncrDecrB(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrB *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(MR::CSharp::IncrDecrC());
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrC *)(new MR::CSharp::IncrDecrC[num_elems]{});
}

const MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetPtr(const MR_CSharp_IncrDecrC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrC *)(((const MR::CSharp::IncrDecrC *)ptr) + i);
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_OffsetMutablePtr(MR_CSharp_IncrDecrC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrC *)(((MR::CSharp::IncrDecrC *)ptr) + i);
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_ConstructFromAnother(const MR_CSharp_IncrDecrC *_other)
{
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(MR::CSharp::IncrDecrC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrC(*(MR::CSharp::IncrDecrC *)_other))
    ));
}

void MR_CSharp_IncrDecrC_Destroy(const MR_CSharp_IncrDecrC *_this)
{
    delete ((const MR::CSharp::IncrDecrC *)_this);
}

void MR_CSharp_IncrDecrC_DestroyArray(const MR_CSharp_IncrDecrC *_this)
{
    delete[] ((const MR::CSharp::IncrDecrC *)_this);
}

MR_CSharp_IncrDecrC *MR_CSharp_IncrDecrC_AssignFromAnother(MR_CSharp_IncrDecrC *_this, const MR_CSharp_IncrDecrC *_other)
{
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrC(*(MR::CSharp::IncrDecrC *)_other)))
    ));
}

MR_CSharp_IncrDecrC *MR_C_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator++());
}

MR_CSharp_IncrDecrC *MR_C_post_incr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator++(
        0
    ));
}

MR_CSharp_IncrDecrC *MR_C_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    return (MR_CSharp_IncrDecrC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator--());
}

MR_CSharp_IncrDecrC *MR_C_post_decr_MR_CSharp_IncrDecrC(MR_CSharp_IncrDecrC *_this)
{
    return (MR_CSharp_IncrDecrC *)new MR::CSharp::IncrDecrC(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrC *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(MR::CSharp::IncrDecrD());
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrD *)(new MR::CSharp::IncrDecrD[num_elems]{});
}

const MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetPtr(const MR_CSharp_IncrDecrD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrD *)(((const MR::CSharp::IncrDecrD *)ptr) + i);
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_OffsetMutablePtr(MR_CSharp_IncrDecrD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrD *)(((MR::CSharp::IncrDecrD *)ptr) + i);
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_ConstructFromAnother(const MR_CSharp_IncrDecrD *_other)
{
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(MR::CSharp::IncrDecrD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrD(*(MR::CSharp::IncrDecrD *)_other))
    ));
}

void MR_CSharp_IncrDecrD_Destroy(const MR_CSharp_IncrDecrD *_this)
{
    delete ((const MR::CSharp::IncrDecrD *)_this);
}

void MR_CSharp_IncrDecrD_DestroyArray(const MR_CSharp_IncrDecrD *_this)
{
    delete[] ((const MR::CSharp::IncrDecrD *)_this);
}

MR_CSharp_IncrDecrD *MR_CSharp_IncrDecrD_AssignFromAnother(MR_CSharp_IncrDecrD *_this, const MR_CSharp_IncrDecrD *_other)
{
    return (MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrD *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrD(*(MR::CSharp::IncrDecrD *)_other)))
    ));
}

const MR_CSharp_IncrDecrD *MR_C_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    return (const MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator++());
}

MR_CSharp_IncrDecrD *MR_C_post_incr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator++(
        0
    ));
}

const MR_CSharp_IncrDecrD *MR_C_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    return (const MR_CSharp_IncrDecrD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator--());
}

MR_CSharp_IncrDecrD *MR_C_post_decr_MR_CSharp_IncrDecrD(const MR_CSharp_IncrDecrD *_this)
{
    return (MR_CSharp_IncrDecrD *)new MR::CSharp::IncrDecrD(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrD *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(MR::CSharp::IncrDecrE());
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrE *)(new MR::CSharp::IncrDecrE[num_elems]{});
}

const MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetPtr(const MR_CSharp_IncrDecrE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrE *)(((const MR::CSharp::IncrDecrE *)ptr) + i);
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_OffsetMutablePtr(MR_CSharp_IncrDecrE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrE *)(((MR::CSharp::IncrDecrE *)ptr) + i);
}

MR_CSharp_IncrDecrE *MR_CSharp_IncrDecrE_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrE *_other)
{
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(MR::CSharp::IncrDecrE(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IncrDecrE), MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IncrDecrE) MRBINDC_CLASSARG_END(_other, MR::CSharp::IncrDecrE))
    ));
}

void MR_CSharp_IncrDecrE_Destroy(const MR_CSharp_IncrDecrE *_this)
{
    delete ((const MR::CSharp::IncrDecrE *)_this);
}

void MR_CSharp_IncrDecrE_DestroyArray(const MR_CSharp_IncrDecrE *_this)
{
    delete[] ((const MR::CSharp::IncrDecrE *)_this);
}

MR_CSharp_IncrDecrE *MR_C_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    return (MR_CSharp_IncrDecrE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator++());
}

MR_CSharp_IncrDecrE *MR_C_post_incr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator++(
        0
    ));
}

MR_CSharp_IncrDecrE *MR_C_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    return (MR_CSharp_IncrDecrE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator--());
}

MR_CSharp_IncrDecrE *MR_C_post_decr_MR_CSharp_IncrDecrE(MR_CSharp_IncrDecrE *_this)
{
    return (MR_CSharp_IncrDecrE *)new MR::CSharp::IncrDecrE(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrE *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(MR::CSharp::IncrDecrF());
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrF *)(new MR::CSharp::IncrDecrF[num_elems]{});
}

const MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetPtr(const MR_CSharp_IncrDecrF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrF *)(((const MR::CSharp::IncrDecrF *)ptr) + i);
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_OffsetMutablePtr(MR_CSharp_IncrDecrF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrF *)(((MR::CSharp::IncrDecrF *)ptr) + i);
}

MR_CSharp_IncrDecrF *MR_CSharp_IncrDecrF_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IncrDecrF *_other)
{
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(MR::CSharp::IncrDecrF(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IncrDecrF), MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IncrDecrF) MRBINDC_CLASSARG_END(_other, MR::CSharp::IncrDecrF))
    ));
}

void MR_CSharp_IncrDecrF_Destroy(const MR_CSharp_IncrDecrF *_this)
{
    delete ((const MR::CSharp::IncrDecrF *)_this);
}

void MR_CSharp_IncrDecrF_DestroyArray(const MR_CSharp_IncrDecrF *_this)
{
    delete[] ((const MR::CSharp::IncrDecrF *)_this);
}

const MR_CSharp_IncrDecrF *MR_C_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    return (const MR_CSharp_IncrDecrF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator++());
}

MR_CSharp_IncrDecrF *MR_C_post_incr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator++(
        0
    ));
}

const MR_CSharp_IncrDecrF *MR_C_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    return (const MR_CSharp_IncrDecrF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator--());
}

MR_CSharp_IncrDecrF *MR_C_post_decr_MR_CSharp_IncrDecrF(const MR_CSharp_IncrDecrF *_this)
{
    return (MR_CSharp_IncrDecrF *)new MR::CSharp::IncrDecrF(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrF *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(MR::CSharp::IncrDecrG());
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrG *)(new MR::CSharp::IncrDecrG[num_elems]{});
}

const MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetPtr(const MR_CSharp_IncrDecrG *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrG *)(((const MR::CSharp::IncrDecrG *)ptr) + i);
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_OffsetMutablePtr(MR_CSharp_IncrDecrG *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrG *)(((MR::CSharp::IncrDecrG *)ptr) + i);
}

MR_CSharp_IncrDecrG *MR_CSharp_IncrDecrG_ConstructFromAnother(const MR_CSharp_IncrDecrG *_other)
{
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(MR::CSharp::IncrDecrG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrG(std::move(*(MR::CSharp::IncrDecrG *)_other)))
    ));
}

void MR_CSharp_IncrDecrG_Destroy(const MR_CSharp_IncrDecrG *_this)
{
    delete ((const MR::CSharp::IncrDecrG *)_this);
}

void MR_CSharp_IncrDecrG_DestroyArray(const MR_CSharp_IncrDecrG *_this)
{
    delete[] ((const MR::CSharp::IncrDecrG *)_this);
}

MR_CSharp_IncrDecrG *MR_C_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    return (MR_CSharp_IncrDecrG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator++());
}

MR_CSharp_IncrDecrG *MR_C_post_incr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator++(
        0
    ));
}

MR_CSharp_IncrDecrG *MR_C_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    return (MR_CSharp_IncrDecrG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator--());
}

MR_CSharp_IncrDecrG *MR_C_post_decr_MR_CSharp_IncrDecrG(MR_CSharp_IncrDecrG *_this)
{
    return (MR_CSharp_IncrDecrG *)new MR::CSharp::IncrDecrG(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrG *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(MR::CSharp::IncrDecrH());
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrH *)(new MR::CSharp::IncrDecrH[num_elems]{});
}

const MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetPtr(const MR_CSharp_IncrDecrH *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrH *)(((const MR::CSharp::IncrDecrH *)ptr) + i);
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_OffsetMutablePtr(MR_CSharp_IncrDecrH *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrH *)(((MR::CSharp::IncrDecrH *)ptr) + i);
}

MR_CSharp_IncrDecrH *MR_CSharp_IncrDecrH_ConstructFromAnother(const MR_CSharp_IncrDecrH *_other)
{
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(MR::CSharp::IncrDecrH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrH(std::move(*(MR::CSharp::IncrDecrH *)_other)))
    ));
}

void MR_CSharp_IncrDecrH_Destroy(const MR_CSharp_IncrDecrH *_this)
{
    delete ((const MR::CSharp::IncrDecrH *)_this);
}

void MR_CSharp_IncrDecrH_DestroyArray(const MR_CSharp_IncrDecrH *_this)
{
    delete[] ((const MR::CSharp::IncrDecrH *)_this);
}

const MR_CSharp_IncrDecrH *MR_C_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    return (const MR_CSharp_IncrDecrH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator++());
}

MR_CSharp_IncrDecrH *MR_C_post_incr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator++(
        0
    ));
}

const MR_CSharp_IncrDecrH *MR_C_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    return (const MR_CSharp_IncrDecrH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator--());
}

MR_CSharp_IncrDecrH *MR_C_post_decr_MR_CSharp_IncrDecrH(const MR_CSharp_IncrDecrH *_this)
{
    return (MR_CSharp_IncrDecrH *)new MR::CSharp::IncrDecrH(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IncrDecrH *)(_this)).operator--(
        0
    ));
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstruct(void)
{
    return (MR_CSharp_IncrDecrI *)new MR::CSharp::IncrDecrI(MR::CSharp::IncrDecrI());
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IncrDecrI *)(new MR::CSharp::IncrDecrI[num_elems]{});
}

const MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetPtr(const MR_CSharp_IncrDecrI *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IncrDecrI *)(((const MR::CSharp::IncrDecrI *)ptr) + i);
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_OffsetMutablePtr(MR_CSharp_IncrDecrI *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IncrDecrI *)(((MR::CSharp::IncrDecrI *)ptr) + i);
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_ConstructFromAnother(const MR_CSharp_IncrDecrI *_other)
{
    return (MR_CSharp_IncrDecrI *)new MR::CSharp::IncrDecrI(MR::CSharp::IncrDecrI(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_other))
    ));
}

void MR_CSharp_IncrDecrI_Destroy(const MR_CSharp_IncrDecrI *_this)
{
    delete ((const MR::CSharp::IncrDecrI *)_this);
}

void MR_CSharp_IncrDecrI_DestroyArray(const MR_CSharp_IncrDecrI *_this)
{
    delete[] ((const MR::CSharp::IncrDecrI *)_this);
}

MR_CSharp_IncrDecrI *MR_CSharp_IncrDecrI_AssignFromAnother(MR_CSharp_IncrDecrI *_this, const MR_CSharp_IncrDecrI *_other)
{
    return (MR_CSharp_IncrDecrI *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IncrDecrI *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_other))
    ));
}

int MR_C_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    return operator++(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1))
    );
}

int MR_C_post_incr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    return operator++(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1)),
        0
    );
}

int MR_C_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    return operator--(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1))
    );
}

int MR_C_post_decr_MR_CSharp_IncrDecrI(const MR_CSharp_IncrDecrI *_1)
{
    return operator--(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::IncrDecrI(*(MR::CSharp::IncrDecrI *)_1)),
        0
    );
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstruct(void)
{
    return (MR_CSharp_EqualityA *)new MR::CSharp::EqualityA(MR::CSharp::EqualityA());
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_EqualityA *)(new MR::CSharp::EqualityA[num_elems]{});
}

const MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetPtr(const MR_CSharp_EqualityA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_EqualityA *)(((const MR::CSharp::EqualityA *)ptr) + i);
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_OffsetMutablePtr(MR_CSharp_EqualityA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_EqualityA *)(((MR::CSharp::EqualityA *)ptr) + i);
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_ConstructFromAnother(const MR_CSharp_EqualityA *_other)
{
    return (MR_CSharp_EqualityA *)new MR::CSharp::EqualityA(MR::CSharp::EqualityA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityA(*(MR::CSharp::EqualityA *)_other))
    ));
}

void MR_CSharp_EqualityA_Destroy(const MR_CSharp_EqualityA *_this)
{
    delete ((const MR::CSharp::EqualityA *)_this);
}

void MR_CSharp_EqualityA_DestroyArray(const MR_CSharp_EqualityA *_this)
{
    delete[] ((const MR::CSharp::EqualityA *)_this);
}

MR_CSharp_EqualityA *MR_CSharp_EqualityA_AssignFromAnother(MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_other)
{
    return (MR_CSharp_EqualityA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityA(*(MR::CSharp::EqualityA *)_other))
    ));
}

bool MR_C_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator==(
        _1
    );
}

bool MR_C_not_equal_MR_CSharp_EqualityA_int(MR_CSharp_EqualityA *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityA *)(_this)).operator!=(
        _1
    );
}

bool MR_C_equal_MR_CSharp_EqualityA(const MR_CSharp_EqualityA *_this, const MR_CSharp_EqualityA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityA *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityA *)(_1))
    );
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstruct(void)
{
    return (MR_CSharp_EqualityB *)new MR::CSharp::EqualityB(MR::CSharp::EqualityB());
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_EqualityB *)(new MR::CSharp::EqualityB[num_elems]{});
}

const MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetPtr(const MR_CSharp_EqualityB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_EqualityB *)(((const MR::CSharp::EqualityB *)ptr) + i);
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_OffsetMutablePtr(MR_CSharp_EqualityB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_EqualityB *)(((MR::CSharp::EqualityB *)ptr) + i);
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_ConstructFromAnother(const MR_CSharp_EqualityB *_other)
{
    return (MR_CSharp_EqualityB *)new MR::CSharp::EqualityB(MR::CSharp::EqualityB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityB(*(MR::CSharp::EqualityB *)_other))
    ));
}

void MR_CSharp_EqualityB_Destroy(const MR_CSharp_EqualityB *_this)
{
    delete ((const MR::CSharp::EqualityB *)_this);
}

void MR_CSharp_EqualityB_DestroyArray(const MR_CSharp_EqualityB *_this)
{
    delete[] ((const MR::CSharp::EqualityB *)_this);
}

MR_CSharp_EqualityB *MR_CSharp_EqualityB_AssignFromAnother(MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_other)
{
    return (MR_CSharp_EqualityB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityB(*(MR::CSharp::EqualityB *)_other))
    ));
}

int MR_C_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator==(
        _1
    );
}

int MR_C_not_equal_MR_CSharp_EqualityB_int(MR_CSharp_EqualityB *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityB *)(_this)).operator!=(
        _1
    );
}

int MR_C_equal_MR_CSharp_EqualityB(const MR_CSharp_EqualityB *_this, const MR_CSharp_EqualityB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityB *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityB *)(_1))
    );
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstruct(void)
{
    return (MR_CSharp_EqualityC *)new MR::CSharp::EqualityC(MR::CSharp::EqualityC());
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_EqualityC *)(new MR::CSharp::EqualityC[num_elems]{});
}

const MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetPtr(const MR_CSharp_EqualityC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_EqualityC *)(((const MR::CSharp::EqualityC *)ptr) + i);
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_OffsetMutablePtr(MR_CSharp_EqualityC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_EqualityC *)(((MR::CSharp::EqualityC *)ptr) + i);
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_ConstructFromAnother(const MR_CSharp_EqualityC *_other)
{
    return (MR_CSharp_EqualityC *)new MR::CSharp::EqualityC(MR::CSharp::EqualityC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityC(*(MR::CSharp::EqualityC *)_other))
    ));
}

void MR_CSharp_EqualityC_Destroy(const MR_CSharp_EqualityC *_this)
{
    delete ((const MR::CSharp::EqualityC *)_this);
}

void MR_CSharp_EqualityC_DestroyArray(const MR_CSharp_EqualityC *_this)
{
    delete[] ((const MR::CSharp::EqualityC *)_this);
}

MR_CSharp_EqualityC *MR_CSharp_EqualityC_AssignFromAnother(MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_other)
{
    return (MR_CSharp_EqualityC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityC(*(MR::CSharp::EqualityC *)_other))
    ));
}

void MR_C_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator==(
        _1
    );
}

void MR_C_not_equal_MR_CSharp_EqualityC_int(MR_CSharp_EqualityC *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityC *)(_this)).operator!=(
        _1
    );
}

void MR_C_equal_MR_CSharp_EqualityC(const MR_CSharp_EqualityC *_this, const MR_CSharp_EqualityC *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::EqualityC *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::EqualityC *)(_1))
    );
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstruct(void)
{
    return (MR_CSharp_EqualityD *)new MR::CSharp::EqualityD(MR::CSharp::EqualityD());
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_EqualityD *)(new MR::CSharp::EqualityD[num_elems]{});
}

const MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetPtr(const MR_CSharp_EqualityD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_EqualityD *)(((const MR::CSharp::EqualityD *)ptr) + i);
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_OffsetMutablePtr(MR_CSharp_EqualityD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_EqualityD *)(((MR::CSharp::EqualityD *)ptr) + i);
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_ConstructFromAnother(const MR_CSharp_EqualityD *_other)
{
    return (MR_CSharp_EqualityD *)new MR::CSharp::EqualityD(MR::CSharp::EqualityD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityD(*(MR::CSharp::EqualityD *)_other))
    ));
}

void MR_CSharp_EqualityD_Destroy(const MR_CSharp_EqualityD *_this)
{
    delete ((const MR::CSharp::EqualityD *)_this);
}

void MR_CSharp_EqualityD_DestroyArray(const MR_CSharp_EqualityD *_this)
{
    delete[] ((const MR::CSharp::EqualityD *)_this);
}

MR_CSharp_EqualityD *MR_CSharp_EqualityD_AssignFromAnother(MR_CSharp_EqualityD *_this, const MR_CSharp_EqualityD *_other)
{
    return (MR_CSharp_EqualityD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityD(*(MR::CSharp::EqualityD *)_other))
    ));
}

bool MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(MR_CSharp_EqualityD *_this, const int *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityD *)(_this)).operator==(
        _1
    );
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstruct(void)
{
    return (MR_CSharp_EqualityE *)new MR::CSharp::EqualityE(MR::CSharp::EqualityE());
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_EqualityE *)(new MR::CSharp::EqualityE[num_elems]{});
}

const MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetPtr(const MR_CSharp_EqualityE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_EqualityE *)(((const MR::CSharp::EqualityE *)ptr) + i);
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_OffsetMutablePtr(MR_CSharp_EqualityE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_EqualityE *)(((MR::CSharp::EqualityE *)ptr) + i);
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_ConstructFromAnother(const MR_CSharp_EqualityE *_other)
{
    return (MR_CSharp_EqualityE *)new MR::CSharp::EqualityE(MR::CSharp::EqualityE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityE(*(MR::CSharp::EqualityE *)_other))
    ));
}

void MR_CSharp_EqualityE_Destroy(const MR_CSharp_EqualityE *_this)
{
    delete ((const MR::CSharp::EqualityE *)_this);
}

void MR_CSharp_EqualityE_DestroyArray(const MR_CSharp_EqualityE *_this)
{
    delete[] ((const MR::CSharp::EqualityE *)_this);
}

MR_CSharp_EqualityE *MR_CSharp_EqualityE_AssignFromAnother(MR_CSharp_EqualityE *_this, const MR_CSharp_EqualityE *_other)
{
    return (MR_CSharp_EqualityE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::EqualityE(*(MR::CSharp::EqualityE *)_other))
    ));
}

bool MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(MR_CSharp_EqualityE *_this, MR_CSharp_EqualityD *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::EqualityE *)(_this)).operator==(
        ((MR::CSharp::EqualityD *)_1)
    );
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalA *)new MR::CSharp::RelationalA(MR::CSharp::RelationalA());
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalA *)(new MR::CSharp::RelationalA[num_elems]{});
}

const MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetPtr(const MR_CSharp_RelationalA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalA *)(((const MR::CSharp::RelationalA *)ptr) + i);
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_OffsetMutablePtr(MR_CSharp_RelationalA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalA *)(((MR::CSharp::RelationalA *)ptr) + i);
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_ConstructFromAnother(const MR_CSharp_RelationalA *_other)
{
    return (MR_CSharp_RelationalA *)new MR::CSharp::RelationalA(MR::CSharp::RelationalA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalA(*(MR::CSharp::RelationalA *)_other))
    ));
}

void MR_CSharp_RelationalA_Destroy(const MR_CSharp_RelationalA *_this)
{
    delete ((const MR::CSharp::RelationalA *)_this);
}

void MR_CSharp_RelationalA_DestroyArray(const MR_CSharp_RelationalA *_this)
{
    delete[] ((const MR::CSharp::RelationalA *)_this);
}

MR_CSharp_RelationalA *MR_CSharp_RelationalA_AssignFromAnother(MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_other)
{
    return (MR_CSharp_RelationalA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalA(*(MR::CSharp::RelationalA *)_other))
    ));
}

bool MR_C_less_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
}

bool MR_C_greater_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
}

bool MR_C_less_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
}

bool MR_C_greater_equal_MR_CSharp_RelationalA(const MR_CSharp_RelationalA *_this, const MR_CSharp_RelationalA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalA *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::RelationalA *)(_1))
    );
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalB *)new MR::CSharp::RelationalB(MR::CSharp::RelationalB());
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalB *)(new MR::CSharp::RelationalB[num_elems]{});
}

const MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetPtr(const MR_CSharp_RelationalB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalB *)(((const MR::CSharp::RelationalB *)ptr) + i);
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_OffsetMutablePtr(MR_CSharp_RelationalB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalB *)(((MR::CSharp::RelationalB *)ptr) + i);
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_ConstructFromAnother(const MR_CSharp_RelationalB *_other)
{
    return (MR_CSharp_RelationalB *)new MR::CSharp::RelationalB(MR::CSharp::RelationalB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalB(*(MR::CSharp::RelationalB *)_other))
    ));
}

void MR_CSharp_RelationalB_Destroy(const MR_CSharp_RelationalB *_this)
{
    delete ((const MR::CSharp::RelationalB *)_this);
}

void MR_CSharp_RelationalB_DestroyArray(const MR_CSharp_RelationalB *_this)
{
    delete[] ((const MR::CSharp::RelationalB *)_this);
}

MR_CSharp_RelationalB *MR_CSharp_RelationalB_AssignFromAnother(MR_CSharp_RelationalB *_this, const MR_CSharp_RelationalB *_other)
{
    return (MR_CSharp_RelationalB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalB(*(MR::CSharp::RelationalB *)_other))
    ));
}

bool MR_C_less_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
}

bool MR_C_greater_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
}

bool MR_C_less_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
}

bool MR_C_greater_equal_MR_CSharp_RelationalB(MR_CSharp_RelationalB *_this, MR_CSharp_RelationalB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalB *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalB *)(_1))
    );
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalC *)new MR::CSharp::RelationalC(MR::CSharp::RelationalC());
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalC *)(new MR::CSharp::RelationalC[num_elems]{});
}

const MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetPtr(const MR_CSharp_RelationalC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalC *)(((const MR::CSharp::RelationalC *)ptr) + i);
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_OffsetMutablePtr(MR_CSharp_RelationalC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalC *)(((MR::CSharp::RelationalC *)ptr) + i);
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_ConstructFromAnother(const MR_CSharp_RelationalC *_other)
{
    return (MR_CSharp_RelationalC *)new MR::CSharp::RelationalC(MR::CSharp::RelationalC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalC(*(MR::CSharp::RelationalC *)_other))
    ));
}

void MR_CSharp_RelationalC_Destroy(const MR_CSharp_RelationalC *_this)
{
    delete ((const MR::CSharp::RelationalC *)_this);
}

void MR_CSharp_RelationalC_DestroyArray(const MR_CSharp_RelationalC *_this)
{
    delete[] ((const MR::CSharp::RelationalC *)_this);
}

MR_CSharp_RelationalC *MR_CSharp_RelationalC_AssignFromAnother(MR_CSharp_RelationalC *_this, const MR_CSharp_RelationalC *_other)
{
    return (MR_CSharp_RelationalC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalC(*(MR::CSharp::RelationalC *)_other))
    ));
}

bool MR_C_less_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

bool MR_C_greater_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

bool MR_C_greater_equal_MR_CSharp_RelationalC(const MR_CSharp_RelationalC *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalC *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalD *)new MR::CSharp::RelationalD(MR::CSharp::RelationalD());
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalD *)(new MR::CSharp::RelationalD[num_elems]{});
}

const MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetPtr(const MR_CSharp_RelationalD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalD *)(((const MR::CSharp::RelationalD *)ptr) + i);
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_OffsetMutablePtr(MR_CSharp_RelationalD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalD *)(((MR::CSharp::RelationalD *)ptr) + i);
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_ConstructFromAnother(const MR_CSharp_RelationalD *_other)
{
    return (MR_CSharp_RelationalD *)new MR::CSharp::RelationalD(MR::CSharp::RelationalD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalD(*(MR::CSharp::RelationalD *)_other))
    ));
}

void MR_CSharp_RelationalD_Destroy(const MR_CSharp_RelationalD *_this)
{
    delete ((const MR::CSharp::RelationalD *)_this);
}

void MR_CSharp_RelationalD_DestroyArray(const MR_CSharp_RelationalD *_this)
{
    delete[] ((const MR::CSharp::RelationalD *)_this);
}

MR_CSharp_RelationalD *MR_CSharp_RelationalD_AssignFromAnother(MR_CSharp_RelationalD *_this, const MR_CSharp_RelationalD *_other)
{
    return (MR_CSharp_RelationalD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalD(*(MR::CSharp::RelationalD *)_other))
    ));
}

bool MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

bool MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

bool MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

bool MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(const MR_CSharp_RelationalD *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalD *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalE *)new MR::CSharp::RelationalE(MR::CSharp::RelationalE());
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalE *)(new MR::CSharp::RelationalE[num_elems]{});
}

const MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetPtr(const MR_CSharp_RelationalE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalE *)(((const MR::CSharp::RelationalE *)ptr) + i);
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_OffsetMutablePtr(MR_CSharp_RelationalE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalE *)(((MR::CSharp::RelationalE *)ptr) + i);
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_ConstructFromAnother(const MR_CSharp_RelationalE *_other)
{
    return (MR_CSharp_RelationalE *)new MR::CSharp::RelationalE(MR::CSharp::RelationalE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalE(*(MR::CSharp::RelationalE *)_other))
    ));
}

void MR_CSharp_RelationalE_Destroy(const MR_CSharp_RelationalE *_this)
{
    delete ((const MR::CSharp::RelationalE *)_this);
}

void MR_CSharp_RelationalE_DestroyArray(const MR_CSharp_RelationalE *_this)
{
    delete[] ((const MR::CSharp::RelationalE *)_this);
}

MR_CSharp_RelationalE *MR_CSharp_RelationalE_AssignFromAnother(MR_CSharp_RelationalE *_this, const MR_CSharp_RelationalE *_other)
{
    return (MR_CSharp_RelationalE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalE(*(MR::CSharp::RelationalE *)_other))
    ));
}

int MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

int MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

int MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

int MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(const MR_CSharp_RelationalE *_this, MR_CSharp_RelationalC *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalE *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstruct(void)
{
    return (MR_CSharp_RelationalF *)new MR::CSharp::RelationalF(MR::CSharp::RelationalF());
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_RelationalF *)(new MR::CSharp::RelationalF[num_elems]{});
}

const MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetPtr(const MR_CSharp_RelationalF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_RelationalF *)(((const MR::CSharp::RelationalF *)ptr) + i);
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_OffsetMutablePtr(MR_CSharp_RelationalF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_RelationalF *)(((MR::CSharp::RelationalF *)ptr) + i);
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_ConstructFromAnother(const MR_CSharp_RelationalF *_other)
{
    return (MR_CSharp_RelationalF *)new MR::CSharp::RelationalF(MR::CSharp::RelationalF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalF(*(MR::CSharp::RelationalF *)_other))
    ));
}

void MR_CSharp_RelationalF_Destroy(const MR_CSharp_RelationalF *_this)
{
    delete ((const MR::CSharp::RelationalF *)_this);
}

void MR_CSharp_RelationalF_DestroyArray(const MR_CSharp_RelationalF *_this)
{
    delete[] ((const MR::CSharp::RelationalF *)_this);
}

MR_CSharp_RelationalF *MR_CSharp_RelationalF_AssignFromAnother(MR_CSharp_RelationalF *_this, const MR_CSharp_RelationalF *_other)
{
    return (MR_CSharp_RelationalF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::RelationalF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::RelationalF(*(MR::CSharp::RelationalF *)_other))
    ));
}

void MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

void MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

void MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

void MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(const MR_CSharp_RelationalF *_this, MR_CSharp_RelationalC *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::RelationalF *)(_this)).operator>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::RelationalC *)(_1))
    );
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsA *)new MR::CSharp::StaticOpsLhsA(MR::CSharp::StaticOpsLhsA());
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsA *)(new MR::CSharp::StaticOpsLhsA[num_elems]{});
}

const MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetPtr(const MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsA *)(((const MR::CSharp::StaticOpsLhsA *)ptr) + i);
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_OffsetMutablePtr(MR_CSharp_StaticOpsLhsA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsA *)(((MR::CSharp::StaticOpsLhsA *)ptr) + i);
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_ConstructFromAnother(const MR_CSharp_StaticOpsLhsA *_other)
{
    return (MR_CSharp_StaticOpsLhsA *)new MR::CSharp::StaticOpsLhsA(MR::CSharp::StaticOpsLhsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_other))
    ));
}

void MR_CSharp_StaticOpsLhsA_Destroy(const MR_CSharp_StaticOpsLhsA *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsA *)_this);
}

void MR_CSharp_StaticOpsLhsA_DestroyArray(const MR_CSharp_StaticOpsLhsA *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsA *)_this);
}

MR_CSharp_StaticOpsLhsA *MR_CSharp_StaticOpsLhsA_AssignFromAnother(MR_CSharp_StaticOpsLhsA *_this, const MR_CSharp_StaticOpsLhsA *_other)
{
    return (MR_CSharp_StaticOpsLhsA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_other))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsLhsA_int(const MR_CSharp_StaticOpsLhsA *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsA(*(MR::CSharp::StaticOpsLhsA *)_1)),
        _2
    );
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsB *)new MR::CSharp::StaticOpsLhsB(MR::CSharp::StaticOpsLhsB());
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsB *)(new MR::CSharp::StaticOpsLhsB[num_elems]{});
}

const MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetPtr(const MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsB *)(((const MR::CSharp::StaticOpsLhsB *)ptr) + i);
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_OffsetMutablePtr(MR_CSharp_StaticOpsLhsB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsB *)(((MR::CSharp::StaticOpsLhsB *)ptr) + i);
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_ConstructFromAnother(const MR_CSharp_StaticOpsLhsB *_other)
{
    return (MR_CSharp_StaticOpsLhsB *)new MR::CSharp::StaticOpsLhsB(MR::CSharp::StaticOpsLhsB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_other))
    ));
}

void MR_CSharp_StaticOpsLhsB_Destroy(const MR_CSharp_StaticOpsLhsB *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsB *)_this);
}

void MR_CSharp_StaticOpsLhsB_DestroyArray(const MR_CSharp_StaticOpsLhsB *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsB *)_this);
}

MR_CSharp_StaticOpsLhsB *MR_CSharp_StaticOpsLhsB_AssignFromAnother(MR_CSharp_StaticOpsLhsB *_this, const MR_CSharp_StaticOpsLhsB *_other)
{
    return (MR_CSharp_StaticOpsLhsB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_other))
    ));
}

void MR_C_add_MR_CSharp_StaticOpsLhsB_int(const MR_CSharp_StaticOpsLhsB *_1, int _2)
{
    MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsB(*(MR::CSharp::StaticOpsLhsB *)_1)),
        _2
    );
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsC *)new MR::CSharp::StaticOpsLhsC(MR::CSharp::StaticOpsLhsC());
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsC *)(new MR::CSharp::StaticOpsLhsC[num_elems]{});
}

const MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetPtr(const MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsC *)(((const MR::CSharp::StaticOpsLhsC *)ptr) + i);
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_OffsetMutablePtr(MR_CSharp_StaticOpsLhsC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsC *)(((MR::CSharp::StaticOpsLhsC *)ptr) + i);
}

MR_CSharp_StaticOpsLhsC *MR_CSharp_StaticOpsLhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsLhsC *_other)
{
    return (MR_CSharp_StaticOpsLhsC *)new MR::CSharp::StaticOpsLhsC(MR::CSharp::StaticOpsLhsC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::StaticOpsLhsC), MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_END(_other, MR::CSharp::StaticOpsLhsC))
    ));
}

void MR_CSharp_StaticOpsLhsC_Destroy(const MR_CSharp_StaticOpsLhsC *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsC *)_this);
}

void MR_CSharp_StaticOpsLhsC_DestroyArray(const MR_CSharp_StaticOpsLhsC *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsC *)_this);
}

int MR_C_add_MR_CSharp_StaticOpsLhsC_int(MR_C_PassBy _1_pass_by, MR_CSharp_StaticOpsLhsC *_1, int _2)
{
    return MR::CSharp::operator+(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_MOVE(_1, (MR::CSharp::StaticOpsLhsC), MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsLhsC) MRBINDC_CLASSARG_END(_1, MR::CSharp::StaticOpsLhsC)),
        _2
    );
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsD *)new MR::CSharp::StaticOpsLhsD(MR::CSharp::StaticOpsLhsD());
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsD *)(new MR::CSharp::StaticOpsLhsD[num_elems]{});
}

const MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetPtr(const MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsD *)(((const MR::CSharp::StaticOpsLhsD *)ptr) + i);
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_OffsetMutablePtr(MR_CSharp_StaticOpsLhsD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsD *)(((MR::CSharp::StaticOpsLhsD *)ptr) + i);
}

MR_CSharp_StaticOpsLhsD *MR_CSharp_StaticOpsLhsD_ConstructFromAnother(const MR_CSharp_StaticOpsLhsD *_other)
{
    return (MR_CSharp_StaticOpsLhsD *)new MR::CSharp::StaticOpsLhsD(MR::CSharp::StaticOpsLhsD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsD(std::move(*(MR::CSharp::StaticOpsLhsD *)_other)))
    ));
}

void MR_CSharp_StaticOpsLhsD_Destroy(const MR_CSharp_StaticOpsLhsD *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsD *)_this);
}

void MR_CSharp_StaticOpsLhsD_DestroyArray(const MR_CSharp_StaticOpsLhsD *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsD *)_this);
}

int MR_C_add_MR_CSharp_StaticOpsLhsD_int(const MR_CSharp_StaticOpsLhsD *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsD(std::move(*(MR::CSharp::StaticOpsLhsD *)_1))),
        _2
    );
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsE *)new MR::CSharp::StaticOpsLhsE(MR::CSharp::StaticOpsLhsE());
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsE *)(new MR::CSharp::StaticOpsLhsE[num_elems]{});
}

const MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetPtr(const MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsE *)(((const MR::CSharp::StaticOpsLhsE *)ptr) + i);
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_OffsetMutablePtr(MR_CSharp_StaticOpsLhsE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsE *)(((MR::CSharp::StaticOpsLhsE *)ptr) + i);
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_ConstructFromAnother(const MR_CSharp_StaticOpsLhsE *_other)
{
    return (MR_CSharp_StaticOpsLhsE *)new MR::CSharp::StaticOpsLhsE(MR::CSharp::StaticOpsLhsE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsE(std::move(*(MR::CSharp::StaticOpsLhsE *)_other)))
    ));
}

void MR_CSharp_StaticOpsLhsE_Destroy(const MR_CSharp_StaticOpsLhsE *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsE *)_this);
}

void MR_CSharp_StaticOpsLhsE_DestroyArray(const MR_CSharp_StaticOpsLhsE *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsE *)_this);
}

MR_CSharp_StaticOpsLhsE *MR_CSharp_StaticOpsLhsE_AssignFromAnother(MR_CSharp_StaticOpsLhsE *_this, const MR_CSharp_StaticOpsLhsE *_other)
{
    return (MR_CSharp_StaticOpsLhsE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsE(std::move(*(MR::CSharp::StaticOpsLhsE *)_other)))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsLhsE_int(MR_CSharp_StaticOpsLhsE *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::StaticOpsLhsE *)(_1)),
        _2
    );
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsF *)new MR::CSharp::StaticOpsLhsF(MR::CSharp::StaticOpsLhsF());
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsF *)(new MR::CSharp::StaticOpsLhsF[num_elems]{});
}

const MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetPtr(const MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsF *)(((const MR::CSharp::StaticOpsLhsF *)ptr) + i);
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_OffsetMutablePtr(MR_CSharp_StaticOpsLhsF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsF *)(((MR::CSharp::StaticOpsLhsF *)ptr) + i);
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_ConstructFromAnother(const MR_CSharp_StaticOpsLhsF *_other)
{
    return (MR_CSharp_StaticOpsLhsF *)new MR::CSharp::StaticOpsLhsF(MR::CSharp::StaticOpsLhsF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsF(std::move(*(MR::CSharp::StaticOpsLhsF *)_other)))
    ));
}

void MR_CSharp_StaticOpsLhsF_Destroy(const MR_CSharp_StaticOpsLhsF *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsF *)_this);
}

void MR_CSharp_StaticOpsLhsF_DestroyArray(const MR_CSharp_StaticOpsLhsF *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsF *)_this);
}

MR_CSharp_StaticOpsLhsF *MR_CSharp_StaticOpsLhsF_AssignFromAnother(MR_CSharp_StaticOpsLhsF *_this, const MR_CSharp_StaticOpsLhsF *_other)
{
    return (MR_CSharp_StaticOpsLhsF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsF(std::move(*(MR::CSharp::StaticOpsLhsF *)_other)))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsLhsF_int(const MR_CSharp_StaticOpsLhsF *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::StaticOpsLhsF *)(_1)),
        _2
    );
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsG *)new MR::CSharp::StaticOpsLhsG(MR::CSharp::StaticOpsLhsG());
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsG *)(new MR::CSharp::StaticOpsLhsG[num_elems]{});
}

const MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetPtr(const MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsG *)(((const MR::CSharp::StaticOpsLhsG *)ptr) + i);
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_OffsetMutablePtr(MR_CSharp_StaticOpsLhsG *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsG *)(((MR::CSharp::StaticOpsLhsG *)ptr) + i);
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_ConstructFromAnother(const MR_CSharp_StaticOpsLhsG *_other)
{
    return (MR_CSharp_StaticOpsLhsG *)new MR::CSharp::StaticOpsLhsG(MR::CSharp::StaticOpsLhsG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_other))
    ));
}

void MR_CSharp_StaticOpsLhsG_Destroy(const MR_CSharp_StaticOpsLhsG *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsG *)_this);
}

void MR_CSharp_StaticOpsLhsG_DestroyArray(const MR_CSharp_StaticOpsLhsG *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsG *)_this);
}

MR_CSharp_StaticOpsLhsG *MR_CSharp_StaticOpsLhsG_AssignFromAnother(MR_CSharp_StaticOpsLhsG *_this, const MR_CSharp_StaticOpsLhsG *_other)
{
    return (MR_CSharp_StaticOpsLhsG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsG *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_other)))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsLhsG_int(const MR_CSharp_StaticOpsLhsG *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsLhsG(*(MR::CSharp::StaticOpsLhsG *)_1)),
        _2
    );
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsLhsH *)new MR::CSharp::StaticOpsLhsH(MR::CSharp::StaticOpsLhsH());
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsLhsH *)(new MR::CSharp::StaticOpsLhsH[num_elems]{});
}

const MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetPtr(const MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsLhsH *)(((const MR::CSharp::StaticOpsLhsH *)ptr) + i);
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_OffsetMutablePtr(MR_CSharp_StaticOpsLhsH *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsLhsH *)(((MR::CSharp::StaticOpsLhsH *)ptr) + i);
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_ConstructFromAnother(const MR_CSharp_StaticOpsLhsH *_other)
{
    return (MR_CSharp_StaticOpsLhsH *)new MR::CSharp::StaticOpsLhsH(MR::CSharp::StaticOpsLhsH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsH(*(MR::CSharp::StaticOpsLhsH *)_other))
    ));
}

void MR_CSharp_StaticOpsLhsH_Destroy(const MR_CSharp_StaticOpsLhsH *_this)
{
    delete ((const MR::CSharp::StaticOpsLhsH *)_this);
}

void MR_CSharp_StaticOpsLhsH_DestroyArray(const MR_CSharp_StaticOpsLhsH *_this)
{
    delete[] ((const MR::CSharp::StaticOpsLhsH *)_this);
}

MR_CSharp_StaticOpsLhsH *MR_CSharp_StaticOpsLhsH_AssignFromAnother(MR_CSharp_StaticOpsLhsH *_this, const MR_CSharp_StaticOpsLhsH *_other)
{
    return (MR_CSharp_StaticOpsLhsH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsLhsH *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsLhsH(*(MR::CSharp::StaticOpsLhsH *)_other)))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsLhsH_int(const MR_CSharp_StaticOpsLhsH *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::StaticOpsLhsH *)(_1)),
        _2
    );
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsA *)new MR::CSharp::StaticOpsRhsA(MR::CSharp::StaticOpsRhsA());
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsA *)(new MR::CSharp::StaticOpsRhsA[num_elems]{});
}

const MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetPtr(const MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsA *)(((const MR::CSharp::StaticOpsRhsA *)ptr) + i);
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_OffsetMutablePtr(MR_CSharp_StaticOpsRhsA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsA *)(((MR::CSharp::StaticOpsRhsA *)ptr) + i);
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_ConstructFromAnother(const MR_CSharp_StaticOpsRhsA *_other)
{
    return (MR_CSharp_StaticOpsRhsA *)new MR::CSharp::StaticOpsRhsA(MR::CSharp::StaticOpsRhsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_other))
    ));
}

void MR_CSharp_StaticOpsRhsA_Destroy(const MR_CSharp_StaticOpsRhsA *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsA *)_this);
}

void MR_CSharp_StaticOpsRhsA_DestroyArray(const MR_CSharp_StaticOpsRhsA *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsA *)_this);
}

MR_CSharp_StaticOpsRhsA *MR_CSharp_StaticOpsRhsA_AssignFromAnother(MR_CSharp_StaticOpsRhsA *_this, const MR_CSharp_StaticOpsRhsA *_other)
{
    return (MR_CSharp_StaticOpsRhsA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_other))
    ));
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsA(int _1, const MR_CSharp_StaticOpsRhsA *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsA(*(MR::CSharp::StaticOpsRhsA *)_2))
    );
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsB *)new MR::CSharp::StaticOpsRhsB(MR::CSharp::StaticOpsRhsB());
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsB *)(new MR::CSharp::StaticOpsRhsB[num_elems]{});
}

const MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetPtr(const MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsB *)(((const MR::CSharp::StaticOpsRhsB *)ptr) + i);
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_OffsetMutablePtr(MR_CSharp_StaticOpsRhsB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsB *)(((MR::CSharp::StaticOpsRhsB *)ptr) + i);
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_ConstructFromAnother(const MR_CSharp_StaticOpsRhsB *_other)
{
    return (MR_CSharp_StaticOpsRhsB *)new MR::CSharp::StaticOpsRhsB(MR::CSharp::StaticOpsRhsB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_other))
    ));
}

void MR_CSharp_StaticOpsRhsB_Destroy(const MR_CSharp_StaticOpsRhsB *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsB *)_this);
}

void MR_CSharp_StaticOpsRhsB_DestroyArray(const MR_CSharp_StaticOpsRhsB *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsB *)_this);
}

MR_CSharp_StaticOpsRhsB *MR_CSharp_StaticOpsRhsB_AssignFromAnother(MR_CSharp_StaticOpsRhsB *_this, const MR_CSharp_StaticOpsRhsB *_other)
{
    return (MR_CSharp_StaticOpsRhsB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_other))
    ));
}

void MR_C_add_int_MR_CSharp_StaticOpsRhsB(int _1, const MR_CSharp_StaticOpsRhsB *_2)
{
    MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsB(*(MR::CSharp::StaticOpsRhsB *)_2))
    );
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsC *)new MR::CSharp::StaticOpsRhsC(MR::CSharp::StaticOpsRhsC());
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsC *)(new MR::CSharp::StaticOpsRhsC[num_elems]{});
}

const MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetPtr(const MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsC *)(((const MR::CSharp::StaticOpsRhsC *)ptr) + i);
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_OffsetMutablePtr(MR_CSharp_StaticOpsRhsC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsC *)(((MR::CSharp::StaticOpsRhsC *)ptr) + i);
}

MR_CSharp_StaticOpsRhsC *MR_CSharp_StaticOpsRhsC_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_StaticOpsRhsC *_other)
{
    return (MR_CSharp_StaticOpsRhsC *)new MR::CSharp::StaticOpsRhsC(MR::CSharp::StaticOpsRhsC(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::StaticOpsRhsC), MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_END(_other, MR::CSharp::StaticOpsRhsC))
    ));
}

void MR_CSharp_StaticOpsRhsC_Destroy(const MR_CSharp_StaticOpsRhsC *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsC *)_this);
}

void MR_CSharp_StaticOpsRhsC_DestroyArray(const MR_CSharp_StaticOpsRhsC *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsC *)_this);
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsC(int _1, MR_C_PassBy _2_pass_by, MR_CSharp_StaticOpsRhsC *_2)
{
    return MR::CSharp::operator+(
        _1,
        (MRBINDC_CLASSARG_DEF_CTOR(_2, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_MOVE(_2, (MR::CSharp::StaticOpsRhsC), MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_DefaultArgument, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_NoObject, MR::CSharp::StaticOpsRhsC) MRBINDC_CLASSARG_END(_2, MR::CSharp::StaticOpsRhsC))
    );
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsD *)new MR::CSharp::StaticOpsRhsD(MR::CSharp::StaticOpsRhsD());
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsD *)(new MR::CSharp::StaticOpsRhsD[num_elems]{});
}

const MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetPtr(const MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsD *)(((const MR::CSharp::StaticOpsRhsD *)ptr) + i);
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_OffsetMutablePtr(MR_CSharp_StaticOpsRhsD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsD *)(((MR::CSharp::StaticOpsRhsD *)ptr) + i);
}

MR_CSharp_StaticOpsRhsD *MR_CSharp_StaticOpsRhsD_ConstructFromAnother(const MR_CSharp_StaticOpsRhsD *_other)
{
    return (MR_CSharp_StaticOpsRhsD *)new MR::CSharp::StaticOpsRhsD(MR::CSharp::StaticOpsRhsD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsD(std::move(*(MR::CSharp::StaticOpsRhsD *)_other)))
    ));
}

void MR_CSharp_StaticOpsRhsD_Destroy(const MR_CSharp_StaticOpsRhsD *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsD *)_this);
}

void MR_CSharp_StaticOpsRhsD_DestroyArray(const MR_CSharp_StaticOpsRhsD *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsD *)_this);
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsD(int _1, const MR_CSharp_StaticOpsRhsD *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsD(std::move(*(MR::CSharp::StaticOpsRhsD *)_2)))
    );
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsE *)new MR::CSharp::StaticOpsRhsE(MR::CSharp::StaticOpsRhsE());
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsE *)(new MR::CSharp::StaticOpsRhsE[num_elems]{});
}

const MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetPtr(const MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsE *)(((const MR::CSharp::StaticOpsRhsE *)ptr) + i);
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_OffsetMutablePtr(MR_CSharp_StaticOpsRhsE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsE *)(((MR::CSharp::StaticOpsRhsE *)ptr) + i);
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_ConstructFromAnother(const MR_CSharp_StaticOpsRhsE *_other)
{
    return (MR_CSharp_StaticOpsRhsE *)new MR::CSharp::StaticOpsRhsE(MR::CSharp::StaticOpsRhsE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsE(std::move(*(MR::CSharp::StaticOpsRhsE *)_other)))
    ));
}

void MR_CSharp_StaticOpsRhsE_Destroy(const MR_CSharp_StaticOpsRhsE *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsE *)_this);
}

void MR_CSharp_StaticOpsRhsE_DestroyArray(const MR_CSharp_StaticOpsRhsE *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsE *)_this);
}

MR_CSharp_StaticOpsRhsE *MR_CSharp_StaticOpsRhsE_AssignFromAnother(MR_CSharp_StaticOpsRhsE *_this, const MR_CSharp_StaticOpsRhsE *_other)
{
    return (MR_CSharp_StaticOpsRhsE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsE(std::move(*(MR::CSharp::StaticOpsRhsE *)_other)))
    ));
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsE(int _1, MR_CSharp_StaticOpsRhsE *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::StaticOpsRhsE *)(_2))
    );
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsF *)new MR::CSharp::StaticOpsRhsF(MR::CSharp::StaticOpsRhsF());
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsF *)(new MR::CSharp::StaticOpsRhsF[num_elems]{});
}

const MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetPtr(const MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsF *)(((const MR::CSharp::StaticOpsRhsF *)ptr) + i);
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_OffsetMutablePtr(MR_CSharp_StaticOpsRhsF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsF *)(((MR::CSharp::StaticOpsRhsF *)ptr) + i);
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_ConstructFromAnother(const MR_CSharp_StaticOpsRhsF *_other)
{
    return (MR_CSharp_StaticOpsRhsF *)new MR::CSharp::StaticOpsRhsF(MR::CSharp::StaticOpsRhsF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsF(std::move(*(MR::CSharp::StaticOpsRhsF *)_other)))
    ));
}

void MR_CSharp_StaticOpsRhsF_Destroy(const MR_CSharp_StaticOpsRhsF *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsF *)_this);
}

void MR_CSharp_StaticOpsRhsF_DestroyArray(const MR_CSharp_StaticOpsRhsF *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsF *)_this);
}

MR_CSharp_StaticOpsRhsF *MR_CSharp_StaticOpsRhsF_AssignFromAnother(MR_CSharp_StaticOpsRhsF *_this, const MR_CSharp_StaticOpsRhsF *_other)
{
    return (MR_CSharp_StaticOpsRhsF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsF(std::move(*(MR::CSharp::StaticOpsRhsF *)_other)))
    ));
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsF(int _1, const MR_CSharp_StaticOpsRhsF *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::StaticOpsRhsF *)(_2))
    );
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsG *)new MR::CSharp::StaticOpsRhsG(MR::CSharp::StaticOpsRhsG());
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsG *)(new MR::CSharp::StaticOpsRhsG[num_elems]{});
}

const MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetPtr(const MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsG *)(((const MR::CSharp::StaticOpsRhsG *)ptr) + i);
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_OffsetMutablePtr(MR_CSharp_StaticOpsRhsG *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsG *)(((MR::CSharp::StaticOpsRhsG *)ptr) + i);
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_ConstructFromAnother(const MR_CSharp_StaticOpsRhsG *_other)
{
    return (MR_CSharp_StaticOpsRhsG *)new MR::CSharp::StaticOpsRhsG(MR::CSharp::StaticOpsRhsG(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_other))
    ));
}

void MR_CSharp_StaticOpsRhsG_Destroy(const MR_CSharp_StaticOpsRhsG *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsG *)_this);
}

void MR_CSharp_StaticOpsRhsG_DestroyArray(const MR_CSharp_StaticOpsRhsG *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsG *)_this);
}

MR_CSharp_StaticOpsRhsG *MR_CSharp_StaticOpsRhsG_AssignFromAnother(MR_CSharp_StaticOpsRhsG *_this, const MR_CSharp_StaticOpsRhsG *_other)
{
    return (MR_CSharp_StaticOpsRhsG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsG *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_other)))
    ));
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsG(int _1, const MR_CSharp_StaticOpsRhsG *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsRhsG(*(MR::CSharp::StaticOpsRhsG *)_2))
    );
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsRhsH *)new MR::CSharp::StaticOpsRhsH(MR::CSharp::StaticOpsRhsH());
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsRhsH *)(new MR::CSharp::StaticOpsRhsH[num_elems]{});
}

const MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetPtr(const MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsRhsH *)(((const MR::CSharp::StaticOpsRhsH *)ptr) + i);
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_OffsetMutablePtr(MR_CSharp_StaticOpsRhsH *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsRhsH *)(((MR::CSharp::StaticOpsRhsH *)ptr) + i);
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_ConstructFromAnother(const MR_CSharp_StaticOpsRhsH *_other)
{
    return (MR_CSharp_StaticOpsRhsH *)new MR::CSharp::StaticOpsRhsH(MR::CSharp::StaticOpsRhsH(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsH(*(MR::CSharp::StaticOpsRhsH *)_other))
    ));
}

void MR_CSharp_StaticOpsRhsH_Destroy(const MR_CSharp_StaticOpsRhsH *_this)
{
    delete ((const MR::CSharp::StaticOpsRhsH *)_this);
}

void MR_CSharp_StaticOpsRhsH_DestroyArray(const MR_CSharp_StaticOpsRhsH *_this)
{
    delete[] ((const MR::CSharp::StaticOpsRhsH *)_this);
}

MR_CSharp_StaticOpsRhsH *MR_CSharp_StaticOpsRhsH_AssignFromAnother(MR_CSharp_StaticOpsRhsH *_this, const MR_CSharp_StaticOpsRhsH *_other)
{
    return (MR_CSharp_StaticOpsRhsH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsRhsH *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsRhsH(*(MR::CSharp::StaticOpsRhsH *)_other)))
    ));
}

int MR_C_add_int_MR_CSharp_StaticOpsRhsH(int _1, const MR_CSharp_StaticOpsRhsH *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::StaticOpsRhsH *)(_2))
    );
}

int MR_C_add_MR_CSharp_StaticOpsEnum_int(MR_CSharp_StaticOpsEnum _1, int _2)
{
    return MR::CSharp::operator+(
        ((MR::CSharp::StaticOpsEnum)_1),
        _2
    );
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsMixedLhs *)new MR::CSharp::StaticOpsMixedLhs(MR::CSharp::StaticOpsMixedLhs());
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsMixedLhs *)(new MR::CSharp::StaticOpsMixedLhs[num_elems]{});
}

const MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetPtr(const MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsMixedLhs *)(((const MR::CSharp::StaticOpsMixedLhs *)ptr) + i);
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedLhs *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsMixedLhs *)(((MR::CSharp::StaticOpsMixedLhs *)ptr) + i);
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedLhs *_other)
{
    return (MR_CSharp_StaticOpsMixedLhs *)new MR::CSharp::StaticOpsMixedLhs(MR::CSharp::StaticOpsMixedLhs(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_other))
    ));
}

void MR_CSharp_StaticOpsMixedLhs_Destroy(const MR_CSharp_StaticOpsMixedLhs *_this)
{
    delete ((const MR::CSharp::StaticOpsMixedLhs *)_this);
}

void MR_CSharp_StaticOpsMixedLhs_DestroyArray(const MR_CSharp_StaticOpsMixedLhs *_this)
{
    delete[] ((const MR::CSharp::StaticOpsMixedLhs *)_this);
}

MR_CSharp_StaticOpsMixedLhs *MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(MR_CSharp_StaticOpsMixedLhs *_this, const MR_CSharp_StaticOpsMixedLhs *_other)
{
    return (MR_CSharp_StaticOpsMixedLhs *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsMixedLhs *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_other))
    ));
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstruct(void)
{
    return (MR_CSharp_StaticOpsMixedRhs *)new MR::CSharp::StaticOpsMixedRhs(MR::CSharp::StaticOpsMixedRhs());
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StaticOpsMixedRhs *)(new MR::CSharp::StaticOpsMixedRhs[num_elems]{});
}

const MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetPtr(const MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StaticOpsMixedRhs *)(((const MR::CSharp::StaticOpsMixedRhs *)ptr) + i);
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_OffsetMutablePtr(MR_CSharp_StaticOpsMixedRhs *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StaticOpsMixedRhs *)(((MR::CSharp::StaticOpsMixedRhs *)ptr) + i);
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(const MR_CSharp_StaticOpsMixedRhs *_other)
{
    return (MR_CSharp_StaticOpsMixedRhs *)new MR::CSharp::StaticOpsMixedRhs(MR::CSharp::StaticOpsMixedRhs(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_other))
    ));
}

void MR_CSharp_StaticOpsMixedRhs_Destroy(const MR_CSharp_StaticOpsMixedRhs *_this)
{
    delete ((const MR::CSharp::StaticOpsMixedRhs *)_this);
}

void MR_CSharp_StaticOpsMixedRhs_DestroyArray(const MR_CSharp_StaticOpsMixedRhs *_this)
{
    delete[] ((const MR::CSharp::StaticOpsMixedRhs *)_this);
}

MR_CSharp_StaticOpsMixedRhs *MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(MR_CSharp_StaticOpsMixedRhs *_this, const MR_CSharp_StaticOpsMixedRhs *_other)
{
    return (MR_CSharp_StaticOpsMixedRhs *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StaticOpsMixedRhs *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_other))
    ));
}

int MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(const MR_CSharp_StaticOpsMixedLhs *_1, const MR_CSharp_StaticOpsMixedRhs *_2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::StaticOpsMixedLhs(*(MR::CSharp::StaticOpsMixedLhs *)_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::StaticOpsMixedRhs(*(MR::CSharp::StaticOpsMixedRhs *)_2))
    );
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstruct(void)
{
    return (MR_CSharp_NonTrivialClassOps *)new MR::CSharp::NonTrivialClassOps(MR::CSharp::NonTrivialClassOps());
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NonTrivialClassOps *)(new MR::CSharp::NonTrivialClassOps[num_elems]{});
}

const MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetPtr(const MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NonTrivialClassOps *)(((const MR::CSharp::NonTrivialClassOps *)ptr) + i);
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_OffsetMutablePtr(MR_CSharp_NonTrivialClassOps *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NonTrivialClassOps *)(((MR::CSharp::NonTrivialClassOps *)ptr) + i);
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other)
{
    return (MR_CSharp_NonTrivialClassOps *)new MR::CSharp::NonTrivialClassOps(MR::CSharp::NonTrivialClassOps(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialClassOps))
    ));
}

void MR_CSharp_NonTrivialClassOps_Destroy(const MR_CSharp_NonTrivialClassOps *_this)
{
    delete ((const MR::CSharp::NonTrivialClassOps *)_this);
}

void MR_CSharp_NonTrivialClassOps_DestroyArray(const MR_CSharp_NonTrivialClassOps *_this)
{
    delete[] ((const MR::CSharp::NonTrivialClassOps *)_this);
}

MR_CSharp_NonTrivialClassOps *MR_CSharp_NonTrivialClassOps_AssignFromAnother(MR_CSharp_NonTrivialClassOps *_this, MR_C_PassBy _other_pass_by, MR_CSharp_NonTrivialClassOps *_other)
{
    return (MR_CSharp_NonTrivialClassOps *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialClassOps *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_other, MR::CSharp::NonTrivialClassOps))
    ));
}

int MR_C_add_MR_CSharp_NonTrivialClassOps_int(MR_CSharp_NonTrivialClassOps *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialClassOps *)(_this)).operator+(
        _1
    );
}

int MR_C_add_MR_CSharp_NonTrivialClassOps_float(MR_C_PassBy _1_pass_by, MR_CSharp_NonTrivialClassOps *_1, float _2)
{
    return MR::CSharp::operator+(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_1, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_1, MR::CSharp::NonTrivialClassOps)),
        _2
    );
}

int MR_C_add_float_MR_CSharp_NonTrivialClassOps(float _1, MR_C_PassBy _2_pass_by, MR_CSharp_NonTrivialClassOps *_2)
{
    return MR::CSharp::operator+(
        _1,
        (MRBINDC_CLASSARG_DEF_CTOR(_2, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_COPY(_2, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_MOVE(_2, (MR::CSharp::NonTrivialClassOps), MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_DefaultArgument, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_NO_DEF_ARG(_2, MR_C_PassBy_NoObject, MR::CSharp::NonTrivialClassOps) MRBINDC_CLASSARG_END(_2, MR::CSharp::NonTrivialClassOps))
    );
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct(void)
{
    return (MR_CSharp_NonCopyableClassByValueOps *)new MR::CSharp::NonCopyableClassByValueOps(MR::CSharp::NonCopyableClassByValueOps());
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NonCopyableClassByValueOps *)(new MR::CSharp::NonCopyableClassByValueOps[num_elems]{});
}

const MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetPtr(const MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NonCopyableClassByValueOps *)(((const MR::CSharp::NonCopyableClassByValueOps *)ptr) + i);
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_OffsetMutablePtr(MR_CSharp_NonCopyableClassByValueOps *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NonCopyableClassByValueOps *)(((MR::CSharp::NonCopyableClassByValueOps *)ptr) + i);
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(const MR_CSharp_NonCopyableClassByValueOps *_other)
{
    return (MR_CSharp_NonCopyableClassByValueOps *)new MR::CSharp::NonCopyableClassByValueOps(MR::CSharp::NonCopyableClassByValueOps(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_other)))
    ));
}

void MR_CSharp_NonCopyableClassByValueOps_Destroy(const MR_CSharp_NonCopyableClassByValueOps *_this)
{
    delete ((const MR::CSharp::NonCopyableClassByValueOps *)_this);
}

void MR_CSharp_NonCopyableClassByValueOps_DestroyArray(const MR_CSharp_NonCopyableClassByValueOps *_this)
{
    delete[] ((const MR::CSharp::NonCopyableClassByValueOps *)_this);
}

MR_CSharp_NonCopyableClassByValueOps *MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(MR_CSharp_NonCopyableClassByValueOps *_this, const MR_CSharp_NonCopyableClassByValueOps *_other)
{
    return (MR_CSharp_NonCopyableClassByValueOps *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonCopyableClassByValueOps *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_other)))
    ));
}

int MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(const MR_CSharp_NonCopyableClassByValueOps *_1, int _2)
{
    return MR::CSharp::operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_1))),
        _2
    );
}

int MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(int _1, const MR_CSharp_NonCopyableClassByValueOps *_2)
{
    return MR::CSharp::operator+(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), MR::CSharp::NonCopyableClassByValueOps(std::move(*(MR::CSharp::NonCopyableClassByValueOps *)_2)))
    );
}

MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstruct(void)
{
    return (MR_CSharp_CallOp *)new MR::CSharp::CallOp(MR::CSharp::CallOp());
}

MR_CSharp_CallOp *MR_CSharp_CallOp_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_CallOp *)(new MR::CSharp::CallOp[num_elems]{});
}

const MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetPtr(const MR_CSharp_CallOp *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_CallOp *)(((const MR::CSharp::CallOp *)ptr) + i);
}

MR_CSharp_CallOp *MR_CSharp_CallOp_OffsetMutablePtr(MR_CSharp_CallOp *ptr, ptrdiff_t i)
{
    return (MR_CSharp_CallOp *)(((MR::CSharp::CallOp *)ptr) + i);
}

MR_CSharp_CallOp *MR_CSharp_CallOp_ConstructFromAnother(const MR_CSharp_CallOp *_other)
{
    return (MR_CSharp_CallOp *)new MR::CSharp::CallOp(MR::CSharp::CallOp(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::CallOp(*(MR::CSharp::CallOp *)_other))
    ));
}

void MR_CSharp_CallOp_Destroy(const MR_CSharp_CallOp *_this)
{
    delete ((const MR::CSharp::CallOp *)_this);
}

void MR_CSharp_CallOp_DestroyArray(const MR_CSharp_CallOp *_this)
{
    delete[] ((const MR::CSharp::CallOp *)_this);
}

MR_CSharp_CallOp *MR_CSharp_CallOp_AssignFromAnother(MR_CSharp_CallOp *_this, const MR_CSharp_CallOp *_other)
{
    return (MR_CSharp_CallOp *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::CallOp(*(MR::CSharp::CallOp *)_other))
    ));
}

void MR_CSharp_CallOp_call_0(MR_CSharp_CallOp *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator()();
}

int MR_CSharp_CallOp_call_3(MR_CSharp_CallOp *_this, int _1, int _2, int _3)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::CallOp *)(_this)).operator()(
        _1,
        _2,
        _3
    );
}

MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_ConstructFromAnother(const MR_CSharp_TestOpsA *_other)
{
    return (MR_CSharp_TestOpsA *)new MR::CSharp::TestOpsA(MR::CSharp::TestOpsA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_other))
    ));
}

const MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetPtr(const MR_CSharp_TestOpsA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TestOpsA *)(((const MR::CSharp::TestOpsA *)ptr) + i);
}

MR_CSharp_TestOpsA *MR_CSharp_TestOpsA_OffsetMutablePtr(MR_CSharp_TestOpsA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TestOpsA *)(((MR::CSharp::TestOpsA *)ptr) + i);
}

void MR_CSharp_TestOpsA_Destroy(const MR_CSharp_TestOpsA *_this)
{
    delete ((const MR::CSharp::TestOpsA *)_this);
}

void MR_CSharp_TestOpsA_DestroyArray(const MR_CSharp_TestOpsA *_this)
{
    delete[] ((const MR::CSharp::TestOpsA *)_this);
}

int MR_CSharp_TestOpsA_AssignFromAnother(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_other)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_other))
    );
}

int MR_C_pos_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+();
}

int MR_C_add_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_neg_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-();
}

int MR_C_sub_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_deref_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*();
}

int MR_C_mul_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_div_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator/(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_mod_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator%(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_xor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator^(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_addressof_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&();
}

int MR_C_bitand_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_bitor_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator|(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_compl_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator~();
}

int MR_C_not_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator!();
}

int MR_CSharp_TestOpsA_add_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator+=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_sub_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator-=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_mul_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator*=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_div_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator/=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_mod_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator%=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_xor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator^=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_bitand_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_bitor_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator|=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_lshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_rshift_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_lshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_rshift_assign(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator>>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_compare_three_way_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator<=>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_and_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator&&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_or_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator||(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_C_comma_MR_CSharp_TestOpsA(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator,(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_arrow_star(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator->*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_arrow(MR_CSharp_TestOpsA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator->();
}

int MR_CSharp_TestOpsA_call(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator()(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

int MR_CSharp_TestOpsA_index(MR_CSharp_TestOpsA *_this, const MR_CSharp_TestOpsA *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsA *)(_this)).operator[](
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other)
{
    return (MR_CSharp_TestOpsB *)new MR::CSharp::TestOpsB(MR::CSharp::TestOpsB(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestOpsB))
    ));
}

const MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetPtr(const MR_CSharp_TestOpsB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TestOpsB *)(((const MR::CSharp::TestOpsB *)ptr) + i);
}

MR_CSharp_TestOpsB *MR_CSharp_TestOpsB_OffsetMutablePtr(MR_CSharp_TestOpsB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TestOpsB *)(((MR::CSharp::TestOpsB *)ptr) + i);
}

void MR_CSharp_TestOpsB_Destroy(const MR_CSharp_TestOpsB *_this)
{
    delete ((const MR::CSharp::TestOpsB *)_this);
}

void MR_CSharp_TestOpsB_DestroyArray(const MR_CSharp_TestOpsB *_this)
{
    delete[] ((const MR::CSharp::TestOpsB *)_this);
}

int MR_CSharp_TestOpsB_AssignFromAnother(MR_CSharp_TestOpsB *_this, MR_C_PassBy _other_pass_by, MR_CSharp_TestOpsB *_other)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator=(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_other, MR::CSharp::TestOpsB))
    );
}

int MR_C_pos_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+();
}

int MR_C_add_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_neg_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-();
}

int MR_C_sub_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_deref_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*();
}

int MR_C_mul_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_div_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator/(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_mod_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator%(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_xor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator^(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_addressof_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&();
}

int MR_C_bitand_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_bitor_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator|(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_compl_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator~();
}

int MR_C_not_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator!();
}

int MR_CSharp_TestOpsB_add_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator+=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_sub_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator-=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_mul_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator*=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_div_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator/=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_mod_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator%=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_xor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator^=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_bitand_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_bitor_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator|=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_lshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<<(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_rshift_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator>>(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_lshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<<=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_rshift_assign(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator>>=(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_compare_three_way_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator<=>(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_and_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator&&(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_or_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator||(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_C_comma_MR_CSharp_TestOpsB(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator,(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_arrow_star(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator->*(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_arrow(MR_CSharp_TestOpsB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator->();
}

int MR_CSharp_TestOpsB_call(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator()(
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

int MR_CSharp_TestOpsB_index(MR_CSharp_TestOpsB *_this, MR_C_PassBy _1_pass_by, MR_CSharp_TestOpsB *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsB *)(_this)).operator[](
        (MRBINDC_CLASSARG_COPY(_1, (MR::CSharp::TestOpsB), MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::CSharp::TestOpsB) MRBINDC_CLASSARG_END(_1, MR::CSharp::TestOpsB))
    );
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_ConstructFromAnother(const MR_CSharp_TestOpsC *_other)
{
    return (MR_CSharp_TestOpsC *)new MR::CSharp::TestOpsC(MR::CSharp::TestOpsC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsC(*(MR::CSharp::TestOpsC *)_other))
    ));
}

const MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetPtr(const MR_CSharp_TestOpsC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_TestOpsC *)(((const MR::CSharp::TestOpsC *)ptr) + i);
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_OffsetMutablePtr(MR_CSharp_TestOpsC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_TestOpsC *)(((MR::CSharp::TestOpsC *)ptr) + i);
}

void MR_CSharp_TestOpsC_Destroy(const MR_CSharp_TestOpsC *_this)
{
    delete ((const MR::CSharp::TestOpsC *)_this);
}

void MR_CSharp_TestOpsC_DestroyArray(const MR_CSharp_TestOpsC *_this)
{
    delete[] ((const MR::CSharp::TestOpsC *)_this);
}

MR_CSharp_TestOpsC *MR_CSharp_TestOpsC_AssignFromAnother(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsC *_other)
{
    return (MR_CSharp_TestOpsC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator=(
        mrbindc_details::unmove(((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::TestOpsC(*(MR::CSharp::TestOpsC *)_other)))
    ));
}

void MR_C_pos_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+();
}

void MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_neg_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-();
}

void MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_deref_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*();
}

void MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator/(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator%(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator^(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_addressof_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&();
}

void MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator|(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_compl_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator~();
}

void MR_C_not_MR_CSharp_TestOpsC(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator!();
}

void MR_CSharp_TestOpsC_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_add_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator+=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_sub_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator-=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_mul_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator*=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_div_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator/=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_mod_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator%=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_xor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator^=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_bitand_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_bitor_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator|=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator>>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_lshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<<=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_rshift_assign(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator>>=(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator<=>(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator&&(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator||(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator,(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_arrow_star(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator->*(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_arrow(MR_CSharp_TestOpsC *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator->();
}

void MR_CSharp_TestOpsC_call(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator()(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
}

void MR_CSharp_TestOpsC_index(MR_CSharp_TestOpsC *_this, const MR_CSharp_TestOpsA *_1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TestOpsC *)(_this)).operator[](
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), MR::CSharp::TestOpsA(*(MR::CSharp::TestOpsA *)_1))
    );
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
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA());
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IndexerA *)(new MR::CSharp::IndexerA[num_elems]{});
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFrom(int x)
{
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA{
        x
    });
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetPtr(const MR_CSharp_IndexerA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IndexerA *)(((const MR::CSharp::IndexerA *)ptr) + i);
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_OffsetMutablePtr(MR_CSharp_IndexerA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IndexerA *)(((MR::CSharp::IndexerA *)ptr) + i);
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_ConstructFromAnother(const MR_CSharp_IndexerA *_other)
{
    return (MR_CSharp_IndexerA *)new MR::CSharp::IndexerA(MR::CSharp::IndexerA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)_other))
    ));
}

void MR_CSharp_IndexerA_Destroy(const MR_CSharp_IndexerA *_this)
{
    delete ((const MR::CSharp::IndexerA *)_this);
}

void MR_CSharp_IndexerA_DestroyArray(const MR_CSharp_IndexerA *_this)
{
    delete[] ((const MR::CSharp::IndexerA *)_this);
}

MR_CSharp_IndexerA *MR_CSharp_IndexerA_AssignFromAnother(MR_CSharp_IndexerA *_this, const MR_CSharp_IndexerA *_other)
{
    return (MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)_other))
    ));
}

int *MR_CSharp_IndexerA_index(MR_CSharp_IndexerA *_this, int i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerA *)(_this)).operator[](
        i
    ));
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
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB());
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IndexerB *)(new MR::CSharp::IndexerB[num_elems]{});
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFrom(const MR_CSharp_IndexerA *a)
{
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::IndexerA(*(MR::CSharp::IndexerA *)a))
    });
}

const MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetPtr(const MR_CSharp_IndexerB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IndexerB *)(((const MR::CSharp::IndexerB *)ptr) + i);
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_OffsetMutablePtr(MR_CSharp_IndexerB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IndexerB *)(((MR::CSharp::IndexerB *)ptr) + i);
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_ConstructFromAnother(const MR_CSharp_IndexerB *_other)
{
    return (MR_CSharp_IndexerB *)new MR::CSharp::IndexerB(MR::CSharp::IndexerB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerB(*(MR::CSharp::IndexerB *)_other))
    ));
}

void MR_CSharp_IndexerB_Destroy(const MR_CSharp_IndexerB *_this)
{
    delete ((const MR::CSharp::IndexerB *)_this);
}

void MR_CSharp_IndexerB_DestroyArray(const MR_CSharp_IndexerB *_this)
{
    delete[] ((const MR::CSharp::IndexerB *)_this);
}

MR_CSharp_IndexerB *MR_CSharp_IndexerB_AssignFromAnother(MR_CSharp_IndexerB *_this, const MR_CSharp_IndexerB *_other)
{
    return (MR_CSharp_IndexerB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerB(*(MR::CSharp::IndexerB *)_other))
    ));
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_1(const MR_CSharp_IndexerB *_this, int i)
{
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[](
        i
    ));
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_2(const MR_CSharp_IndexerB *_this, int i, int j)
{
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[](
        i,
        j
    ));
}

const MR_CSharp_IndexerA *MR_CSharp_IndexerB_index_0(const MR_CSharp_IndexerB *_this)
{
    return (const MR_CSharp_IndexerA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerB *)(_this)).operator[]());
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstruct(void)
{
    return (MR_CSharp_IndexerC *)new MR::CSharp::IndexerC(MR::CSharp::IndexerC());
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IndexerC *)(new MR::CSharp::IndexerC[num_elems]{});
}

const MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetPtr(const MR_CSharp_IndexerC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IndexerC *)(((const MR::CSharp::IndexerC *)ptr) + i);
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_OffsetMutablePtr(MR_CSharp_IndexerC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IndexerC *)(((MR::CSharp::IndexerC *)ptr) + i);
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_ConstructFromAnother(const MR_CSharp_IndexerC *_other)
{
    return (MR_CSharp_IndexerC *)new MR::CSharp::IndexerC(MR::CSharp::IndexerC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerC(*(MR::CSharp::IndexerC *)_other))
    ));
}

void MR_CSharp_IndexerC_Destroy(const MR_CSharp_IndexerC *_this)
{
    delete ((const MR::CSharp::IndexerC *)_this);
}

void MR_CSharp_IndexerC_DestroyArray(const MR_CSharp_IndexerC *_this)
{
    delete[] ((const MR::CSharp::IndexerC *)_this);
}

MR_CSharp_IndexerC *MR_CSharp_IndexerC_AssignFromAnother(MR_CSharp_IndexerC *_this, const MR_CSharp_IndexerC *_other)
{
    return (MR_CSharp_IndexerC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IndexerC(*(MR::CSharp::IndexerC *)_other))
    ));
}

int MR_CSharp_IndexerC_index(MR_CSharp_IndexerC *_this, int i)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IndexerC *)(_this)).operator[](
        i
    );
}

float MR_CSharp_IndexerC_index_const(const MR_CSharp_IndexerC *_this, int i)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IndexerC *)(_this)).operator[](
        i
    );
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstruct(void)
{
    return (MR_CSharp_ConvOp *)new MR::CSharp::ConvOp(MR::CSharp::ConvOp());
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvOp *)(new MR::CSharp::ConvOp[num_elems]{});
}

const MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetPtr(const MR_CSharp_ConvOp *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvOp *)(((const MR::CSharp::ConvOp *)ptr) + i);
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_OffsetMutablePtr(MR_CSharp_ConvOp *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvOp *)(((MR::CSharp::ConvOp *)ptr) + i);
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_ConstructFromAnother(const MR_CSharp_ConvOp *_other)
{
    return (MR_CSharp_ConvOp *)new MR::CSharp::ConvOp(MR::CSharp::ConvOp(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOp(*(MR::CSharp::ConvOp *)_other))
    ));
}

void MR_CSharp_ConvOp_Destroy(const MR_CSharp_ConvOp *_this)
{
    delete ((const MR::CSharp::ConvOp *)_this);
}

void MR_CSharp_ConvOp_DestroyArray(const MR_CSharp_ConvOp *_this)
{
    delete[] ((const MR::CSharp::ConvOp *)_this);
}

int MR_CSharp_ConvOp_ConvertTo_int(MR_CSharp_ConvOp *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)));
}

float MR_CSharp_ConvOp_ConvertTo_float(MR_CSharp_ConvOp *_this)
{
    return (float)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)));
}

MR_CSharp_ConvOp *MR_CSharp_ConvOp_AssignFromAnother(MR_CSharp_ConvOp *_this, const MR_CSharp_ConvOp *_other)
{
    return (MR_CSharp_ConvOp *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOp *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOp(*(MR::CSharp::ConvOp *)_other))
    ));
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstruct(void)
{
    return (MR_CSharp_ConvOpToRef *)new MR::CSharp::ConvOpToRef(MR::CSharp::ConvOpToRef());
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvOpToRef *)(new MR::CSharp::ConvOpToRef[num_elems]{});
}

const MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetPtr(const MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvOpToRef *)(((const MR::CSharp::ConvOpToRef *)ptr) + i);
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_OffsetMutablePtr(MR_CSharp_ConvOpToRef *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvOpToRef *)(((MR::CSharp::ConvOpToRef *)ptr) + i);
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_ConstructFromAnother(const MR_CSharp_ConvOpToRef *_other)
{
    return (MR_CSharp_ConvOpToRef *)new MR::CSharp::ConvOpToRef(MR::CSharp::ConvOpToRef(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOpToRef(*(MR::CSharp::ConvOpToRef *)_other))
    ));
}

void MR_CSharp_ConvOpToRef_Destroy(const MR_CSharp_ConvOpToRef *_this)
{
    delete ((const MR::CSharp::ConvOpToRef *)_this);
}

void MR_CSharp_ConvOpToRef_DestroyArray(const MR_CSharp_ConvOpToRef *_this)
{
    delete[] ((const MR::CSharp::ConvOpToRef *)_this);
}

int MR_CSharp_ConvOpToRef_ConvertTo_int(MR_CSharp_ConvOpToRef *_this)
{
    return (int)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this)));
}

float *MR_CSharp_ConvOpToRef_ConvertTo_float_ref(MR_CSharp_ConvOpToRef *_this)
{
    return std::addressof((float &)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this))));
}

unsigned short *MR_CSharp_ConvOpToRef_ConvertTo_unsigned_short_ref(MR_CSharp_ConvOpToRef *_this)
{
    return std::addressof((unsigned short &)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this))));
}

MR_CSharp_ConvOpToRef *MR_CSharp_ConvOpToRef_AssignFromAnother(MR_CSharp_ConvOpToRef *_this, const MR_CSharp_ConvOpToRef *_other)
{
    return (MR_CSharp_ConvOpToRef *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvOpToRef *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvOpToRef(*(MR::CSharp::ConvOpToRef *)_other))
    ));
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstruct(void)
{
    return (MR_CSharp_StringConvString *)new MR::CSharp::StringConvString(MR::CSharp::StringConvString());
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StringConvString *)(new MR::CSharp::StringConvString[num_elems]{});
}

const MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetPtr(const MR_CSharp_StringConvString *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StringConvString *)(((const MR::CSharp::StringConvString *)ptr) + i);
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_OffsetMutablePtr(MR_CSharp_StringConvString *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StringConvString *)(((MR::CSharp::StringConvString *)ptr) + i);
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_ConstructFromAnother(const MR_CSharp_StringConvString *_other)
{
    return (MR_CSharp_StringConvString *)new MR::CSharp::StringConvString(MR::CSharp::StringConvString(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvString(*(MR::CSharp::StringConvString *)_other))
    ));
}

void MR_CSharp_StringConvString_Destroy(const MR_CSharp_StringConvString *_this)
{
    delete ((const MR::CSharp::StringConvString *)_this);
}

void MR_CSharp_StringConvString_DestroyArray(const MR_CSharp_StringConvString *_this)
{
    delete[] ((const MR::CSharp::StringConvString *)_this);
}

MR_C_std_string *MR_CSharp_StringConvString_ConvertTo_std_string(MR_CSharp_StringConvString *_this)
{
    return (MR_C_std_string *)new std::string((std::string)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvString *)(_this))));
}

MR_CSharp_StringConvString *MR_CSharp_StringConvString_AssignFromAnother(MR_CSharp_StringConvString *_this, const MR_CSharp_StringConvString *_other)
{
    return (MR_CSharp_StringConvString *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvString *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvString(*(MR::CSharp::StringConvString *)_other))
    ));
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstruct(void)
{
    return (MR_CSharp_StringConvStringView *)new MR::CSharp::StringConvStringView(MR::CSharp::StringConvStringView());
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StringConvStringView *)(new MR::CSharp::StringConvStringView[num_elems]{});
}

const MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetPtr(const MR_CSharp_StringConvStringView *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StringConvStringView *)(((const MR::CSharp::StringConvStringView *)ptr) + i);
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_OffsetMutablePtr(MR_CSharp_StringConvStringView *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StringConvStringView *)(((MR::CSharp::StringConvStringView *)ptr) + i);
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_ConstructFromAnother(const MR_CSharp_StringConvStringView *_other)
{
    return (MR_CSharp_StringConvStringView *)new MR::CSharp::StringConvStringView(MR::CSharp::StringConvStringView(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvStringView(*(MR::CSharp::StringConvStringView *)_other))
    ));
}

void MR_CSharp_StringConvStringView_Destroy(const MR_CSharp_StringConvStringView *_this)
{
    delete ((const MR::CSharp::StringConvStringView *)_this);
}

void MR_CSharp_StringConvStringView_DestroyArray(const MR_CSharp_StringConvStringView *_this)
{
    delete[] ((const MR::CSharp::StringConvStringView *)_this);
}

MR_C_std_string_view *MR_CSharp_StringConvStringView_ConvertTo_std_string_view(const MR_CSharp_StringConvStringView *_this)
{
    return (MR_C_std_string_view *)new std::string_view((std::string_view)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::StringConvStringView *)(_this))));
}

MR_CSharp_StringConvStringView *MR_CSharp_StringConvStringView_AssignFromAnother(MR_CSharp_StringConvStringView *_this, const MR_CSharp_StringConvStringView *_other)
{
    return (MR_CSharp_StringConvStringView *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvStringView *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvStringView(*(MR::CSharp::StringConvStringView *)_other))
    ));
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstruct(void)
{
    return (MR_CSharp_StringConvFsPath *)new MR::CSharp::StringConvFsPath(MR::CSharp::StringConvFsPath());
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_StringConvFsPath *)(new MR::CSharp::StringConvFsPath[num_elems]{});
}

const MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetPtr(const MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_StringConvFsPath *)(((const MR::CSharp::StringConvFsPath *)ptr) + i);
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_OffsetMutablePtr(MR_CSharp_StringConvFsPath *ptr, ptrdiff_t i)
{
    return (MR_CSharp_StringConvFsPath *)(((MR::CSharp::StringConvFsPath *)ptr) + i);
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_ConstructFromAnother(const MR_CSharp_StringConvFsPath *_other)
{
    return (MR_CSharp_StringConvFsPath *)new MR::CSharp::StringConvFsPath(MR::CSharp::StringConvFsPath(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvFsPath(*(MR::CSharp::StringConvFsPath *)_other))
    ));
}

void MR_CSharp_StringConvFsPath_Destroy(const MR_CSharp_StringConvFsPath *_this)
{
    delete ((const MR::CSharp::StringConvFsPath *)_this);
}

void MR_CSharp_StringConvFsPath_DestroyArray(const MR_CSharp_StringConvFsPath *_this)
{
    delete[] ((const MR::CSharp::StringConvFsPath *)_this);
}

MR_C_std_filesystem_path *MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path(MR_CSharp_StringConvFsPath *_this)
{
    return (MR_C_std_filesystem_path *)new std::filesystem::path((std::filesystem::path)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvFsPath *)(_this))));
}

MR_CSharp_StringConvFsPath *MR_CSharp_StringConvFsPath_AssignFromAnother(MR_CSharp_StringConvFsPath *_this, const MR_CSharp_StringConvFsPath *_other)
{
    return (MR_CSharp_StringConvFsPath *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::StringConvFsPath *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::StringConvFsPath(*(MR::CSharp::StringConvFsPath *)_other))
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstruct(void)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor());
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvCtor *)(new MR::CSharp::ConvCtor[num_elems]{});
}

const MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetPtr(const MR_CSharp_ConvCtor *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtor *)(((const MR::CSharp::ConvCtor *)ptr) + i);
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_OffsetMutablePtr(MR_CSharp_ConvCtor *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtor *)(((MR::CSharp::ConvCtor *)ptr) + i);
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_ConstructFromAnother(const MR_CSharp_ConvCtor *_other)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtor(*(MR::CSharp::ConvCtor *)_other))
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_int(int _1)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_int(int _1, int _2)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        _2
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_short(short _1, const int *_2)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        (_2 ? *_2 : static_cast<int>(42))
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_1_float(float _1)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1
    ));
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_Construct_2_float(float _1, float _2)
{
    return (MR_CSharp_ConvCtor *)new MR::CSharp::ConvCtor(MR::CSharp::ConvCtor(
        _1,
        _2
    ));
}

void MR_CSharp_ConvCtor_Destroy(const MR_CSharp_ConvCtor *_this)
{
    delete ((const MR::CSharp::ConvCtor *)_this);
}

void MR_CSharp_ConvCtor_DestroyArray(const MR_CSharp_ConvCtor *_this)
{
    delete[] ((const MR::CSharp::ConvCtor *)_this);
}

MR_CSharp_ConvCtor *MR_CSharp_ConvCtor_AssignFromAnother(MR_CSharp_ConvCtor *_this, const MR_CSharp_ConvCtor *_other)
{
    return (MR_CSharp_ConvCtor *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtor *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtor(*(MR::CSharp::ConvCtor *)_other))
    ));
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_Construct(const int *_1)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorWithDefArg *)new MR::CSharp::ConvCtorWithDefArg(MR::CSharp::ConvCtorWithDefArg(
        (_1 ? *_1 : static_cast<int>(42))
    ));
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvCtorWithDefArg *)(new MR::CSharp::ConvCtorWithDefArg[num_elems]{});
}

const MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetPtr(const MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtorWithDefArg *)(((const MR::CSharp::ConvCtorWithDefArg *)ptr) + i);
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_OffsetMutablePtr(MR_CSharp_ConvCtorWithDefArg *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtorWithDefArg *)(((MR::CSharp::ConvCtorWithDefArg *)ptr) + i);
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother(const MR_CSharp_ConvCtorWithDefArg *_other)
{
    return (MR_CSharp_ConvCtorWithDefArg *)new MR::CSharp::ConvCtorWithDefArg(MR::CSharp::ConvCtorWithDefArg(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorWithDefArg(*(MR::CSharp::ConvCtorWithDefArg *)_other))
    ));
}

void MR_CSharp_ConvCtorWithDefArg_Destroy(const MR_CSharp_ConvCtorWithDefArg *_this)
{
    delete ((const MR::CSharp::ConvCtorWithDefArg *)_this);
}

void MR_CSharp_ConvCtorWithDefArg_DestroyArray(const MR_CSharp_ConvCtorWithDefArg *_this)
{
    delete[] ((const MR::CSharp::ConvCtorWithDefArg *)_this);
}

MR_CSharp_ConvCtorWithDefArg *MR_CSharp_ConvCtorWithDefArg_AssignFromAnother(MR_CSharp_ConvCtorWithDefArg *_this, const MR_CSharp_ConvCtorWithDefArg *_other)
{
    return (MR_CSharp_ConvCtorWithDefArg *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorWithDefArg *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorWithDefArg(*(MR::CSharp::ConvCtorWithDefArg *)_other))
    ));
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other)
{
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)new MR::CSharp::ConvCtorNonTrivialRestricted(MR::CSharp::ConvCtorNonTrivialRestricted(
        (MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivialRestricted), MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivialRestricted))
    ));
}

const MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetPtr(const MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtorNonTrivialRestricted *)(((const MR::CSharp::ConvCtorNonTrivialRestricted *)ptr) + i);
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivialRestricted *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)(((MR::CSharp::ConvCtorNonTrivialRestricted *)ptr) + i);
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_Construct(int _1)
{
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)new MR::CSharp::ConvCtorNonTrivialRestricted(MR::CSharp::ConvCtorNonTrivialRestricted(
        _1
    ));
}

void MR_CSharp_ConvCtorNonTrivialRestricted_Destroy(const MR_CSharp_ConvCtorNonTrivialRestricted *_this)
{
    delete ((const MR::CSharp::ConvCtorNonTrivialRestricted *)_this);
}

void MR_CSharp_ConvCtorNonTrivialRestricted_DestroyArray(const MR_CSharp_ConvCtorNonTrivialRestricted *_this)
{
    delete[] ((const MR::CSharp::ConvCtorNonTrivialRestricted *)_this);
}

MR_CSharp_ConvCtorNonTrivialRestricted *MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother(MR_CSharp_ConvCtorNonTrivialRestricted *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivialRestricted *_other)
{
    return (MR_CSharp_ConvCtorNonTrivialRestricted *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorNonTrivialRestricted *)(_this)).operator=(
        (MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivialRestricted), MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivialRestricted) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivialRestricted))
    ));
}

MR_CSharp_ConvCtorExposed MR_CSharp_ConvCtorExposed_Construct(int _1)
{
    return MRBINDC_BIT_CAST((MR_CSharp_ConvCtorExposed), MR::CSharp::ConvCtorExposed(
        _1
    ));
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other)
{
    return (MR_CSharp_ConvCtorCopyButNoMove *)new MR::CSharp::ConvCtorCopyButNoMove(MR::CSharp::ConvCtorCopyButNoMove(
        (MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorCopyButNoMove), MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorCopyButNoMove))
    ));
}

const MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetPtr(const MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtorCopyButNoMove *)(((const MR::CSharp::ConvCtorCopyButNoMove *)ptr) + i);
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_OffsetMutablePtr(MR_CSharp_ConvCtorCopyButNoMove *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtorCopyButNoMove *)(((MR::CSharp::ConvCtorCopyButNoMove *)ptr) + i);
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_Construct(int _1)
{
    return (MR_CSharp_ConvCtorCopyButNoMove *)new MR::CSharp::ConvCtorCopyButNoMove(MR::CSharp::ConvCtorCopyButNoMove(
        _1
    ));
}

void MR_CSharp_ConvCtorCopyButNoMove_Destroy(const MR_CSharp_ConvCtorCopyButNoMove *_this)
{
    delete ((const MR::CSharp::ConvCtorCopyButNoMove *)_this);
}

void MR_CSharp_ConvCtorCopyButNoMove_DestroyArray(const MR_CSharp_ConvCtorCopyButNoMove *_this)
{
    delete[] ((const MR::CSharp::ConvCtorCopyButNoMove *)_this);
}

MR_CSharp_ConvCtorCopyButNoMove *MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother(MR_CSharp_ConvCtorCopyButNoMove *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorCopyButNoMove *_other)
{
    return (MR_CSharp_ConvCtorCopyButNoMove *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorCopyButNoMove *)(_this)).operator=(
        mrbindc_details::unmove((MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorCopyButNoMove), MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorCopyButNoMove) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorCopyButNoMove)))
    ));
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstruct(void)
{
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial());
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvCtorTrivial *)(new MR::CSharp::ConvCtorTrivial[num_elems]{});
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetPtr(const MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtorTrivial *)(((const MR::CSharp::ConvCtorTrivial *)ptr) + i);
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorTrivial *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtorTrivial *)(((MR::CSharp::ConvCtorTrivial *)ptr) + i);
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_ConstructFromAnother(const MR_CSharp_ConvCtorTrivial *_other)
{
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)_other))
    ));
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_Construct(int _1)
{
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(MR::CSharp::ConvCtorTrivial(
        _1
    ));
}

void MR_CSharp_ConvCtorTrivial_Destroy(const MR_CSharp_ConvCtorTrivial *_this)
{
    delete ((const MR::CSharp::ConvCtorTrivial *)_this);
}

void MR_CSharp_ConvCtorTrivial_DestroyArray(const MR_CSharp_ConvCtorTrivial *_this)
{
    delete[] ((const MR::CSharp::ConvCtorTrivial *)_this);
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_ConvCtorTrivial_AssignFromAnother(MR_CSharp_ConvCtorTrivial *_this, const MR_CSharp_ConvCtorTrivial *_other)
{
    return (MR_CSharp_ConvCtorTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorTrivial *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)_other))
    ));
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)new MR::CSharp::ConvCtorTrivial(::MR::CSharp::test_class_convtrivial(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)a)),
        (b ? MR::CSharp::ConvCtorTrivial(*(MR::CSharp::ConvCtorTrivial *)b) : static_cast<MR::CSharp::ConvCtorTrivial>(MR::CSharp::ConvCtorTrivial{}))
    ));
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ref(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)std::addressof(::MR::CSharp::test_class_convtrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ConvCtorTrivial *)(a)),
        (b ? *(MR::CSharp::ConvCtorTrivial *)(b) : static_cast<MR::CSharp::ConvCtorTrivial &>(default_convtrivial))
    ));
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cref(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorTrivial *)std::addressof(::MR::CSharp::test_class_convtrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ConvCtorTrivial *)(a)),
        (b ? *(const MR::CSharp::ConvCtorTrivial *)(b) : static_cast<const MR::CSharp::ConvCtorTrivial &>(default_convtrivial))
    ));
}

MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_ptr(MR_CSharp_ConvCtorTrivial *a, MR_CSharp_ConvCtorTrivial *b, MR_CSharp_ConvCtorTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorTrivial *)(::MR::CSharp::test_class_convtrivial_ptr(
        ((MR::CSharp::ConvCtorTrivial *)a),
        ((MR::CSharp::ConvCtorTrivial *)b),
        (c ? (MR::CSharp::ConvCtorTrivial *)(*c) : static_cast<MR::CSharp::ConvCtorTrivial *>(&default_convtrivial))
    ));
}

const MR_CSharp_ConvCtorTrivial *MR_CSharp_test_class_convtrivial_cptr(const MR_CSharp_ConvCtorTrivial *a, const MR_CSharp_ConvCtorTrivial *b, const MR_CSharp_ConvCtorTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorTrivial *)(::MR::CSharp::test_class_convtrivial_cptr(
        ((const MR::CSharp::ConvCtorTrivial *)a),
        ((const MR::CSharp::ConvCtorTrivial *)b),
        (c ? (const MR::CSharp::ConvCtorTrivial *)(*c) : static_cast<const MR::CSharp::ConvCtorTrivial *>(&default_convtrivial))
    ));
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstruct(void)
{
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial());
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ConvCtorNonTrivial *)(new MR::CSharp::ConvCtorNonTrivial[num_elems]{});
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetPtr(const MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ConvCtorNonTrivial *)(((const MR::CSharp::ConvCtorNonTrivial *)ptr) + i);
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_OffsetMutablePtr(MR_CSharp_ConvCtorNonTrivial *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ConvCtorNonTrivial *)(((MR::CSharp::ConvCtorNonTrivial *)ptr) + i);
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other)
{
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivial))
    ));
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_Construct(int _1)
{
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(MR::CSharp::ConvCtorNonTrivial(
        _1
    ));
}

void MR_CSharp_ConvCtorNonTrivial_Destroy(const MR_CSharp_ConvCtorNonTrivial *_this)
{
    delete ((const MR::CSharp::ConvCtorNonTrivial *)_this);
}

void MR_CSharp_ConvCtorNonTrivial_DestroyArray(const MR_CSharp_ConvCtorNonTrivial *_this)
{
    delete[] ((const MR::CSharp::ConvCtorNonTrivial *)_this);
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(MR_CSharp_ConvCtorNonTrivial *_this, MR_C_PassBy _other_pass_by, MR_CSharp_ConvCtorNonTrivial *_other)
{
    return (MR_CSharp_ConvCtorNonTrivial *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConvCtorNonTrivial *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(_other, MR::CSharp::ConvCtorNonTrivial))
    ));
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial(MR_C_PassBy a_pass_by, MR_CSharp_ConvCtorNonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_ConvCtorNonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorNonTrivial *)new MR::CSharp::ConvCtorNonTrivial(::MR::CSharp::test_class_convnontrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(a, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(a, MR::CSharp::ConvCtorNonTrivial)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::ConvCtorNonTrivial), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (MR::CSharp::ConvCtorNonTrivial{}), MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, MR::CSharp::ConvCtorNonTrivial) MRBINDC_CLASSARG_END(b, MR::CSharp::ConvCtorNonTrivial))
    ));
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ref(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorNonTrivial *)std::addressof(::MR::CSharp::test_class_convnontrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ConvCtorNonTrivial *)(a)),
        (b ? *(MR::CSharp::ConvCtorNonTrivial *)(b) : static_cast<MR::CSharp::ConvCtorNonTrivial &>(default_convnontrivial))
    ));
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cref(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorNonTrivial *)std::addressof(::MR::CSharp::test_class_convnontrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ConvCtorNonTrivial *)(a)),
        (b ? *(const MR::CSharp::ConvCtorNonTrivial *)(b) : static_cast<const MR::CSharp::ConvCtorNonTrivial &>(default_convnontrivial))
    ));
}

MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_ptr(MR_CSharp_ConvCtorNonTrivial *a, MR_CSharp_ConvCtorNonTrivial *b, MR_CSharp_ConvCtorNonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ConvCtorNonTrivial *)(::MR::CSharp::test_class_convnontrivial_ptr(
        ((MR::CSharp::ConvCtorNonTrivial *)a),
        ((MR::CSharp::ConvCtorNonTrivial *)b),
        (c ? (MR::CSharp::ConvCtorNonTrivial *)(*c) : static_cast<MR::CSharp::ConvCtorNonTrivial *>(&default_convnontrivial))
    ));
}

const MR_CSharp_ConvCtorNonTrivial *MR_CSharp_test_class_convnontrivial_cptr(const MR_CSharp_ConvCtorNonTrivial *a, const MR_CSharp_ConvCtorNonTrivial *b, const MR_CSharp_ConvCtorNonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ConvCtorNonTrivial *)(::MR::CSharp::test_class_convnontrivial_cptr(
        ((const MR::CSharp::ConvCtorNonTrivial *)a),
        ((const MR::CSharp::ConvCtorNonTrivial *)b),
        (c ? (const MR::CSharp::ConvCtorNonTrivial *)(*c) : static_cast<const MR::CSharp::ConvCtorNonTrivial *>(&default_convnontrivial))
    ));
}

void MR_CSharp_ExposedLayout_foo(MR_CSharp_ExposedLayout *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).foo();
}

void MR_CSharp_ExposedLayout_bar(const MR_CSharp_ExposedLayout *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).bar();
}

void MR_CSharp_ExposedLayout_blah(void)
{
    MR::CSharp::ExposedLayout::blah();
}

void MR_C_incr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator++();
}

int MR_C_add_MR_CSharp_ExposedLayout_ref_int(MR_CSharp_ExposedLayout *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator+(
        _1
    );
}

MR_CSharp_ExposedLayout *MR_C_mul_MR_CSharp_ExposedLayout_int(const MR_CSharp_ExposedLayout *_this, int _1)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator*(
        _1
    ));
}

const MR_CSharp_ExposedLayout *MR_C_add_const_MR_CSharp_ExposedLayout_ref_int(const MR_CSharp_ExposedLayout *_this, int _1)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator+(
        _1
    ));
}

bool MR_C_less_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *_this, const MR_CSharp_ExposedLayout *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_1))
    );
}

bool MR_C_equal_MR_CSharp_ExposedLayout_float(MR_CSharp_ExposedLayout *_this, float _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator==(
        _1
    );
}

bool MR_C_less_MR_CSharp_ExposedLayout_char(MR_CSharp_ExposedLayout *_this, char _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayout *)(_this)).operator<(
        _1
    );
}

int MR_C_sub_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout _2)
{
    return operator-(
        _1,
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _2)
    );
}

int MR_C_div_int_MR_CSharp_ExposedLayout(int _1, MR_CSharp_ExposedLayout *_2)
{
    return operator/(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ExposedLayout *)(_2))
    );
}

int MR_C_mod_int_MR_CSharp_ExposedLayout(int _1, const MR_CSharp_ExposedLayout *_2)
{
    return operator%(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_2))
    );
}

void MR_C_decr_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout _1)
{
    MR::CSharp::operator--(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _1)
    );
}

MR_CSharp_ExposedLayout MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout a, const MR_CSharp_ExposedLayout *b)
{
    using namespace MR;
    using namespace CSharp;
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayout), ::MR::CSharp::test_exposed(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), a),
        (b ? MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), *b) : MR::CSharp::ExposedLayout(default_exposed))
    ));
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)std::addressof(::MR::CSharp::test_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ExposedLayout *)(a)),
        (b ? *(MR::CSharp::ExposedLayout *)(b) : static_cast<MR::CSharp::ExposedLayout &>(default_exposed))
    ));
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)std::addressof(::MR::CSharp::test_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ExposedLayout *)(a)),
        (b ? *(const MR::CSharp::ExposedLayout *)(b) : static_cast<const MR::CSharp::ExposedLayout &>(default_exposed))
    ));
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_rref(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_exposed_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(MR::CSharp::ExposedLayout *)(a))),
        (b ? std::move(*(MR::CSharp::ExposedLayout *)(b)) : static_cast<MR::CSharp::ExposedLayout &&>((MR::CSharp::ExposedLayout &&)default_exposed))
    )));
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_crref(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(::MR::CSharp::test_exposed_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*(const MR::CSharp::ExposedLayout *)(a))),
        (b ? std::move(*(const MR::CSharp::ExposedLayout *)(b)) : static_cast<const MR::CSharp::ExposedLayout &&>((MR::CSharp::ExposedLayout &&)default_exposed))
    )));
}

MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(MR_CSharp_ExposedLayout *a, MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayout *)(::MR::CSharp::test_exposed_ptr(
        ((MR::CSharp::ExposedLayout *)a),
        ((MR::CSharp::ExposedLayout *)b),
        (c ? (MR::CSharp::ExposedLayout *)(*c) : static_cast<MR::CSharp::ExposedLayout *>(&default_exposed))
    ));
}

const MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(const MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, const MR_CSharp_ExposedLayout *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayout *)(::MR::CSharp::test_exposed_cptr(
        ((const MR::CSharp::ExposedLayout *)a),
        ((const MR::CSharp::ExposedLayout *)b),
        (c ? (const MR::CSharp::ExposedLayout *)(*c) : static_cast<const MR::CSharp::ExposedLayout *>(&default_exposed))
    ));
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_CSharp_test_exposed_vec(void)
{
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(::MR::CSharp::test_exposed_vec());
}

MR_CSharp_NonTrivial *MR_CSharp_asave_ref_in_exposed_layout(MR_CSharp_ExposedLayout *ref)
{
    return (MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::asave_ref_in_exposed_layout(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::ExposedLayout *)(ref))
    ));
}

void MR_CSharp_ExposedLayoutSh_foo(MR_CSharp_ExposedLayoutSh *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).foo();
}

void MR_CSharp_ExposedLayoutSh_bar(const MR_CSharp_ExposedLayoutSh *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).bar();
}

void MR_CSharp_ExposedLayoutSh_blah(void)
{
    MR::CSharp::ExposedLayoutSh::blah();
}

void MR_C_incr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator++();
}

int MR_C_add_MR_CSharp_ExposedLayoutSh_int(MR_CSharp_ExposedLayoutSh *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator+(
        _1
    );
}

int MR_C_mul_MR_CSharp_ExposedLayoutSh_int(const MR_CSharp_ExposedLayoutSh *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator*(
        _1
    );
}

bool MR_C_less_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator<(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_1))
    );
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh_float(MR_CSharp_ExposedLayoutSh *_this, float _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        _1
    );
}

bool MR_C_less_MR_CSharp_ExposedLayoutSh_char(MR_CSharp_ExposedLayoutSh *_this, char _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_this)).operator<(
        _1
    );
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayout *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_1))
    );
}

bool MR_C_equal_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *_this, const MR_CSharp_ExposedLayoutSh *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_this)).operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_1))
    );
}

int MR_C_sub_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh _2)
{
    return operator-(
        _1,
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), _2)
    );
}

int MR_C_div_int_MR_CSharp_ExposedLayoutSh(int _1, MR_CSharp_ExposedLayoutSh *_2)
{
    return operator/(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(_2))
    );
}

int MR_C_mod_int_MR_CSharp_ExposedLayoutSh(int _1, const MR_CSharp_ExposedLayoutSh *_2)
{
    return operator%(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(_2))
    );
}

void MR_C_decr_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh _1)
{
    MR::CSharp::operator--(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), _1)
    );
}

MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *MR_CSharp_make_exposed_sh(void)
{
    return (MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh *)new std::shared_ptr<MR::CSharp::ExposedLayoutSh>(::MR::CSharp::make_exposed_sh());
}

MR_CSharp_ExposedLayoutSh MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh a, const MR_CSharp_ExposedLayoutSh *b)
{
    using namespace MR;
    using namespace CSharp;
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutSh), ::MR::CSharp::test_exposed(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), a),
        (b ? MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *b) : MR::CSharp::ExposedLayoutSh(default_exposed_sh))
    ));
}

MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::ExposedLayoutSh *)(a)),
        (b ? *(MR::CSharp::ExposedLayoutSh *)(b) : static_cast<MR::CSharp::ExposedLayoutSh &>(default_exposed_sh))
    ));
}

const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::ExposedLayoutSh *)(a)),
        (b ? *(const MR::CSharp::ExposedLayoutSh *)(b) : static_cast<const MR::CSharp::ExposedLayoutSh &>(default_exposed_sh))
    ));
}

MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(MR_CSharp_ExposedLayoutSh *a, MR_CSharp_ExposedLayoutSh *b, MR_CSharp_ExposedLayoutSh *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_exposed_ptr(
        ((MR::CSharp::ExposedLayoutSh *)a),
        ((MR::CSharp::ExposedLayoutSh *)b),
        (c ? (MR::CSharp::ExposedLayoutSh *)(*c) : static_cast<MR::CSharp::ExposedLayoutSh *>(&default_exposed_sh))
    ));
}

const MR_CSharp_ExposedLayoutSh *MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(const MR_CSharp_ExposedLayoutSh *a, const MR_CSharp_ExposedLayoutSh *b, const MR_CSharp_ExposedLayoutSh *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_exposed_cptr(
        ((const MR::CSharp::ExposedLayoutSh *)a),
        ((const MR::CSharp::ExposedLayoutSh *)b),
        (c ? (const MR::CSharp::ExposedLayoutSh *)(*c) : static_cast<const MR::CSharp::ExposedLayoutSh *>(&default_exposed_sh))
    ));
}

MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_2(int _1, int _2)
{
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutB), MR::CSharp::ExposedLayoutB(
        _1,
        _2
    ));
}

MR_CSharp_ExposedLayoutB MR_CSharp_ExposedLayoutB_Construct_1(const MR_CSharp_A *_1)
{
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutB), MR::CSharp::ExposedLayoutB(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::A *)(_1))
    ));
}

bool MR_C_equal_MR_CSharp_ExposedLayoutB(const MR_CSharp_ExposedLayoutB *_1, const MR_CSharp_ExposedLayoutB *_2)
{
    return operator==(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayoutB *)(_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ExposedLayoutB *)(_2))
    );
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
    return (MR_CSharp_ArrayMembers *)new MR::CSharp::ArrayMembers(MR::CSharp::ArrayMembers());
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_ArrayMembers *)(new MR::CSharp::ArrayMembers[num_elems]{});
}

const MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetPtr(const MR_CSharp_ArrayMembers *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ArrayMembers *)(((const MR::CSharp::ArrayMembers *)ptr) + i);
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_OffsetMutablePtr(MR_CSharp_ArrayMembers *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ArrayMembers *)(((MR::CSharp::ArrayMembers *)ptr) + i);
}

MR_CSharp_ArrayMembers *MR_CSharp_ArrayMembers_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_ArrayMembers *_other)
{
    return (MR_CSharp_ArrayMembers *)new MR::CSharp::ArrayMembers(MR::CSharp::ArrayMembers(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::ArrayMembers), MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::ArrayMembers), MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::ArrayMembers) MRBINDC_CLASSARG_END(_other, MR::CSharp::ArrayMembers))
    ));
}

void MR_CSharp_ArrayMembers_Destroy(const MR_CSharp_ArrayMembers *_this)
{
    delete ((const MR::CSharp::ArrayMembers *)_this);
}

void MR_CSharp_ArrayMembers_DestroyArray(const MR_CSharp_ArrayMembers *_this)
{
    delete[] ((const MR::CSharp::ArrayMembers *)_this);
}

MR_C_std_optional_int *MR_CSharp_test_optint(const int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)new std::optional<int>(::MR::CSharp::test_optint(
        (a ? std::optional<int>(*a) : std::nullopt),
        (b ? std::optional<int>(*(std::optional<int> *)b) : static_cast<std::optional<int>>(default_optint)),
        (c ? std::optional<int>(*(std::optional<int> *)c) : static_cast<std::optional<int>>(default_optint))
    ));
}

MR_C_std_optional_int *MR_CSharp_test_optint_ref(MR_C_std_optional_int *a, MR_C_std_optional_int *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)std::addressof(::MR::CSharp::test_optint_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<int> *)(a)),
        (b ? *(std::optional<int> *)(b) : static_cast<std::optional<int> &>(default_optint))
    ));
}

const MR_C_std_optional_int *MR_CSharp_test_optint_cref(const int *a, const MR_C_std_optional_int *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_int *)std::addressof(::MR::CSharp::test_optint_cref(
        (a ? std::optional<int>(*a) : std::nullopt),
        (b ? std::optional<int>(*(std::optional<int> *)b) : static_cast<std::optional<int>>(default_optint))
    ));
}

MR_C_std_optional_int *MR_CSharp_test_optint_ptr(MR_C_std_optional_int *a, MR_C_std_optional_int *b, MR_C_std_optional_int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_int *)(::MR::CSharp::test_optint_ptr(
        ((std::optional<int> *)a),
        ((std::optional<int> *)b),
        (c ? (std::optional<int> *)(*c) : static_cast<std::optional<int> *>(&default_optint))
    ));
}

const MR_C_std_optional_int *MR_CSharp_test_optint_cptr(const MR_C_std_optional_int *a, const MR_C_std_optional_int *b, const MR_C_std_optional_int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_int *)(::MR::CSharp::test_optint_cptr(
        ((const std::optional<int> *)a),
        ((const std::optional<int> *)b),
        (c ? (const std::optional<int> *)(*c) : static_cast<const std::optional<int> *>(&default_optint))
    ));
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b, MR_C_PassBy c_pass_by, MR_C_std_optional_std_string *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_std_string *)new std::optional<std::string>(::MR::CSharp::test_optstr(
        (a ? std::optional<std::string>(a_end ? std::string(a, a_end) : std::string(a)) : std::nullopt),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<std::string>) MRBINDC_CLASSARG_COPY(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(b, std::optional<std::string>)),
        (MRBINDC_CLASSARG_DEF_CTOR(c, std::optional<std::string>) MRBINDC_CLASSARG_COPY(c, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(c, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(c, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(c, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(c, std::optional<std::string>))
    ));
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr_ref(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_std_string *)std::addressof(::MR::CSharp::test_optstr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<std::string> *)(a)),
        (b ? *(std::optional<std::string> *)(b) : static_cast<std::optional<std::string> &>(default_optstr))
    ));
}

const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cref(const char *a, const char *a_end, MR_C_PassBy b_pass_by, MR_C_std_optional_std_string *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_std_string *)std::addressof(::MR::CSharp::test_optstr_cref(
        (a ? std::optional<std::string>(a_end ? std::string(a, a_end) : std::string(a)) : std::nullopt),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<std::string>) MRBINDC_CLASSARG_COPY(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(b, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optstr), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(b, std::optional<std::string>))
    ));
}

MR_C_std_optional_std_string *MR_CSharp_test_optstr_ptr(MR_C_std_optional_std_string *a, MR_C_std_optional_std_string *b, MR_C_std_optional_std_string *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_std_string *)(::MR::CSharp::test_optstr_ptr(
        ((std::optional<std::string> *)a),
        ((std::optional<std::string> *)b),
        (c ? (std::optional<std::string> *)(*c) : static_cast<std::optional<std::string> *>(&default_optstr))
    ));
}

const MR_C_std_optional_std_string *MR_CSharp_test_optstr_cptr(const MR_C_std_optional_std_string *a, const MR_C_std_optional_std_string *b, const MR_C_std_optional_std_string *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_std_string *)(::MR::CSharp::test_optstr_cptr(
        ((const std::optional<std::string> *)a),
        ((const std::optional<std::string> *)b),
        (c ? (const std::optional<std::string> *)(*c) : static_cast<const std::optional<std::string> *>(&default_optstr))
    ));
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)new std::optional<MR::CSharp::Trivial>(::MR::CSharp::test_opttriv(
        (a ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)b) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv)),
        (c ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)c) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv))
    ));
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ref(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_opttriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::Trivial> *)(a)),
        (b ? *(std::optional<MR::CSharp::Trivial> *)(b) : static_cast<std::optional<MR::CSharp::Trivial> &>(default_opttriv))
    ));
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cref(const MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_Trivial *)std::addressof(::MR::CSharp::test_opttriv_cref(
        (a ? std::optional<MR::CSharp::Trivial>(MR::CSharp::Trivial(*(MR::CSharp::Trivial *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::Trivial>(*(std::optional<MR::CSharp::Trivial> *)b) : static_cast<std::optional<MR::CSharp::Trivial>>(default_opttriv))
    ));
}

MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_ptr(MR_C_std_optional_MR_CSharp_Trivial *a, MR_C_std_optional_MR_CSharp_Trivial *b, MR_C_std_optional_MR_CSharp_Trivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_Trivial *)(::MR::CSharp::test_opttriv_ptr(
        ((std::optional<MR::CSharp::Trivial> *)a),
        ((std::optional<MR::CSharp::Trivial> *)b),
        (c ? (std::optional<MR::CSharp::Trivial> *)(*c) : static_cast<std::optional<MR::CSharp::Trivial> *>(&default_opttriv))
    ));
}

const MR_C_std_optional_MR_CSharp_Trivial *MR_CSharp_test_opttriv_cptr(const MR_C_std_optional_MR_CSharp_Trivial *a, const MR_C_std_optional_MR_CSharp_Trivial *b, const MR_C_std_optional_MR_CSharp_Trivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_Trivial *)(::MR::CSharp::test_opttriv_cptr(
        ((const std::optional<MR::CSharp::Trivial> *)a),
        ((const std::optional<MR::CSharp::Trivial> *)b),
        (c ? (const std::optional<MR::CSharp::Trivial> *)(*c) : static_cast<const std::optional<MR::CSharp::Trivial> *>(&default_opttriv))
    ));
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b, MR_C_PassBy c_pass_by, MR_CSharp_NonTrivial *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)new std::optional<MR::CSharp::NonTrivial>(::MR::CSharp::test_optnontriv(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(a, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(a, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(b, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(c, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(c, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(c, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(c, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(c, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(c, std::optional<MR::CSharp::NonTrivial>))
    ));
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ref(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_optnontriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::NonTrivial> *)(a)),
        (b ? *(std::optional<MR::CSharp::NonTrivial> *)(b) : static_cast<std::optional<MR::CSharp::NonTrivial> &>(default_optnontriv))
    ));
}

const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cref(MR_C_PassBy a_pass_by, MR_CSharp_NonTrivial *a, MR_C_PassBy b_pass_by, MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_NonTrivial *)std::addressof(::MR::CSharp::test_optnontriv_cref(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(a, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(a, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(a, std::optional<MR::CSharp::NonTrivial>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_COPY(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_MOVE(b, (MR::CSharp::NonTrivial), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (default_optnontriv), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_DEF_ARG(b, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::CSharp::NonTrivial>) MRBINDC_CLASSARG_END(b, std::optional<MR::CSharp::NonTrivial>))
    ));
}

MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_ptr(MR_C_std_optional_MR_CSharp_NonTrivial *a, MR_C_std_optional_MR_CSharp_NonTrivial *b, MR_C_std_optional_MR_CSharp_NonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_NonTrivial *)(::MR::CSharp::test_optnontriv_ptr(
        ((std::optional<MR::CSharp::NonTrivial> *)a),
        ((std::optional<MR::CSharp::NonTrivial> *)b),
        (c ? (std::optional<MR::CSharp::NonTrivial> *)(*c) : static_cast<std::optional<MR::CSharp::NonTrivial> *>(&default_optnontriv))
    ));
}

const MR_C_std_optional_MR_CSharp_NonTrivial *MR_CSharp_test_optnontriv_cptr(const MR_C_std_optional_MR_CSharp_NonTrivial *a, const MR_C_std_optional_MR_CSharp_NonTrivial *b, const MR_C_std_optional_MR_CSharp_NonTrivial *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_NonTrivial *)(::MR::CSharp::test_optnontriv_cptr(
        ((const std::optional<MR::CSharp::NonTrivial> *)a),
        ((const std::optional<MR::CSharp::NonTrivial> *)b),
        (c ? (const std::optional<MR::CSharp::NonTrivial> *)(*c) : static_cast<const std::optional<MR::CSharp::NonTrivial> *>(&default_optnontriv))
    ));
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)new std::optional<MR::CSharp::ExposedLayoutSh>(::MR::CSharp::test_optshexp(
        (a ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp)),
        (c ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)c) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp))
    ));
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ref(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_optshexp_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::ExposedLayoutSh> *)(a)),
        (b ? *(std::optional<MR::CSharp::ExposedLayoutSh> *)(b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh> &>(default_optshexp))
    ));
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cref(const MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)std::addressof(::MR::CSharp::test_optshexp_cref(
        (a ? std::optional<MR::CSharp::ExposedLayoutSh>(MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutSh), *a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::ExposedLayoutSh>(*(std::optional<MR::CSharp::ExposedLayoutSh> *)b) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh>>(default_optshexp))
    ));
}

MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_ptr(MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_optshexp_ptr(
        ((std::optional<MR::CSharp::ExposedLayoutSh> *)a),
        ((std::optional<MR::CSharp::ExposedLayoutSh> *)b),
        (c ? (std::optional<MR::CSharp::ExposedLayoutSh> *)(*c) : static_cast<std::optional<MR::CSharp::ExposedLayoutSh> *>(&default_optshexp))
    ));
}

const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *MR_CSharp_test_optshexp_cptr(const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *a, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *b, const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_ExposedLayoutSh *)(::MR::CSharp::test_optshexp_cptr(
        ((const std::optional<MR::CSharp::ExposedLayoutSh> *)a),
        ((const std::optional<MR::CSharp::ExposedLayoutSh> *)b),
        (c ? (const std::optional<MR::CSharp::ExposedLayoutSh> *)(*c) : static_cast<const std::optional<MR::CSharp::ExposedLayoutSh> *>(&default_optshexp))
    ));
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)new std::optional<MR::CSharp::SA>(::MR::CSharp::test_optshtriv(
        (a ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)b) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv)),
        (c ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)c) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv))
    ));
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ref(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_optshtriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::optional<MR::CSharp::SA> *)(a)),
        (b ? *(std::optional<MR::CSharp::SA> *)(b) : static_cast<std::optional<MR::CSharp::SA> &>(default_optshtriv))
    ));
}

const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cref(const MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_SA *)std::addressof(::MR::CSharp::test_optshtriv_cref(
        (a ? std::optional<MR::CSharp::SA>(MR::CSharp::SA(*(MR::CSharp::SA *)a)) : std::nullopt),
        (b ? std::optional<MR::CSharp::SA>(*(std::optional<MR::CSharp::SA> *)b) : static_cast<std::optional<MR::CSharp::SA>>(default_optshtriv))
    ));
}

MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_ptr(MR_C_std_optional_MR_CSharp_SA *a, MR_C_std_optional_MR_CSharp_SA *b, MR_C_std_optional_MR_CSharp_SA *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_optional_MR_CSharp_SA *)(::MR::CSharp::test_optshtriv_ptr(
        ((std::optional<MR::CSharp::SA> *)a),
        ((std::optional<MR::CSharp::SA> *)b),
        (c ? (std::optional<MR::CSharp::SA> *)(*c) : static_cast<std::optional<MR::CSharp::SA> *>(&default_optshtriv))
    ));
}

const MR_C_std_optional_MR_CSharp_SA *MR_CSharp_test_optshtriv_cptr(const MR_C_std_optional_MR_CSharp_SA *a, const MR_C_std_optional_MR_CSharp_SA *b, const MR_C_std_optional_MR_CSharp_SA *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_optional_MR_CSharp_SA *)(::MR::CSharp::test_optshtriv_cptr(
        ((const std::optional<MR::CSharp::SA> *)a),
        ((const std::optional<MR::CSharp::SA> *)b),
        (c ? (const std::optional<MR::CSharp::SA> *)(*c) : static_cast<const std::optional<MR::CSharp::SA> *>(&default_optshtriv))
    ));
}

void MR_CSharp_test_tag(void)
{
    ::MR::CSharp::test_tag(
        std::greater<int>{},
        std::greater<int>{}
    );
}

void MR_CSharp_test_tag_cref(void)
{
    ::MR::CSharp::test_tag_cref(
        std::greater<int>{},
        std::greater<int>{}
    );
}

bool MR_CSharp_test_tag_ptr(void)
{
    return ::MR::CSharp::test_tag_ptr();
}

bool MR_CSharp_test_tag_cptr(void)
{
    return ::MR::CSharp::test_tag_cptr();
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)new std::variant<std::monostate, int, float>(::MR::CSharp::test_variant(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::variant<std::monostate, int, float>(*(std::variant<std::monostate, int, float> *)a)),
        (b ? std::variant<std::monostate, int, float>(*(std::variant<std::monostate, int, float> *)b) : static_cast<std::variant<std::monostate, int, float>>(default_variant))
    ));
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ref(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)std::addressof(::MR::CSharp::test_variant_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::variant<std::monostate, int, float> *)(a)),
        (b ? *(std::variant<std::monostate, int, float> *)(b) : static_cast<std::variant<std::monostate, int, float> &>(default_variant))
    ));
}

const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cref(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_variant_std_monostate_int_float *)std::addressof(::MR::CSharp::test_variant_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::variant<std::monostate, int, float> *)(a)),
        (b ? *(const std::variant<std::monostate, int, float> *)(b) : static_cast<const std::variant<std::monostate, int, float> &>(default_variant))
    ));
}

MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_ptr(MR_C_std_variant_std_monostate_int_float *a, MR_C_std_variant_std_monostate_int_float *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_variant_std_monostate_int_float *)(::MR::CSharp::test_variant_ptr(
        ((std::variant<std::monostate, int, float> *)a),
        (b ? (std::variant<std::monostate, int, float> *)(*b) : static_cast<std::variant<std::monostate, int, float> *>(&default_variant))
    ));
}

const MR_C_std_variant_std_monostate_int_float *MR_CSharp_test_variant_cptr(const MR_C_std_variant_std_monostate_int_float *a, const MR_C_std_variant_std_monostate_int_float *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_variant_std_monostate_int_float *)(::MR::CSharp::test_variant_cptr(
        ((const std::variant<std::monostate, int, float> *)a),
        (b ? (const std::variant<std::monostate, int, float> *)(*b) : static_cast<const std::variant<std::monostate, int, float> *>(&default_variant))
    ));
}

MR_C_std_variant_std_monostate_int_float_float *MR_CSharp_test_variant_with_repeated_types(void)
{
    return (MR_C_std_variant_std_monostate_int_float_float *)new std::variant<std::monostate, int, float, float>(::MR::CSharp::test_variant_with_repeated_types());
}

MR_C_std_ostream *MR_CSharp_test_iostreams_ref(MR_C_std_istream *_1)
{
    return (MR_C_std_ostream *)std::addressof(::MR::CSharp::test_iostreams_ref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::istream *)(_1))
    ));
}

MR_C_std_ostream *MR_CSharp_test_iostreams_ptr(MR_C_std_istream *_1)
{
    return (MR_C_std_ostream *)(::MR::CSharp::test_iostreams_ptr(
        ((std::istream *)_1)
    ));
}

const MR_C_std_ostream *MR_CSharp_test_iostreams_cref(const MR_C_std_istream *_1)
{
    return (const MR_C_std_ostream *)std::addressof(::MR::CSharp::test_iostreams_cref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::istream *)(_1))
    ));
}

const MR_C_std_ostream *MR_CSharp_test_iostreams_cptr(const MR_C_std_istream *_1)
{
    return (const MR_C_std_ostream *)(::MR::CSharp::test_iostreams_cptr(
        ((const std::istream *)_1)
    ));
}

int *MR_CSharp_test_uniqueptr(int *a, int *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return (::MR::CSharp::test_uniqueptr(
        std::unique_ptr<int>(a),
        (b ? std::unique_ptr<int>(*b) : static_cast<std::unique_ptr<int>>(std::move(default_uniqueptr)))
    )).release();
}

MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ref(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_unique_ptr_int *)std::addressof(::MR::CSharp::test_uniqueptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::unique_ptr<int> *)(a)),
        (b ? *(std::unique_ptr<int> *)(b) : static_cast<std::unique_ptr<int> &>(default_uniqueptr))
    ));
}

const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cref(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_unique_ptr_int *)std::addressof(::MR::CSharp::test_uniqueptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::unique_ptr<int> *)(a)),
        (b ? *(const std::unique_ptr<int> *)(b) : static_cast<const std::unique_ptr<int> &>(default_uniqueptr))
    ));
}

MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_ptr(MR_C_std_unique_ptr_int *a, MR_C_std_unique_ptr_int *b, MR_C_std_unique_ptr_int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_unique_ptr_int *)(::MR::CSharp::test_uniqueptr_ptr(
        ((std::unique_ptr<int> *)a),
        ((std::unique_ptr<int> *)b),
        (c ? (std::unique_ptr<int> *)(*c) : static_cast<std::unique_ptr<int> *>(&default_uniqueptr))
    ));
}

const MR_C_std_unique_ptr_int *MR_CSharp_test_uniqueptr_cptr(const MR_C_std_unique_ptr_int *a, const MR_C_std_unique_ptr_int *b, const MR_C_std_unique_ptr_int *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_unique_ptr_int *)(::MR::CSharp::test_uniqueptr_cptr(
        ((const std::unique_ptr<int> *)a),
        ((const std::unique_ptr<int> *)b),
        (c ? (const std::unique_ptr<int> *)(*c) : static_cast<const std::unique_ptr<int> *>(&default_uniqueptr))
    ));
}

int (*MR_CSharp_test_plainarr_ref(int (*a)[42], int (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (&)[42]>(default_plainarr))
    ));
}

const int (*MR_CSharp_test_plainarr_cref(const int (*a)[42], const int (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (&)[42]>(default_plainarr))
    ));
}

int (*MR_CSharp_test_plainarr_rref(int (*a)[42], int (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int (&&)[42]>((MR::CSharp::PlainArray &&)default_plainarr))
    )));
}

const int (*MR_CSharp_test_plainarr_crref(const int (*a)[42], const int (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int (&&)[42]>((MR::CSharp::PlainArray &&)default_plainarr))
    )));
}

int (*MR_CSharp_test_plainarr_ptr(int (*a)[42], int (*b)[42], int (*const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr_ptr(
        a,
        b,
        (c ? *c : static_cast<int (*)[42]>(&default_plainarr))
    );
}

const int (*MR_CSharp_test_plainarr_cptr(const int (*a)[42], const int (*b)[42], const int (*const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*)[42]>(&default_plainarr))
    );
}

int (*MR_CSharp_test_plainarr2_ref(int (*a)[10][20], int (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr2_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (&)[10][20]>(default_plainarr2))
    ));
}

const int (*MR_CSharp_test_plainarr2_cref(const int (*a)[10][20], const int (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_plainarr2_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (&)[10][20]>(default_plainarr2))
    ));
}

int (*MR_CSharp_test_plainarr2_rref(int (*a)[10][20], int (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr2_rref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<int (&&)[10][20]>((MR::CSharp::PlainArray2 &&)default_plainarr2))
    )));
}

const int (*MR_CSharp_test_plainarr2_crref(const int (*a)[10][20], const int (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(mrbindc_details::unmove(::MR::CSharp::test_plainarr2_crref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::move(*a)),
        (b ? std::move(*b) : static_cast<const int (&&)[10][20]>((MR::CSharp::PlainArray2 &&)default_plainarr2))
    )));
}

int (*MR_CSharp_test_plainarr2_ptr(int (*a)[10][20], int (*b)[10][20], int (*const *c)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr2_ptr(
        a,
        b,
        (c ? *c : static_cast<int (*)[10][20]>(&default_plainarr2))
    );
}

const int (*MR_CSharp_test_plainarr2_cptr(const int (*a)[10][20], const int (*b)[10][20], const int (*const *c)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_plainarr2_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*)[10][20]>(&default_plainarr2))
    );
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ref(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[42])std::addressof(::MR::CSharp::test_plainarrenum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 (*)[42])(a)),
        (b ? *(MR::CSharp::E1 (*)[42])(b) : static_cast<MR::CSharp::E1 (&)[42]>(default_plainarrenum))
    ));
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cref(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[42])std::addressof(::MR::CSharp::test_plainarrenum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 (*)[42])(a)),
        (b ? *(const MR::CSharp::E1 (*)[42])(b) : static_cast<const MR::CSharp::E1 (&)[42]>(default_plainarrenum))
    ));
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_ptr(MR_CSharp_E1 (*a)[42], MR_CSharp_E1 (*b)[42], MR_CSharp_E1 (*const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[42])(::MR::CSharp::test_plainarrenum_ptr(
        ((MR::CSharp::E1 (*)[42])a),
        ((MR::CSharp::E1 (*)[42])b),
        (c ? (MR::CSharp::E1 (*)[42])(*c) : static_cast<MR::CSharp::E1 (*)[42]>(&default_plainarrenum))
    ));
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum_cptr(const MR_CSharp_E1 (*a)[42], const MR_CSharp_E1 (*b)[42], const MR_CSharp_E1 (*const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[42])(::MR::CSharp::test_plainarrenum_cptr(
        ((const MR::CSharp::E1 (*)[42])a),
        ((const MR::CSharp::E1 (*)[42])b),
        (c ? (const MR::CSharp::E1 (*)[42])(*c) : static_cast<const MR::CSharp::E1 (*)[42]>(&default_plainarrenum))
    ));
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ref(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[10][20])std::addressof(::MR::CSharp::test_plainarrenum2_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 (*)[10][20])(a)),
        (b ? *(MR::CSharp::E1 (*)[10][20])(b) : static_cast<MR::CSharp::E1 (&)[10][20]>(default_plainarrenum2))
    ));
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cref(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[10][20])std::addressof(::MR::CSharp::test_plainarrenum2_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 (*)[10][20])(a)),
        (b ? *(const MR::CSharp::E1 (*)[10][20])(b) : static_cast<const MR::CSharp::E1 (&)[10][20]>(default_plainarrenum2))
    ));
}

MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_ptr(MR_CSharp_E1 (*a)[10][20], MR_CSharp_E1 (*b)[10][20], MR_CSharp_E1 (*const *c)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return (MR_CSharp_E1 (*)[10][20])(::MR::CSharp::test_plainarrenum2_ptr(
        ((MR::CSharp::E1 (*)[10][20])a),
        ((MR::CSharp::E1 (*)[10][20])b),
        (c ? (MR::CSharp::E1 (*)[10][20])(*c) : static_cast<MR::CSharp::E1 (*)[10][20]>(&default_plainarrenum2))
    ));
}

const MR_CSharp_E1 (*MR_CSharp_test_plainarrenum2_cptr(const MR_CSharp_E1 (*a)[10][20], const MR_CSharp_E1 (*b)[10][20], const MR_CSharp_E1 (*const *c)[10][20]))[10][20]
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 (*)[10][20])(::MR::CSharp::test_plainarrenum2_cptr(
        ((const MR::CSharp::E1 (*)[10][20])a),
        ((const MR::CSharp::E1 (*)[10][20])b),
        (c ? (const MR::CSharp::E1 (*)[10][20])(*c) : static_cast<const MR::CSharp::E1 (*)[10][20]>(&default_plainarrenum2))
    ));
}

int (**MR_CSharp_test_ptrs1(int (**ptr)[42], int (**ref)[42]))[42]
{
    return ::MR::CSharp::test_ptrs1(
        ptr,
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
}

int (***MR_CSharp_test_ptrs2(int (***ptr)[42], int (***ref)[42]))[42]
{
    return ::MR::CSharp::test_ptrs2(
        ptr,
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
}

int **MR_CSharp_test_intptr_ref(int **a, int **b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int *&>(default_intptr))
    ));
}

int *const *MR_CSharp_test_intptr_cref(int *const *a, int *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int *const &>(default_intptr))
    ));
}

int **MR_CSharp_test_intptr_ptr(int **a, int **b, int **const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int **>(&default_intptr))
    );
}

int *const *MR_CSharp_test_intptr_cptr(int *const *a, int *const *b, int *const *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int *const *>(&default_intptr))
    );
}

const int **MR_CSharp_test_intcptr_ref(const int **a, const int **b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int *&>(default_intcptr))
    ));
}

const int *const *MR_CSharp_test_intcptr_cref(const int *const *a, const int *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int *const &>(default_intcptr))
    ));
}

const int **MR_CSharp_test_intcptr_ptr(const int **a, const int **b, const int **const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intcptr_ptr(
        a,
        b,
        (c ? *c : static_cast<const int **>(&default_intcptr))
    );
}

const int *const *MR_CSharp_test_intcptr_cptr(const int *const *a, const int *const *b, const int *const *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intcptr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int *const *>(&default_intcptr))
    );
}

int ***MR_CSharp_test_intptrptr_ref(int ***a, int ***b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int **&>(default_intptrptr))
    ));
}

int **const *MR_CSharp_test_intptrptr_cref(int **const *a, int **const *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_intptrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int **const &>(default_intptrptr))
    ));
}

int ***MR_CSharp_test_intptrptr_ptr(int ***a, int ***b, int ***const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int ***>(&default_intptrptr))
    );
}

int **const *MR_CSharp_test_intptrptr_cptr(int **const *a, int **const *b, int **const *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_intptrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int **const *>(&default_intptrptr))
    );
}

void **MR_CSharp_test_voidptr_ref(void **a, void **b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void *&>(default_voidptr))
    ));
}

void *const *MR_CSharp_test_voidptr_cref(void *const *a, void *const *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void *const &>(default_voidptr))
    ));
}

void **MR_CSharp_test_voidptr_ptr(void **a, void **b, void **const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptr_ptr(
        a,
        b,
        (c ? *c : static_cast<void **>(&default_voidptr))
    );
}

void *const *MR_CSharp_test_voidptr_cptr(void *const *a, void *const *b, void *const *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptr_cptr(
        a,
        b,
        (c ? *c : static_cast<void *const *>(&default_voidptr))
    );
}

void ***MR_CSharp_test_voidptrptr_ref(void ***a, void ***b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void **&>(default_voidptrptr))
    ));
}

void **const *MR_CSharp_test_voidptrptr_cref(void **const *a, void **const *b)
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_voidptrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<void **const &>(default_voidptrptr))
    ));
}

void ***MR_CSharp_test_voidptrptr_ptr(void ***a, void ***b, void ***const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<void ***>(&default_voidptrptr))
    );
}

void **const *MR_CSharp_test_voidptrptr_cptr(void **const *a, void **const *b, void **const *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_voidptrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<void **const *>(&default_voidptrptr))
    );
}

int (**MR_CSharp_test_arrptr_ref(int (**a)[42], int (**b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (*&)[42]>(default_arrptr))
    ));
}

int (*const *MR_CSharp_test_arrptr_cref(int (*const *a)[42], int (*const *b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int (*const &)[42]>(default_arrptr))
    ));
}

int (**MR_CSharp_test_arrptr_ptr(int (**a)[42], int (**b)[42], int (**const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrptr_ptr(
        a,
        b,
        (c ? *c : static_cast<int (**)[42]>(&default_arrptr))
    );
}

int (*const *MR_CSharp_test_arrptr_cptr(int (*const *a)[42], int (*const *b)[42], int (*const *const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrptr_cptr(
        a,
        b,
        (c ? *c : static_cast<int (*const *)[42]>(&default_arrptr))
    );
}

const int (**MR_CSharp_test_arrcptr_ref(const int (**a)[42], const int (**b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (*&)[42]>(default_arrcptr))
    ));
}

const int (*const *MR_CSharp_test_arrcptr_cref(const int (*const *a)[42], const int (*const *b)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return std::addressof(::MR::CSharp::test_arrcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int (*const &)[42]>(default_arrcptr))
    ));
}

const int (**MR_CSharp_test_arrcptr_ptr(const int (**a)[42], const int (**b)[42], const int (**const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrcptr_ptr(
        a,
        b,
        (c ? *c : static_cast<const int (**)[42]>(&default_arrcptr))
    );
}

const int (*const *MR_CSharp_test_arrcptr_cptr(const int (*const *a)[42], const int (*const *b)[42], const int (*const *const *c)[42]))[42]
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_arrcptr_cptr(
        a,
        b,
        (c ? *c : static_cast<const int (*const *)[42]>(&default_arrcptr))
    );
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
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts());
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NameConflicts *)(new MR::CSharp::NameConflicts[num_elems]{});
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFrom(int name_conflicts, const MR_CSharp_NameConflicts_A *a)
{
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts{
        name_conflicts,
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)a))
    });
}

const MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetPtr(const MR_CSharp_NameConflicts *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NameConflicts *)(((const MR::CSharp::NameConflicts *)ptr) + i);
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_OffsetMutablePtr(MR_CSharp_NameConflicts *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NameConflicts *)(((MR::CSharp::NameConflicts *)ptr) + i);
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_ConstructFromAnother(const MR_CSharp_NameConflicts *_other)
{
    return (MR_CSharp_NameConflicts *)new MR::CSharp::NameConflicts(MR::CSharp::NameConflicts(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts(*(MR::CSharp::NameConflicts *)_other))
    ));
}

void MR_CSharp_NameConflicts_Destroy(const MR_CSharp_NameConflicts *_this)
{
    delete ((const MR::CSharp::NameConflicts *)_this);
}

void MR_CSharp_NameConflicts_DestroyArray(const MR_CSharp_NameConflicts *_this)
{
    delete[] ((const MR::CSharp::NameConflicts *)_this);
}

MR_CSharp_NameConflicts *MR_CSharp_NameConflicts_AssignFromAnother(MR_CSharp_NameConflicts *_this, const MR_CSharp_NameConflicts *_other)
{
    return (MR_CSharp_NameConflicts *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts(*(MR::CSharp::NameConflicts *)_other))
    ));
}

void MR_CSharp_NameConflicts_name_Conflicts(MR_CSharp_NameConflicts *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts *)(_this)).name_Conflicts();
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstruct(void)
{
    return (MR_CSharp_NameConflicts_A *)new MR::CSharp::NameConflicts::A(MR::CSharp::NameConflicts::A());
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_NameConflicts_A *)(new MR::CSharp::NameConflicts::A[num_elems]{});
}

const MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetPtr(const MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_NameConflicts_A *)(((const MR::CSharp::NameConflicts::A *)ptr) + i);
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_OffsetMutablePtr(MR_CSharp_NameConflicts_A *ptr, ptrdiff_t i)
{
    return (MR_CSharp_NameConflicts_A *)(((MR::CSharp::NameConflicts::A *)ptr) + i);
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_ConstructFromAnother(const MR_CSharp_NameConflicts_A *_other)
{
    return (MR_CSharp_NameConflicts_A *)new MR::CSharp::NameConflicts::A(MR::CSharp::NameConflicts::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)_other))
    ));
}

void MR_CSharp_NameConflicts_A_Destroy(const MR_CSharp_NameConflicts_A *_this)
{
    delete ((const MR::CSharp::NameConflicts::A *)_this);
}

void MR_CSharp_NameConflicts_A_DestroyArray(const MR_CSharp_NameConflicts_A *_this)
{
    delete[] ((const MR::CSharp::NameConflicts::A *)_this);
}

MR_CSharp_NameConflicts_A *MR_CSharp_NameConflicts_A_AssignFromAnother(MR_CSharp_NameConflicts_A *_this, const MR_CSharp_NameConflicts_A *_other)
{
    return (MR_CSharp_NameConflicts_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflicts::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::NameConflicts::A(*(MR::CSharp::NameConflicts::A *)_other))
    ));
}

void MR_CSharp_nameConflicts(void)
{
    ::MR::CSharp::nameConflicts();
}

void MR_CSharp_NameConflictsExposed_name_Conflicts_exposed(MR_CSharp_NameConflictsExposed *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NameConflictsExposed *)(_this)).name_Conflicts_exposed();
}

void MR_CSharp_nameConflictsExposed(void)
{
    ::MR::CSharp::nameConflictsExposed();
}

void MR_CSharp_template_a_int(int _1)
{
    ::MR::CSharp::template_a<int>(
        _1
    );
}

void MR_CSharp_template_a_float(float _1)
{
    ::MR::CSharp::template_a<float>(
        _1
    );
}

int MR_CSharp_template_b_int(void)
{
    return ::MR::CSharp::template_b<int>();
}

float MR_CSharp_template_b_float(void)
{
    return ::MR::CSharp::template_b<float>();
}

void MR_CSharp_template_c_int(void)
{
    ::MR::CSharp::template_c<int>();
}

void MR_CSharp_template_c_float(void)
{
    ::MR::CSharp::template_c<float>();
}

void MR_CSharp_instantiate(void)
{
    ::MR::CSharp::instantiate();
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstruct(void)
{
    return (MR_CSharp_AmbiguousTemplates *)new MR::CSharp::AmbiguousTemplates(MR::CSharp::AmbiguousTemplates());
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_AmbiguousTemplates *)(new MR::CSharp::AmbiguousTemplates[num_elems]{});
}

const MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetPtr(const MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_AmbiguousTemplates *)(((const MR::CSharp::AmbiguousTemplates *)ptr) + i);
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_OffsetMutablePtr(MR_CSharp_AmbiguousTemplates *ptr, ptrdiff_t i)
{
    return (MR_CSharp_AmbiguousTemplates *)(((MR::CSharp::AmbiguousTemplates *)ptr) + i);
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_ConstructFromAnother(const MR_CSharp_AmbiguousTemplates *_other)
{
    return (MR_CSharp_AmbiguousTemplates *)new MR::CSharp::AmbiguousTemplates(MR::CSharp::AmbiguousTemplates(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::AmbiguousTemplates(*(MR::CSharp::AmbiguousTemplates *)_other))
    ));
}

void MR_CSharp_AmbiguousTemplates_Destroy(const MR_CSharp_AmbiguousTemplates *_this)
{
    delete ((const MR::CSharp::AmbiguousTemplates *)_this);
}

void MR_CSharp_AmbiguousTemplates_DestroyArray(const MR_CSharp_AmbiguousTemplates *_this)
{
    delete[] ((const MR::CSharp::AmbiguousTemplates *)_this);
}

MR_CSharp_AmbiguousTemplates *MR_CSharp_AmbiguousTemplates_AssignFromAnother(MR_CSharp_AmbiguousTemplates *_this, const MR_CSharp_AmbiguousTemplates *_other)
{
    return (MR_CSharp_AmbiguousTemplates *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::AmbiguousTemplates(*(MR::CSharp::AmbiguousTemplates *)_other))
    ));
}

void MR_CSharp_AmbiguousTemplates_template_a_int(MR_CSharp_AmbiguousTemplates *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_a<int>(
        _1
    );
}

void MR_CSharp_AmbiguousTemplates_template_a_float(MR_CSharp_AmbiguousTemplates *_this, float _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_a<float>(
        _1
    );
}

int MR_CSharp_AmbiguousTemplates_template_b_int(MR_CSharp_AmbiguousTemplates *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_b<int>();
}

float MR_CSharp_AmbiguousTemplates_template_b_float(MR_CSharp_AmbiguousTemplates *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_b<float>();
}

void MR_CSharp_AmbiguousTemplates_template_c_int(MR_CSharp_AmbiguousTemplates *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_c<int>();
}

void MR_CSharp_AmbiguousTemplates_template_c_float(MR_CSharp_AmbiguousTemplates *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).template_c<float>();
}

void MR_CSharp_AmbiguousTemplates_instantiate(MR_CSharp_AmbiguousTemplates *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::AmbiguousTemplates *)(_this)).instantiate();
}

void MR_CSharp_ConstNonconstConflicts_foo_int(MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
}

void MR_CSharp_ConstNonconstConflicts_foo_const_float(const MR_CSharp_ConstNonconstConflicts *_this, float _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
}

void MR_CSharp_ConstNonconstConflicts_foo_char(MR_CSharp_ConstNonconstConflicts *_this, char _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
}

void MR_CSharp_ConstNonconstConflicts_foo_const_char(const MR_CSharp_ConstNonconstConflicts *_this, char _1)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).foo(
        _1
    );
}

int MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator+();
}

int MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator+();
}

void MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator~();
}

void MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator~();
}

int MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int(MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_this)).operator/(
        _1
    );
}

int MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int(const MR_CSharp_ConstNonconstConflicts *_this, int _1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_this)).operator/(
        _1
    );
}

int MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1)
{
    return operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_1))
    );
}

int MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1)
{
    return operator-(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_1))
    );
}

void MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(MR_CSharp_ConstNonconstConflicts *_1)
{
    operator!(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_1))
    );
}

void MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(const MR_CSharp_ConstNonconstConflicts *_1)
{
    operator!(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_1))
    );
}

int MR_C_bitand_int_MR_CSharp_ConstNonconstConflicts_ref(int _1, MR_CSharp_ConstNonconstConflicts *_2)
{
    return operator&(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(MR::CSharp::ConstNonconstConflicts *)(_2))
    );
}

int MR_C_bitand_int_const_MR_CSharp_ConstNonconstConflicts_ref(int _1, const MR_CSharp_ConstNonconstConflicts *_2)
{
    return operator&(
        _1,
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(const MR::CSharp::ConstNonconstConflicts *)(_2))
    );
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
    return (MR_CSharp_ClassMemberPointersClass *)new MR::CSharp::ClassMemberPointersClass(MR::CSharp::ClassMemberPointersClass(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersClass(*(MR::CSharp::ClassMemberPointersClass *)_other))
    ));
}

MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_ConstructFrom(MR_CSharp_A *a, const MR_CSharp_A *b, MR_CSharp_A *c, const MR_CSharp_A *d)
{
    return (MR_CSharp_ClassMemberPointersClass *)new MR::CSharp::ClassMemberPointersClass(MR::CSharp::ClassMemberPointersClass{
        ((MR::CSharp::A *)a),
        ((const MR::CSharp::A *)b),
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(MR::CSharp::A *)(c)),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *(const MR::CSharp::A *)(d))
    });
}

const MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetPtr(const MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ClassMemberPointersClass *)(((const MR::CSharp::ClassMemberPointersClass *)ptr) + i);
}

MR_CSharp_ClassMemberPointersClass *MR_CSharp_ClassMemberPointersClass_OffsetMutablePtr(MR_CSharp_ClassMemberPointersClass *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ClassMemberPointersClass *)(((MR::CSharp::ClassMemberPointersClass *)ptr) + i);
}

void MR_CSharp_ClassMemberPointersClass_Destroy(const MR_CSharp_ClassMemberPointersClass *_this)
{
    delete ((const MR::CSharp::ClassMemberPointersClass *)_this);
}

void MR_CSharp_ClassMemberPointersClass_DestroyArray(const MR_CSharp_ClassMemberPointersClass *_this)
{
    delete[] ((const MR::CSharp::ClassMemberPointersClass *)_this);
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
    return (MR_CSharp_ClassMemberPointersExposed *)new MR::CSharp::ClassMemberPointersExposed(MR::CSharp::ClassMemberPointersExposed(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersExposed(*(MR::CSharp::ClassMemberPointersExposed *)_other))
    ));
}

MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_ConstructFrom(MR_CSharp_ExposedLayout *a, const MR_CSharp_ExposedLayout *b, MR_CSharp_ExposedLayout *c, const MR_CSharp_ExposedLayout *d)
{
    return (MR_CSharp_ClassMemberPointersExposed *)new MR::CSharp::ClassMemberPointersExposed(MR::CSharp::ClassMemberPointersExposed{
        ((MR::CSharp::ExposedLayout *)a),
        ((const MR::CSharp::ExposedLayout *)b),
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(MR::CSharp::ExposedLayout *)(c)),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *(const MR::CSharp::ExposedLayout *)(d))
    });
}

const MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetPtr(const MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ClassMemberPointersExposed *)(((const MR::CSharp::ClassMemberPointersExposed *)ptr) + i);
}

MR_CSharp_ClassMemberPointersExposed *MR_CSharp_ClassMemberPointersExposed_OffsetMutablePtr(MR_CSharp_ClassMemberPointersExposed *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ClassMemberPointersExposed *)(((MR::CSharp::ClassMemberPointersExposed *)ptr) + i);
}

void MR_CSharp_ClassMemberPointersExposed_Destroy(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    delete ((const MR::CSharp::ClassMemberPointersExposed *)_this);
}

void MR_CSharp_ClassMemberPointersExposed_DestroyArray(const MR_CSharp_ClassMemberPointersExposed *_this)
{
    delete[] ((const MR::CSharp::ClassMemberPointersExposed *)_this);
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
    return (MR_CSharp_ClassMemberPointersUshort *)new MR::CSharp::ClassMemberPointersUshort(MR::CSharp::ClassMemberPointersUshort(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersUshort(*(MR::CSharp::ClassMemberPointersUshort *)_other))
    ));
}

MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_ConstructFrom(unsigned short *a, const unsigned short *b, unsigned short *c, const unsigned short *d)
{
    return (MR_CSharp_ClassMemberPointersUshort *)new MR::CSharp::ClassMemberPointersUshort(MR::CSharp::ClassMemberPointersUshort{
        a,
        b,
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *c),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *d)
    });
}

const MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetPtr(const MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ClassMemberPointersUshort *)(((const MR::CSharp::ClassMemberPointersUshort *)ptr) + i);
}

MR_CSharp_ClassMemberPointersUshort *MR_CSharp_ClassMemberPointersUshort_OffsetMutablePtr(MR_CSharp_ClassMemberPointersUshort *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ClassMemberPointersUshort *)(((MR::CSharp::ClassMemberPointersUshort *)ptr) + i);
}

void MR_CSharp_ClassMemberPointersUshort_Destroy(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    delete ((const MR::CSharp::ClassMemberPointersUshort *)_this);
}

void MR_CSharp_ClassMemberPointersUshort_DestroyArray(const MR_CSharp_ClassMemberPointersUshort *_this)
{
    delete[] ((const MR::CSharp::ClassMemberPointersUshort *)_this);
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
    return (MR_CSharp_ClassMemberPointersBool *)new MR::CSharp::ClassMemberPointersBool(MR::CSharp::ClassMemberPointersBool(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::ClassMemberPointersBool(*(MR::CSharp::ClassMemberPointersBool *)_other))
    ));
}

MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_ConstructFrom(bool *a, const bool *b, bool *c, const bool *d)
{
    return (MR_CSharp_ClassMemberPointersBool *)new MR::CSharp::ClassMemberPointersBool(MR::CSharp::ClassMemberPointersBool{
        a,
        b,
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *c),
        ((d ? void() : throw std::runtime_error("Parameter `d` can not be null.")), *d)
    });
}

const MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetPtr(const MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_ClassMemberPointersBool *)(((const MR::CSharp::ClassMemberPointersBool *)ptr) + i);
}

MR_CSharp_ClassMemberPointersBool *MR_CSharp_ClassMemberPointersBool_OffsetMutablePtr(MR_CSharp_ClassMemberPointersBool *ptr, ptrdiff_t i)
{
    return (MR_CSharp_ClassMemberPointersBool *)(((MR::CSharp::ClassMemberPointersBool *)ptr) + i);
}

void MR_CSharp_ClassMemberPointersBool_Destroy(const MR_CSharp_ClassMemberPointersBool *_this)
{
    delete ((const MR::CSharp::ClassMemberPointersBool *)_this);
}

void MR_CSharp_ClassMemberPointersBool_DestroyArray(const MR_CSharp_ClassMemberPointersBool *_this)
{
    delete[] ((const MR::CSharp::ClassMemberPointersBool *)_this);
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
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA());
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_LifetimesA *)(new MR::CSharp::LifetimesA[num_elems]{});
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFrom(int x)
{
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA{
        x
    });
}

const MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetPtr(const MR_CSharp_LifetimesA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_LifetimesA *)(((const MR::CSharp::LifetimesA *)ptr) + i);
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_OffsetMutablePtr(MR_CSharp_LifetimesA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_LifetimesA *)(((MR::CSharp::LifetimesA *)ptr) + i);
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_ConstructFromAnother(const MR_CSharp_LifetimesA *_other)
{
    return (MR_CSharp_LifetimesA *)new MR::CSharp::LifetimesA(MR::CSharp::LifetimesA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)_other))
    ));
}

void MR_CSharp_LifetimesA_Destroy(const MR_CSharp_LifetimesA *_this)
{
    delete ((const MR::CSharp::LifetimesA *)_this);
}

void MR_CSharp_LifetimesA_DestroyArray(const MR_CSharp_LifetimesA *_this)
{
    delete[] ((const MR::CSharp::LifetimesA *)_this);
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesA_AssignFromAnother(MR_CSharp_LifetimesA *_this, const MR_CSharp_LifetimesA *_other)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)_other))
    ));
}

int *MR_CSharp_LifetimesA_foo(MR_CSharp_LifetimesA *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).foo());
}

void MR_CSharp_LifetimesA_bar(MR_CSharp_LifetimesA *_this, int *ref)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesA *)(_this)).bar(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *ref)
    );
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
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB());
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_LifetimesB *)(new MR::CSharp::LifetimesB[num_elems]{});
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFrom(const MR_CSharp_LifetimesA *a)
{
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)a))
    });
}

const MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetPtr(const MR_CSharp_LifetimesB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_LifetimesB *)(((const MR::CSharp::LifetimesB *)ptr) + i);
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_OffsetMutablePtr(MR_CSharp_LifetimesB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_LifetimesB *)(((MR::CSharp::LifetimesB *)ptr) + i);
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_ConstructFromAnother(const MR_CSharp_LifetimesB *_other)
{
    return (MR_CSharp_LifetimesB *)new MR::CSharp::LifetimesB(MR::CSharp::LifetimesB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesB(*(MR::CSharp::LifetimesB *)_other))
    ));
}

void MR_CSharp_LifetimesB_Destroy(const MR_CSharp_LifetimesB *_this)
{
    delete ((const MR::CSharp::LifetimesB *)_this);
}

void MR_CSharp_LifetimesB_DestroyArray(const MR_CSharp_LifetimesB *_this)
{
    delete[] ((const MR::CSharp::LifetimesB *)_this);
}

MR_CSharp_LifetimesB *MR_CSharp_LifetimesB_AssignFromAnother(MR_CSharp_LifetimesB *_this, const MR_CSharp_LifetimesB *_other)
{
    return (MR_CSharp_LifetimesB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesB(*(MR::CSharp::LifetimesB *)_other))
    ));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_begin(MR_CSharp_LifetimesB *_this)
{
    return (MR_CSharp_LifetimesA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).begin());
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesB_end(MR_CSharp_LifetimesB *_this)
{
    return (MR_CSharp_LifetimesA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).end());
}

MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesB_ref(MR_CSharp_LifetimesB *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesB *)(_this)).operator*());
}

const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    return (const MR_CSharp_LifetimesA *)(::MR::CSharp::begin(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
}

const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    return (const MR_CSharp_LifetimesA *)(::MR::CSharp::end(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
}

const MR_CSharp_LifetimesA *MR_C_deref_const_MR_CSharp_LifetimesB_ref(const MR_CSharp_LifetimesB *b)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(MR::CSharp::operator*(
        ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), *(const MR::CSharp::LifetimesB *)(b))
    ));
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
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC());
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_LifetimesC *)(new MR::CSharp::LifetimesC[num_elems]{});
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFrom(const MR_CSharp_LifetimesA *a)
{
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC{
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), MR::CSharp::LifetimesA(*(MR::CSharp::LifetimesA *)a))
    });
}

const MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetPtr(const MR_CSharp_LifetimesC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_LifetimesC *)(((const MR::CSharp::LifetimesC *)ptr) + i);
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_OffsetMutablePtr(MR_CSharp_LifetimesC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_LifetimesC *)(((MR::CSharp::LifetimesC *)ptr) + i);
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_ConstructFromAnother(const MR_CSharp_LifetimesC *_other)
{
    return (MR_CSharp_LifetimesC *)new MR::CSharp::LifetimesC(MR::CSharp::LifetimesC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesC(*(MR::CSharp::LifetimesC *)_other))
    ));
}

void MR_CSharp_LifetimesC_Destroy(const MR_CSharp_LifetimesC *_this)
{
    delete ((const MR::CSharp::LifetimesC *)_this);
}

void MR_CSharp_LifetimesC_DestroyArray(const MR_CSharp_LifetimesC *_this)
{
    delete[] ((const MR::CSharp::LifetimesC *)_this);
}

MR_CSharp_LifetimesC *MR_CSharp_LifetimesC_AssignFromAnother(MR_CSharp_LifetimesC *_this, const MR_CSharp_LifetimesC *_other)
{
    return (MR_CSharp_LifetimesC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesC(*(MR::CSharp::LifetimesC *)_other))
    ));
}

const MR_CSharp_LifetimesA *MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c)
{
    return (const MR_CSharp_LifetimesA *)(begin(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
}

const MR_CSharp_LifetimesA *MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(const MR_CSharp_LifetimesC *c)
{
    return (const MR_CSharp_LifetimesA *)(end(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
}

const MR_CSharp_LifetimesA *MR_C_deref_MR_CSharp_LifetimesC(const MR_CSharp_LifetimesC *c)
{
    return (const MR_CSharp_LifetimesA *)std::addressof(operator*(
        ((c ? void() : throw std::runtime_error("Parameter `c` can not be null.")), *(const MR::CSharp::LifetimesC *)(c))
    ));
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
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesD(*(MR::CSharp::LifetimesD *)_other))
    ));
}

const MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetPtr(const MR_CSharp_LifetimesD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_LifetimesD *)(((const MR::CSharp::LifetimesD *)ptr) + i);
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_OffsetMutablePtr(MR_CSharp_LifetimesD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_LifetimesD *)(((MR::CSharp::LifetimesD *)ptr) + i);
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_2(MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref)
{
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref)),
        ((other_ref ? void() : throw std::runtime_error("Parameter `other_ref` can not be null.")), *(MR::CSharp::LifetimesB *)(other_ref))
    ));
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA(MR_CSharp_LifetimesA *ref)
{
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB(MR_CSharp_LifetimesB *ref)
{
    return (MR_CSharp_LifetimesD *)new MR::CSharp::LifetimesD(MR::CSharp::LifetimesD(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesB *)(ref))
    ));
}

void MR_CSharp_LifetimesD_Destroy(const MR_CSharp_LifetimesD *_this)
{
    delete ((const MR::CSharp::LifetimesD *)_this);
}

void MR_CSharp_LifetimesD_DestroyArray(const MR_CSharp_LifetimesD *_this)
{
    delete[] ((const MR::CSharp::LifetimesD *)_this);
}

MR_CSharp_LifetimesD *MR_CSharp_LifetimesD_AssignFromAnother(MR_CSharp_LifetimesD *_this, const MR_CSharp_LifetimesD *_other)
{
    return (MR_CSharp_LifetimesD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::LifetimesD(*(MR::CSharp::LifetimesD *)_other))
    ));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_get(MR_CSharp_LifetimesD *_this)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).get());
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    return (MR_CSharp_LifetimesA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).return_ref(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
}

MR_CSharp_LifetimesA *MR_CSharp_LifetimesD_return_ref_static(MR_CSharp_LifetimesA *ref)
{
    return (MR_CSharp_LifetimesA *)std::addressof(MR::CSharp::LifetimesD::return_ref_static(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    ));
}

void MR_CSharp_LifetimesD_store_ref_in_this(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_ref_in_this(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    );
}

void MR_CSharp_LifetimesD_store_ref_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref, MR_CSharp_LifetimesB *other_ref)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_ref_in_param(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref)),
        ((other_ref ? void() : throw std::runtime_error("Parameter `other_ref` can not be null.")), *(MR::CSharp::LifetimesB *)(other_ref))
    );
}

void MR_CSharp_LifetimesD_store_this_in_param(MR_CSharp_LifetimesD *_this, MR_CSharp_LifetimesA *ref)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::LifetimesD *)(_this)).store_this_in_param(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(MR::CSharp::LifetimesA *)(ref))
    );
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
    return (MR_CSharp_IterableA *)new MR::CSharp::IterableA(MR::CSharp::IterableA());
}

MR_CSharp_IterableA *MR_CSharp_IterableA_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableA *)(new MR::CSharp::IterableA[num_elems]{});
}

const MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetPtr(const MR_CSharp_IterableA *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableA *)(((const MR::CSharp::IterableA *)ptr) + i);
}

MR_CSharp_IterableA *MR_CSharp_IterableA_OffsetMutablePtr(MR_CSharp_IterableA *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableA *)(((MR::CSharp::IterableA *)ptr) + i);
}

MR_CSharp_IterableA *MR_CSharp_IterableA_ConstructFromAnother(const MR_CSharp_IterableA *_other)
{
    return (MR_CSharp_IterableA *)new MR::CSharp::IterableA(MR::CSharp::IterableA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableA(*(MR::CSharp::IterableA *)_other))
    ));
}

void MR_CSharp_IterableA_Destroy(const MR_CSharp_IterableA *_this)
{
    delete ((const MR::CSharp::IterableA *)_this);
}

void MR_CSharp_IterableA_DestroyArray(const MR_CSharp_IterableA *_this)
{
    delete[] ((const MR::CSharp::IterableA *)_this);
}

MR_CSharp_IterableA *MR_CSharp_IterableA_AssignFromAnother(MR_CSharp_IterableA *_this, const MR_CSharp_IterableA *_other)
{
    return (MR_CSharp_IterableA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableA(*(MR::CSharp::IterableA *)_other))
    ));
}

const int *MR_CSharp_IterableA_begin(const MR_CSharp_IterableA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableA *)(_this)).begin();
}

const int *MR_CSharp_IterableA_end(const MR_CSharp_IterableA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableA *)(_this)).end();
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
    return (MR_CSharp_IterableB *)new MR::CSharp::IterableB(MR::CSharp::IterableB());
}

MR_CSharp_IterableB *MR_CSharp_IterableB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableB *)(new MR::CSharp::IterableB[num_elems]{});
}

const MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetPtr(const MR_CSharp_IterableB *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableB *)(((const MR::CSharp::IterableB *)ptr) + i);
}

MR_CSharp_IterableB *MR_CSharp_IterableB_OffsetMutablePtr(MR_CSharp_IterableB *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableB *)(((MR::CSharp::IterableB *)ptr) + i);
}

MR_CSharp_IterableB *MR_CSharp_IterableB_ConstructFromAnother(const MR_CSharp_IterableB *_other)
{
    return (MR_CSharp_IterableB *)new MR::CSharp::IterableB(MR::CSharp::IterableB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableB(*(MR::CSharp::IterableB *)_other))
    ));
}

void MR_CSharp_IterableB_Destroy(const MR_CSharp_IterableB *_this)
{
    delete ((const MR::CSharp::IterableB *)_this);
}

void MR_CSharp_IterableB_DestroyArray(const MR_CSharp_IterableB *_this)
{
    delete[] ((const MR::CSharp::IterableB *)_this);
}

MR_CSharp_IterableB *MR_CSharp_IterableB_AssignFromAnother(MR_CSharp_IterableB *_this, const MR_CSharp_IterableB *_other)
{
    return (MR_CSharp_IterableB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableB(*(MR::CSharp::IterableB *)_other))
    ));
}

int *MR_CSharp_IterableB_begin(MR_CSharp_IterableB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).begin();
}

int *MR_CSharp_IterableB_end(MR_CSharp_IterableB *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableB *)(_this)).end();
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
    return (MR_CSharp_IterableC *)new MR::CSharp::IterableC(MR::CSharp::IterableC());
}

MR_CSharp_IterableC *MR_CSharp_IterableC_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableC *)(new MR::CSharp::IterableC[num_elems]{});
}

const MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetPtr(const MR_CSharp_IterableC *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableC *)(((const MR::CSharp::IterableC *)ptr) + i);
}

MR_CSharp_IterableC *MR_CSharp_IterableC_OffsetMutablePtr(MR_CSharp_IterableC *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableC *)(((MR::CSharp::IterableC *)ptr) + i);
}

MR_CSharp_IterableC *MR_CSharp_IterableC_ConstructFromAnother(const MR_CSharp_IterableC *_other)
{
    return (MR_CSharp_IterableC *)new MR::CSharp::IterableC(MR::CSharp::IterableC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableC(*(MR::CSharp::IterableC *)_other))
    ));
}

void MR_CSharp_IterableC_Destroy(const MR_CSharp_IterableC *_this)
{
    delete ((const MR::CSharp::IterableC *)_this);
}

void MR_CSharp_IterableC_DestroyArray(const MR_CSharp_IterableC *_this)
{
    delete[] ((const MR::CSharp::IterableC *)_this);
}

MR_CSharp_IterableC *MR_CSharp_IterableC_AssignFromAnother(MR_CSharp_IterableC *_this, const MR_CSharp_IterableC *_other)
{
    return (MR_CSharp_IterableC *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableC(*(MR::CSharp::IterableC *)_other))
    ));
}

int *MR_CSharp_IterableC_begin(MR_CSharp_IterableC *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).begin();
}

int *MR_CSharp_IterableC_end(MR_CSharp_IterableC *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableC *)(_this)).end();
}

const int *MR_CSharp_IterableC_begin_const(const MR_CSharp_IterableC *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableC *)(_this)).begin();
}

const int *MR_CSharp_IterableC_end_const(const MR_CSharp_IterableC *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::IterableC *)(_this)).end();
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
    return (MR_CSharp_IterableD *)new MR::CSharp::IterableD(MR::CSharp::IterableD());
}

MR_CSharp_IterableD *MR_CSharp_IterableD_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableD *)(new MR::CSharp::IterableD[num_elems]{});
}

const MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetPtr(const MR_CSharp_IterableD *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableD *)(((const MR::CSharp::IterableD *)ptr) + i);
}

MR_CSharp_IterableD *MR_CSharp_IterableD_OffsetMutablePtr(MR_CSharp_IterableD *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableD *)(((MR::CSharp::IterableD *)ptr) + i);
}

MR_CSharp_IterableD *MR_CSharp_IterableD_ConstructFromAnother(const MR_CSharp_IterableD *_other)
{
    return (MR_CSharp_IterableD *)new MR::CSharp::IterableD(MR::CSharp::IterableD(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableD(*(MR::CSharp::IterableD *)_other))
    ));
}

void MR_CSharp_IterableD_Destroy(const MR_CSharp_IterableD *_this)
{
    delete ((const MR::CSharp::IterableD *)_this);
}

void MR_CSharp_IterableD_DestroyArray(const MR_CSharp_IterableD *_this)
{
    delete[] ((const MR::CSharp::IterableD *)_this);
}

MR_CSharp_IterableD *MR_CSharp_IterableD_AssignFromAnother(MR_CSharp_IterableD *_this, const MR_CSharp_IterableD *_other)
{
    return (MR_CSharp_IterableD *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableD *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableD(*(MR::CSharp::IterableD *)_other))
    ));
}

const int *MR_CSharp_begin_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self)
{
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableD *)(self))
    );
}

const int *MR_CSharp_end_const_MR_CSharp_IterableD_ref(const MR_CSharp_IterableD *self)
{
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableD *)(self))
    );
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
    return (MR_CSharp_IterableE *)new MR::CSharp::IterableE(MR::CSharp::IterableE());
}

MR_CSharp_IterableE *MR_CSharp_IterableE_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableE *)(new MR::CSharp::IterableE[num_elems]{});
}

const MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetPtr(const MR_CSharp_IterableE *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableE *)(((const MR::CSharp::IterableE *)ptr) + i);
}

MR_CSharp_IterableE *MR_CSharp_IterableE_OffsetMutablePtr(MR_CSharp_IterableE *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableE *)(((MR::CSharp::IterableE *)ptr) + i);
}

MR_CSharp_IterableE *MR_CSharp_IterableE_ConstructFromAnother(const MR_CSharp_IterableE *_other)
{
    return (MR_CSharp_IterableE *)new MR::CSharp::IterableE(MR::CSharp::IterableE(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableE(*(MR::CSharp::IterableE *)_other))
    ));
}

void MR_CSharp_IterableE_Destroy(const MR_CSharp_IterableE *_this)
{
    delete ((const MR::CSharp::IterableE *)_this);
}

void MR_CSharp_IterableE_DestroyArray(const MR_CSharp_IterableE *_this)
{
    delete[] ((const MR::CSharp::IterableE *)_this);
}

MR_CSharp_IterableE *MR_CSharp_IterableE_AssignFromAnother(MR_CSharp_IterableE *_this, const MR_CSharp_IterableE *_other)
{
    return (MR_CSharp_IterableE *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableE *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableE(*(MR::CSharp::IterableE *)_other))
    ));
}

int *MR_CSharp_begin_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self)
{
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableE *)(self))
    );
}

int *MR_CSharp_end_MR_CSharp_IterableE_ref(MR_CSharp_IterableE *self)
{
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableE *)(self))
    );
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
    return (MR_CSharp_IterableF *)new MR::CSharp::IterableF(MR::CSharp::IterableF());
}

MR_CSharp_IterableF *MR_CSharp_IterableF_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableF *)(new MR::CSharp::IterableF[num_elems]{});
}

const MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetPtr(const MR_CSharp_IterableF *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableF *)(((const MR::CSharp::IterableF *)ptr) + i);
}

MR_CSharp_IterableF *MR_CSharp_IterableF_OffsetMutablePtr(MR_CSharp_IterableF *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableF *)(((MR::CSharp::IterableF *)ptr) + i);
}

MR_CSharp_IterableF *MR_CSharp_IterableF_ConstructFromAnother(const MR_CSharp_IterableF *_other)
{
    return (MR_CSharp_IterableF *)new MR::CSharp::IterableF(MR::CSharp::IterableF(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableF(*(MR::CSharp::IterableF *)_other))
    ));
}

void MR_CSharp_IterableF_Destroy(const MR_CSharp_IterableF *_this)
{
    delete ((const MR::CSharp::IterableF *)_this);
}

void MR_CSharp_IterableF_DestroyArray(const MR_CSharp_IterableF *_this)
{
    delete[] ((const MR::CSharp::IterableF *)_this);
}

MR_CSharp_IterableF *MR_CSharp_IterableF_AssignFromAnother(MR_CSharp_IterableF *_this, const MR_CSharp_IterableF *_other)
{
    return (MR_CSharp_IterableF *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableF *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableF(*(MR::CSharp::IterableF *)_other))
    ));
}

const int *MR_CSharp_begin_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self)
{
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableF *)(self))
    );
}

const int *MR_CSharp_end_const_MR_CSharp_IterableF_ref(const MR_CSharp_IterableF *self)
{
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(const MR::CSharp::IterableF *)(self))
    );
}

int *MR_CSharp_begin_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self)
{
    return begin(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableF *)(self))
    );
}

int *MR_CSharp_end_MR_CSharp_IterableF_ref(MR_CSharp_IterableF *self)
{
    return end(
        ((self ? void() : throw std::runtime_error("Parameter `self` can not be null.")), *(MR::CSharp::IterableF *)(self))
    );
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
    return (MR_CSharp_IterableG *)new MR::CSharp::IterableG(MR::CSharp::IterableG());
}

MR_CSharp_IterableG *MR_CSharp_IterableG_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableG *)(new MR::CSharp::IterableG[num_elems]{});
}

const MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetPtr(const MR_CSharp_IterableG *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableG *)(((const MR::CSharp::IterableG *)ptr) + i);
}

MR_CSharp_IterableG *MR_CSharp_IterableG_OffsetMutablePtr(MR_CSharp_IterableG *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableG *)(((MR::CSharp::IterableG *)ptr) + i);
}

MR_CSharp_IterableG *MR_CSharp_IterableG_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other)
{
    return (MR_CSharp_IterableG *)new MR::CSharp::IterableG(MR::CSharp::IterableG(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableG) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableG) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableG))
    ));
}

void MR_CSharp_IterableG_Destroy(const MR_CSharp_IterableG *_this)
{
    delete ((const MR::CSharp::IterableG *)_this);
}

void MR_CSharp_IterableG_DestroyArray(const MR_CSharp_IterableG *_this)
{
    delete[] ((const MR::CSharp::IterableG *)_this);
}

MR_CSharp_IterableG *MR_CSharp_IterableG_AssignFromAnother(MR_CSharp_IterableG *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableG *_other)
{
    return (MR_CSharp_IterableG *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableG) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableG), MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableG) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableG) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableG))
    ));
}

MR_C_std_string *MR_CSharp_IterableG_begin(MR_CSharp_IterableG *_this)
{
    return (MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).begin());
}

MR_C_std_string *MR_CSharp_IterableG_end(MR_CSharp_IterableG *_this)
{
    return (MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableG *)(_this)).end());
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
    return (MR_CSharp_IterableH *)new MR::CSharp::IterableH(MR::CSharp::IterableH());
}

MR_CSharp_IterableH *MR_CSharp_IterableH_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableH *)(new MR::CSharp::IterableH[num_elems]{});
}

const MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetPtr(const MR_CSharp_IterableH *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableH *)(((const MR::CSharp::IterableH *)ptr) + i);
}

MR_CSharp_IterableH *MR_CSharp_IterableH_OffsetMutablePtr(MR_CSharp_IterableH *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableH *)(((MR::CSharp::IterableH *)ptr) + i);
}

MR_CSharp_IterableH *MR_CSharp_IterableH_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other)
{
    return (MR_CSharp_IterableH *)new MR::CSharp::IterableH(MR::CSharp::IterableH(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableH) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableH) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableH))
    ));
}

void MR_CSharp_IterableH_Destroy(const MR_CSharp_IterableH *_this)
{
    delete ((const MR::CSharp::IterableH *)_this);
}

void MR_CSharp_IterableH_DestroyArray(const MR_CSharp_IterableH *_this)
{
    delete[] ((const MR::CSharp::IterableH *)_this);
}

MR_CSharp_IterableH *MR_CSharp_IterableH_AssignFromAnother(MR_CSharp_IterableH *_this, MR_C_PassBy _other_pass_by, MR_CSharp_IterableH *_other)
{
    return (MR_CSharp_IterableH *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::IterableH) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::IterableH), MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::IterableH) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::IterableH) MRBINDC_CLASSARG_END(_other, MR::CSharp::IterableH))
    ));
}

const MR_C_std_string *MR_CSharp_IterableH_begin(MR_CSharp_IterableH *_this)
{
    return (const MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).begin());
}

const MR_C_std_string *MR_CSharp_IterableH_end(MR_CSharp_IterableH *_this)
{
    return (const MR_C_std_string *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableH *)(_this)).end());
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
    return (MR_CSharp_IterableI *)new MR::CSharp::IterableI(MR::CSharp::IterableI());
}

MR_CSharp_IterableI *MR_CSharp_IterableI_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableI *)(new MR::CSharp::IterableI[num_elems]{});
}

const MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetPtr(const MR_CSharp_IterableI *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableI *)(((const MR::CSharp::IterableI *)ptr) + i);
}

MR_CSharp_IterableI *MR_CSharp_IterableI_OffsetMutablePtr(MR_CSharp_IterableI *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableI *)(((MR::CSharp::IterableI *)ptr) + i);
}

MR_CSharp_IterableI *MR_CSharp_IterableI_ConstructFromAnother(const MR_CSharp_IterableI *_other)
{
    return (MR_CSharp_IterableI *)new MR::CSharp::IterableI(MR::CSharp::IterableI(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableI(*(MR::CSharp::IterableI *)_other))
    ));
}

void MR_CSharp_IterableI_Destroy(const MR_CSharp_IterableI *_this)
{
    delete ((const MR::CSharp::IterableI *)_this);
}

void MR_CSharp_IterableI_DestroyArray(const MR_CSharp_IterableI *_this)
{
    delete[] ((const MR::CSharp::IterableI *)_this);
}

MR_CSharp_IterableI *MR_CSharp_IterableI_AssignFromAnother(MR_CSharp_IterableI *_this, const MR_CSharp_IterableI *_other)
{
    return (MR_CSharp_IterableI *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableI(*(MR::CSharp::IterableI *)_other))
    ));
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableI_begin(MR_CSharp_IterableI *_this)
{
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).begin());
}

MR_CSharp_ExposedLayout *MR_CSharp_IterableI_end(MR_CSharp_IterableI *_this)
{
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableI *)(_this)).end());
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
    return (MR_CSharp_IterableJ *)new MR::CSharp::IterableJ(MR::CSharp::IterableJ());
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_IterableJ *)(new MR::CSharp::IterableJ[num_elems]{});
}

const MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetPtr(const MR_CSharp_IterableJ *ptr, ptrdiff_t i)
{
    return (const MR_CSharp_IterableJ *)(((const MR::CSharp::IterableJ *)ptr) + i);
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_OffsetMutablePtr(MR_CSharp_IterableJ *ptr, ptrdiff_t i)
{
    return (MR_CSharp_IterableJ *)(((MR::CSharp::IterableJ *)ptr) + i);
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_ConstructFromAnother(const MR_CSharp_IterableJ *_other)
{
    return (MR_CSharp_IterableJ *)new MR::CSharp::IterableJ(MR::CSharp::IterableJ(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableJ(*(MR::CSharp::IterableJ *)_other))
    ));
}

void MR_CSharp_IterableJ_Destroy(const MR_CSharp_IterableJ *_this)
{
    delete ((const MR::CSharp::IterableJ *)_this);
}

void MR_CSharp_IterableJ_DestroyArray(const MR_CSharp_IterableJ *_this)
{
    delete[] ((const MR::CSharp::IterableJ *)_this);
}

MR_CSharp_IterableJ *MR_CSharp_IterableJ_AssignFromAnother(MR_CSharp_IterableJ *_this, const MR_CSharp_IterableJ *_other)
{
    return (MR_CSharp_IterableJ *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::IterableJ(*(MR::CSharp::IterableJ *)_other))
    ));
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_begin(MR_CSharp_IterableJ *_this)
{
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).begin());
}

const MR_CSharp_ExposedLayout *MR_CSharp_IterableJ_end(MR_CSharp_IterableJ *_this)
{
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::IterableJ *)(_this)).end());
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)new std::expected<int, float>(::MR::CSharp::test_expected_int(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<int, float>(*(std::expected<int, float> *)a)),
        (b ? std::expected<int, float>(*(std::expected<int, float> *)b) : static_cast<std::expected<int, float>>(std::expected<int, float>{42}))
    ));
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ref(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)std::addressof(::MR::CSharp::test_expected_int_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<int, float> *)(a)),
        (b ? *(std::expected<int, float> *)(b) : static_cast<std::expected<int, float> &>(default_expected_int))
    ));
}

const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cref(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_int_float *)std::addressof(::MR::CSharp::test_expected_int_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<int, float> *)(a)),
        (b ? *(const std::expected<int, float> *)(b) : static_cast<const std::expected<int, float> &>(default_expected_int))
    ));
}

MR_C_std_expected_int_float *MR_CSharp_test_expected_int_ptr(MR_C_std_expected_int_float *a, MR_C_std_expected_int_float *b, MR_C_std_expected_int_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_int_float *)(::MR::CSharp::test_expected_int_ptr(
        ((std::expected<int, float> *)a),
        ((std::expected<int, float> *)b),
        (c ? (std::expected<int, float> *)(*c) : static_cast<std::expected<int, float> *>(&default_expected_int))
    ));
}

const MR_C_std_expected_int_float *MR_CSharp_test_expected_int_cptr(const MR_C_std_expected_int_float *a, const MR_C_std_expected_int_float *b, const MR_C_std_expected_int_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_int_float *)(::MR::CSharp::test_expected_int_cptr(
        ((const std::expected<int, float> *)a),
        ((const std::expected<int, float> *)b),
        (c ? (const std::expected<int, float> *)(*c) : static_cast<const std::expected<int, float> *>(&default_expected_int))
    ));
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)new std::expected<void, float>(::MR::CSharp::test_expected_void(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<void, float>(*(std::expected<void, float> *)a)),
        (b ? std::expected<void, float>(*(std::expected<void, float> *)b) : static_cast<std::expected<void, float>>(std::expected<void, float>{}))
    ));
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ref(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)std::addressof(::MR::CSharp::test_expected_void_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<void, float> *)(a)),
        (b ? *(std::expected<void, float> *)(b) : static_cast<std::expected<void, float> &>(default_expected_void))
    ));
}

const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cref(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_void_float *)std::addressof(::MR::CSharp::test_expected_void_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<void, float> *)(a)),
        (b ? *(const std::expected<void, float> *)(b) : static_cast<const std::expected<void, float> &>(default_expected_void))
    ));
}

MR_C_std_expected_void_float *MR_CSharp_test_expected_void_ptr(MR_C_std_expected_void_float *a, MR_C_std_expected_void_float *b, MR_C_std_expected_void_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_void_float *)(::MR::CSharp::test_expected_void_ptr(
        ((std::expected<void, float> *)a),
        ((std::expected<void, float> *)b),
        (c ? (std::expected<void, float> *)(*c) : static_cast<std::expected<void, float> *>(&default_expected_void))
    ));
}

const MR_C_std_expected_void_float *MR_CSharp_test_expected_void_cptr(const MR_C_std_expected_void_float *a, const MR_C_std_expected_void_float *b, const MR_C_std_expected_void_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_void_float *)(::MR::CSharp::test_expected_void_cptr(
        ((const std::expected<void, float> *)a),
        ((const std::expected<void, float> *)b),
        (c ? (const std::expected<void, float> *)(*c) : static_cast<const std::expected<void, float> *>(&default_expected_void))
    ));
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)new std::expected<MR::CSharp::E1, float>(::MR::CSharp::test_expected_enum(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::E1, float>(*(std::expected<MR::CSharp::E1, float> *)a)),
        (b ? std::expected<MR::CSharp::E1, float>(*(std::expected<MR::CSharp::E1, float> *)b) : static_cast<std::expected<MR::CSharp::E1, float>>(std::expected<MR::CSharp::E1, float>{E1::b}))
    ));
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ref(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)std::addressof(::MR::CSharp::test_expected_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::E1, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::E1, float> *)(b) : static_cast<std::expected<MR::CSharp::E1, float> &>(default_expected_enum))
    ));
}

const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cref(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_E1_float *)std::addressof(::MR::CSharp::test_expected_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::E1, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::E1, float> *)(b) : static_cast<const std::expected<MR::CSharp::E1, float> &>(default_expected_enum))
    ));
}

MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_ptr(MR_C_std_expected_MR_CSharp_E1_float *a, MR_C_std_expected_MR_CSharp_E1_float *b, MR_C_std_expected_MR_CSharp_E1_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_E1_float *)(::MR::CSharp::test_expected_enum_ptr(
        ((std::expected<MR::CSharp::E1, float> *)a),
        ((std::expected<MR::CSharp::E1, float> *)b),
        (c ? (std::expected<MR::CSharp::E1, float> *)(*c) : static_cast<std::expected<MR::CSharp::E1, float> *>(&default_expected_enum))
    ));
}

const MR_C_std_expected_MR_CSharp_E1_float *MR_CSharp_test_expected_enum_cptr(const MR_C_std_expected_MR_CSharp_E1_float *a, const MR_C_std_expected_MR_CSharp_E1_float *b, const MR_C_std_expected_MR_CSharp_E1_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_E1_float *)(::MR::CSharp::test_expected_enum_cptr(
        ((const std::expected<MR::CSharp::E1, float> *)a),
        ((const std::expected<MR::CSharp::E1, float> *)b),
        (c ? (const std::expected<MR::CSharp::E1, float> *)(*c) : static_cast<const std::expected<MR::CSharp::E1, float> *>(&default_expected_enum))
    ));
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)new std::expected<MR::CSharp::Trivial, float>(::MR::CSharp::test_expected_triv(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::Trivial, float>(*(std::expected<MR::CSharp::Trivial, float> *)a)),
        (b ? std::expected<MR::CSharp::Trivial, float>(*(std::expected<MR::CSharp::Trivial, float> *)b) : static_cast<std::expected<MR::CSharp::Trivial, float>>(std::expected<MR::CSharp::Trivial, float>{MR::CSharp::Trivial{}}))
    ));
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ref(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)std::addressof(::MR::CSharp::test_expected_triv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::Trivial, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::Trivial, float> *)(b) : static_cast<std::expected<MR::CSharp::Trivial, float> &>(default_expected_triv))
    ));
}

const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cref(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_Trivial_float *)std::addressof(::MR::CSharp::test_expected_triv_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::Trivial, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::Trivial, float> *)(b) : static_cast<const std::expected<MR::CSharp::Trivial, float> &>(default_expected_triv))
    ));
}

MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_ptr(MR_C_std_expected_MR_CSharp_Trivial_float *a, MR_C_std_expected_MR_CSharp_Trivial_float *b, MR_C_std_expected_MR_CSharp_Trivial_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_Trivial_float *)(::MR::CSharp::test_expected_triv_ptr(
        ((std::expected<MR::CSharp::Trivial, float> *)a),
        ((std::expected<MR::CSharp::Trivial, float> *)b),
        (c ? (std::expected<MR::CSharp::Trivial, float> *)(*c) : static_cast<std::expected<MR::CSharp::Trivial, float> *>(&default_expected_triv))
    ));
}

const MR_C_std_expected_MR_CSharp_Trivial_float *MR_CSharp_test_expected_triv_cptr(const MR_C_std_expected_MR_CSharp_Trivial_float *a, const MR_C_std_expected_MR_CSharp_Trivial_float *b, const MR_C_std_expected_MR_CSharp_Trivial_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_Trivial_float *)(::MR::CSharp::test_expected_triv_cptr(
        ((const std::expected<MR::CSharp::Trivial, float> *)a),
        ((const std::expected<MR::CSharp::Trivial, float> *)b),
        (c ? (const std::expected<MR::CSharp::Trivial, float> *)(*c) : static_cast<const std::expected<MR::CSharp::Trivial, float> *>(&default_expected_triv))
    ));
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv(MR_C_PassBy a_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_PassBy b_pass_by, MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)new std::expected<MR::CSharp::NonTrivial, float>(::MR::CSharp::test_expected_nontriv(
        (MRBINDC_CLASSARG_DEF_CTOR(a, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(a, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(a, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_DefaultArgument, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(a, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(a, std::expected<MR::CSharp::NonTrivial, float>)),
        (MRBINDC_CLASSARG_DEF_CTOR(b, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_COPY(b, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_MOVE(b, (std::expected<MR::CSharp::NonTrivial, float>), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_DEF_ARG(b, (MR_C_PassBy_DefaultArgument), (std::expected<MR::CSharp::NonTrivial, float>{MR::CSharp::NonTrivial{}}), std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_NO_DEF_ARG(b, MR_C_PassBy_NoObject, std::expected<MR::CSharp::NonTrivial, float>) MRBINDC_CLASSARG_END(b, std::expected<MR::CSharp::NonTrivial, float>))
    ));
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ref(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)std::addressof(::MR::CSharp::test_expected_nontriv_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::NonTrivial, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::NonTrivial, float> *)(b) : static_cast<std::expected<MR::CSharp::NonTrivial, float> &>(default_expected_nontriv))
    ));
}

const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cref(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_NonTrivial_float *)std::addressof(::MR::CSharp::test_expected_nontriv_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::NonTrivial, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::NonTrivial, float> *)(b) : static_cast<const std::expected<MR::CSharp::NonTrivial, float> &>(default_expected_nontriv))
    ));
}

MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_ptr(MR_C_std_expected_MR_CSharp_NonTrivial_float *a, MR_C_std_expected_MR_CSharp_NonTrivial_float *b, MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_NonTrivial_float *)(::MR::CSharp::test_expected_nontriv_ptr(
        ((std::expected<MR::CSharp::NonTrivial, float> *)a),
        ((std::expected<MR::CSharp::NonTrivial, float> *)b),
        (c ? (std::expected<MR::CSharp::NonTrivial, float> *)(*c) : static_cast<std::expected<MR::CSharp::NonTrivial, float> *>(&default_expected_nontriv))
    ));
}

const MR_C_std_expected_MR_CSharp_NonTrivial_float *MR_CSharp_test_expected_nontriv_cptr(const MR_C_std_expected_MR_CSharp_NonTrivial_float *a, const MR_C_std_expected_MR_CSharp_NonTrivial_float *b, const MR_C_std_expected_MR_CSharp_NonTrivial_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_NonTrivial_float *)(::MR::CSharp::test_expected_nontriv_cptr(
        ((const std::expected<MR::CSharp::NonTrivial, float> *)a),
        ((const std::expected<MR::CSharp::NonTrivial, float> *)b),
        (c ? (const std::expected<MR::CSharp::NonTrivial, float> *)(*c) : static_cast<const std::expected<MR::CSharp::NonTrivial, float> *>(&default_expected_nontriv))
    ));
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)new std::expected<MR::CSharp::SA, float>(::MR::CSharp::test_expected_shared(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::SA, float>(*(std::expected<MR::CSharp::SA, float> *)a)),
        (b ? std::expected<MR::CSharp::SA, float>(*(std::expected<MR::CSharp::SA, float> *)b) : static_cast<std::expected<MR::CSharp::SA, float>>(std::expected<MR::CSharp::SA, float>{MR::CSharp::SA{}}))
    ));
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ref(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)std::addressof(::MR::CSharp::test_expected_shared_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::SA, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::SA, float> *)(b) : static_cast<std::expected<MR::CSharp::SA, float> &>(default_expected_shared))
    ));
}

const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cref(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_SA_float *)std::addressof(::MR::CSharp::test_expected_shared_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::SA, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::SA, float> *)(b) : static_cast<const std::expected<MR::CSharp::SA, float> &>(default_expected_shared))
    ));
}

MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_ptr(MR_C_std_expected_MR_CSharp_SA_float *a, MR_C_std_expected_MR_CSharp_SA_float *b, MR_C_std_expected_MR_CSharp_SA_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_SA_float *)(::MR::CSharp::test_expected_shared_ptr(
        ((std::expected<MR::CSharp::SA, float> *)a),
        ((std::expected<MR::CSharp::SA, float> *)b),
        (c ? (std::expected<MR::CSharp::SA, float> *)(*c) : static_cast<std::expected<MR::CSharp::SA, float> *>(&default_expected_shared))
    ));
}

const MR_C_std_expected_MR_CSharp_SA_float *MR_CSharp_test_expected_shared_cptr(const MR_C_std_expected_MR_CSharp_SA_float *a, const MR_C_std_expected_MR_CSharp_SA_float *b, const MR_C_std_expected_MR_CSharp_SA_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_SA_float *)(::MR::CSharp::test_expected_shared_cptr(
        ((const std::expected<MR::CSharp::SA, float> *)a),
        ((const std::expected<MR::CSharp::SA, float> *)b),
        (c ? (const std::expected<MR::CSharp::SA, float> *)(*c) : static_cast<const std::expected<MR::CSharp::SA, float> *>(&default_expected_shared))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)new std::expected<MR::CSharp::ExposedLayout, float>(::MR::CSharp::test_expected_exposed(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)a)),
        (b ? std::expected<MR::CSharp::ExposedLayout, float>(*(std::expected<MR::CSharp::ExposedLayout, float> *)b) : static_cast<std::expected<MR::CSharp::ExposedLayout, float>>(std::expected<MR::CSharp::ExposedLayout, float>{MR::CSharp::ExposedLayout{}}))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ref(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)std::addressof(::MR::CSharp::test_expected_exposed_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::ExposedLayout, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::ExposedLayout, float> *)(b) : static_cast<std::expected<MR::CSharp::ExposedLayout, float> &>(default_expected_exposed))
    ));
}

const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cref(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayout_float *)std::addressof(::MR::CSharp::test_expected_exposed_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayout, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::ExposedLayout, float> *)(b) : static_cast<const std::expected<MR::CSharp::ExposedLayout, float> &>(default_expected_exposed))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_ptr(MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayout_float *)(::MR::CSharp::test_expected_exposed_ptr(
        ((std::expected<MR::CSharp::ExposedLayout, float> *)a),
        ((std::expected<MR::CSharp::ExposedLayout, float> *)b),
        (c ? (std::expected<MR::CSharp::ExposedLayout, float> *)(*c) : static_cast<std::expected<MR::CSharp::ExposedLayout, float> *>(&default_expected_exposed))
    ));
}

const MR_C_std_expected_MR_CSharp_ExposedLayout_float *MR_CSharp_test_expected_exposed_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayout_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayout_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayout_float *)(::MR::CSharp::test_expected_exposed_cptr(
        ((const std::expected<MR::CSharp::ExposedLayout, float> *)a),
        ((const std::expected<MR::CSharp::ExposedLayout, float> *)b),
        (c ? (const std::expected<MR::CSharp::ExposedLayout, float> *)(*c) : static_cast<const std::expected<MR::CSharp::ExposedLayout, float> *>(&default_expected_exposed))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)new std::expected<MR::CSharp::ExposedLayoutSh, float>(::MR::CSharp::test_expected_exposed_shared(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)a)),
        (b ? std::expected<MR::CSharp::ExposedLayoutSh, float>(*(std::expected<MR::CSharp::ExposedLayoutSh, float> *)b) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float>>(std::expected<MR::CSharp::ExposedLayoutSh, float>{MR::CSharp::ExposedLayoutSh{}}))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ref(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)std::addressof(::MR::CSharp::test_expected_exposed_shared_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(a)),
        (b ? *(std::expected<MR::CSharp::ExposedLayoutSh, float> *)(b) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float> &>(default_expected_exposed_shared))
    ));
}

const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cref(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)std::addressof(::MR::CSharp::test_expected_exposed_shared_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(a)),
        (b ? *(const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(b) : static_cast<const std::expected<MR::CSharp::ExposedLayoutSh, float> &>(default_expected_exposed_shared))
    ));
}

MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_ptr(MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(::MR::CSharp::test_expected_exposed_shared_ptr(
        ((std::expected<MR::CSharp::ExposedLayoutSh, float> *)a),
        ((std::expected<MR::CSharp::ExposedLayoutSh, float> *)b),
        (c ? (std::expected<MR::CSharp::ExposedLayoutSh, float> *)(*c) : static_cast<std::expected<MR::CSharp::ExposedLayoutSh, float> *>(&default_expected_exposed_shared))
    ));
}

const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *MR_CSharp_test_expected_exposed_shared_cptr(const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *a, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *b, const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_expected_MR_CSharp_ExposedLayoutSh_float *)(::MR::CSharp::test_expected_exposed_shared_cptr(
        ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)a),
        ((const std::expected<MR::CSharp::ExposedLayoutSh, float> *)b),
        (c ? (const std::expected<MR::CSharp::ExposedLayoutSh, float> *)(*c) : static_cast<const std::expected<MR::CSharp::ExposedLayoutSh, float> *>(&default_expected_exposed_shared))
    ));
}


#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_csharp.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>


void MR_CSharp_foo(void)
{
    ::MR::CSharp::foo();
}

int32_t MR_CSharp_test_int(int32_t a, const int32_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int(
        a,
        (b ? *b : static_cast<int32_t>(42))
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

int32_t MR_CSharp_test_bool_ref2(bool *a, bool *b)
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
    return &(::MR::CSharp::get_bool_ref());
}

void MR_CSharp_print_bool_ref(void)
{
    ::MR::CSharp::print_bool_ref();
}

const bool *MR_CSharp_test_bool_cref(const bool *_1, const bool *_2)
{
    using namespace MR;
    using namespace CSharp;
    return &(::MR::CSharp::test_bool_cref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        (_2 ? *_2 : static_cast<const bool &>(default_bool))
    ));
}

int32_t *MR_CSharp_test_int_ref(int32_t *a, int32_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return &(::MR::CSharp::test_int_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<int32_t &>(default_int))
    ));
}

const int32_t *MR_CSharp_test_int_cref(const int32_t *a, const int32_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return &(::MR::CSharp::test_int_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const int32_t &>(default_int))
    ));
}

int32_t *MR_CSharp_test_int_ptr(int32_t *a, int32_t *b, int32_t *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_ptr(
        a,
        b,
        (c ? *c : static_cast<int32_t *>(&default_int))
    );
}

const int32_t *MR_CSharp_test_int_cptr(const int32_t *a, const int32_t *b, const int32_t *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_int_cptr(
        a,
        b,
        (c ? *c : static_cast<const int32_t *>(&default_int))
    );
}

uint16_t MR_CSharp_test_ushort(uint16_t a, const uint16_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort(
        a,
        (b ? *b : static_cast<uint16_t>(42))
    );
}

uint16_t *MR_CSharp_test_ushort_ref(uint16_t *a, uint16_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return &(::MR::CSharp::test_ushort_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<uint16_t &>(default_ushort))
    ));
}

const uint16_t *MR_CSharp_test_ushort_cref(const uint16_t *a, const uint16_t *b)
{
    using namespace MR;
    using namespace CSharp;
    return &(::MR::CSharp::test_ushort_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *a),
        (b ? *b : static_cast<const uint16_t &>(default_ushort))
    ));
}

uint16_t *MR_CSharp_test_ushort_ptr(uint16_t *a, uint16_t *b, uint16_t *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_ptr(
        a,
        b,
        (c ? *c : static_cast<uint16_t *>(&default_ushort))
    );
}

const uint16_t *MR_CSharp_test_ushort_cptr(const uint16_t *a, const uint16_t *b, const uint16_t *const *c)
{
    using namespace MR;
    using namespace CSharp;
    return ::MR::CSharp::test_ushort_cptr(
        a,
        b,
        (c ? *c : static_cast<const uint16_t *>(&default_ushort))
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
    return (MR_CSharp_E1 *)&(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E1 *)(a)),
        (b ? *(MR::CSharp::E1 *)(b) : static_cast<MR::CSharp::E1 &>(default_e1))
    ));
}

const MR_CSharp_E1 *MR_CSharp_test_enum_cref_MR_CSharp_E1(const MR_CSharp_E1 *a, const MR_CSharp_E1 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E1 *)&(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E1 *)(a)),
        (b ? *(const MR::CSharp::E1 *)(b) : static_cast<const MR::CSharp::E1 &>(default_e1))
    ));
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
    return (MR_CSharp_E2 *)&(::MR::CSharp::test_enum_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::E2 *)(a)),
        (b ? *(MR::CSharp::E2 *)(b) : static_cast<MR::CSharp::E2 &>(default_e2))
    ));
}

const MR_CSharp_E2 *MR_CSharp_test_enum_cref_MR_CSharp_E2(const MR_CSharp_E2 *a, const MR_CSharp_E2 *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_E2 *)&(::MR::CSharp::test_enum_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::E2 *)(a)),
        (b ? *(const MR::CSharp::E2 *)(b) : static_cast<const MR::CSharp::E2 &>(default_e2))
    ));
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

const int32_t *MR_CSharp_A_Get_a(const MR_CSharp_A *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).a);
}

void MR_CSharp_A_Set_a(MR_CSharp_A *_this, int32_t value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).a = value;
}

int32_t *MR_CSharp_A_GetMutable_a(MR_CSharp_A *_this)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).a);
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
    return (const MR_CSharp_B *)&(dynamic_cast<const MR::CSharp::B &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_B *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_B(MR_CSharp_A *object)
{
    return (MR_CSharp_B *)&(dynamic_cast<MR::CSharp::B &>(
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
    return (const MR_CSharp_C *)&(dynamic_cast<const MR::CSharp::C &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_C *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_C(MR_CSharp_A *object)
{
    return (MR_CSharp_C *)&(dynamic_cast<MR::CSharp::C &>(
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
    return (const MR_CSharp_F *)&(dynamic_cast<const MR::CSharp::F &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_F *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_F(MR_CSharp_A *object)
{
    return (MR_CSharp_F *)&(dynamic_cast<MR::CSharp::F &>(
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
    return (const MR_CSharp_G *)&(dynamic_cast<const MR::CSharp::G &>(
        ((object ? void() : throw std::runtime_error("Parameter `object` can not be null.")), *(const MR::CSharp::A *)(object))
    ));
}

MR_CSharp_G *MR_CSharp_A_MutableDynamicDowncastToOrFail_MR_CSharp_G(MR_CSharp_A *object)
{
    return (MR_CSharp_G *)&(dynamic_cast<MR::CSharp::G &>(
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
    return (MR_CSharp_A *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::A) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::A), MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::A) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::A) MRBINDC_CLASSARG_END(_other, MR::CSharp::A))
    ));
}

void MR_CSharp_A_foo(MR_CSharp_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).foo();
}

void MR_CSharp_A_bar(const MR_CSharp_A *_this, int32_t _1, int32_t _2)
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

void MR_CSharp_A_static_bar(int32_t _1, int32_t _2)
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

void MR_CSharp_A_virtual_bar(const MR_CSharp_A *_this, int32_t _1, int32_t _2)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::CSharp::A *)(_this)).virtual_bar(
        _1,
        _2
    );
}

int32_t *MR_CSharp_A_refs(MR_CSharp_A *_this, int32_t *x, int32_t *_2)
{
    return &(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::A *)(_this)).refs(
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

MR_CSharp_B *MR_CSharp_B_Construct(int32_t a, int32_t b)
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
    return (MR_CSharp_B *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::B *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::B) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::B), MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::B) MRBINDC_CLASSARG_END(_other, MR::CSharp::B))
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
    return (MR_CSharp_C *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::C *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::C) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::C), MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::C) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::C) MRBINDC_CLASSARG_END(_other, MR::CSharp::C))
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
    return (MR_CSharp_D *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::D *)(_this)).operator=(
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
    return (MR_CSharp_E *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::E *)(_this)).operator=(
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
    return (MR_CSharp_F *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::F *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::F) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::F), MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::F) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::F) MRBINDC_CLASSARG_END(_other, MR::CSharp::F))
    ));
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
    return (MR_CSharp_G *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::G *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::CSharp::G) MRBINDC_CLASSARG_COPY(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_MOVE(_other, (MR::CSharp::G), MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::CSharp::G) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::CSharp::G) MRBINDC_CLASSARG_END(_other, MR::CSharp::G))
    ));
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
    return (MR_CSharp_Trivial *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Trivial *)(_this)).operator=(
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
    return (MR_CSharp_TrivialDerived *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::TrivialDerived *)(_this)).operator=(
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
    return (MR_CSharp_Trivial *)&(::MR::CSharp::test_class_trivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::Trivial *)(a)),
        (b ? *(MR::CSharp::Trivial *)(b) : static_cast<MR::CSharp::Trivial &>(default_trivial))
    ));
}

const MR_CSharp_Trivial *MR_CSharp_test_class_trivial_cref(const MR_CSharp_Trivial *a, const MR_CSharp_Trivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_Trivial *)&(::MR::CSharp::test_class_trivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::Trivial *)(a)),
        (b ? *(const MR::CSharp::Trivial *)(b) : static_cast<const MR::CSharp::Trivial &>(default_trivial))
    ));
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
    return (MR_CSharp_NonTrivial *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivial *)(_this)).operator=(
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
    return (MR_CSharp_NonTrivialDerived *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::NonTrivialDerived *)(_this)).operator=(
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
    return (MR_CSharp_NonTrivial *)&(::MR::CSharp::test_class_nontrivial_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(MR::CSharp::NonTrivial *)(a)),
        (b ? *(MR::CSharp::NonTrivial *)(b) : static_cast<MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
}

const MR_CSharp_NonTrivial *MR_CSharp_test_class_nontrivial_cref(const MR_CSharp_NonTrivial *a, const MR_CSharp_NonTrivial *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_CSharp_NonTrivial *)&(::MR::CSharp::test_class_nontrivial_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const MR::CSharp::NonTrivial *)(a)),
        (b ? *(const MR::CSharp::NonTrivial *)(b) : static_cast<const MR::CSharp::NonTrivial &>(default_nontrivial))
    ));
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
    return (MR_CSharp_SA *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SA(*(MR::CSharp::SA *)_other))
    ));
}

MR_CSharp_SB *MR_CSharp_SB_DefaultConstruct(void)
{
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB());
}

MR_CSharp_SB *MR_CSharp_SB_DefaultConstructArray(size_t num_elems)
{
    return (MR_CSharp_SB *)(new MR::CSharp::SB[num_elems]{});
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

MR_CSharp_SB *MR_CSharp_SB_ConstructFromAnother(const MR_CSharp_SB *_other)
{
    return (MR_CSharp_SB *)new MR::CSharp::SB(MR::CSharp::SB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SB(*(MR::CSharp::SB *)_other))
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

MR_CSharp_SB *MR_CSharp_SB_AssignFromAnother(MR_CSharp_SB *_this, const MR_CSharp_SB *_other)
{
    return (MR_CSharp_SB *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SB(*(MR::CSharp::SB *)_other))
    ));
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

MR_CSharp_SC *MR_CSharp_SC_ConstructFromAnother(const MR_CSharp_SC *_other)
{
    return (MR_CSharp_SC *)new MR::CSharp::SC(MR::CSharp::SC(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SC(*(MR::CSharp::SC *)_other))
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

MR_CSharp_SC *MR_CSharp_SC_AssignFromAnother(MR_CSharp_SC *_this, const MR_CSharp_SC *_other)
{
    return (MR_CSharp_SC *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::SC *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::SC(*(MR::CSharp::SC *)_other))
    ));
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
    return (MR_C_std_shared_ptr_MR_CSharp_SA *)&(::MR::CSharp::test_shptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
}

const MR_C_std_shared_ptr_MR_CSharp_SA *MR_CSharp_test_shptr_cref(const MR_C_std_shared_ptr_MR_CSharp_SA *a, const MR_C_std_shared_ptr_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_MR_CSharp_SA *)&(::MR::CSharp::test_shptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<MR::CSharp::SA> &>(default_shptr))
    ));
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
    return (MR_C_std_shared_ptr_const_MR_CSharp_SA *)&(::MR::CSharp::test_shcptr_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
}

const MR_C_std_shared_ptr_const_MR_CSharp_SA *MR_CSharp_test_shcptr_cref(const MR_C_std_shared_ptr_const_MR_CSharp_SA *a, const MR_C_std_shared_ptr_const_MR_CSharp_SA *b)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_shared_ptr_const_MR_CSharp_SA *)&(::MR::CSharp::test_shcptr_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(const std::shared_ptr<const MR::CSharp::SA> *)(a)),
        (b ? *(const std::shared_ptr<const MR::CSharp::SA> *)(b) : static_cast<const std::shared_ptr<const MR::CSharp::SA> &>(default_shcptr))
    ));
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
    return (MR_C_std_string *)&(::MR::CSharp::test_string_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string *)(a)),
        (b ? *(std::string *)(b) : static_cast<std::string &>(default_string))
    ));
}

const MR_C_std_string *MR_CSharp_test_string_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string *)&(::MR::CSharp::test_string_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string(a, a_end) : std::string(a))),
        (b ? (b_end ? std::string(b, b_end) : std::string(b)) : std::string(default_string))
    ));
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
    return (MR_C_std_string_view *)&(::MR::CSharp::test_stringview_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::string_view *)(a)),
        (b ? *(std::string_view *)(b) : static_cast<std::string_view &>(default_stringview))
    ));
}

const MR_C_std_string_view *MR_CSharp_test_stringview_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    return (const MR_C_std_string_view *)&(::MR::CSharp::test_stringview_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::string_view(a, a_end) : std::string_view(a))),
        (b ? (b_end ? std::string_view(b, b_end) : std::string_view(b)) : std::string_view(default_stringview))
    ));
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
    return (MR_C_std_filesystem_path *)&(::MR::CSharp::test_fspath_ref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), *(std::filesystem::path *)(a)),
        (b ? *(std::filesystem::path *)(b) : static_cast<std::filesystem::path &>(default_fspath))
    ));
}

const MR_C_std_filesystem_path *MR_CSharp_test_fspath_cref(const char *a, const char *a_end, const char *b, const char *b_end)
{
    using namespace MR;
    using namespace CSharp;
    MRBINDC_IGNORE_DEPRECATION(
    return (const MR_C_std_filesystem_path *)&(::MR::CSharp::test_fspath_cref(
        ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), (a_end ? std::filesystem::u8path(a, a_end) : std::filesystem::u8path(a))),
        (b ? (b_end ? std::filesystem::u8path(b, b_end) : std::filesystem::u8path(b)) : std::filesystem::path(default_fspath))
    ));
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
    return (MR_CSharp_Outer *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer *)(_this)).operator=(
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
    return (MR_CSharp_Outer_Inner *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::CSharp::Outer::Inner(*(MR::CSharp::Outer::Inner *)_other))
    ));
}

void MR_CSharp_Outer_Inner_bar(MR_CSharp_Outer_Inner *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::CSharp::Outer::Inner *)(_this)).bar();
}


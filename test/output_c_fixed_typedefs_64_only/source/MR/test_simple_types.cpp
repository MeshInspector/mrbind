#define MR_C_BUILD_LIBRARY
#include "MR/test_simple_types.h"

#include <input/MR/test_simple_types.h>

#include <common.h>
#include <cstddef>
#include <stdexcept>


int MR_TestSimpleTypes_GetInt(void)
{
    return ::MR::TestSimpleTypes::GetInt();
}

void MR_TestSimpleTypes_SetInt(int _1)
{
    ::MR::TestSimpleTypes::SetInt(
        _1
    );
}

void MR_TestSimpleTypes_SetIntDef(const int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntDef(
        (_1 ? *_1 : static_cast<int>(42))
    );
}

int *MR_TestSimpleTypes_GetIntPtr(void)
{
    return ::MR::TestSimpleTypes::GetIntPtr();
}

void MR_TestSimpleTypes_SetIntPtr(int *_1)
{
    ::MR::TestSimpleTypes::SetIntPtr(
        _1
    );
}

void MR_TestSimpleTypes_SetIntPtrDef(int *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntPtrDef(
        (_1 ? *_1 : static_cast<int *>(&global_int))
    );
}

void MR_TestSimpleTypes_SetIntPtrDefNull(int *_1)
{
    ::MR::TestSimpleTypes::SetIntPtrDefNull(
        _1
    );
}

int *MR_TestSimpleTypes_GetIntRef(void)
{
    return &(::MR::TestSimpleTypes::GetIntRef());
}

void MR_TestSimpleTypes_SetIntRef(int *_1)
{
    ::MR::TestSimpleTypes::SetIntRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1)
    );
}

void MR_TestSimpleTypes_SetIntRefDef(int *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntRefDef(
        (_1 ? *_1 : static_cast<int &>(global_int))
    );
}

void *MR_TestSimpleTypes_GetVoidPtr(void)
{
    return ::MR::TestSimpleTypes::GetVoidPtr();
}

void MR_TestSimpleTypes_SetVoidPtr(void *_1)
{
    ::MR::TestSimpleTypes::SetVoidPtr(
        _1
    );
}

void MR_TestSimpleTypes_SetVoidPtrDef(void *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetVoidPtrDef(
        (_1 ? *_1 : static_cast<void *>(&global_int))
    );
}

void MR_TestSimpleTypes_SetVoidPtrDefNull(void *_1)
{
    ::MR::TestSimpleTypes::SetVoidPtrDefNull(
        _1
    );
}

const void *MR_TestSimpleTypes_GetConstVoidPtr(void)
{
    return ::MR::TestSimpleTypes::GetConstVoidPtr();
}

void MR_TestSimpleTypes_SetConstVoidPtr(const void *_1)
{
    ::MR::TestSimpleTypes::SetConstVoidPtr(
        _1
    );
}

void MR_TestSimpleTypes_SetConstVoidPtrDef(const void *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetConstVoidPtrDef(
        (_1 ? *_1 : static_cast<const void *>(&global_int))
    );
}

void MR_TestSimpleTypes_SetConstVoidPtrDefNull(const void *_1)
{
    ::MR::TestSimpleTypes::SetConstVoidPtrDefNull(
        _1
    );
}

void **MR_TestSimpleTypes_GetVoidPtrPtr(void)
{
    return ::MR::TestSimpleTypes::GetVoidPtrPtr();
}

void MR_TestSimpleTypes_SetVoidPtrPtr(void **_1)
{
    ::MR::TestSimpleTypes::SetVoidPtrPtr(
        _1
    );
}

void MR_TestSimpleTypes_SetVoidPtrPtrDef(void **const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetVoidPtrPtrDef(
        (_1 ? *_1 : static_cast<void **>(&global_void_ptr))
    );
}

void MR_TestSimpleTypes_SetVoidPtrPtrDefNull(void **_1)
{
    ::MR::TestSimpleTypes::SetVoidPtrPtrDefNull(
        _1
    );
}

int MR_TestSimpleTypes_GetEnum(void)
{
    return ::MR::TestSimpleTypes::GetEnum();
}

void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1)
{
    ::MR::TestSimpleTypes::SetEnum(
        ((MR::TestSimpleTypes::E)_1)
    );
}

void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumDef(
        (_1 ? (MR::TestSimpleTypes::E)(*_1) : static_cast<MR::TestSimpleTypes::E>(E::e1))
    );
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void)
{
    return (MR_TestSimpleTypes_E *)(::MR::TestSimpleTypes::GetEnumPtr());
}

void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1)
{
    ::MR::TestSimpleTypes::SetEnumPtr(
        ((MR::TestSimpleTypes::E *)_1)
    );
}

void MR_TestSimpleTypes_SetEnumPtrDef(MR_TestSimpleTypes_E *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumPtrDef(
        (_1 ? (MR::TestSimpleTypes::E *)(*_1) : static_cast<MR::TestSimpleTypes::E *>(&global_enum))
    );
}

void MR_TestSimpleTypes_SetEnumPtrDefNull(MR_TestSimpleTypes_E *_1)
{
    ::MR::TestSimpleTypes::SetEnumPtrDefNull(
        ((MR::TestSimpleTypes::E *)_1)
    );
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumRef(void)
{
    return (MR_TestSimpleTypes_E *)&(::MR::TestSimpleTypes::GetEnumRef());
}

void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1)
{
    ::MR::TestSimpleTypes::SetEnumRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::TestSimpleTypes::E *)(_1))
    );
}

void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumRefDef(
        (_1 ? *(MR::TestSimpleTypes::E *)(_1) : static_cast<MR::TestSimpleTypes::E &>(global_enum))
    );
}

int MR_TestSimpleTypes_GetEnum2(void)
{
    return ::MR::TestSimpleTypes::GetEnum2();
}

void MR_TestSimpleTypes_SetEnum2(MR_TestSimpleTypes_E2 _1)
{
    ::MR::TestSimpleTypes::SetEnum2(
        ((MR::TestSimpleTypes::E2)_1)
    );
}

void MR_TestSimpleTypes_SetEnum2Def(const MR_TestSimpleTypes_E2 *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2Def(
        (_1 ? (MR::TestSimpleTypes::E2)(*_1) : static_cast<MR::TestSimpleTypes::E2>(E2::e1))
    );
}

MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ptr(void)
{
    return (MR_TestSimpleTypes_E2 *)(::MR::TestSimpleTypes::GetEnum2Ptr());
}

void MR_TestSimpleTypes_SetEnum2Ptr(MR_TestSimpleTypes_E2 *_1)
{
    ::MR::TestSimpleTypes::SetEnum2Ptr(
        ((MR::TestSimpleTypes::E2 *)_1)
    );
}

void MR_TestSimpleTypes_SetEnum2PtrDef(MR_TestSimpleTypes_E2 *const *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2PtrDef(
        (_1 ? (MR::TestSimpleTypes::E2 *)(*_1) : static_cast<MR::TestSimpleTypes::E2 *>(&global_enum2))
    );
}

void MR_TestSimpleTypes_SetEnum2PtrDefNull(MR_TestSimpleTypes_E2 *_1)
{
    ::MR::TestSimpleTypes::SetEnum2PtrDefNull(
        ((MR::TestSimpleTypes::E2 *)_1)
    );
}

MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ref(void)
{
    return (MR_TestSimpleTypes_E2 *)&(::MR::TestSimpleTypes::GetEnum2Ref());
}

void MR_TestSimpleTypes_SetEnum2Ref(MR_TestSimpleTypes_E2 *_1)
{
    ::MR::TestSimpleTypes::SetEnum2Ref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::TestSimpleTypes::E2 *)(_1))
    );
}

void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1)
{
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2RefDef(
        (_1 ? *(MR::TestSimpleTypes::E2 *)(_1) : static_cast<MR::TestSimpleTypes::E2 &>(global_enum2))
    );
}

void MR_TestSimpleTypes_CheckCharMaybeUnsigned(char *_1)
{
    ::MR::TestSimpleTypes::CheckCharMaybeUnsigned(
        _1
    );
}

void MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(unsigned char *_1)
{
    ::MR::TestSimpleTypes::CheckChar(
        _1
    );
}

void MR_TestSimpleTypes_CheckChar_signed_char_ptr(signed char *_1)
{
    ::MR::TestSimpleTypes::CheckChar(
        _1
    );
}

MR_C_uint64_t MR_TestSimpleTypes_blah_uint64_t(MR_C_uint64_t x)
{
    return ::MR::TestSimpleTypes::blah(
        x
    );
}

MR_C_int64_t MR_TestSimpleTypes_blah_int64_t(MR_C_int64_t x)
{
    return ::MR::TestSimpleTypes::blah(
        x
    );
}

MR_C_uint64_t MR_TestSimpleTypes_FuncTemplate_uint64_t(MR_C_uint64_t _1)
{
    return ::MR::TestSimpleTypes::FuncTemplate<MR_C_uint64_t>(
        _1
    );
}

int MR_TestSimpleTypes_FuncTemplate_int(int _1)
{
    return ::MR::TestSimpleTypes::FuncTemplate<int>(
        _1
    );
}

const MR_C_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t(void)
{
    return &(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::var<MR_C_uint64_t>);
}

void MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t(MR_C_uint64_t value)
{
    MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::var<MR_C_uint64_t> = value;
}

MR_C_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t(void)
{
    return &(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::var<MR_C_uint64_t>);
}

MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_other)
{
    return (MR_TestSimpleTypes_ClassTemplate_uint64_t *)new MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(*(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)_other))
    ));
}

const MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_OffsetPtr(const MR_TestSimpleTypes_ClassTemplate_uint64_t *ptr, ptrdiff_t i)
{
    return (const MR_TestSimpleTypes_ClassTemplate_uint64_t *)(((const MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)ptr) + i);
}

MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_OffsetMutablePtr(MR_TestSimpleTypes_ClassTemplate_uint64_t *ptr, ptrdiff_t i)
{
    return (MR_TestSimpleTypes_ClassTemplate_uint64_t *)(((MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)ptr) + i);
}

MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(MR_C_uint64_t _1)
{
    return (MR_TestSimpleTypes_ClassTemplate_uint64_t *)new MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(
        _1
    ));
}

MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(int _1)
{
    return (MR_TestSimpleTypes_ClassTemplate_uint64_t *)new MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(
        _1
    ));
}

void MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_this)
{
    delete ((const MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)_this);
}

void MR_TestSimpleTypes_ClassTemplate_uint64_t_DestroyArray(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_this)
{
    delete[] ((const MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)_this);
}

MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this, const MR_TestSimpleTypes_ClassTemplate_uint64_t *_other)
{
    return (MR_TestSimpleTypes_ClassTemplate_uint64_t *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>(*(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)_other))
    ));
}

void MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)(_this)).foo<MR_C_uint64_t>();
}

void MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t> *)(_this)).foo<int>();
}


#define MR_C_BUILD_LIBRARY
#include "MR/test_simple_types.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_simple_types.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


int MR_TestSimpleTypes_GetInt(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetInt();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetInt(int _1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetInt(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntDef(const int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntDef(
        (_1 ? *_1 : static_cast<int>(42))
    );
    ) // MRBINDC_TRY
}

int *MR_TestSimpleTypes_GetIntPtr(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetIntPtr();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntPtr(int *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetIntPtr(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntPtrDef(int *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntPtrDef(
        (_1 ? *_1 : static_cast<int *>(&global_int))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntPtrDefNull(int *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetIntPtrDefNull(
        _1
    );
    ) // MRBINDC_TRY
}

int *MR_TestSimpleTypes_GetIntRef(void)
{
    MRBINDC_TRY(
    return std::addressof(::MR::TestSimpleTypes::GetIntRef());
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntRef(int *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetIntRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1)
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetIntRefDef(int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetIntRefDef(
        (_1 ? *_1 : static_cast<int &>(global_int))
    );
    ) // MRBINDC_TRY
}

void *MR_TestSimpleTypes_GetVoidPtr(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetVoidPtr();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtr(void *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetVoidPtr(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtrDef(void *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetVoidPtrDef(
        (_1 ? *_1 : static_cast<void *>(&global_int))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtrDefNull(void *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetVoidPtrDefNull(
        _1
    );
    ) // MRBINDC_TRY
}

const void *MR_TestSimpleTypes_GetConstVoidPtr(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetConstVoidPtr();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetConstVoidPtr(const void *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetConstVoidPtr(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetConstVoidPtrDef(const void *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetConstVoidPtrDef(
        (_1 ? *_1 : static_cast<const void *>(&global_int))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetConstVoidPtrDefNull(const void *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetConstVoidPtrDefNull(
        _1
    );
    ) // MRBINDC_TRY
}

void **MR_TestSimpleTypes_GetVoidPtrPtr(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetVoidPtrPtr();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtrPtr(void **_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetVoidPtrPtr(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtrPtrDef(void **const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetVoidPtrPtrDef(
        (_1 ? *_1 : static_cast<void **>(&global_void_ptr))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetVoidPtrPtrDefNull(void **_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetVoidPtrPtrDefNull(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_TestSimpleTypes_GetEnum(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetEnum();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnum(
        ((MR::TestSimpleTypes::E)_1)
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumDef(
        (_1 ? (MR::TestSimpleTypes::E)(*_1) : static_cast<MR::TestSimpleTypes::E>(E::e1))
    );
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_E *)(::MR::TestSimpleTypes::GetEnumPtr());
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnumPtr(
        ((MR::TestSimpleTypes::E *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumPtrDef(MR_TestSimpleTypes_E *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumPtrDef(
        (_1 ? (MR::TestSimpleTypes::E *)(*_1) : static_cast<MR::TestSimpleTypes::E *>(&global_enum))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumPtrDefNull(MR_TestSimpleTypes_E *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnumPtrDefNull(
        ((MR::TestSimpleTypes::E *)_1)
    );
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumRef(void)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_E *)std::addressof(::MR::TestSimpleTypes::GetEnumRef());
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnumRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::TestSimpleTypes::E *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnumRefDef(
        (_1 ? *(MR::TestSimpleTypes::E *)(_1) : static_cast<MR::TestSimpleTypes::E &>(global_enum))
    );
    ) // MRBINDC_TRY
}

int MR_TestSimpleTypes_GetEnum2(void)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::GetEnum2();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2(MR_TestSimpleTypes_E2 _1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnum2(
        ((MR::TestSimpleTypes::E2)_1)
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2Def(const MR_TestSimpleTypes_E2 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2Def(
        (_1 ? (MR::TestSimpleTypes::E2)(*_1) : static_cast<MR::TestSimpleTypes::E2>(E2::e1))
    );
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ptr(void)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_E2 *)(::MR::TestSimpleTypes::GetEnum2Ptr());
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2Ptr(MR_TestSimpleTypes_E2 *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnum2Ptr(
        ((MR::TestSimpleTypes::E2 *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2PtrDef(MR_TestSimpleTypes_E2 *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2PtrDef(
        (_1 ? (MR::TestSimpleTypes::E2 *)(*_1) : static_cast<MR::TestSimpleTypes::E2 *>(&global_enum2))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2PtrDefNull(MR_TestSimpleTypes_E2 *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnum2PtrDefNull(
        ((MR::TestSimpleTypes::E2 *)_1)
    );
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ref(void)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_E2 *)std::addressof(::MR::TestSimpleTypes::GetEnum2Ref());
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2Ref(MR_TestSimpleTypes_E2 *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::SetEnum2Ref(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(MR::TestSimpleTypes::E2 *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace TestSimpleTypes;
    ::MR::TestSimpleTypes::SetEnum2RefDef(
        (_1 ? *(MR::TestSimpleTypes::E2 *)(_1) : static_cast<MR::TestSimpleTypes::E2 &>(global_enum2))
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_CheckCharMaybeUnsigned(char *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::CheckCharMaybeUnsigned(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(unsigned char *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::CheckChar(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_CheckChar_signed_char_ptr(signed char *_1)
{
    MRBINDC_TRY(
    ::MR::TestSimpleTypes::CheckChar(
        _1
    );
    ) // MRBINDC_TRY
}

long long MR_TestSimpleTypes_LongLong(long long x)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::LongLong(
        x
    );
    ) // MRBINDC_TRY
}

unsigned long MR_TestSimpleTypes_blah_unsigned_long(unsigned long x)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::blah(
        x
    );
    ) // MRBINDC_TRY
}

long MR_TestSimpleTypes_blah_long(long x)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::blah(
        x
    );
    ) // MRBINDC_TRY
}

unsigned long MR_TestSimpleTypes_FuncTemplate_unsigned_long(unsigned long _1)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::FuncTemplate<unsigned long>(
        _1
    );
    ) // MRBINDC_TRY
}

int MR_TestSimpleTypes_FuncTemplate_int(int _1)
{
    MRBINDC_TRY(
    return ::MR::TestSimpleTypes::FuncTemplate<int>(
        _1
    );
    ) // MRBINDC_TRY
}

const unsigned long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long(void)
{
    return std::addressof(MR::TestSimpleTypes::ClassTemplate<unsigned long>::var<unsigned long>);
}

void MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long(unsigned long value)
{
    MR::TestSimpleTypes::ClassTemplate<unsigned long>::var<unsigned long> = value;
}

unsigned long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_GetMutable_var_unsigned_long(void)
{
    return std::addressof(MR::TestSimpleTypes::ClassTemplate<unsigned long>::var<unsigned long>);
}

MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_other)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_ClassTemplate_unsigned_long *)new MR::TestSimpleTypes::ClassTemplate<unsigned long>(MR::TestSimpleTypes::ClassTemplate<unsigned long>(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TestSimpleTypes::ClassTemplate<unsigned long>(*(MR::TestSimpleTypes::ClassTemplate<unsigned long> *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_OffsetPtr(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_TestSimpleTypes_ClassTemplate_unsigned_long *)(((const MR::TestSimpleTypes::ClassTemplate<unsigned long> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_OffsetMutablePtr(MR_TestSimpleTypes_ClassTemplate_unsigned_long *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_ClassTemplate_unsigned_long *)(((MR::TestSimpleTypes::ClassTemplate<unsigned long> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long(unsigned long _1)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_ClassTemplate_unsigned_long *)new MR::TestSimpleTypes::ClassTemplate<unsigned long>(MR::TestSimpleTypes::ClassTemplate<unsigned long>(
        _1
    ));
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int(int _1)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_ClassTemplate_unsigned_long *)new MR::TestSimpleTypes::ClassTemplate<unsigned long>(MR::TestSimpleTypes::ClassTemplate<unsigned long>(
        _1
    ));
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this)
{
    MRBINDC_TRY(
    delete ((const MR::TestSimpleTypes::ClassTemplate<unsigned long> *)_this);
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_ClassTemplate_unsigned_long_DestroyArray(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::TestSimpleTypes::ClassTemplate<unsigned long> *)_this);
    ) // MRBINDC_TRY
}

MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this, const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_other)
{
    MRBINDC_TRY(
    return (MR_TestSimpleTypes_ClassTemplate_unsigned_long *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<unsigned long> *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::TestSimpleTypes::ClassTemplate<unsigned long>(*(MR::TestSimpleTypes::ClassTemplate<unsigned long> *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<unsigned long> *)(_this)).foo<unsigned long>();
    ) // MRBINDC_TRY
}

void MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::TestSimpleTypes::ClassTemplate<unsigned long> *)(_this)).foo<int>();
    ) // MRBINDC_TRY
}


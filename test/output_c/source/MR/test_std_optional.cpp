#define MR_C_BUILD_LIBRARY
#include "MR/test_std_optional.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <cstddef>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>


MR_C_std_optional_int *MR_StdOptional_GetInt(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_int *)new std::optional<int>(::MR::StdOptional::GetInt());
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetInt(const int *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetInt(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetIntConstRef(const int *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetIntConstRef(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetIntDefTrivial(const int *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetIntDefTrivial(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetIntDef(const MR_C_std_optional_int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetIntDef(
        (_1 ? std::optional<int>(*(std::optional<int> *)_1) : static_cast<std::optional<int>>(42))
    );
    ) // MRBINDC_TRY
}

MR_C_std_optional_MR_StdOptional_E *MR_StdOptional_GetEnum(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(::MR::StdOptional::GetEnum());
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetEnum(const MR_StdOptional_E *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetEnum(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetEnumConstRef(const MR_StdOptional_E *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetEnumConstRef(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetEnumDefTrivial(const MR_StdOptional_E *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetEnumDefTrivial(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetEnumDef(const MR_C_std_optional_MR_StdOptional_E *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetEnumDef(
        (_1 ? std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)_1) : static_cast<std::optional<MR::StdOptional::E>>(E::e1))
    );
    ) // MRBINDC_TRY
}

const int *MR_StdOptional_A_Get_x(const MR_StdOptional_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::StdOptional::A *)(_this)).x);
}

void MR_StdOptional_A_Set_x(MR_StdOptional_A *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::A *)(_this)).x = value;
}

int *MR_StdOptional_A_GetMutable_x(MR_StdOptional_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::A *)(_this)).x);
}

MR_StdOptional_A *MR_StdOptional_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_StdOptional_A *)new MR::StdOptional::A(MR::StdOptional::A());
    ) // MRBINDC_TRY
}

MR_StdOptional_A *MR_StdOptional_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_StdOptional_A *)(new MR::StdOptional::A[num_elems]{});
    ) // MRBINDC_TRY
}

MR_StdOptional_A *MR_StdOptional_A_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_StdOptional_A *)new MR::StdOptional::A(MR::StdOptional::A{
        x
    });
    ) // MRBINDC_TRY
}

const MR_StdOptional_A *MR_StdOptional_A_OffsetPtr(const MR_StdOptional_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StdOptional_A *)(((const MR::StdOptional::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdOptional_A *MR_StdOptional_A_OffsetMutablePtr(MR_StdOptional_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_StdOptional_A *)(((MR::StdOptional::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdOptional_A *MR_StdOptional_A_ConstructFromAnother(const MR_StdOptional_A *_other)
{
    return (MR_StdOptional_A *)new MR::StdOptional::A(MR::StdOptional::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::StdOptional::A(*(MR::StdOptional::A *)_other))
    ));
}

void MR_StdOptional_A_Destroy(const MR_StdOptional_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::StdOptional::A *)_this);
    ) // MRBINDC_TRY
}

void MR_StdOptional_A_DestroyArray(const MR_StdOptional_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::StdOptional::A *)_this);
    ) // MRBINDC_TRY
}

MR_StdOptional_A *MR_StdOptional_A_AssignFromAnother(MR_StdOptional_A *_this, const MR_StdOptional_A *_other)
{
    return (MR_StdOptional_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::StdOptional::A(*(MR::StdOptional::A *)_other))
    ));
}

MR_C_std_optional_MR_StdOptional_A *MR_StdOptional_GetClass(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_A *)new std::optional<MR::StdOptional::A>(::MR::StdOptional::GetClass());
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClass(const MR_StdOptional_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetClass(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClassConstRef(const MR_StdOptional_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetClassConstRef(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClassDefTrivial(const MR_StdOptional_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdOptional::SetClassDefTrivial(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClassDef(const MR_C_std_optional_MR_StdOptional_A *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetClassDef(
        (_1 ? std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)_1) : static_cast<std::optional<MR::StdOptional::A>>(MR::StdOptional::A{42}))
    );
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_StdOptional_B_Get_s(const MR_StdOptional_B *_this)
{
    return (const MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::StdOptional::B *)(_this)).s);
}

void MR_StdOptional_B_Set_s(MR_StdOptional_B *_this, const char *value, const char *value_end)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::B *)(_this)).s = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), (value_end ? std::string(value, value_end) : std::string(value)));
}

MR_C_std_string *MR_StdOptional_B_GetMutable_s(MR_StdOptional_B *_this)
{
    return (MR_C_std_string *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::B *)(_this)).s);
}

MR_StdOptional_B *MR_StdOptional_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_StdOptional_B *)new MR::StdOptional::B(MR::StdOptional::B());
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_StdOptional_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_StdOptional_B *)(new MR::StdOptional::B[num_elems]{});
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_StdOptional_B_ConstructFrom(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    return (MR_StdOptional_B *)new MR::StdOptional::B(MR::StdOptional::B{
        ((s ? void() : MRBINDC_THROW("Parameter `s` can not be null.", void)), (s_end ? std::string(s, s_end) : std::string(s)))
    });
    ) // MRBINDC_TRY
}

const MR_StdOptional_B *MR_StdOptional_B_OffsetPtr(const MR_StdOptional_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StdOptional_B *)(((const MR::StdOptional::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_StdOptional_B_OffsetMutablePtr(MR_StdOptional_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_StdOptional_B *)(((MR::StdOptional::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::StdOptional::B);
    return (MR_StdOptional_B *)new MR::StdOptional::B(MR::StdOptional::B(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdOptional::B) MRBINDC_CLASSARG_COPY(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_MOVE(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdOptional::B) MRBINDC_CLASSARG_END(_other, MR::StdOptional::B))
    ));
}

void MR_StdOptional_B_Destroy(const MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::StdOptional::B *)_this);
    ) // MRBINDC_TRY
}

void MR_StdOptional_B_DestroyArray(const MR_StdOptional_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::StdOptional::B *)_this);
    ) // MRBINDC_TRY
}

MR_StdOptional_B *MR_StdOptional_B_AssignFromAnother(MR_StdOptional_B *_this, MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other)
{
    MRBINDC_CLASSARG_GUARD(_other, MR::StdOptional::B);
    return (MR_StdOptional_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdOptional::B *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdOptional::B) MRBINDC_CLASSARG_COPY(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_MOVE(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdOptional::B) MRBINDC_CLASSARG_END(_other, MR::StdOptional::B))
    ));
}

MR_C_std_optional_MR_StdOptional_B *MR_StdOptional_GetClass2(void)
{
    MRBINDC_TRY(
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(::MR::StdOptional::GetClass2());
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClass2(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::StdOptional::B);
    ::MR::StdOptional::SetClass2(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClass2ConstRef(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::StdOptional::B);
    ::MR::StdOptional::SetClass2ConstRef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClass2DefTrivial(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, MR::StdOptional::B);
    ::MR::StdOptional::SetClass2DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}

void MR_StdOptional_SetClass2Def(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdOptional;
    MRBINDC_CLASSARG_GUARD(_1, MR::StdOptional::B);
    ::MR::StdOptional::SetClass2Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (MR::StdOptional::B{"blah"}), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
    ) // MRBINDC_TRY
}


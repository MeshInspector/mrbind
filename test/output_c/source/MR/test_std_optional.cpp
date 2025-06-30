#include "MR/test_std_optional.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_optional.h>

#include <stdexcept>


MR_C_std_optional_int *MR_StdOptional_GetInt(void)
{
    return (MR_C_std_optional_int *)new std::optional<int>(::MR::StdOptional::GetInt());
}

void MR_StdOptional_SetInt(const int *_1)
{
    ::MR::StdOptional::SetInt(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
}

void MR_StdOptional_SetIntConstRef(const int *_1)
{
    ::MR::StdOptional::SetIntConstRef(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
}

void MR_StdOptional_SetIntDefTrivial(const int *_1)
{
    ::MR::StdOptional::SetIntDefTrivial(
        (_1 ? std::optional<int>(*_1) : std::nullopt)
    );
}

void MR_StdOptional_SetIntDef(const MR_C_std_optional_int *_1)
{
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetIntDef(
        (_1 ? std::optional<int>(*(std::optional<int> *)_1) : static_cast<std::optional<int>>(42))
    );
}

MR_C_std_optional_MR_StdOptional_E *MR_StdOptional_GetEnum(void)
{
    return (MR_C_std_optional_MR_StdOptional_E *)new std::optional<MR::StdOptional::E>(::MR::StdOptional::GetEnum());
}

void MR_StdOptional_SetEnum(const MR_StdOptional_E *_1)
{
    ::MR::StdOptional::SetEnum(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetEnumConstRef(const MR_StdOptional_E *_1)
{
    ::MR::StdOptional::SetEnumConstRef(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetEnumDefTrivial(const MR_StdOptional_E *_1)
{
    ::MR::StdOptional::SetEnumDefTrivial(
        (_1 ? std::optional<MR::StdOptional::E>((MR::StdOptional::E)(*_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetEnumDef(const MR_C_std_optional_MR_StdOptional_E *_1)
{
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetEnumDef(
        (_1 ? std::optional<MR::StdOptional::E>(*(std::optional<MR::StdOptional::E> *)_1) : static_cast<std::optional<MR::StdOptional::E>>(E::e1))
    );
}

const int *MR_StdOptional_A_GetConst_x(const MR_StdOptional_A *_this)
{
    return &((_this ? *(const MR::StdOptional::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

int *MR_StdOptional_A_GetMutable_x(MR_StdOptional_A *_this)
{
    return &((_this ? *(MR::StdOptional::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

MR_StdOptional_A *MR_StdOptional_A_DefaultConstruct(void)
{
    return (MR_StdOptional_A *)new MR::StdOptional::A(MR::StdOptional::A());
}

MR_StdOptional_A *MR_StdOptional_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdOptional_A *)(new MR::StdOptional::A[num_elems]{});
}

const MR_StdOptional_A *MR_StdOptional_A_OffsetPtr(const MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (const MR_StdOptional_A *)(((const MR::StdOptional::A *)ptr) + i);
}

MR_StdOptional_A *MR_StdOptional_A_OffsetMutablePtr(MR_StdOptional_A *ptr, ptrdiff_t i)
{
    return (MR_StdOptional_A *)(((MR::StdOptional::A *)ptr) + i);
}

MR_StdOptional_A *MR_StdOptional_A_ConstructFromAnother(const MR_StdOptional_A *_other)
{
    return (MR_StdOptional_A *)new MR::StdOptional::A(MR::StdOptional::A(
        (_other ? MR::StdOptional::A(*(MR::StdOptional::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StdOptional_A_Destroy(MR_StdOptional_A *_this)
{
    delete ((MR::StdOptional::A *)_this);
}

void MR_StdOptional_A_DestroyArray(MR_StdOptional_A *_this)
{
    delete[] ((MR::StdOptional::A *)_this);
}

MR_StdOptional_A *MR_StdOptional_A_AssignFromAnother(MR_StdOptional_A *_this, const MR_StdOptional_A *_other)
{
    return (MR_StdOptional_A *)&((_this ? *(MR::StdOptional::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdOptional::A(*(MR::StdOptional::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_C_std_optional_MR_StdOptional_A *MR_StdOptional_GetClass(void)
{
    return (MR_C_std_optional_MR_StdOptional_A *)new std::optional<MR::StdOptional::A>(::MR::StdOptional::GetClass());
}

void MR_StdOptional_SetClass(const MR_StdOptional_A *_1)
{
    ::MR::StdOptional::SetClass(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetClassConstRef(const MR_StdOptional_A *_1)
{
    ::MR::StdOptional::SetClassConstRef(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetClassDefTrivial(const MR_StdOptional_A *_1)
{
    ::MR::StdOptional::SetClassDefTrivial(
        (_1 ? std::optional<MR::StdOptional::A>(MR::StdOptional::A(*(MR::StdOptional::A *)_1)) : std::nullopt)
    );
}

void MR_StdOptional_SetClassDef(const MR_C_std_optional_MR_StdOptional_A *_1)
{
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetClassDef(
        (_1 ? std::optional<MR::StdOptional::A>(*(std::optional<MR::StdOptional::A> *)_1) : static_cast<std::optional<MR::StdOptional::A>>(MR::StdOptional::A{42}))
    );
}

const MR_C_std_string *MR_StdOptional_B_GetConst_s(const MR_StdOptional_B *_this)
{
    return (const MR_C_std_string *)&((_this ? *(const MR::StdOptional::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).s);
}

MR_C_std_string *MR_StdOptional_B_GetMutable_s(MR_StdOptional_B *_this)
{
    return (MR_C_std_string *)&((_this ? *(MR::StdOptional::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).s);
}

MR_StdOptional_B *MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other)
{
    return (MR_StdOptional_B *)new MR::StdOptional::B(MR::StdOptional::B(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdOptional::B) MRBINDC_CLASSARG_COPY(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_MOVE(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdOptional::B) MRBINDC_CLASSARG_END(_other, MR::StdOptional::B))
    ));
}

const MR_StdOptional_B *MR_StdOptional_B_OffsetPtr(const MR_StdOptional_B *ptr, ptrdiff_t i)
{
    return (const MR_StdOptional_B *)(((const MR::StdOptional::B *)ptr) + i);
}

MR_StdOptional_B *MR_StdOptional_B_OffsetMutablePtr(MR_StdOptional_B *ptr, ptrdiff_t i)
{
    return (MR_StdOptional_B *)(((MR::StdOptional::B *)ptr) + i);
}

MR_StdOptional_B *MR_StdOptional_B_DefaultConstruct(void)
{
    return (MR_StdOptional_B *)new MR::StdOptional::B(MR::StdOptional::B());
}

MR_StdOptional_B *MR_StdOptional_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdOptional_B *)(new MR::StdOptional::B[num_elems]{});
}

MR_StdOptional_B *MR_StdOptional_B_AssignFromAnother(MR_StdOptional_B *_this, MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other)
{
    return (MR_StdOptional_B *)&((_this ? *(MR::StdOptional::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdOptional::B) MRBINDC_CLASSARG_COPY(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_MOVE(_other, (MR::StdOptional::B), MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdOptional::B) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdOptional::B) MRBINDC_CLASSARG_END(_other, MR::StdOptional::B))
    ));
}

void MR_StdOptional_B_Destroy(MR_StdOptional_B *_this)
{
    delete ((MR::StdOptional::B *)_this);
}

void MR_StdOptional_B_DestroyArray(MR_StdOptional_B *_this)
{
    delete[] ((MR::StdOptional::B *)_this);
}

MR_C_std_optional_MR_StdOptional_B *MR_StdOptional_GetClass2(void)
{
    return (MR_C_std_optional_MR_StdOptional_B *)new std::optional<MR::StdOptional::B>(::MR::StdOptional::GetClass2());
}

void MR_StdOptional_SetClass2(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    ::MR::StdOptional::SetClass2(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
}

void MR_StdOptional_SetClass2ConstRef(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    ::MR::StdOptional::SetClass2ConstRef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
}

void MR_StdOptional_SetClass2DefTrivial(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    ::MR::StdOptional::SetClass2DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
}

void MR_StdOptional_SetClass2Def(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1)
{
    using namespace MR;
    using namespace StdOptional;
    ::MR::StdOptional::SetClass2Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_COPY(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_MOVE(_1, (MR::StdOptional::B), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (MR::StdOptional::B{"blah"}), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_DEF_ARG(_1, MR_C_PassBy_NoObject, (std::nullopt), std::optional<MR::StdOptional::B>) MRBINDC_CLASSARG_END(_1, std::optional<MR::StdOptional::B>))
    );
}


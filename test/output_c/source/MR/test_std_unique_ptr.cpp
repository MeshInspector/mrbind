#define MR_C_BUILD_LIBRARY
#include "MR/test_std_unique_ptr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_unique_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


int *MR_StdUniquePtr_GetInt(void)
{
    MRBINDC_TRY(
    return (::MR::StdUniquePtr::GetInt()).release();
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetInt(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetInt(
        std::unique_ptr<int>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntConstRef(const MR_C_std_unique_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntConstRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::unique_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntDefTrivial(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntDefTrivial(
        std::unique_ptr<int>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntDef(int *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetIntDef(
        (_1 ? std::unique_ptr<int>(*_1) : static_cast<std::unique_ptr<int>>(std::make_unique<int>(42)))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntLvalueRef(MR_C_std_unique_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntLvalueRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::unique_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntLvalueConstRef(const MR_C_std_unique_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntLvalueConstRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::unique_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntRvalueRef(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntRvalueRef(
        std::unique_ptr<int>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntRvalueConstRef(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntRvalueConstRef(
        std::unique_ptr<int>(_1)
    );
    ) // MRBINDC_TRY
}

int *MR_StdUniquePtr_GetIntArr(void)
{
    MRBINDC_TRY(
    return (::MR::StdUniquePtr::GetIntArr()).release();
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntArr(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntArr(
        std::unique_ptr<int[]>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntArrDefTrivial(int *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetIntArrDefTrivial(
        std::unique_ptr<int[]>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetIntArrDef(int *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetIntArrDef(
        (_1 ? std::unique_ptr<int[]>(*_1) : static_cast<std::unique_ptr<int[]>>(std::make_unique<int[]>(42)))
    );
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)new MR::StdUniquePtr::A(MR::StdUniquePtr::A());
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(new MR::StdUniquePtr::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetPtr(const MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StdUniquePtr_A *)(((const MR::StdUniquePtr::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetMutablePtr(MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(((MR::StdUniquePtr::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_ConstructFromAnother(const MR_StdUniquePtr_A *_other)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)new MR::StdUniquePtr::A(MR::StdUniquePtr::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_A_Destroy(const MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::StdUniquePtr::A *)_this);
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_A_DestroyArray(const MR_StdUniquePtr_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::StdUniquePtr::A *)_this);
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_AssignFromAnother(MR_StdUniquePtr_A *_this, const MR_StdUniquePtr_A *_other)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::StdUniquePtr::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClass(void)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetClass()).release();
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClass(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClass(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassConstRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassDefTrivial(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassDef(MR_StdUniquePtr_A *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetClassDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A>>(std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassLvalueRef(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassLvalueRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::unique_ptr<MR::StdUniquePtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassLvalueConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassLvalueConstRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassRvalueRef(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassRvalueRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassRvalueConstRef(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassRvalueConstRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClassArr(void)
{
    MRBINDC_TRY(
    return (MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetClassArr()).release();
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassArr(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassArr(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassArrDefTrivial(MR_StdUniquePtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetClassArrDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetClassArrDef(MR_StdUniquePtr_A *const *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetClassArrDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A[]>>(std::make_unique<MR::StdUniquePtr::A[]>(42)))
    );
    ) // MRBINDC_TRY
}

const int *MR_StdUniquePtr_GetConstInt(void)
{
    MRBINDC_TRY(
    return (::MR::StdUniquePtr::GetConstInt()).release();
    ) // MRBINDC_TRY
}

const int *MR_StdUniquePtr_GetConstIntArr(void)
{
    MRBINDC_TRY(
    return (::MR::StdUniquePtr::GetConstIntArr()).release();
    ) // MRBINDC_TRY
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_GetConstClass(void)
{
    MRBINDC_TRY(
    return (const MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetConstClass()).release();
    ) // MRBINDC_TRY
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_GetConstClassArr(void)
{
    MRBINDC_TRY(
    return (const MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetConstClassArr()).release();
    ) // MRBINDC_TRY
}

float *MR_StdUniquePtr_GetFloat(void)
{
    MRBINDC_TRY(
    return (::MR::StdUniquePtr::GetFloat()).release();
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetFloat(float *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetFloat(
        std::unique_ptr<float>(_1)
    );
    ) // MRBINDC_TRY
}

void MR_StdUniquePtr_SetFloatDefTrivial(float *_1)
{
    MRBINDC_TRY(
    ::MR::StdUniquePtr::SetFloatDefTrivial(
        std::unique_ptr<float>(_1)
    );
    ) // MRBINDC_TRY
}


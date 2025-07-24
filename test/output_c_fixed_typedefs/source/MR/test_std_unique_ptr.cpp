#define MR_C_BUILD_LIBRARY
#include "MR/test_std_unique_ptr.h"

#include <input/MR/test_std_unique_ptr.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>


int32_t *MR_StdUniquePtr_GetInt(void)
{
    return (::MR::StdUniquePtr::GetInt()).release();
}

void MR_StdUniquePtr_SetInt(int32_t *_1)
{
    ::MR::StdUniquePtr::SetInt(
        std::unique_ptr<int32_t>(_1)
    );
}

void MR_StdUniquePtr_SetIntConstRef(const MR_C_std_unique_ptr_int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntConstRef(
        (_1 ? *(const std::unique_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntDefTrivial(int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntDefTrivial(
        std::unique_ptr<int32_t>(_1)
    );
}

void MR_StdUniquePtr_SetIntDef(int32_t *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetIntDef(
        (_1 ? std::unique_ptr<int32_t>(*_1) : static_cast<std::unique_ptr<int32_t>>(std::make_unique<int>(42)))
    );
}

void MR_StdUniquePtr_SetIntLvalueRef(MR_C_std_unique_ptr_int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntLvalueRef(
        (_1 ? *(std::unique_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntLvalueConstRef(const MR_C_std_unique_ptr_int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntLvalueConstRef(
        (_1 ? *(const std::unique_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntRvalueRef(int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntRvalueRef(
        std::unique_ptr<int32_t>(_1)
    );
}

void MR_StdUniquePtr_SetIntRvalueConstRef(int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntRvalueConstRef(
        std::unique_ptr<int32_t>(_1)
    );
}

int32_t *MR_StdUniquePtr_GetIntArr(void)
{
    return (::MR::StdUniquePtr::GetIntArr()).release();
}

void MR_StdUniquePtr_SetIntArr(int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntArr(
        std::unique_ptr<int32_t[]>(_1)
    );
}

void MR_StdUniquePtr_SetIntArrDefTrivial(int32_t *_1)
{
    ::MR::StdUniquePtr::SetIntArrDefTrivial(
        std::unique_ptr<int32_t[]>(_1)
    );
}

void MR_StdUniquePtr_SetIntArrDef(int32_t *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetIntArrDef(
        (_1 ? std::unique_ptr<int32_t[]>(*_1) : static_cast<std::unique_ptr<int32_t[]>>(std::make_unique<int[]>(42)))
    );
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstruct(void)
{
    return (MR_StdUniquePtr_A *)new MR::StdUniquePtr::A(MR::StdUniquePtr::A());
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdUniquePtr_A *)(new MR::StdUniquePtr::A[num_elems]{});
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetPtr(const MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    return (const MR_StdUniquePtr_A *)(((const MR::StdUniquePtr::A *)ptr) + i);
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetMutablePtr(MR_StdUniquePtr_A *ptr, ptrdiff_t i)
{
    return (MR_StdUniquePtr_A *)(((MR::StdUniquePtr::A *)ptr) + i);
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_ConstructFromAnother(const MR_StdUniquePtr_A *_other)
{
    return (MR_StdUniquePtr_A *)new MR::StdUniquePtr::A(MR::StdUniquePtr::A(
        (_other ? MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StdUniquePtr_A_Destroy(const MR_StdUniquePtr_A *_this)
{
    delete ((const MR::StdUniquePtr::A *)_this);
}

void MR_StdUniquePtr_A_DestroyArray(const MR_StdUniquePtr_A *_this)
{
    delete[] ((const MR::StdUniquePtr::A *)_this);
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_AssignFromAnother(MR_StdUniquePtr_A *_this, const MR_StdUniquePtr_A *_other)
{
    return (MR_StdUniquePtr_A *)&((_this ? *(MR::StdUniquePtr::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClass(void)
{
    return (MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetClass()).release();
}

void MR_StdUniquePtr_SetClass(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClass(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassConstRef(
        (_1 ? *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassDefTrivial(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassDef(MR_StdUniquePtr_A *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetClassDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A>>(std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})))
    );
}

void MR_StdUniquePtr_SetClassLvalueRef(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassLvalueRef(
        (_1 ? *(std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassLvalueConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassLvalueConstRef(
        (_1 ? *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassRvalueRef(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassRvalueRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassRvalueConstRef(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassRvalueConstRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClassArr(void)
{
    return (MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetClassArr()).release();
}

void MR_StdUniquePtr_SetClassArr(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassArr(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassArrDefTrivial(MR_StdUniquePtr_A *_1)
{
    ::MR::StdUniquePtr::SetClassArrDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassArrDef(MR_StdUniquePtr_A *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    ::MR::StdUniquePtr::SetClassArrDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A[]>>(std::make_unique<MR::StdUniquePtr::A[]>(42)))
    );
}

const int32_t *MR_StdUniquePtr_GetConstInt(void)
{
    return (::MR::StdUniquePtr::GetConstInt()).release();
}

const int32_t *MR_StdUniquePtr_GetConstIntArr(void)
{
    return (::MR::StdUniquePtr::GetConstIntArr()).release();
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_GetConstClass(void)
{
    return (const MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetConstClass()).release();
}

const MR_StdUniquePtr_A *MR_StdUniquePtr_GetConstClassArr(void)
{
    return (const MR_StdUniquePtr_A *)(::MR::StdUniquePtr::GetConstClassArr()).release();
}

float *MR_StdUniquePtr_GetFloat(void)
{
    return (::MR::StdUniquePtr::GetFloat()).release();
}

void MR_StdUniquePtr_SetFloat(float *_1)
{
    ::MR::StdUniquePtr::SetFloat(
        std::unique_ptr<float>(_1)
    );
}

void MR_StdUniquePtr_SetFloatDefTrivial(float *_1)
{
    ::MR::StdUniquePtr::SetFloatDefTrivial(
        std::unique_ptr<float>(_1)
    );
}


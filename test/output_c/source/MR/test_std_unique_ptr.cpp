#include "MR/test_std_unique_ptr.h"

#include <input/MR/test_std_unique_ptr.h>

#include <stdexcept>


int *MR_StdUniquePtr_GetInt(void)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR::StdUniquePtr::GetInt()).release();
}

void MR_StdUniquePtr_SetInt(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetInt(
        std::unique_ptr<int>(_1)
    );
}

void MR_StdUniquePtr_SetIntConstRef(const MR_C_std_unique_ptr_int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntConstRef(
        (_1 ? *(const std::unique_ptr<int> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntDefTrivial(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntDefTrivial(
        std::unique_ptr<int>(_1)
    );
}

void MR_StdUniquePtr_SetIntDef(int *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntDef(
        (_1 ? std::unique_ptr<int>(*_1) : static_cast<std::unique_ptr<int>>(std::make_unique<int>(42)))
    );
}

void MR_StdUniquePtr_SetIntLvalueRef(MR_C_std_unique_ptr_int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntLvalueRef(
        (_1 ? *(std::unique_ptr<int> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntLvalueConstRef(const MR_C_std_unique_ptr_int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntLvalueConstRef(
        (_1 ? *(const std::unique_ptr<int> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetIntRvalueRef(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntRvalueRef(
        std::unique_ptr<int>(_1)
    );
}

void MR_StdUniquePtr_SetIntRvalueConstRef(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntRvalueConstRef(
        std::unique_ptr<int>(_1)
    );
}

int *MR_StdUniquePtr_GetIntArr(void)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR::StdUniquePtr::GetIntArr()).release();
}

void MR_StdUniquePtr_SetIntArr(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntArr(
        std::unique_ptr<int[]>(_1)
    );
}

void MR_StdUniquePtr_SetIntArrDefTrivial(int *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntArrDefTrivial(
        std::unique_ptr<int[]>(_1)
    );
}

void MR_StdUniquePtr_SetIntArrDef(int *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetIntArrDef(
        (_1 ? std::unique_ptr<int[]>(*_1) : static_cast<std::unique_ptr<int[]>>(std::make_unique<int[]>(42)))
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
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR_StdUniquePtr_A *)new MR::StdUniquePtr::A(MR::StdUniquePtr::A(
        (_other ? MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StdUniquePtr_A_Destroy(MR_StdUniquePtr_A *_this)
{
    delete ((MR::StdUniquePtr::A *)_this);
}

void MR_StdUniquePtr_A_DestroyArray(MR_StdUniquePtr_A *_this)
{
    delete[] ((MR::StdUniquePtr::A *)_this);
}

MR_StdUniquePtr_A *MR_StdUniquePtr_A_AssignFromAnother(MR_StdUniquePtr_A *_this, const MR_StdUniquePtr_A *_other)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR_StdUniquePtr_A *)&((_this ? *(MR::StdUniquePtr::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdUniquePtr::A(*(MR::StdUniquePtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClass(void)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR_StdUniquePtr_A *)(MR::StdUniquePtr::GetClass()).release();
}

void MR_StdUniquePtr_SetClass(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClass(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassConstRef(
        (_1 ? *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassDefTrivial(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassDef(MR_StdUniquePtr_A *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A>>(std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})))
    );
}

void MR_StdUniquePtr_SetClassLvalueRef(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassLvalueRef(
        (_1 ? *(std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassLvalueConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassLvalueConstRef(
        (_1 ? *(const std::unique_ptr<MR::StdUniquePtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdUniquePtr_SetClassRvalueRef(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassRvalueRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassRvalueConstRef(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassRvalueConstRef(
        std::unique_ptr<MR::StdUniquePtr::A>((MR::StdUniquePtr::A *)_1)
    );
}

MR_StdUniquePtr_A *MR_StdUniquePtr_GetClassArr(void)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR_StdUniquePtr_A *)(MR::StdUniquePtr::GetClassArr()).release();
}

void MR_StdUniquePtr_SetClassArr(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassArr(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassArrDefTrivial(MR_StdUniquePtr_A *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassArrDefTrivial(
        std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)_1)
    );
}

void MR_StdUniquePtr_SetClassArrDef(MR_StdUniquePtr_A *const *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetClassArrDef(
        (_1 ? std::unique_ptr<MR::StdUniquePtr::A[]>((MR::StdUniquePtr::A *)*_1) : static_cast<std::unique_ptr<MR::StdUniquePtr::A[]>>(std::make_unique<MR::StdUniquePtr::A[]>(42)))
    );
}

float *MR_StdUniquePtr_GetFloat(void)
{
    using namespace MR;
    using namespace StdUniquePtr;
    return (MR::StdUniquePtr::GetFloat()).release();
}

void MR_StdUniquePtr_SetFloat(float *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetFloat(
        std::unique_ptr<float>(_1)
    );
}

void MR_StdUniquePtr_SetFloatDefTrivial(float *_1)
{
    using namespace MR;
    using namespace StdUniquePtr;
    MR::StdUniquePtr::SetFloatDefTrivial(
        std::unique_ptr<float>(_1)
    );
}


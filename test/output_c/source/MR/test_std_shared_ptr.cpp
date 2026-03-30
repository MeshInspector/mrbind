#define MR_C_BUILD_LIBRARY
#include "MR/test_std_shared_ptr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_shared_ptr_int *MR_StdSharedPtr_GetInt(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int *)new std::shared_ptr<int>(::MR::StdSharedPtr::GetInt());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetInt(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int>);
    ::MR::StdSharedPtr::SetInt(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntConstRef(const MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetIntConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const std::shared_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int>);
    ::MR::StdSharedPtr::SetIntDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int>>{}), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int>);
    ::MR::StdSharedPtr::SetIntDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int>), std::shared_ptr<int>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<int>(42)), std::shared_ptr<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntLvalueRef(MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetIntLvalueRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(std::shared_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntLvalueConstRef(const MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetIntLvalueConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const std::shared_ptr<int> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntRvalueRef(MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetIntRvalueRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(std::shared_ptr<int> *)(_1)))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntRvalueConstRef(const MR_C_std_shared_ptr_int *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetIntRvalueConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(const std::shared_ptr<int> *)(_1)))
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int_array *MR_StdSharedPtr_GetIntArr(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int_array *)new std::shared_ptr<int[]>(::MR::StdSharedPtr::GetIntArr());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[]>);
    ::MR::StdSharedPtr::SetIntArr(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[]>);
    ::MR::StdSharedPtr::SetIntArrDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int[]>>{}), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[]>);
    ::MR::StdSharedPtr::SetIntArrDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[]>), std::shared_ptr<int[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<int[]>(42)), std::shared_ptr<int[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[]>))
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_int_array_42 *MR_StdSharedPtr_GetIntArr42(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_int_array_42 *)new std::shared_ptr<int[42]>(::MR::StdSharedPtr::GetIntArr42());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[42]>);
    ::MR::StdSharedPtr::SetIntArr42(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[42]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[42]>);
    ::MR::StdSharedPtr::SetIntArr42DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int[42]>>{}), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[42]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetIntArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<int[42]>);
    ::MR::StdSharedPtr::SetIntArr42Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int[42]>), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_shared<int[42]>()), std::shared_ptr<int[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int[42]>))
    );
    ) // MRBINDC_TRY
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_StdSharedPtr_A *)new MR::StdSharedPtr::A(MR::StdSharedPtr::A());
    ) // MRBINDC_TRY
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_StdSharedPtr_A *)(new MR::StdSharedPtr::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetPtr(const MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StdSharedPtr_A *)(((const MR::StdSharedPtr::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetMutablePtr(MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_StdSharedPtr_A *)(((MR::StdSharedPtr::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_ConstructFromAnother(const MR_StdSharedPtr_A *_other)
{
    MRBINDC_TRY(
    return (MR_StdSharedPtr_A *)new MR::StdSharedPtr::A(MR::StdSharedPtr::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::StdSharedPtr::A(*(MR::StdSharedPtr::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_A_Destroy(const MR_StdSharedPtr_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::StdSharedPtr::A *)_this);
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_A_DestroyArray(const MR_StdSharedPtr_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::StdSharedPtr::A *)_this);
    ) // MRBINDC_TRY
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_AssignFromAnother(MR_StdSharedPtr_A *_this, const MR_StdSharedPtr_A *_other)
{
    MRBINDC_TRY(
    return (MR_StdSharedPtr_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::StdSharedPtr::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::StdSharedPtr::A(*(MR::StdSharedPtr::A *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_StdSharedPtr_GetClass(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)new std::shared_ptr<MR::StdSharedPtr::A>(::MR::StdSharedPtr::GetClass());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClass(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A>);
    ::MR::StdSharedPtr::SetClass(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetClassConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A>);
    ::MR::StdSharedPtr::SetClassDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A>>{}), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A>);
    ::MR::StdSharedPtr::SetClassDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<MR::StdSharedPtr::A>(MR::StdSharedPtr::A{})), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassLvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetClassLvalueRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(std::shared_ptr<MR::StdSharedPtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassLvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetClassLvalueConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassRvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetClassRvalueRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(std::shared_ptr<MR::StdSharedPtr::A> *)(_1)))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassRvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    MRBINDC_TRY(
    ::MR::StdSharedPtr::SetClassRvalueConstRef(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1)))
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_StdSharedPtr_GetClassArr(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(::MR::StdSharedPtr::GetClassArr());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[]>);
    ::MR::StdSharedPtr::SetClassArr(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[]>);
    ::MR::StdSharedPtr::SetClassArrDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A[]>>{}), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[]>);
    ::MR::StdSharedPtr::SetClassArrDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<MR::StdSharedPtr::A[]>(42)), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *MR_StdSharedPtr_GetClassArr42(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<MR::StdSharedPtr::A[42]>(::MR::StdSharedPtr::GetClassArr42());
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>);
    ::MR::StdSharedPtr::SetClassArr42(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>);
    ::MR::StdSharedPtr::SetClassArr42DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A[42]>>{}), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
    ) // MRBINDC_TRY
}

void MR_StdSharedPtr_SetClassArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdSharedPtr;
    MRBINDC_CLASSARG_GUARD(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>);
    ::MR::StdSharedPtr::SetClassArr42Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_shared<MR::StdSharedPtr::A[42]>()), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_int *MR_StdSharedPtr_GetConstInt(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_int *)new std::shared_ptr<const int>(::MR::StdSharedPtr::GetConstInt());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_int_array *MR_StdSharedPtr_GetConstIntArr(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_int_array *)new std::shared_ptr<const int[]>(::MR::StdSharedPtr::GetConstIntArr());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_int_array_42 *MR_StdSharedPtr_GetConstIntArr42(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_int_array_42 *)new std::shared_ptr<const int[42]>(::MR::StdSharedPtr::GetConstIntArr42());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_StdSharedPtr_GetConstClass(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(::MR::StdSharedPtr::GetConstClass());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_StdSharedPtr_GetConstClassArr(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(::MR::StdSharedPtr::GetConstClassArr());
    ) // MRBINDC_TRY
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_StdSharedPtr_GetConstClassArr42(void)
{
    MRBINDC_TRY(
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(::MR::StdSharedPtr::GetConstClassArr42());
    ) // MRBINDC_TRY
}


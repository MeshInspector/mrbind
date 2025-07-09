#include "MR/test_std_shared_ptr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_shared_ptr.h>

#include <stdexcept>
#include <utility>


MR_C_std_shared_ptr_int32_t *MR_StdSharedPtr_GetInt(void)
{
    return (MR_C_std_shared_ptr_int32_t *)new std::shared_ptr<int32_t>(::MR::StdSharedPtr::GetInt());
}

void MR_StdSharedPtr_SetInt(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetInt(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t>))
    );
}

void MR_StdSharedPtr_SetIntConstRef(const MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetIntConstRef(
        (_1 ? *(const std::shared_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetIntDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int>>{}), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t>))
    );
}

void MR_StdSharedPtr_SetIntDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t>), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<int>(42)), std::shared_ptr<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t>))
    );
}

void MR_StdSharedPtr_SetIntLvalueRef(MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetIntLvalueRef(
        (_1 ? *(std::shared_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetIntLvalueConstRef(const MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetIntLvalueConstRef(
        (_1 ? *(const std::shared_ptr<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetIntRvalueRef(MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetIntRvalueRef(
        (_1 ? std::move(*(std::shared_ptr<int32_t> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetIntRvalueConstRef(const MR_C_std_shared_ptr_int32_t *_1)
{
    ::MR::StdSharedPtr::SetIntRvalueConstRef(
        (_1 ? std::move(*(const std::shared_ptr<int32_t> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_shared_ptr_int32_t_array *MR_StdSharedPtr_GetIntArr(void)
{
    return (MR_C_std_shared_ptr_int32_t_array *)new std::shared_ptr<int32_t[]>(::MR::StdSharedPtr::GetIntArr());
}

void MR_StdSharedPtr_SetIntArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array *_1)
{
    ::MR::StdSharedPtr::SetIntArr(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[]>))
    );
}

void MR_StdSharedPtr_SetIntArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntArrDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int[]>>{}), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[]>))
    );
}

void MR_StdSharedPtr_SetIntArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntArrDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[]>), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<int[]>(42)), std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[]>))
    );
}

MR_C_std_shared_ptr_int32_t_array_42 *MR_StdSharedPtr_GetIntArr42(void)
{
    return (MR_C_std_shared_ptr_int32_t_array_42 *)new std::shared_ptr<int32_t[42]>(::MR::StdSharedPtr::GetIntArr42());
}

void MR_StdSharedPtr_SetIntArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array_42 *_1)
{
    ::MR::StdSharedPtr::SetIntArr42(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[42]>))
    );
}

void MR_StdSharedPtr_SetIntArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array_42 *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntArr42DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<int[42]>>{}), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[42]>))
    );
}

void MR_StdSharedPtr_SetIntArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int32_t_array_42 *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetIntArr42Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<int32_t[42]>), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_shared<int[42]>()), std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<int32_t[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<int32_t[42]>))
    );
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstruct(void)
{
    return (MR_StdSharedPtr_A *)new MR::StdSharedPtr::A(MR::StdSharedPtr::A());
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdSharedPtr_A *)(new MR::StdSharedPtr::A[num_elems]{});
}

const MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetPtr(const MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (const MR_StdSharedPtr_A *)(((const MR::StdSharedPtr::A *)ptr) + i);
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetMutablePtr(MR_StdSharedPtr_A *ptr, ptrdiff_t i)
{
    return (MR_StdSharedPtr_A *)(((MR::StdSharedPtr::A *)ptr) + i);
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_ConstructFromAnother(const MR_StdSharedPtr_A *_other)
{
    return (MR_StdSharedPtr_A *)new MR::StdSharedPtr::A(MR::StdSharedPtr::A(
        (_other ? MR::StdSharedPtr::A(*(MR::StdSharedPtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StdSharedPtr_A_Destroy(const MR_StdSharedPtr_A *_this)
{
    delete ((const MR::StdSharedPtr::A *)_this);
}

void MR_StdSharedPtr_A_DestroyArray(const MR_StdSharedPtr_A *_this)
{
    delete[] ((const MR::StdSharedPtr::A *)_this);
}

MR_StdSharedPtr_A *MR_StdSharedPtr_A_AssignFromAnother(MR_StdSharedPtr_A *_this, const MR_StdSharedPtr_A *_other)
{
    return (MR_StdSharedPtr_A *)&((_this ? *(MR::StdSharedPtr::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdSharedPtr::A(*(MR::StdSharedPtr::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_StdSharedPtr_GetClass(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A *)new std::shared_ptr<MR::StdSharedPtr::A>(::MR::StdSharedPtr::GetClass());
}

void MR_StdSharedPtr_SetClass(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClass(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
}

void MR_StdSharedPtr_SetClassConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClassConstRef(
        (_1 ? *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetClassDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A>>{}), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
}

void MR_StdSharedPtr_SetClassDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A>), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<MR::StdSharedPtr::A>(MR::StdSharedPtr::A{})), std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A>))
    );
}

void MR_StdSharedPtr_SetClassLvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClassLvalueRef(
        (_1 ? *(std::shared_ptr<MR::StdSharedPtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetClassLvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClassLvalueConstRef(
        (_1 ? *(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetClassRvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClassRvalueRef(
        (_1 ? std::move(*(std::shared_ptr<MR::StdSharedPtr::A> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdSharedPtr_SetClassRvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1)
{
    ::MR::StdSharedPtr::SetClassRvalueConstRef(
        (_1 ? std::move(*(const std::shared_ptr<MR::StdSharedPtr::A> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_StdSharedPtr_GetClassArr(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *)new std::shared_ptr<MR::StdSharedPtr::A[]>(::MR::StdSharedPtr::GetClassArr());
}

void MR_StdSharedPtr_SetClassArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    ::MR::StdSharedPtr::SetClassArr(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
}

void MR_StdSharedPtr_SetClassArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassArrDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A[]>>{}), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
}

void MR_StdSharedPtr_SetClassArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassArrDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[]>), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_unique<MR::StdSharedPtr::A[]>(42)), std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[]>))
    );
}

MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *MR_StdSharedPtr_GetClassArr42(void)
{
    return (MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<MR::StdSharedPtr::A[42]>(::MR::StdSharedPtr::GetClassArr42());
}

void MR_StdSharedPtr_SetClassArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    ::MR::StdSharedPtr::SetClassArr42(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
}

void MR_StdSharedPtr_SetClassArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassArr42DefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::shared_ptr<MR::StdSharedPtr::A[42]>>{}), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
}

void MR_StdSharedPtr_SetClassArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1)
{
    using namespace MR;
    using namespace StdSharedPtr;
    ::MR::StdSharedPtr::SetClassArr42Def(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_COPY(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_MOVE(_1, (std::shared_ptr<MR::StdSharedPtr::A[42]>), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::make_shared<MR::StdSharedPtr::A[42]>()), std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::shared_ptr<MR::StdSharedPtr::A[42]>) MRBINDC_CLASSARG_END(_1, std::shared_ptr<MR::StdSharedPtr::A[42]>))
    );
}

MR_C_std_shared_ptr_const_int32_t *MR_StdSharedPtr_GetConstInt(void)
{
    return (MR_C_std_shared_ptr_const_int32_t *)new std::shared_ptr<const int32_t>(::MR::StdSharedPtr::GetConstInt());
}

MR_C_std_shared_ptr_const_int32_t_array *MR_StdSharedPtr_GetConstIntArr(void)
{
    return (MR_C_std_shared_ptr_const_int32_t_array *)new std::shared_ptr<const int32_t[]>(::MR::StdSharedPtr::GetConstIntArr());
}

MR_C_std_shared_ptr_const_int32_t_array_42 *MR_StdSharedPtr_GetConstIntArr42(void)
{
    return (MR_C_std_shared_ptr_const_int32_t_array_42 *)new std::shared_ptr<const int32_t[42]>(::MR::StdSharedPtr::GetConstIntArr42());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *MR_StdSharedPtr_GetConstClass(void)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A *)new std::shared_ptr<const MR::StdSharedPtr::A>(::MR::StdSharedPtr::GetConstClass());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *MR_StdSharedPtr_GetConstClassArr(void)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array *)new std::shared_ptr<const MR::StdSharedPtr::A[]>(::MR::StdSharedPtr::GetConstClassArr());
}

MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *MR_StdSharedPtr_GetConstClassArr42(void)
{
    return (MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42 *)new std::shared_ptr<const MR::StdSharedPtr::A[42]>(::MR::StdSharedPtr::GetConstClassArr42());
}


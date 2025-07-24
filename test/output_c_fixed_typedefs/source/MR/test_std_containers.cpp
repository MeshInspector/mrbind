#define MR_C_BUILD_LIBRARY
#include "MR/test_std_containers.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>


void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::Set(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int32_t>) MRBINDC_CLASSARG_COPY(_1, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<int32_t>) MRBINDC_CLASSARG_END(_1, std::vector<int32_t>))
    );
}

void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int32_t *_1)
{
    using namespace MR;
    using namespace StdContainers;
    ::MR::StdContainers::SetWithDefault(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int32_t>) MRBINDC_CLASSARG_COPY(_1, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<int32_t>), std::vector<int32_t>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::vector<int>>{1, 2, 3}), std::vector<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<int32_t>) MRBINDC_CLASSARG_END(_1, std::vector<int32_t>))
    );
}

MR_C_std_vector_int32_t *MR_StdContainers_Get(void)
{
    return (MR_C_std_vector_int32_t *)new std::vector<int32_t>(::MR::StdContainers::Get());
}

void MR_StdContainers_WriteToRef(MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::WriteToRef(
        (_1 ? *(std::vector<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_WriteToPtr(MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::WriteToPtr(
        ((std::vector<int32_t> *)_1)
    );
}

void MR_StdContainers_ConstRef(const MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::ConstRef(
        (_1 ? *(const std::vector<int32_t> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_RvalueRef(MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::RvalueRef(
        (_1 ? std::move(*(std::vector<int32_t> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int32_t *_1)
{
    ::MR::StdContainers::ConstRvalueRef(
        (_1 ? std::move(*(const std::vector<int32_t> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_deque_int32_t *MR_StdContainers_GetDeque(void)
{
    return (MR_C_std_deque_int32_t *)new std::deque<int32_t>(::MR::StdContainers::GetDeque());
}

MR_C_std_list_int32_t *MR_StdContainers_GetList(void)
{
    return (MR_C_std_list_int32_t *)new std::list<int32_t>(::MR::StdContainers::GetList());
}

MR_C_std_set_int32_t *MR_StdContainers_GetSet(void)
{
    return (MR_C_std_set_int32_t *)new std::set<int32_t>(::MR::StdContainers::GetSet());
}

MR_C_std_multiset_int32_t *MR_StdContainers_GetMultiSet(void)
{
    return (MR_C_std_multiset_int32_t *)new std::multiset<int32_t>(::MR::StdContainers::GetMultiSet());
}

MR_C_std_unordered_set_int32_t *MR_StdContainers_GetUnorderedSet(void)
{
    return (MR_C_std_unordered_set_int32_t *)new std::unordered_set<int32_t>(::MR::StdContainers::GetUnorderedSet());
}

MR_C_std_unordered_multiset_int32_t *MR_StdContainers_GetUnorderedMultiSet(void)
{
    return (MR_C_std_unordered_multiset_int32_t *)new std::unordered_multiset<int32_t>(::MR::StdContainers::GetUnorderedMultiSet());
}

MR_C_std_map_int32_t_float *MR_StdContainers_GetMap(void)
{
    return (MR_C_std_map_int32_t_float *)new std::map<int32_t, float>(::MR::StdContainers::GetMap());
}

MR_C_std_multimap_int32_t_float *MR_StdContainers_GetMultiMap(void)
{
    return (MR_C_std_multimap_int32_t_float *)new std::multimap<int32_t, float>(::MR::StdContainers::GetMultiMap());
}

MR_C_std_unordered_map_int32_t_float *MR_StdContainers_GetUnorderedMap(void)
{
    return (MR_C_std_unordered_map_int32_t_float *)new std::unordered_map<int32_t, float>(::MR::StdContainers::GetUnorderedMap());
}

MR_C_std_unordered_multimap_int32_t_float *MR_StdContainers_GetUnorderedMultiMap(void)
{
    return (MR_C_std_unordered_multimap_int32_t_float *)new std::unordered_multimap<int32_t, float>(::MR::StdContainers::GetUnorderedMultiMap());
}

MR_StdContainers_A *MR_StdContainers_A_DefaultConstruct(void)
{
    return (MR_StdContainers_A *)new MR::StdContainers::A(MR::StdContainers::A());
}

MR_StdContainers_A *MR_StdContainers_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdContainers_A *)(new MR::StdContainers::A[num_elems]{});
}

const MR_StdContainers_A *MR_StdContainers_A_OffsetPtr(const MR_StdContainers_A *ptr, ptrdiff_t i)
{
    return (const MR_StdContainers_A *)(((const MR::StdContainers::A *)ptr) + i);
}

MR_StdContainers_A *MR_StdContainers_A_OffsetMutablePtr(MR_StdContainers_A *ptr, ptrdiff_t i)
{
    return (MR_StdContainers_A *)(((MR::StdContainers::A *)ptr) + i);
}

MR_StdContainers_A *MR_StdContainers_A_ConstructFromAnother(const MR_StdContainers_A *_other)
{
    return (MR_StdContainers_A *)new MR::StdContainers::A(MR::StdContainers::A(
        (_other ? MR::StdContainers::A(*(MR::StdContainers::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_StdContainers_A_Destroy(const MR_StdContainers_A *_this)
{
    delete ((const MR::StdContainers::A *)_this);
}

void MR_StdContainers_A_DestroyArray(const MR_StdContainers_A *_this)
{
    delete[] ((const MR::StdContainers::A *)_this);
}

MR_StdContainers_A *MR_StdContainers_A_AssignFromAnother(MR_StdContainers_A *_this, const MR_StdContainers_A *_other)
{
    return (MR_StdContainers_A *)&((_this ? *(MR::StdContainers::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdContainers::A(*(MR::StdContainers::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_C_std_array_MR_StdContainers_A_42 *MR_StdContainers_GetStdArray(void)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)new std::array<MR::StdContainers::A, 42>(::MR::StdContainers::GetStdArray());
}

MR_C_std_array_int32_t_43 MR_StdContainers_GetStdArraySimple(void)
{
    return MRBINDC_BIT_CAST((MR_C_std_array_int32_t_43), ::MR::StdContainers::GetStdArraySimple());
}

void MR_StdContainers_StdArraySimpleParam(MR_C_std_array_int32_t_43 _1)
{
    ::MR::StdContainers::StdArraySimpleParam(
        MRBINDC_BIT_CAST((std::array<int32_t, 43>), _1)
    );
}

MR_C_std_array_int32_t_43 *MR_StdContainers_StdArraySimplePtr(MR_C_std_array_int32_t_43 *param)
{
    return (MR_C_std_array_int32_t_43 *)(::MR::StdContainers::StdArraySimplePtr(
        ((std::array<int32_t, 43> *)param)
    ));
}

MR_C_std_multiset_float *MR_StdContainers_GetMultiSetWithMergedIters(void)
{
    return (MR_C_std_multiset_float *)new std::multiset<float>(::MR::StdContainers::GetMultiSetWithMergedIters());
}

MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIter(void)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(::MR::StdContainers::GetMergedIter());
}

MR_C_std_set_float_const_iterator *MR_StdContainers_GetMergedIterConst(void)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(::MR::StdContainers::GetMergedIterConst());
}

MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(const MR_StdContainers_NonDefaultConstructible *_other)
{
    return (MR_StdContainers_NonDefaultConstructible *)new MR::StdContainers::NonDefaultConstructible(MR::StdContainers::NonDefaultConstructible(
        (_other ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (const MR_StdContainers_NonDefaultConstructible *)(((const MR::StdContainers::NonDefaultConstructible *)ptr) + i);
}

MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    return (MR_StdContainers_NonDefaultConstructible *)(((MR::StdContainers::NonDefaultConstructible *)ptr) + i);
}

MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_Construct(int32_t _1)
{
    return (MR_StdContainers_NonDefaultConstructible *)new MR::StdContainers::NonDefaultConstructible(MR::StdContainers::NonDefaultConstructible(
        _1
    ));
}

void MR_StdContainers_NonDefaultConstructible_Destroy(const MR_StdContainers_NonDefaultConstructible *_this)
{
    delete ((const MR::StdContainers::NonDefaultConstructible *)_this);
}

void MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_StdContainers_NonDefaultConstructible *_this)
{
    delete[] ((const MR::StdContainers::NonDefaultConstructible *)_this);
}

MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *_other)
{
    return (MR_StdContainers_NonDefaultConstructible *)&((_this ? *(MR::StdContainers::NonDefaultConstructible *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefCon(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(::MR::StdContainers::NonDefCon());
}


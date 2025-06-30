#include "MR/test_std_containers.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <stdexcept>
#include <utility>


void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::Set(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int>) MRBINDC_CLASSARG_COPY(_1, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(_1, std::vector<int>))
    );
}

void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    ::MR::StdContainers::SetWithDefault(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int>) MRBINDC_CLASSARG_COPY(_1, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_MOVE(_1, (std::vector<int>), std::vector<int>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::vector<int>>{1, 2, 3}), std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::vector<int>) MRBINDC_CLASSARG_END(_1, std::vector<int>))
    );
}

MR_C_std_vector_int *MR_StdContainers_Get(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(::MR::StdContainers::Get());
}

void MR_StdContainers_WriteToRef(MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::WriteToRef(
        (_1 ? *(std::vector<int> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_WriteToPtr(MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::WriteToPtr(
        ((std::vector<int> *)_1)
    );
}

void MR_StdContainers_ConstRef(const MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::ConstRef(
        (_1 ? *(const std::vector<int> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_RvalueRef(MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::RvalueRef(
        (_1 ? std::move(*(std::vector<int> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::ConstRvalueRef(
        (_1 ? std::move(*(const std::vector<int> *)(_1)) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_deque_int *MR_StdContainers_GetDeque(void)
{
    return (MR_C_std_deque_int *)new std::deque<int>(::MR::StdContainers::GetDeque());
}

MR_C_std_list_int *MR_StdContainers_GetList(void)
{
    return (MR_C_std_list_int *)new std::list<int>(::MR::StdContainers::GetList());
}

MR_C_std_set_int *MR_StdContainers_GetSet(void)
{
    return (MR_C_std_set_int *)new std::set<int>(::MR::StdContainers::GetSet());
}

MR_C_std_multiset_int *MR_StdContainers_GetMultiSet(void)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(::MR::StdContainers::GetMultiSet());
}

MR_C_std_unordered_set_int *MR_StdContainers_GetUnorderedSet(void)
{
    return (MR_C_std_unordered_set_int *)new std::unordered_set<int>(::MR::StdContainers::GetUnorderedSet());
}

MR_C_std_unordered_multiset_int *MR_StdContainers_GetUnorderedMultiSet(void)
{
    return (MR_C_std_unordered_multiset_int *)new std::unordered_multiset<int>(::MR::StdContainers::GetUnorderedMultiSet());
}

MR_C_std_map_int_float *MR_StdContainers_GetMap(void)
{
    return (MR_C_std_map_int_float *)new std::map<int, float>(::MR::StdContainers::GetMap());
}

MR_C_std_multimap_int_float *MR_StdContainers_GetMultiMap(void)
{
    return (MR_C_std_multimap_int_float *)new std::multimap<int, float>(::MR::StdContainers::GetMultiMap());
}

MR_C_std_unordered_map_int_float *MR_StdContainers_GetUnorderedMap(void)
{
    return (MR_C_std_unordered_map_int_float *)new std::unordered_map<int, float>(::MR::StdContainers::GetUnorderedMap());
}

MR_C_std_unordered_multimap_int_float *MR_StdContainers_GetUnorderedMultiMap(void)
{
    return (MR_C_std_unordered_multimap_int_float *)new std::unordered_multimap<int, float>(::MR::StdContainers::GetUnorderedMultiMap());
}

MR_C_std_array_int_42 *MR_StdContainers_GetStdArray(void)
{
    return (MR_C_std_array_int_42 *)new std::array<int, 42>(::MR::StdContainers::GetStdArray());
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


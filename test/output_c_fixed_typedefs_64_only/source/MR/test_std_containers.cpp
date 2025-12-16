#define MR_C_BUILD_LIBRARY
#include "MR/test_std_containers.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <array>
#include <cstddef>
#include <deque>
#include <list>
#include <map>
#include <memory>
#include <set>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>


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
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(std::vector<int> *)(_1))
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
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const std::vector<int> *)(_1))
    );
}

void MR_StdContainers_RvalueRef(MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::RvalueRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*(std::vector<int> *)(_1)))
    );
}

void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int *_1)
{
    ::MR::StdContainers::ConstRvalueRef(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*(const std::vector<int> *)(_1)))
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
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdContainers::A(*(MR::StdContainers::A *)_other))
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
    return (MR_StdContainers_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::StdContainers::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdContainers::A(*(MR::StdContainers::A *)_other))
    ));
}

MR_C_std_array_MR_StdContainers_A_42 *MR_StdContainers_GetStdArray(void)
{
    return (MR_C_std_array_MR_StdContainers_A_42 *)new std::array<MR::StdContainers::A, 42>(::MR::StdContainers::GetStdArray());
}

MR_C_std_array_int_43 MR_StdContainers_GetStdArraySimple(void)
{
    return MRBINDC_BIT_CAST((MR_C_std_array_int_43), ::MR::StdContainers::GetStdArraySimple());
}

void MR_StdContainers_StdArraySimpleParam(MR_C_std_array_int_43 _1)
{
    ::MR::StdContainers::StdArraySimpleParam(
        MRBINDC_BIT_CAST((std::array<int, 43>), _1)
    );
}

MR_C_std_array_int_43 *MR_StdContainers_StdArraySimplePtr(MR_C_std_array_int_43 *param)
{
    return (MR_C_std_array_int_43 *)(::MR::StdContainers::StdArraySimplePtr(
        ((std::array<int, 43> *)param)
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
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)_other))
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

MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefaultConstructible_Construct(int _1)
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
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::StdContainers::NonDefaultConstructible *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)_other))
    ));
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_StdContainers_NonDefCon(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(::MR::StdContainers::NonDefCon());
}

MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    return (MR_StdContainers_NonAssignable *)new MR::StdContainers::NonAssignable(MR::StdContainers::NonAssignable());
}

MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    return (MR_StdContainers_NonAssignable *)(new MR::StdContainers::NonAssignable[num_elems]{});
}

const MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_OffsetPtr(const MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (const MR_StdContainers_NonAssignable *)(((const MR::StdContainers::NonAssignable *)ptr) + i);
}

MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (MR_StdContainers_NonAssignable *)(((MR::StdContainers::NonAssignable *)ptr) + i);
}

MR_StdContainers_NonAssignable *MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdContainers_NonAssignable *_other)
{
    return (MR_StdContainers_NonAssignable *)new MR::StdContainers::NonAssignable(MR::StdContainers::NonAssignable(
        (MRBINDC_CLASSARG_DEF_CTOR(_other, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(_other, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_other, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(_other, MR::StdContainers::NonAssignable))
    ));
}

void MR_StdContainers_NonAssignable_Destroy(const MR_StdContainers_NonAssignable *_this)
{
    delete ((const MR::StdContainers::NonAssignable *)_this);
}

void MR_StdContainers_NonAssignable_DestroyArray(const MR_StdContainers_NonAssignable *_this)
{
    delete[] ((const MR::StdContainers::NonAssignable *)_this);
}

bool MR_C_less_MR_StdContainers_NonAssignable(const MR_StdContainers_NonAssignable *_this, MR_C_PassBy _1_pass_by, MR_StdContainers_NonAssignable *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::StdContainers::NonAssignable *)(_this)).operator<(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(_1, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(_1, MR::StdContainers::NonAssignable))
    );
}

bool MR_C_equal_MR_StdContainers_NonAssignable(const MR_StdContainers_NonAssignable *_this, MR_C_PassBy _1_pass_by, MR_StdContainers_NonAssignable *_1)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const MR::StdContainers::NonAssignable *)(_this)).operator==(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(_1, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(_1, MR::StdContainers::NonAssignable))
    );
}

MR_C_std_vector_MR_StdContainers_NonAssignable *MR_StdContainers_GetVectorNA(void)
{
    return (MR_C_std_vector_MR_StdContainers_NonAssignable *)new std::vector<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetVectorNA());
}

MR_C_std_deque_MR_StdContainers_NonAssignable *MR_StdContainers_GetDequeNA(void)
{
    return (MR_C_std_deque_MR_StdContainers_NonAssignable *)new std::deque<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetDequeNA());
}

MR_C_std_list_MR_StdContainers_NonAssignable *MR_StdContainers_GetListNA(void)
{
    return (MR_C_std_list_MR_StdContainers_NonAssignable *)new std::list<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetListNA());
}

MR_C_std_set_MR_StdContainers_NonAssignable *MR_StdContainers_GetSetNA(void)
{
    return (MR_C_std_set_MR_StdContainers_NonAssignable *)new std::set<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetSetNA());
}

MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_StdContainers_GetMultiSetNA(void)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable *)new std::multiset<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetMultiSetNA());
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_StdContainers_GetUnorderedSetNA(void)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)new std::unordered_set<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetUnorderedSetNA());
}

MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable *MR_StdContainers_GetUnorderedMultiSetNA(void)
{
    return (MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable *)new std::unordered_multiset<MR::StdContainers::NonAssignable>(::MR::StdContainers::GetUnorderedMultiSetNA());
}

MR_C_std_map_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetMapNA(void)
{
    return (MR_C_std_map_MR_StdContainers_NonAssignable_float *)new std::map<MR::StdContainers::NonAssignable, float>(::MR::StdContainers::GetMapNA());
}

MR_C_std_multimap_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetMultiMapNA(void)
{
    return (MR_C_std_multimap_MR_StdContainers_NonAssignable_float *)new std::multimap<MR::StdContainers::NonAssignable, float>(::MR::StdContainers::GetMultiMapNA());
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetUnorderedMapNA(void)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)new std::unordered_map<MR::StdContainers::NonAssignable, float>(::MR::StdContainers::GetUnorderedMapNA());
}

MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float *MR_StdContainers_GetUnorderedMultiMapNA(void)
{
    return (MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float *)new std::unordered_multimap<MR::StdContainers::NonAssignable, float>(::MR::StdContainers::GetUnorderedMultiMapNA());
}

MR_C_std_array_MR_StdContainers_NonAssignable_42 *MR_StdContainers_GetStdArrayNA(void)
{
    return (MR_C_std_array_MR_StdContainers_NonAssignable_42 *)new std::array<MR::StdContainers::NonAssignable, 42>(::MR::StdContainers::GetStdArrayNA());
}

MR_C_std_array_int_array_4_array_3_5 MR_StdContainers_GetStdArrayOfPlainArray(void)
{
    return MRBINDC_BIT_CAST((MR_C_std_array_int_array_4_array_3_5), ::MR::StdContainers::GetStdArrayOfPlainArray());
}


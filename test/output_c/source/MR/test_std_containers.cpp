#include "MR/test_std_containers.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <stdexcept>
#include <utility>


void MR_StdContainers_Set(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::Set(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int>) MRBINDC_CLASSARG_COPY(_1, std::vector<int>) MRBINDC_CLASSARG_MOVE(_1, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, std::vector<int>) MRBINDC_CLASSARG_END(_1, std::vector<int>))
    );
}

void MR_StdContainers_SetWithDefault(MR_C_PassBy _1_pass_by, MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::SetWithDefault(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::vector<int>) MRBINDC_CLASSARG_COPY(_1, std::vector<int>) MRBINDC_CLASSARG_MOVE(_1, std::vector<int>) MRBINDC_CLASSARG_DEF_ARG(_1, std::vector<int>, std::type_identity_t<std::vector<int>>{1, 2, 3}) MRBINDC_CLASSARG_END(_1, std::vector<int>))
    );
}

MR_C_std_vector_int *MR_StdContainers_Get(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_vector_int *)new std::vector<int>(MR::StdContainers::Get());
}

void MR_StdContainers_WriteToRef(MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::WriteToRef(
        (_1 ? *(std::vector<int>*)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_WriteToPtr(MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::WriteToPtr(
        ((std::vector<int>*)_1)
    );
}

void MR_StdContainers_ConstRef(const MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::ConstRef(
        (_1 ? *(const std::vector<int>*)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_RvalueRef(MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::RvalueRef(
        std::move(_1 ? *(std::vector<int>*)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdContainers_ConstRvalueRef(const MR_C_std_vector_int *_1)
{
    using namespace MR;
    using namespace StdContainers;
    MR::StdContainers::ConstRvalueRef(
        std::move(_1 ? *(const std::vector<int>*)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

MR_C_std_deque_int *MR_StdContainers_GetDeque(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_deque_int *)new std::deque<int>(MR::StdContainers::GetDeque());
}

MR_C_std_list_int *MR_StdContainers_GetList(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_list_int *)new std::list<int>(MR::StdContainers::GetList());
}

MR_C_std_set_int *MR_StdContainers_GetSet(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_set_int *)new std::set<int>(MR::StdContainers::GetSet());
}

MR_C_std_multiset_int *MR_StdContainers_GetMultiSet(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_multiset_int *)new std::multiset<int>(MR::StdContainers::GetMultiSet());
}

MR_C_std_unordered_set_int *MR_StdContainers_GetUnorderedSet(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_unordered_set_int *)new std::unordered_set<int>(MR::StdContainers::GetUnorderedSet());
}

MR_C_std_unordered_multiset_int *MR_StdContainers_GetUnorderedMultiSet(void)
{
    using namespace MR;
    using namespace StdContainers;
    return (MR_C_std_unordered_multiset_int *)new std::unordered_multiset<int>(MR::StdContainers::GetUnorderedMultiSet());
}


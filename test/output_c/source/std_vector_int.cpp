#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, std::vector<int>) MRBINDC_CLASSARG_MOVE(other, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>) 
    ));
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    (*((std::vector<int>*)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>) MRBINDC_CLASSARG_COPY(other, std::vector<int>) MRBINDC_CLASSARG_MOVE(other, std::vector<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>) MRBINDC_CLASSARG_END(other, std::vector<int>) 
    );
}

void MR_C_std_vector_int_Destroy(MR_C_std_vector_int *_this)
{
    delete &(*((std::vector<int>*)_this));
}

size_t MR_C_std_vector_int_Size(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).size();
}

bool MR_C_std_vector_int_IsEmpty(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).empty();
}

void MR_C_std_vector_int_Resize(MR_C_std_vector_int *_this, size_t new_size)
{
    (*((std::vector<int>*)_this)).resize(
        new_size
    );
}

void MR_C_std_vector_int_Clear(MR_C_std_vector_int *_this)
{
    (*((std::vector<int>*)_this)).clear();
}

size_t MR_C_std_vector_int_Capacity(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).capacity();
}

void MR_C_std_vector_int_Reserve(MR_C_std_vector_int *_this, size_t new_capacity)
{
    (*((std::vector<int>*)_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int_ShrinkToFit(MR_C_std_vector_int *_this)
{
    (*((std::vector<int>*)_this)).shrink_to_fit();
}

const int *MR_C_std_vector_int_At(const MR_C_std_vector_int *_this, size_t i)
{
    return &((*((const std::vector<int>*)_this)).at(
        i
    ));
}

int *MR_C_std_vector_int_MutableAt(MR_C_std_vector_int *_this, size_t i)
{
    return &((*((std::vector<int>*)_this)).at(
        i
    ));
}

const int *MR_C_std_vector_int_Front(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).empty() ? &(*((const std::vector<int>*)_this)).front() : nullptr;
}

int *MR_C_std_vector_int_MutableFront(MR_C_std_vector_int *_this)
{
    return (*((std::vector<int>*)_this)).empty() ? &(*((std::vector<int>*)_this)).front() : nullptr;
}

const int *MR_C_std_vector_int_Back(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).empty() ? &(*((const std::vector<int>*)_this)).back() : nullptr;
}

int *MR_C_std_vector_int_MutableBack(MR_C_std_vector_int *_this)
{
    return (*((std::vector<int>*)_this)).empty() ? &(*((std::vector<int>*)_this)).back() : nullptr;
}

const int *MR_C_std_vector_int_Data(const MR_C_std_vector_int *_this)
{
    return (*((const std::vector<int>*)_this)).data();
}

int *MR_C_std_vector_int_MutableData(MR_C_std_vector_int *_this)
{
    return (*((std::vector<int>*)_this)).data();
}

void MR_C_std_vector_int_PushBack(MR_C_std_vector_int *_this, int new_elem)
{
    (*((std::vector<int>*)_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_int_PopBack(MR_C_std_vector_int *_this)
{
    (*((std::vector<int>*)_this)).pop_back();
}


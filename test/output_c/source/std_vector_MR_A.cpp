#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>) 
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    (*((std::vector<MR::A>*)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>) MRBINDC_CLASSARG_COPY(other, std::vector<MR::A>) MRBINDC_CLASSARG_MOVE(other, std::vector<MR::A>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>) MRBINDC_CLASSARG_END(other, std::vector<MR::A>) 
    );
}

void MR_C_std_vector_MR_A_Destroy(MR_C_std_vector_MR_A *_this)
{
    delete &(*((std::vector<MR::A>*)_this));
}

size_t MR_C_std_vector_MR_A_Size(const MR_C_std_vector_MR_A *_this)
{
    return (*((const std::vector<MR::A>*)_this)).size();
}

bool MR_C_std_vector_MR_A_IsEmpty(const MR_C_std_vector_MR_A *_this)
{
    return (*((const std::vector<MR::A>*)_this)).empty();
}

void MR_C_std_vector_MR_A_Resize(MR_C_std_vector_MR_A *_this, size_t new_size)
{
    (*((std::vector<MR::A>*)_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_A_Clear(MR_C_std_vector_MR_A *_this)
{
    (*((std::vector<MR::A>*)_this)).clear();
}

size_t MR_C_std_vector_MR_A_Capacity(const MR_C_std_vector_MR_A *_this)
{
    return (*((const std::vector<MR::A>*)_this)).capacity();
}

void MR_C_std_vector_MR_A_Reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity)
{
    (*((std::vector<MR::A>*)_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_A_ShrinkToFit(MR_C_std_vector_MR_A *_this)
{
    (*((std::vector<MR::A>*)_this)).shrink_to_fit();
}

const MR_A *MR_C_std_vector_MR_A_At(const MR_C_std_vector_MR_A *_this, size_t i)
{
    return (const MR_A *)&((*((const std::vector<MR::A>*)_this)).at(
        i
    ));
}

MR_A *MR_C_std_vector_MR_A_MutableAt(MR_C_std_vector_MR_A *_this, size_t i)
{
    return (MR_A *)&((*((std::vector<MR::A>*)_this)).at(
        i
    ));
}

const MR_A *MR_C_std_vector_MR_A_Front(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)((*((const std::vector<MR::A>*)_this)).empty() ? &(*((const std::vector<MR::A>*)_this)).front() : nullptr);
}

MR_A *MR_C_std_vector_MR_A_MutableFront(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)((*((std::vector<MR::A>*)_this)).empty() ? &(*((std::vector<MR::A>*)_this)).front() : nullptr);
}

const MR_A *MR_C_std_vector_MR_A_Back(const MR_C_std_vector_MR_A *_this)
{
    return (const MR_A *)((*((const std::vector<MR::A>*)_this)).empty() ? &(*((const std::vector<MR::A>*)_this)).back() : nullptr);
}

MR_A *MR_C_std_vector_MR_A_MutableBack(MR_C_std_vector_MR_A *_this)
{
    return (MR_A *)((*((std::vector<MR::A>*)_this)).empty() ? &(*((std::vector<MR::A>*)_this)).back() : nullptr);
}

void MR_C_std_vector_MR_A_PushBack(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem)
{
    (*((std::vector<MR::A>*)_this)).push_back(
        MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::A) MRBINDC_CLASSARG_COPY(new_elem, MR::A) MRBINDC_CLASSARG_MOVE(new_elem, MR::A) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR::A) MRBINDC_CLASSARG_END(new_elem, MR::A) 
    );
}

void MR_C_std_vector_MR_A_PopBack(MR_C_std_vector_MR_A *_this)
{
    (*((std::vector<MR::A>*)_this)).pop_back();
}


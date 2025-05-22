#include "std_vector_int.h"

#include <__mrbind_c_details.h>

#include <vector>


MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>());
}

MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_std_vector_int_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    return (MR_C_std_vector_int *)new std::vector<int>(std::vector<int>(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_COPY(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_MOVE(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_END(other, std::vector<int>) 
    ));
}

void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_std_vector_int_PassBy other_pass_by, MR_C_std_vector_int *other)
{
    (*((std::vector<int>*)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_COPY(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_MOVE(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<int>, MR_C_std_vector_int_PassBy) MRBINDC_CLASSARG_END(other, std::vector<int>) 
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


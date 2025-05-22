#include "std_vector_MR_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/1.h>

#include <vector>


MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>());
}

MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_std_vector_MR_A_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    return (MR_C_std_vector_MR_A *)new std::vector<MR::A>(std::vector<MR::A>(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_COPY(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_MOVE(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_END(other, std::vector<MR::A>) 
    ));
}

void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_std_vector_MR_A_PassBy other_pass_by, MR_C_std_vector_MR_A *other)
{
    (*((std::vector<MR::A>*)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_COPY(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_MOVE(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::vector<MR::A>, MR_C_std_vector_MR_A_PassBy) MRBINDC_CLASSARG_END(other, std::vector<MR::A>) 
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


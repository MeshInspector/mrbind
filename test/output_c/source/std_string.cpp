#include "std_string.h"

#include <__mrbind_c_details.h>

#include <stdexcept>


MR_C_std_string *MR_C_std_string_DefaultConstruct(void)
{
    return (MR_C_std_string *)new std::string(std::string());
}

MR_C_std_string *MR_C_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    return (MR_C_std_string *)new std::string(std::string(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, std::string) MRBINDC_CLASSARG_MOVE(other, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::string) MRBINDC_CLASSARG_END(other, std::string) 
    ));
}

MR_C_std_string *MR_C_std_string_ConstructFrom(const char *other, const char *other_end)
{
    return (MR_C_std_string *)new std::string(std::string(
        other ? (other_end ? std::string(other, other_end) : std::string(other)) : throw std::runtime_error("Parameter `other` can not be null.")
    ));
}

void MR_C_std_string_AssignFromAnother(MR_C_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    (*((std::string *)_this)).operator=(
        MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, std::string) MRBINDC_CLASSARG_MOVE(other, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::string) MRBINDC_CLASSARG_END(other, std::string) 
    );
}

void MR_C_std_string_AssignFrom(MR_C_std_string *_this, const char *other, const char *other_end)
{
    (*((std::string *)_this)).operator=(
        other ? (other_end ? std::string(other, other_end) : std::string(other)) : throw std::runtime_error("Parameter `other` can not be null.")
    );
}

void MR_C_std_string_Destroy(MR_C_std_string *_this)
{
    delete &(*((std::string *)_this));
}

size_t MR_C_std_string_Size(const MR_C_std_string *_this)
{
    return (*((const std::string *)_this)).size();
}

const char *MR_C_std_string_Data(const MR_C_std_string *_this)
{
    return (*((const std::string *)_this)).c_str();
}

const char *MR_C_std_string_MutableData(MR_C_std_string *_this)
{
    return (*((std::string *)_this)).data();
}

const char *MR_C_std_string_DataEnd(const MR_C_std_string *_this)
{
    return (*((const std::string *)_this)).c_str() + (*((const std::string *)_this)).size();
}

char *MR_C_std_string_MutableDataEnd(MR_C_std_string *_this)
{
    return (*((std::string *)_this)).data() + (*((std::string *)_this)).size();
}


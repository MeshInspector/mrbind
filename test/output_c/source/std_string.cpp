#include "std_string.h"

#include <__mrbind_c_details.h>

#include <stdexcept>


MR_C_std_string *MR_C_std_string_DefaultConstruct(void)
{
    return (MR_C_std_string *)new std::string(std::string());
}

MR_C_std_string *MR_C_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_string *)(new std::string[num_elems]{});
}

MR_C_std_string *MR_C_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    return (MR_C_std_string *)new std::string(std::string(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, (std::string), std::string) MRBINDC_CLASSARG_MOVE(other, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(other, std::string))
    ));
}

MR_C_std_string *MR_C_std_string_ConstructFrom(const char *other, const char *other_end)
{
    return (MR_C_std_string *)new std::string(std::string(
        (other ? (other_end ? std::string(other, other_end) : std::string(other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_string_AssignFromAnother(MR_C_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_string *other)
{
    (_this ? *(std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::string) MRBINDC_CLASSARG_COPY(other, (std::string), std::string) MRBINDC_CLASSARG_MOVE(other, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(other, std::string))
    );
}

void MR_C_std_string_AssignFrom(MR_C_std_string *_this, const char *other, const char *other_end)
{
    (_this ? *(std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? (other_end ? std::string(other, other_end) : std::string(other)) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_string_Destroy(MR_C_std_string *_this)
{
    delete ((std::string *)_this);
}

void MR_C_std_string_DestroyArray(MR_C_std_string *_this)
{
    delete[] ((std::string *)_this);
}

const MR_C_std_string *MR_C_std_string_OffsetPtr(const MR_C_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_string *)(((const std::string *)ptr) + i);
}

MR_C_std_string *MR_C_std_string_OffsetMutablePtr(MR_C_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_string *)(((std::string *)ptr) + i);
}

size_t MR_C_std_string_Size(const MR_C_std_string *_this)
{
    return (_this ? *(const std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

const char *MR_C_std_string_Data(const MR_C_std_string *_this)
{
    return (_this ? *(const std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c_str();
}

const char *MR_C_std_string_MutableData(MR_C_std_string *_this)
{
    return (_this ? *(std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data();
}

const char *MR_C_std_string_DataEnd(const MR_C_std_string *_this)
{
    return (_this ? *(const std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c_str() + (_this ? *(const std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

char *MR_C_std_string_MutableDataEnd(MR_C_std_string *_this)
{
    return (_this ? *(std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).data() + (_this ? *(std::string *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}


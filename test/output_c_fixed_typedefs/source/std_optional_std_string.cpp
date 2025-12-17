#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_optional_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <optional>
#include <stdexcept>
#include <string>


MR_C_std_optional_std_string *MR_C_std_optional_std_string_DefaultConstruct(void)
{
    return (MR_C_std_optional_std_string *)new std::optional<std::string>(std::optional<std::string>());
}

MR_C_std_optional_std_string *MR_C_std_optional_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_optional_std_string *)(new std::optional<std::string>[num_elems]{});
}

MR_C_std_optional_std_string *MR_C_std_optional_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_optional_std_string *other)
{
    return (MR_C_std_optional_std_string *)new std::optional<std::string>(std::optional<std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<std::string>) MRBINDC_CLASSARG_COPY(other, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(other, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(other, std::optional<std::string>))
    ));
}

MR_C_std_optional_std_string *MR_C_std_optional_std_string_ConstructFrom(const char *other, const char *other_end)
{
    return (MR_C_std_optional_std_string *)new std::optional<std::string>(std::optional<std::string>(
        (other ? std::optional<std::string>(other_end ? std::string(other, other_end) : std::string(other)) : std::nullopt)
    ));
}

void MR_C_std_optional_std_string_AssignFromAnother(MR_C_std_optional_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_optional_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::optional<std::string>) MRBINDC_CLASSARG_COPY(other, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_MOVE(other, (std::optional<std::string>), std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::optional<std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::optional<std::string>) MRBINDC_CLASSARG_END(other, std::optional<std::string>))
    );
}

void MR_C_std_optional_std_string_AssignFrom(MR_C_std_optional_std_string *_this, const char *other, const char *other_end)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<std::string> *)(_this)).operator=(
        (other ? std::optional<std::string>(other_end ? std::string(other, other_end) : std::string(other)) : std::nullopt)
    );
}

void MR_C_std_optional_std_string_Destroy(const MR_C_std_optional_std_string *_this)
{
    delete ((const std::optional<std::string> *)_this);
}

void MR_C_std_optional_std_string_DestroyArray(const MR_C_std_optional_std_string *_this)
{
    delete[] ((const std::optional<std::string> *)_this);
}

const MR_C_std_optional_std_string *MR_C_std_optional_std_string_OffsetPtr(const MR_C_std_optional_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_optional_std_string *)(((const std::optional<std::string> *)ptr) + i);
}

MR_C_std_optional_std_string *MR_C_std_optional_std_string_OffsetMutablePtr(MR_C_std_optional_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_optional_std_string *)(((std::optional<std::string> *)ptr) + i);
}

const MR_C_std_string *MR_C_std_optional_std_string_Value(const MR_C_std_optional_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::optional<std::string> *)(_this));
    return (const MR_C_std_string *)(_self ? &*_self : nullptr);
}

MR_C_std_string *MR_C_std_optional_std_string_MutableValue(MR_C_std_optional_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::optional<std::string> *)(_this));
    return (MR_C_std_string *)(_self ? &*_self : nullptr);
}


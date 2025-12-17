#define MR_C_BUILD_LIBRARY
#include "std_expected_int_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <expected>
#include <stdexcept>
#include <string>


MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_DefaultConstruct(void)
{
    return (MR_C_std_expected_int_std_string *)new std::expected<int, std::string>(std::expected<int, std::string>());
}

MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_expected_int_std_string *)(new std::expected<int, std::string>[num_elems]{});
}

MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other)
{
    return (MR_C_std_expected_int_std_string *)new std::expected<int, std::string>(std::expected<int, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int, std::string>))
    ));
}

void MR_C_std_expected_int_std_string_AssignFromAnother(MR_C_std_expected_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_expected_int_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(other, std::expected<int, std::string>))
    );
}

void MR_C_std_expected_int_std_string_Destroy(const MR_C_std_expected_int_std_string *_this)
{
    delete ((const std::expected<int, std::string> *)_this);
}

void MR_C_std_expected_int_std_string_DestroyArray(const MR_C_std_expected_int_std_string *_this)
{
    delete[] ((const std::expected<int, std::string> *)_this);
}

const MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_OffsetPtr(const MR_C_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_expected_int_std_string *)(((const std::expected<int, std::string> *)ptr) + i);
}

MR_C_std_expected_int_std_string *MR_C_std_expected_int_std_string_OffsetMutablePtr(MR_C_std_expected_int_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_expected_int_std_string *)(((std::expected<int, std::string> *)ptr) + i);
}

bool MR_C_std_expected_int_std_string_Success(const MR_C_std_expected_int_std_string *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, std::string> *)(_this)));
}

const int *MR_C_std_expected_int_std_string_GetValue(const MR_C_std_expected_int_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, std::string> *)(_this));
    return _self ? &*_self : nullptr;
}

const MR_C_std_string *MR_C_std_expected_int_std_string_GetError(const MR_C_std_expected_int_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::expected<int, std::string> *)(_this));
    return (const MR_C_std_string *)(_self ? nullptr : &_self.error());
}

int *MR_C_std_expected_int_std_string_GetMutableValue(MR_C_std_expected_int_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, std::string> *)(_this));
    return _self ? &*_self : nullptr;
}

MR_C_std_string *MR_C_std_expected_int_std_string_GetMutableError(MR_C_std_expected_int_std_string *_this)
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::expected<int, std::string> *)(_this));
    return (MR_C_std_string *)(_self ? nullptr : &_self.error());
}


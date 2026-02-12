#define MR_C_BUILD_LIBRARY
#include "std_tuple_int_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>


MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_DefaultConstruct(void)
{
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>());
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_int_std_string *)(new std::tuple<int, std::string>[num_elems]{});
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_tuple_int_std_string *other)
{
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::tuple<int, std::string>) MRBINDC_CLASSARG_END(other, std::tuple<int, std::string>))
    ));
}

void MR_C_std_tuple_int_std_string_AssignFromAnother(MR_C_std_tuple_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_tuple_int_std_string *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<int, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::tuple<int, std::string>) MRBINDC_CLASSARG_END(other, std::tuple<int, std::string>))
    );
}

void MR_C_std_tuple_int_std_string_Destroy(const MR_C_std_tuple_int_std_string *_this)
{
    delete ((const std::tuple<int, std::string> *)_this);
}

void MR_C_std_tuple_int_std_string_DestroyArray(const MR_C_std_tuple_int_std_string *_this)
{
    delete[] ((const std::tuple<int, std::string> *)_this);
}

const MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_OffsetPtr(const MR_C_std_tuple_int_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_int_std_string *)(((const std::tuple<int, std::string> *)ptr) + i);
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_OffsetMutablePtr(MR_C_std_tuple_int_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_int_std_string *)(((std::tuple<int, std::string> *)ptr) + i);
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_Construct(int _0, const char *_1, const char *_1_end)
{
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>(
        _0,
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), (_1_end ? std::string(_1, _1_end) : std::string(_1)))
    ));
}

const int *MR_C_std_tuple_int_std_string_get_int(const MR_C_std_tuple_int_std_string *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int, std::string> *)(_this))));
}

int *MR_C_std_tuple_int_std_string_get_int_mut(MR_C_std_tuple_int_std_string *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<int, std::string> *)(_this))));
}

const MR_C_std_string *MR_C_std_tuple_int_std_string_get_std_string(const MR_C_std_tuple_int_std_string *_this)
{
    return (const MR_C_std_string *)std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int, std::string> *)(_this))));
}

MR_C_std_string *MR_C_std_tuple_int_std_string_get_std_string_mut(MR_C_std_tuple_int_std_string *_this)
{
    return (MR_C_std_string *)std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<int, std::string> *)(_this))));
}


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
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_std_string *)(new std::tuple<int, std::string>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_tuple_int_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::tuple<int, std::string>);
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::tuple<int, std::string>) MRBINDC_CLASSARG_END(other, std::tuple<int, std::string>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_std_string_AssignFromAnother(MR_C_std_tuple_int_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_tuple_int_std_string *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::tuple<int, std::string>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, std::string> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, std::string>) MRBINDC_CLASSARG_COPY(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_MOVE(other, (std::tuple<int, std::string>), std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::tuple<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::tuple<int, std::string>) MRBINDC_CLASSARG_END(other, std::tuple<int, std::string>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_std_string_Destroy(const MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<int, std::string> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_int_std_string_DestroyArray(const MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<int, std::string> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_OffsetPtr(const MR_C_std_tuple_int_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_int_std_string *)(((const std::tuple<int, std::string> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_OffsetMutablePtr(MR_C_std_tuple_int_std_string *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_std_string *)(((std::tuple<int, std::string> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_int_std_string *MR_C_std_tuple_int_std_string_Construct(int _0, const char *_1, const char *_1_end)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_int_std_string *)new std::tuple<int, std::string>(std::tuple<int, std::string>(
        _0,
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), (_1_end ? std::string(_1, _1_end) : std::string(_1)))
    ));
    ) // MRBINDC_TRY
}

const int *MR_C_std_tuple_int_std_string_get_int(const MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::tuple<int, std::string> *)(_this))));
    ) // MRBINDC_TRY
}

int *MR_C_std_tuple_int_std_string_get_int_mut(MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    return std::addressof(std::get<0>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, std::string> *)(_this))));
    ) // MRBINDC_TRY
}

const MR_C_std_string *MR_C_std_tuple_int_std_string_get_std_string(const MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_string *)std::addressof(std::get<1>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::tuple<int, std::string> *)(_this))));
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_C_std_tuple_int_std_string_get_std_string_mut(MR_C_std_tuple_int_std_string *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)std::addressof(std::get<1>(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::tuple<int, std::string> *)(_this))));
    ) // MRBINDC_TRY
}


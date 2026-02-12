#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>


void MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    delete ((const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)_this);
}

void MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_DestroyArray(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    delete[] ((const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)_this);
}

const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_OffsetPtr(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *)(((const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)ptr) + i);
}

MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *)(((std::tuple<int32_t &, float &&, std::string &, std::string &&> *)ptr) + i);
}

MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(int32_t *_0, float *_1, MR_C_std_string *_2, const char *_3, const char *_3_end)
{
    return (MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *)new std::tuple<int32_t &, float &&, std::string &, std::string &&>(std::tuple<int32_t &, float &&, std::string &, std::string &&>(
        ((_0 ? void() : throw std::runtime_error("Parameter `_0` can not be null.")), *_0),
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), *(std::string *)(_2)),
        ((_3 ? void() : throw std::runtime_error("Parameter `_3` can not be null.")), (_3_end ? std::string(_3, _3_end) : std::string(_3)))
    ));
}

int32_t *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int32_t_ref(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)(_this))));
}

float *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    return std::addressof(mrbindc_details::unmove(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)(_this)))));
}

MR_C_std_string *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    return (MR_C_std_string *)std::addressof(std::get<2>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)(_this))));
}

MR_C_std_string *MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref *_this)
{
    return (MR_C_std_string *)std::addressof(mrbindc_details::unmove(std::get<3>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<int32_t &, float &&, std::string &, std::string &&> *)(_this)))));
}


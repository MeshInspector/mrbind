#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_re__883b.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>


MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *other)
{
    return (MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *)new std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&>(std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&>(std::move(*(std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)other)))
    ));
}

void MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    delete ((const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)_this);
}

void MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    delete[] ((const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)_this);
}

const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *)(((const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *)(((std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(const int32_t *_0, const float *_1, const char *_2, const char *_2_end, const char *_3, const char *_3_end)
{
    return (MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *)new std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&>(std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&>(
        ((_0 ? void() : throw std::runtime_error("Parameter `_0` can not be null.")), *_0),
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), (_2_end ? std::string(_2, _2_end) : std::string(_2))),
        ((_3 ? void() : throw std::runtime_error("Parameter `_3` can not be null.")), (_3_end ? std::string(_3, _3_end) : std::string(_3)))
    ));
}

const int32_t *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    return std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)(_this))));
}

const float *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    return std::addressof(mrbindc_details::unmove(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)(_this)))));
}

const MR_C_std_string *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    return (const MR_C_std_string *)std::addressof(std::get<2>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)(_this))));
}

const MR_C_std_string *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this)
{
    return (const MR_C_std_string *)std::addressof(mrbindc_details::unmove(std::get<3>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<const int32_t &, const float &&, const std::string &, const std::string &&> *)(_this)))));
}


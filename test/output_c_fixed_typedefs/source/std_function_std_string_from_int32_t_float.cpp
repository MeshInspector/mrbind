#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_std_string_from_int32_t_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <functional>
#include <stdexcept>
#include <string>


MR_C_std_function_std_string_from_int32_t_float *MR_C_std_function_std_string_from_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_function_std_string_from_int32_t_float *)new std::function<std::string(int32_t, float)>(std::function<std::string(int32_t, float)>());
}

MR_C_std_function_std_string_from_int32_t_float *MR_C_std_function_std_string_from_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_std_string_from_int32_t_float *)(new std::function<std::string(int32_t, float)>[num_elems]{});
}

MR_C_std_function_std_string_from_int32_t_float *MR_C_std_function_std_string_from_int32_t_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int32_t_float *other)
{
    return (MR_C_std_function_std_string_from_int32_t_float *)new std::function<std::string(int32_t, float)>(std::function<std::string(int32_t, float)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_COPY(other, (std::function<std::string(int32_t, float)>), std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_MOVE(other, (std::function<std::string(int32_t, float)>), std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_END(other, std::function<std::string(int32_t, float)>))
    ));
}

void MR_C_std_function_std_string_from_int32_t_float_AssignFromAnother(MR_C_std_function_std_string_from_int32_t_float *_this, MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int32_t_float *other)
{
    (_this ? *(std::function<std::string(int32_t, float)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_COPY(other, (std::function<std::string(int32_t, float)>), std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_MOVE(other, (std::function<std::string(int32_t, float)>), std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<std::string(int32_t, float)>) MRBINDC_CLASSARG_END(other, std::function<std::string(int32_t, float)>))
    );
}

void MR_C_std_function_std_string_from_int32_t_float_Destroy(const MR_C_std_function_std_string_from_int32_t_float *_this)
{
    delete ((const std::function<std::string(int32_t, float)> *)_this);
}

void MR_C_std_function_std_string_from_int32_t_float_DestroyArray(const MR_C_std_function_std_string_from_int32_t_float *_this)
{
    delete[] ((const std::function<std::string(int32_t, float)> *)_this);
}

const MR_C_std_function_std_string_from_int32_t_float *MR_C_std_function_std_string_from_int32_t_float_OffsetPtr(const MR_C_std_function_std_string_from_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_std_string_from_int32_t_float *)(((const std::function<std::string(int32_t, float)> *)ptr) + i);
}

MR_C_std_function_std_string_from_int32_t_float *MR_C_std_function_std_string_from_int32_t_float_OffsetMutablePtr(MR_C_std_function_std_string_from_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_std_string_from_int32_t_float *)(((std::function<std::string(int32_t, float)> *)ptr) + i);
}

void MR_C_std_function_std_string_from_int32_t_float_Assign(MR_C_std_function_std_string_from_int32_t_float *_this, const char *(*func)(const char **_return_end, int32_t _1, float _2))
{
    auto &_self = (_this ? *(std::function<std::string(int32_t, float)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int32_t _1, float _2) -> std::string
    {
        const char *_return_end = {};
        decltype(auto) _return = _f(
            &_return_end,
            _1,
            _2
        );
        return (_return ? (_return_end ? std::string(_return, _return_end) : std::string(_return)) : throw std::runtime_error("Parameter `_return` can not be null."));
    };
}

void MR_C_std_function_std_string_from_int32_t_float_AssignWithDataPtr(MR_C_std_function_std_string_from_int32_t_float *_this, const char *(*func)(const char **_return_end, int32_t _1, float _2, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = (_this ? *(std::function<std::string(int32_t, float)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    struct _functor
    {
        decltype(func) _func = nullptr;
        void *_userdata = nullptr;
        decltype(userdata_callback) _userdata_cb = nullptr;
    
        _functor(decltype(func) _func, void *_userdata, decltype(userdata_callback) _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}
    
        _functor(const _functor &_other) : _func(_other._func), _userdata_cb(_other._userdata_cb)
        {
            if (!_other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = _other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, _other._userdata);
        }
    
        _functor(_functor &&_other) noexcept : _func(_other._func), _userdata(_other._userdata), _userdata_cb(_other._userdata_cb)
        {
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
        }
    
        _functor &operator=(const _functor &_other)
        {
            if (_userdata_cb && _userdata_cb != _other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.
            {
                _userdata_cb(&_userdata, nullptr);
                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.
            }
            _func = _other._func;
            _userdata_cb = _other._userdata_cb;
            if (_other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.
                _userdata_cb(&_userdata, _other._userdata);
            else // Otherwise shallow-copy.
                _userdata = _other._userdata;
            return *this;
        }
    
        _functor &operator=(_functor &&_other) noexcept
        {
            _func = _other._func;
            _userdata = _other._userdata;
            _userdata_cb = _other._userdata_cb;
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
            return *this;
        }
    
        ~_functor()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }
    
        auto operator()(int32_t _1, float _2) -> std::string
        {
            const char *_return_end = {};
            decltype(auto) _return = _func(
                &_return_end,
                _1,
                _2,
                _userdata
            );
            return (_return ? (_return_end ? std::string(_return, _return_end) : std::string(_return)) : throw std::runtime_error("Parameter `_return` can not be null."));
        }
    };
    
    _self = _functor{func, userdata, userdata_callback};
}


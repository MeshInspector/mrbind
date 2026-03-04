#define MR_C_BUILD_LIBRARY
#include "std_function_std_string_from_int_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <stdexcept>
#include <string>


MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_DefaultConstruct(void)
{
    return (MR_C_std_function_std_string_from_int_float *)new std::function<std::string(int, float)>(std::function<std::string(int, float)>());
}

MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_std_string_from_int_float *)(new std::function<std::string(int, float)>[num_elems]{});
}

MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int_float *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<std::string(int, float)>);
    return (MR_C_std_function_std_string_from_int_float *)new std::function<std::string(int, float)>(std::function<std::string(int, float)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<std::string(int, float)>) MRBINDC_CLASSARG_COPY(other, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_MOVE(other, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<std::string(int, float)>) MRBINDC_CLASSARG_END(other, std::function<std::string(int, float)>))
    ));
}

void MR_C_std_function_std_string_from_int_float_AssignFromAnother(MR_C_std_function_std_string_from_int_float *_this, MR_C_PassBy other_pass_by, MR_C_std_function_std_string_from_int_float *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<std::string(int, float)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<std::string(int, float)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<std::string(int, float)>) MRBINDC_CLASSARG_COPY(other, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_MOVE(other, (std::function<std::string(int, float)>), std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<std::string(int, float)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<std::string(int, float)>) MRBINDC_CLASSARG_END(other, std::function<std::string(int, float)>))
    );
}

void MR_C_std_function_std_string_from_int_float_Destroy(const MR_C_std_function_std_string_from_int_float *_this)
{
    delete ((const std::function<std::string(int, float)> *)_this);
}

void MR_C_std_function_std_string_from_int_float_DestroyArray(const MR_C_std_function_std_string_from_int_float *_this)
{
    delete[] ((const std::function<std::string(int, float)> *)_this);
}

const MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_OffsetPtr(const MR_C_std_function_std_string_from_int_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_std_string_from_int_float *)(((const std::function<std::string(int, float)> *)ptr) + i);
}

MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_OffsetMutablePtr(MR_C_std_function_std_string_from_int_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_std_string_from_int_float *)(((std::function<std::string(int, float)> *)ptr) + i);
}

bool MR_C_std_function_std_string_from_int_float_has_value(const MR_C_std_function_std_string_from_int_float *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<std::string(int, float)> *)(_this)));
}

void MR_C_std_function_std_string_from_int_float_reset(MR_C_std_function_std_string_from_int_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<std::string(int, float)> *)(_this)) = nullptr;
}

MR_C_std_string *MR_C_std_function_std_string_from_int_float_call(const MR_C_std_function_std_string_from_int_float *_this, int _1, float _2)
{
    return (MR_C_std_string *)new std::string(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<std::string(int, float)> *)(_this)).operator()(
        _1,
        _2
    ));
}

MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_ConstructStateless(MR_C_std_string *(*func)(MR_C_PassBy *_return_pass_by, int _1, float _2))
{
    return (MR_C_std_function_std_string_from_int_float *)new std::function<std::string(int, float)>(func ? std::function<std::string(int, float)>([_f = func](int _1, float _2) -> std::string
    {
        MR_C_PassBy _return_pass_by = {};
        decltype(auto) _return = _f(
            &_return_pass_by,
            _1,
            _2
        );
        MRBINDC_CLASSARG_GUARD(_return, std::string);
        return (MRBINDC_CLASSARG_DEF_CTOR(_return, std::string) MRBINDC_CLASSARG_COPY(_return, (std::string), std::string) MRBINDC_CLASSARG_MOVE(_return, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(_return, std::string));
    }) : nullptr);
}

void MR_C_std_function_std_string_from_int_float_Assign(MR_C_std_function_std_string_from_int_float *_this, MR_C_std_string *(*func)(MR_C_PassBy *_return_pass_by, int _1, float _2))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<std::string(int, float)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int _1, float _2) -> std::string
    {
        MR_C_PassBy _return_pass_by = {};
        decltype(auto) _return = _f(
            &_return_pass_by,
            _1,
            _2
        );
        MRBINDC_CLASSARG_GUARD(_return, std::string);
        return (MRBINDC_CLASSARG_DEF_CTOR(_return, std::string) MRBINDC_CLASSARG_COPY(_return, (std::string), std::string) MRBINDC_CLASSARG_MOVE(_return, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(_return, std::string));
    };
}

namespace
{
    struct _functor_MR_C_std_function_std_string_from_int_float
    {
        using FuncPtr = MR_C_std_string *(*)(MR_C_PassBy *_return_pass_by, int _1, float _2, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_std_string_from_int_float(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_std_string_from_int_float(const _functor_MR_C_std_function_std_string_from_int_float &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_std_string_from_int_float(_functor_MR_C_std_function_std_string_from_int_float &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_std_string_from_int_float &operator=(const _functor_MR_C_std_function_std_string_from_int_float &other)
        {
            if (_userdata_cb && _userdata_cb != other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.
            {
                _userdata_cb(&_userdata, nullptr);
                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.
            }
            _func = other._func;
            _postcall_cb = other._postcall_cb;
            _userdata_cb = other._userdata_cb;
            if (other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.
                _userdata_cb(&_userdata, other._userdata);
            else // Otherwise shallow-copy.
                _userdata = other._userdata;
            return *this;
        }

        _functor_MR_C_std_function_std_string_from_int_float &operator=(_functor_MR_C_std_function_std_string_from_int_float &&other) noexcept
        {
            _func = other._func;
            _userdata = other._userdata;
            _postcall_cb = other._postcall_cb;
            _userdata_cb = other._userdata_cb;
            other._func = nullptr;
            other._userdata = nullptr;
            other._userdata_cb = nullptr;
            return *this;
        }

        ~_functor_MR_C_std_function_std_string_from_int_float()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(int _1, float _2) -> std::string
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_std_string_from_int_float *_self = nullptr;
                void *_value = nullptr;
                ~_cleanup_guard_type()
                {
                    if (_self->_postcall_cb)
                        _self->_postcall_cb(_self->_userdata, _value);
                }
            };
            _cleanup_guard_type _cleanup_guard;
            _cleanup_guard._self = this;
            MR_C_PassBy _return_pass_by = {};
            decltype(auto) _return = _func(
                &_return_pass_by,
                _1,
                _2,
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            MRBINDC_CLASSARG_GUARD(_return, std::string);
            return (MRBINDC_CLASSARG_DEF_CTOR(_return, std::string) MRBINDC_CLASSARG_COPY(_return, (std::string), std::string) MRBINDC_CLASSARG_MOVE(_return, (std::string), std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, std::string) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, std::string) MRBINDC_CLASSARG_END(_return, std::string));
        }
    };
}

MR_C_std_function_std_string_from_int_float *MR_C_std_function_std_string_from_int_float_ConstructEx(MR_C_std_string *(*func)(MR_C_PassBy *_return_pass_by, int _1, float _2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_std_string_from_int_float *)new std::function<std::string(int, float)>(func ? std::function<std::string(int, float)>(_functor_MR_C_std_function_std_string_from_int_float{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_std_string_from_int_float_AssignEx(MR_C_std_function_std_string_from_int_float *_this, MR_C_std_string *(*func)(MR_C_PassBy *_return_pass_by, int _1, float _2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<std::string(int, float)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_std_string_from_int_float{func, userdata, postcall_callback, userdata_callback};
}


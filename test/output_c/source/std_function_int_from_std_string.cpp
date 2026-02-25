#define MR_C_BUILD_LIBRARY
#include "std_function_int_from_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>


MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_DefaultConstruct(void)
{
    return (MR_C_std_function_int_from_std_string *)new std::function<int(std::string)>(std::function<int(std::string)>());
}

MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_int_from_std_string *)(new std::function<int(std::string)>[num_elems]{});
}

MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int_from_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<int(std::string)>);
    return (MR_C_std_function_int_from_std_string *)new std::function<int(std::string)>(std::function<int(std::string)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(std::string)>) MRBINDC_CLASSARG_END(other, std::function<int(std::string)>))
    ));
}

void MR_C_std_function_int_from_std_string_AssignFromAnother(MR_C_std_function_int_from_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int_from_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<int(std::string)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(std::string)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(std::string)>), std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(std::string)>) MRBINDC_CLASSARG_END(other, std::function<int(std::string)>))
    );
}

void MR_C_std_function_int_from_std_string_Destroy(const MR_C_std_function_int_from_std_string *_this)
{
    delete ((const std::function<int(std::string)> *)_this);
}

void MR_C_std_function_int_from_std_string_DestroyArray(const MR_C_std_function_int_from_std_string *_this)
{
    delete[] ((const std::function<int(std::string)> *)_this);
}

const MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_OffsetPtr(const MR_C_std_function_int_from_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_int_from_std_string *)(((const std::function<int(std::string)> *)ptr) + i);
}

MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_OffsetMutablePtr(MR_C_std_function_int_from_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_int_from_std_string *)(((std::function<int(std::string)> *)ptr) + i);
}

bool MR_C_std_function_int_from_std_string_has_value(const MR_C_std_function_int_from_std_string *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<int(std::string)> *)(_this)));
}

void MR_C_std_function_int_from_std_string_reset(MR_C_std_function_int_from_std_string *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(std::string)> *)(_this)) = nullptr;
}

MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_ConstructStateless(int (*func)(MR_C_std_string *_1))
{
    return (MR_C_std_function_int_from_std_string *)new std::function<int(std::string)>(func ? std::function<int(std::string)>([_f = func](std::string _1) -> int
    {
        decltype(auto) _return = _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
        return _return;
    }) : nullptr);
}

void MR_C_std_function_int_from_std_string_Assign(MR_C_std_function_int_from_std_string *_this, int (*func)(MR_C_std_string *_1))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](std::string _1) -> int
    {
        decltype(auto) _return = _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
        return _return;
    };
}

namespace
{
    struct _functor_MR_C_std_function_int_from_std_string
    {
        using FuncPtr = int (*)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_int_from_std_string(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_int_from_std_string(const _functor_MR_C_std_function_int_from_std_string &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_int_from_std_string(_functor_MR_C_std_function_int_from_std_string &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_int_from_std_string &operator=(const _functor_MR_C_std_function_int_from_std_string &other)
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

        _functor_MR_C_std_function_int_from_std_string &operator=(_functor_MR_C_std_function_int_from_std_string &&other) noexcept
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

        ~_functor_MR_C_std_function_int_from_std_string()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(std::string _1) -> int
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_int_from_std_string *_self = nullptr;
                void *_value = nullptr;
                ~_cleanup_guard_type()
                {
                    if (_self->_postcall_cb)
                        _self->_postcall_cb(_self->_userdata, _value);
                }
            };
            _cleanup_guard_type _cleanup_guard;
            _cleanup_guard._self = this;
            decltype(auto) _return = _func(
                (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1)),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return _return;
        }
    };
}

MR_C_std_function_int_from_std_string *MR_C_std_function_int_from_std_string_ConstructEx(int (*func)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_int_from_std_string *)new std::function<int(std::string)>(func ? std::function<int(std::string)>(_functor_MR_C_std_function_int_from_std_string{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_int_from_std_string_AssignEx(MR_C_std_function_int_from_std_string *_this, int (*func)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_int_from_std_string{func, userdata, postcall_callback, userdata_callback};
}


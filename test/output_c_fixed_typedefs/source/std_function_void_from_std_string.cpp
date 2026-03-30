#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_void_from_std_string.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>


MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstruct(void)
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(std::function<void(std::string)>());
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_void_from_std_string *)(new std::function<void(std::string)>[num_elems]{});
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<void(std::string)>);
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(std::function<void(std::string)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(std::string)>) MRBINDC_CLASSARG_END(other, std::function<void(std::string)>))
    ));
}

void MR_C_std_function_void_from_std_string_AssignFromAnother(MR_C_std_function_void_from_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_std_string *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<void(std::string)>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<void(std::string)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(std::string)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(std::string)>), std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(std::string)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(std::string)>) MRBINDC_CLASSARG_END(other, std::function<void(std::string)>))
    );
}

void MR_C_std_function_void_from_std_string_Destroy(const MR_C_std_function_void_from_std_string *_this)
{
    delete ((const std::function<void(std::string)> *)_this);
}

void MR_C_std_function_void_from_std_string_DestroyArray(const MR_C_std_function_void_from_std_string *_this)
{
    delete[] ((const std::function<void(std::string)> *)_this);
}

const MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetPtr(const MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_void_from_std_string *)(((const std::function<void(std::string)> *)ptr) + i);
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_OffsetMutablePtr(MR_C_std_function_void_from_std_string *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_void_from_std_string *)(((std::function<void(std::string)> *)ptr) + i);
}

bool MR_C_std_function_void_from_std_string_has_value(const MR_C_std_function_void_from_std_string *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<void(std::string)> *)(_this)));
}

void MR_C_std_function_void_from_std_string_reset(MR_C_std_function_void_from_std_string *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<void(std::string)> *)(_this)) = nullptr;
}

void MR_C_std_function_void_from_std_string_call(const MR_C_std_function_void_from_std_string *_this, const char *_1, const char *_1_end)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<void(std::string)> *)(_this)).operator()(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), (_1_end ? std::string(_1, _1_end) : std::string(_1)))
    );
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructStateless(void (*func)(MR_C_std_string *_1))
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(func ? std::function<void(std::string)>([_f = func](std::string _1) -> void
    {
        _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
    }) : nullptr);
}

void MR_C_std_function_void_from_std_string_Assign(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<void(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](std::string _1) -> void
    {
        _f(
            (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1))
        );
    };
}

namespace
{
    struct _functor_MR_C_std_function_void_from_std_string
    {
        using FuncPtr = void (*)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_void_from_std_string(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_void_from_std_string(const _functor_MR_C_std_function_void_from_std_string &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_void_from_std_string(_functor_MR_C_std_function_void_from_std_string &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_void_from_std_string &operator=(const _functor_MR_C_std_function_void_from_std_string &other)
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

        _functor_MR_C_std_function_void_from_std_string &operator=(_functor_MR_C_std_function_void_from_std_string &&other) noexcept
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

        ~_functor_MR_C_std_function_void_from_std_string()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(std::string _1) -> void
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_void_from_std_string *_self = nullptr;
                void *_value = nullptr;
                ~_cleanup_guard_type()
                {
                    if (_self->_postcall_cb)
                        _self->_postcall_cb(_self->_userdata, _value);
                }
            };
            _cleanup_guard_type _cleanup_guard;
            _cleanup_guard._self = this;
            
            _func(
                (MR_C_std_string *)std::addressof(mrbindc_details::unmove(_1)),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
        }
    };
}

MR_C_std_function_void_from_std_string *MR_C_std_function_void_from_std_string_ConstructEx(void (*func)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_void_from_std_string *)new std::function<void(std::string)>(func ? std::function<void(std::string)>(_functor_MR_C_std_function_void_from_std_string{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_void_from_std_string_AssignEx(MR_C_std_function_void_from_std_string *_this, void (*func)(MR_C_std_string *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<void(std::string)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_void_from_std_string{func, userdata, postcall_callback, userdata_callback};
}


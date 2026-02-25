#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_void.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_void *MR_C_std_function_void_DefaultConstruct(void)
{
    return (MR_C_std_function_void *)new std::function<void(void)>(std::function<void(void)>());
}

MR_C_std_function_void *MR_C_std_function_void_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_void *)(new std::function<void(void)>[num_elems]{});
}

MR_C_std_function_void *MR_C_std_function_void_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<void(void)>);
    return (MR_C_std_function_void *)new std::function<void(void)>(std::function<void(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(void)>) MRBINDC_CLASSARG_END(other, std::function<void(void)>))
    ));
}

void MR_C_std_function_void_AssignFromAnother(MR_C_std_function_void *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<void(void)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(void)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<void(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<void(void)>), std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<void(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<void(void)>) MRBINDC_CLASSARG_END(other, std::function<void(void)>))
    );
}

void MR_C_std_function_void_Destroy(const MR_C_std_function_void *_this)
{
    delete ((const std::function<void(void)> *)_this);
}

void MR_C_std_function_void_DestroyArray(const MR_C_std_function_void *_this)
{
    delete[] ((const std::function<void(void)> *)_this);
}

const MR_C_std_function_void *MR_C_std_function_void_OffsetPtr(const MR_C_std_function_void *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_void *)(((const std::function<void(void)> *)ptr) + i);
}

MR_C_std_function_void *MR_C_std_function_void_OffsetMutablePtr(MR_C_std_function_void *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_void *)(((std::function<void(void)> *)ptr) + i);
}

bool MR_C_std_function_void_has_value(const MR_C_std_function_void *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<void(void)> *)(_this)));
}

void MR_C_std_function_void_reset(MR_C_std_function_void *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(void)> *)(_this)) = nullptr;
}

MR_C_std_function_void *MR_C_std_function_void_ConstructStateless(void (*func)(void))
{
    return (MR_C_std_function_void *)new std::function<void(void)>(func ? std::function<void(void)>([_f = func](void) -> void
    {
        _f();
    }) : nullptr);
}

void MR_C_std_function_void_Assign(MR_C_std_function_void *_this, void (*func)(void))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](void) -> void
    {
        _f();
    };
}

namespace
{
    struct _functor_MR_C_std_function_void
    {
        using FuncPtr = void (*)(void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_void(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_void(const _functor_MR_C_std_function_void &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_void(_functor_MR_C_std_function_void &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_void &operator=(const _functor_MR_C_std_function_void &other)
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

        _functor_MR_C_std_function_void &operator=(_functor_MR_C_std_function_void &&other) noexcept
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

        ~_functor_MR_C_std_function_void()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(void) -> void
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_void *_self = nullptr;
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
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
        }
    };
}

MR_C_std_function_void *MR_C_std_function_void_ConstructEx(void (*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_void *)new std::function<void(void)>(func ? std::function<void(void)>(_functor_MR_C_std_function_void{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_void_AssignEx(MR_C_std_function_void *_this, void (*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<void(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_void{func, userdata, postcall_callback, userdata_callback};
}


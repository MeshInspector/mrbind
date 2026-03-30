#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_int32_t_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_DefaultConstruct(void)
{
    return (MR_C_std_function_int32_t_rvalue_ref *)new std::function<int32_t &&(void)>(std::function<int32_t &&(void)>());
}

MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_int32_t_rvalue_ref *)(new std::function<int32_t &&(void)>[num_elems]{});
}

MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int32_t_rvalue_ref *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<int32_t &&(void)>);
    return (MR_C_std_function_int32_t_rvalue_ref *)new std::function<int32_t &&(void)>(std::function<int32_t &&(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int32_t &&(void)>), std::function<int32_t &&(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int32_t &&(void)>), std::function<int32_t &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_END(other, std::function<int32_t &&(void)>))
    ));
}

void MR_C_std_function_int32_t_rvalue_ref_AssignFromAnother(MR_C_std_function_int32_t_rvalue_ref *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int32_t_rvalue_ref *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<int32_t &&(void)>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int32_t &&(void)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int32_t &&(void)>), std::function<int32_t &&(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int32_t &&(void)>), std::function<int32_t &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int32_t &&(void)>) MRBINDC_CLASSARG_END(other, std::function<int32_t &&(void)>))
    );
}

void MR_C_std_function_int32_t_rvalue_ref_Destroy(const MR_C_std_function_int32_t_rvalue_ref *_this)
{
    delete ((const std::function<int32_t &&(void)> *)_this);
}

void MR_C_std_function_int32_t_rvalue_ref_DestroyArray(const MR_C_std_function_int32_t_rvalue_ref *_this)
{
    delete[] ((const std::function<int32_t &&(void)> *)_this);
}

const MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_OffsetPtr(const MR_C_std_function_int32_t_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_int32_t_rvalue_ref *)(((const std::function<int32_t &&(void)> *)ptr) + i);
}

MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_OffsetMutablePtr(MR_C_std_function_int32_t_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_int32_t_rvalue_ref *)(((std::function<int32_t &&(void)> *)ptr) + i);
}

bool MR_C_std_function_int32_t_rvalue_ref_has_value(const MR_C_std_function_int32_t_rvalue_ref *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<int32_t &&(void)> *)(_this)));
}

void MR_C_std_function_int32_t_rvalue_ref_reset(MR_C_std_function_int32_t_rvalue_ref *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int32_t &&(void)> *)(_this)) = nullptr;
}

int32_t *MR_C_std_function_int32_t_rvalue_ref_call(const MR_C_std_function_int32_t_rvalue_ref *_this)
{
    return std::addressof(mrbindc_details::unmove(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<int32_t &&(void)> *)(_this)).operator()()));
}

MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_ConstructStateless(int32_t *(*func)(void))
{
    return (MR_C_std_function_int32_t_rvalue_ref *)new std::function<int32_t &&(void)>(func ? std::function<int32_t &&(void)>([_f = func](void) -> int32_t &&
    {
        decltype(auto) _return = _f();
        return ((_return ? void() : MRBINDC_THROW("Parameter `_return` can not be null.", void)), std::move(*_return));
    }) : nullptr);
}

void MR_C_std_function_int32_t_rvalue_ref_Assign(MR_C_std_function_int32_t_rvalue_ref *_this, int32_t *(*func)(void))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int32_t &&(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](void) -> int32_t &&
    {
        decltype(auto) _return = _f();
        return ((_return ? void() : MRBINDC_THROW("Parameter `_return` can not be null.", void)), std::move(*_return));
    };
}

namespace
{
    struct _functor_MR_C_std_function_int32_t_rvalue_ref
    {
        using FuncPtr = int32_t *(*)(void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_int32_t_rvalue_ref(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_int32_t_rvalue_ref(const _functor_MR_C_std_function_int32_t_rvalue_ref &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_int32_t_rvalue_ref(_functor_MR_C_std_function_int32_t_rvalue_ref &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_int32_t_rvalue_ref &operator=(const _functor_MR_C_std_function_int32_t_rvalue_ref &other)
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

        _functor_MR_C_std_function_int32_t_rvalue_ref &operator=(_functor_MR_C_std_function_int32_t_rvalue_ref &&other) noexcept
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

        ~_functor_MR_C_std_function_int32_t_rvalue_ref()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(void) -> int32_t &&
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_int32_t_rvalue_ref *_self = nullptr;
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
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return ((_return ? void() : MRBINDC_THROW("Parameter `_return` can not be null.", void)), std::move(*_return));
        }
    };
}

MR_C_std_function_int32_t_rvalue_ref *MR_C_std_function_int32_t_rvalue_ref_ConstructEx(int32_t *(*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_int32_t_rvalue_ref *)new std::function<int32_t &&(void)>(func ? std::function<int32_t &&(void)>(_functor_MR_C_std_function_int32_t_rvalue_ref{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_int32_t_rvalue_ref_AssignEx(MR_C_std_function_int32_t_rvalue_ref *_this, int32_t *(*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int32_t &&(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_int32_t_rvalue_ref{func, userdata, postcall_callback, userdata_callback};
}


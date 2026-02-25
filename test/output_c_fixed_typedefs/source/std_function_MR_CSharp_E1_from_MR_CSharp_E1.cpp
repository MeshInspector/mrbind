#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_MR_CSharp_E1_from_MR_CSharp_E1.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct(void)
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)new std::function<MR::CSharp::E1(MR::CSharp::E1)>(std::function<MR::CSharp::E1(MR::CSharp::E1)>());
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)(new std::function<MR::CSharp::E1(MR::CSharp::E1)>[num_elems]{});
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>);
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)new std::function<MR::CSharp::E1(MR::CSharp::E1)>(std::function<MR::CSharp::E1(MR::CSharp::E1)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_END(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>))
    ));
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother(MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::CSharp::E1(MR::CSharp::E1)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::CSharp::E1(MR::CSharp::E1)>), std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::CSharp::E1(MR::CSharp::E1)>) MRBINDC_CLASSARG_END(other, std::function<MR::CSharp::E1(MR::CSharp::E1)>))
    );
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Destroy(const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this)
{
    delete ((const std::function<MR::CSharp::E1(MR::CSharp::E1)> *)_this);
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DestroyArray(const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this)
{
    delete[] ((const std::function<MR::CSharp::E1(MR::CSharp::E1)> *)_this);
}

const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_OffsetPtr(const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)(((const std::function<MR::CSharp::E1(MR::CSharp::E1)> *)ptr) + i);
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_OffsetMutablePtr(MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)(((std::function<MR::CSharp::E1(MR::CSharp::E1)> *)ptr) + i);
}

bool MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value(const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this)
{
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<MR::CSharp::E1(MR::CSharp::E1)> *)(_this)));
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset(MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::CSharp::E1(MR::CSharp::E1)> *)(_this)) = nullptr;
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructStateless(MR_CSharp_E1 (*func)(MR_CSharp_E1 _1))
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)new std::function<MR::CSharp::E1(MR::CSharp::E1)>(func ? std::function<MR::CSharp::E1(MR::CSharp::E1)>([_f = func](MR::CSharp::E1 _1) -> MR::CSharp::E1
    {
        decltype(auto) _return = _f(
            (MR_CSharp_E1)(_1)
        );
        return ((MR::CSharp::E1)_return);
    }) : nullptr);
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Assign(MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this, MR_CSharp_E1 (*func)(MR_CSharp_E1 _1))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::CSharp::E1(MR::CSharp::E1)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](MR::CSharp::E1 _1) -> MR::CSharp::E1
    {
        decltype(auto) _return = _f(
            (MR_CSharp_E1)(_1)
        );
        return ((MR::CSharp::E1)_return);
    };
}

namespace
{
    struct _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1
    {
        using FuncPtr = MR_CSharp_E1 (*)(MR_CSharp_E1 _1, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1(const _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1(_functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &operator=(const _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &other)
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

        _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &operator=(_functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 &&other) noexcept
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

        ~_functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(MR::CSharp::E1 _1) -> MR::CSharp::E1
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_self = nullptr;
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
                (MR_CSharp_E1)(_1),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return ((MR::CSharp::E1)_return);
        }
    };
}

MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructEx(MR_CSharp_E1 (*func)(MR_CSharp_E1 _1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *)new std::function<MR::CSharp::E1(MR::CSharp::E1)>(func ? std::function<MR::CSharp::E1(MR::CSharp::E1)>(_functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignEx(MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 *_this, MR_CSharp_E1 (*func)(MR_CSharp_E1 _1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::CSharp::E1(MR::CSharp::E1)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1{func, userdata, postcall_callback, userdata_callback};
}


#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>


MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct(void)
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)new std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>());
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)(new std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>[num_elems]{});
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>);
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)new std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_END(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>))
    ));
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignFromAnother(MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>), std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>) MRBINDC_CLASSARG_END(other, std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>))
    );
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Destroy(const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this)
{
    delete ((const std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)_this);
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DestroyArray(const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this)
{
    delete[] ((const std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)_this);
}

const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_OffsetPtr(const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)(((const std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)ptr) + i);
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_OffsetMutablePtr(MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)(((std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)ptr) + i);
}

bool MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_has_value(const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this)
{
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this)));
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_reset(MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this)) = nullptr;
}

MR_CSharp_ExposedLayoutC MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_call(const MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this, MR_CSharp_ExposedLayoutC _1)
{
    return MRBINDC_BIT_CAST((MR_CSharp_ExposedLayoutC), ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this)).operator()(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutC), _1)
    ));
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructStateless(MR_CSharp_ExposedLayoutC (*func)(MR_CSharp_ExposedLayoutC *_1))
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)new std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(func ? std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>([_f = func](MR::CSharp::ExposedLayoutC _1) -> MR::CSharp::ExposedLayoutC
    {
        decltype(auto) _return = _f(
            (MR_CSharp_ExposedLayoutC *)std::addressof(mrbindc_details::unmove(_1))
        );
        return MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutC), _return);
    }) : nullptr);
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Assign(MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this, MR_CSharp_ExposedLayoutC (*func)(MR_CSharp_ExposedLayoutC *_1))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](MR::CSharp::ExposedLayoutC _1) -> MR::CSharp::ExposedLayoutC
    {
        decltype(auto) _return = _f(
            (MR_CSharp_ExposedLayoutC *)std::addressof(mrbindc_details::unmove(_1))
        );
        return MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutC), _return);
    };
}

namespace
{
    struct _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC
    {
        using FuncPtr = MR_CSharp_ExposedLayoutC (*)(MR_CSharp_ExposedLayoutC *_1, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC(const _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC(_functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &operator=(const _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &other)
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

        _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &operator=(_functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC &&other) noexcept
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

        ~_functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(MR::CSharp::ExposedLayoutC _1) -> MR::CSharp::ExposedLayoutC
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_self = nullptr;
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
                (MR_CSharp_ExposedLayoutC *)std::addressof(mrbindc_details::unmove(_1)),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return MRBINDC_BIT_CAST((MR::CSharp::ExposedLayoutC), _return);
        }
    };
}

MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructEx(MR_CSharp_ExposedLayoutC (*func)(MR_CSharp_ExposedLayoutC *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    return (MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *)new std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(func ? std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)>(_functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC{func, userdata, postcall_callback, userdata_callback}) : nullptr);
}

void MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignEx(MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC *_this, MR_CSharp_ExposedLayoutC (*func)(MR_CSharp_ExposedLayoutC *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC{func, userdata, postcall_callback, userdata_callback};
}


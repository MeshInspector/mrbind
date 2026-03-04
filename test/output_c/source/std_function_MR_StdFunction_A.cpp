#define MR_C_BUILD_LIBRARY
#include "std_function_MR_StdFunction_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(std::function<MR::StdFunction::A(void)>());
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_A *)(new std::function<MR::StdFunction::A(void)>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::StdFunction::A(void)>);
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(std::function<MR::StdFunction::A(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::A(void)>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_AssignFromAnother(MR_C_std_function_MR_StdFunction_A *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::StdFunction::A(void)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::A(void)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::A(void)>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_Destroy(const MR_C_std_function_MR_StdFunction_A *_this)
{
    MRBINDC_TRY(
    delete ((const std::function<MR::StdFunction::A(void)> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_DestroyArray(const MR_C_std_function_MR_StdFunction_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::function<MR::StdFunction::A(void)> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetPtr(const MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_function_MR_StdFunction_A *)(((const std::function<MR::StdFunction::A(void)> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_A *)(((std::function<MR::StdFunction::A(void)> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_function_MR_StdFunction_A_has_value(const MR_C_std_function_MR_StdFunction_A *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<MR::StdFunction::A(void)> *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_reset(MR_C_std_function_MR_StdFunction_A *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::A(void)> *)(_this)) = nullptr;
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_ConstructStateless(MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by))
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(func ? std::function<MR::StdFunction::A(void)>([_f = func](void) -> MR::StdFunction::A
    {
        MR_C_PassBy _return_pass_by = {};
        decltype(auto) _return = _f(
            &_return_pass_by
        );
        MRBINDC_CLASSARG_GUARD(_return, MR::StdFunction::A);
        return (MRBINDC_CLASSARG_DEF_CTOR(_return, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_return, MR::StdFunction::A));
    }) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_Assign(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::A(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](void) -> MR::StdFunction::A
    {
        MR_C_PassBy _return_pass_by = {};
        decltype(auto) _return = _f(
            &_return_pass_by
        );
        MRBINDC_CLASSARG_GUARD(_return, MR::StdFunction::A);
        return (MRBINDC_CLASSARG_DEF_CTOR(_return, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_return, MR::StdFunction::A));
    };
    ) // MRBINDC_TRY
}

namespace
{
    struct _functor_MR_C_std_function_MR_StdFunction_A
    {
        using FuncPtr = MR_StdFunction_A *(*)(MR_C_PassBy *_return_pass_by, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_MR_StdFunction_A(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_MR_StdFunction_A(const _functor_MR_C_std_function_MR_StdFunction_A &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_MR_StdFunction_A(_functor_MR_C_std_function_MR_StdFunction_A &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_MR_StdFunction_A &operator=(const _functor_MR_C_std_function_MR_StdFunction_A &other)
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

        _functor_MR_C_std_function_MR_StdFunction_A &operator=(_functor_MR_C_std_function_MR_StdFunction_A &&other) noexcept
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

        ~_functor_MR_C_std_function_MR_StdFunction_A()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(void) -> MR::StdFunction::A
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_MR_StdFunction_A *_self = nullptr;
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
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            MRBINDC_CLASSARG_GUARD(_return, MR::StdFunction::A);
            return (MRBINDC_CLASSARG_DEF_CTOR(_return, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_return, MR::StdFunction::A));
        }
    };
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_ConstructEx(MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(func ? std::function<MR::StdFunction::A(void)>(_functor_MR_C_std_function_MR_StdFunction_A{func, userdata, postcall_callback, userdata_callback}) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_A_AssignEx(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::A(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_MR_StdFunction_A{func, userdata, postcall_callback, userdata_callback};
    ) // MRBINDC_TRY
}


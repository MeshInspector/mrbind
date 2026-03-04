#define MR_C_BUILD_LIBRARY
#include "std_function_MR_StdFunction_E_from_int_MR_StdFunction_E.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <cstddef>
#include <functional>
#include <stdexcept>


MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>());
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>);
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignFromAnother(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_Destroy(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    MRBINDC_TRY(
    delete ((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DestroyArray(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetPtr(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_has_value(const MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_reset(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this)) = nullptr;
    ) // MRBINDC_TRY
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructStateless(MR_StdFunction_E (*func)(int _1, MR_StdFunction_E _2))
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(func ? std::function<MR::StdFunction::E(int, MR::StdFunction::E)>([_f = func](int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
    {
        decltype(auto) _return = _f(
            _1,
            (MR_StdFunction_E)(_2)
        );
        return ((MR::StdFunction::E)_return);
    }) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_Assign(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int _1, MR_StdFunction_E _2))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
    {
        decltype(auto) _return = _f(
            _1,
            (MR_StdFunction_E)(_2)
        );
        return ((MR::StdFunction::E)_return);
    };
    ) // MRBINDC_TRY
}

namespace
{
    struct _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E
    {
        using FuncPtr = MR_StdFunction_E (*)(int _1, MR_StdFunction_E _2, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E(const _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E(_functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &operator=(const _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &other)
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

        _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &operator=(_functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E &&other) noexcept
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

        ~_functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_self = nullptr;
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
                _1,
                (MR_StdFunction_E)(_2),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return ((MR::StdFunction::E)_return);
        }
    };
}

MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructEx(MR_StdFunction_E (*func)(int _1, MR_StdFunction_E _2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    return (MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(func ? std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(_functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E{func, userdata, postcall_callback, userdata_callback}) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignEx(MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int _1, MR_StdFunction_E _2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E{func, userdata, postcall_callback, userdata_callback};
    ) // MRBINDC_TRY
}


#define MR_C_BUILD_LIBRARY
#include "std_function_int_ref_from_int_ref_int_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)new std::function<int &(int &, int &&)>(std::function<int &(int &, int &&)>());
    ) // MRBINDC_TRY
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)(new std::function<int &(int &, int &&)>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<int &(int &, int &&)>);
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)new std::function<int &(int &, int &&)>(std::function<int &(int &, int &&)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_COPY(other, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_END(other, std::function<int &(int &, int &&)>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_AssignFromAnother(MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<int &(int &, int &&)>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int &(int &, int &&)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_COPY(other, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int &(int &, int &&)>), std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int &(int &, int &&)>) MRBINDC_CLASSARG_END(other, std::function<int &(int &, int &&)>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_Destroy(const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete ((const std::function<int &(int &, int &&)> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_DestroyArray(const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::function<int &(int &, int &&)> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_OffsetPtr(const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)(((const std::function<int &(int &, int &&)> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_OffsetMutablePtr(MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)(((std::function<int &(int &, int &&)> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_has_value(const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<int &(int &, int &&)> *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_reset(MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int &(int &, int &&)> *)(_this)) = nullptr;
    ) // MRBINDC_TRY
}

int *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_call(const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this, int *_1, int *_2)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::function<int &(int &, int &&)> *)(_this)).operator()(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), std::move(*_2))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructStateless(int *(*func)(int *_1, int *_2))
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)new std::function<int &(int &, int &&)>(func ? std::function<int &(int &, int &&)>([_f = func](int &_1, int &&_2) -> int &
    {
        decltype(auto) _return = _f(
            std::addressof(_1),
            std::addressof(mrbindc_details::unmove(_2))
        );
        return ((_return ? void() : throw std::runtime_error("Parameter `_return` can not be null.")), *_return);
    }) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_Assign(MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this, int *(*func)(int *_1, int *_2))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int &(int &, int &&)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](int &_1, int &&_2) -> int &
    {
        decltype(auto) _return = _f(
            std::addressof(_1),
            std::addressof(mrbindc_details::unmove(_2))
        );
        return ((_return ? void() : throw std::runtime_error("Parameter `_return` can not be null.")), *_return);
    };
    ) // MRBINDC_TRY
}

namespace
{
    struct _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref
    {
        using FuncPtr = int *(*)(int *_1, int *_2, void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref(const _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref(_functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &operator=(const _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &other)
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

        _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &operator=(_functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref &&other) noexcept
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

        ~_functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(int &_1, int &&_2) -> int &
        {
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_self = nullptr;
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
                std::addressof(_1),
                std::addressof(mrbindc_details::unmove(_2)),
                _userdata,
                _postcall_cb ? &_cleanup_guard._value : nullptr
            );
            return ((_return ? void() : throw std::runtime_error("Parameter `_return` can not be null.")), *_return);
        }
    };
}

MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructEx(int *(*func)(int *_1, int *_2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *)new std::function<int &(int &, int &&)>(func ? std::function<int &(int &, int &&)>(_functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref{func, userdata, postcall_callback, userdata_callback}) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_AssignEx(MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref *_this, int *(*func)(int *_1, int *_2, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::function<int &(int &, int &&)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref{func, userdata, postcall_callback, userdata_callback};
    ) // MRBINDC_TRY
}


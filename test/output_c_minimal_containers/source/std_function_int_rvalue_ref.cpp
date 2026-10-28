#define MR_C_BUILD_LIBRARY
#include "std_function_int_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <functional>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_rvalue_ref *)new std::function<int &&(void)>(std::function<int &&(void)>());
    ) // MRBINDC_TRY
}

MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_rvalue_ref *)(new std::function<int &&(void)>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int_rvalue_ref *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<int &&(void)>);
    return (MR_C_std_function_int_rvalue_ref *)new std::function<int &&(void)>(std::function<int &&(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int &&(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int &&(void)>) MRBINDC_CLASSARG_END(other, std::function<int &&(void)>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_AssignFromAnother(MR_C_std_function_int_rvalue_ref *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int_rvalue_ref *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::function<int &&(void)>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int &&(void)> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int &&(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int &&(void)>), std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int &&(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int &&(void)>) MRBINDC_CLASSARG_END(other, std::function<int &&(void)>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_Destroy(const MR_C_std_function_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete ((const std::function<int &&(void)> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_DestroyArray(const MR_C_std_function_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::function<int &&(void)> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_OffsetPtr(const MR_C_std_function_int_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_function_int_rvalue_ref *)(((const std::function<int &&(void)> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_OffsetMutablePtr(MR_C_std_function_int_rvalue_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_rvalue_ref *)(((std::function<int &&(void)> *)ptr) + i);
    ) // MRBINDC_TRY
}

bool MR_C_std_function_int_rvalue_ref_has_value(const MR_C_std_function_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    return bool(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<int &&(void)> *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_reset(MR_C_std_function_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int &&(void)> *)(_this)) = nullptr;
    ) // MRBINDC_TRY
}

int *MR_C_std_function_int_rvalue_ref_call(const MR_C_std_function_int_rvalue_ref *_this)
{
    MRBINDC_TRY(
    return std::addressof(mrbindc_details::unmove(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::function<int &&(void)> *)(_this)).operator()()));
    ) // MRBINDC_TRY
}

MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_ConstructStateless(int *(*func)(void))
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_rvalue_ref *)new std::function<int &&(void)>(func ? std::function<int &&(void)>([_f = func](void) -> int &&
    {
        decltype(auto) _return = _f();
        return ((_return ? void() : MRBINDC_THROW("Parameter `_return` can not be null.", void)), std::move(*_return));
    }) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_Assign(MR_C_std_function_int_rvalue_ref *_this, int *(*func)(void))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int &&(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    _self = [_f = func](void) -> int &&
    {
        decltype(auto) _return = _f();
        return ((_return ? void() : MRBINDC_THROW("Parameter `_return` can not be null.", void)), std::move(*_return));
    };
    ) // MRBINDC_TRY
}

namespace
{
    struct _functor_MR_C_std_function_int_rvalue_ref
    {
        using FuncPtr = int *(*)(void *_userdata, void **_cleanup_value);
        using PostcallCbPtr = void (*)(void *_userdata, void *_cleanup_value);
        using UserdataCbPtr = void (*)(void **_this_userdata, void *_other_userdata);

        FuncPtr _func = nullptr;
        void *_userdata = nullptr;
        PostcallCbPtr _postcall_cb = nullptr;
        UserdataCbPtr _userdata_cb = nullptr;

        _functor_MR_C_std_function_int_rvalue_ref(FuncPtr _func, void *_userdata, PostcallCbPtr _postcall_cb, UserdataCbPtr _userdata_cb) : _func(_func), _userdata(_userdata), _postcall_cb(_postcall_cb), _userdata_cb(_userdata_cb) {}

        _functor_MR_C_std_function_int_rvalue_ref(const _functor_MR_C_std_function_int_rvalue_ref &other) : _func(other._func), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            if (!other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, other._userdata);
        }

        _functor_MR_C_std_function_int_rvalue_ref(_functor_MR_C_std_function_int_rvalue_ref &&other) noexcept : _func(other._func), _userdata(other._userdata), _postcall_cb(other._postcall_cb), _userdata_cb(other._userdata_cb)
        {
            other._func = nullptr;
            other._userdata = nullptr;
            other._postcall_cb = nullptr;
            other._userdata_cb = nullptr;
        }

        _functor_MR_C_std_function_int_rvalue_ref &operator=(const _functor_MR_C_std_function_int_rvalue_ref &other)
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

        _functor_MR_C_std_function_int_rvalue_ref &operator=(_functor_MR_C_std_function_int_rvalue_ref &&other) noexcept
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

        ~_functor_MR_C_std_function_int_rvalue_ref()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }

        auto operator()(void) -> int &&
        {
            #if MR_C_ENABLE_EXCEPTIONS
            struct _exception_guard_type
            {
                std::exception_ptr _exception_ptr = nullptr;
                std::exception_ptr *_old_exception_ptr_ptr;
            
                _exception_guard_type() : _old_exception_ptr_ptr(mrbindc_details::queued_exception_for_callbacks)
                {
                    mrbindc_details::queued_exception_for_callbacks = &_exception_ptr;
                }
            
                ~_exception_guard_type() noexcept(false)
                {
                    mrbindc_details::queued_exception_for_callbacks = _old_exception_ptr_ptr;
                    if (_exception_ptr)
                        std::rethrow_exception(_exception_ptr);
                }
            };
            _exception_guard_type _exception_guard;
            #endif
            
            struct _cleanup_guard_type
            {
                _functor_MR_C_std_function_int_rvalue_ref *_self = nullptr;
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

MR_C_std_function_int_rvalue_ref *MR_C_std_function_int_rvalue_ref_ConstructEx(int *(*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    return (MR_C_std_function_int_rvalue_ref *)new std::function<int &&(void)>(func ? std::function<int &&(void)>(_functor_MR_C_std_function_int_rvalue_ref{func, userdata, postcall_callback, userdata_callback}) : nullptr);
    ) // MRBINDC_TRY
}

void MR_C_std_function_int_rvalue_ref_AssignEx(MR_C_std_function_int_rvalue_ref *_this, int *(*func)(void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    MRBINDC_TRY(
    auto &_self = ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::function<int &&(void)> *)(_this));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    _self = _functor_MR_C_std_function_int_rvalue_ref{func, userdata, postcall_callback, userdata_callback};
    ) // MRBINDC_TRY
}


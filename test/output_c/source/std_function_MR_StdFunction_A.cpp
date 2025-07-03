#include "std_function_MR_StdFunction_A.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <functional>
#include <stdexcept>


MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstruct(void)
{
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(std::function<MR::StdFunction::A(void)>());
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_MR_StdFunction_A *)(new std::function<MR::StdFunction::A(void)>[num_elems]{});
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other)
{
    return (MR_C_std_function_MR_StdFunction_A *)new std::function<MR::StdFunction::A(void)>(std::function<MR::StdFunction::A(void)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::A(void)>))
    ));
}

void MR_C_std_function_MR_StdFunction_A_AssignFromAnother(MR_C_std_function_MR_StdFunction_A *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_A *other)
{
    (_this ? *(std::function<MR::StdFunction::A(void)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::A(void)>), std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::A(void)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::A(void)>))
    );
}

void MR_C_std_function_MR_StdFunction_A_Destroy(const MR_C_std_function_MR_StdFunction_A *_this)
{
    delete ((const std::function<MR::StdFunction::A(void)> *)_this);
}

void MR_C_std_function_MR_StdFunction_A_DestroyArray(const MR_C_std_function_MR_StdFunction_A *_this)
{
    delete[] ((const std::function<MR::StdFunction::A(void)> *)_this);
}

const MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetPtr(const MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_MR_StdFunction_A *)(((const std::function<MR::StdFunction::A(void)> *)ptr) + i);
}

MR_C_std_function_MR_StdFunction_A *MR_C_std_function_MR_StdFunction_A_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_A *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_MR_StdFunction_A *)(((std::function<MR::StdFunction::A(void)> *)ptr) + i);
}

void MR_C_std_function_MR_StdFunction_A_Assign(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by))
{
    auto &_self = (_this ? *(std::function<MR::StdFunction::A(void)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
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
        return (MRBINDC_CLASSARG_DEF_CTOR(_return, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_return, MR::StdFunction::A));
    };
}

void MR_C_std_function_MR_StdFunction_A_AssignWithDataPtr(MR_C_std_function_MR_StdFunction_A *_this, MR_StdFunction_A *(*func)(MR_C_PassBy *_return_pass_by, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata))
{
    auto &_self = (_this ? *(std::function<MR::StdFunction::A(void)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
    if (!func)
    {
        _self = nullptr;
        return;
    }
    
    struct _functor
    {
        decltype(func) _func = nullptr;
        void *_userdata = nullptr;
        decltype(userdata_callback) _userdata_cb = nullptr;
    
        _functor(decltype(func) _func, void *_userdata, decltype(userdata_callback) _userdata_cb) : _func(_func), _userdata(_userdata), _userdata_cb(_userdata_cb) {}
    
        _functor(const _functor &_other) : _func(_other._func), _userdata_cb(_other._userdata_cb)
        {
            if (!_other._userdata) return; // No data to copy.
            if (!_userdata_cb) {_userdata = _other._userdata; return;} // No callback, just copy the data.
            _userdata_cb(&_userdata, _other._userdata);
        }
    
        _functor(_functor &&_other) noexcept : _func(_other._func), _userdata(_other._userdata), _userdata_cb(_other._userdata_cb)
        {
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
        }
    
        _functor &operator=(const _functor &_other)
        {
            if (_userdata_cb && _userdata_cb != _other._userdata_cb) // Callback exists but incompatible, destroy the old contents first.
            {
                _userdata_cb(&_userdata, nullptr);
                _userdata = nullptr; // Don't need to zero the callbacks, we'll overwrite them anyway.
            }
            _func = _other._func;
            _userdata_cb = _other._userdata_cb;
            if (_other._userdata && _userdata_cb) // If we have data to copy and a callback, use the callback. The data must be non-null, otherwise the callback will confuse this for a copy construction.
                _userdata_cb(&_userdata, _other._userdata);
            else // Otherwise shallow-copy.
                _userdata = _other._userdata;
            return *this;
        }
    
        _functor &operator=(_functor &&_other) noexcept
        {
            _func = _other._func;
            _userdata = _other._userdata;
            _userdata_cb = _other._userdata_cb;
            _other._func = nullptr;
            _other._userdata = nullptr;
            _other._userdata_cb = nullptr;
            return *this;
        }
    
        ~_functor()
        {
            if (_userdata && _userdata_cb)
                _userdata_cb(&_userdata, nullptr);
        }
    
        auto operator()(void) -> MR::StdFunction::A
        {
            MR_C_PassBy _return_pass_by = {};
            decltype(auto) _return = _func(
                &_return_pass_by,
                _userdata
            );
            return (MRBINDC_CLASSARG_DEF_CTOR(_return, MR::StdFunction::A) MRBINDC_CLASSARG_COPY(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_MOVE(_return, (MR::StdFunction::A), MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_DefaultArgument, MR::StdFunction::A) MRBINDC_CLASSARG_NO_DEF_ARG(_return, MR_C_PassBy_NoObject, MR::StdFunction::A) MRBINDC_CLASSARG_END(_return, MR::StdFunction::A));
        }
    };
    
    _self = _functor{func, userdata, userdata_callback};
}


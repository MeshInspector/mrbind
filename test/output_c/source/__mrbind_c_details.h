#pragma once


#include <stdexcept>

namespace mrbindc_details
{
    #define MRBINDC_IDENTITY(...) __VA_ARGS__
    
    #if defined(_MSC_VER) && !defined(__clang__)
    #define MRBINDC_IGNORE_DEPRECATION(...) _Pragma("warning(push)") _Pragma("warning(disable: 4996)") __VA_ARGS__ _Pragma("warning(pop)")
    #else
    #define MRBINDC_IGNORE_DEPRECATION(...) _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"") __VA_ARGS__ _Pragma("GCC diagnostic pop")
    #endif
    
    // Those are used to handle by-value arguments of class types, which are passed as a pointer plus a enum explaining how to handle it.
    // The `cpp_type_without_wrapper_` vs `cpp_type_` are different for optionals: `cpp_type_` is either `T` or `std::optional<T>`, while `cpp_type_without_wrapper_` is always the `T` itself.
    #define MRBINDC_CLASSARG_DEF_CTOR(param_, .../*cpp_type_*/) param_##_pass_by == MR_C_PassBy_DefaultConstruct ? (param_ ? throw std::runtime_error("Expected a null pointer to be passed to `" #param_ " because `MR_C_PassBy_DefaultConstruct` was used.") : __VA_ARGS__{}) :
    #define MRBINDC_CLASSARG_COPY(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == MR_C_PassBy_Copy ? __VA_ARGS__(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_) :
    #define MRBINDC_CLASSARG_MOVE(param_, cpp_type_without_wrapper_, .../*cpp_type_*/) param_##_pass_by == MR_C_PassBy_Move ? __VA_ARGS__(std::move(*(MRBINDC_IDENTITY cpp_type_without_wrapper_ *)param_)) :
    #define MRBINDC_CLASSARG_DEF_ARG(param_, enum_constant_, default_arg_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? (param_ ? throw std::runtime_error("Expected a null pointer to be passed to `" #param_ " because `" #enum_constant_ "` was used.") : __VA_ARGS__(default_arg_)) :
    #define MRBINDC_CLASSARG_NO_DEF_ARG(param_, enum_constant_, .../*cpp_type_*/) param_##_pass_by == enum_constant_ ? throw std::runtime_error("Function parameter `" #param_ " doesn't support `" #enum_constant_ "`.") :
    #define MRBINDC_CLASSARG_END(param_, .../*cpp_type_*/) true ? throw std::runtime_error("Invalid `MR_C_PassBy` enum value specified for function parameter `" #param_ ".") : ((__VA_ARGS__ (*)())0)() // We need the dumb fallback to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.

    // Converts an rvalue to an lvalue.
    template <typename T> T &unmove(T &&value) {return static_cast<T &>(value);}
} // namespace mrbindc_details 


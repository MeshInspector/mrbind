#pragma once


#include <stdexcept>

namespace mrbindc_details
{
    // Those are used to handle by-value arguments of class types,
    //   which are passed as a pointer plus a enum explaining how to handle it.
    #define MRBINDC_CLASSARG_DEF_CTOR(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_DefaultConstruct ? (param_ ? throw std::runtime_error("Expected a null pointer to be passed to `" #param_ " because `PassBy_DefaultConstruct` was used.") : cpptype_{}) :
    #define MRBINDC_CLASSARG_COPY(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_Copy ? cpptype_(*(cpptype_ *)param_) :
    #define MRBINDC_CLASSARG_MOVE(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_Move ? cpptype_(std::move(*(cpptype_ *)param_)) :
    #define MRBINDC_CLASSARG_DEF_ARG(param_, cpptype_, pass_by_enum_, ...) param_##_pass_by == pass_by_enum_##_DefaultArgument ? (param_ ? throw std::runtime_error("Expected a null pointer to be passed to `" #param_ " because `PassBy_DefaultArgument` was used.") : cpptype_(__VA_ARGS__)) :
    #define MRBINDC_CLASSARG_NO_DEF_ARG(param_, cpptype_, pass_by_enum_) param_##_pass_by == pass_by_enum_##_DefaultArgument ? throw std::runtime_error("Function parameter `" #param_ " has no default argument, yet `PassBy_DefaultArgument` was used for it.") :
    #define MRBINDC_CLASSARG_END(param_, cpptype_) true ? throw std::runtime_error("Invalid `PassBy` enum value specified for function parameter `" #param_ ".") : ((cpptype_ (*)())0)() // We need the dumb fallback to keep the overall type equal to `cpptype_` instead of `void`, which messes things up.

    // Converts an rvalue to an lvalue.
    template <typename T> T &unmove(T &&value) {return static_cast<T &>(value);}
} // namespace mrbindc_details 


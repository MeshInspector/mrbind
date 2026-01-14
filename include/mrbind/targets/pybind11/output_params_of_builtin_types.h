#pragma once

#include <iomanip>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

// This wraps non-const-reference-to-builtin-type parameters in classes named e.g. `int_output` for `int &`.
// Otherwise those references don't work properly, the changes to them aren't visible to the caller.

namespace MRBind::pb11
{
    template <typename T>
    concept ValidTargetForOutputParamOfBuiltinType = (!std::is_const_v<T> && std::is_arithmetic_v<T>) || std::is_same_v<T, std::string>;

    template <ValidTargetForOutputParamOfBuiltinType T>
    struct OutputParamOfBuiltinType
    {
        using ElemType = std::conditional_t<std::is_same_v<T, bool>, char, T>;
        using ElemTypeCrefIfNormal = std::conditional_t<std::is_same_v<T, bool>, bool, const T &>; // Either `const T &` or exactly `bool`.

        std::vector<ElemType> values{};
        T *cpp_target = nullptr; // If specified, `values` is ignored, and the only effective value is what this points to.

        OutputParamOfBuiltinType() : OutputParamOfBuiltinType(1) {}
        OutputParamOfBuiltinType(std::size_t size, const T &value = {}) : values(size, ElemTypeCrefIfNormal(value)) {}
        OutputParamOfBuiltinType(T &cpp_target) : cpp_target(&cpp_target) {}
    };


    template <ValidTargetForOutputParamOfBuiltinType T>
    struct ParamTraits<T &>
    {
        using adjusted_param_type = OutputParamOfBuiltinType<T> &;

        static T &UnadjustParam(adjusted_param_type object)
        {
            if (object.values.size() != 1)
                throw std::runtime_error("Expected the output parameter size to be exactly 1.");
            return reinterpret_cast<T &>(object.values.front());
        }

        using reverse_unadjust_param_extra_param = OutputParamOfBuiltinType<T>; // Need something to point to.

        static adjusted_param_type ReverseUnadjustParam(T &object, reverse_unadjust_param_extra_param &&extra)
        {
            extra = OutputParamOfBuiltinType<T>(object);
            return extra;
        }
    };

    template <ValidTargetForOutputParamOfBuiltinType T>
    struct ParamTraits<T *>
    {
        using adjusted_param_type = OutputParamOfBuiltinType<T> *; // This must be a pointer and not a reference to be able to accept null.

        static T *UnadjustParam(adjusted_param_type object)
        {
            return object ? reinterpret_cast<T *>(object->values.data()) : nullptr;
        }

        using reverse_unadjust_param_extra_param = OutputParamOfBuiltinType<T>; // Need something to point to.

        static adjusted_param_type ReverseUnadjustParam(T *object, reverse_unadjust_param_extra_param &&extra)
        {
            if (object)
            {
                extra = OutputParamOfBuiltinType<T>(*object);
                return &extra;
            }
            else
            {
                return nullptr;
            }
        }
    };
    // Const ref to pointer. This can happen in some generated functions such as the constructors created by `TryAddAggregateCtor(...)`.
    template <ValidTargetForOutputParamOfBuiltinType T>
    struct ParamTraits<T *const &>
    {
        using adjusted_param_type = OutputParamOfBuiltinType<T> *; // This must be a pointer and not a reference to be able to accept null.
        using unadjust_param_extra_param = T *; // We need some juggling to get a reference.

        static T *const & UnadjustParam(adjusted_param_type object, unadjust_param_extra_param &&extra)
        {
            return extra = object ? reinterpret_cast<T *>(object->values.data()) : nullptr;
        }
    };


    template <typename T>
    struct CustomTypeBinding<OutputParamOfBuiltinType<T>>
        : DefaultCustomTypeBinding<OutputParamOfBuiltinType<T>>, RegisterTypeDependencies<decltype(OutputParamOfBuiltinType<T>::values)>
    {
        [[nodiscard]] static std::string cpp_type_name()
        {
            return TypeidTypeName<T>() + "::output";
        }

        static void bind_members(typename DefaultCustomTypeBinding<OutputParamOfBuiltinType<T>>::pybind_type &c)
        {
            // Default constructor.
            c.def(pybind11::init<>());

            // Construct from the size.
            c.def(pybind11::init<std::size_t>());
            // Construct from the size and value.
            c.def(pybind11::init<std::size_t, const T &>());

            // This causes a runtime error: `ImportError: implicitly_convertible: Unable to find type ...`.
            // Apparently this can only convert to non-builtin types.
            // pybind11::implicitly_convertible<OutputParamOfBuiltinType<T>, T>();

            // And the reverse implicit conversion isn't desired, because we don't want to be able to call `foo(int &)` as `foo(42)`.

            #define BASE_DOC "A helper class containing a list of scalars. This is used for functions with scalar output parameters.\n" \
                "NOTE: If a function outputs an array, you must manually resize this to the correct size or risk undefined behavior."

            if constexpr (std::is_same_v<T, bool>)
                c.doc() = BASE_DOC "\nNOTE: This stores booleans. Writing anything other than 0 or 1 to it can cause undefined behavior.";
            else
                c.doc() = BASE_DOC;

            #undef BASE_DOC


            // Bind the member.
            c.def_readwrite("values", &OutputParamOfBuiltinType<T>::values);

            c.def_property(
                "value",
                [](const OutputParamOfBuiltinType<T> &v) -> typename OutputParamOfBuiltinType<T>::ElemTypeCrefIfNormal
                {
                    if (v.cpp_target)
                        return *v.cpp_target;

                    if (v.values.size() != 1)
                        throw std::runtime_error("Expected exactly one value.");
                    return v.values.front();
                },
                [](OutputParamOfBuiltinType<T> &v, AdjustedParamType<T> value)
                {
                    auto MakeValue = [&]() -> decltype(auto) {return (UnadjustParam<DecayToTrueParamType<T>>)(std::forward<AdjustedParamType<T>>(value));};

                    if (v.cpp_target)
                    {
                        *v.cpp_target = MakeValue();
                    }
                    else
                    {
                        v.values.clear();
                        v.values.push_back(MakeValue());
                    }
                },
                "If the list contains exactly one value, returns it. Otherwise throws."
            );

            c.def(
                "__repr__",
                [](const OutputParamOfBuiltinType<T> &v)
                {
                    static const std::string prefix = ToPythonName(CustomTypeBinding::cpp_type_name()) + "[";
                    std::ostringstream ret;
                    ret << prefix;

                    if (v.cpp_target)
                    {
                        ret << *v.cpp_target;
                    }
                    else
                    {
                        for (std::size_t i = 0; i < v.values.size(); i++)
                        {
                            if (i != 0)
                                ret << ", ";
                            if constexpr (std::is_same_v<T, std::string>)
                                ret << std::quoted(v.values[i]); // A quick and dirty hack to print something reasonable.
                            else
                                ret << v.values[i];
                        }
                    }
                    ret << ']';
                    return std::move(ret).str();
                }
            );
        }
    };
}

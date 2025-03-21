#pragma once

#include <type_traits>


// Struct reflection:

// Usage:
//     MBREFL_STRUCT(
//         (type1)(name1) // Initializer defaults to `{}`, but not if you add `,` after the name, even if there's nothing after the comma.
//         (type2)(name2, init...)
//     , // Bases:   // Omit the comma if no bases.
//         (base1)
//         (base2)
//     )
#define MBREFL_STRUCT(seq_, .../*bases*/) \
    DETAIL_MBREFL_END( DETAIL_MBREFL_STRUCT_DECL_A seq_ ) \
    using _refl_is_struct = void; \
    constexpr bool _refl_for_each_member(auto &&func) \
    { \
        /* Here we handle bases after the derived members for the sole reason that it results in better output in our case. */\
        /* E.g. for namespaces, this causes the name to be printed before the members, which is good. */\
        return false DETAIL_MBREFL_END( DETAIL_MBREFL_STRUCT_FUNC_A seq_ ) DETAIL_MBREFL_END( DETAIL_MBREFL_STRUCT_BASEFUNC_A __VA_ARGS__ ); \
    }

#define DETAIL_MBREFL_STRUCT_DECL_A(...) std::type_identity_t<__VA_ARGS__> DETAIL_MBREFL_STRUCT_DECL_B
#define DETAIL_MBREFL_STRUCT_DECL_B(name_, ...) name_ DETAIL_MBREFL_STRUCT_INIT(__VA_ARGS__); DETAIL_MBREFL_STRUCT_DECL_A
#define DETAIL_MBREFL_STRUCT_DECL_A_END

#define DETAIL_MBREFL_STRUCT_INIT(...) DETAIL_MBREFL_CAT(DETAIL_MBREFL_STRUCT_INIT_,DETAIL_MBREFL_STRUCT_INIT_NOTEMPTY(__VA_ARGS__ x))(__VA_ARGS__)
#define DETAIL_MBREFL_STRUCT_INIT_NOTEMPTY(...) __VA_OPT__(1)
#define DETAIL_MBREFL_STRUCT_INIT_(...) {}
#define DETAIL_MBREFL_STRUCT_INIT_1(...) __VA_OPT__(=) __VA_ARGS__

#define DETAIL_MBREFL_STRUCT_FUNC_A(...) DETAIL_MBREFL_STRUCT_FUNC_B
#define DETAIL_MBREFL_STRUCT_FUNC_B(name_, ...) || func(#name_, name_) DETAIL_MBREFL_STRUCT_FUNC_A
#define DETAIL_MBREFL_STRUCT_FUNC_A_END

#define DETAIL_MBREFL_STRUCT_BASEFUNC_A(...) DETAIL_MBREFL_STRUCT_BASEFUNC_BODY(__VA_ARGS__) DETAIL_MBREFL_STRUCT_BASEFUNC_B
#define DETAIL_MBREFL_STRUCT_BASEFUNC_B(...) DETAIL_MBREFL_STRUCT_BASEFUNC_BODY(__VA_ARGS__) DETAIL_MBREFL_STRUCT_BASEFUNC_A
#define DETAIL_MBREFL_STRUCT_BASEFUNC_A_END
#define DETAIL_MBREFL_STRUCT_BASEFUNC_B_END
#define DETAIL_MBREFL_STRUCT_BASEFUNC_BODY(name_) || static_cast<name_ &>(*this)._refl_for_each_member(func)


// Enum reflection:

// Usage:
// MBREFL_ENUM( MyEnum,
//     (e1)
//     (e2,=value)         // The `=` is a part of the initialzier to allow you to insert `[[maybe_unused]]` before it.
// , // Values hidden from reflection:     // Omit the comma if none.
//     e3,
//     e4 = value,
// )
#define MBREFL_ENUM(name_, seq_, ...) DETAIL_MBREFL_ENUM(inline, name_, seq_, __VA_ARGS__)
#define MBREFL_ENUM_IN_CLASS(name_, seq_, ...) DETAIL_MBREFL_ENUM(friend, name_, seq_, __VA_ARGS__)

#define DETAIL_MBREFL_ENUM(prefix_, name_, seq_, ...) \
    enum class name_ \
    { \
        DETAIL_MBREFL_END( DETAIL_MBREFL_ENUM_DECL_A seq_ ) \
        __VA_ARGS__ \
    }; \
    constexpr prefix_ bool _refl_for_each_enum_constant(name_, auto &&func) \
    { \
        using _refl_E = name_; \
        return false DETAIL_MBREFL_END( DETAIL_MBREFL_ENUM_FUNC_A seq_ ); \
    }

#define DETAIL_MBREFL_ENUM_DECL_A(...) DETAIL_MBREFL_ENUM_DECL_BODY(__VA_ARGS__) DETAIL_MBREFL_ENUM_DECL_B
#define DETAIL_MBREFL_ENUM_DECL_B(...) DETAIL_MBREFL_ENUM_DECL_BODY(__VA_ARGS__) DETAIL_MBREFL_ENUM_DECL_A
#define DETAIL_MBREFL_ENUM_DECL_A_END
#define DETAIL_MBREFL_ENUM_DECL_B_END
#define DETAIL_MBREFL_ENUM_DECL_BODY(name_, .../*init*/) name_ __VA_ARGS__,

#define DETAIL_MBREFL_ENUM_FUNC_A(...) DETAIL_MBREFL_ENUM_FUNC_BODY(__VA_ARGS__) DETAIL_MBREFL_ENUM_FUNC_B
#define DETAIL_MBREFL_ENUM_FUNC_B(...) DETAIL_MBREFL_ENUM_FUNC_BODY(__VA_ARGS__) DETAIL_MBREFL_ENUM_FUNC_A
#define DETAIL_MBREFL_ENUM_FUNC_A_END
#define DETAIL_MBREFL_ENUM_FUNC_B_END
#define DETAIL_MBREFL_ENUM_FUNC_BODY(name_, .../*init*/) || func(#name_, _refl_E::name_)


// Misc helpers:

#define DETAIL_MBREFL_CAT(x, y) DETAIL_MBREFL_CAT_(x, y)
#define DETAIL_MBREFL_CAT_(x, y) x##y

#define DETAIL_MBREFL_END(...) DETAIL_MBREFL_END_(__VA_ARGS__)
#define DETAIL_MBREFL_END_(...) __VA_ARGS__##_END


namespace mrbind
{
    // Struct:

    template <typename T>
    concept ReflStruct = requires{typename T::_refl_is_struct;};

    // Calls `func` on every member, which is `(const char *name, auto &member) -> bool`.
    // If any iteration returns true, immediately stops and also returns true.
    template <ReflStruct T>
    constexpr bool ReflForEachMember(T &object, auto &&func)
    {
        return object._refl_for_each_member(decltype(func)(func));
    }

    // The const overload of the above function.
    template <ReflStruct T>
    constexpr bool ReflForEachMember(const T &object, auto &&func)
    {
        return const_cast<T &>(object)._refl_for_each_member([&]<typename U>(const char *name, U &member) -> decltype(auto) {return func(name, const_cast<const U &>(member));});
    }


    // Adjusting types:

    namespace detail
    {
        template <typename T> struct AddConstnessToRef {using type = T;};
        template <typename T> struct AddConstnessToRef<T &> {using type = const T &;};
        template <typename T> struct AddConstnessToRef<T &&> {using type = const T &&;};
    }

    constexpr void reflect_as() {} // Dummy ADL target.

    template <typename T>
    concept ReflNeedsAdjust = requires(std::remove_cvref_t<T> &t) {reflect_as(t);};

    template <ReflNeedsAdjust T>
    constexpr decltype(auto) ReflAdjust(T &object) {return reflect_as(object);}

    // The const overload.
    template <ReflNeedsAdjust T>
    constexpr decltype(auto) ReflAdjust(const T &object)
    {
        return static_cast<typename detail::AddConstnessToRef<decltype(reflect_as(const_cast<T &>(object)))>::type>(reflect_as(const_cast<T &>(object)));
    }


    // Enums:

    namespace detail
    {
        // Pasting this lambda directly into a concept causes "ambiguous specialization" errors on Clang 18. This bug was fixed in Clang 19.
        inline constexpr auto dummy_enum_callback = [](auto &&...){};
    }

    constexpr void _refl_for_each_enum_constant() {} // Dummy ADL target.

    template <typename T>
    concept ReflEnum = requires(T t){_refl_for_each_enum_constant(t, detail::dummy_enum_callback);};

    // Calls `func` on every enum constant, which is `(const char *name, T value) -> bool`.
    // If it returns true, the function stops and also returns true.
    template <ReflEnum T>
    constexpr bool ReflForEachEnumConstant(auto &&func)
    {
        return _refl_for_each_enum_constant(T{}, decltype(func)(func));
    }
}

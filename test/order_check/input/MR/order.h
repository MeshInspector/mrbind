#pragma once

// Input for `test/check_py_registration_order.sh`.

namespace MR
{
    // The target type. The conversion operators of the classes below inject `__init__` overloads into it,
    // and the relative order of those overloads (which affects pybind11's overload resolution) follows
    // the type registration order.
    struct Target
    {
        int value = 0;
        Target() {}
        explicit Target(int v) : value(v) {}
    };

    struct SrcAlpha   { int x = 1;  operator Target() const {return Target(x);} };
    struct SrcBravo   { int x = 2;  operator Target() const {return Target(x);} };
    struct SrcCharlie { int x = 3;  operator Target() const {return Target(x);} };
    struct SrcDelta   { int x = 4;  operator Target() const {return Target(x);} };
    struct SrcEcho    { int x = 5;  operator Target() const {return Target(x);} };
    struct SrcFoxtrot { int x = 6;  operator Target() const {return Target(x);} };
    struct SrcGolf    { int x = 7;  operator Target() const {return Target(x);} };
    struct SrcHotel   { int x = 8;  operator Target() const {return Target(x);} };

    // Several aliases for one type, to also cover the `Aliases:` docstring line.
    using TargetAliasOne = Target;
    using TargetAliasTwo = Target;
    typedef Target TargetAliasThree;

    // Some extra types to pad the type graph.
    template <typename T>
    struct Box { T payload{}; };

    inline Box<SrcAlpha>   MakeBoxAlpha()   {return {};}
    inline Box<SrcBravo>   MakeBoxBravo()   {return {};}
    inline Box<SrcCharlie> MakeBoxCharlie() {return {};}
    inline Box<Target>     MakeBoxTarget()  {return {};}
}

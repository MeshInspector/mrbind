#pragma once

// This is used to test that Python registration order is consistent. Not all kinds of entities are tested here at the moment,
//   but those that are tested should be consistent.
// Original testcase by Claude, slightly cleaned up.

namespace MR
{
    struct Target
    {
        int x = 0;
        Target() {}
        explicit Target(int x) : x(x) {}
    };

    struct A {int x = 1;  operator Target() const {return Target(x);}};
    struct B {int x = 2;  operator Target() const {return Target(x);}};

    using Alias1 = Target;

    struct C {int x = 3;  operator Target() const {return Target(x);}};
    struct D {int x = 4;  operator Target() const {return Target(x);}};

    using Alias2 = Target;

    struct E {int x = 5;  operator Target() const {return Target(x);}};
    struct F {int x = 6;  operator Target() const {return Target(x);}};

    using Alias3 = Target;

    struct G {int x = 7;  operator Target() const {return Target(x);}};
    struct H {int x = 8;  operator Target() const {return Target(x);}};

    using Alias4 = Target;

    template <typename T>
    struct Box {};

    inline Box<A> MakeBoxA() {return {};}
    inline Box<B> MakeBoxB() {return {};}
    inline Box<C> MakeBoxC() {return {};}
    inline Box<Target> MakeBoxTarget() {return {};}

    using Alias5 = Target;
}

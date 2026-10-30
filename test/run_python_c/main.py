"""A smoke test for the Python bindings generated over the C bindings, see `make_python_c.sh`."""

import os
import sys

# The test library declares some functions without defining them.
if hasattr(os, "RTLD_LAZY"):
    sys.setdlopenflags(os.RTLD_LAZY)

import mrbind_test as m  # noqa: E402


def check(condition, what):
    if not condition:
        raise AssertionError(what)


# An opaque class with a `std::string` field.
a = m.A()
check(a.x == "", "default x")
a.x = "hello"
check(a.x == "hello", "set x")
a2 = m.A(a)  # The copy constructor.
a.x = "changed"
check(a2.x == "hello", "the copy is independent")

# Free functions, `std::string` parameters accept `str`.
m.StdString.Set("from python")
m.StdString.SetWithDefault()
check(m.StdString.Get() == "Hello!", "get")

# `std::vector<int>` has the list API of `pybind11::bind_vector()`.
v = m.std_vector_int()
check(v.empty() and len(v) == 0, "empty")
v.resize(3)
check(v.size() == 3 and list(v) == [0, 0, 0], "resize")
v.append(7)
check(v[3] == 7 and v[-1] == 7, "append")
m.StdContainers.Set(v)
m.StdContainers.ConstRef(v)
check(len(m.StdContainers.Get()) == 0, "get")
check(list(m.std_vector_int(v)) == [0, 0, 0, 7], "copy")
m.StdContainers.Set([1, 2, 3])  # The implicit conversion from a list.

# Enums are pybind11-like enum classes.
check(m.CSharp.test_enum(m.CSharp.E1.a) == m.CSharp.E1.b, "enum default")
check(m.CSharp.test_enum(m.CSharp.E1.a, m.CSharp.E1.a) == m.CSharp.E1.a, "enum")
check(int(m.CSharp.E1.b) == 20 and m.CSharp.E1(20) == m.CSharp.E1.b, "enum value")

# `std::function` parameters accept Python callables.
m.StdFunction.foo(lambda: 1)
m.StdFunction.foo(m.func_int(lambda: 1))
check(m.func_int_from_int_int(lambda x, y: x + y)(2, 3) == 5, "callback")

# `--extra-python` functions are a part of the module.
check(m.make_a("extra").x == "extra" and m.make_a.__module__ == "mrbind_test", "extra python")

print("OK")

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

# The const classes, like in C#: `ConstT` has the const members, `T` derives from it.
cs = m.CSharp
nt = cs.NonTrivial()
check(isinstance(nt, cs.ConstNonTrivial) and not isinstance(cs.ConstNonTrivial(), cs.NonTrivial), "const base")
check(nt._is_owning and cs.ConstNonTrivial()._is_owning, "owning")
cref = cs.test_class_nontrivial_cref(nt)  # A const parameter takes a mutable object too.
check(type(cref) is cs.ConstNonTrivial and not cref._is_owning, "a const reference isn't copied")
check(type(cs.test_class_nontrivial_ref(nt)) is cs.NonTrivial and not cs.test_class_nontrivial_ptr(nt)._is_owning, "a mutable reference")
check(type(cs.test_class_nontrivial(cref)) is cs.NonTrivial and cs.test_class_nontrivial(cref)._is_owning, "by value")
try:
    cs.test_class_nontrivial_ref(cref)
    check(False, "a const object for a non-const reference")
except TypeError:
    pass
# A copy doesn't keep its source alive.
refs = sys.getrefcount(nt)
nt_copy = cs.NonTrivial(nt)
check(sys.getrefcount(nt) == refs, "a copy doesn't keep the source alive")

# Bases: a mutable object is also a const and a mutable base, a const one only a const base.
check(issubclass(cs.SC, cs.SA) and issubclass(cs.SC, cs.ConstSA) and issubclass(cs.ConstSC, cs.ConstSA), "bases")
check(not issubclass(cs.ConstSC, cs.SA) and not issubclass(cs.SA, cs.ConstSC), "no const to mutable")
# `std::shared_ptr<const T>` is the const class.
check(type(cs.test_shcptr(cs.SA(), cs.SA())) is cs.ConstSA and type(cs.test_shptr(cs.SA(), cs.SA())) is cs.SA, "shared_ptr<const T>")
# The vectors: the const ones can't be modified.
cv = m.Const_std_vector_int(v)
check(list(cv) == [0, 0, 0, 7] and not hasattr(cv, "append") and isinstance(v, m.Const_std_vector_int), "const vector")

# `--extra-python` functions are a part of the module.
check(m.make_a("extra").x == "extra" and m.make_a.__module__ == "mrbind_test", "extra python")

print("OK")

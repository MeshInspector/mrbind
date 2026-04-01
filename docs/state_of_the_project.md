# State of the project

## Parser

We're missing support for some relatively minor language features. Adding support for those isn't complicated, just needs effort.

Those being presented in the input is not a problem: they're either ignored automatically, or can be ignored manually with `--ignore`.

Those are:

* Global variables. But static variables in classes do work, and so do enums.

* `operator<=>`

* Explicit object parameter (aka "deducing `this`").

## C

The C support is nearly perfect.

## C#

The C# support works well, but there are known minor bugs, such as [`std::vector<T *>` being unusable](https://github.com/MeshInspector/mrbind/issues/29).

## Python

The Python support works, but could use a rewrite, probably with [Nanobind](https://github.com/wjakob/nanobind) as a backend. Known issues include:

* Having to rebuild the modules for each minor Python version. We have [a Pybind fork](https://github.com/MeshInspector/mrbind-pybind11) that improves the situation somewhat, but it's not ideal.

* Const-correctness beind implemented crudely. Returning a const reference from a function makes a copy of the object to prevent Pybind from `const_cast`ing it into a mutable reference. Ideally we would replace it with the approach we currently use in C# (each class being split into a const half, and a mutable half inheriting from the const one).

* Some non-trivial initialization happening at module load. This doesn't cause slowdown in practice even in [a large library](https://meshlib.io/) MRBind was developer for, but is still not ideal.

* Macros being hard to support.

Most of those can be addressed by rewriting the Python backend to [Nanobind](https://github.com/wjakob/nanobind), without macros this time.

A const-correctness fix is possible without a rewrite, but difficult.

## JS

JS bindings are planned, with Embind as a backend. No timeline yet.

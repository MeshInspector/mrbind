#!/usr/bin/env bash

# Checks that the Python bindings don't depend on the link order of the fragment object files.
#
# The types are registered into the `Registry` by static initializers, whose order across the fragment
# TUs follows the link order, and the iteration order of the unordered containers in the registry
# depends on that insertion order. Since the topological type sort used to break ties by iteration
# order, merely relinking the same object files in a different order used to change the position of
# the `__init__` overloads injected from conversion operators (and with it pybind11's overload
# resolution) and the docstring alias lists. This script fails with a diff in that case.

set -euxo pipefail

if [[ "$(uname -o)" == Msys ]]; then
    EXT_MODULE=.pyd
    CXX=clang++
else
    EXT_MODULE=.so
    CXX=clang++-20
fi

OUT=test/order_check/output
mkdir -p "$OUT"

# Clone Pybind if missing:
[[ -d test/input_py/pybind11 ]] || git clone https://github.com/pybind/pybind11 test/input_py/pybind11

build/mrbind \
    test/order_check/input/MR/order.h \
    --format=macros \
    --ignore :: \
    --allow MR \
    --combine-types=cv,ref,ptr,smart_ptr \
    -o "$OUT/parsed.cpp" \
    -- \
    -xc++-header \
    -std=c++23 \
    -Wall \
    -Wextra \
    -pedantic-errors \
    -fparse-all-comments

# Compile as 4 fragments.
for i in 0 1 2 3; do
    impl=()
    [[ $i == 0 ]] && impl=(-DMB_DEFINE_IMPLEMENTATION)
    "$CXX" \
        "$OUT/parsed.cpp" \
        -c -fPIC -o "$OUT/frag_$i.o" \
        -DMB_NUM_FRAGMENTS=4 -DMB_FRAGMENT=$i "${impl[@]}" \
        -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' \
        -DMB_PB11_MODULE_NAME=example \
        -DPYBIND11_COMPILER_TYPE='"_myexample"' -DPYBIND11_BUILD_ABI='"_myexample"' \
        -I. \
        -Iinclude \
        -Itest/input_py/pybind11/include \
        -std=c++20 -Wall -Wextra \
        `python3-config --cflags`
done

# Link the same objects in two different orders.
mkdir -p "$OUT/ord1" "$OUT/ord2"
"$CXX" -shared -o "$OUT/ord1/example$EXT_MODULE" "$OUT"/frag_{0,1,2,3}.o `python3-config --ldflags --embed`
"$CXX" -shared -o "$OUT/ord2/example$EXT_MODULE" "$OUT"/frag_{0,3,2,1}.o `python3-config --ldflags --embed`

# Dump the ordering observables: the type registration log, and the docstrings of the class that
# receives the `__init__` overloads injected from the conversion operators.
for ord in ord1 ord2; do
    (cd "$OUT/$ord" && MRBIND_DEBUG=2 python3 -c '
import example
print(example.MR.Target.__doc__)
print(example.MR.Target.__init__.__doc__)
' 2>&1 | grep -E "mrbind: Registering type|Aliases:|__init__") >"$OUT/dump_$ord.txt"
done

diff "$OUT/dump_ord1.txt" "$OUT/dump_ord2.txt"

echo 'Success! Both link orders produce identically ordered bindings.'

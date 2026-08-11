#!/bin/bash

# See comments in `input.h` for what this checks.
# This script was originally written by Claude.

set -euxo pipefail

if [[ "$(uname -o)" == Msys ]]; then
    EXT_MODULE=.pyd
    CXX=clang++
else
    EXT_MODULE=.so
    CXX=clang++-20
fi

# `cd` to the script location.
cd "$(dirname "$BASH_SOURCE")"

# Clone Pybind if missing:
[[ -d pybind11 ]] || git clone https://github.com/pybind/pybind11

rm -rf out
mkdir -p out

../../build/mrbind \
    input.h \
    --format=macros \
    --ignore :: \
    --allow MR \
    --combine-types=cv,ref,ptr,smart_ptr \
    -o out/generated.cpp \
    -- \
    -xc++-header \
    -std=c++20 \
    -Wall \
    -Wextra \
    -pedantic-errors \
    -fparse-all-comments

PYTHON=${PYTHON:-python3}

for i in {0..3}; do
    frag_flags=""
    if [[ $i == 0 ]]; then
        frag_flags="-DMB_DEFINE_IMPLEMENTATION"
    fi

    "$CXX" \
        out/generated.cpp \
        -c -fPIC \
        -o "out/frag_$i.o" \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -DMB_NUM_FRAGMENTS=4 -DMB_FRAGMENT=$i $frag_flags \
        -I. \
        -I../../include \
        -Ipybind11/include \
        -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' \
        -DMB_PB11_MODULE_NAME=example \
        -DPYBIND11_COMPILER_TYPE='"_mrbind_example"' -DPYBIND11_BUILD_ABI='"_mrbind_example"' \
        $($PYTHON-config --cflags --embed)
done

# Link the same objects in two different orders.
mkdir -p out/{m1,m2}
"$CXX" -shared -o "out/m1/example$EXT_MODULE" out/frag_{0,1,2,3}.o $($PYTHON-config --ldflags --embed)
"$CXX" -shared -o "out/m2/example$EXT_MODULE" out/frag_{0,3,2,1}.o $($PYTHON-config --ldflags --embed)

# Dump the ordering observables: the type registration log, and the docstrings of the class that
# receives the `__init__` overloads injected from the conversion operators.
for m in m1 m2; do
    (cd "out/$m" && MRBIND_DEBUG=2 $PYTHON -c "import example; help(example.MR.Target); help(example.MR.Target.__init__)" 2>&1) >"out/$m/log.txt"
done

diff "out/m1/log.txt" "out/m2/log.txt"

echo 'Logs match!'

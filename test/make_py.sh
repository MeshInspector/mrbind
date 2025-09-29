set -euxo pipefail
shopt -s nullglob

echo test/input_py/MR/*.h | perl -pe 's|[\s\n]*test/([^\s\n]+)[\s\n]*|#include <\1>\n|g' >test/input_py/all.h

if [[ "$(uname -o)" == Msys ]]; then
    EXT_MODULE=.pyd
    CXX=clang++
else
    EXT_MODULE=.so
    CXX=clang++-20
fi

MRBIND_FLAGS=(
    test/input_py/all.h
    --format=macros
    --ignore ::
    --allow MR
    --combine-types=cv,ref,ptr,smart_ptr
    --
    -xc++-header
    -std=c++23
    -Wall
    -Wextra
    -pedantic-errors
    -fparse-all-comments
    -Itest
)


# Clone Pybind if missing:
[[ -d test/input_py/pybind11 ]] || git clone https://github.com/pybind/pybind11 test/input_py/pybind11


mkdir -p test/output_py

build/mrbind \
    -o test/output_py/parsed.cpp \
    "${MRBIND_FLAGS[@]}"

"$CXX" \
    test/output_py/parsed.cpp \
    -fPIC -shared -o "test/output_py/example$EXT_MODULE" \
    -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' \
    -DMB_PB11_MODULE_NAME=example \
    -DMB_DEFINE_IMPLEMENTATION \
    -DPYBIND11_COMPILER_TYPE='"_myexample"' -DPYBIND11_BUILD_ABI='"_myexample"' \
    -I. \
    -Iinclude \
    -Itest \
    -Itest/input_py/pybind11/include \
    -std=c++20 -Wall -Wextra -pedantic-errors \
    `python3-config --cflags`

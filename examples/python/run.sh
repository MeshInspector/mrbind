#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./python/clean.sh

mkdir -p python/output/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS="
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
"

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS="
"

# Those are optional tunable flags for the compilation.
EXTRA_CXX_FLAGS="
    -DMB_PB11_STRIPPED_NAMESPACES=\"Example\"
"

set -x


# Assemble the combined input header.
echo "#pragma once" >python/output/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>python/output/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    python/output/tmp/combined_input.h \
    --format=macros \
    -o python/output/tmp/generated.cpp \
    --ignore :: \
    --allow Example \
    $EXTRA_PARSER_FLAGS \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    -I. \
    $EXTRA_PARSER_CXX_FLAGS

# Clone Pybind, if it doesn't already exist.
if [[ ! -d pybind11 ]]; then
    git clone https://github.com/pybind/pybind11

    # This is the latest commit not affected by this bug: https://github.com/pybind/pybind11/issues/5976
    # If you don't care about that bug, or it doesn't reproduce for you, feel free to use the latest version.
    (cd pybind11 && git checkout 15d9dae14b148509f3e1e7a42d5b1260fffff3ad)
fi

# Compile the Python module.
# Note that the output filename must match the name passed to `-DMB_PB11_MODULE_NAME=`, minus the extension.
"$CLANG_CXX" \
    python/output/tmp/generated.cpp \
    -shared -fPIC \
    -o python/output/example.so \
    -std=c++20 \
    -Wall -Wextra -pedantic-errors \
    -I../include \
    -Ipybind11/include \
    -I. \
    -DMRBIND_HEADER='<mrbind/targets/pybind11.h>' \
    -DMB_PB11_MODULE_NAME=example \
    -DMB_DEFINE_IMPLEMENTATION \
    -DPYBIND11_COMPILER_TYPE='"_mrbind_example"' -DPYBIND11_BUILD_ABI='"_mrbind_example"' \
    $(pkg-config --cflags python3-embed) \
    $EXTRA_CXX_FLAGS

# Run a test program using the Python module.
PYTHONPATH=python/output python3 python/example_consumer.py

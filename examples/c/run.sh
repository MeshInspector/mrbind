#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./c/clean.sh

mkdir -p c/output/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS="
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
"

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS="
    --copy-inherited-members
"

# Those are optional tunable flags for the C generator.
EXTRA_GEN_FLAGS="
    --max-header-name-length 100
"

set -x

../build/mrbind \
    input.h \
    -o c/output/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    $EXTRA_PARSER_FLAGS \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    $EXTRA_PARSER_CXX_FLAGS

../build/mrbind_gen_c \
    --input c/output/tmp/parse_result.json \
    --output-header-dir c/output/include \
    --output-source-dir c/output/src \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path . . \
    --assume-include-dir .. \
    $EXTRA_GEN_FLAGS

SOURCES="$(find c/output/src -name *.cpp)"
LIBRARY=

if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    $CLANG_CXX \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Ic/output/include \
        -Ic/output/src \
        -I.. \
        $SOURCES \
        -shared \
        -o c/output/libexample.so

    LIBRARY=-lexample
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

gcc \
    -std=c11 -Wall -Wextra -pedantic-errors \
    c/example_consumer.c \
    -Ic/output/include \
    -Lc/output $LIBRARY \
    -o c/output/example_consumer

LD_LIBRARY_PATH=c/output c/output/example_consumer

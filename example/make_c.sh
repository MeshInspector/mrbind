#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR"

. _set_env_vars.sh

rm -rf output_c
mkdir -p output_c/tmp

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
    -o output_c/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    $EXTRA_PARSER_FLAGS \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    $EXTRA_PARSER_CXX_FLAGS

../build/mrbind_gen_c \
    --input output_c/tmp/parse_result.json \
    --output-header-dir output_c/include \
    --output-source-dir output_c/src \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path . . \
    --assume-include-dir .. \
    $EXTRA_GEN_FLAGS

SOURCES="$(find output_c/src -name *.cpp)"
LIBRARY=

if [[ $SOURCES ]]; then
    $CLANG_CXX \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Ioutput_c/include \
        -Ioutput_c/src \
        -I.. \
        $SOURCES \
        -shared \
        -o output_c/libexample.so

    LIBRARY=-lexample
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

gcc \
    -std=c99 -Wall -Wextra -pedantic-errors \
    run_example.c \
    -Ioutput_c/include \
    -Loutput_c $LIBRARY \
    -o run_example_c

LD_LIBRARY_PATH=output_c ./run_example_c

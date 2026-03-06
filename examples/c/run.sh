#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./c/clean.sh

mkdir -p c/output/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS=(
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
)

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS=(
    --copy-inherited-members
)

# Those are optional tunable flags for the C generator.
EXTRA_GEN_FLAGS=(
    --max-header-name-length 100
    --no-handle-exceptions
)

# Those are optional tunable flags for the library compilation.
EXTRA_CXX_FLAGS=(
    -g
)

# Those are optional tunable flags for the example program compilation.
EXTRA_C_FLAGS=(
    -g
)

set -x

# Assemble the combined input header.
echo "#pragma once" >c/output/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>c/output/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    c/output/tmp/combined_input.h \
    -o c/output/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    "${EXTRA_PARSER_FLAGS[@]}" \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    -I. \
    "${EXTRA_PARSER_CXX_FLAGS[@]}"

# Generate the C bindings.
../build/mrbind_gen_c \
    --input c/output/tmp/parse_result.json \
    --output-header-dir c/output/include \
    --output-source-dir c/output/src \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path input . \
    --assume-include-dir . \
    "${EXTRA_GEN_FLAGS[@]}"

# Find the generated source files.
# Those are C++ sources. Only the generated headers are C.
SOURCES="$(find c/output/src -name *.cpp)"
LIBRARY=

# Compile the generated sources into a library.
if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    "$CLANG_CXX" \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Ic/output/include \
        -Ic/output/src \
        -I. \
        $SOURCES \
        -shared \
        -fvisibility=hidden -fvisibility-inlines-hidden \
        -o c/output/libexample.so \
        "${EXTRA_CXX_FLAGS[@]}" \

    LIBRARY=-lexample
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

# Compile the test executable.
gcc \
    -std=c11 -Wall -Wextra -pedantic-errors \
    c/example_consumer.c \
    -Ic/output/include \
    -Lc/output $LIBRARY \
    -o c/output/example_consumer \
    "${EXTRA_C_FLAGS[@]}"

# Run the test executable.
LD_LIBRARY_PATH=c/output c/output/example_consumer

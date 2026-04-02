#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./js/clean.sh

mkdir -p js/output/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS=(
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
)

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS=(
)

# Those are optional tunable flags for the JS generator.
EXTRA_GEN_FLAGS=(
    --replace-name-prefix Example ::
)

# Those are optional tunable flags for the compilation.
EXTRA_CXX_FLAGS=(
    -sSTRICT --no-entry
    -sEXPORT_NAME=example
)

set -x


# Assemble the combined input header.
echo "#pragma once" >js/output/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>js/output/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    js/output/tmp/combined_input.h \
    -o js/output/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    "${EXTRA_PARSER_FLAGS[@]}" \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    -I. \
    "${EXTRA_PARSER_CXX_FLAGS[@]}"

# Parse the input header.
../build/mrbind_gen_js \
    --input js/output/tmp/parse_result.json \
    --output js/output/tmp/generated.cpp \
    "${EXTRA_GEN_FLAGS[@]}"

# Compile the JS module.
em++ \
    js/output/tmp/generated.cpp \
    -o js/output/module.mjs \
    -std=c++20 \
    -Wall -Wextra -pedantic-errors \
    -lembind \
    -I. \
    "${EXTRA_CXX_FLAGS[@]}"

# Run a test program using the js module.
node js/example_consumer.mjs

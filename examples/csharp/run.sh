#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./csharp/clean.sh

mkdir -p csharp/c_library/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS="
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
"

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS="
"

# Those are optional tunable flags for the C generator.
EXTRA_GEN_C_FLAGS="
    --max-header-name-length 100
"

# Those are optional tunable flags for the C# generator.
EXTRA_GEN_FLAGS="
"

set -x

../build/mrbind \
    input.h \
    -o csharp/c_library/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    --copy-inherited-members \
    $EXTRA_PARSER_FLAGS \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    $EXTRA_PARSER_CXX_FLAGS

../build/mrbind_gen_c \
    --input csharp/c_library/tmp/parse_result.json \
    --output-header-dir csharp/c_library/include \
    --output-source-dir csharp/c_library/src \
    --output-desc-json csharp/c_library/tmp/c_desc.json \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path . . \
    --assume-include-dir .. \
    --force-emit-common-helpers \
    $EXTRA_GEN_C_FLAGS

../build/mrbind_gen_csharp \
    --input-json csharp/c_library/tmp/c_desc.json \
    --output-dir csharp/csharp_library/src \
    --imported-lib-name example \
    --helpers-namespace Example \
    --force-namespace Example \
    $EXTRA_GEN_FLAGS

# The build step is only for clarity, since `dotnet run` below would do this automatically.
dotnet build csharp/csharp_library

SOURCES="$(find csharp/c_library/src -name *.cpp)"
LIBRARY=

if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    $CLANG_CXX \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Icsharp/c_library/include \
        -Icsharp/c_library/src \
        -I.. \
        $SOURCES \
        -shared \
        -o csharp/c_library/libexample.so

    LIBRARY=-lexample
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

LD_LIBRARY_PATH=csharp/c_library dotnet run --project csharp/example_consumer

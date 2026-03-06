#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./csharp/clean.sh

mkdir -p csharp/c_library/tmp

# Those are the Clang-style flags for the parser.
EXTRA_PARSER_CXX_FLAGS=(
    -std=c++20 -Wall -Wextra -pedantic-errors
    -fparse-all-comments
)

# Those are optional tunable flags for the parser.
EXTRA_PARSER_FLAGS=(
)

# Those are optional tunable flags for the C generator.
EXTRA_GEN_C_FLAGS=(
    --max-header-name-length 100
    --no-handle-exceptions
)

# Those are optional tunable flags for the C# generator.
EXTRA_GEN_FLAGS=(
)

# Those are optional tunable flags for the C bindings compilation.
EXTRA_CXX_FLAGS=(
    -g
)

set -x

# Assemble the combined input header.
echo "#pragma once" >csharp/c_library/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>csharp/c_library/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    csharp/c_library/tmp/combined_input.h \
    -o csharp/c_library/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    --copy-inherited-members \
    "${EXTRA_PARSER_FLAGS[@]}" \
    -- \
    -xc++-header \
    -resource-dir="$("$CLANG_CXX" -print-resource-dir)" \
    -I. \
    "${EXTRA_PARSER_CXX_FLAGS[@]}"

# Generate the C bindings, required by the C# bindings.
../build/mrbind_gen_c \
    --input csharp/c_library/tmp/parse_result.json \
    --output-header-dir csharp/c_library/include \
    --output-source-dir csharp/c_library/src \
    --output-desc-json csharp/c_library/tmp/c_desc.json \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path input . \
    --assume-include-dir . \
    --force-emit-common-helpers \
    "${EXTRA_GEN_C_FLAGS[@]}"

# Generate the C# bindings.
../build/mrbind_gen_csharp \
    --input-json csharp/c_library/tmp/c_desc.json \
    --output-dir csharp/library/src \
    --imported-lib-name example \
    --helpers-namespace Example \
    --force-namespace Example \
    "${EXTRA_GEN_FLAGS[@]}"

# Build the C# library.
# This is only done for clarity, since `dotnet run` below does this automatically.
dotnet build csharp/library

# Find the generated source files of the C bindings.
# Those are C++ sources. Only the generated headers are C.
SOURCES="$(find csharp/c_library/src -name *.cpp)"
LIBRARY=

# Compile the C bindings into a library. Using the C# bindings loads this library at runtime.
if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    "$CLANG_CXX" \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Icsharp/c_library/include \
        -Icsharp/c_library/src \
        -I. \
        $SOURCES \
        -shared \
        -fvisibility=hidden -fvisibility-inlines-hidden \
        -o csharp/c_library/libexample.so \
        "${EXTRA_CXX_FLAGS[@]}"

    LIBRARY=-lexample
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

# Run a test executable.
LD_LIBRARY_PATH=csharp/c_library dotnet run --project csharp/example_consumer

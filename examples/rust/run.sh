#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./rust/clean.sh

mkdir -p rust/c_library/tmp

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
)

# Those are optional tunable flags for the Rust generator.
EXTRA_GEN_FLAGS=(
)

# Those are optional tunable flags for the C bindings compilation.
EXTRA_CXX_FLAGS=(
    -g
)


SHARED_LIBRARY_EXT=.so
SHARED_LIBRARY_PREFIX=lib

# Need extra flags on MSYS2.
if [[ $(uname -o) == Msys ]]; then
    EXTRA_PARSER_CXX_FLAGS+=(--sysroot="$MSYSTEM_PREFIX")
    SHARED_LIBRARY_EXT=.dll
    SHARED_LIBRARY_PREFIX=
fi

set -x

# Assemble the combined input header.
echo "#pragma once" >rust/c_library/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>rust/c_library/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    rust/c_library/tmp/combined_input.h \
    -o rust/c_library/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    --copy-inherited-members \
    "${EXTRA_PARSER_FLAGS[@]}" \
    -- \
    -xc++-header \
    -resource-dir="${CLANG_RESOURCE_DIR:-$("$CLANG_CXX" -print-resource-dir)}" \
    -I. \
    "${EXTRA_PARSER_CXX_FLAGS[@]}"

# Generate the C bindings, required by the Rust bindings.
../build/mrbind_gen_c \
    --input rust/c_library/tmp/parse_result.json \
    --output-header-dir rust/c_library/include \
    --output-source-dir rust/c_library/src \
    --output-desc-json rust/c_library/tmp/c_desc.json \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path input . \
    --assume-include-dir . \
    --force-emit-common-helpers \
    "${EXTRA_GEN_C_FLAGS[@]}"

# Generate the Rust bindings. Only the sources are generated, `Cargo.toml` and `build.rs` are a part of this example.
../build/mrbind_gen_rust \
    --input-json rust/c_library/tmp/c_desc.json \
    --output-dir rust/library/src \
    --imported-lib-name example \
    --force-namespace Example \
    "${EXTRA_GEN_FLAGS[@]}"

# Build the Rust library.
# This is only done for clarity, since `cargo run` below does this automatically.
cargo build --manifest-path rust/library/Cargo.toml

# Find the generated source files of the C bindings.
# Those are C++ sources. Only the generated headers are C.
SOURCES="$(find rust/c_library/src -name *.cpp)"

# Compile the C bindings into a library. Using the Rust bindings loads this library at runtime.
if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    "$CLANG_CXX" \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Irust/c_library/include \
        -Irust/c_library/src \
        -I. \
        $SOURCES \
        -shared -fPIC \
        -fvisibility=hidden -fvisibility-inlines-hidden \
        -o rust/c_library/${SHARED_LIBRARY_PREFIX}example$SHARED_LIBRARY_EXT \
        "${EXTRA_CXX_FLAGS[@]}"
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

# Run a test executable. The `build.rs` of the library reads `EXAMPLE_LIB_DIR` to find the C bindings library at link time.
export EXAMPLE_LIB_DIR="$PWD/rust/c_library"
if [[ $(uname -o) == Msys ]]; then
    PATH="rust/c_library:$PATH" cargo run --manifest-path rust/example_consumer/Cargo.toml
else
    LD_LIBRARY_PATH=rust/c_library cargo run --manifest-path rust/example_consumer/Cargo.toml
fi

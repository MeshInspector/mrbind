#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

. _detail/set_env_vars.sh

./java/clean.sh

mkdir -p java/c_library/tmp

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

# Those are optional tunable flags for the Java generator.
EXTRA_GEN_FLAGS=(
)

# Those are optional tunable flags for the C bindings compilation.
EXTRA_CXX_FLAGS=(
    -g
)

# The JDK tools, from `JAVA_HOME` if it's set. Java 22 or newer is required.
JAVA_BIN="${JAVA_HOME:+$JAVA_HOME/bin/}"

SHARED_LIBRARY_EXT=.so
SHARED_LIBRARY_PREFIX=lib
CLASSPATH_SEP=:

# Need extra flags on MSYS2.
if [[ $(uname -o) == Msys ]]; then
    EXTRA_PARSER_CXX_FLAGS+=(--sysroot="$MSYSTEM_PREFIX")
    SHARED_LIBRARY_EXT=.dll
    SHARED_LIBRARY_PREFIX=
    CLASSPATH_SEP=';'
fi

set -x

# Assemble the combined input header.
echo "#pragma once" >java/c_library/tmp/combined_input.h
find input \( -name '*.h' -or -name '*.hpp' \) -printf "#include <%p>\n" >>java/c_library/tmp/combined_input.h

# Parse the input header.
../build/mrbind \
    java/c_library/tmp/combined_input.h \
    -o java/c_library/tmp/parse_result.json \
    --ignore :: \
    --allow Example \
    --copy-inherited-members \
    "${EXTRA_PARSER_FLAGS[@]}" \
    -- \
    -xc++-header \
    -resource-dir="${CLANG_RESOURCE_DIR:-$("$CLANG_CXX" -print-resource-dir)}" \
    -I. \
    "${EXTRA_PARSER_CXX_FLAGS[@]}"

# Generate the C bindings, required by the Java bindings.
../build/mrbind_gen_c \
    --input java/c_library/tmp/parse_result.json \
    --output-header-dir java/c_library/include \
    --output-source-dir java/c_library/src \
    --output-desc-json java/c_library/tmp/c_desc.json \
    --helper-name-prefix Example_ \
    --helper-macro-name-prefix EXAMPLE_ \
    --map-path input . \
    --assume-include-dir . \
    --force-emit-common-helpers \
    "${EXTRA_GEN_C_FLAGS[@]}"

# Generate the Java bindings.
../build/mrbind_gen_java \
    --input-json java/c_library/tmp/c_desc.json \
    --output-dir java/library/src \
    --package example \
    --imported-lib-name example \
    --force-namespace Example \
    "${EXTRA_GEN_FLAGS[@]}"

# Compile the Java bindings into a jar. The list of sources goes through a file, since there can be a lot of them.
find java/library/src -name '*.java' >java/library/sources.txt
"${JAVA_BIN}javac" --release 22 -Xlint:all -Werror -d java/library/classes @java/library/sources.txt
"${JAVA_BIN}jar" --create --file java/library/example.jar -C java/library/classes .

# Find the generated source files of the C bindings.
# Those are C++ sources. Only the generated headers are C.
SOURCES="$(find java/c_library/src -name *.cpp)"

# Compile the C bindings into a library. Using the Java bindings loads this library at runtime.
if [[ $SOURCES ]]; then
    # The C bindings can be compiled with any C++ compiler, not necessarily Clang.
    "$CLANG_CXX" \
        -std=c++20 -Wall -Wextra -pedantic-errors \
        -Ijava/c_library/include \
        -Ijava/c_library/src \
        -I. \
        $SOURCES \
        -shared -fPIC \
        -fvisibility=hidden -fvisibility-inlines-hidden \
        -o java/c_library/${SHARED_LIBRARY_PREFIX}example$SHARED_LIBRARY_EXT \
        "${EXTRA_CXX_FLAGS[@]}"
else
    echo "The generator didn't produce any source files that need to be compiled."
fi

# Compile and run a test program. The C bindings library is found in `java.library.path`.
"${JAVA_BIN}javac" --release 22 -Xlint:all -Werror -cp java/library/example.jar -d java/example_consumer/classes java/example_consumer/Main.java
"${JAVA_BIN}java" --enable-native-access=ALL-UNNAMED -Djava.library.path=java/c_library -cp "java/library/example.jar${CLASSPATH_SEP}java/example_consumer/classes" Main

# This assumes that `make_c.sh` was already ran.
# Needs a JDK 22 or newer (`javac` and `java` in PATH, or `JAVA_HOME` set).

set -euxo pipefail
shopt -s nullglob

JAVA_BIN="${JAVA_HOME:+$JAVA_HOME/bin/}"

# The class names are shortened more than by default: the output paths here are long already,
# and Windows checkouts of this repo as a submodule are limited to 260 characters per path.
build/mrbind_gen_java \
    --input-json test/output_c/desc.json \
    --output-dir test/output_java/src \
    --clean-output-dir \
    --package mrbind_test \
    --force-namespace MR::CS \
    --imported-lib-name bleh \
    --max-class-name-length 64 \

build/mrbind_gen_java \
    --input-json test/output_c_fixed_typedefs/desc.json \
    --output-dir test/output_java_fixed_typedefs/src \
    --clean-output-dir \
    --package mrbind_test \
    --force-namespace MR::CS \
    --imported-lib-name bleh \
    --max-class-name-length 64 \
    --imported-split-lib-name MR_A_ bleh_A \
    --imported-split-lib-name MR_B_ bleh_B \
    --imported-split-lib-name MR_AB_ bleh_AB \

build/mrbind_gen_java \
    --input-json test/output_c_fixed_typedefs_64_only/desc.json \
    --output-dir test/output_java_fixed_typedefs_64_only/src \
    --clean-output-dir \
    --package mrbind_test \
    --force-namespace MR::CS \
    --imported-lib-name bleh \
    --max-class-name-length 64 \
    --imported-split-lib-name MR_AB_ bleh_AB \

# Compile each output. `javac` reads the list of sources from a file, the command line would be too long otherwise.
for dir in test/output_java test/output_java_fixed_typedefs test/output_java_fixed_typedefs_64_only; do
    rm -rf "$dir/classes"
    find "$dir/src" -name '*.java' >"$dir/sources.txt"
    "${JAVA_BIN}javac" --release 22 -Xlint:all -Werror -d "$dir/classes" "@$dir/sources.txt"
done

# The test program loads `libbleh.so` (or `bleh.dll` on Windows) at runtime, from `java.library.path`.
rm -rf test/run_java/classes
"${JAVA_BIN}javac" --release 22 -Xlint:all -Werror -d test/run_java/classes -cp test/output_java/classes test/run_java/Main.java
PATH="$PWD/test/output_c:$PATH" "${JAVA_BIN}java" --enable-native-access=ALL-UNNAMED -Djava.library.path=test/output_c -cp "test/output_java/classes:test/run_java/classes" Main

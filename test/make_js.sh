# This assumes that `make_c.sh` was already ran.
# Needs the Emscripten SDK (`em++` in PATH) and Node 22 or newer (`node` in PATH) to compile and run the test program.

set -euxo pipefail
shopt -s nullglob

# The file names are shortened more than by default: the output paths here are long already,
# and Windows checkouts of this repo as a submodule are limited to 260 characters per path.
build/mrbind_gen_js \
    --input-json test/output_c/desc.json \
    --output-dir test/output_js \
    --clean-output-dir \
    --force-namespace MR::CS \
    --wasm-module ./bleh.mjs \
    --max-file-name-length 64 \

build/mrbind_gen_js \
    --input-json test/output_c_fixed_typedefs/desc.json \
    --output-dir test/output_js_fixed_typedefs \
    --clean-output-dir \
    --force-namespace MR::CS \
    --wasm-module ./bleh.mjs \
    --max-file-name-length 64 \

build/mrbind_gen_js \
    --input-json test/output_c_fixed_typedefs_64_only/desc.json \
    --output-dir test/output_js_fixed_typedefs_64_only \
    --clean-output-dir \
    --force-namespace MR::CS \
    --wasm-module ./bleh.mjs \
    --max-file-name-length 64 \

# The C bindings of the first output, compiled to wasm with the link flags the generator wrote (the exported functions go separately,
# since `@file` is relative to the current directory).
# Some test functions are declared but never defined, hence `-sERROR_ON_UNDEFINED_SYMBOLS=0` (they abort if called).
# `bleh.mjs` isn't committed, only the generated JS is.
em++ \
    test/output_c/source/*.cpp \
    test/output_c/source/*/*.cpp \
    -o test/output_js/bleh.mjs \
    -Itest/output_c/include \
    -Itest/output_c/source \
    -Itest \
    -isystemtest/input/parallel-hashmap \
    -std=c++23 \
    -O1 \
    -fexceptions \
    -sMODULARIZE=1 \
    -sEXPORT_ES6=1 \
    -sALLOW_MEMORY_GROWTH=1 \
    -sENVIRONMENT=node \
    -Wno-deprecated-copy \
    -Wno-deprecated-declarations \
    @test/output_js/emcc_link_flags.rsp \
    -sEXPORTED_FUNCTIONS=@test/output_js/exported_functions.txt

node test/run_js/main.mjs

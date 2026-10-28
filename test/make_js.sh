# This assumes that `make_c.sh` was already ran.
# Needs the Emscripten SDK (`em++` in PATH) and Node 24 or newer (`node` in PATH) to compile and run the test program.

set -euxo pipefail
shopt -s nullglob

if [[ "$(uname -o)" == Msys ]]; then
    CXX=clang++
else
    CXX=clang++-22
fi

# The committed outputs, generated from the committed C outputs.
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
    --input-json test/output_c/desc.json \
    --output-dir test/output_js64 \
    --clean-output-dir \
    --force-namespace MR::CS \
    --wasm-module ./bleh.mjs \
    --max-file-name-length 64 \
    --wasm64 \

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


# The test program runs against the C bindings compiled to wasm, which needs a parse that targets wasm32 (`long` is 32-bit there,
# so the host-parsed outputs don't compile for it). Those outputs aren't committed.
EM_SYSROOT="$("$(dirname "$(command -v em++)")/em-config" CACHE)/sysroot"

mkdir -p test/output_c_wasm
build/mrbind \
    -o test/output_c_wasm/parsed.json \
    --copy-inherited-members \
    --infer-lifetime-constructors \
    --default-args=as-is \
    --canonicalize-long-to-size_t \
    --canonicalize-64-to-fixed-size-typedefs \
    test/input/all.h \
    --format=json \
    --ignore :: \
    --allow MR \
    --combine-types=cv,ref,ptr,smart_ptr \
    --ignore MR::SignatureFilters::B --skip-mentions-of MR::SignatureFilters::B \
    --ignore MR::SignatureFilters::AA --skip-mentions-of '/MR::SignatureFilters::AA<.*>/' \
    --skip-mentions-of UsingDecls_IgnoreMentionsOf \
    --implicit-enum-underlying-type-is-always-int \
    -- \
    -xc++-header \
    -std=c++23 \
    -Wall \
    -Wextra \
    -pedantic-errors \
    -fparse-all-comments \
    -Itest \
    -isystemtest/input/parallel-hashmap \
    -Iinclude \
    -DPARSING_FOR_C_BINDINGS \
    -DDISABLE_LONG_LONG \
    --target=wasm32-unknown-emscripten \
    -stdlib=libc++ \
    --sysroot="$EM_SYSROOT" \
    -isystem "$EM_SYSROOT/include/compat" \
    -resource-dir="$("$CXX" -print-resource-dir)"

build/mrbind_gen_c \
    --input test/output_c_wasm/parsed.json \
    --output-header-dir test/output_c_wasm/include \
    --output-source-dir test/output_c_wasm/source \
    --output-desc-json test/output_c_wasm/desc.json \
    --map-path test/input . \
    --assume-include-dir test \
    --clean-output-dirs \
    --helper-name-prefix MR_C_ \
    --max-header-name-length 100 \
    --expose-as-struct MR::MatchingLayout::A \
    --expose-as-struct /MR::MatchingLayout::B/ \
    --expose-as-struct '/MR::DeclOrder::.*/' \
    --expose-as-struct MR::StdContainers::SimpleStruct \
    --expose-as-struct MR::StdContainers::StructWithArray \
    --expose-as-struct MR::CSharp::ExposedLayout \
    --expose-as-struct MR::CSharp::ExposedLayoutSh \
    --expose-as-struct MR::CSharp::ExposedLayoutB \
    --expose-as-struct MR::CSharp::ExposedLayoutC \
    --expose-as-struct MR::CSharp::NameConflictsExposed \
    --expose-as-struct MR::CSharp::NameConflictsExposed::A \
    --expose-as-struct MR::CSharp::ConstNonconstConflicts \
    --expose-as-struct MR::CSharp::ConvCtorExposed \
    --force-emit-common-helpers \

# wasm32 and wasm64 (`-sMEMORY64`) variants of the runtime test. Some test functions are declared but never defined,
# hence `-sERROR_ON_UNDEFINED_SYMBOLS=0` (they abort if called). The exported functions go separately from the response file,
# since `@file` is relative to the current directory.
for VARIANT in wasm wasm64; do
    if [[ $VARIANT == wasm64 ]]; then
        EXTRA_GEN_FLAGS=(--wasm64)
        EXTRA_EMCC_FLAGS=(-sMEMORY64=1)
    else
        EXTRA_GEN_FLAGS=()
        EXTRA_EMCC_FLAGS=()
    fi

    build/mrbind_gen_js \
        --input-json test/output_c_wasm/desc.json \
        --output-dir test/output_js_$VARIANT \
        --clean-output-dir \
        --force-namespace MR::CS \
        --wasm-module ./bleh.mjs \
        --max-file-name-length 64 \
        "${EXTRA_GEN_FLAGS[@]}"

    em++ \
        test/output_c_wasm/source/*.cpp \
        test/output_c_wasm/source/*/*.cpp \
        -o test/output_js_$VARIANT/bleh.mjs \
        -Itest/output_c_wasm/include \
        -Itest/output_c_wasm/source \
        -Itest \
        -isystemtest/input/parallel-hashmap \
        -std=c++23 \
        -O1 \
        -fexceptions \
        -sMODULARIZE=1 \
        -sEXPORT_ES6=1 \
        -sALLOW_MEMORY_GROWTH=1 \
        -sENVIRONMENT=node \
        -sERROR_ON_UNDEFINED_SYMBOLS=0 \
        -Wno-deprecated-copy \
        -Wno-deprecated-declarations \
        "${EXTRA_EMCC_FLAGS[@]}" \
        @test/output_js_$VARIANT/emcc_link_flags.rsp \
        -sEXPORTED_FUNCTIONS=@test/output_js_$VARIANT/exported_functions.txt

    MRBIND_JS_OUT=output_js_$VARIANT node test/run_js/main.mjs
done

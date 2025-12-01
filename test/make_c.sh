set -euxo pipefail
shopt -s nullglob

if [[ "$(uname -o)" == Msys ]]; then
    EXT_SHARED=.dll
    CXX=clang++
else
    EXT_SHARED=.so
    CXX=clang++-20
fi

# Clone phmap if missing:
[[ -d test/input/parallel-hashmap ]] || git clone https://github.com/greg7mdp/parallel-hashmap test/input/parallel-hashmap

echo test/input/MR/*.h | perl -pe 's|[\s\n]*test/([^\s\n]+)[\s\n]*|#include <\1>\n|g' >test/input/all.h


MRBIND_FLAGS=(
    test/input/all.h
    --format=json
    --ignore ::
    --allow MR
    --combine-types=cv,ref,ptr,smart_ptr
    --ignore MR::SignatureFilters::B --skip-mentions-of MR::SignatureFilters::B
    --ignore MR::SignatureFilters::AA --skip-mentions-of '/MR::SignatureFilters::AA<.*>/'
    --skip-mentions-of UsingDecls_IgnoreMentionsOf
    --implicit-enum-underlying-type-is-always-int
    --
    -xc++-header
    -std=c++23
    -Wall
    -Wextra
    -pedantic-errors
    -fparse-all-comments
    -Itest
    -isystemtest/input/parallel-hashmap
    -Iinclude
)

MRBIND_GEN_C_FLAGS=(
    --map-path test/input .
    --assume-include-dir test
    --clean-output-dirs
    --helper-name-prefix MR_C_
    --max-header-name-length 100
    --expose-as-struct MR::MatchingLayout::A
    --expose-as-struct /MR::MatchingLayout::B/
    --expose-as-struct '/MR::DeclOrder::.*/'
    --expose-as-struct MR::StdContainers::SimpleStruct
    --expose-as-struct MR::StdContainers::StructWithArray
    --expose-as-struct MR::CSharp::ExposedLayout
    --expose-as-struct MR::CSharp::ExposedLayoutSh
    --expose-as-struct MR::CSharp::ExposedLayoutB
)

COMPILER_FLAGS=(
    -fPIC
    -shared
    -Itest
    -std=c++23
    -Werror
    -Wall
    -Wextra
    -pedantic-errors
    -Wdeprecated
    -Wextra-semi
    -Wimplicit-fallthrough
    -Wconversion
    -Wno-implicit-int-float-conversion
    -isystemtest/input/parallel-hashmap
)


mkdir -p test/output_c
mkdir -p test/output_c_fixed_typedefs
mkdir -p test/output_c_fixed_typedefs_64_only


build/mrbind \
    -o test/output_c/parsed.json \
    --copy-inherited-members \
    "${MRBIND_FLAGS[@]}"

build/mrbind_gen_c \
    --input test/output_c/parsed.json \
    --output-header-dir test/output_c/include \
    --output-source-dir test/output_c/source \
    --output-desc-json test/output_c/desc.json \
    "${MRBIND_GEN_C_FLAGS[@]}" \
    --bind-shared-ptr-virally \
    --force-emit-common-helpers \

build/mrbind \
    -o test/output_c_fixed_typedefs/parsed.json \
    --canonicalize-to-fixed-size-typedefs \
    --canonicalize-size_t-to-uint64_t \
    "${MRBIND_FLAGS[@]}" \
    -DDISABLE_LONG_LONG

# Here `--merge-std-and-tl-expected` (and everything below) is unrelated to the fixed-size typedefs, but we need to test it too, so why not here.
build/mrbind_gen_c \
    --input test/output_c_fixed_typedefs/parsed.json \
    --output-header-dir test/output_c_fixed_typedefs/include \
    --output-source-dir test/output_c_fixed_typedefs/source \
    --output-desc-json test/output_c_fixed_typedefs/desc.json \
    "${MRBIND_GEN_C_FLAGS[@]}" \
    --reject-long-and-long-long \
    --use-size_t-typedef-for-uint64_t \
    --merge-std-and-tl-expected \
    --adjust-comments 's|/// |// |g' \
    --add-convenience-includes \
    --preferred-max-num-aggregate-init-fields 8

# This third build is to test the `--canonicalize-64-to-fixed-size-typedefs` variant of the typedefs (64 bits only).
build/mrbind \
    -o test/output_c_fixed_typedefs_64_only/parsed.json \
    --canonicalize-64-to-fixed-size-typedefs \
    --canonicalize-size_t-to-uint64_t \
    --copy-inherited-members \
    "${MRBIND_FLAGS[@]}" \
    -DDISABLE_LONG_LONG

# No `--output-desc-json` here, just to test that omitting it isn't broken.
build/mrbind_gen_c \
    --input test/output_c_fixed_typedefs_64_only/parsed.json \
    --output-header-dir test/output_c_fixed_typedefs_64_only/include \
    --output-source-dir test/output_c_fixed_typedefs_64_only/source \
    "${MRBIND_GEN_C_FLAGS[@]}" \
    --reject-long-and-long-long \
    --use-size_t-typedef-for-uint64_t \
    --bind-shared-ptr-virally \
    --force-emit-common-helpers


"$CXX" \
    test/output_c/source/*.cpp \
    test/output_c/source/MR/*.cpp \
    -o test/output_c/libbleh$EXT_SHARED \
    -Itest/output_c/include \
    -Itest/output_c/source \
    "${COMPILER_FLAGS[@]}"

"$CXX" \
    test/output_c_fixed_typedefs/source/*.cpp \
    test/output_c_fixed_typedefs/source/MR/*.cpp \
    -o test/output_c_fixed_typedefs/libbleh$EXT_SHARED \
    -Itest/output_c_fixed_typedefs/include \
    -Itest/output_c_fixed_typedefs/source \
    "${COMPILER_FLAGS[@]}"

"$CXX" \
    test/output_c_fixed_typedefs_64_only/source/*.cpp \
    test/output_c_fixed_typedefs_64_only/source/MR/*.cpp \
    -o test/output_c_fixed_typedefs_64_only/libbleh$EXT_SHARED \
    -Itest/output_c_fixed_typedefs_64_only/include \
    -Itest/output_c_fixed_typedefs_64_only/source \
    "${COMPILER_FLAGS[@]}"

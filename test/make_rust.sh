# This assumes that `make_c.sh` was already ran.

set -euxo pipefail
shopt -s nullglob

build/mrbind_gen_rust \
    --input-json test/output_c/desc.json \
    --output-dir test/output_rust/src \
    --clean-output-dir \
    --force-namespace MR::CS \
    --imported-lib-name bleh \

build/mrbind_gen_rust \
    --input-json test/output_c_fixed_typedefs/desc.json \
    --output-dir test/output_rust_fixed_typedefs/src \
    --clean-output-dir \
    --force-namespace MR::CS \
    --imported-lib-name bleh \
    --imported-split-lib-name MR_A_ bleh_A \
    --imported-split-lib-name MR_B_ bleh_B \
    --imported-split-lib-name MR_AB_ bleh_AB \

build/mrbind_gen_rust \
    --input-json test/output_c_fixed_typedefs_64_only/desc.json \
    --output-dir test/output_rust_fixed_typedefs_64_only/src \
    --clean-output-dir \
    --force-namespace MR::CS \
    --imported-lib-name bleh \
    --imported-split-lib-name MR_AB_ bleh_AB \

cargo build --manifest-path test/output_rust/Cargo.toml
cargo build --manifest-path test/output_rust_fixed_typedefs/Cargo.toml
cargo build --manifest-path test/output_rust_fixed_typedefs_64_only/Cargo.toml

# The test program links against `libbleh.so` (or `bleh.dll` on Windows), and needs to find it at runtime.
BLEH_LIB_DIR="$PWD/test/output_c" LD_LIBRARY_PATH="$PWD/test/output_c${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}" PATH="$PWD/test/output_c:$PATH" cargo run --manifest-path test/run_rust/Cargo.toml

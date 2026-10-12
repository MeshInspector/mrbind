# This assumes that `make_c.sh` was already ran.

set -euxo pipefail
shopt -s nullglob

build/mrbind_gen_rust \
    --input-json test/output_c/desc.json \
    --output-dir test/output_rust \
    --clean-output-dir \
    --imported-lib-name bleh \
    --crate-name mrbind_test_bindings \

cargo build --manifest-path test/output_rust/Cargo.toml

# The test program needs to find `libbleh.so` (or `bleh.dll` on Windows) at runtime.
LD_LIBRARY_PATH="$PWD/test/output_c${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}" PATH="$PWD/test/output_c:$PATH" cargo run --manifest-path test/run_rust/Cargo.toml

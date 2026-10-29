# This assumes that `make_c.sh` was already ran.
# Builds the Python bindings over the C bindings (`mrbind_gen_python`) for `test/output_c`, and runs the smoke test.
# Needs the Python headers (`python3-config`).

set -euxo pipefail

if [[ "$(uname -o)" == Msys ]]; then
    EXT_MODULE=.pyd
    CXX=clang++
else
    EXT_MODULE=.so
    CXX=clang++-22
fi

rm -rf test/output_python_c
build/mrbind_gen_python \
    --input-json test/output_c/desc.json \
    --output-dir test/output_python_c/src \
    --clean-output-dir \
    --module-name mrbind_test \
    --replace-namespace MR :: \
    --adjust-name '\bMR::' '' \

# The limited API, so one module serves every Python version.
"$CXX" \
    test/output_python_c/src/mrbind_test.cpp \
    -o "test/output_python_c/mrbind_test$EXT_MODULE" \
    -shared -fPIC -std=c++20 -O1 -Wall -Wextra -Wno-missing-field-initializers -Wno-unused-parameter -Wno-cast-function-type-mismatch \
    -DPy_LIMITED_API=0x03080000 \
    -Itest/output_python_c/src \
    -Itest/output_c/include \
    $(python3-config --includes) \
    -Ltest/output_c -lbleh \
    -Wl,-rpath,"$PWD/test/output_c"

PYTHONPATH=test/output_python_c python3 test/run_python_c/main.py
python3 scripts/python_api_dump.py dump mrbind_test --path test/output_python_c --strip mrbind_test. -o test/output_python_c/api.json

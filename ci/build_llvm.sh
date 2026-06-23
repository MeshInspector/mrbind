#!/bin/bash
set -e

SRC_DIR=${1:-llvm-src/llvm}
BUILD_DIR=llvm-build
OUT_DIR=llvm-out

# triples may fail to be auto-detected correctly in some cases
HOST_TRIPLE="$(uname -m)-unknown-linux-gnu"

cmake -G Ninja -S "$SRC_DIR" -B "$BUILD_DIR" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX="$OUT_DIR" \
    -DCMAKE_INSTALL_LIBDIR=lib \
    -DLLVM_ENABLE_PROJECTS=clang \
    -DLLVM_TARGETS_TO_BUILD="Native" \
    -DLLVM_HOST_TRIPLE="$HOST_TRIPLE" \
    -DLLVM_DEFAULT_TARGET_TRIPLE="$HOST_TRIPLE" \
    -DBUILD_SHARED_LIBS=OFF \
    -DLLVM_BUILD_LLVM_DYLIB=OFF \
    -DLLVM_LINK_LLVM_DYLIB=OFF \
    -DLLVM_ENABLE_PIC=ON \
    -DLLVM_ENABLE_RTTI=OFF \
    -DLLVM_ENABLE_EH=OFF \
    -DLLVM_ENABLE_ASSERTIONS=OFF \
    -DLLVM_ENABLE_ZLIB=OFF \
    -DLLVM_ENABLE_ZSTD=OFF \
    -DLLVM_ENABLE_TERMINFO=OFF \
    -DLLVM_ENABLE_LIBXML2=OFF \
    -DLLVM_ENABLE_LIBEDIT=OFF \
    -DLLVM_ENABLE_LIBPFM=OFF \
    -DLLVM_ENABLE_CURL=OFF \
    -DLLVM_ENABLE_HTTPLIB=OFF \
    -DLLVM_INCLUDE_TESTS=OFF \
    -DLLVM_INCLUDE_EXAMPLES=OFF \
    -DLLVM_INCLUDE_BENCHMARKS=OFF \
    -DLLVM_INCLUDE_DOCS=OFF \
    -DCLANG_INCLUDE_TESTS=OFF \
    -DCLANG_INCLUDE_DOCS=OFF \
    -DCLANG_ENABLE_ARCMT=OFF \
    -DCLANG_ENABLE_STATIC_ANALYZER=OFF \
    "-DCMAKE_C_FLAGS=-ffunction-sections -fdata-sections" \
    "-DCMAKE_CXX_FLAGS=-ffunction-sections -fdata-sections"
ninja -C "$BUILD_DIR" -j$(nproc) clangTooling

COMPONENTS="llvm-headers;clang-headers;clang-resource-headers;cmake-exports;clang-cmake-exports"
for LIB in "$BUILD_DIR"/lib/lib*.a ; do
    LIBNAME="$(basename "$LIB" .a)"
    COMPONENTS="$COMPONENTS;${LIBNAME#lib}"
done
cmake -S "$SRC_DIR" -B "$BUILD_DIR" -DLLVM_DISTRIBUTION_COMPONENTS="$COMPONENTS"
ninja -C "$BUILD_DIR" -j$(nproc) install-distribution

#!/usr/bin/env bash
set -eo pipefail

LLVM_VERSION="${1:-22.1.0}"
LLVM_URL="https://github.com/llvm/llvm-project/releases/download/llvmorg-${LLVM_VERSION}/llvm-project-${LLVM_VERSION}.src.tar.xz" 

OUT_DIR="${2:-llvm-src}"

mkdir -p "$OUT_DIR"
curl -fL "$LLVM_URL" | tar -xJ --strip-components=1 -C "$OUT_DIR"

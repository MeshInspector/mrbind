#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

rm -rf rust/c_library rust/library/{src,target,Cargo.lock} rust/example_consumer/{target,Cargo.lock}

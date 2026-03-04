#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR/.."

rm -rf csharp/c_library csharp/library/{src,bin,obj} csharp/example_consumer/{bin,obj}

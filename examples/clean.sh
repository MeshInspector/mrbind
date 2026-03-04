#!/bin/bash

SCRIPT_DIR="$(dirname "$BASH_SOURCE")"
cd "$SCRIPT_DIR"

c/clean.sh
csharp/clean.sh
python/clean.sh

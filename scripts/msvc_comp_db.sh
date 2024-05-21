#!/bin/bash

# A simple script that examines MSVC logs (recursively looks for them in the current directory)
# and generates `compile_commands.json` from them, again in the current directory.
#
# $1 is the build mode (Debug or Release, usually)
# $2 is the compiler name (possibly with extra flags) to insert into the resulting json.
#    If it doesn't look like `cl`` or `clang-cl`, will try to convert arguments to GCC style.
#
# Example usage:
# * Raw commands:       msvc_comp_db Debug cl
# * GCC-style commands: msvc_comp_db Debug 'clang++ --target=x86_64-pc-windows-gnu -std=c++20'

# Sometimes the output can contain stale records from deleted files.
# To fix, delete the logs using: find -wholename '**/x64/Debug/**/CL.command.1.tlog' -delete
# and rebuild in Visual Studio to regenerate the logs.

# To fetch the unescaped command for a file, use e.g. this command:
# jq 'map(select(.file == "C:\\...\\FILE.CPP")) | .[].command' -r compile_commands.json

if [[ $# != 2 ]]
then
    echo 'Expected two arguments: the build mode (e.g. Debug or Release) and the target compiler name (e.g. `cl`, `clang++`) (optionally followed by flags).' >&2
    exit 1
fi

SCRIPT_DIR="$(dirname -- "${BASH_SOURCE[0]}")"
CUR_DIR="$(pwd)"

find -wholename '**/x64/'"$1"'/**/CL.command.1.tlog' -print0 | \
    xargs -0 -i bash -c 'iconv -f UTF-16 -t UTF-8 {} | gawk -vcxx='"'$2'"' -f '"$SCRIPT_DIR"'/parse_vs_logs.awk' | \
    jq -sS --arg pwd "$CUR_DIR" '.[] |= (.directory = $pwd)' >compile_commands.json

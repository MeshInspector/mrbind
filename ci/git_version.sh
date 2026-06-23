#!/bin/sh
set -e

if tag=$(git describe --tags --abbrev=0 --match 'v*' 2>/dev/null); then
  count=$(git rev-list --count "${tag}..HEAD")
else
  # no reachable version tag, fall back to the CMake default (0.0.0).
  tag="v0.0.0"
  count=$(git rev-list --count HEAD 2>/dev/null || echo 0)
fi

printf '%s-%s\n' "$tag" "$count"

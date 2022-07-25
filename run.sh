#!/usr/bin/env bash
set -eo pipefail
node packages/cli/index.js "$1" | node --input-type=module - "${@:2}"
